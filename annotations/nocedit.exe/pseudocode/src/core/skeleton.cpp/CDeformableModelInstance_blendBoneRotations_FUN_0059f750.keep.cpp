// Name: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
// Address: 0059f750
// MANUAL RECONSTRUCTION
// Address Range: [[0059f750, 0059f81b] [00604af4, 00604b1a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  float t;
  int start_bone_index;
  CQuaternion4f *quat1_in;
  CQuaternion4f CStack_2c;


  if ((float)0.001 < blend_weight) {
    start_bone_index = 0;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (0 < this_ptr_00->bone_count) {
      quat1_in = (this_ptr->bone_transform).pose_data.bone_rotations;
      do {
        hierarchy_distance =
             core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                       (this_ptr_00,start_bone_index,bone_index);
        if (-1 < hierarchy_distance) {
          t = (*blend_callback)(start_bone_index,bone_index,blend_weight,hierarchy_distance,this_ptr
                               );
          core_xform_cpp_slerpQuaternion_FUN_005f77e0(quat1_in,source_quaternions,t,&CStack_2c);
          *quat1_in = CStack_2c;
        }
        quat1_in = quat1_in + 1;
        start_bone_index = start_bone_index + 1;
      } while (start_bone_index < this_ptr_00->bone_count);
    }
  }
  return;
}
