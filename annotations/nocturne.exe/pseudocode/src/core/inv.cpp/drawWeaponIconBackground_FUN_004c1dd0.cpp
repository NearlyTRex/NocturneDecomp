// Name: core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0
// Address: 004c1dd0
// Address Range: [[004c1dd0, 004c1f86]]
// Convention: unknown
// Signature: void core_inv_cpp_drawWeaponIconBackground_FUN_004c1dd0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void core_inv_cpp_drawWeaponIconBackground_FUN_004c1dd0(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,param_5);
  this_ptr = DAT_005ae704;
  (DAT_005ae704->vertex_buffer_ptr->projected_vertex).screen_x = param_1 * iVar1;
  (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = param_2 * iVar2;
  (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr->u = 0;
  this_ptr->vertex_buffer_ptr->v = 0xa00000;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar1 * param_3;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = param_2 * iVar2;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[1].u = 0x600000;
  this_ptr->vertex_buffer_ptr[1].v = 0xa00000;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar1 * param_3;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar2 * param_4;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[2].u = 0x600000;
  this_ptr->vertex_buffer_ptr[2].v = 0x1000000;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = param_1 * iVar1;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar2 * param_4;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[3].u = 0;
  this_ptr->vertex_buffer_ptr[3].v = 0x1000000;
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
  local_20 = param_1;
  local_18 = param_2;
  local_1c = param_3;
  local_14 = param_4;
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_004405d0
            (&g_CDemonCamera_01fb8508,param_1,param_3,param_2,param_4);
  return;
}
