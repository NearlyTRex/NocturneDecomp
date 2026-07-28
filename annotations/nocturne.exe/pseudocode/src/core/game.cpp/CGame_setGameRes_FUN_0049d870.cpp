// Name: core_game.cpp_CGame_setGameRes_FUN_0049d870
// Address: 0049d870
// Address Range: [[0049d870, 0049d955]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGameRes_FUN_0049d870(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_setGameRes_FUN_0049d870(CGame *this_ptr)

{
  int iVar1;
  
  if (_DAT_01cc64a4 != 0) {
    engine_special_cpp_selectCard_FUN_00532d00(_DAT_01cc64a4);
  }
  if (((DAT_005b7620 != this_ptr->game_pixy) || (DAT_005b7624 != this_ptr->game_bpp)) &&
     (iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
                        (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp), iVar1 == 0)) {
    this_ptr->game_pixy = 0x1e0;
    this_ptr->game_pixx = 0x280;
    iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
                      (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp);
    if (iVar1 == 0) {
      PTR_01cc4800 = "..\\core\\game.cpp";
      INT_01cc4804 = 0x497;
      core_main_c_FUN_004c8440
                ("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",this_ptr->game_pixx,this_ptr->game_pixy,
                 this_ptr->game_bpp);
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_00403760();
  core_dcamera_cpp_CDemonCamera_init_FUN_00440010((CDemonCamera *)0x1fb8508,DAT_005b7620);
  if (DAT_005b7620 < 0x180) {
    _DAT_01bcd070 = _DAT_014b9904;
    return;
  }
  return;
}
