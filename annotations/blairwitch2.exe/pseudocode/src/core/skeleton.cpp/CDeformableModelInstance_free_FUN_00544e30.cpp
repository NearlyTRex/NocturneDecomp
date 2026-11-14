// Name: core_skeleton.cpp_CDeformableModelInstance_free_FUN_00544e30
// Address: 00544e30
// Address Range: [[00544e30, 00544e55]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_free_FUN_00544e30(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_free_FUN_00544e30(CDeformableModelInstance *this_ptr)

{
  if (this_ptr->skinned_vertices_buffer == (CVector3i *)0x0) {
    return;
  }
  FUN_005b7fce(this_ptr->skinned_vertices_buffer);
  this_ptr->skinned_vertices_buffer = (CVector3i *)0x0;
  return;
}
