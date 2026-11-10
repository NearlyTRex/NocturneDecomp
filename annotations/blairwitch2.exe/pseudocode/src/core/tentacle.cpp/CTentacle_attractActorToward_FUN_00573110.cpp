// Name: core_tentacle.cpp_CTentacle_attractActorToward_FUN_00573110
// Address: 00573110
// Address Range: [[00573110, 0057329d]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_attractActorToward_FUN_00573110(CTentacle *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_attractActorToward_FUN_00573110(CTentacle *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  CCharacter *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_101c [905];
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
  uint auStack_30 [4];
  uint uStack_20;
  uint uStack_1c;
  uint uStack_10;
  
  bVar5 = 0;
  if ((CCharacter *)actor != (this_ptr->base).victim) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_00593770
            (&this_ptr->target_matrix,&this_ptr->prev_target_matrix,this_ptr->target_blend);
  puVar3 = auStack_c4;
  puVar4 = auStack_184;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_FUN_00591c10
            (auStack_154,&(this_ptr->base).base.base.field_0x20,&(this_ptr->base).base.base.orient);
  core_tentacle_cpp_FUN_005732e0(this_ptr,auStack_154);
  puVar3 = auStack_1b4;
  puVar4 = auStack_f4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_184,auStack_f4);
  puVar3 = auStack_64;
  puVar4 = auStack_1e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_1e4);
  puVar3 = auStack_94;
  puVar4 = auStack_124;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_FUN_00592720(auStack_124);
  auStack_30[2] = uStack_10;
  auStack_30[(uint)bVar5 * -2 + 3] = auStack_30[(uint)bVar5 * -2 + 9];
  auStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       auStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  pCVar1 = (this_ptr->base).victim;
  *(uint *)&(pCVar1->base).field_0x20 = auStack_30[2];
  *(uint *)&(pCVar1->base).field_0x24 = auStack_30[3];
  *(uint *)&(pCVar1->base).field_0x28 = uStack_20;
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(auStack_124);
  uStack_34 = uStack_1c;
  auStack_30[(uint)bVar5 * -2] = auStack_30[(uint)bVar5 * -2 + 6];
  auStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       auStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_charactr_cpp_FUN_00429d60((this_ptr->base).victim,&uStack_34);
  return 1;
}
