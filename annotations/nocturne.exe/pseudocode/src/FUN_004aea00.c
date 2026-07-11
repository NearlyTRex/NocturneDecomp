// Name: FUN_004aea00
// Address: 004aea00
// Address Range: [[004aea00, 004aead2]]
// Convention: unknown
// Signature: void FUN_004aea00(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aea00(uint *param_1,float *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  float10 fVar2;
  
  param_1[4] = 1;
  if ((float *)(param_1 + 1) != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  fVar2 = (float10)param_3[1];
  FUN_00566c81();
  param_1[8] = 0;
  param_1[6] = (float)-fVar2;
  fVar2 = (float10)*param_3;
  FUN_00566c81();
  param_1[7] = (float)fVar2;
  uVar1 = FUN_0040de00(0,3);
  param_1[10] = uVar1;
  param_1[9] = 0;
  param_1[0xb] = (int)ROUND(*param_2 * _DAT_0059e4d4);
  param_1[0xc] = (int)ROUND(param_2[1] * _DAT_0059e4d4);
  param_1[0xd] = (int)ROUND(param_2[2] * _DAT_0059e4d4);
  param_1[0xe] = (int)ROUND(*param_3 * _DAT_0059e4d8);
  param_1[0xf] = (int)ROUND(param_3[1] * _DAT_0059e4d8);
  param_1[0x10] = (int)ROUND(param_3[2] * _DAT_0059e4d8);
  *param_1 = 0;
  param_1[5] = param_4;
  return;
}
