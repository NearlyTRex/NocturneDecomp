// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_0051b7d0
// Address: 0051b7d0
// Address Range: [[0051b7d0, 0051b7f5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_FUN_0051b7d0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_FUN_0051b7d0(CDeformableModelInstance *this_ptr)

{
  if (this_ptr->skinned_vertices_buffer == (CVector3i *)0x0) {
    return;
  }
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->skinned_vertices_buffer);
  this_ptr->skinned_vertices_buffer = (CVector3i *)0x0;
  return;
}
