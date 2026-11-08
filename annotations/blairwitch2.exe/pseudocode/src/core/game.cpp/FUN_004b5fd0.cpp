// Name: FUN_004b5fd0
// Address: 004b5fd0
// Address Range: [[004b5fd0, 004b60b5]]
// Convention: unknown
// Signature: void FUN_004b5fd0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5fd0(uint *param_1)

{
  int iVar1;
  
  if (_DAT_01d06a74 != 0) {
    FUN_005600c0(_DAT_01d06a74);
  }
  if (((DAT_006141bc != param_1[1]) || (DAT_006141c0 != param_1[2])) &&
     (iVar1 = FUN_00588a50(*param_1,param_1[1],param_1[2]), iVar1 == 0)) {
    param_1[1] = 0x1e0;
    *param_1 = 0x280;
    iVar1 = FUN_00588a50(*param_1,param_1[1],param_1[2]);
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\game.cpp";
      _DAT_01d046a4 = 0x504;
      FUN_004e4500("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",*param_1,param_1[1],param_1[2]);
    }
  }
  thunk_FUN_00588de0();
  FUN_0043b570(0x1fc7838,DAT_006141bc);
  if (DAT_006141bc < 0x180) {
    _DAT_01c25590 = _DAT_01511cc4;
    return;
  }
  return;
}
