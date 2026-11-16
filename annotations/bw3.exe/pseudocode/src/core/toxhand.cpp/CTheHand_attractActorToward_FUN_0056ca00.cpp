// Name: core_toxhand.cpp_CTheHand_attractActorToward_FUN_0056ca00
// Address: 0056ca00
// Address Range: [[0056ca00, 0056cb8d]]
// Convention: __cdecl
// Signature: int __cdecl core_toxhand_cpp_CTheHand_attractActorToward_FUN_0056ca00(CTheHand *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_toxhand_cpp_CTheHand_attractActorToward_FUN_0056ca00(CTheHand *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  CCharacter *pCVar1;
  int iVar2;
  CVector3f *unaff_ESI;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  uint auStackY_101c [905];
  CMatrix3x4f CStack_1e4;
  CMatrix3x4f CStack_1b4;
  CMatrix3x4f CStack_184;
  CMatrix3x4f CStack_154;
  CMatrix3x4f CStack_124;
  CMatrix3x4f CStack_f4;
  CMatrix3x4f CStack_c4;
  CMatrix3x4f CStack_94;
  CMatrix3x4f CStack_64;
  UOrientationVector UStack_34;
  float fStack_28;
  float afStack_24 [5];
  CVector3f CStack_10;
  
  bVar6 = 0;
  if ((CCharacter *)actor != (this_ptr->base).victim) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005854a0
            (&this_ptr->target_matrix,&this_ptr->prev_target_matrix,this_ptr->target_blend,
             &CStack_c4);
  pCVar4 = &CStack_c4;
  pCVar3 = &CStack_184;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
            (&CStack_154,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  pCVar4 = &CStack_154;
  core_toxhand_cpp_CTheHand_getHandBoneMatrix_FUN_0056cbd0(this_ptr,&CStack_1b4);
  pCVar3 = &CStack_1b4;
  pCVar5 = &CStack_f4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_184,&CStack_f4,&CStack_64);
  pCVar3 = &CStack_64;
  pCVar5 = &CStack_1e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_1e4,pCVar4,&CStack_94);
  pCVar4 = &CStack_94;
  pCVar3 = &CStack_124;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_00584450(&CStack_124,&CStack_10);
  fStack_28 = CStack_10.x;
  afStack_24[(uint)bVar6 * 0xfffffffe] =
       (float)*(uint *)((int)&CStack_10 + (uint)bVar6 * -8 + 4);
  afStack_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       (float)*(uint *)((int)&CStack_10 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  pCVar1 = (this_ptr->base).victim;
  (pCVar1->base).location.position.x = fStack_28;
  (pCVar1->base).location.position.y = afStack_24[0];
  (pCVar1->base).location.position.z = afStack_24[1];
  core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&CStack_124,unaff_ESI);
  UStack_34.vec.x = afStack_24[2];
  *(float *)((int)&UStack_34 + (uint)bVar6 * -8 + 4) = afStack_24[(uint)bVar6 * -2 + 3];
  *(float *)((int)&UStack_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       afStack_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  core_charactr_cpp_CCharacter_setOrientation_FUN_00433220((this_ptr->base).victim,&UStack_34);
  return 1;
}
