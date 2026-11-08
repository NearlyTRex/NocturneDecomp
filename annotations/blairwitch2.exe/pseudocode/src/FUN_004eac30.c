// Name: FUN_004eac30
// Address: 004eac30
// Address Range: [[004eac30, 004eacb5]]
// Convention: unknown
// Signature: void FUN_004eac30(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void FUN_004eac30(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040c8f0(param_4,DAT_007bdc94);
  if (iVar1 != 0) {
    FUN_004eacc0(param_1,0x14,*(uint *)(iVar1 + 0x280c));
    if (param_2 == 1) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x6fc);
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x760);
    return;
  }
  if (param_4 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x7c4);
  return;
}
