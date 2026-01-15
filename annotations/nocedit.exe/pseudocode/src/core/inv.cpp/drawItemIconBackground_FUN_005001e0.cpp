// Name: core_inv.cpp_drawItemIconBackground_FUN_005001e0
// Address: 005001e0
// Address Range: [[005001e0, 00500364]]
// Convention: __cdecl
// Signature: void core_inv.cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2, int alpha)

#include "nocturne.h"

void __cdecl core_inv_cpp_drawItemIconBackground_FUN_005001e0(int x1,int y1,int x2,int y2,int alpha)

{
  CDemonRenderer *this_ptr;
  SMRGLHeaderPrimitive local_48;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_Inventory3DTextureAtlas);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,alpha);
  this_ptr = g_CDemonRendererPtr;
  (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = x1 << 0x10;
  (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = y1 << 0x10;
  (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr->u = 0.0;
  this_ptr->vertex_buffer_ptr->v = 0.0;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y1 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[1].u = 2.2040519e-38;
  this_ptr->vertex_buffer_ptr[1].v = 0.0;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[2].u = 2.2040519e-38;
  this_ptr->vertex_buffer_ptr[2].v = 8.816208e-39;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = x1 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[3].u = 0.0;
  this_ptr->vertex_buffer_ptr[3].v = 8.816208e-39;
  local_48.base.count = 4;
  local_48.surface_normal.D = 0;
  local_48.surface_normal.C = 0;
  local_48.surface_normal.B = 0;
  local_48.surface_normal.A = 0;
  local_30 = 0;
  local_24 = 3;
  local_2c = 1;
  local_28 = 2;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(this_ptr,&local_48,0xa3);
  local_20 = x1;
  local_18 = y1;
  local_1c = x2;
  local_14 = y2;
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740(&g_CDemonCameraInstance,x1,x2,y1,y2);
  return;
}
