// Name: FUN_005990d0
// Address: 005990d0
// Address Range: [[005990d0, 00599144]]
// Convention: unknown
// Signature: void FUN_005990d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005990d0(int param_1)

{
  uint uVar1;
  
  FUN_00569b20(param_1 + 0x158);
  FUN_004a0510(param_1);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  _DAT_02c8ad48 = FUN_005634f0(uVar1,"bipHand",1);
  _DAT_02c8ad4c = FUN_005634f0(uVar1,"bipArm 2",1);
  _DAT_02c8ad50 = FUN_005634f0(uVar1,"bipArm 1",1);
  _DAT_02c8ad54 = 0;
  return;
}
