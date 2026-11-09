// Name: core_skeleton.cpp_FUN_0054a3a0
// Address: 0054a3a0
// Address Range: [[0054a3a0, 0054a3bb]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_0054a3a0(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_0054a3a0(CDeformableModel *this_ptr,int bone_index)

{
  if (*(int *)&this_ptr->field_0xc00 < 2) {
    return 0;
  }
  return *(int *)(&this_ptr->field_0x323c + bone_index * 4);
}
