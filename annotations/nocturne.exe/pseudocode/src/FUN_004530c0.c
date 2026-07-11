// Name: FUN_004530c0
// Address: 004530c0
// Address Range: [[004530c0, 00453160]]
// Convention: unknown
// Signature: void FUN_004530c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004530c0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x110) < 1) {
    return;
  }
  uVar1 = FUN_00453080(param_1,param_2);
  FUN_0050c200(0x01E57284,*(uint *)(param_1 + 0x104),uVar1);
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_0050c2d0(0x01E57284,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
                 *(uint *)(param_1 + 0x114),uVar1,4,*(int *)(param_1 + 0x108));
    return;
  }
  FUN_0050c2d0(0x01E57284,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
               *(uint *)(param_1 + 0x114),uVar1,4,0);
  return;
}
