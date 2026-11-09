// Name: core_skeleton.cpp_FUN_00543190
// Address: 00543190
// Address Range: [[00543190, 005431ab]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_00543190(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_00543190(CDeformableModel *this_ptr,int bone_index)

{
  if (*(int *)&this_ptr->field_0xc00 < 2) {
    return 0;
  }
  return *(int *)(&this_ptr->field_0x26fc + bone_index * 4);
}
