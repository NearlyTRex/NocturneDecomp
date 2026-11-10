// Name: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_00522650
// Address: 00522650
// Address Range: [[00522650, 0052269b]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_00522650(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_00522650(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(model_ptr);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(model_ptr,0);
  iVar1 = model_ptr->cached_skinned_lod_index;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(model_ptr);
  core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540
            (this_ptr,part_index,model_ptr->skinned_vertices_buffer,0,pCVar2->vertex_count[iVar1]);
  return;
}
