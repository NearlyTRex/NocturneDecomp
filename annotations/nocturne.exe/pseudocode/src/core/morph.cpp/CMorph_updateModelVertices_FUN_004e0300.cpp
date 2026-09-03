// Name: core_morph.cpp_CMorph_updateModelVertices_FUN_004e0300
// Address: 004e0300
// Address Range: [[004e0300, 004e0330]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelVertices_FUN_004e0300(CMorph *this_ptr,int model_index,CVector3i *vertices,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelVertices_FUN_004e0300(CMorph *this_ptr,int model_index,CVector3i *vertices,int part_index)

{
  core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740
            (this_ptr->models + model_index,part_index,vertices);
  return;
}
