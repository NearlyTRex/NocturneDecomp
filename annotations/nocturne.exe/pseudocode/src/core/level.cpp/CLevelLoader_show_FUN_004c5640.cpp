// Name: core_level.cpp_CLevelLoader_show_FUN_004c5640
// Address: 004c5640
// Address Range: [[004c5640, 004c59d4]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_show_FUN_004c5640(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_show_FUN_004c5640(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)

{
  int iVar1;
  CAlphaBitmap local_58;
  CAlphaBitmap local_44;
  CAlphaBitmap local_30;
  CAlphaBitmap local_1c;
  
  this_ptr->version = 0;
  this_ptr->enabled = 1;
  this_ptr->current_frame = 0;
  this_ptr->use_custom_viewport = use_custom_viewport;
  this_ptr->total_frames = total_frames;
  if (use_custom_viewport == 0) {
    engine_special_cpp_clearScreen_FUN_0052ee70();
    this_ptr->viewport_x = 0;
    this_ptr->viewport_y = 0;
    this_ptr->viewport_width = 0x280;
    this_ptr->viewport_height = 0x1e0;
  }
  else {
    this_ptr->viewport_y = 0;
    this_ptr->viewport_width = 0xc0;
    this_ptr->viewport_height = 0xc0;
    this_ptr->viewport_x = 0x1bf;
  }
  (this_ptr->color).r = 0xff;
  (this_ptr->color).g = 0xff;
  (this_ptr->color).b = 0xff;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650
            ((CKeyFramedModel *)0x1cc3290,"moon.kfm");
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005baca4);
  if ((image_variant == -1) && (this_ptr->use_custom_viewport == 0)) {
    iVar1 = rand();
    image_variant = iVar1 % 3;
  }
  if (image_variant == 0) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&local_44);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(&local_44,"load1",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(&local_44,0,0,0xffff);
    this_ptr->viewport_x = 0x78;
    this_ptr->viewport_y = 0x82;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    this_ptr->use_custom_viewport = 1;
    (this_ptr->color).r = 0x82;
    (this_ptr->color).g = 200;
    (this_ptr->color).b = 0xf4;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(&local_44,0);
  }
  if (image_variant == 1) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&local_30);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(&local_30,"load2",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(&local_30,0,0,0xffff);
    this_ptr->viewport_x = 0x1e4;
    this_ptr->viewport_y = 0x42;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    (this_ptr->color).r = 0x82;
    (this_ptr->color).g = 0xbd;
    (this_ptr->color).b = 0xff;
    this_ptr->use_custom_viewport = 1;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(&local_30,0);
  }
  if (image_variant == 2) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&local_1c);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(&local_1c,"load3",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(&local_1c,0,0,0xffff);
    this_ptr->viewport_x = 0x9f;
    this_ptr->viewport_y = 1;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    this_ptr->use_custom_viewport = 1;
    (this_ptr->color).r = 0x9e;
    (this_ptr->color).g = 0xe1;
    (this_ptr->color).b = 0xff;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(&local_1c,0);
  }
  if (image_variant != 3) {
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&local_58);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(&local_58,"load4",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(&local_58,0,0,0xffff);
  this_ptr->viewport_x = 0x17b;
  this_ptr->viewport_y = 0x44;
  this_ptr->viewport_width = 0x5a;
  this_ptr->viewport_height = 0x5a;
  this_ptr->use_custom_viewport = 1;
  (this_ptr->color).r = 0x6b;
  (this_ptr->color).g = 0x9a;
  (this_ptr->color).b = 0xff;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(&local_58,0);
  return;
}
