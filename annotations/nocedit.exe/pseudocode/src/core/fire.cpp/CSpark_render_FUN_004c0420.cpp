// Name: core_fire.cpp_CSpark_render_FUN_004c0420
// Address: 004c0420
// Address Range: [[004c0420, 004c0578] [004c08e3, 004c0ab5]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CSpark_render_FUN_004c0420(CSpark * this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c0a9d) */

void __cdecl core_fire_cpp_CSpark_render_FUN_004c0420(CSpark *this_ptr)

{
  SRenderVertex *vertex_ptr;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *texture;
  float fStack_d4;
  CVector3i local_d0;
  CVector3i CStack_c0;
  float local_b4;
  float local_b0;
  uint uStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3i local_a0;
  CVector3i CStack_90;
  CVector3f CStack_84;
  float fStack_78;
  float fStack_74;
  CVector3i local_70;
  CVector3i local_64;
  byte auStack_54 [12];
  int local_48;
  int local_44;
  CVector3i aCStack_3c [2];
  uint local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->base).position.x * 256f);
  local_64.y = (int)ROUND((this_ptr->base).position.y * 256f);
  local_64.z = (int)ROUND((this_ptr->base).position.z * 256f);
  local_20 = 0x3ecccccd;
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_64);
  iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr);
  if (iVar3 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,&g_BillboardCameraRight,(CVector3i *)0x0);
  CStack_c0.z = -0x41333333;
  local_b4 = -0.4;
  local_b0 = 0.0;
  local_d0.x = (int)ROUND(256f * -0.4);
  local_d0.y = (int)ROUND(256f * -0.4);
  local_d0.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_d0);
  CStack_c0.z = 0x3ecccccd;
  local_b0 = 0.0;
  local_b4 = -0.4;
  auStack_54._8_4_ = (uint)ROUND(256f * 0.4);
  local_48 = (int)ROUND(256f * -0.4);
  local_44 = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)(auStack_54 + 8));
  CStack_c0.z = 0x3ecccccd;
  local_b4 = 0.4;
  local_b0 = 0.0;
  local_a0.x = (int)ROUND(256f * 0.4);
  local_a0.y = (int)ROUND(256f * 0.4);
  local_a0.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_a0);
  CStack_c0.z = -0x41333333;
  local_b4 = 0.4;
  local_b0 = 0.0;
  local_70.x = (int)ROUND(256f * -0.4);
  local_70.y = (int)ROUND(256f * 0.4);
  local_70.z = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_70);
  uVar1 = this_ptr->field4_0x44;
  if (uVar1 == 0) {
    texture = &g_FireEffectSparkTexture;
  }
  else if (uVar1 < 2) {
    texture = &g_FireEffectBlueSparkTexture;
  }
  else {
    if (uVar1 != 2) goto LAB_004c04af;
    texture = &g_FireEffectGreenSparkTexture;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
LAB_004c04af:
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
  lVar2 = (longlong)this_ptr->intensity_current * (longlong)(0xffff - (int)g_PerspectiveReciprocal);
  g_RenderVertexBuffer[0].w_recip =
       (float)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  g_RenderVertexBuffer[0].light = 9.18341e-41;
  g_RenderVertexBuffer[0].color = 0xffff;
  g_RenderVertexBuffer[0].fog = 9.18341e-41;
  g_RenderVertexBuffer[1].light = 9.18341e-41;
  g_RenderVertexBuffer[1].color = 0xffff;
  g_RenderVertexBuffer[1].fog = 9.18341e-41;
  g_RenderVertexBuffer[2].light = 9.18341e-41;
  g_RenderVertexBuffer[2].color = 0xffff;
  g_RenderVertexBuffer[2].fog = 9.18341e-41;
  g_RenderVertexBuffer[3].light = 9.18341e-41;
  g_RenderVertexBuffer[3].color = 0xffff;
  g_RenderVertexBuffer[3].fog = 9.18341e-41;
  g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,&g_BillboardPrimitive.base);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  CStack_84.x = (this_ptr->base).position.x;
  CStack_84.y = (this_ptr->base).position.y;
  CStack_84.z = (this_ptr->base).position.z;
  fStack_78 = (this_ptr->base).velocity.x;
  fStack_74 = (this_ptr->base).velocity.y;
  local_70.x = (int)(this_ptr->base).velocity.z;
  local_d0.x = 0x3f800000;
  iVar3 = 0;
  fStack_d4 = 0.025;
  do {
    fStack_d4 = fStack_d4 * (float)0.69999999999999996;
    local_d0.x = (int)((float)0.69999999999999996 * (float)local_d0.x);
    fStack_a8 = fStack_78 * fStack_d4;
    fStack_74 = fStack_74 - fStack_d4 * (this_ptr->base).gravity_acceleration;
    local_a0.x = (int)((float)local_70.x * fStack_d4);
    fStack_a4 = fStack_74 * fStack_d4;
    CStack_84.x = CStack_84.x - fStack_a8;
    CStack_84.z = CStack_84.z - (float)local_a0.x;
    CStack_84.y = CStack_84.y - fStack_a4;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&CStack_84);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr,&g_BillboardCameraRight,(CVector3i *)0x0);
    local_b4 = -fStack_1c * (float)local_d0.x;
    uStack_ac = 0;
    auStack_54._0_4_ = (uint)ROUND(local_b4 * 256f);
    auStack_54._4_4_ = (uint)ROUND(local_b4 * 256f);
    auStack_54._8_4_ = (uint)ROUND(256f * 0.0);
    local_b0 = local_b4;
    fStack_18 = local_b4;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)auStack_54);
    local_b4 = fStack_1c * (float)local_d0.x;
    local_b0 = fStack_18;
    uStack_ac = 0;
    aCStack_3c[0].x = (int)ROUND(local_b4 * 256f);
    aCStack_3c[0].y = (int)ROUND(fStack_18 * 256f);
    aCStack_3c[0].z = (int)ROUND(256f * 0.0);
    fStack_14 = local_b4;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,aCStack_3c);
    uStack_ac = 0;
    local_b4 = fStack_14;
    local_b0 = fStack_14;
    CStack_c0.x = (int)ROUND(fStack_14 * 256f);
    CStack_c0.y = (int)ROUND(fStack_14 * 256f);
    CStack_c0.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_c0);
    local_b4 = fStack_18;
    local_b0 = fStack_14;
    uStack_ac = 0;
    CStack_90.x = (int)ROUND(fStack_18 * 256f);
    CStack_90.y = (int)ROUND(fStack_14 * 256f);
    CStack_90.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&CStack_90);
    (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
    lVar2 = (longlong)this_ptr->intensity_current *
            (longlong)(0xffff - (int)g_PerspectiveReciprocal);
    g_RenderVertexBuffer[0].w_recip =
         (float)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    g_RenderVertexBuffer[0].light = 9.18341e-41;
    g_RenderVertexBuffer[0].color = 0xffff;
    g_RenderVertexBuffer[0].fog = 9.18341e-41;
    g_RenderVertexBuffer[1].light = 9.18341e-41;
    g_RenderVertexBuffer[1].color = 0xffff;
    g_RenderVertexBuffer[1].fog = 9.18341e-41;
    g_RenderVertexBuffer[2].light = 9.18341e-41;
    g_RenderVertexBuffer[2].color = 0xffff;
    g_RenderVertexBuffer[2].fog = 9.18341e-41;
    g_RenderVertexBuffer[3].light = 9.18341e-41;
    g_RenderVertexBuffer[3].color = 0xffff;
    g_RenderVertexBuffer[3].fog = 9.18341e-41;
    g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
    g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
    g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  } while (iVar3 < 3);
  return;
}
