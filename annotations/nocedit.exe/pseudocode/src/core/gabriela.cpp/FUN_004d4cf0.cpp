// Name: core_gabriela.cpp_FUN_004d4cf0
// Address: 004d4cf0
// Address Range: [[004d4cf0, 004d4d7c]]
// Convention: unknown
// Signature: float * core_gabriela_cpp_FUN_004d4cf0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d4cf0(uint param_1, uint
   param_2) */

float * core_gabriela_cpp_FUN_004d4cf0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  int in_stack_00000004;
  float *in_stack_00000008;
  CVector3f local_30 [2];
  CVector3f local_18;
  
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),local_30,INT_02d7b88c)
  ;
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_18,INT_02d7b888
                     );
  fVar5 = 0.5f;
  fVar1 = pCVar7->y;
  fVar2 = pCVar6->y;
  fVar3 = pCVar7->z;
  fVar4 = pCVar6->z;
  *in_stack_00000008 = (pCVar7->x + pCVar6->x) * 0.5f;
  in_stack_00000008[1] = (fVar1 + fVar2) * fVar5;
  in_stack_00000008[2] = fVar5 * (fVar3 + fVar4);
  return in_stack_00000008;
}
