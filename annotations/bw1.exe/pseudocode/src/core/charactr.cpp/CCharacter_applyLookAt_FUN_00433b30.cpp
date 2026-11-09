// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30
// Address: 00433b30
// Address Range: [[00433b30, 00433c42]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(CCharacter *this_ptr)

{
  byte bVar1;
  uint auStackY_1860 [1521];
  int bone_index;
  uint local_84;
  uint local_74;
  uint local_64;
  uint local_54;
  uint local_44;
  uint auStack_40 [7];
  uint local_24;
  uint local_14;
  
  bVar1 = 0;
  if (0.0 < *(float *)&this_ptr->field_0x2770) {
    if (*(int *)&this_ptr->field_0x2774 < 0) {
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0x1036;
      core_main_c_FUN_005030e0("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_FUN_005b7af0(*(uint *)&this_ptr->field_0x276c);
    local_54 = local_24;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar1 * 0xfffffffe * 4) =
         auStack_40[(uint)bVar1 * -2 + 8];
    auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -3] =
         auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 9];
    (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + -3)[(uint)bVar1 * -2 + 1] =
         (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 9)[(uint)bVar1 * -2 + 1];
    core_xform_cpp_FUN_005b7b30(*(uint *)&this_ptr->field_0x2768,&stack0xffffffac);
    local_64 = local_84;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar1 * -8);
    auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -7] =
         *(uint *)(&stack0xffffff84 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + -7)[(uint)bVar1 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff84 + (uint)bVar1 * -8 + (uint)bVar1 * -8) +
          ((uint)bVar1 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xffffff9c);
    local_74 = auStack_40[3];
    *(uint *)((int)&stack0xffffff90 + (uint)bVar1 * 0xfffffffe * 4) =
         auStack_40[(uint)bVar1 * -2 + 4];
    *(uint *)(&stack0xffffff94 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 5];
    *(uint *)
     ((int)(&stack0xffffff94 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
         (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 5)[(uint)bVar1 * -2 + 1];
    bone_index = *(int *)&this_ptr->field_0x2774;
    core_xform_cpp_FUN_005b7940
              (&this_ptr->field_0x808 + bone_index * 0x10,&stack0xffffff8c,
               *(uint *)&this_ptr->field_0x2770);
    local_44 = local_14;
    auStack_40[(uint)bVar1 * -2] = auStack_40[(uint)bVar1 * -2 + 0xc];
    auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd];
    (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
         (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd)[(uint)bVar1 * -2 + 1];
    core_skeleton_cpp_FUN_00568cf0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_44,
               bone_index);
  }
  return;
}
