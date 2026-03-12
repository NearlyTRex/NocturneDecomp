// Name: core_gabriela.cpp_CGabriella_getTorsoCenterPosition_FUN_004d4cf0
// Address: 004d4cf0
// Address Range: [[004d4cf0, 004d4d7c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004d4cf0(CGabriella *this_ptr,CVector3f *out_position)

#include "nocturne.h"

CVector3f * __cdecl core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004d4cf0(CGabriella *this_ptr,CVector3f *out_position)

{
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  CDeformableModelInstance *this_ptr_00;
  CVector3f local_30 [2];
  CVector3f local_18;
  float fVar5;
  float fVar3;
  float fVar4;
  float fVar1;
  float fVar2;
  
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
  out_position->x = (pCVar7->x + pCVar6->x) * 0.5f;
  out_position->y = (fVar1 + fVar2) * fVar5;
  out_position->z = fVar5 * (fVar3 + fVar4);
  return out_position;
}
