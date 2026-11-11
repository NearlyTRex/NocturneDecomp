// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190
// Address: 00546190
// Address Range: [[00546190, 005461b6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0
            (this_ptr,pose_data->bone_rotations,&pose_data->root_position,blend_weight,bone_index,
             blend_callback);
  return;
}
