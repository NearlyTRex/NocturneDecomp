// Name: FUN_00538440
// Address: 00538440
// Address Range: [[00538440, 005384cc]]
// Convention: unknown
// Signature: float * FUN_00538440(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00538440(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  byte local_30 [24];
  byte local_18 [12];
  
  pfVar6 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                              (param_1 + 0x150,local_30,_DAT_02dc9f88);
  pfVar7 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                              (param_1 + 0x150,local_18,_DAT_02dc9f84);
  fVar5 = _DAT_0059580f;
  fVar1 = pfVar7[1];
  fVar2 = pfVar6[1];
  fVar3 = pfVar7[2];
  fVar4 = pfVar6[2];
  *param_2 = (*pfVar7 + *pfVar6) * _DAT_0059580f;
  param_2[1] = (fVar1 + fVar2) * fVar5;
  param_2[2] = fVar5 * (fVar3 + fVar4);
  return param_2;
}
