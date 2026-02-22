// Name: core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
// Address: 00477690
// Address Range: [[00477690, 0047784d]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel *this_ptr)

{
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1a5;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->vertex_list);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1a8;
  this_ptr->vertex_list = (CVector3i *)0x0;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->vertex_normal_list);
  this_ptr->vertex_normal_list = (CVector3i *)0x0;
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1ab;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->poly_vert_list);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1ae;
  this_ptr->poly_vert_list = (SMRGLPrimitiveQuad *)0x0;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->poly_texture_index_list);
  this_ptr->poly_texture_index_list = (int *)0x0;
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1b1;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->env_map_opac_list);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1b4;
  this_ptr->env_map_opac_list = (uchar *)0x0;
  if (this_ptr->frame_bounds != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&this_ptr->frame_bounds[-1].z);
  }
  this_ptr->frame_bounds = (CVector3f *)0x0;
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1b7;
  if (this_ptr->collision_triangle_list != (CDemonTriangle *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&this_ptr->collision_triangle_list[-1].area);
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
