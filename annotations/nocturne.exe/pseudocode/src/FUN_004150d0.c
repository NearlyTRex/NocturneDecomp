// Name: FUN_004150d0
// Address: 004150d0
// Address Range: [[004150d0, 00415155]]
// Convention: unknown
// Signature: void FUN_004150d0(int param_1,float param_2)

#include "nocturne.h"

void FUN_004150d0(int param_1,float param_2)

{
  int iVar1;
  float local_10;
  
  iVar1 = FUN_004259f0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    local_10 = param_2 * *(float *)(param_1 + 0xbc8c);
    while (0.0 < local_10) {
      FUN_004e11c0(param_1 + 0x150,&local_10);
    }
    FUN_004259a0(param_1);
    FUN_0051b8a0(param_1 + 0x150);
    FUN_0042a150(param_1,param_2);
  }
  return;
}
