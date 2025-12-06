// Name: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
// Address: 0059f750
// Address Range: [[0059f750, 0059f81b]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
          (CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  int start_bone_index;
  BADSPACEBASE *in_ESP;
  CQuaternion4f *result_out;
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int in_stack_00000018;
  code *in_stack_0000001c;
  CQuaternion4f *in_stack_00000020;
  CQuaternion4f *in_stack_0000003c;
  CDeformableModel_MotionBlendWeightFunc *apCStack_17d0 [509];
  CDeformableModel_MotionBlendWeightFunc *apCStack_fdc [1001];
  
  bVar3 = 0;
  if ((float)0.001 < blend_weight) {
    start_bone_index = 0;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (0 < this_ptr_00->bone_count) {
      result_out = source_quaternions + 0x6b;
      do {
        hierarchy_distance =
             core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                       (this_ptr_00,start_bone_index,(int)blend_callback);
        if (-1 < hierarchy_distance) {
          in_stack_00000020 =
               (CQuaternion4f *)
               (*in_stack_0000001c)
                         (start_bone_index,in_stack_00000018,(float)blend_callback,
                          hierarchy_distance,(CDeformableModelInstance *)blend_weight);
          core_xform_cpp_slerpQuaternion_FUN_005f77e0
                    (result_out,in_stack_0000003c,in_stack_00000020,(float)source_quaternions);
          piVar1 = (int *)((int)in_stack_00000020 + (uint)bVar3 * -8 + 0x6b4);
          in_stack_00000020[0x6b].w = blend_weight;
          piVar2 = piVar1 + (uint)bVar3 * -2 + 1;
          *piVar1 = (&bone_index)[(uint)bVar3 * -2];
          *piVar2 = (int)(&blend_callback)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
          piVar2[(uint)bVar3 * -2 + 1] =
               (int)(&blend_callback + (uint)bVar3 * -2 + (uint)bVar3 * -2)[(uint)bVar3 * -2 + 1];
        }
        result_out = result_out + 1;
        start_bone_index = start_bone_index + 1;
      } while (start_bone_index < this_ptr_00->bone_count);
    }
  }
  return;
}
