// Name: core_stranger.cpp_FUN_005396d0
// Address: 005396d0
// Address Range: [[005396d0, 005397ae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_005396d0(CStranger *this_ptr,SPose *out_pose)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_005396d0(CStranger *this_ptr,SPose *out_pose)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float blend_weight;
  int bone_index;
  code *blend_callback;
  SPose SStack_1ad8;
  CQuaternion4f local_3c;
  CQuaternion4f local_2c;
  CVector3f local_1c;
  float local_10;
  
  bVar4 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(this_ptr_00,&SStack_1ad8)
  ;
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
            (this_ptr_00,this_ptr->turn_motion_index,
             this_ptr->turn_blend_weight * (float)40,-1);
  pCVar1 = core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0
                     (&local_1c,
                      (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                      _DAT_02dc9f50);
  blend_callback = core_skeleton_cpp_FUN_0051b650;
  bone_index = -1;
  local_10 = -pCVar1->y;
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_10,&local_2c);
  local_3c.w = local_2c.w;
  puVar3 = (uint *)((int)&local_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_3c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (this_ptr_00,&local_3c,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(this_ptr_00,out_pose);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60(this_ptr_00,&SStack_1ad8)
  ;
  return;
}
