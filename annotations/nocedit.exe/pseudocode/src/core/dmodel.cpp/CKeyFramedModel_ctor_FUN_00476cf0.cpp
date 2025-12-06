// Name: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
// Address: 00476cf0
// Address Range: [[00476cf0, 00476d8d]]
// Convention: __cdecl
// Signature: CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel *this_ptr)

{
  this_ptr->vertex_count = 0;
  this_ptr->vertex_list = (CVector3i **)0x0;
  this_ptr->vertex_normal_list = (CVector3i **)0x0;
  this_ptr->poly_count = 0;
  this_ptr->poly_vert_list = (SMRGLPrimitiveQuad **)0x0;
  this_ptr->poly_texture_index_list = (int *)0x0;
  this_ptr->env_map_opac_list = (uchar *)0x0;
  this_ptr->texture_count = 0;
  this_ptr->part_count = 0;
  this_ptr->frame_bounds = (CVector3f *)0x0;
  this_ptr->frame_count = 0;
  this_ptr->collision_triangle_count = 0;
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  this_ptr->transparent_pixel_flag = 0;
  this_ptr->disable_backface_culling = 0;
  this_ptr->model_filename[0] = '\0';
  return this_ptr;
}
