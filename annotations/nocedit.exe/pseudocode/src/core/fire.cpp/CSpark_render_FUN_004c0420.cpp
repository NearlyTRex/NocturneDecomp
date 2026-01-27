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
  SMRGLTextureBasic *texture;
  float fStack_d8;
  float fStack_d4;
  CVector3i local_d0;
  CVector3i CStack_c4;
  float local_b8;
  float local_b4;
  uint local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3i local_a0;
  CVector3i CStack_94;
  CVector3f CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i CStack_58;
  CVector3i local_4c;
  CVector3i aCStack_40 [2];
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  vertex_ptr = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_64.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_64.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  local_20 = 0.4;
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_64);
  iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr2,vertex_ptr);
  if (iVar3 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
  local_b8 = -0.4;
  local_b4 = -0.4;
  local_b0 = 0;
  local_d0.x = (int)ROUND(256.0f * -0.4);
  local_d0.y = (int)ROUND(256.0f * -0.4);
  local_d0.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_d0);
  local_b8 = 0.4;
  local_b0 = 0;
  local_b4 = -0.4;
  local_4c.x = (int)ROUND(256.0f * 0.4);
  local_4c.y = (int)ROUND(256.0f * -0.4);
  local_4c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_4c);
  local_b8 = 0.4;
  local_b4 = 0.4;
  local_b0 = 0;
  local_a0.x = (int)ROUND(256.0f * 0.4);
  local_a0.y = (int)ROUND(256.0f * 0.4);
  local_a0.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_a0);
  local_b8 = -0.4;
  local_b4 = 0.4;
  local_b0 = 0;
  local_70.x = (int)ROUND(256.0f * -0.4);
  local_70.y = (int)ROUND(256.0f * 0.4);
  local_70.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
  uVar1 = this_ptr->unk;
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
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
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
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&g_BillboardPrimitive.base);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  CStack_88.x = (this_ptr->base).position.x;
  CStack_88.y = (this_ptr->base).position.y;
  CStack_88.z = (this_ptr->base).position.z;
  fStack_7c = (this_ptr->base).velocity.x;
  fStack_78 = (this_ptr->base).velocity.y;
  fStack_74 = (this_ptr->base).velocity.z;
  fStack_d4 = 1.0;
  iVar3 = 0;
  fStack_d8 = 0.025;
  do {
    fStack_d8 = fStack_d8 * (float)0.69999999999999996;
    fStack_d4 = (float)0.69999999999999996 * fStack_d4;
    fStack_ac = fStack_7c * fStack_d8;
    fStack_78 = fStack_78 - fStack_d8 * (this_ptr->base).gravity_acceleration;
    fStack_a4 = fStack_74 * fStack_d8;
    fStack_a8 = fStack_78 * fStack_d8;
    CStack_88.x = CStack_88.x - fStack_ac;
    CStack_88.z = CStack_88.z - fStack_a4;
    CStack_88.y = CStack_88.y - fStack_a8;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&CStack_88);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
    local_b8 = -local_20 * fStack_d4;
    local_b0 = 0;
    CStack_58.x = (int)ROUND(local_b8 * 256.0f);
    CStack_58.y = (int)ROUND(local_b8 * 256.0f);
    CStack_58.z = (int)ROUND(256.0f * 0.0);
    local_b4 = local_b8;
    fStack_1c = local_b8;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_58);
    local_b8 = local_20 * fStack_d4;
    local_b4 = fStack_1c;
    local_b0 = 0;
    aCStack_40[0].x = (int)ROUND(local_b8 * 256.0f);
    aCStack_40[0].y = (int)ROUND(fStack_1c * 256.0f);
    aCStack_40[0].z = (int)ROUND(256.0f * 0.0);
    fStack_18 = local_b8;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,aCStack_40);
    local_b0 = 0;
    local_b8 = fStack_18;
    local_b4 = fStack_18;
    CStack_c4.x = (int)ROUND(fStack_18 * 256.0f);
    CStack_c4.y = (int)ROUND(fStack_18 * 256.0f);
    CStack_c4.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_c4);
    local_b8 = fStack_1c;
    local_b4 = fStack_18;
    local_b0 = 0;
    CStack_94.x = (int)ROUND(fStack_1c * 256.0f);
    CStack_94.y = (int)ROUND(fStack_18 * 256.0f);
    CStack_94.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_94);
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
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr2,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  } while (iVar3 < 3);
  return;
}
