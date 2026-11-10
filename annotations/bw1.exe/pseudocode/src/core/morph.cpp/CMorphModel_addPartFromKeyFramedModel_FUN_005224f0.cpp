// Name: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0
// Address: 005224f0
// Address Range: [[005224f0, 00522538]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)

{
  CVector3i *vertex_data;
  int poly_count;
  SMRGLPrimitiveQuad *poly_data;
  int poly_stride;
  SMRGLTextureModel *texture_list;
  int *texture_index_list;
  
  texture_index_list = model_ptr->poly_texture_index_list;
  texture_list = (SMRGLTextureModel *)&model_ptr->field_0x124;
  poly_stride = 0x48;
  poly_data = model_ptr->poly_vert_list;
  poly_count = model_ptr->poly_count;
  vertex_data = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(model_ptr,frame_index)
  ;
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_005221d0
            (this_ptr,model_ptr->vertex_count,vertex_data,poly_count,&poly_data->base,poly_stride,
             texture_list,texture_index_list);
  return;
}
