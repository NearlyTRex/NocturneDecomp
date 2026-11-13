// Name: core_skeleton.cpp_CDeformableModelInstance_free_FUN_0054c060
// Address: 0054c060
// Address Range: [[0054c060, 0054c085]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_free_FUN_0054c060(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_free_FUN_0054c060(CDeformableModelInstance *this_ptr)

{
  if (this_ptr->skinned_vertices_buffer == (CVector3i *)0x0) {
    return;
  }
  FUN_005a30b6(this_ptr->skinned_vertices_buffer);
  this_ptr->skinned_vertices_buffer = (CVector3i *)0x0;
  return;
}
