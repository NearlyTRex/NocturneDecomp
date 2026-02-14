// Name: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0
// Address: 005a08a0
// Address Range: [[005a08a0, 005a0ac3]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0(CMotionController *this_ptr,int source_motion_index,float source_frame,int target_motion_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0(CMotionController *this_ptr,int source_motion_index,float source_frame,int target_motion_index)

{
  int iVar1;
  CMotionList *pCVar2;
  CSkeleton *pCVar3;
  CMatrix3x4f *pCVar4;
  int iVar5;
  CMatrix3x4f *pCVar6;
  int iVar7;
  SBoneTransformData local_3598;
  SBoneTransformData local_1afc;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr);
  local_20 = pCVar2->motions[target_motion_index].frame_count;
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)this_ptr);
  iVar1 = pCVar3->bone_count;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
            ((CDeformableModelInstance *)this_ptr,source_motion_index,source_frame,&local_1afc);
  iVar7 = 0;
  core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950
            (&local_1afc,(CDeformableModelInstance *)this_ptr);
  local_24 = -1;
  local_1c = 1e+30;
  if (0 < local_20) {
    do {
      local_14 = iVar7;
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
                ((CDeformableModelInstance *)this_ptr,target_motion_index,(float)iVar7,&local_3598);
      core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950
                (&local_3598,(CDeformableModelInstance *)this_ptr);
      iVar5 = 0;
      local_18 = 0.0;
      if (0 < iVar1) {
        local_18 = 0.0;
        pCVar4 = local_3598.bone_world_matrices;
        pCVar6 = local_1afc.bone_world_matrices;
        do {
          local_54 = pCVar4->m[0].z;
          local_50 = pCVar4->m[1].z;
          local_4c = pCVar4->m[2].z;
          local_60 = pCVar6->m[0].z;
          local_5c = pCVar6->m[1].z;
          local_58 = pCVar6->m[2].z;
          pCVar6 = pCVar6 + 1;
          pCVar4 = pCVar4 + 1;
          iVar5 = iVar5 + 1;
          local_18 = (local_58 - local_4c) * (local_58 - local_4c) +
                     (local_5c - local_50) * (local_5c - local_50) +
                     (local_60 - local_54) * (local_60 - local_54) + local_18;
          local_48 = local_54;
          local_44 = local_50;
          local_40 = local_4c;
          local_3c = local_60;
          local_38 = local_5c;
          local_34 = local_58;
        } while (iVar5 < iVar1);
      }
      if (local_18 < local_1c) {
        local_1c = local_18;
        local_24 = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_20);
  }
  return local_24;
}
