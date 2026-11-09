// Name: core_game.cpp_CGame_setGameRes_FUN_004b7de0
// Address: 004b7de0
// Address Range: [[004b7de0, 004b7ed9]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGameRes_FUN_004b7de0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_setGameRes_FUN_004b7de0(CGame *this_ptr)

{
  int iVar1;
  
  if (_DAT_01d74020 != 0) {
    engine_special_cpp_FUN_005663e0(_DAT_01d74020);
  }
  if (((DAT_005fba1c != *(int *)&this_ptr->field_0x4) ||
      (DAT_005fba20 != *(int *)&this_ptr->field_0x8)) &&
     (iVar1 = wincore_wddvmem_cpp_FUN_00579bb0
                        (*(uint *)this_ptr,*(uint *)&this_ptr->field_0x4,
                         *(uint *)&this_ptr->field_0x8), iVar1 == 0)) {
    *(uint *)&this_ptr->field_0x4 = 0x1e0;
    *(uint *)this_ptr = 0x280;
    iVar1 = wincore_wddvmem_cpp_FUN_00579bb0
                      (*(uint *)this_ptr,*(uint *)&this_ptr->field_0x4,
                       *(uint *)&this_ptr->field_0x8);
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\game.cpp";
      _DAT_01d71de4 = 0x526;
      core_main_c_FUN_004e4330
                ("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",*(uint *)this_ptr,
                 *(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8);
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_00402ac0();
  core_dcamera_cpp_CDemonCamera_init_FUN_00448d70(&g_CDemonCameraInstance,DAT_005fba1c);
  if (DAT_005fba1c < 0x180) {
    _DAT_01c5b0e0 = _DAT_01549ab4;
  }
  _DAT_01d22c3c = (uint)(DAT_005fba1c != 0x1e0);
  return;
}
