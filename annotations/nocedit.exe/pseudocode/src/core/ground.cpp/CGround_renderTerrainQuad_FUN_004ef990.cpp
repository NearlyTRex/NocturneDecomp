// Name: core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
// Address: 004ef990
// Address Range: [[004ef990, 004efb60]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround *this_ptr,int world_column,int world_row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround *this_ptr,int world_column,int world_row)

{
  int iVar1;
  int iVar2;
  int iVar4;
  uint uVar2;
  uint row;
  int iVar3;
  int row_00;
  uint column;
  SMRGLPrimitiveTriangleIndex SStack_84;
  SMRGLPrimitiveTriangleIndex local_4c;
  int local_14;
  
  row_00 = (world_column - this_ptr->camera_x) + this_ptr->grid_width;
  iVar3 = (world_row - this_ptr->camera_y) + this_ptr->grid_height;
  row = world_row & this_ptr->height_minus_1;
  column = world_column & this_ptr->width_minus_1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3,row_00);
  this_ptr->vertex_indices[0] = iVar1;
  iVar2 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3,row_00 + 1);
  this_ptr->vertex_indices[1] = iVar2;
  iVar2 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3 + 1,row_00 + 1);
  this_ptr->vertex_indices[2] = iVar2;
  iVar4 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3 + 1,row_00);
  iVar2 = this_ptr->vertex_indices[0];
  this_ptr->vertex_indices[3] = iVar4;
  uVar2 = g_RenderVertexBuffer[this_ptr->vertex_indices[3]].projected_vertex.screen_x &
          g_RenderVertexBuffer[iVar2].projected_vertex.screen_x &
          g_RenderVertexBuffer[this_ptr->vertex_indices[1]].projected_vertex.screen_x &
          g_RenderVertexBuffer[this_ptr->vertex_indices[2]].projected_vertex.screen_x;
  if (((uVar2 & 0x80000000) != 0) && ((char)uVar2 != '\0')) {
    return;
  }
  core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(this_ptr,column,row);
  if ((column & 1) == (row & 1)) {
    SStack_84.base.base.count = 3;
    SStack_84.vertices[2] = this_ptr->vertex_indices[0];
    SStack_84.vertices[1] = this_ptr->vertex_indices[1];
    SStack_84.vertices[0] = this_ptr->vertex_indices[2];
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(this_ptr,&SStack_84.base);
    local_4c.base.base.count = 3;
    local_4c.vertices[2] = this_ptr->vertex_indices[0];
    local_4c.vertices[1] = this_ptr->vertex_indices[2];
    local_4c.vertices[0] = this_ptr->vertex_indices[3];
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(this_ptr,&local_4c.base);
    return;
  }
  SStack_84.base.base.count = 3;
  SStack_84.vertices[2] = this_ptr->vertex_indices[0];
  SStack_84.vertices[1] = this_ptr->vertex_indices[1];
  SStack_84.vertices[0] = this_ptr->vertex_indices[3];
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(this_ptr,&SStack_84.base);
  local_4c.base.base.count = 3;
  local_4c.vertices[2] = this_ptr->vertex_indices[1];
  local_4c.vertices[1] = this_ptr->vertex_indices[2];
  local_4c.vertices[0] = this_ptr->vertex_indices[3];
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(this_ptr,&local_4c.base);
  return;
}
