// Name: core_dmodel.cpp_CKeyFramedModel_FUN_00452f10
// Address: 00452f10
// Address Range: [[00452f10, 00453030]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel *this_ptr)

{
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->vertex_list);
  this_ptr->vertex_list = (CVector3i *)0x0;
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->vertex_normal_list);
  this_ptr->vertex_normal_list = (CVector3i *)0x0;
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->poly_vert_list);
  this_ptr->poly_vert_list = (SMRGLPrimitiveQuad *)0x0;
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->poly_texture_index_list);
  this_ptr->poly_texture_index_list = (int *)0x0;
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->env_map_opac_list);
  this_ptr->env_map_opac_list = (uchar *)0x0;
  if (this_ptr->frame_bounds != (CBoundingBox3D *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(&this_ptr->frame_bounds[-1].max.z);
  }
  this_ptr->frame_bounds = (CBoundingBox3D *)0x0;
  if (this_ptr->collision_triangle_list != (CDemonTriangle *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(&this_ptr->collision_triangle_list[-1].dominant_axis);
  }
  this_ptr->vertex_count = 0;
  this_ptr->poly_count = 0;
  this_ptr->texture_count = 0;
  this_ptr->part_count = 0;
  this_ptr->frame_count = 0;
  this_ptr->collision_triangle_count = 0;
  this_ptr->transparent_pixel_flag = 0;
  this_ptr->disable_backface_culling = 0;
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  return;
}
