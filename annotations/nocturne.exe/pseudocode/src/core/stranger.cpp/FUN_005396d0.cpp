// Name: core_stranger.cpp_FUN_005396d0
// Address: 005396d0
// Address Range: [[005396d0, 005397ae]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005396d0(int param_1,SPose *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_005396d0(int param_1,SPose *param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  uint *puVar2;
  byte bVar3;
  float blend_weight;
  int bone_index;
  code *blend_callback;
  SPose SStack_1ad8;
  CQuaternion4f local_3c;
  float local_2c;
  uint auStack_28 [3];
  CVector3f local_1c;
  float local_10;
  
  bVar3 = 0;
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x150);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(this_ptr,&SStack_1ad8);
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
            (this_ptr,*(int *)(param_1 + 0x1faec),
             *(float *)(param_1 + 0x1fabc) * (float)40,-1);
  pCVar1 = core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0
                     (&local_1c,(CQuaternion4f *)(_DAT_02dc9f50 * 0x10 + param_1 + 0x800));
  blend_callback = core_skeleton_cpp_FUN_0051b650;
  bone_index = -1;
  local_10 = -pCVar1->y;
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_10);
  local_3c.w = local_2c;
  puVar2 = (uint *)((int)&local_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&local_3c + (uint)bVar3 * -8 + 4) = auStack_28[(uint)bVar3 * -2];
  *puVar2 = auStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  puVar2[(uint)bVar3 * -2 + 1] =
       (auStack_28 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (this_ptr,&local_3c,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(this_ptr,param_2);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60(this_ptr,&SStack_1ad8);
  return;
}
