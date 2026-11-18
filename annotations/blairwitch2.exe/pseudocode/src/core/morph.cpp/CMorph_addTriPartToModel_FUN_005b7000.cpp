// Name: core_morph.cpp_CMorph_addTriPartToModel_FUN_005b7000
// Address: 005b7000
// Address Range: [[005b7000, 005b704c]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addTriPartToModel_FUN_005b7000(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,SMRGLTextureModel *texture_list,int *texture_index_list)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addTriPartToModel_FUN_005b7000(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,SMRGLTextureModel *texture_list,int *texture_index_list)

{
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_005b6090
            (this_ptr->models + model_index,vertex_count,vertex_data,poly_count,poly_data,0x3c,
             texture_list,texture_index_list);
  return;
}
