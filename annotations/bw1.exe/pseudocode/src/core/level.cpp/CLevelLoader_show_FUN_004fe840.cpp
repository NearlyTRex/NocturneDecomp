// Name: core_level.cpp_CLevelLoader_show_FUN_004fe840
// Address: 004fe840
// Address Range: [[004fe840, 004fe9b5]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_show_FUN_004fe840(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_show_FUN_004fe840(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)

{
  CAlphaBitmap local_18;
  
  this_ptr->version = 0;
  this_ptr->enabled = 1;
  this_ptr->current_frame = 0;
  this_ptr->use_custom_viewport = use_custom_viewport;
  this_ptr->total_frames = total_frames;
  if (use_custom_viewport == 0) {
    engine_special_cpp_clearScreen_FUN_0057dc40();
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
  core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0(&g_LoadingMoonModel,"moon.kfm");
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061f2e4);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_18,"load1",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&local_18,0,0,0xffff);
  this_ptr->viewport_x = 0x1e4;
  this_ptr->viewport_y = 0x16;
  this_ptr->viewport_width = 0x3c;
  this_ptr->viewport_height = 0x3c;
  this_ptr->use_custom_viewport = 1;
  (this_ptr->color).r = 0xd7;
  (this_ptr->color).g = 0xdc;
  (this_ptr->color).b = 0xe0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_18,0);
  return;
}
