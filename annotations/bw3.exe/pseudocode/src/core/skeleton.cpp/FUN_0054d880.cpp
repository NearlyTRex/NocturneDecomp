// Name: core_skeleton.cpp_FUN_0054d880
// Address: 0054d880
// Address Range: [[0054d880, 0054d8e0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054d880(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054d880(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;
  CQuaternion4f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  start_bone_index = 0;
  if (0 < *(int *)&this_ptr_00->field_0x1de78) {
    do {
      iVar1 = core_skeleton_cpp_FUN_005481d0(this_ptr_00,start_bone_index,bone_index);
      if (-1 < iVar1) {
        puVar3 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 0x6b4);
        pCVar2 = source_quaternions + (uint)bVar5 * -8 + 4;
        *(uint *)&this_ptr->field_0x6b0 = *(uint *)source_quaternions;
        puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
        *puVar3 = *(uint *)pCVar2;
        *puVar4 = *(uint *)(pCVar2 + (uint)bVar5 * -8 + 4);
        puVar4[(uint)bVar5 * -2 + 1] =
             *(uint *)(pCVar2 + (uint)bVar5 * -8 + 4 + (uint)bVar5 * -8 + 4);
      }
      start_bone_index = start_bone_index + 1;
      this_ptr = (CDeformableModelInstance *)&this_ptr->field_0x10;
    } while (start_bone_index < *(int *)&this_ptr_00->field_0x1de78);
  }
  return;
}
