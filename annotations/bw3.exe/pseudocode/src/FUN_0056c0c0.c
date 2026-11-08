// Name: FUN_0056c0c0
// Address: 0056c0c0
// Address Range: [[0056c0c0, 0056c134]]
// Convention: unknown
// Signature: void FUN_0056c0c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056c0c0(int param_1)

{
  uint uVar1;
  
  FUN_0054e6b0(param_1 + 0x158);
  FUN_00489110(param_1);
  uVar1 = FUN_0054eac0(param_1 + 0x158);
  _DAT_02cfd798 = FUN_00548090(uVar1,"bipHand",1);
  _DAT_02cfd79c = FUN_00548090(uVar1,"bipArm 2",1);
  _DAT_02cfd7a0 = FUN_00548090(uVar1,"bipArm 1",1);
  _DAT_02cfd7a4 = 0;
  return;
}
