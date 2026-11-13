// Name: core_skeleton.cpp_CDeformableModelInstance_free_FUN_005674d0
// Address: 005674d0
// Address Range: [[005674d0, 005674f5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_free_FUN_005674d0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_free_FUN_005674d0(CDeformableModelInstance *this_ptr)

{
  if (this_ptr->skinned_vertices_buffer == (CVector3i *)0x0) {
    return;
  }
  FUN_005c0336(this_ptr->skinned_vertices_buffer);
  this_ptr->skinned_vertices_buffer = (CVector3i *)0x0;
  return;
}
