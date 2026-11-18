// Name: core_game.cpp_CGame_setGameRes_FUN_0049d870
// Address: 0049d870
// Address Range: [[0049d870, 0049d955]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGameRes_FUN_0049d870(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setGameRes_FUN_0049d870(CGame *this_ptr)

{
  int iVar1;
  
  if (g_CurrentGraphicsBoard != 0) {
    engine_special_cpp_selectCard_FUN_00532d00(g_CurrentGraphicsBoard);
  }
  if (((g_WindowHeight != this_ptr->game_pixy) || (g_BitsPerPixel != this_ptr->game_bpp)) &&
     (iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
                        (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp), iVar1 == 0)) {
    this_ptr->game_pixy = 0x1e0;
    this_ptr->game_pixx = 0x280;
    iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
                      (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp);
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 1175;
      core_main_c_displayErrorAndQuit_FUN_004c8440
                ("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",this_ptr->game_pixx,this_ptr->game_pixy,
                 this_ptr->game_bpp);
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_00403760();
  core_dcamera_cpp_CDemonCamera_init_FUN_00440010(&g_CDemonCameraInstance,g_WindowHeight);
  if (g_WindowHeight < 0x180) {
    g_CBitFont_PTR_01bcd070 = g_SmallEditorFont;
    return;
  }
  return;
}
