// Name: core_inv.cpp_drawWeaponIconBackground_FUN_00500050
// Address: 00500050
// Address Range: [[00500050, 005001d4]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_drawWeaponIconBackground_FUN_00500050(int x1,int y1,int x2,int y2,int alpha)

#include "nocturne.h"

void __cdecl core_inv_cpp_drawWeaponIconBackground_FUN_00500050(int x1,int y1,int x2,int y2,int alpha)

{
  SMRGLHeaderPrimitive local_48;
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
  this_ptr->vertex_buffer_ptr->v = 0xa00000;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y1 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[1].u = 0x600000;
  this_ptr->vertex_buffer_ptr[1].v = 0xa00000;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[2].u = 0x600000;
  this_ptr->vertex_buffer_ptr[2].v = 0x1000000;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = x1 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[3].u = 0;
  this_ptr->vertex_buffer_ptr[3].v = 0x1000000;
  local_48.base.count = 4;
  local_48.surface_normal.D = 0;
  local_48.surface_normal.C = 0;
  local_48.surface_normal.B = 0;
  local_48.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(this_ptr,&local_48,0xa3);
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740(&g_CDemonCameraInstance,x1,x2,y1,y2);
  return;
}
