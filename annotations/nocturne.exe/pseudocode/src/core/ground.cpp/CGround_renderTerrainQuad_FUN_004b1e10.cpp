// Name: core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10
// Address: 004b1e10
// Address Range: [[004b1e10, 004b1fe0]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004b1e10(CGround *this_ptr,int world_column,int world_row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004b1e10(CGround *this_ptr,int world_column,int world_row)

{
  int iVar1;
  uint uVar2;
  uint row;
  int iVar3;
  int row_00;
  uint column;
  SMRGLHeaderPrimitive SStack_84;
  int local_6c;
  int local_68;
  int local_64;
  SMRGLHeaderPrimitive local_4c;
  int local_34;
  int local_30;
  int local_2c;
  int local_14;
  
  row_00 = (world_column - this_ptr->camera_x) + this_ptr->grid_width;
  iVar3 = (world_row - this_ptr->camera_y) + this_ptr->grid_height;
  row = world_row & this_ptr->height_minus_1;
  column = world_column & this_ptr->width_minus_1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004b1800(this_ptr,iVar3,row_00);
  this_ptr->vertex_indices[0] = iVar1;
  local_14 = row_00 + 1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004b1800(this_ptr,iVar3,local_14);
  this_ptr->vertex_indices[1] = iVar1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004b1800(this_ptr,iVar3 + 1,local_14);
  this_ptr->vertex_indices[2] = iVar1;
  iVar3 = core_ground_cpp_CGround_getVertexIndex_FUN_004b1800(this_ptr,iVar3 + 1,row_00);
  iVar1 = this_ptr->vertex_indices[0];
  this_ptr->vertex_indices[3] = iVar3;
  uVar2 = (&DAT_005c5024)[this_ptr->vertex_indices[3] * 0xc] &
          (&DAT_005c5024)[iVar1 * 0xc] & (&DAT_005c5024)[this_ptr->vertex_indices[1] * 0xc] &
          (&DAT_005c5024)[this_ptr->vertex_indices[2] * 0xc];
  if (((uVar2 & 0x80000000) != 0) && ((char)uVar2 != '\0')) {
    return;
  }
  core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(this_ptr,column,row);
  if ((column & 1) == (row & 1)) {
    SStack_84.base.count = 3;
    local_64 = this_ptr->vertex_indices[0];
    local_68 = this_ptr->vertex_indices[1];
    local_6c = this_ptr->vertex_indices[2];
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(this_ptr,&SStack_84);
    local_4c.base.count = 3;
    local_2c = this_ptr->vertex_indices[0];
    local_30 = this_ptr->vertex_indices[2];
    local_34 = this_ptr->vertex_indices[3];
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(this_ptr,&local_4c);
    return;
  }
  SStack_84.base.count = 3;
  local_64 = this_ptr->vertex_indices[0];
  local_68 = this_ptr->vertex_indices[1];
  local_6c = this_ptr->vertex_indices[3];
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(this_ptr,&SStack_84);
  local_4c.base.count = 3;
  local_2c = this_ptr->vertex_indices[1];
  local_30 = this_ptr->vertex_indices[2];
  local_34 = this_ptr->vertex_indices[3];
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(this_ptr,&local_4c);
  return;
}
