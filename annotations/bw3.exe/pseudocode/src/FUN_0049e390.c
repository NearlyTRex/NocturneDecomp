// Name: FUN_0049e390
// Address: 0049e390
// Address Range: [[0049e390, 0049e4f3]]
// Convention: unknown
// Signature: void FUN_0049e390(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e390(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar3 = *(float *)(0x01D2130C + 0x314);
  fVar2 = param_1[3];
  param_1[3] = fVar2 - fVar3;
  if (fVar2 - fVar3 <= 0.0) {
    param_1[3] = 0.0;
  }
  else {
    pfVar1 = param_1 + 4;
    fVar2 = (float)_DAT_005c0870;
    *param_1 = *param_1 + *pfVar1 * fVar3;
    param_1[1] = param_1[1] + param_1[5] * fVar3;
    param_1[2] = param_1[2] + param_1[6] * fVar3;
    fVar4 = param_1[5] * _DAT_005c0868;
    fVar5 = param_1[6] * _DAT_005c0868;
    *pfVar1 = *pfVar1 * _DAT_005c0868;
    param_1[5] = fVar4;
    param_1[6] = fVar5;
    param_1[5] = fVar3 * fVar2 + param_1[5];
    if (param_1[9] == 0.0) {
      iVar6 = FUN_0040cf40(fVar3 * (float)_DAT_005c0878);
      if (iVar6 != 0) {
        FUN_004a2560(0x01C73654,param_1,0x3f000000,0,0x4000);
      }
      if (param_1[8] != 0.0) {
        iVar6 = FUN_0040cf40(fVar3);
        if (iVar6 != 0) {
          FUN_0049df60(param_1);
        }
      }
    }
    fVar2 = fVar3 * _DAT_005df908 + param_1[7];
    while( true ) {
      param_1[7] = fVar2;
      if (param_1[7] < (float)(int)param_1[10]) break;
      fVar2 = param_1[7] - (float)(int)param_1[10];
    }
  }
  return;
}
