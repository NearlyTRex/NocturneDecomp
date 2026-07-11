// Name: FUN_0049d870
// Address: 0049d870
// Address Range: [[0049d870, 0049d955]]
// Convention: unknown
// Signature: void FUN_0049d870(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d870(uint *param_1)

{
  int iVar1;
  
  if (_DAT_01cc64a4 != 0) {
    FUN_00532d00(_DAT_01cc64a4);
  }
  if (((DAT_005b7620 != param_1[1]) || (DAT_005b7624 != param_1[2])) &&
     (iVar1 = FUN_00552e00(*param_1,param_1[1],param_1[2]), iVar1 == 0)) {
    param_1[1] = 0x1e0;
    *param_1 = 0x280;
    iVar1 = FUN_00552e00(*param_1,param_1[1],param_1[2]);
    if (iVar1 == 0) {
      _DAT_01cc4800 = "P?..\\core\\game.cpp" + 2;
      _DAT_01cc4804 = 0x497;
      FUN_004c8440("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",*param_1,param_1[1],param_1[2]);
    }
  }
  thunk_FUN_00553190();
  FUN_00440010(0x1fb8508,DAT_005b7620);
  if (DAT_005b7620 < 0x180) {
    _DAT_01bcd070 = _DAT_014b9904;
    return;
  }
  return;
}
