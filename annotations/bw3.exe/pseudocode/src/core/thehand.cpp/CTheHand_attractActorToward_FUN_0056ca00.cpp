// Name: core_thehand.cpp_CTheHand_attractActorToward_FUN_0056ca00
// Address: 0056ca00
// Address Range: [[0056ca00, 0056cb8d]]
// Convention: __cdecl
// Signature: int __cdecl core_thehand_cpp_CTheHand_attractActorToward_FUN_0056ca00(CTheHand *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

int __cdecl core_thehand_cpp_CTheHand_attractActorToward_FUN_0056ca00(CTheHand *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_101c [905];
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
  
  bVar4 = 0;
  if (actor != *(CDemonActor **)&this_ptr->field_0xcde4) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005854a0
            (&this_ptr->field_0xd060,&this_ptr->field_0xd090,*(uint *)&this_ptr->field_0xd05c)
  ;
  puVar2 = auStack_c4;
  puVar3 = (uint *)&stack0xfffffe7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_FUN_00583940(auStack_154,&this_ptr->field_0x20,&this_ptr->field_0x30);
  core_thehand_cpp_FUN_0056cbd0(this_ptr,auStack_154);
  puVar2 = (uint *)&stack0xfffffe4c;
  puVar3 = auStack_f4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffe7c,auStack_f4);
  puVar2 = auStack_64;
  puVar3 = (uint *)&stack0xfffffe1c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xfffffe1c);
  puVar2 = auStack_94;
  puVar3 = auStack_124;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_FUN_00584450(auStack_124);
  auStack_30[2] = uStack_10;
  auStack_30[(uint)bVar4 * -2 + 3] = auStack_30[(uint)bVar4 * -2 + 9];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  iVar1 = *(int *)&this_ptr->field_0xcde4;
  *(uint *)(iVar1 + 0x20) = auStack_30[2];
  *(uint *)(iVar1 + 0x24) = auStack_30[3];
  *(uint *)(iVar1 + 0x28) = uStack_20;
  core_xform_cpp_matrixToEulerAngles_FUN_00583b10(auStack_124);
  uStack_34 = uStack_1c;
  auStack_30[(uint)bVar4 * -2] = auStack_30[(uint)bVar4 * -2 + 6];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_charactr_cpp_FUN_00433220(*(uint *)&this_ptr->field_0xcde4,&uStack_34);
  return 1;
}
