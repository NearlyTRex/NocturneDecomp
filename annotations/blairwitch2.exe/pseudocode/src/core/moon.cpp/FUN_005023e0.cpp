// Name: core_moon.cpp_FUN_005023e0
// Address: 005023e0
// Address Range: [[005023e0, 00502443]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_005023e0(int *param_1)

#include "nocturne.h"

void core_moon_cpp_FUN_005023e0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  CAlphaBitmap *this_ptr;
  
  if (*param_1 == 0) {
    if (*(int *)&g_CGamePtr->field_0x230 == 0x29a) {
      *(uint *)&g_CGamePtr->field_0x230 = 0;
    }
    this_ptr = CAlphaBitmap_ARRAY_01d1c7cc;
    iVar2 = 0;
    do {
      puVar1 = (uint *)((int)&PTR_s_blairwitch_00_00618340 + iVar2);
      iVar2 = iVar2 + 4;
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(this_ptr,(char *)*puVar1,0x280,0x11a);
      this_ptr = this_ptr + 1;
    } while (iVar2 != 300);
    *param_1 = 1;
  }
  return;
}
