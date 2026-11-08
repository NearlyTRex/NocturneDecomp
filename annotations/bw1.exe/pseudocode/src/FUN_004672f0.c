// Name: FUN_004672f0
// Address: 004672f0
// Address Range: [[004672f0, 00467390]]
// Convention: unknown
// Signature: void FUN_004672f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004672f0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x110) < 1) {
    return;
  }
  uVar1 = FUN_004672b0(param_1,param_2);
  FUN_00553140(0x01E82168,*(uint *)(param_1 + 0x104),uVar1);
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
                 *(uint *)(param_1 + 0x114),uVar1,4,*(int *)(param_1 + 0x108));
    return;
  }
  FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
               *(uint *)(param_1 + 0x114),uVar1,4,0);
  return;
}
