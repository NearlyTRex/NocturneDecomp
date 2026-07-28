// Name: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
// Address: 0051cfd0
// Address Range: [[0051cfd0, 0051d09b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  int hierarchy_distance;
  int start_bone_index;
  CQuaternion4f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1808 [1522];
  float fStack_2c;
  CSkeleton *local_1c;
  CDeformableModelInstance *local_18;
  float fStack_14;
  
  bVar4 = 0;
  if ((float)0.001 < blend_weight) {
    start_bone_index = 0;
    local_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
    if (0 < local_1c->bone_count) {
      local_18 = this_ptr;
      pCVar1 = (this_ptr->bone_transform).pose_data.bone_rotations;
      do {
        hierarchy_distance =
             core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                       (local_1c,start_bone_index,bone_index);
        if (-1 < hierarchy_distance) {
          fStack_14 = (*blend_callback)(start_bone_index,bone_index,blend_weight,hierarchy_distance,
                                        this_ptr);
          core_xform_cpp_slerpQuaternion_FUN_0055d2d0(pCVar1,source_quaternions,fStack_14);
          puVar2 = (uint *)((int)local_18 + (uint)bVar4 * -8 + 0x6b4);
          (local_18->bone_transform).pose_data.bone_rotations[0].w = fStack_2c;
          puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
          *puVar2 = *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8);
          *puVar3 = *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          puVar3[(uint)bVar4 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
                ((uint)bVar4 * -2 + 1) * 4);
        }
        pCVar1 = pCVar1 + 1;
        start_bone_index = start_bone_index + 1;
        local_18 = (CDeformableModelInstance *)&(local_18->motion_controller).tween_speed;
      } while (start_bone_index < local_1c->bone_count);
    }
  }
  return;
}
