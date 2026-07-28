// Name: core_stranger.cpp_FUN_00538440
// Address: 00538440
// Address Range: [[00538440, 005384cc]]
// Convention: unknown
// Signature: float * core_stranger_cpp_FUN_00538440(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_stranger_cpp_FUN_00538440(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  CVector3f local_30 [2];
  CVector3f local_18;
  
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     ((CDeformableModelInstance *)(param_1 + 0x150),local_30,_DAT_02dc9f88);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_18,_DAT_02dc9f84);
  fVar5 = 0.5f;
  fVar1 = pCVar7->y;
  fVar2 = pCVar6->y;
  fVar3 = pCVar7->z;
  fVar4 = pCVar6->z;
  *param_2 = (pCVar7->x + pCVar6->x) * 0.5f;
  param_2[1] = (fVar1 + fVar2) * fVar5;
  param_2[2] = fVar5 * (fVar3 + fVar4);
  return param_2;
}
