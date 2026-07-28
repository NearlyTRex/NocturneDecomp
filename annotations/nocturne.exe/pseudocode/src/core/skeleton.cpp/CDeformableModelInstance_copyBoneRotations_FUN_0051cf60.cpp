// Name: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0051cf60
// Address: 0051cf60
// Address Range: [[0051cf60, 0051cfc0]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0051cf60(CDeformableModelInstance *param_1,float *param_2,int param_3)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0051cf60(CDeformableModelInstance *param_1,float *param_2,int param_3)

{
  CSkeleton *this_ptr;
  int iVar1;
  int start_bone_index;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  
  bVar5 = 0;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  start_bone_index = 0;
  if (0 < this_ptr->bone_count) {
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                        (this_ptr,start_bone_index,param_3);
      if (-1 < iVar1) {
        pfVar3 = (float *)((int)param_1 + (uint)bVar5 * -8 + 0x6b4);
        pfVar2 = param_2 + (uint)bVar5 * -2 + 1;
        (param_1->bone_transform).pose_data.bone_rotations[0].w = *param_2;
        pfVar4 = pfVar3 + (uint)bVar5 * -2 + 1;
        *pfVar3 = *pfVar2;
        *pfVar4 = pfVar2[(uint)bVar5 * -2 + 1];
        pfVar4[(uint)bVar5 * -2 + 1] = (pfVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      }
      start_bone_index = start_bone_index + 1;
      param_1 = (CDeformableModelInstance *)&(param_1->motion_controller).tween_speed;
    } while (start_bone_index < this_ptr->bone_count);
  }
  return;
}
