// Name: core_toxhand.cpp_CTheHand_attractActorToward_FUN_0056ca00
// Address: 0056ca00
// Address Range: [[0056ca00, 0056cb8d]]
// Convention: __cdecl
// Signature: int __cdecl core_toxhand_cpp_CTheHand_attractActorToward_FUN_0056ca00(CTheHand *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

int __cdecl core_toxhand_cpp_CTheHand_attractActorToward_FUN_0056ca00(CTheHand *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  CCharacter *pCVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_101c [905];
  CMatrix3x4f CStack_1e4;
  float afStack_1b4 [12];
  CMatrix3x4f CStack_184;
  CMatrix3x4f CStack_154;
  float afStack_124 [12];
  CMatrix3x4f CStack_f4;
  float afStack_c4 [12];
  CMatrix3x4f CStack_94;
  CMatrix3x4f CStack_64;
  uint uStack_34;
  float afStack_30 [4];
  float fStack_20;
  uint uStack_1c;
  float fStack_10;
  
  bVar7 = 0;
  if ((CCharacter *)actor != (this_ptr->base).victim) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005854a0
            (&this_ptr->target_matrix,&this_ptr->prev_target_matrix,this_ptr->target_blend);
  pfVar3 = afStack_c4;
  pCVar5 = &CStack_184;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_FUN_00583940
            (&CStack_154,&(this_ptr->base).base.base.location,&(this_ptr->base).base.base.orient);
  pCVar5 = &CStack_154;
  core_toxhand_cpp_FUN_0056cbd0(this_ptr);
  pfVar3 = afStack_1b4;
  pCVar4 = &CStack_f4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_184,&CStack_f4,&CStack_64);
  pCVar4 = &CStack_64;
  pCVar6 = &CStack_1e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_1e4,pCVar5,&CStack_94);
  pCVar5 = &CStack_94;
  pfVar3 = afStack_124;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_FUN_00584450(afStack_124);
  afStack_30[2] = fStack_10;
  afStack_30[(uint)bVar7 * -2 + 3] = afStack_30[(uint)bVar7 * -2 + 9];
  afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  pCVar1 = (this_ptr->base).victim;
  (pCVar1->base).location.position.x = afStack_30[2];
  (pCVar1->base).location.position.y = afStack_30[3];
  (pCVar1->base).location.position.z = fStack_20;
  core_xform_cpp_matrixToEulerAngles_FUN_00583b10(afStack_124);
  uStack_34 = uStack_1c;
  afStack_30[(uint)bVar7 * -2] = afStack_30[(uint)bVar7 * -2 + 6];
  afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  core_charactr_cpp_FUN_00433220((this_ptr->base).victim,&uStack_34);
  return 1;
}
