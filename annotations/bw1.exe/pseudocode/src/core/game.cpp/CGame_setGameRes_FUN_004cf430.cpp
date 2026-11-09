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
    engine_special_cpp_FUN_00582b10(_DAT_01d1f5d4);
  }
  if (((DAT_0061b49c != *(int *)&this_ptr->field_0x4) ||
      (DAT_0061b4a0 != *(int *)&this_ptr->field_0x8)) &&
     (iVar1 = wincore_wddvmem_cpp_FUN_005ac300
                        (*(uint *)this_ptr,*(uint *)&this_ptr->field_0x4,
                         *(uint *)&this_ptr->field_0x8), iVar1 == 0)) {
    *(uint *)&this_ptr->field_0x4 = 0x1e0;
    *(uint *)this_ptr = 0x280;
    iVar1 = wincore_wddvmem_cpp_FUN_005ac300
                      (*(uint *)this_ptr,*(uint *)&this_ptr->field_0x4,
                       *(uint *)&this_ptr->field_0x8);
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\game.cpp";
      _DAT_01d1d404 = 0x529;
      core_main_c_FUN_005030e0
                ("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",*(uint *)this_ptr,
                 *(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8);
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
