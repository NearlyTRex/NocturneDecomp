// Name: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
// Address: 0059df80
// Address Range: [[0059df80, 0059dffd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance *this_ptr)

{
  CSkeleton *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  CQuaternion4f *quaternion;
  
  iVar3 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  if (0 < pCVar1->bone_count) {
    quaternion = (this_ptr->bone_transform).bone_rotations;
    pCVar2 = this_ptr;
    do {
      core_xform_cpp_setIdentityQuaternion_FUN_005f7620(quaternion);
      iVar3 = iVar3 + 1;
      (pCVar2->bone_transform).current_pose_data[0] = pCVar2->rest_pose_data[0];
      quaternion = quaternion + 1;
      pCVar2 = (CDeformableModelInstance *)&(pCVar2->motion_controller).current_motion_index;
    } while (iVar3 < pCVar1->bone_count);
  }
  (this_ptr->bone_transform).root_position.z = 0.0;
  (this_ptr->bone_transform).root_position.y = (this_ptr->bone_transform).root_position.z;
  (this_ptr->bone_transform).root_position.x = (this_ptr->bone_transform).root_position.y;
  return;
}
