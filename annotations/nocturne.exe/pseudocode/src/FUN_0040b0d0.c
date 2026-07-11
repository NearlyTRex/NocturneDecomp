// Name: FUN_0040b0d0
// Address: 0040b0d0
// Address Range: [[0040b0d0, 0040b10d]]
// Convention: unknown
// Signature: void FUN_0040b0d0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b0d0(int param_1,uint param_2)

{
  FUN_0040e120(param_2,param_1);
  FUN_0040e100(param_2,param_1 + 0x20);
  FUN_0040e100(param_2,param_1 + 0x30);
  FUN_0040e0e0(param_2,*(uint *)(param_1 + 0x70));
  return;
}
