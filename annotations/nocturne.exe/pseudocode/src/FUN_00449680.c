// Name: FUN_00449680
// Address: 00449680
// Address Range: [[00449680, 0044971d]]
// Convention: unknown
// Signature: undefined4 FUN_00449680(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

uint FUN_00449680(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  int iVar2;
  
  param_1[0xf] = *param_2;
  param_1[0x10] = param_2[2];
  param_1[0x11] = *param_3;
  param_1[0x12] = param_3[2];
  iVar2 = FUN_004493a0(param_1);
  if (((iVar2 != 0) &&
      (fVar1 = ((float)param_3[1] - (float)param_2[1]) * (float)param_1[0x14] + (float)param_2[1],
      (float)param_1[10] < fVar1)) && (fVar1 < (float)param_1[9])) {
    param_1[2] = 0;
    *param_1 = param_1[0x13];
    param_1[3] = ((float)param_1[7] * (float)param_1[0x13] + (float)param_1[5]) -
                 (float)param_1[0x16];
    param_1[1] = ((float)param_1[6] * (float)param_1[0x13] + (float)param_1[4]) -
                 (float)param_1[0x15];
    return 1;
  }
  return 0;
}
