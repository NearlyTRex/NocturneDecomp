// Name: core_fire.cpp_CPopcorn_render_FUN_004c64c0
// Address: 004c64c0
// Address Range: [[004c64c0, 004c6819] [0060c8fd, 0060c91e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CPopcorn_render_FUN_004c64c0(CPopcorn *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CPopcorn_render_FUN_004c64c0(CPopcorn *this_ptr)

{
  SRenderVertex *vertex_ptr_00;
  int iVar1;
  byte bVar2;
  SMRGLPrimitiveQuadIndex SStack_a0;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i CStack_24;
  CVector3i local_18;
  SRenderVertex *vertex_ptr;
  CVector3i *rotation;
  
  vertex_ptr_00 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_48.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_48.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_48.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr_00->projected_vertex,&local_48);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50
                    (g_CDemonRendererPtr2,vertex_ptr_00);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr2,&local_78);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,&local_60,(CVector3i *)0x0);
  local_18.x = (int)ROUND(256.0f * -0.125);
  local_18.y = (int)ROUND(256.0f * -0.125);
  local_18.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_18);
  local_3c.x = (int)ROUND(256.0f * 0.125);
  local_3c.y = (int)ROUND(256.0f * -0.125);
  local_3c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_3c);
  local_6c.x = (int)ROUND(256.0f * 0.125);
  local_6c.y = (int)ROUND(256.0f * 0.125);
  local_6c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_6c);
  local_54.x = (int)ROUND(256.0f * -0.125);
  local_54.y = (int)ROUND(256.0f * 0.125);
  local_54.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectPopcornTexture);
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
            (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  g_RenderVertexBuffer[0].u = 0x80000;
  g_RenderVertexBuffer[0].v = 0xf80000;
  g_RenderVertexBuffer[1].u = 0xf80000;
  g_RenderVertexBuffer[1].v = 0xf80000;
  g_RenderVertexBuffer[2].u = 0xf80000;
  g_RenderVertexBuffer[2].v = 0x80000;
  g_RenderVertexBuffer[3].u = 0x80000;
  g_RenderVertexBuffer[0].a = 0xffff - g_PerspectiveReciprocal;
  g_RenderVertexBuffer[3].v = 0x80000;
  CStack_24.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  CStack_24.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  CStack_24.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  g_RenderVertexBuffer[1].a = g_RenderVertexBuffer[0].a;
  g_RenderVertexBuffer[2].a = g_RenderVertexBuffer[0].a;
  g_RenderVertexBuffer[3].a = g_RenderVertexBuffer[0].a;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,&CStack_24,&g_BillboardCameraUp,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  SStack_a0.base.surface_normal.D = 0;
  SStack_a0.base.surface_normal.C = 0;
  SStack_a0.base.surface_normal.B = 0;
  SStack_a0.base.surface_normal.A = 0;
  SStack_a0.vertices[0] = 0;
  SStack_a0.vertices[3] = 3;
  SStack_a0.base.base.count = 4;
  SStack_a0.vertices[1] = 1;
  SStack_a0.vertices[2] = 2;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_a0.base);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
