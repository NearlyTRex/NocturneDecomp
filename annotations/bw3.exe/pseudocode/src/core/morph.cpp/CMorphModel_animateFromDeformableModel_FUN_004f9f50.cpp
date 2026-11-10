// Name: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004f9f50
// Address: 004f9f50
// Address Range: [[004f9f50, 004f9f9b]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004f9f50(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004f9f50(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(model_ptr);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(model_ptr,0);
  iVar1 = model_ptr->cached_skinned_lod_index;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(model_ptr);
  core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40
            (this_ptr,part_index,model_ptr->skinned_vertices_buffer,0,pCVar2->vertex_count[iVar1]);
  return;
}
