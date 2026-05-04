// Name: core_fire.cpp_CTrail_render_FUN_004c5e90
// Address: 004c5e90
// MANUAL RECONSTRUCTION
// Address Range: [[004c5e90, 004c6149]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_render_FUN_004c5e90(CTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_render_FUN_004c5e90(CTrail *this_ptr)

{
  float fVar1;
  SMRGLPrimitiveQuad local_78;
  CVector3i local_50;
  float local_44;
  float local_40;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3f local_20;
  CVector3i local_14;
  
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,this_ptr->texture_ptr);
  local_78.base.base.count = 4;
  local_78.base.surface_normal.A.i = 0;
  local_78.base.surface_normal.B.i = 0;
  local_78.base.surface_normal.C.i = 0;
  local_78.base.surface_normal.D.i = 0;
  local_78.vertices[0].vertex_index = 0;
  local_78.vertices[1].vertex_index = 1;
  local_78.vertices[2].vertex_index = 2;
  local_78.vertices[3].vertex_index = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70
            (g_CDemonRendererPtr2,this_ptr->current_alpha);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,(float *)&local_20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_20,(CVector3f *)0x0);
  fVar1 = this_ptr->size * this_ptr->current_alpha;
  local_2c.x = (int)ROUND(fVar1 * 256.0f);
  local_2c.y = (int)ROUND(fVar1 * 256.0f);
  local_2c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_2c);
  local_44 = -fVar1;
  local_14.x = (int)ROUND(local_44 * 256.0f);
  local_14.y = (int)ROUND(fVar1 * 256.0f);
  local_14.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_14);
  local_40 = -fVar1;
  local_38.x = (int)ROUND(local_44 * 256.0f);
  local_38.y = (int)ROUND(local_40 * 256.0f);
  local_38.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_38);
  local_44 = -local_44;
  local_50.x = (int)ROUND(local_44 * 256.0f);
  local_50.y = (int)ROUND(local_40 * 256.0f);
  local_50.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_50);
  g_RenderVertexBuffer[0].u = 0x80000;
  g_RenderVertexBuffer[0].v = 0xf80000;
  g_RenderVertexBuffer[1].u = 0xf80000;
  g_RenderVertexBuffer[1].v = 0xf80000;
  g_RenderVertexBuffer[2].u = 0xf80000;
  g_RenderVertexBuffer[2].v = 0x80000;
  g_RenderVertexBuffer[3].u = 0x80000;
  g_RenderVertexBuffer[3].v = 0x80000;
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
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr2,&local_78.base);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
