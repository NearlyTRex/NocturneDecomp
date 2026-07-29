// Name: core_morph.cpp_CMorph_addQuadPartToModel_FUN_004e0240
// Address: 004e0240
// Address Range: [[004e0240, 004e028c]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_004e0240(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_004e0240(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)

{
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
            (this_ptr->models + model_index,vertex_count,vertices,face_count,faces,0x48,texture_lod,
             texture_index_list);
  return;
}
