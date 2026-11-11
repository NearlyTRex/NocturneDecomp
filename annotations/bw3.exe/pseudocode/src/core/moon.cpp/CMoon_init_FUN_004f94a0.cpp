// Name: core_moon.cpp_CMoon_init_FUN_004f94a0
// Address: 004f94a0
// Address Range: [[004f94a0, 004f9578]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_init_FUN_004f94a0(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_init_FUN_004f94a0(CMoon *this_ptr)

{
  uint *puVar1;
  int iVar2;
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded != 0) {
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d883a8,"bwp3_menu_scroll",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d88614,PTR_s_BWP3_mainmenu_005c9283_2_006006f8,0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d88628,"bwp3_hand",0x200,0x200);
  this_ptr->scroll_x[0] = 0x140;
  this_ptr->scroll_x[1] = -0x140;
  this_ptr->scroll_y[0] = 0;
  this_ptr_00 = g_MoonAnimTextures;
  this_ptr->scroll_y[1] = 0x1e0;
  iVar2 = 0;
  this_ptr->hand_alpha = 0x10000;
  this_ptr->hand_alpha_rising = 0;
  do {
    puVar1 = (uint *)((int)&PTR_s_blair_00000_006006fc + iVar2);
    iVar2 = iVar2 + 4;
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(this_ptr_00,(char *)*puVar1,0x280,0xa5);
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar2 != 0x78);
  this_ptr->is_loaded = 1;
  return;
}
