// Name: FUN_0057f8e0
// Address: 0057f8e0
// Address Range: [[0057f8e0, 0057f948]]
// Convention: unknown
// Signature: void FUN_0057f8e0(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0057f8e0(int param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  
  FUN_00409ed0(param_1,param_2);
  if (*(int *)(param_1 + 0x9b4) == 0) {
    return;
  }
  *param_2 = 1;
  uVar2 = *(uint *)(param_1 + 0x9b8);
  param_2[4] = 0x40c90fdb;
  param_2[5] = 0xc0c90fdb;
  param_2[1] = uVar2;
  fVar3 = 0xBF060A92;
  param_2[6] = 0x3F9C61AA - *(float *)(param_1 + 0x30);
  fVar1 = *(float *)(param_1 + 0x30);
  param_2[2] = 0xc0800000;
  param_2[7] = fVar3 - fVar1;
  param_2[3] = 0;
  return;
}
