// Name: core_moon.cpp_FUN_004f94a0
// Address: 004f94a0
// Address Range: [[004f94a0, 004f9578]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_004f94a0(int *param_1)

#include "nocturne.h"

void core_moon_cpp_FUN_004f94a0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  CAlphaBitmap *this_ptr;
  
  if (*param_1 != 0) {
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d883a8,"bwp3_menu_scroll",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d88614,PTR_s_BWP3_mainmenu_005c9283_2_006006f8,0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d88628,"bwp3_hand",0x200,0x200);
  param_1[0x2b4] = 0x140;
  param_1[0x2b5] = -0x140;
  param_1[0x2b6] = 0;
  this_ptr = g_MoonAnimTextures;
  param_1[0x2b7] = 0x1e0;
  iVar2 = 0;
  param_1[0x2b8] = 0x10000;
  param_1[0x2b9] = 0;
  do {
    puVar1 = (uint *)((int)&PTR_s_blair_00000_006006fc + iVar2);
    iVar2 = iVar2 + 4;
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(this_ptr,(char *)*puVar1,0x280,0xa5);
    this_ptr = this_ptr + 1;
  } while (iVar2 != 0x78);
  *param_1 = 1;
  return;
}
