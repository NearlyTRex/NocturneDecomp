// Name: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004fa900
// Address: 004fa900
// Address Range: [[004fa900, 004fa955]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004fa900(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureModel *texture_list,int *texture_index_list)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004fa900(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureModel *texture_list,int *texture_index_list)

{
  core_morph_cpp_CMorphModel_free_FUN_004f9a70(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0
            (this_ptr->models + model_index,vertex_count,vertices,face_count,faces,0x3c,texture_list
             ,texture_index_list);
  return;
}
