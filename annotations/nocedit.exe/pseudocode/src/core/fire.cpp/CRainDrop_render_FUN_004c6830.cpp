// Name: core_fire.cpp_CRainDrop_render_FUN_004c6830
// Address: 004c6830
// Address Range: [[004c6830, 004c6bd1] [00610920, 00610941]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)

{
  SRenderVertex *vertex_ptr_00;
  int iVar1;
  byte bVar2;
  SMRGLPrimitiveQuadIndex SStack_a8;
  CVector3i local_80;
  CVector3i local_74;
  CVector3i local_68;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  CVector3i CStack_2c;
  CVector3i local_20;
  int iStack_14;
  int iStack_10;
  SRenderVertex *vertex_ptr;
  CVector3i *rotation;
  
  vertex_ptr_00 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_68.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_68.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_68.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr_00->projected_vertex,&local_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50
                    (g_CDemonRendererPtr2,vertex_ptr_00);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr2,&local_20);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,&local_38,(CVector3i *)0x0);
  local_50.x = (int)ROUND(256.0f * -0.125);
  local_50.y = (int)ROUND(256.0f * -0.125);
  local_50.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_50);
  local_80.x = (int)ROUND(256.0f * 0.125);
  local_80.y = (int)ROUND(256.0f * -0.125);
  local_80.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_80);
  local_74.x = (int)ROUND(256.0f * 0.125);
  local_74.y = (int)ROUND(256.0f * 0.125);
  local_74.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_74);
  local_44.x = (int)ROUND(256.0f * -0.125);
  local_44.y = (int)ROUND(256.0f * 0.125);
  local_44.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectRainDropTexture);
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
            (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  g_RenderVertexBuffer[1].u = 0xd00000;
  g_RenderVertexBuffer[0].u = 0x800000;
  g_RenderVertexBuffer[0].v = 0xdc0000;
  g_RenderVertexBuffer[1].v = 0xdc0000;
  g_RenderVertexBuffer[2].u = 0x800000;
  g_RenderVertexBuffer[3].u = 0x800000;
  g_RenderVertexBuffer[2].v = (int)g_CameraLoadImageReadBuffer + 0x771b0;
  g_RenderVertexBuffer[0].a =
       (int)ROUND(ROUND((float)(0xffff - g_PerspectiveReciprocal) *
                        (this_ptr->base).lifetime_remaining * (float)4));
  g_RenderVertexBuffer[3].v = (int)g_CameraLoadImageReadBuffer + 0x771b0;
  CStack_2c.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  CStack_2c.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  CStack_2c.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  g_RenderVertexBuffer[1].a = g_RenderVertexBuffer[0].a;
  g_RenderVertexBuffer[2].a = g_RenderVertexBuffer[0].a;
  g_RenderVertexBuffer[3].a = g_RenderVertexBuffer[0].a;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,&CStack_2c,&g_BillboardCameraUp,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  SStack_a8.base.surface_normal.D.i = 0;
  SStack_a8.base.surface_normal.C.i = 0;
  SStack_a8.base.surface_normal.B.i = 0;
  SStack_a8.base.surface_normal.A.i = 0;
  SStack_a8.vertices[0] = 0;
  SStack_a8.vertices[3] = 3;
  SStack_a8.base.base.count = 4;
  SStack_a8.vertices[1] = 1;
  SStack_a8.vertices[2] = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_a8.base);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
