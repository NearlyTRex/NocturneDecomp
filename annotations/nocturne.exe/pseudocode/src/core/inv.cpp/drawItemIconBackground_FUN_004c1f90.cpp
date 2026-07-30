// Name: core_inv.cpp_drawItemIconBackground_FUN_004c1f90
// Address: 004c1f90
// Address Range: [[004c1f90, 004c2146]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_drawItemIconBackground_FUN_004c1f90(int x1,int y1,int x2,int y2,int alpha)

#include "nocturne.h"

void __cdecl core_inv_cpp_drawItemIconBackground_FUN_004c1f90(int x1,int y1,int x2,int y2,int alpha)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive local_48;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = 0x10000;
  iVar2 = 0x10000;
  if (0x1e0 < DAT_005b7620) {
    iVar1 = (int)(0x2800000 / (longlong)DAT_005b761c);
    iVar2 = (int)(0x1e00000 / (longlong)DAT_005b7620);
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005bac34);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,alpha);
  this_ptr = DAT_005ae704;
  (DAT_005ae704->vertex_buffer_ptr->projected_vertex).screen_x = x1 * iVar1;
  (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = y1 * iVar2;
  (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr->u = 0;
  this_ptr->vertex_buffer_ptr->v = 0;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar1 * x2;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y1 * iVar2;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[1].u = 0xf00000;
  this_ptr->vertex_buffer_ptr[1].v = 0;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar1 * x2;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar2 * y2;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[2].u = 0xf00000;
  this_ptr->vertex_buffer_ptr[2].v = 0x600000;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = x1 * iVar1;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar2 * y2;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[3].u = 0;
  this_ptr->vertex_buffer_ptr[3].v = 0x600000;
  local_48.surface_normal.D.i = 0;
  local_48.surface_normal.C.i = 0;
  local_48.base.count = 4;
  local_48.surface_normal.B.i = 0;
  local_2c = 1;
  local_48.surface_normal.A.i = 0;
  local_30 = 0;
  local_24 = 3;
  local_28 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(this_ptr,&local_48,0xa3);
  local_20 = x1;
  local_18 = y1;
  local_1c = x2;
  local_14 = y2;
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_004405d0((CDemonCamera *)&DAT_01fb8508,x1,x2,y1,y2);
  return;
}
