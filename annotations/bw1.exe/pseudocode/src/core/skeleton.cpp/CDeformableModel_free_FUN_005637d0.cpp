// Name: core_skeleton.cpp_CDeformableModel_free_FUN_005637d0
// Address: 005637d0
// Address Range: [[005637d0, 005638b6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->num_lods) {
    do {
      FUN_005c0336(pCVar1->vertex_data_ptr[0]);
      pCVar1->vertex_data_ptr[0] = (SVert *)0x0;
      FUN_005c0336(pCVar1->tri_data_ptr[0]);
      pCVar1->tri_data_ptr[0] = (SInputFace *)0x0;
      FUN_005c0336(pCVar1->index_data_ptr[0]);
      pCVar1->index_data_ptr[0] = (int *)0x0;
      FUN_005c0336(pCVar1->cap_index_ptr[0]);
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
  memset(&this_ptr->field_0xc0,0,0xb40);
  this_ptr->num_parts = 0;
  this_ptr->num_lods = 0;
  this_ptr->model_filename[0] = '\0';
  this_ptr->model_name[0] = '\0';
  this_ptr->skeleton_ptr = (CSkeleton *)0x0;
  return;
}
