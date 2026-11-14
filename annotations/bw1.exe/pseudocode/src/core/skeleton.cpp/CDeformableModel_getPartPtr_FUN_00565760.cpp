// Name: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_00565760
// Address: 00565760
// Address Range: [[00565760, 0056577d]]
// Convention: __cdecl
// Signature: SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00565760(CDeformableModel *this_ptr,int part_index)

#include "nocturne.h"

SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00565760(CDeformableModel *this_ptr,int part_index)

{
  return this_ptr->parts + part_index;
}
