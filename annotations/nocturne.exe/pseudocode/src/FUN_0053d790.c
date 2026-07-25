// Name: FUN_0053d790
// Address: 0053d790
// Address Range: [[0053d790, 0053d90c]]
// Convention: unknown
// Signature: float * FUN_0053d790(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float * FUN_0053d790(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  uint uVar5;
  ulonglong in_stack_ffffffac;
  ulonglong uVar6;
  float local_24;
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffac >> 0x20);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(param_1,param_2);
  fVar2 = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  if ((float)0.01 < fVar2) {
    pfVar1 = param_1 + 1;
    if ((((float)0.01 <= fVar2) &&
        (fVar3 = SQRT(fVar2 * fVar2 - -*param_3 * -*param_3) / fVar2, fVar3 < 1.0)) &&
       (0.0 <= fVar3)) {
      uVar6 = CONCAT44(uVar5,0x53d8c8);
      fVar4 = (float10)acos((float10)fVar3);
      if (0.0 <= local_24) {
        fVar3 = *pfVar1 + (float)fVar4;
      }
      else {
        fVar3 = *pfVar1 - (float)fVar4;
      }
      *pfVar1 = fVar3;
      fVar3 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*pfVar1,uVar6);
      *pfVar1 = fVar3;
    }
    if (((0.01 <= (double)fVar2) &&
        (fVar2 = SQRT(fVar2 * fVar2 - param_3[1] * param_3[1]) / fVar2, fVar2 < 1.0)) &&
       (0.0 <= fVar2)) {
      uVar5 = 0x53d84d;
      fVar4 = (float10)acos((float10)fVar2);
      if (0.0 <= local_24) {
        fVar2 = *param_1 + (float)fVar4;
      }
      else {
        fVar2 = *param_1 - (float)fVar4;
      }
      *param_1 = fVar2;
      fVar2 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*param_1,uVar5);
      *param_1 = fVar2;
    }
  }
  return param_1;
}
