// Name: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
// Address: 0059f750
// Address Range: [[0059f750, 0059f81b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 (CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight, int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
          (CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  int unaff_EBX;
  int start_bone_index;
  CQuaternion4f *quat1_in;
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  CQuaternion4f *in_stack_0000001c;
  CDeformableModelInstance *apCStackY_17f4 [1517];
  uint uStack_28;
  CDeformableModelInstance *local_18;
  
  bVar3 = 0;
  if ((float)0.001 < blend_weight) {
    start_bone_index = 0;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (0 < this_ptr_00->bone_count) {
      local_18 = this_ptr;
      quat1_in = (this_ptr->bone_transform).bone_rotations;
      do {
        hierarchy_distance =
             core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                       (this_ptr_00,start_bone_index,bone_index);
        if (-1 < hierarchy_distance) {
          this_ptr_00 = (CSkeleton *)
                        (*blend_callback)(start_bone_index,bone_index,blend_weight,
                                          hierarchy_distance,this_ptr);
          uStack_28 = 0x59f807;
          core_xform_cpp_slerpQuaternion_FUN_005f77e0
                    (quat1_in,in_stack_0000001c,(float)this_ptr_00,(CQuaternion4f *)&stack0xffffffe8
                    );
          puVar1 = (uint *)(unaff_EBX + 0x6b4 + (uint)bVar3 * -8);
          *(CDeformableModelInstance **)(unaff_EBX + 0x6b0) = local_18;
          puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
          *puVar1 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
          *puVar2 = *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          puVar2[(uint)bVar3 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                ((uint)bVar3 * -2 + 1) * 4);
        }
        quat1_in = quat1_in + 1;
        start_bone_index = start_bone_index + 1;
        local_18 = (CDeformableModelInstance *)&(local_18->motion_controller).tween_speed;
      } while (start_bone_index < this_ptr_00->bone_count);
    }
  }
  return;
}
