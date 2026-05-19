// Name: core_fire.cpp_CCrater_render_FUN_004c4620
// Address: 004c4620
// Address Range: [[004c4620, 004c4874]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_004c4620(CCrater *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_render_FUN_004c4620(CCrater *this_ptr)

{
  SMRGLPrimitiveTriangleIndex local_6c;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3i local_20;
  CVector3i local_14;
  
  if (this_ptr->active == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->center_position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectBlastTexture);
  local_20.x = (int)ROUND(this_ptr->corner_positions[0].x * 256.0f);
  local_20.y = (int)ROUND(this_ptr->corner_positions[0].y * 256.0f);
  local_20.z = (int)ROUND(this_ptr->corner_positions[0].z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[0].projected_vertex,&local_20);
  local_2c.x = (int)ROUND(this_ptr->corner_positions[1].x * 256.0f);
  local_2c.y = (int)ROUND(this_ptr->corner_positions[1].y * 256.0f);
  local_2c.z = (int)ROUND(this_ptr->corner_positions[1].z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[1].projected_vertex,&local_2c);
  local_38.x = (int)ROUND(this_ptr->corner_positions[2].x * 256.0f);
  local_38.y = (int)ROUND(this_ptr->corner_positions[2].y * 256.0f);
  local_38.z = (int)ROUND(this_ptr->corner_positions[2].z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[2].projected_vertex,&local_38);
  local_14.x = (int)ROUND(this_ptr->corner_positions[3].x * 256.0f);
  local_14.y = (int)ROUND(this_ptr->corner_positions[3].y * 256.0f);
  local_14.z = (int)ROUND(this_ptr->corner_positions[3].z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[3].projected_vertex,&local_14);
  g_RenderVertexBuffer[0].r = 0xffff;
  g_RenderVertexBuffer[0].g = 0xffff;
  g_RenderVertexBuffer[0].b = 0xffff;
  g_RenderVertexBuffer[1].r = 0xffff;
  g_RenderVertexBuffer[1].g = 0xffff;
  g_RenderVertexBuffer[1].b = 0xffff;
  g_RenderVertexBuffer[2].r = 0xffff;
  g_RenderVertexBuffer[2].g = 0xffff;
  g_RenderVertexBuffer[2].b = 0xffff;
  g_RenderVertexBuffer[3].r = 0xffff;
  g_RenderVertexBuffer[3].g = 0xffff;
  g_RenderVertexBuffer[3].b = 0xffff;
  g_RenderVertexBuffer[0].u = 0x80000;
  g_RenderVertexBuffer[0].v = 0xf80000;
  g_RenderVertexBuffer[1].u = 0xf80000;
  g_RenderVertexBuffer[1].v = 0xf80000;
  g_RenderVertexBuffer[2].u = 0xf80000;
  g_RenderVertexBuffer[2].v = 0x80000;
  g_RenderVertexBuffer[3].u = 0x80000;
  g_RenderVertexBuffer[3].v = 0x80000;
  local_6c.base.surface_normal.B.i = 0xffff;
  local_6c.base.surface_normal.A.i = 0;
  local_6c.base.surface_normal.C.i = 0;
  local_6c.base.base.count = 3;
  local_6c.base.surface_normal.D.i = 0;
  local_6c.vertices[0] = 0;
  local_6c.vertices[1] = 1;
  local_6c.vertices[2] = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0
            (g_CDemonRendererPtr2,&local_6c.base);
  local_6c.vertices[0] = 0;
  local_6c.vertices[1] = 2;
  local_6c.vertices[2] = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0
            (g_CDemonRendererPtr2,&local_6c.base);
  return;
}
