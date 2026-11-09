// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_00429b40
// Address: 00429b40
// Address Range: [[00429b40, 00429c52]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429b40(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429b40(CCharacter *this_ptr)

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
  if (0.0 < *(float *)&this_ptr->field_0x27dc) {
    if (*(int *)&this_ptr->field_0x27e0 < 0) {
      _DAT_01d046a0 = "..\\core\\charactr.cpp";
      _DAT_01d046a4 = 0x105c;
      core_main_c_FUN_004e4500("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)&this_ptr->field_0x27d8);
    local_54 = local_24;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar1 * 0xfffffffe * 4) =
         auStack_40[(uint)bVar1 * -2 + 8];
    auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -3] =
         auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 9];
    (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + -3)[(uint)bVar1 * -2 + 1] =
         (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 9)[(uint)bVar1 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
              (*(uint *)&this_ptr->field_0x27d4,&stack0xffffffac);
    local_64 = local_84;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar1 * -8);
    auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -7] =
         *(uint *)(&stack0xffffff84 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + -7)[(uint)bVar1 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff84 + (uint)bVar1 * -8 + (uint)bVar1 * -8) +
          ((uint)bVar1 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&stack0xffffff9c);
    local_74 = auStack_40[3];
    *(uint *)((int)&stack0xffffff90 + (uint)bVar1 * 0xfffffffe * 4) =
         auStack_40[(uint)bVar1 * -2 + 4];
    *(uint *)(&stack0xffffff94 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 5];
    *(uint *)
     ((int)(&stack0xffffff94 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
         (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 5)[(uint)bVar1 * -2 + 1];
    bone_index = *(int *)&this_ptr->field_0x27e0;
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              (&this_ptr->field_0x964 + bone_index * 0x10,&stack0xffffff8c,
               *(uint *)&this_ptr->field_0x27dc);
    local_44 = local_14;
    auStack_40[(uint)bVar1 * -2] = auStack_40[(uint)bVar1 * -2 + 0xc];
    auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd];
    (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
         (auStack_40 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd)[(uint)bVar1 * -2 + 1];
    core_skeleton_cpp_FUN_00546650
              ((CDeformableModelInstance *)&this_ptr->field_0x2b4,(CQuaternion4f *)&local_44,
               bone_index);
  }
  return;
}
