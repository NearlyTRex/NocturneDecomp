// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
// Address: 0059f230
// Address Range: [[0059f230, 0059f256]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
            (this_ptr,pose_data->bone_rotations,&pose_data->root_position,blend_weight,bone_index,
             blend_callback);
  return;
}
