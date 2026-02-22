// Name: core_morph.cpp_CMorph_addTriPartToModel_FUN_0052b4b0
// Address: 0052b4b0
// Address Range: [[0052b4b0, 0052b4fc]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addTriPartToModel_FUN_0052b4b0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addTriPartToModel_FUN_0052b4b0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)

{
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_0052a580
            (this_ptr->models + model_index,vertex_count,vertices,face_count,faces,0x3c,texture_lod,
             texture_index_list);
  return;
}
