// Name: FUN_00467930
// Address: 00467930
// Address Range: [[00467930, 004679fd]]
// Convention: unknown
// Signature: float * FUN_00467930(undefined4 param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

float * FUN_00467930(uint param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)FUN_00467a00(param_1,param_3,param_4,0,0);
  if ((0.0 <= fVar5) && (fVar5 < 1.0)) {
    fVar1 = param_4[1];
    fVar2 = param_3[1];
    fVar3 = param_4[2];
    fVar4 = param_3[2];
    *param_2 = *param_3 + (*param_4 - *param_3) * fVar5;
    param_2[1] = param_3[1] + (fVar1 - fVar2) * fVar5;
    param_2[2] = param_3[2] + (fVar3 - fVar4) * fVar5;
    return param_2;
  }
  *param_2 = *param_4;
  param_2[1] = param_4[1];
  param_2[2] = param_4[2];
  return param_2;
}
