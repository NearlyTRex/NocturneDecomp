// Name: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960
// Address: 0049d960
// Address Range: [[0049d960, 0049da04]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960(CGame *this_ptr)

{
  CAlphaBitmap local_18;
  
  engine_2d_c_reinitializeGraphicsSystem_FUN_00403770();
  if ((DAT_005b7620 != 0x1e0) || (this_ptr->game_bpp != 0x20)) {
    wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(0x280,0x1e0,0x20);
  }
  if (g_CDemonMission_PTR_005baf90->is_in_editor == 0) {
    _DAT_01bcd070 = g_CBitFont_PTR_014b9900;
  }
  engine_special_cpp_clearScreen_FUN_0052ee70();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&local_18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(&local_18,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(&local_18,0,0,0x8000);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(&local_18,0);
  return;
}
