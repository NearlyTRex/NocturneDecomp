// Name: core_gabriela.cpp_CGabriella_getTorsoCenterPosition_FUN_00497870
// Address: 00497870
// Address Range: [[00497870, 004978fc]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_00497870(CGabriella *this_ptr,CVector3f *out_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_00497870(CGabriella *this_ptr,CVector3f *out_position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  CDeformableModelInstance *this_ptr_00;
  CVector3f local_30 [2];
  CVector3f local_18;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (this_ptr_00,local_30,_DAT_01c713dc);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (this_ptr_00,&local_18,_DAT_01c713d8);
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
