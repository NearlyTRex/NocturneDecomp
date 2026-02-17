// Name: core_fire.cpp_CRainDrop_render_FUN_004c6830
// Address: 004c6830
// Address Range: [[004c6830, 004c6bc3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  uint auStackY_1020 [984];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a8;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  CVector3i local_80;
  CVector3i local_74;
  CVector3i local_68;
  uint local_5c;
  uint local_58;
  uint local_54;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  CVector3i CStack_2c;
  CVector3i local_20;
  float fStack_14;
  int iStack_10;
  
  bVar2 = 0;
  vertex_ptr = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_68.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_68.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_68.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr2,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr2,&local_20);
  rotation = (CVector3i *)0x0;
  local_38.x = local_20.x;
  *(uint *)((int)&local_38 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_20 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,&local_38,rotation);
  local_5c = 0xbe000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_50.x = (int)ROUND(256.0f * -0.125);
  local_50.y = (int)ROUND(256.0f * -0.125);
  local_50.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_50);
  local_5c = 0x3e000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_80.x = (int)ROUND(256.0f * 0.125);
  local_80.y = (int)ROUND(256.0f * -0.125);
  local_80.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_80);
  local_5c = 0x3e000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_74.x = (int)ROUND(256.0f * 0.125);
  local_74.y = (int)ROUND(256.0f * 0.125);
  local_74.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_74);
  local_5c = 0xbe000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_44.x = (int)ROUND(256.0f * -0.125);
  local_44.y = (int)ROUND(256.0f * 0.125);
  local_44.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectRainDropTexture);
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)(g_CurrentSceneCamera,this_ptr,0);
  iStack_10 = 0xffff - (int)g_PerspectiveReciprocal;
  g_RenderVertexBuffer[1].u = 0xd00000;
  g_RenderVertexBuffer[0].u = 0x800000;
  g_RenderVertexBuffer[0].v = 0xdc0000;
  g_RenderVertexBuffer[1].v = 0xdc0000;
  g_RenderVertexBuffer[2].u = 0x800000;
  g_RenderVertexBuffer[3].u = 0x800000;
  g_RenderVertexBuffer[2].v = (int)g_CameraLoadImageReadBuffer + 0x771b0;
  g_RenderVertexBuffer[0].w_recip =
       (float)(int)ROUND(ROUND((float)iStack_10 *
                               (this_ptr->base).lifetime_remaining * (float)4));
  g_RenderVertexBuffer[3].v = (int)g_CameraLoadImageReadBuffer + 0x771b0;
  CStack_2c.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  CStack_2c.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  CStack_2c.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
  fStack_14 = g_RenderVertexBuffer[0].w_recip;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,&CStack_2c,&g_BillboardCameraUp,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  SStack_a8.surface_normal.D = 0;
  SStack_a8.surface_normal.C = 0;
  SStack_a8.surface_normal.B = 0;
  SStack_a8.surface_normal.A = 0;
  uStack_90 = 0;
  uStack_84 = 3;
  SStack_a8.base.count = 4;
  uStack_8c = 1;
  uStack_88 = 2;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_a8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
