// Name: core_tentacle.cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0
// Address: 005db9d0
// Address Range: [[005db9d0, 005dbb29]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0(CTentacle *this_ptr,CCharacter *character)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0(CTentacle *this_ptr,CCharacter *character)

{
  CCharacter *pCVar1;
  CVector3f *pCVar2;
  UOrientationVector *orientation;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CMatrix3x4f local_1cc;
  CMatrix3x4f local_19c;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CMatrix3x4f local_4c;
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar7 = 0;
  if (character != (this_ptr->base).victim) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            (&this_ptr->target_matrix,&this_ptr->prev_target_matrix,this_ptr->target_blend,
             &local_1cc);
  pCVar5 = &local_1cc;
  pCVar4 = &local_16c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar4->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_13c,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  pCVar5 = &local_13c;
  core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(this_ptr,&local_4c);
  pCVar4 = &local_4c;
  pCVar6 = &local_dc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_16c,&local_dc,&local_7c);
  pCVar4 = &local_7c;
  pCVar6 = &local_19c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,pCVar5,&local_ac);
  pCVar5 = &local_ac;
  pCVar4 = &local_10c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar4->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  pCVar2 = core_xform_cpp_getTranslation_FUN_005f6110(&local_10c,&local_10);
  pCVar1 = (this_ptr->base).victim;
  (pCVar1->base).location.position.x = pCVar2->x;
  (pCVar1->base).location.position.y = pCVar2->y;
  (pCVar1->base).location.position.z = pCVar2->z;
  orientation = (UOrientationVector *)
                core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_10c,&local_1c)
  ;
  core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0((this_ptr->base).victim,orientation);
  return 1;
}
