// Name: core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
// Address: 004ef990
// Address Range: [[004ef990, 004efb60]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround * this_ptr, int world_column, int world_row)

#include "nocturne.h"

void __cdecl
core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
          (CGround *this_ptr,int world_column,int world_row)

{
  int iVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int row;
  int unaff_EDI;
  uint column;
  uint in_stack_0000001c;
  SMRGLHeaderPrimitive local_34;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  row = (world_column - this_ptr->camera_x) + this_ptr->grid_width;
  iVar3 = (world_row - this_ptr->camera_y) + this_ptr->grid_height;
  column = world_column & this_ptr->width_minus_1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3,row);
  this_ptr->vertex_indices[0] = iVar1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3,row + 1);
  this_ptr->vertex_indices[1] = iVar1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3 + 1,unaff_EDI);
  this_ptr->vertex_indices[2] = iVar1;
  iVar3 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(this_ptr,iVar3 + 1,row);
  iVar1 = this_ptr->vertex_indices[0];
  this_ptr->vertex_indices[3] = iVar3;
  uVar2 = g_RenderVertexBuffer[this_ptr->vertex_indices[3]].projected_vertex.screen_x &
          g_RenderVertexBuffer[iVar1].projected_vertex.screen_x &
          g_RenderVertexBuffer[this_ptr->vertex_indices[1]].projected_vertex.screen_x &
          g_RenderVertexBuffer[this_ptr->vertex_indices[2]].projected_vertex.screen_x;
  if (((uVar2 & 0x80000000) != 0) && ((char)uVar2 != '\0')) {
    return;
  }
  core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(this_ptr,column,in_stack_0000001c);
  if ((column & 1) == (in_stack_0000001c & 1)) {
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970
              (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffff90);
    local_34.base.count = 3;
    local_14 = this_ptr->vertex_indices[0];
    iStack_18 = this_ptr->vertex_indices[2];
    iStack_1c = this_ptr->vertex_indices[3];
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(this_ptr,&local_34);
    return;
  }
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970
            (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffff90);
  local_34.base.count = 3;
  local_14 = this_ptr->vertex_indices[1];
  iStack_18 = this_ptr->vertex_indices[2];
  iStack_1c = this_ptr->vertex_indices[3];
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(this_ptr,&local_34);
  return;
}
