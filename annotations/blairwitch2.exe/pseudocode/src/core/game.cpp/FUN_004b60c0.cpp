// Name: core_game.cpp_FUN_004b60c0
// Address: 004b60c0
// Address Range: [[004b60c0, 004b6167]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b60c0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b60c0(CGame *this_ptr)

{
  CAlphaBitmap local_18;
  
  engine_2d_c_reinitializeGraphicsSystem_FUN_00402ad0();
  if ((DAT_006141bc != 0x1e0) || (*(int *)&this_ptr->field_0x8 != 0x20)) {
    wincore_wddvmem_cpp_FUN_00588a50(0x280,0x1e0,0x20);
  }
  if (*(int *)(0x01D182F0 + 0x1008) == 0) {
    _DAT_01c25590 = _DAT_01511cc0;
  }
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&local_18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&local_18,"test_logo",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&local_18,0,0,0x8000);
  wincore_wddvmem_cpp_FUN_00589560();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&local_18,0);
  return;
}
