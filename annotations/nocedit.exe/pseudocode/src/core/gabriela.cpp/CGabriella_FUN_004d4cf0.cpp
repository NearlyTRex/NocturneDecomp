// Name: core_gabriela.cpp_CGabriella_FUN_004d4cf0
// Address: 004d4cf0
// Address Range: [[004d4cf0, 004d4d7c]]
// Convention: __cdecl
// Signature: float * __cdecl core_gabriela_cpp_CGabriella_FUN_004d4cf0(CGabriella *this_ptr)

#include "nocturne.h"

float * __cdecl core_gabriela_cpp_CGabriella_FUN_004d4cf0(CGabriella *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  CDeformableModelInstance *this_ptr_00;
  float *in_stack_00000008;
  CVector3f local_30 [2];
  CVector3f local_18;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr_00,local_30,INT_02d7b88c);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr_00,&local_18,INT_02d7b888);
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
