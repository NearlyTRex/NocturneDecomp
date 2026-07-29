// Name: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0
// Address: 004e00b0
// Address Range: [[004e00b0, 004e0105]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)

{
  core_morph_cpp_CMorphModel_free_FUN_004df290(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
            (this_ptr->models + model_index,vertex_count,vertices,face_count,faces,0x3c,texture_lod,
             texture_index_list);
  return;
}
