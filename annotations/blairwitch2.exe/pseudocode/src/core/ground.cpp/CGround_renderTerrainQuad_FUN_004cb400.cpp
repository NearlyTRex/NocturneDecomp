// Name: core_ground.cpp_CGround_renderTerrainQuad_FUN_004cb400
// Address: 004cb400
// Address Range: [[004cb400, 004cb5d0]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004cb400(CGround *this_ptr,int world_column,int world_row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004cb400(CGround *this_ptr,int world_column,int world_row)

{
  int iVar1;
  uint uVar2;
  uint row;
  int column;
  int row_00;
  uint column_00;
  SMRGLHeaderPrimitive aSStack_84 [4];
  uint local_80;
  uint local_6c;
  uint local_68;
  uint local_64;
  SMRGLHeaderPrimitive local_4c [4];
  uint local_48;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_14;
  
  row_00 = (world_column - *(int *)&this_ptr->field_0x2c) + *(int *)&this_ptr->field_0x10;
  column = (world_row - *(int *)&this_ptr->field_0x30) + *(int *)&this_ptr->field_0x14;
  row = world_row & *(uint *)&this_ptr->field_0xc;
  column_00 = world_column & *(uint *)&this_ptr->field_0x8;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004cadf0(this_ptr,column,row_00);
  *(int *)&this_ptr->field_0x4c = iVar1;
  local_14 = row_00 + 1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004cadf0(this_ptr,column,local_14);
  *(int *)&this_ptr->field_0x50 = iVar1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004cadf0(this_ptr,column + 1,local_14);
  *(int *)&this_ptr->field_0x54 = iVar1;
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004cadf0(this_ptr,column + 1,row_00);
  *(int *)&this_ptr->field_0x58 = iVar1;
  uVar2 = (&DAT_00622024)[*(int *)&this_ptr->field_0x58 * 0xc] &
          (&DAT_00622024)[*(int *)&this_ptr->field_0x4c * 0xc] &
          (&DAT_00622024)[*(int *)&this_ptr->field_0x50 * 0xc] &
          (&DAT_00622024)[*(int *)&this_ptr->field_0x54 * 0xc];
  if (((uVar2 & 0x80000000) != 0) && ((char)uVar2 != '\0')) {
    return;
  }
  core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004cb2f0(this_ptr,column_00,row);
  if ((column_00 & 1) == (row & 1)) {
    local_80 = 3;
    local_64 = *(uint *)&this_ptr->field_0x4c;
    local_68 = *(uint *)&this_ptr->field_0x50;
    local_6c = *(uint *)&this_ptr->field_0x54;
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0(this_ptr,aSStack_84);
    local_48 = 3;
    local_2c = *(uint *)&this_ptr->field_0x4c;
    local_30 = *(uint *)&this_ptr->field_0x54;
    local_34 = *(uint *)&this_ptr->field_0x58;
    core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0(this_ptr,local_4c);
    return;
  }
  local_80 = 3;
  local_64 = *(uint *)&this_ptr->field_0x4c;
  local_68 = *(uint *)&this_ptr->field_0x50;
  local_6c = *(uint *)&this_ptr->field_0x58;
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0(this_ptr,aSStack_84);
  local_48 = 3;
  local_2c = *(uint *)&this_ptr->field_0x50;
  local_30 = *(uint *)&this_ptr->field_0x54;
  local_34 = *(uint *)&this_ptr->field_0x58;
  core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004cb3e0(this_ptr,local_4c);
  return;
}
