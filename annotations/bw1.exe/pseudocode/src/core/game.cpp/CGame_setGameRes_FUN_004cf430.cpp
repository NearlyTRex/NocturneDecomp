// Name: core_game.cpp_CGame_setGameRes_FUN_004cf430
// Address: 004cf430
// Address Range: [[004cf430, 004cf529]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGameRes_FUN_004cf430(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_setGameRes_FUN_004cf430(CGame *this_ptr)

{
  int iVar1;
  
  if (_DAT_01d1f5d4 != 0) {
    engine_special_cpp_selectCard_FUN_00582b10(_DAT_01d1f5d4);
  }
  if (((DAT_0061b49c != this_ptr->game_pixy) || (DAT_0061b4a0 != this_ptr->game_bpp)) &&
     (iVar1 = wincore_wddvmem_cpp_FUN_005ac300
                        (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp), iVar1 == 0)) {
    this_ptr->game_pixy = 0x1e0;
    this_ptr->game_pixx = 0x280;
    iVar1 = wincore_wddvmem_cpp_FUN_005ac300
                      (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp);
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\game.cpp";
      _DAT_01d1d404 = 0x529;
      core_main_c_FUN_005030e0
                ("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",this_ptr->game_pixx,this_ptr->game_pixy,
                 this_ptr->game_bpp);
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_00402ac0();
  core_dcamera_cpp_CDemonCamera_init_FUN_0044cc30(&g_CDemonCameraInstance,DAT_0061b49c);
  if (DAT_0061b49c < 0x180) {
    _DAT_01c3eb50 = _DAT_0152d248;
  }
  _DAT_01cd0c34 = (uint)(DAT_0061b49c != 0x1e0);
  return;
}
