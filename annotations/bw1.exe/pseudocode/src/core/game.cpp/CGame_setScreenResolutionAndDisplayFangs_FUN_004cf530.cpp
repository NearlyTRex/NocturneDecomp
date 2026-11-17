// Name: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530
// Address: 004cf530
// Address Range: [[004cf530, 004cf5d7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530(CGame *this_ptr)

{
  CAlphaBitmap local_18;
  
  engine_2d_c_reinitializeGraphicsSystem_FUN_00402ad0();
  if ((g_INT_0061b49c != 0x1e0) || (this_ptr->game_bpp != 0x20)) {
    wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300(0x280,0x1e0,0x20);
  }
  if (g_CDemonMission_PTR_0061f650->is_in_editor == 0) {
    g_CBitFont_PTR_01c3eb50 = g_CBitFont_PTR_0152d244;
  }
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_18,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&local_18,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_18,0);
  return;
}
