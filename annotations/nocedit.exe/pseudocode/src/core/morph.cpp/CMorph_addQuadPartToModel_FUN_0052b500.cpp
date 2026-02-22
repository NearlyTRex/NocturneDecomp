// Name: core_morph.cpp_CMorph_addQuadPartToModel_FUN_0052b500
// Address: 0052b500
// Address Range: [[0052b500, 0052b54c]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_0052b500(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_0052b500(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)

{
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_0052a580
            (this_ptr->models + model_index,vertex_count,vertices,face_count,faces,0x48,texture_lod,
             texture_index_list);
  return;
}
