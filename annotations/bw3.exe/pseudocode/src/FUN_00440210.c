// Name: FUN_00440210
// Address: 00440210
// Address Range: [[00440210, 00440239]]
// Convention: unknown
// Signature: void FUN_00440210(int *param_1,int param_2,uint param_3)

#include "nocturne.h"

void FUN_00440210(int *param_1,int param_2,uint param_3)

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
