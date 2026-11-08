// Name: FUN_00409df0
// Address: 00409df0
// Address Range: [[00409df0, 00409e2d]]
// Convention: unknown
// Signature: void FUN_00409df0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00409df0(int param_1,uint param_2)

{
  FUN_0040d2e0(param_2,param_1);
  FUN_0040d2c0(param_2,param_1 + 0x20);
  FUN_0040d2c0(param_2,param_1 + 0x30);
  FUN_0040d2a0(param_2,*(uint *)(param_1 + 0x70));
  return;
}
