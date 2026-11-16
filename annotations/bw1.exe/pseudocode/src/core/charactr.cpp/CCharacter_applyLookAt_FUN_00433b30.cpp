// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30
// Address: 00433b30
// Address Range: [[00433b30, 00433c42]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(CCharacter *this_ptr)

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
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0x1036;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s");
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(this_ptr->look_at_pitch,&local_24);
    local_54.w = local_24.w;
    puVar2 = (uint *)((int)&local_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    puVar1 = (uint *)((int)&local_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_54 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_24 + (uint)bVar3 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
    quat2_in = &local_54;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(this_ptr->look_at_yaw,&local_84);
    local_64.w = local_84.w;
    puVar2 = (uint *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    puVar1 = (uint *)((int)&local_84 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_64 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_84 + (uint)bVar3 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_64,quat2_in,&local_34);
    local_74.w = local_34.w;
    puVar2 = (uint *)((int)&local_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    puVar1 = (uint *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_74 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
    bone_index = this_ptr->look_at_head_bone;
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              ((this_ptr->model).bone_transform.pose_data.bone_rotations + bone_index,&local_74,
               this_ptr->look_at_weight,&local_14);
    local_44.w = local_14.w;
    puVar2 = (uint *)((int)&local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    puVar1 = (uint *)((int)&local_14 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_44 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_14 + (uint)bVar3 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_00568cf0
              (&this_ptr->model,&local_44,bone_index);
  }
  return;
}
