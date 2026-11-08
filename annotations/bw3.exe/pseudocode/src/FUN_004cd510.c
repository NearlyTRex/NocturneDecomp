// Name: FUN_004cd510
// Address: 004cd510
// Address Range: [[004cd510, 004cd5f4]]
// Convention: unknown
// Signature: void FUN_004cd510(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cd510(uint *param_1,float *param_2,float *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  param_1[5] = 1;
  if ((float *)(param_1 + 1) != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  fVar3 = (float10)param_3[1];
  FUN_005a5cc1();
  param_1[9] = 0;
  param_1[7] = (float)-fVar3;
  fVar3 = (float10)*param_3;
  FUN_005a5cc1();
  param_1[8] = (float)fVar3;
  uVar2 = FUN_0040cea0(0,3);
  param_1[0xb] = uVar2;
  param_1[10] = 0;
  param_1[0xc] = (int)ROUND(*param_2 * _DAT_005e0e18);
  param_1[0xd] = (int)ROUND(param_2[1] * _DAT_005e0e18);
  param_1[0xe] = (int)ROUND(param_2[2] * _DAT_005e0e18);
  param_1[0xf] = (int)ROUND(*param_3 * _DAT_005e0e1c);
  param_1[0x10] = (int)ROUND(param_3[1] * _DAT_005e0e1c);
  param_1[0x11] = (int)ROUND(param_3[2] * _DAT_005e0e1c);
  param_1[6] = param_4;
  iVar1 = _DAT_01d5ba14;
  *param_1 = 0;
  param_1[4] = *(uint *)(*(int *)(iVar1 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
