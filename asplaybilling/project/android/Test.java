

import android.util.Log;
import org.haxe.nme.GameActivity;
import android.content.Context;
import android.app.Activity;
import android.content.Intent;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.net.Uri;
import java.util.List;
import java.util.ArrayList;

import util.IabHelper;
import util.IabResult;
import util.Inventory;
import util.Purchase;
import util.InAppListener;

public class Test extends GameActivity
{
		private static AlertDialog.Builder testAlert = null;
		private static Context context = GameActivity.getContext();
		private static GameActivity activity = GameActivity.getInstance();
		private static InAppListener iapActivity;

		private static boolean mIsPremium = false;

		//private static final String IAP_UPGRADE = "com.ancientsheep.molewordlite.upgrade";
		private static final String IAP_UPGRADE = "android.test.canceled";
		// (arbitrary) request code for the purchase flow
    	private static final int RC_REQUEST = 10001;

		//google iap helper object
    	private static IabHelper mHelper;

    	public static void alertUser(String message)
		{
			// Oh noes, there was a problem.
            AlertDialog.Builder builder = new AlertDialog.Builder(context);
			builder.setMessage(message)
			.setCancelable(false)
			.setNegativeButton("OK", new DialogInterface.OnClickListener()
			{
					public void onClick(DialogInterface dialog, int id)
					{
						dialog.cancel();
					}
			});

			AlertDialog alert = builder.create();
			alert.show();
		}

        public static void setupIAP()
        {
        	Log.i("setupIAP","Error - Please put your app's public key in MainActivity.java. See README.");


        	//Intent photoPickerIntent = new Intent(getInstance(),InAppListenerZ);
	   	 	//photoPickerIntent.setType("image/*");
	   	 	getInstance().startActivityForResult(photoPickerIntent, 1);*/

        	getInstance().runOnUiThread(new Runnable()
        	{
				public void run()
				{
					

					String base64EncodedPublicKey = "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAhclf0ncyP39eQiotD2wyFbgCRSZ5J40+0Z80Eh+kVNesl8p/LZCQYx+UIw9oWKpryOLKYu6mXatyLOF59GK/PUeVWv/CNQeIt3IqCYyNs5XllTygej6uBKeonqSsfr99eqfu6w5mjRnjc8Fh7X3lAp+qM5A2dn95BuTbxs1UBmSakPhKU6yGGNIsb1tAiIdOB2C9bnTQAsTH8K6dQWn4mteTA5qkqcoGrE9xyV48siVCce+hot1Y9w1I8O8x93fDd2/l327GmDz8P8jEbDG7GAMvXtQhTj4tW68Y7W99R0ZfcG4y8gSORgF5U6l5j7zFvi8rnp+8aJR+LJqqe57pbwIDAQAB";

			        Log.d("Test", "Creating IAB helper.");
        			mHelper = new IabHelper(activity, base64EncodedPublicKey);
        			mHelper.enableDebugLogging(true);

        			mHelper.startSetup(new IabHelper.OnIabSetupFinishedListener()
        			{
			            public void onIabSetupFinished(IabResult result)
			            {
			           

			                if (!result.isSuccess()) {
			                    // Oh noes, there was a problem.
			                    alertUser("Setup failed - "+result);
			                    return;
			                }

			                // Hooray, IAB is fully set up. Now, let's get an inventory of stuff we own.
			                alertUser("Setup complete!");



			                List<String> skuList = new ArrayList<String>();
			                skuList.add(IAP_UPGRADE);

							//query inventory
							//mHelper.queryInventoryAsync(true,skuList,mGotInventoryListener);
							mHelper.queryInventoryAsync(mGotInventoryListener);
			            }
			        });
	

        			
			    }

			    // Listener that's called when we finish querying the items and subscriptions we own
			    IabHelper.QueryInventoryFinishedListener mGotInventoryListener = new IabHelper.QueryInventoryFinishedListener() {
			        public void onQueryInventoryFinished(IabResult result, Inventory inventory) {
			            
			            if (result.isFailure()) {
			                alertUser("Failed to query inventory: " + result);
			                return;
			            }

			            

			            //String	upgradePrice = inventory.getSkuDetails(IAP_UPGRADE).getPrice();

			            //alertUser("Setup inventory complete!! Upgrade Price: "+upgradePrice+" Result: "+result);
			            //alertUser("Setup inventory complete!! Upgrade Price: Unknown");

			            //check for elite
			            Purchase premiumPurchase = inventory.getPurchase(IAP_UPGRADE);
			            mIsPremium = (premiumPurchase != null && verifyDeveloperPayload(premiumPurchase));
			            //alertUser("User is " + (mIsPremium ? "PREMIUM" : "NOT PREMIUM"));

			            //do purchase
			            doPurchase();
			        }
			    };

			    /** Verifies the developer payload of a purchase. */
			    boolean verifyDeveloperPayload(Purchase p) {
			        String payload = p.getDeveloperPayload();
			        
			        return true;
			    }

			    public void doPurchase()
			    {
			    	alertUser("doPurchase called!");

			    	String payload = "";


			    	//Intent i = new Intent(this, InAppListener.class);
					//startActivityForResult(i, 1);

					

			    	mHelper.launchPurchaseFlow(getInstance(), IAP_UPGRADE, RC_REQUEST, 
               		mPurchaseFinishedListener, payload);
			    }

			    //Purchase handler
			    // Callback for when a purchase is finished
			    IabHelper.OnIabPurchaseFinishedListener mPurchaseFinishedListener = new IabHelper.OnIabPurchaseFinishedListener()
			    {
			        public void onIabPurchaseFinished(IabResult result, Purchase purchase)
			        {
			            //Log.d(TAG, "Purchase finished: " + result + ", purchase: " + purchase);
			            if (result.isFailure()) {
			                alertUser("Error purchasing: " + result);
			                return;
			            }
			            if (!verifyDeveloperPayload(purchase)) {
			                alertUser("Error purchasing. Authenticity verification failed.");
			                return;
			            }

			            //Log.d(TAG, "Purchase successful.");
			            alertUser("Purchase successful!");

			            if (purchase.getSku().equals(IAP_UPGRADE)) {
			                // bought 1/4 tank of gas. So consume it
			                alertUser("UPGRADE IS GOOD TO GO BABY!!");
			            }
			        }
			    };

			 

			    

			});
	    }

	    @Override
	    public void onActivityResult(int requestCode, int resultCode, Intent data) {
	        alertUser("onActivity");

	        // Pass on the activity result to the helper for handling
	        if (!mHelper.handleActivityResult(requestCode, resultCode, data)) {
	            // not handled, so handle it ourselves (here's where you'd
	            // perform any handling of activity results not related to in-app
	            // billing...
	            //super.onActivityResult(requestCode, resultCode, data);
	        }
	        else {
	            //Log.d(TAG, "onActivityResult handled by IABUtil.");

	        }
	    }
}