// Name: core_game.cpp_CGame_setGameRes_FUN_004b5fd0
// Address: 004b5fd0
// Address Range: [[004b5fd0, 004b60b5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGameRes_FUN_004b5fd0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setGameRes_FUN_004b5fd0(CGame *this_ptr)

{
  int iVar1;
  
  if (g_INT_01d06a74 != 0) {
    engine_special_cpp_selectCard_FUN_005600c0(g_INT_01d06a74);
  }
  if (((g_INT_006141bc != this_ptr->game_pixy) || (g_INT_006141c0 != this_ptr->game_bpp)) &&
     (iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50
                        (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp), iVar1 == 0)) {
    this_ptr->game_pixy = 0x1e0;
    this_ptr->game_pixx = 0x280;
    iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50
                      (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp);
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 1284;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CGame::setGameRes - Unable to set the video mode to %dx%dx%d");
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_00402ac0();
  core_dcamera_cpp_CDemonCamera_init_FUN_0043b570(&g_CDemonCameraInstance,g_INT_006141bc);
  if (g_INT_006141bc < 0x180) {
    g_EditorFont = g_SmallEditorFont;
    return;
  }
  return;
}
