// Name: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
// Address: 00452590
// Address Range: [[00452590, 0045262d]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590(CKeyFramedModel *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590(CKeyFramedModel *this_ptr)

{
  this_ptr->vertex_count = 0;
  this_ptr->vertex_list = (CVector3i *)0x0;
  this_ptr->vertex_normal_list = (CVector3i *)0x0;
  this_ptr->poly_count = 0;
  this_ptr->poly_vert_list = (SMRGLPrimitiveQuad *)0x0;
  this_ptr->poly_texture_index_list = (int *)0x0;
  this_ptr->env_map_opac_list = (uchar *)0x0;
  this_ptr->texture_count = 0;
  this_ptr->part_count = 0;
  this_ptr->frame_bounds = (CBoundingBox3D *)0x0;
  this_ptr->frame_count = 0;
  this_ptr->collision_triangle_count = 0;
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  this_ptr->transparent_pixel_flag = 0;
  this_ptr->disable_backface_culling = 0;
  this_ptr->model_filename[0] = '\0';
  return this_ptr;
}
