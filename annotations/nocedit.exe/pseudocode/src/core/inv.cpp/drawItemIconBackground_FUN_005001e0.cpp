// Name: core_inv.cpp_drawItemIconBackground_FUN_005001e0
// Address: 005001e0
// Address Range: [[005001e0, 00500364]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_drawItemIconBackground_FUN_005001e0(int x1,int y1,int x2,int y2,int alpha)

#include "nocturne.h"

void __cdecl core_inv_cpp_drawItemIconBackground_FUN_005001e0(int x1,int y1,int x2,int y2,int alpha)

{
  SMRGLPrimitiveQuadIndex local_48;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CDemonRenderer *this_ptr;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_Inventory3DTextureAtlas);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,alpha);
  this_ptr = g_CDemonRendererPtr2;
  (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x = x1 << 0x10;
  (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = y1 << 0x10;
  (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr->u = 0;
  this_ptr->vertex_buffer_ptr->v = 0;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y1 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[1].u = 0xf00000;
  this_ptr->vertex_buffer_ptr[1].v = 0;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[2].u = 0xf00000;
  this_ptr->vertex_buffer_ptr[2].v = 0x600000;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = x1 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[3].u = 0;
  this_ptr->vertex_buffer_ptr[3].v = 0x600000;
  local_48.base.base.count = 4;
  local_48.base.surface_normal.D.i = 0;
  local_48.base.surface_normal.C.i = 0;
  local_48.base.surface_normal.B.i = 0;
  local_48.base.surface_normal.A.i = 0;
  local_48.vertices[0] = 0;
  local_48.vertices[3] = 3;
  local_48.vertices[1] = 1;
  local_48.vertices[2] = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10(this_ptr,&local_48.base,0xa3);
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740(&g_CDemonCameraInstance,x1,x2,y1,y2);
  return;
}
