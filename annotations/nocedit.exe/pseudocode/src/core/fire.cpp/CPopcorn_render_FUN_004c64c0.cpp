// Name: core_fire.cpp_CPopcorn_render_FUN_004c64c0
// Address: 004c64c0
// Address Range: [[004c64c0, 004c6819]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CPopcorn_render_FUN_004c64c0(CPopcorn *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CPopcorn_render_FUN_004c64c0(CPopcorn *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  uint auStackY_1060 [1002];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a0;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  uint local_30;
  uint local_2c;
  uint local_28;
  CVector3i CStack_24;
  CVector3i local_18;
  
  bVar2 = 0;
  vertex_ptr = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_48.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_48.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_48.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_48);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr2,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr2,&local_78);
  rotation = (CVector3i *)0x0;
  local_60.x = local_78.x;
  *(uint *)((int)&local_60 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_78 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_78 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,&local_60,rotation);
  local_30 = 0xbe000000;
  local_2c = 0xbe000000;
  local_28 = 0;
  local_18.x = (int)ROUND(256.0f * -0.125);
  local_18.y = (int)ROUND(256.0f * -0.125);
  local_18.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_18);
  local_30 = 0x3e000000;
  local_2c = 0xbe000000;
  local_28 = 0;
  local_3c.x = (int)ROUND(256.0f * 0.125);
  local_3c.y = (int)ROUND(256.0f * -0.125);
  local_3c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_3c);
  local_30 = 0x3e000000;
  local_2c = 0x3e000000;
  local_28 = 0;
  local_6c.x = (int)ROUND(256.0f * 0.125);
  local_6c.y = (int)ROUND(256.0f * 0.125);
  local_6c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_6c);
  local_30 = 0xbe000000;
  local_2c = 0x3e000000;
  local_28 = 0;
  local_54.x = (int)ROUND(256.0f * -0.125);
  local_54.y = (int)ROUND(256.0f * 0.125);
  local_54.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectPopcornTexture);
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)(g_CurrentSceneCamera,this_ptr,0);
  g_RenderVertexBuffer[0].u = 0x80000;
  g_RenderVertexBuffer[0].v = 0xf80000;
  g_RenderVertexBuffer[1].u = 0xf80000;
  g_RenderVertexBuffer[1].v = 0xf80000;
  g_RenderVertexBuffer[2].u = 0xf80000;
  g_RenderVertexBuffer[2].v = 0x80000;
  g_RenderVertexBuffer[3].u = 0x80000;
  g_RenderVertexBuffer[0].w_recip = (float)(0xffff - (int)g_PerspectiveReciprocal);
  g_RenderVertexBuffer[3].v = 0x80000;
  CStack_24.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  CStack_24.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  CStack_24.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,&CStack_24,&g_BillboardCameraUp,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  SStack_a0.surface_normal.D = 0;
  SStack_a0.surface_normal.C = 0;
  SStack_a0.surface_normal.B = 0;
  SStack_a0.surface_normal.A = 0;
  uStack_88 = 0;
  uStack_7c = 3;
  SStack_a0.base.count = 4;
  uStack_84 = 1;
  uStack_80 = 2;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_a0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
