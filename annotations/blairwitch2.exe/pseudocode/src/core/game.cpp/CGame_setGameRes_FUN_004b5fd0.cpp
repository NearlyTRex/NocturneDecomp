// Name: core_game.cpp_CGame_setGameRes_FUN_004b5fd0
// Address: 004b5fd0
// Address Range: [[004b5fd0, 004b60b5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGameRes_FUN_004b5fd0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_setGameRes_FUN_004b5fd0(CGame *this_ptr)

{
  int iVar1;
  
  if (_DAT_01d06a74 != 0) {
    engine_special_cpp_selectCard_FUN_005600c0(_DAT_01d06a74);
  }
  if (((DAT_006141bc != this_ptr->game_pixy) || (DAT_006141c0 != this_ptr->game_bpp)) &&
     (iVar1 = wincore_wddvmem_cpp_FUN_00588a50
                        (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp), iVar1 == 0)) {
    this_ptr->game_pixy = 0x1e0;
    this_ptr->game_pixx = 0x280;
    iVar1 = wincore_wddvmem_cpp_FUN_00588a50
                      (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp);
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\game.cpp";
      _DAT_01d046a4 = 0x504;
      core_main_c_FUN_004e4500
                ("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",this_ptr->game_pixx,this_ptr->game_pixy,
                 this_ptr->game_bpp);
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_00402ac0();
  core_dcamera_cpp_CDemonCamera_init_FUN_0043b570(&g_CDemonCameraInstance,DAT_006141bc);
  if (DAT_006141bc < 0x180) {
    _DAT_01c25590 = _DAT_01511cc4;
    return;
  }
  return;
}
