// Name: core_skeleton.cpp_FUN_00565810
// Address: 00565810
// Address Range: [[00565810, 0056582b]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_00565810(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_00565810(CDeformableModel *this_ptr,int bone_index)

{
  if (*(int *)&this_ptr->field_0xc00 < 2) {
    return 0;
  }
  return *(int *)(&this_ptr->field_0x323c + bone_index * 4);
}
