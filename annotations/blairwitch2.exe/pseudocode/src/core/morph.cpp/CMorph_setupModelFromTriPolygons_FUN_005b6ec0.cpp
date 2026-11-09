// Name: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_005b6ec0
// Address: 005b6ec0
// Address Range: [[005b6ec0, 005b6f15]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_005b6ec0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureModel *texture_list,int *texture_index_list)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_005b6ec0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureModel *texture_list,int *texture_index_list)

{
  core_morph_cpp_CMorphModel_free_FUN_005b6030((CMorphModel *)(this_ptr + model_index * 0x608));
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_005b6090
            ((CMorphModel *)(this_ptr + model_index * 0x608),vertex_count,vertices,face_count,faces,
             0x3c,texture_list,texture_index_list);
  return;
}
