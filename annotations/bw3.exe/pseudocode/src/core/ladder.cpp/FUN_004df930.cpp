// Name: core_ladder.cpp_FUN_004df930
// Address: 004df930
// Address Range: [[004df930, 004dfa66]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_FUN_004df930(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_FUN_004df930(CLadder *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_101c [965];
  uint uStack_e8;
  uint uStack_d8;
  uint uStack_c8;
  byte auStack_c4 [48];
  byte auStack_94 [48];
  uint auStack_64 [12];
  uint uStack_34;
  uint auStack_30 [4];
  uint uStack_20;
  uint uStack_1c;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x2e0 == 0) {
    return;
  }
  core_xform_cpp_FUN_00583940(auStack_c4,&this_ptr->field_0x2e4,&this_ptr->field_0x2f0);
  core_xform_cpp_FUN_00583940
            (auStack_94,*(int *)&this_ptr->field_0x2e0 + 0x20,*(int *)&this_ptr->field_0x2e0 + 0x30)
  ;
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_c4,auStack_94);
  puVar2 = auStack_64;
  puVar3 = (uint *)&stack0xffffff0c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uStack_10 = uStack_e8;
  uStack_c = uStack_d8;
  uStack_8 = uStack_c8;
  uStack_34 = uStack_e8;
  auStack_30[(uint)bVar4 * -2] = auStack_30[(uint)bVar4 * -2 + 9];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  *(uint *)&this_ptr->field_0x20 = uStack_34;
  *(uint *)&this_ptr->field_0x24 = auStack_30[0];
  *(uint *)&this_ptr->field_0x28 = auStack_30[1];
  core_xform_cpp_FUN_00583b10(&stack0xffffff0c);
  auStack_30[2] = uStack_1c;
  auStack_30[(uint)bVar4 * -2 + 3] = auStack_30[(uint)bVar4 * -2 + 6];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if ((uint *)&this_ptr->field_0x30 != auStack_30 + 2) {
    *(uint *)&this_ptr->field_0x30 = auStack_30[2];
    *(uint *)&this_ptr->field_0x34 = auStack_30[3];
    *(uint *)&this_ptr->field_0x38 = uStack_20;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
  return;
}
