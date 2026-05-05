// Name: core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
// Address: 0059a2b0
// MANUAL RECONSTRUCTION
// Address Range: [[0059a2b0, 0059a3e3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel *this_ptr)

{
  void *ptr;
  int iVar2;

  for (iVar2 = 0; iVar2 < this_ptr->num_lods; iVar2 = iVar2 + 1) {
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    g_CurrentDebugLine = 0x23a;
    ptr = __vec_delete(this_ptr->vertex_data_ptr[iVar2],&g_SVertTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
    this_ptr->vertex_data_ptr[iVar2] = (SVert *)0x0;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    g_CurrentDebugLine = 0x23d;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->tri_data_ptr[iVar2]);
    this_ptr->tri_data_ptr[iVar2] = (SInputFace *)0x0;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    g_CurrentDebugLine = 0x240;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->index_data_ptr[iVar2]);
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    this_ptr->index_data_ptr[iVar2] = (int *)0x0;
    g_CurrentDebugLine = 0x243;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->cap_index_ptr[iVar2]);
    this_ptr->cap_index_ptr[iVar2] = (int *)0x0;
    this_ptr->vertex_count[iVar2] = 0;
    this_ptr->tri_count[iVar2] = 0;
    this_ptr->cap_tri_count[iVar2] = 0;
  }
  this_ptr->num_texture_sets = 0;
  this_ptr->num_textures = 0;
  memset(this_ptr->texture_sets,0,0x7080);
  this_ptr->num_parts = 0;
  this_ptr->num_lods = 0;
  return;
}
