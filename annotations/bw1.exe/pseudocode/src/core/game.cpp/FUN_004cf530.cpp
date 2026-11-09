// Name: core_game.cpp_FUN_004cf530
// Address: 004cf530
// Address Range: [[004cf530, 004cf5d7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004cf530(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004cf530(CGame *this_ptr)

{
  CAlphaBitmap local_18;
  
  engine_2d_c_reinitializeGraphicsSystem_FUN_00402ad0();
  if ((DAT_0061b49c != 0x1e0) || (*(int *)&this_ptr->field_0x8 != 0x20)) {
    wincore_wddvmem_cpp_FUN_005ac300(0x280,0x1e0,0x20);
  }
  if (*(int *)(0x01D2C900 + 0x1008) == 0) {
    _DAT_01c3eb50 = _DAT_0152d244;
  }
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_18,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&local_18,0,0,0x8000);
  wincore_wddvmem_cpp_FUN_005acff0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_18,0);
  return;
}
