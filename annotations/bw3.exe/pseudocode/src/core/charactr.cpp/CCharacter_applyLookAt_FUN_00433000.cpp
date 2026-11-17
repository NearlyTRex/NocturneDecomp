// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_00433000
// Address: 00433000
// Address Range: [[00433000, 00433112]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433000(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433000(CCharacter *this_ptr)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_1860 [1521];
  CQuaternion4f *quat2_in;
  int bone_index;
  CQuaternion4f local_84;
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  CQuaternion4f local_54;
  CQuaternion4f local_44;
  CQuaternion4f local_34;
  CQuaternion4f local_24;
  CQuaternion4f local_14;
  
  bVar3 = 0;
  if (0.0 < this_ptr->look_at_weight) {
    if (this_ptr->look_at_head_bone < 0) {
      g_CHAR_PTR_01d71de0 = "..\\core\\charactr.cpp";
      g_INT_01d71de4 = 0x117b;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s");
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(this_ptr->look_at_pitch,&local_24);
    local_54.w = local_24.w;
    puVar2 = (uint *)((int)&local_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    puVar1 = (uint *)((int)&local_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_54 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_24 + (uint)bVar3 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
    quat2_in = &local_54;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(this_ptr->look_at_yaw,&local_84);
    local_64.w = local_84.w;
    puVar2 = (uint *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    puVar1 = (uint *)((int)&local_84 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_64 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_84 + (uint)bVar3 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_64,quat2_in,&local_34);
    local_74.w = local_34.w;
    puVar2 = (uint *)((int)&local_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    puVar1 = (uint *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_74 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
    bone_index = this_ptr->look_at_head_bone;
    core_xform_cpp_slerpQuaternion_FUN_00585b20
              ((this_ptr->model).bone_transform.pose_data.bone_rotations + bone_index,&local_74,
               this_ptr->look_at_weight,&local_14);
    local_44.w = local_14.w;
    puVar2 = (uint *)((int)&local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    puVar1 = (uint *)((int)&local_14 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_44 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_14 + (uint)bVar3 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0054d880
              (&this_ptr->model,&local_44,bone_index);
  }
  return;
}
