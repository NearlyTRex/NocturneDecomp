// Name: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
// Address: 0059f6e0
// Address Range: [[0059f6e0, 0059f740]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, int bone_index)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
          (CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float *in_stack_00000010;
  
  bVar5 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  start_bone_index = 0;
  if (0 < this_ptr_00->bone_count) {
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                        (this_ptr_00,start_bone_index,(int)in_stack_00000010);
      if (-1 < iVar1) {
        pfVar3 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x6b4);
        pfVar2 = in_stack_00000010 + (uint)bVar5 * -2 + 1;
        (this_ptr->bone_transform).bone_rotations[0].w = *in_stack_00000010;
        pfVar4 = pfVar3 + (uint)bVar5 * -2 + 1;
        *pfVar3 = *pfVar2;
        *pfVar4 = pfVar2[(uint)bVar5 * -2 + 1];
        pfVar4[(uint)bVar5 * -2 + 1] = (pfVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      }
      start_bone_index = start_bone_index + 1;
      this_ptr = (CDeformableModelInstance *)&(this_ptr->motion_controller).tween_speed;
    } while (start_bone_index < this_ptr_00->bone_count);
  }
  return;
}
