#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_Lib
#include <neash/Lib.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_ManagedStage
#include <neash/display/ManagedStage.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_net_URLRequest
#include <neash/net/URLRequest.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
namespace nme{

Void Lib_obj::__construct()
{
	return null();
}

Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

int Lib_obj::FULLSCREEN;

int Lib_obj::BORDERLESS;

int Lib_obj::RESIZABLE;

int Lib_obj::HARDWARE;

int Lib_obj::VSYNC;

int Lib_obj::HW_AA;

int Lib_obj::HW_AA_HIRES;

int Lib_obj::ALLOW_SHADERS;

::String Lib_obj::company;

::neash::display::MovieClip Lib_obj::current;

::String Lib_obj::file;

int Lib_obj::initHeight;

int Lib_obj::initWidth;

::String Lib_obj::packageName;

::neash::display::Stage Lib_obj::stage;

::String Lib_obj::version;

Void Lib_obj::close( ){
{
		HX_SOURCE_PUSH("Lib_obj::close")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",37)
		::neash::Lib_obj::close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,close,(void))

Void Lib_obj::create( Dynamic onLoaded,int width,int height,hx::Null< double >  __o_frameRate,hx::Null< int >  __o_color,hx::Null< int >  __o_flags,hx::Null< ::String >  __o_title,::neash::display::BitmapData icon){
double frameRate = __o_frameRate.Default(60.0);
int color = __o_color.Default(16777215);
int flags = __o_flags.Default(15);
::String title = __o_title.Default(HX_CSTRING("NME"));
	HX_SOURCE_PUSH("Lib_obj::create");
{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",60)
		::neash::Lib_obj::create(onLoaded,width,height,frameRate,color,flags,title,icon);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Lib_obj,create,(void))

::neash::display::ManagedStage Lib_obj::createManagedStage( int width,int height){
	HX_SOURCE_PUSH("Lib_obj::createManagedStage")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",79)
	return ::neash::Lib_obj::createManagedStage(width,height,null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",81)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,createManagedStage,return )

Void Lib_obj::exit( ){
{
		HX_SOURCE_PUSH("Lib_obj::exit")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",92)
		::neash::Lib_obj::exit();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,exit,(void))

Void Lib_obj::forceClose( ){
{
		HX_SOURCE_PUSH("Lib_obj::forceClose")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",106)
		::neash::Lib_obj::forceClose();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,forceClose,(void))

int Lib_obj::getTimer( ){
	HX_SOURCE_PUSH("Lib_obj::getTimer")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",124)
	return ::neash::Lib_obj::getTimer();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

Void Lib_obj::getURL( ::neash::net::URLRequest url,::String target){
{
		HX_SOURCE_PUSH("Lib_obj::getURL")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",143)
		::neash::Lib_obj::getURL(url,target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

Void Lib_obj::pause( ){
{
		HX_SOURCE_PUSH("Lib_obj::pause")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",162)
		::neash::Lib_obj::pause();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,pause,(void))

Void Lib_obj::postUICallback( Dynamic handler){
{
		HX_SOURCE_PUSH("Lib_obj::postUICallback")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",180)
		::neash::Lib_obj::postUICallback(handler);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,postUICallback,(void))

Void Lib_obj::resume( ){
{
		HX_SOURCE_PUSH("Lib_obj::resume")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",197)
		::neash::Lib_obj::resume();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,resume,(void))

Void Lib_obj::setPackage( ::String company,::String file,::String packageName,::String version){
{
		HX_SOURCE_PUSH("Lib_obj::setPackage")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",216)
		::neash::Lib_obj::setPackage(company,file,packageName,version);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,setPackage,(void))

Void Lib_obj::trace( Dynamic arg){
{
		HX_SOURCE_PUSH("Lib_obj::trace")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",229)
		::haxe::Log_obj::trace(arg,hx::SourceInfo(HX_CSTRING("Lib.hx"),232,HX_CSTRING("nme.Lib"),HX_CSTRING("trace")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))

::String Lib_obj::nmeGetCompany( ){
	HX_SOURCE_PUSH("Lib_obj::nmeGetCompany")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",251)
	return ::neash::Lib_obj::company;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",253)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,nmeGetCompany,return )

::neash::display::MovieClip Lib_obj::nmeGetCurrent( ){
	HX_SOURCE_PUSH("Lib_obj::nmeGetCurrent")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",258)
	return ::neash::Lib_obj::nmeGetCurrent();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,nmeGetCurrent,return )

::String Lib_obj::nmeGetFile( ){
	HX_SOURCE_PUSH("Lib_obj::nmeGetFile")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",275)
	return ::neash::Lib_obj::file;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",277)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,nmeGetFile,return )

int Lib_obj::nmeGetInitHeight( ){
	HX_SOURCE_PUSH("Lib_obj::nmeGetInitHeight")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",285)
	return ::neash::Lib_obj::initHeight;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",287)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,nmeGetInitHeight,return )

int Lib_obj::nmeGetInitWidth( ){
	HX_SOURCE_PUSH("Lib_obj::nmeGetInitWidth")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",295)
	return ::neash::Lib_obj::initWidth;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",297)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,nmeGetInitWidth,return )

::String Lib_obj::nmeGetPackageName( ){
	HX_SOURCE_PUSH("Lib_obj::nmeGetPackageName")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",305)
	return ::neash::Lib_obj::packageName;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",307)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,nmeGetPackageName,return )

::neash::display::Stage Lib_obj::nmeGetStage( ){
	HX_SOURCE_PUSH("Lib_obj::nmeGetStage")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",312)
	return ::neash::Lib_obj::nmeGetStage();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,nmeGetStage,return )

::String Lib_obj::nmeGetVersion( ){
	HX_SOURCE_PUSH("Lib_obj::nmeGetVersion")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",327)
	return ::neash::Lib_obj::version;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/3,4,3/nme/Lib.hx",329)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,nmeGetVersion,return )


Lib_obj::Lib_obj()
{
}

void Lib_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lib);
	HX_MARK_END_CLASS();
}

Dynamic Lib_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return inCallProp ? nmeGetFile() : file; }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { return VSYNC; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { return HW_AA; }
		if (HX_FIELD_EQ(inName,"stage") ) { return inCallProp ? nmeGetStage() : stage; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return getURL_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { return inCallProp ? nmeGetCompany() : company; }
		if (HX_FIELD_EQ(inName,"current") ) { return inCallProp ? nmeGetCurrent() : current; }
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp ? nmeGetVersion() : version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { return HARDWARE; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { return RESIZABLE; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { return inCallProp ? nmeGetInitWidth() : initWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { return FULLSCREEN; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { return BORDERLESS; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { return inCallProp ? nmeGetInitHeight() : initHeight; }
		if (HX_FIELD_EQ(inName,"forceClose") ) { return forceClose_dyn(); }
		if (HX_FIELD_EQ(inName,"setPackage") ) { return setPackage_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetFile") ) { return nmeGetFile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { return HW_AA_HIRES; }
		if (HX_FIELD_EQ(inName,"packageName") ) { return inCallProp ? nmeGetPackageName() : packageName; }
		if (HX_FIELD_EQ(inName,"nmeGetStage") ) { return nmeGetStage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { return ALLOW_SHADERS; }
		if (HX_FIELD_EQ(inName,"nmeGetCompany") ) { return nmeGetCompany_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetCurrent") ) { return nmeGetCurrent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetVersion") ) { return nmeGetVersion_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"postUICallback") ) { return postUICallback_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeGetInitWidth") ) { return nmeGetInitWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeGetInitHeight") ) { return nmeGetInitHeight_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeGetPackageName") ) { return nmeGetPackageName_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createManagedStage") ) { return createManagedStage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lib_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { VSYNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { HW_AA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::neash::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { company=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::neash::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { HARDWARE=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { RESIZABLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { initWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { FULLSCREEN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { BORDERLESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { initHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { HW_AA_HIRES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"packageName") ) { packageName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { ALLOW_SHADERS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lib_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FULLSCREEN"),
	HX_CSTRING("BORDERLESS"),
	HX_CSTRING("RESIZABLE"),
	HX_CSTRING("HARDWARE"),
	HX_CSTRING("VSYNC"),
	HX_CSTRING("HW_AA"),
	HX_CSTRING("HW_AA_HIRES"),
	HX_CSTRING("ALLOW_SHADERS"),
	HX_CSTRING("company"),
	HX_CSTRING("current"),
	HX_CSTRING("file"),
	HX_CSTRING("initHeight"),
	HX_CSTRING("initWidth"),
	HX_CSTRING("packageName"),
	HX_CSTRING("stage"),
	HX_CSTRING("version"),
	HX_CSTRING("close"),
	HX_CSTRING("create"),
	HX_CSTRING("createManagedStage"),
	HX_CSTRING("exit"),
	HX_CSTRING("forceClose"),
	HX_CSTRING("getTimer"),
	HX_CSTRING("getURL"),
	HX_CSTRING("pause"),
	HX_CSTRING("postUICallback"),
	HX_CSTRING("resume"),
	HX_CSTRING("setPackage"),
	HX_CSTRING("trace"),
	HX_CSTRING("nmeGetCompany"),
	HX_CSTRING("nmeGetCurrent"),
	HX_CSTRING("nmeGetFile"),
	HX_CSTRING("nmeGetInitHeight"),
	HX_CSTRING("nmeGetInitWidth"),
	HX_CSTRING("nmeGetPackageName"),
	HX_CSTRING("nmeGetStage"),
	HX_CSTRING("nmeGetVersion"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_MARK_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_MARK_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_MARK_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::company,"company");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::file,"file");
	HX_MARK_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_MARK_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_MARK_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_MARK_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Lib_obj::version,"version");
};

Class Lib_obj::__mClass;

void Lib_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.Lib"), hx::TCanCast< Lib_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Lib_obj::__boot()
{
	hx::Static(FULLSCREEN) = (int)1;
	hx::Static(BORDERLESS) = (int)2;
	hx::Static(RESIZABLE) = (int)4;
	hx::Static(HARDWARE) = (int)8;
	hx::Static(VSYNC) = (int)16;
	hx::Static(HW_AA) = (int)32;
	hx::Static(HW_AA_HIRES) = (int)96;
	hx::Static(ALLOW_SHADERS) = (int)128;
	hx::Static(company);
	hx::Static(current);
	hx::Static(file);
	hx::Static(initHeight);
	hx::Static(initWidth);
	hx::Static(packageName);
	hx::Static(stage);
	hx::Static(version);
}

} // end namespace nme
