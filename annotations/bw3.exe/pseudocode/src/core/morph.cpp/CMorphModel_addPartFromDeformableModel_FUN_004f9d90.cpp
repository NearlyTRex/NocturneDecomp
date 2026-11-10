// Name: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90
// Address: 004f9d90
// Address Range: [[004f9d90, 004f9deb]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(model_ptr,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(model_ptr);
  iVar1 = model_ptr->cached_skinned_lod_index;
  core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_004f9c40
            (this_ptr,pCVar2->vertex_count[iVar1],model_ptr->skinned_vertices_buffer,
             pCVar2->tri_count[iVar1],pCVar2->tri_data_ptr[iVar1],(STextureSet *)&pCVar2->field_0xc0
             ,pCVar2->index_data_ptr[iVar1]);
  return;
}
