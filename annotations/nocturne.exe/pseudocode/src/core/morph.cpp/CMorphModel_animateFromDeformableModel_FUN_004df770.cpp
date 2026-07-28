// Name: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770
// Address: 004df770
// Address Range: [[004df770, 004df7bb]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004df770(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004df770(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(model_ptr);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(model_ptr,0);
  iVar1 = model_ptr->cached_skinned_lod_index;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(model_ptr);
  core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
            (this_ptr,part_index,model_ptr->skinned_vertices_buffer,0,pCVar2->vertex_count[iVar1]);
  return;
}
