// Name: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
// Address: 0059df80
// MANUAL RECONSTRUCTION
// Address Range: [[0059df80, 0059dffd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance *this_ptr)

{
  CSkeleton *pCVar1;
  int iVar3;
  CQuaternion4f *quaternion;

  iVar3 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  if (0 < pCVar1->bone_count) {
    quaternion = (this_ptr->bone_transform).pose_data.bone_rotations;
    do {
      core_xform_cpp_setIdentityQuaternion_FUN_005f7620(quaternion);
      (this_ptr->bone_transform).bone_scales[iVar3] = this_ptr->rest_pose_data[iVar3];
      iVar3 = iVar3 + 1;
      quaternion = quaternion + 1;
    } while (iVar3 < pCVar1->bone_count);
  }
  (this_ptr->bone_transform).pose_data.root_position.x = 0.0;
  (this_ptr->bone_transform).pose_data.root_position.y = 0.0;
  (this_ptr->bone_transform).pose_data.root_position.z = 0.0;
  return;
}
