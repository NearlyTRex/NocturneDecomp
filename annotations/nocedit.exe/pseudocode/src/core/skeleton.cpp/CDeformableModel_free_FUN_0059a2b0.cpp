// Name: core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
// Address: 0059a2b0
// Address Range: [[0059a2b0, 0059a3e3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel *this_ptr)

{
  void *ptr;
  CDeformableModel *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->num_lods) {
    do {
      g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
      g_CurrentDebugLine = 0x23a;
      ptr = crt_memory_c_freeSingleInstance_FUN_005fe632
                      (pCVar1->vertex_data_ptr[0],&g_SVertTypeInfo);
      crt_memory_c_free_FUN_005fe659(ptr);
      pCVar1->vertex_data_ptr[0] = (SVert *)0x0;
      g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
      g_CurrentDebugLine = 0x23d;
      crt_memory_c_free_FUN_005fe659(pCVar1->tri_data_ptr[0]);
      pCVar1->tri_data_ptr[0] = (SInputFace *)0x0;
      g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
      g_CurrentDebugLine = 0x240;
      crt_memory_c_free_FUN_005fe659(pCVar1->index_data_ptr[0]);
      g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
      pCVar1->index_data_ptr[0] = (int *)0x0;
      g_CurrentDebugLine = 0x243;
      crt_memory_c_free_FUN_005fe659(pCVar1->cap_index_ptr[0]);
      pCVar1->cap_index_ptr[0] = (int *)0x0;
      pCVar1->vertex_count[0] = 0;
      pCVar1->tri_count[0] = 0;
      pCVar1->cap_tri_count[0] = 0;
      iVar2 = iVar2 + 1;
      pCVar1 = (CDeformableModel *)pCVar1->lod_info;
    } while (iVar2 < this_ptr->num_lods);
  }
  this_ptr->num_texture_sets = 0;
  this_ptr->num_textures = 0;
  crt_memory_c_memset_FUN_005fde40(this_ptr->texture_sets,0,0x7080);
  this_ptr->num_parts = 0;
  this_ptr->num_lods = 0;
  return;
}
