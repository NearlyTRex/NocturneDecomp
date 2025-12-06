// Name: core_level.cpp_CLevelLoader_show_FUN_00503dc0
// Address: 00503dc0
// Address Range: [[00503dc0, 00504154]]
// Convention: __cdecl
// Signature: void core_level.cpp_CLevelLoader_show_FUN_00503dc0(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant)

#include "nocturne.h"

void __cdecl
core_level_cpp_CLevelLoader_show_FUN_00503dc0
          (CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte auStack_40 [8];
  byte auStack_38 [12];
  byte auStack_2c [8];
  byte auStack_24 [28];
  
  this_ptr->version = 0;
  this_ptr->enabled = 1;
  this_ptr->current_frame = 0;
  this_ptr->use_custom_viewport = use_custom_viewport;
  this_ptr->total_frames = total_frames;
  if (use_custom_viewport == 0) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
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
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&g_LoadingMoonModel,"moon.kfm");
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_LoadingMoonGlowTexture);
  if ((image_variant == -1) && (this_ptr->use_custom_viewport == 0)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    image_variant = iVar1 % 3;
  }
  if (image_variant == 0) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_38 + 4));
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              ((CAlphaBitmap *)auStack_40,"load1",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              ((CAlphaBitmap *)(auStack_40 + 4),0,0,0xffff);
    this_ptr->viewport_x = 0x78;
    this_ptr->viewport_y = 0x82;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    this_ptr->use_custom_viewport = 1;
    (this_ptr->color).r = 0x82;
    (this_ptr->color).g = 200;
    (this_ptr->color).b = 0xf4;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)auStack_38);
  }
  if (image_variant == 1) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_24 + 4));
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              ((CAlphaBitmap *)auStack_2c,"load2",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              ((CAlphaBitmap *)(auStack_2c + 4),0,0,0xffff);
    this_ptr->viewport_x = 0x1e4;
    this_ptr->viewport_y = 0x42;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    (this_ptr->color).r = 0x82;
    (this_ptr->color).g = 0xbd;
    (this_ptr->color).b = 0xff;
    this_ptr->use_custom_viewport = 1;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)auStack_24);
  }
  if (image_variant == 2) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_24 + 0x18));
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              ((CAlphaBitmap *)(auStack_24 + 0xc),"load3",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              ((CAlphaBitmap *)(auStack_24 + 0x10),0,0,0xffff);
    this_ptr->viewport_x = 0x9f;
    this_ptr->viewport_y = 1;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    this_ptr->use_custom_viewport = 1;
    (this_ptr->color).r = 0x9e;
    (this_ptr->color).g = 0xe1;
    (this_ptr->color).b = 0xff;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)(auStack_24 + 0x14));
  }
  if (image_variant != 3) {
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)&stack0xffffffb8);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)&stack0xffffffbc,"load4",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)auStack_40,0,0,0xffff);
  this_ptr->viewport_x = 0x17b;
  this_ptr->viewport_y = 0x44;
  this_ptr->viewport_width = 0x5a;
  this_ptr->viewport_height = 0x5a;
  this_ptr->use_custom_viewport = 1;
  (this_ptr->color).r = 0x6b;
  auStack_40._0_4_ = (uint *)0x0;
  (this_ptr->color).g = 0x9a;
  (this_ptr->color).b = 0xff;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)(auStack_40 + 4));
  return;
}
