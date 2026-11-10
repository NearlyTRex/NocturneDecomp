// Name: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
// Address: 00568d60
// Address Range: [[00568d60, 00568e2b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  int hierarchy_distance;
  int start_bone_index;
  byte *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CSkeleton *apCStackY_1808 [1522];
  uint uStack_2c;
  CSkeleton *local_1c;
  CDeformableModelInstance *local_18;
  float fStack_14;
  
  bVar4 = 0;
  if ((float)_DAT_005f2521 < blend_weight) {
    start_bone_index = 0;
    local_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
    if (0 < local_1c->bone_count) {
      local_18 = this_ptr;
      puVar1 = &this_ptr->field_0x6b0;
      do {
        hierarchy_distance =
             core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630
                       (local_1c,start_bone_index,bone_index);
        if (-1 < hierarchy_distance) {
          fStack_14 = (*blend_callback)(start_bone_index,bone_index,blend_weight,hierarchy_distance,
                                        this_ptr);
          core_xform_cpp_slerpQuaternion_FUN_005b7940(puVar1,source_quaternions,fStack_14);
          puVar2 = (uint *)((int)local_18 + (uint)bVar4 * -8 + 0x6b4);
          *(uint *)&local_18->field_0x6b0 = uStack_2c;
          puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
          *puVar2 = *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8);
          *puVar3 = *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          puVar3[(uint)bVar4 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
                ((uint)bVar4 * -2 + 1) * 4);
        }
        puVar1 = puVar1 + 0x10;
        start_bone_index = start_bone_index + 1;
        local_18 = (CDeformableModelInstance *)&(local_18->base).tween_speed;
      } while (start_bone_index < local_1c->bone_count);
    }
  }
  return;
}
