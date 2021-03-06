#ifndef INCLUDED_neash_media_SoundTransform
#define INCLUDED_neash_media_SoundTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,media,SoundTransform)
namespace neash{
namespace media{


class SoundTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundTransform_obj OBJ_;
		SoundTransform_obj();
		Void __construct(hx::Null< double >  __o_vol,hx::Null< double >  __o_panning);

	public:
		static hx::ObjectPtr< SoundTransform_obj > __new(hx::Null< double >  __o_vol,hx::Null< double >  __o_panning);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundTransform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundTransform"); }

		double pan; /* REM */ 
		double volume; /* REM */ 
		virtual ::neash::media::SoundTransform clone( );
		Dynamic clone_dyn();

};

} // end namespace neash
} // end namespace media

#endif /* INCLUDED_neash_media_SoundTransform */ 
