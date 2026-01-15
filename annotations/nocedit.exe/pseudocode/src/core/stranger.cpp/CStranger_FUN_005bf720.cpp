// Name: core_stranger.cpp_CStranger_FUN_005bf720
// Address: 005bf720
// Address Range: [[005bf720, 005bf7fe]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bf720()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005bf720(CStranger* param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005bf720(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  uint *puVar2;
  byte bVar3;
  int in_stack_00000004;
  SBoneTransformData *in_stack_00000008;
  float blend_weight;
  int bone_index;
  code *blend_callback;
  SBoneTransformData SStack_1ad8;
  CQuaternion4f local_3c;
  float local_2c;
  uint auStack_28 [3];
  CVector3f local_1c;
  CQuaternion4f *local_10;
  
  bVar3 = 0;
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(this_ptr,&SStack_1ad8);
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr,*(int *)(in_stack_00000004 + 0x1fc84),
             *(float *)(in_stack_00000004 + 0x1fc54) * (float)40,-1);
  pCVar1 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                     (&local_1c,(CQuaternion4f *)(DAT_03f6bacc * 0x10 + in_stack_00000004 + 0x808));
  blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  bone_index = -1;
  local_10 = (CQuaternion4f *)-pCVar1->y;
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_10,1.0);
  local_3c.w = local_2c;
  puVar2 = (uint *)((int)&local_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&local_3c + (uint)bVar3 * -8 + 4) = auStack_28[(uint)bVar3 * -2];
  *puVar2 = auStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  puVar2[(uint)bVar3 * -2 + 1] =
       (auStack_28 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr,&local_3c,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
            (this_ptr,in_stack_00000008);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(this_ptr,&SStack_1ad8);
  return;
}
