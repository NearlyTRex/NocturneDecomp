// Name: core_inv.cpp_drawItemIconBackground_FUN_005001e0
// Address: 005001e0
// Address Range: [[005001e0, 00500364]]
// Convention: __cdecl
// Signature: void core_inv.cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2, int alpha)

#include "nocturne.h"

void __cdecl core_inv_cpp_drawItemIconBackground_FUN_005001e0(int x1,int y1,int x2,int y2,int alpha)

{
  CDemonRenderer *this_ptr;
  BADSPACEBASE *in_ESP;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_Inventory3DTextureAtlas);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,in_stack_00000018);
  this_ptr = g_CDemonRendererPtr;
  (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = x2 << 0x10;
  (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = y2 << 0x10;
  (this_ptr->vertex_buffer_ptr->projected_vertex).transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr->u = 0.0;
  this_ptr->vertex_buffer_ptr->v = 0.0;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = alpha << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y2 << 0x10;
  this_ptr->vertex_buffer_ptr[1].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[1].u = 2.2040519e-38;
  this_ptr->vertex_buffer_ptr[1].v = 0.0;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = alpha << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = in_stack_00000018 << 0x10;
  this_ptr->vertex_buffer_ptr[2].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[2].u = 2.2040519e-38;
  this_ptr->vertex_buffer_ptr[2].v = 8.816208e-39;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = x2 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = in_stack_00000018 << 0x10;
  this_ptr->vertex_buffer_ptr[3].projected_vertex.transformed_z = 0x1000;
  this_ptr->vertex_buffer_ptr[3].u = 0.0;
  this_ptr->vertex_buffer_ptr[3].v = 8.816208e-39;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffffc0,0xa3);
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740
            (&g_CDemonCameraInstance,y2,in_stack_00000018,alpha,in_stack_0000001c);
  return;
}
