// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
// Address: 00568830
// Address Range: [[00568830, 00568856]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  core_skeleton_cpp_FUN_00568860
            (this_ptr,(CQuaternion4f *)(pose_data + 0xc),(CVector3f *)pose_data,blend_weight,
             bone_index,blend_callback);
  return;
}
