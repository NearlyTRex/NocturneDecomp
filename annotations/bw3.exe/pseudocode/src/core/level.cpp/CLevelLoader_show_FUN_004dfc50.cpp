// Name: core_level.cpp_CLevelLoader_show_FUN_004dfc50
// Address: 004dfc50
// Address Range: [[004dfc50, 004dfffc]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_show_FUN_004dfc50(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_show_FUN_004dfc50(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)

{
  int iVar1;
  CAlphaBitmap local_58;
  CAlphaBitmap local_44;
  CAlphaBitmap local_30;
  CAlphaBitmap local_1c;
  
  this_ptr->total_frames = 0xc;
  this_ptr->version = 0;
  this_ptr->enabled = 1;
  this_ptr->current_frame = 0;
  this_ptr->use_custom_viewport = use_custom_viewport;
  if (use_custom_viewport == 0) {
    engine_special_cpp_clearScreen_FUN_00560d70();
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
  iVar1 = rand();
  iVar1 = iVar1 % 4;
  if (iVar1 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_58);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_58,"load_0",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (&CAlphaBitmap_01d70be8,"L_demon",0x80,0x80);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_58,0,0,0xffff);
    this_ptr->viewport_x = 0x78;
    this_ptr->viewport_y = 0x82;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    this_ptr->use_custom_viewport = 1;
    (this_ptr->color).r = 0x82;
    (this_ptr->color).g = 200;
    (this_ptr->color).b = 0xf4;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_58,0);
  }
  if (iVar1 == 1) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_44);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_44,"load_1",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (&CAlphaBitmap_01d70be8,"L_cross",0x80,0x80);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_44,0,0,0xffff);
    this_ptr->viewport_x = 0x1e4;
    this_ptr->viewport_y = 0x42;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    (this_ptr->color).r = 0x82;
    (this_ptr->color).g = 0xbd;
    (this_ptr->color).b = 0xff;
    this_ptr->use_custom_viewport = 1;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_44,0);
  }
  if (iVar1 == 2) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_30);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_30,"load_2",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (&CAlphaBitmap_01d70be8,"L_stick",0x80,0x80);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_30,0,0,0xffff);
    this_ptr->viewport_x = 0x9f;
    this_ptr->viewport_y = 1;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    this_ptr->use_custom_viewport = 1;
    (this_ptr->color).r = 0x9e;
    (this_ptr->color).g = 0xe1;
    (this_ptr->color).b = 0xff;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_30,0);
  }
  if (iVar1 != 3) {
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_1c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_1c,"load_3",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d70be8,"L_shaman",0x80,0x80);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_1c,0,0,0xffff);
  this_ptr->viewport_x = 0x17b;
  this_ptr->viewport_y = 0x44;
  this_ptr->viewport_width = 0x5a;
  this_ptr->viewport_height = 0x5a;
  this_ptr->use_custom_viewport = 1;
  (this_ptr->color).r = 0x6b;
  (this_ptr->color).g = 0x9a;
  (this_ptr->color).b = 0xff;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_1c,0);
  return;
}
