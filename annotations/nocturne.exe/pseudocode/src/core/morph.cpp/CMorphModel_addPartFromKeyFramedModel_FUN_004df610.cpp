// Name: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610
// Address: 004df610
// Address Range: [[004df610, 004df658]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)

{
  CVector3i *vertex_data;
  int poly_count;
  SMRGLPrimitiveQuad *poly_data;
  int poly_stride;
  SMRGLTextureLod *texture_list;
  int *texture_index_list;
  
  texture_index_list = model_ptr->poly_texture_index_list;
  texture_list = model_ptr->texture_list;
  poly_stride = 0x48;
  poly_data = model_ptr->poly_vert_list;
  poly_count = model_ptr->poly_count;
  vertex_data = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(model_ptr,frame_index)
  ;
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
            (this_ptr,model_ptr->vertex_count,vertex_data,poly_count,&poly_data->base,poly_stride,
             texture_list,texture_index_list);
  return;
}
