#ifndef INCLUDED_neash_media_SoundLoaderContext
#define INCLUDED_neash_media_SoundLoaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,media,SoundLoaderContext)
namespace neash{
namespace media{


class SoundLoaderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundLoaderContext_obj OBJ_;
		SoundLoaderContext_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SoundLoaderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundLoaderContext_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundLoaderContext"); }

};

} // end namespace neash
} // end namespace media

#endif /* INCLUDED_neash_media_SoundLoaderContext */ 
