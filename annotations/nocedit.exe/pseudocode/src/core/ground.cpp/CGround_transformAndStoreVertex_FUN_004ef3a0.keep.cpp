// Name: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
// Address: 004ef3a0
// MANUAL RECONSTRUCTION
// Address Range: [[004ef3a0, 004ef489]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0(CGround *this_ptr,int column,int row)

{
  int iVar3;
  int iVar1;
  int iVar2;
  CVector3i local_1c;
  
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004ef380
                    (this_ptr,(row - this_ptr->camera_y) + this_ptr->grid_height,
                     (column - this_ptr->camera_x) + this_ptr->grid_width);
  local_1c.x = this_ptr->vertical_scale * column * 0x100;
  local_1c.z = this_ptr->vertical_scale * row * 0x100;
  local_1c.y = this_ptr->height_scale *
               (int)((short *)this_ptr->terrain_data)
                    [((row & this_ptr->height_minus_1) * this_ptr->width +
                      (column & this_ptr->width_minus_1)) * 2];
  engine_special_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[iVar1].projected_vertex,&local_1c);
  g_RenderVertexBuffer[iVar1].r = 0x3fff;
  g_RenderVertexBuffer[iVar1].g = 0x3fff;
  iVar3 = g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
  g_RenderVertexBuffer[iVar1].b = 0x3fff;
  if (iVar3 < 0) {
    g_RenderVertexBuffer[iVar1].a = 0;
  }
  else {
    iVar2 = (g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z << 8) /
            (this_ptr->grid_width * this_ptr->vertical_scale);
    g_RenderVertexBuffer[iVar1].a = iVar2;
    if (0xffff < iVar2) {
      g_RenderVertexBuffer[iVar1].a = 0xffff;
      return;
    }
  }
  return;
}
