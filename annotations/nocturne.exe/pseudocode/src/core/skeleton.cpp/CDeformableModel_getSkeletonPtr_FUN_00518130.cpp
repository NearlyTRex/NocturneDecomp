// Name: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
// Address: 00518130
// Address Range: [[00518130, 00518177]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel *this_ptr)

{
  if (*(int *)(this_ptr->texture_sets[1].textures[0x44].textures[0].texture_name + 4) != 0) {
    return *(CSkeleton **)(this_ptr->texture_sets[1].textures[0x44].textures[0].texture_name + 4);
  }
  PTR_01cc4800 = "..\\core\\skeleton.cpp";
  INT_01cc4804 = 0x2e6;
  core_main_c_FUN_004c8440("Tried to do something with the skeleton, but skeleton ptr not set!");
  return *(CSkeleton **)(this_ptr->texture_sets[1].textures[0x44].textures[0].texture_name + 4);
}
