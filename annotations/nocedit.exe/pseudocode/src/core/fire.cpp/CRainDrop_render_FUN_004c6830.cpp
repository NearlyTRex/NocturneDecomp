// Name: core_fire.cpp_CRainDrop_render_FUN_004c6830
// Address: 004c6830
// Address Range: [[004c6830, 004c6bc3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  double dVar3;
  int aiStackY_1020 [983];
  CVector3i *rotation;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  CVector3i local_80;
  CVector3i local_74;
  CVector3i local_68;
  uint local_5c;
  uint local_58;
  uint local_54;
  CVector3i local_50;
  CVector3i local_44;
  byte local_38 [12];
  int iStack_2c;
  int iStack_28;
  CVector3i local_20;
  int iStack_14;
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
  local_38._0_4_ = local_20.x;
  *(uint *)(local_38 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_20 + (uint)bVar2 * -8 + 4);
  *(uint *)(local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,(CVector3i *)local_38,rotation);
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
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
  iStack_14 = 0xffff - (int)g_PerspectiveReciprocal;
  g_RenderVertexBuffer[1].u = 0xd00000;
  g_RenderVertexBuffer[0].u = 0x800000;
  g_RenderVertexBuffer[0].v = 0xdc0000;
  g_RenderVertexBuffer[1].v = 0xdc0000;
  g_RenderVertexBuffer[2].u = 0x800000;
  g_RenderVertexBuffer[3].u = 0x800000;
  g_RenderVertexBuffer[2].v = (int)g_CameraLoadImageReadBuffer + 0x771b0;
  iStack_10 = iStack_14;
  dVar3 = round
                    ((double)((float)iStack_14 *
                             (this_ptr->base).lifetime_remaining * (float)4));
  g_RenderVertexBuffer[0].w_recip = (float)(int)ROUND(dVar3);
  g_RenderVertexBuffer[3].v = (int)g_CameraLoadImageReadBuffer + 0x771b0;
  local_38._8_4_ = (uint)ROUND((this_ptr->base).position.x * 256.0f);
  iStack_2c = (int)ROUND((this_ptr->base).position.y * 256.0f);
  iStack_28 = (int)ROUND((this_ptr->base).position.z * 256.0f);
  g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
  local_20.z = (int)g_RenderVertexBuffer[0].w_recip;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,(CVector3i *)(local_38 + 8),&g_BillboardCameraUp,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  iStack_98 = 0;
  iStack_9c = 0;
  iStack_a0 = 0;
  iStack_a4 = 0;
  uStack_94 = 0;
  uStack_88 = 3;
  iStack_a8 = 4;
  uStack_90 = 1;
  uStack_8c = 2;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&stack0xffffff54);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
