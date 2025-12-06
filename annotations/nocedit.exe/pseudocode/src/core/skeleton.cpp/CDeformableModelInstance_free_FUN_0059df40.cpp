// Name: core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40
// Address: 0059df40
// Address Range: [[0059df40, 0059df7d]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_free_FUN_0059df40(CDeformableModelInstance *this_ptr)

{
  if (this_ptr->skinned_vertices_buffer == (CVector3i *)0x0) {
    return;
  }
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x905;
  crt_memory_c_free_FUN_005fe659(this_ptr->skinned_vertices_buffer);
  this_ptr->skinned_vertices_buffer = (CVector3i *)0x0;
  return;
}
