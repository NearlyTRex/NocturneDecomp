// Name: core_skeleton.cpp_FUN_005430e0
// Address: 005430e0
// Address Range: [[005430e0, 005430fd]]
// Convention: __cdecl
// Signature: SPart * __cdecl core_skeleton_cpp_FUN_005430e0(CDeformableModel *this_ptr,int part_index)

#include "nocturne.h"

SPart * __cdecl core_skeleton_cpp_FUN_005430e0(CDeformableModel *this_ptr,int part_index)

{
  return (SPart *)(&this_ptr->field_0xc04 + part_index * 0x60);
}
