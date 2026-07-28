// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0
// Address: 0051cab0
// Address Range: [[0051cab0, 0051cad6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0
            (this_ptr,pose_data->bone_rotations,&pose_data->root_position,blend_weight,bone_index,
             blend_callback);
  return;
}
