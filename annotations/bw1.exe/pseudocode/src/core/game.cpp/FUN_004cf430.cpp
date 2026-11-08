// Name: FUN_004cf430
// Address: 004cf430
// Address Range: [[004cf430, 004cf529]]
// Convention: unknown
// Signature: void FUN_004cf430(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cf430(uint *param_1)

{
  int iVar1;
  
  if (_DAT_01d1f5d4 != 0) {
    FUN_00582b10(_DAT_01d1f5d4);
  }
  if (((DAT_0061b49c != param_1[1]) || (DAT_0061b4a0 != param_1[2])) &&
     (iVar1 = FUN_005ac300(*param_1,param_1[1],param_1[2]), iVar1 == 0)) {
    param_1[1] = 0x1e0;
    *param_1 = 0x280;
    iVar1 = FUN_005ac300(*param_1,param_1[1],param_1[2]);
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\game.cpp";
      _DAT_01d1d404 = 0x529;
      FUN_005030e0("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",*param_1,param_1[1],param_1[2]);
    }
  }
  thunk_FUN_005ac830();
  FUN_0044cc30(0x1fe37ec,DAT_0061b49c);
  if (DAT_0061b49c < 0x180) {
    _DAT_01c3eb50 = _DAT_0152d248;
  }
  _DAT_01cd0c34 = (uint)(DAT_0061b49c != 0x1e0);
  return;
}
