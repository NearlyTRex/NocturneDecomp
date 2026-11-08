// Name: FUN_004ce3d0
// Address: 004ce3d0
// Address Range: [[004ce3d0, 004ce495]]
// Convention: unknown
// Signature: void FUN_004ce3d0(int param_1)

#include "nocturne.h"

void FUN_004ce3d0(int param_1)

{
  int iVar1;
  
  *(byte **)(param_1 + 0x2b0) = &DAT_005f8274;
  iVar1 = 0;
  do {
    if (param_1 == *(int *)(iVar1 + 0x1cedee4)) {
      *(uint *)(iVar1 + 0x1cedee4) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  iVar1 = FUN_004da840(param_1 + 0x24fc4,0);
  iVar1 = FUN_004da840(iVar1 + -0x624,0);
  iVar1 = FUN_004da840(iVar1 + -0x624,0);
  iVar1 = FUN_00511d10(iVar1 + -0x138e0,0);
  iVar1 = FUN_0040f2b0(iVar1 + -0xd07c,0);
  iVar1 = FUN_0059df70(iVar1 + -0x9c8,0);
  iVar1 = FUN_005b1480(iVar1 + -0x34c,0);
  iVar1 = FUN_00544d50(iVar1 + -0x2a58,0);
  FUN_00408930(iVar1 + -0x2b4,1);
  return;
}
