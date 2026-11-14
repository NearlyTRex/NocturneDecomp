// Name: core_dmodel.cpp_CKeyFramedModel_free_FUN_00467160
// Address: 00467160
// Address Range: [[00467160, 0046726b]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_free_FUN_00467160(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_free_FUN_00467160(CKeyFramedModel *this_ptr)

{
  FUN_005c0336(this_ptr->vertex_list);
  this_ptr->vertex_list = (CVector3i *)0x0;
  FUN_005c0336(this_ptr->vertex_normal_list);
  this_ptr->vertex_normal_list = (CVector3i *)0x0;
  FUN_005c0336(this_ptr->poly_vert_list);
  this_ptr->poly_vert_list = (SMRGLPrimitiveQuad *)0x0;
  FUN_005c0336(this_ptr->poly_texture_index_list);
  this_ptr->poly_texture_index_list = (int *)0x0;
  FUN_005c0336(this_ptr->env_map_opac_list);
  this_ptr->env_map_opac_list = (uchar *)0x0;
  FUN_005c0336(this_ptr->frame_bounds);
  this_ptr->frame_bounds = (CBoundingBox3D *)0x0;
  FUN_005c0336(this_ptr->collision_triangle_list);
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  this_ptr->vertex_count = 0;
  this_ptr->poly_count = 0;
  this_ptr->texture_count = 0;
  this_ptr->part_count = 0;
  this_ptr->frame_count = 0;
  this_ptr->collision_triangle_count = 0;
  this_ptr->transparent_pixel_flag = 0;
  this_ptr->disable_backface_culling = 0;
  return;
}
