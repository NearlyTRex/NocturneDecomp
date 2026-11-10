// Name: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0
// Address: 004b7ee0
// Address Range: [[004b7ee0, 004b7f87]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(CGame *this_ptr)

{
  CAlphaBitmap local_18;
  
  engine_2d_c_reinitializeGraphicsSystem_FUN_00402ad0();
  if ((DAT_005fba1c != 0x1e0) || (this_ptr->game_bpp != 0x20)) {
    wincore_wddvmem_cpp_FUN_00579bb0(0x280,0x1e0,0x20);
  }
  if (*(int *)(0x01D81080 + 0x1008) == 0) {
    _DAT_01c5b0e0 = _DAT_01549aa8;
  }
  engine_special_cpp_clearScreen_FUN_00560d70();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_18,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_18,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_18,0);
  return;
}
