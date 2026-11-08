// Name: FUN_0059e7d0
// Address: 0059e7d0
// Address Range: [[0059e7d0, 0059e87a]]
// Convention: unknown
// Signature: void FUN_0059e7d0(int param_1,float param_2)

#include "nocturne.h"

void FUN_0059e7d0(int param_1,float param_2)

{
  int iVar1;
  float afStack_18 [2];
  
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  afStack_18[0] = param_2 * *(float *)(param_1 + 0x10a60);
  while (0.0 < afStack_18[0]) {
    iVar1 = FUN_005030c0(param_1 + 0x2b4,afStack_18);
    if (iVar1 < 100) {
      FUN_0042aa00(param_1,iVar1);
    }
    if (100 < iVar1) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x168))(param_1,iVar1);
    }
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60) * *(float *)(param_1 + 0x1134c));
  return;
}
