// Name: core_moon.cpp_CMoon_init_FUN_005023e0
// Address: 005023e0
// Address Range: [[005023e0, 00502443]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_init_FUN_005023e0(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_init_FUN_005023e0(CMoon *this_ptr)

{
  uint *puVar1;
  int iVar2;
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded == 0) {
    if (g_CGamePtr->head_of_horror_cheat == 0x29a) {
      g_CGamePtr->head_of_horror_cheat = 0;
    }
    this_ptr_00 = CAlphaBitmap_ARRAY_01d1c7cc;
    iVar2 = 0;
    do {
      puVar1 = (uint *)((int)&PTR_s_blairwitch_00_00618340 + iVar2);
      iVar2 = iVar2 + 4;
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(this_ptr_00,(char *)*puVar1,0x280,0x11a);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 != 300);
    this_ptr->is_loaded = 1;
  }
  return;
}
