// Name: FUN_004b7de0
// Address: 004b7de0
// Address Range: [[004b7de0, 004b7ed9]]
// Convention: unknown
// Signature: void FUN_004b7de0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7de0(uint *param_1)

{
  int iVar1;
  
  if (_DAT_01d74020 != 0) {
    FUN_005663e0(_DAT_01d74020);
  }
  if (((DAT_005fba1c != param_1[1]) || (DAT_005fba20 != param_1[2])) &&
     (iVar1 = FUN_00579bb0(*param_1,param_1[1],param_1[2]), iVar1 == 0)) {
    param_1[1] = 0x1e0;
    *param_1 = 0x280;
    iVar1 = FUN_00579bb0(*param_1,param_1[1],param_1[2]);
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\game.cpp";
      _DAT_01d71de4 = 0x526;
      FUN_004e4330("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",*param_1,param_1[1],param_1[2]);
    }
  }
  thunk_FUN_0057a0e0();
  FUN_00448d70(0x2038f4c,DAT_005fba1c);
  if (DAT_005fba1c < 0x180) {
    _DAT_01c5b0e0 = _DAT_01549ab4;
  }
  _DAT_01d22c3c = (uint)(DAT_005fba1c != 0x1e0);
  return;
}
