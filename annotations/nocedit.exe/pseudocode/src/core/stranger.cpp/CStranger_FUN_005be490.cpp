// Name: core_stranger.cpp_CStranger_FUN_005be490
// Address: 005be490
// Address Range: [[005be490, 005be51c]]
// Convention: unknown
// Signature: float * core_stranger_cpp_CStranger_FUN_005be490(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005be490(CStranger* param_1,
   uint param_2) */

float * core_stranger_cpp_CStranger_FUN_005be490(void)

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
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),local_30,INT_03f6bb04)
  ;
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_18,INT_03f6bb00
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
