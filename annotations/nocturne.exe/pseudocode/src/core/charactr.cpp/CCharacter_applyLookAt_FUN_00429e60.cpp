// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_00429e60
// Address: 00429e60
// Address Range: [[00429e60, 00429f58]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429e60(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429e60(CCharacter *this_ptr)

{
  CQuaternion4f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1850 [1522];
  uint local_74;
  uint local_64;
  uint local_54;
  float local_44;
  float local_34;
  CQuaternion4f local_24;
  uint local_14;
  uint auStack_10 [3];
  
  bVar4 = 0;
  if (0.0 < this_ptr->look_at_weight) {
    if (this_ptr->look_at_head_bone < 0) {
      PTR_01cc4800 = "..\\core\\charactr.cpp";
      INT_01cc4804 = 0xdf9;
      core_main_c_FUN_004c8440("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(this_ptr->look_at_pitch,&local_24);
    local_44 = local_24.w;
    puVar2 = (uint *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)((int)&local_24 + (uint)bVar4 * -8 + 4);
    *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) = *puVar2;
    *(uint *)
     ((int)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         puVar2[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(this_ptr->look_at_yaw,&stack0xffffffbc);
    local_54 = local_14;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_10[(uint)bVar4 * -2];
    *(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    *(uint *)
     ((int)(&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_10 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xffffffac);
    local_64 = local_74;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff90 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)
     ((int)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              ((this_ptr->model).bone_transform.pose_data.bone_rotations +
               this_ptr->look_at_head_bone,&stack0xffffff9c,this_ptr->look_at_weight);
    pCVar1 = (this_ptr->model).bone_transform.pose_data.bone_rotations + this_ptr->look_at_head_bone
    ;
    puVar2 = (uint *)((int)pCVar1 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar1->w = local_34;
    puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
    *puVar2 = auStack_10[(uint)bVar4 * -2 + -8];
    *puVar3 = auStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -7];
    puVar3[(uint)bVar4 * -2 + 1] =
         (auStack_10 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + -7)[(uint)bVar4 * -2 + 1];
  }
  return;
}
