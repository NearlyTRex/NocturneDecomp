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
  float *pfVar1;
  byte bVar2;
  float afStackY_1860 [1521];
  int bone_index;
  uint local_84;
  uint local_74;
  uint local_64;
  uint local_54;
  CQuaternion4f local_44;
  uint local_34;
  float afStack_30 [7];
  float local_14;
  
  bVar2 = 0;
  if (0.0 < this_ptr->look_at_weight) {
    if (this_ptr->look_at_head_bone < 0) {
      _DAT_01d046a0 = "..\\core\\charactr.cpp";
      _DAT_01d046a4 = 0x105c;
      core_main_c_FUN_004e4500("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(this_ptr->look_at_pitch);
    local_54 = afStack_30[3];
    *(float *)((int)&stack0xffffffb0 + (uint)bVar2 * 0xfffffffe * 4) =
         afStack_30[(uint)bVar2 * -2 + 4];
    afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -7] =
         afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
    (afStack_30 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + -7)[(uint)bVar2 * -2 + 1] =
         (afStack_30 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(this_ptr->look_at_yaw,&stack0xffffffac);
    local_64 = local_84;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(uint *)
     ((int)(&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&stack0xffffff9c);
    local_74 = local_34;
    *(float *)((int)&stack0xffffff90 + (uint)bVar2 * 0xfffffffe * 4) = afStack_30[(uint)bVar2 * -2];
    *(float *)(&stack0xffffff94 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    *(float *)((int)(&stack0xffffff94 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
              ((uint)bVar2 * -2 + 1) * 4) =
         (afStack_30 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
    bone_index = this_ptr->look_at_head_bone;
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              ((this_ptr->model).bone_transform.pose_data.bone_rotations + bone_index,
               &stack0xffffff8c,this_ptr->look_at_weight);
    local_44.w = local_14;
    pfVar1 = (float *)((int)&local_44 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    *(float *)((int)&local_44 + (uint)bVar2 * -8 + 4) = afStack_30[(uint)bVar2 * -2 + 8];
    *pfVar1 = afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 9];
    pfVar1[(uint)bVar2 * -2 + 1] =
         (afStack_30 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 9)[(uint)bVar2 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_00546650
              (&this_ptr->model,&local_44,bone_index);
  }
  return;
}
