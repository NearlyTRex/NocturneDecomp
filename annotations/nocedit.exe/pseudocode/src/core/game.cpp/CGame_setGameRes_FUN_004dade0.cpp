// Name: core_game.cpp_CGame_setGameRes_FUN_004dade0
// Address: 004dade0
// Address Range: [[004dade0, 004daec5]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setGameRes_FUN_004dade0(CGame *this_ptr)

{
  int iVar1;
  
  if (g_GraphicsCardHandle != 0) {
    wincore_windll_cpp_selectCard_FUN_005b7d90(g_GraphicsCardHandle);
  }
  if (((g_WindowHeight != this_ptr->game_pixy) || (g_BitsPerPixel != this_ptr->game_bpp)) &&
     (iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
                        (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp), iVar1 == 0)) {
    this_ptr->game_pixy = GAME_WINDOW_RESOLUTION_480;
    this_ptr->game_pixx = GAME_WINDOW_RESOLUTION_640;
    iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
                      (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp);
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x4a3;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",this_ptr->game_pixx,this_ptr->game_pixy,
                 this_ptr->game_bpp);
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_005ed2a0();
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,g_WindowHeight);
  if (g_WindowHeight < 0x180) {
    g_EditorFont = g_SmallEditorFont;
    return;
  }
  return;
}
