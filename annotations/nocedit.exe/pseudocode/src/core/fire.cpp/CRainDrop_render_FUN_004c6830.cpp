// Name: core_fire.cpp_CRainDrop_render_FUN_004c6830
// Address: 004c6830
// Address Range: [[004c6830, 004c6bc3]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CRainDrop_render_FUN_004c6830(CRainDrop * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_EDI;
  byte bVar2;
  float10 fVar3;
  double dVar4;
  float afStackY_1020 [984];
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
  int local_20;
  float afStack_1c [3];
  int iStack_10;
  
  bVar2 = 0;
  vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
  local_68.x = (int)ROUND((this_ptr->base).position.x * 256f);
  local_68.y = (int)ROUND((this_ptr->base).position.y * 256f);
  local_68.z = (int)ROUND((this_ptr->base).position.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr,unaff_EDI);
  rotation = (CVector3i *)0x0;
  local_38.x = local_20;
  *(float *)((int)&local_38 + (uint)bVar2 * -8 + 4) = afStack_1c[(uint)bVar2 * -2];
  *(float *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,&local_38,rotation);
  local_5c = 0xbe000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_50.x = (int)ROUND(256f * -0.125);
  local_50.y = (int)ROUND(256f * -0.125);
  local_50.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_50);
  local_5c = 0x3e000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_80.x = (int)ROUND(256f * 0.125);
  local_80.y = (int)ROUND(256f * -0.125);
  local_80.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_80);
  local_5c = 0x3e000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_74.x = (int)ROUND(256f * 0.125);
  local_74.y = (int)ROUND(256f * 0.125);
  local_74.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_74);
  local_5c = 0xbe000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_44.x = (int)ROUND(256f * -0.125);
  local_44.y = (int)ROUND(256f * 0.125);
  local_44.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectRainDropTexture);
  (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
  afStack_1c[2] = (float)(0xffff - (int)g_PerspectiveReciprocal);
  fVar3 = (float10)(int)afStack_1c[2] *
          (float10)(this_ptr->base).lifetime_remaining * (float10)4;
  g_RenderVertexBuffer[1].u = 1.9101783e-38;
  g_RenderVertexBuffer[0].u = 1.1754944e-38;
  g_RenderVertexBuffer[0].v = 2.0203809e-38;
  g_RenderVertexBuffer[1].v = 2.0203809e-38;
  g_RenderVertexBuffer[2].u = 1.1754944e-38;
  g_RenderVertexBuffer[3].u = 1.1754944e-38;
  g_RenderVertexBuffer[2].v = (float)((int)g_CameraLoadImageReadBuffer + 0x771b0);
  iStack_10 = (int)afStack_1c[2];
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */(g_CameraLoadImageReadBuffer + 0x771b0,afStack_1c[2]));
  g_RenderVertexBuffer[3].v = (float)((ulonglong)dVar4 >> 0x20);
  g_RenderVertexBuffer[0].w_recip = (float)(int)ROUND(fVar3);
  CStack_2c.x = (int)ROUND((this_ptr->base).position.x * 256f);
  CStack_2c.y = (int)ROUND((this_ptr->base).position.y * 256f);
  CStack_2c.z = (int)ROUND((this_ptr->base).position.z * 256f);
  g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
  afStack_1c[2] = g_RenderVertexBuffer[0].w_recip;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,&CStack_2c,&g_BillboardCameraUp,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
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
            (g_CDemonRendererPtr,&SStack_a8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
