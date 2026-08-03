// Name: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_00519b10
// Address: 00519b10
// Address Range: [[00519b10, 00519b2d]]
// Convention: __cdecl
// Signature: SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00519b10(CDeformableModel *this_ptr,int part_index)

#include "nocturne.h"

SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00519b10(CDeformableModel *this_ptr,int part_index)

{
  return this_ptr->parts + part_index;
}
