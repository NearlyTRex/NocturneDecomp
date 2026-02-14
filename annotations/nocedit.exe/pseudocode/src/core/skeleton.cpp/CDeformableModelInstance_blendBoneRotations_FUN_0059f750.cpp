// Name: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
// Address: 0059f750
// Address Range: [[0059f750, 0059f81b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  int hierarchy_distance;
  int start_bone_index;
  CQuaternion4f *quat1_in;
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1808 [1522];
  CQuaternion4f CStack_2c;
  CSkeleton *local_1c;
  CDeformableModelInstance *local_18;
  float fStack_14;
  
  bVar4 = 0;
  if ((float)0.001 < blend_weight) {
    start_bone_index = 0;
    local_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (0 < local_1c->bone_count) {
      local_18 = this_ptr;
      quat1_in = (this_ptr->bone_transform).bone_rotations;
      do {
        hierarchy_distance =
             core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                       (local_1c,start_bone_index,bone_index);
        if (-1 < hierarchy_distance) {
          fStack_14 = (*blend_callback)(start_bone_index,bone_index,blend_weight,hierarchy_distance,
                                        this_ptr);
          core_xform_cpp_slerpQuaternion_FUN_005f77e0
                    (quat1_in,source_quaternions,fStack_14,&CStack_2c);
          puVar2 = (uint *)((int)local_18 + (uint)bVar4 * -8 + 0x6b4);
          (local_18->bone_transform).bone_rotations[0].w = CStack_2c.w;
          puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
          puVar1 = (uint *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          *puVar2 = *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + 4);
          *puVar3 = *puVar1;
          puVar3[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
        }
        quat1_in = quat1_in + 1;
        start_bone_index = start_bone_index + 1;
        local_18 = (CDeformableModelInstance *)&(local_18->motion_controller).tween_speed;
      } while (start_bone_index < local_1c->bone_count);
    }
  }
  return;
}
