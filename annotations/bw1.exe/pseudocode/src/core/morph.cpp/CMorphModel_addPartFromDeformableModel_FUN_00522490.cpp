// Name: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490
// Address: 00522490
// Address Range: [[00522490, 005224eb]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(model_ptr,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(model_ptr);
  iVar1 = model_ptr->cached_skinned_lod_index;
  core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340
            (this_ptr,pCVar2->vertex_count[iVar1],model_ptr->skinned_vertices_buffer,
             pCVar2->tri_count[iVar1],pCVar2->tri_data_ptr[iVar1],pCVar2->texture_sets,
             pCVar2->index_data_ptr[iVar1]);
  return;
}
