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
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_101c [905];
  uint auStack_1e4 [12];
  uint auStack_1b4 [12];
  uint auStack_184 [12];
  byte auStack_154 [48];
  uint auStack_124 [12];
  uint auStack_f4 [12];
  uint auStack_c4 [12];
  uint auStack_94 [12];
  uint auStack_64 [12];
  uint uStack_34;
  float afStack_30 [4];
  float fStack_20;
  uint uStack_1c;
  float fStack_10;
  
  bVar5 = 0;
  if ((CCharacter *)actor != (this_ptr->base).victim) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005854a0
            (&this_ptr->target_matrix,&this_ptr->prev_target_matrix,this_ptr->target_blend);
  puVar3 = auStack_c4;
  puVar4 = auStack_184;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_FUN_00583940
            (auStack_154,&(this_ptr->base).base.base.location,&(this_ptr->base).base.base.orient);
  core_toxhand_cpp_FUN_0056cbd0(this_ptr,auStack_154);
  puVar3 = auStack_1b4;
  puVar4 = auStack_f4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_184,auStack_f4);
  puVar3 = auStack_64;
  puVar4 = auStack_1e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_1e4);
  puVar3 = auStack_94;
  puVar4 = auStack_124;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_FUN_00584450(auStack_124);
  afStack_30[2] = fStack_10;
  afStack_30[(uint)bVar5 * -2 + 3] = afStack_30[(uint)bVar5 * -2 + 9];
  afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  pCVar1 = (this_ptr->base).victim;
  (pCVar1->base).location.position.x = afStack_30[2];
  (pCVar1->base).location.position.y = afStack_30[3];
  (pCVar1->base).location.position.z = fStack_20;
  core_xform_cpp_matrixToEulerAngles_FUN_00583b10(auStack_124);
  uStack_34 = uStack_1c;
  afStack_30[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2 + 6];
  afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_charactr_cpp_FUN_00433220((this_ptr->base).victim,&uStack_34);
  return 1;
}
