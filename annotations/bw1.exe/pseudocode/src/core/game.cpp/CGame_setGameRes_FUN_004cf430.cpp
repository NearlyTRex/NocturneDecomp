// Name: core_game.cpp_CGame_setGameRes_FUN_004cf430
// Address: 004cf430
// Address Range: [[004cf430, 004cf529]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGameRes_FUN_004cf430(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setGameRes_FUN_004cf430(CGame *this_ptr)

{
  int iVar1;
  
  if (g_GraphicsMenuTextPointers[7] != (char *)0x0) {
    engine_special_cpp_selectCard_FUN_00582b10((int)g_GraphicsMenuTextPointers[7]);
  }
  if (((g_INT_0061b49c != this_ptr->game_pixy) || (g_INT_0061b4a0 != this_ptr->game_bpp)) &&
     (iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300
                        (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp), iVar1 == 0)) {
    this_ptr->game_pixy = 0x1e0;
    this_ptr->game_pixx = 0x280;
    iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300
                      (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp);
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 1321;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CGame::setGameRes - Unable to set the video mode to %dx%dx%d");
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_00402ac0();
  core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(&g_CDemonCameraInstance,g_INT_0061b49c);
  if (g_INT_0061b49c < 0x180) {
    g_CBitFont_PTR_01c3eb50 = g_SmallEditorFont;
  }
  g_INT_01cd0c34 = (uint)(g_INT_0061b49c != 0x1e0);
  return;
}
