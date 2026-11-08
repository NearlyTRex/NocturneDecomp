// Name: FUN_004338a0
// Address: 004338a0
// Address Range: [[004338a0, 004338c9]]
// Convention: unknown
// Signature: void FUN_004338a0(int *param_1,int param_2,uint param_3)

#include "nocturne.h"

void FUN_004338a0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (0 < param_2) {
    uVar1 = param_1[1] << ((byte)param_2 & 0x1f);
    param_1[1] = uVar1;
    *param_1 = *param_1 + param_2;
    param_1[1] = uVar1 | param_3;
  }
  return;
}
