// Name: core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0
// Address: 00517cc0
// Address Range: [[00517cc0, 00517d9d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(CDeformableModel *this_ptr)

{
  void *ptr;
  CDeformableModel *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->num_lods) {
    do {
      ptr = __vec_delete
                      (pCVar1->vertex_data_ptr[0],&g_SVertTypeInfo_005a1ee0);
      shape_memdbg_cpp_free_FUN_00564486(ptr);
      pCVar1->vertex_data_ptr[0] = (SVert *)0x0;
      shape_memdbg_cpp_free_FUN_00564486(pCVar1->tri_data_ptr[0]);
      pCVar1->tri_data_ptr[0] = (SInputFace *)0x0;
      shape_memdbg_cpp_free_FUN_00564486(pCVar1->index_data_ptr[0]);
      pCVar1->index_data_ptr[0] = (int *)0x0;
      shape_memdbg_cpp_free_FUN_00564486(pCVar1->cap_index_ptr[0]);
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
  memset(this_ptr->texture_sets,0,0xb40);
  this_ptr->num_parts = 0;
  this_ptr->num_lods = 0;
  return;
}
