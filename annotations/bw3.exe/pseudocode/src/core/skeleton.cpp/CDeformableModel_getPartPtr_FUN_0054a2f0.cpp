// Name: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0054a2f0
// Address: 0054a2f0
// Address Range: [[0054a2f0, 0054a30d]]
// Convention: __cdecl
// Signature: SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0054a2f0(CDeformableModel *this_ptr,int part_index)

#include "nocturne.h"

SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0054a2f0(CDeformableModel *this_ptr,int part_index)

{
  return (SPart *)(&this_ptr->field_0xc04 + part_index * 0x60);
}
