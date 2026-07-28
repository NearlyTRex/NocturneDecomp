// Name: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
// Address: 0051b800
// Address Range: [[0051b800, 0051b87d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(CDeformableModelInstance *this_ptr)

{
  CSkeleton *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  CQuaternion4f *pCVar4;
  
  iVar3 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  if (0 < pCVar1->bone_count) {
    pCVar4 = (this_ptr->bone_transform).pose_data.bone_rotations;
    pCVar2 = this_ptr;
    do {
      core_xform_cpp_setIdentityQuaternion_FUN_0055d110(pCVar4);
      iVar3 = iVar3 + 1;
      (pCVar2->bone_transform).bone_scales[0] = pCVar2->rest_pose_data[0];
      pCVar4 = pCVar4 + 1;
      pCVar2 = (CDeformableModelInstance *)&(pCVar2->motion_controller).current_motion_index;
    } while (iVar3 < pCVar1->bone_count);
  }
  (this_ptr->bone_transform).pose_data.root_position.z = 0.0;
  (this_ptr->bone_transform).pose_data.root_position.y =
       (this_ptr->bone_transform).pose_data.root_position.z;
  (this_ptr->bone_transform).pose_data.root_position.x =
       (this_ptr->bone_transform).pose_data.root_position.y;
  return;
}
