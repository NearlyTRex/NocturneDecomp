// Name: core_fire.cpp_CLightningBolt_render_FUN_004c5720
// Address: 004c5720
// Address Range: [[004c5720, 004c5a47] [004c5a4b, 004c5dd8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt *this_ptr)

{
  CVector3f *world_position;
  char *pcVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  CDemonRenderer *pCVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  double dVar9;
  SMRGLHeaderPrimitive local_dc;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  CVector3i local_b0;
  CVector3i local_9c;
  byte local_90 [8];
  int local_88;
  int local_84;
  CVector3i local_80;
  CVector3i local_6c;
  byte local_60 [8];
  int local_58;
  int local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  CVector3i local_18;
  
  if (*(float *)(this_ptr->unk + 0x14) <= 0.0) {
    return;
  }
  iVar6 = rand();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_FireEffectLightningBoltTextures + iVar6 % 6);
  local_dc.base.count = 4;
  local_dc.surface_normal.D = 0;
  local_dc.surface_normal.C = 0;
  local_dc.surface_normal.B = 0;
  local_dc.surface_normal.A = 0;
  local_c4 = 0;
  local_b8 = 3;
  local_c0 = 1;
  local_bc = 2;
  uVar7 = rand();
  if ((uVar7 & 1) == 0) {
    g_RenderVertexBuffer[1].u = 0x80000;
    g_RenderVertexBuffer[2].u = 0x80000;
    g_RenderVertexBuffer[3].u = 0xf80000;
    g_RenderVertexBuffer[0].u = 0xf80000;
  }
  else {
    g_RenderVertexBuffer[1].u = 0xf80000;
    g_RenderVertexBuffer[2].u = 0xf80000;
    g_RenderVertexBuffer[3].u = 0x80000;
    g_RenderVertexBuffer[0].u = 0x80000;
  }
  g_RenderVertexBuffer[3].v = 0xf80000;
  g_RenderVertexBuffer[2].v = 0xf80000;
  g_RenderVertexBuffer[1].v = 0x80000;
  g_RenderVertexBuffer[0].v = 0x80000;
  g_RenderVertexBuffer[0].light = 0xffff;
  g_RenderVertexBuffer[0].color = 0xffff;
  g_RenderVertexBuffer[0].fog = 0xffff;
  g_RenderVertexBuffer[1].light = 0xffff;
  g_RenderVertexBuffer[1].color = 0xffff;
  g_RenderVertexBuffer[1].fog = 0xffff;
  g_RenderVertexBuffer[2].light = 0xffff;
  g_RenderVertexBuffer[2].color = 0xffff;
  g_RenderVertexBuffer[2].fog = 0xffff;
  g_RenderVertexBuffer[3].light = 0xffff;
  g_RenderVertexBuffer[3].color = 0xffff;
  g_RenderVertexBuffer[3].fog = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  fVar4 = *(float *)this_ptr->unk;
  world_position = (CVector3f *)(this_ptr->unk + 4);
  if (fVar4 == 0.0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,world_position);
    engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
              (g_CDemonRendererPtr2,(float *)&local_24);
    local_24.x = (int)fVar4;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,&local_24,(CVector3i *)0x0);
    if (0.0 < *(float *)(this_ptr->unk + 0x18)) {
      local_b4 = *(float *)(this_ptr->unk + 0x18);
    }
    else {
      local_b4 = *(float *)(this_ptr->unk + 0x10) * (float)0.25;
    }
    local_b0.x = *(int *)(this_ptr->unk + 0x10);
    local_60._0_4_ = (uint)ROUND(local_b4 * 256.0f);
    local_60._4_4_ = (uint)ROUND((float)local_b0.x * 256.0f);
    local_58 = (int)ROUND(256.0f * 0.0);
    local_b0.y = (int)fVar4;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_60);
    local_b4 = -local_b4;
    local_48.x = (int)ROUND(local_b4 * 256.0f);
    local_48.y = (int)ROUND((float)local_b0.x * 256.0f);
    local_48.z = (int)ROUND((float)local_b0.y * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_48);
    local_b0.x = 0;
    local_30.x = (int)ROUND(local_b4 * 256.0f);
    local_30.y = (int)ROUND(256.0f * 0.0);
    local_30.z = (int)ROUND((float)local_b0.y * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_30);
    local_b4 = -local_b4;
    local_18.x = (int)ROUND(local_b4 * 256.0f);
    local_18.y = (int)ROUND((float)local_b0.x * 256.0f);
    local_18.z = (int)ROUND((float)local_b0.y * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_18);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr2,&local_dc);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  else {
    local_9c.x = (int)ROUND(world_position->x * 256.0f);
    local_9c.y = (int)ROUND(*(float *)(this_ptr->unk + 8) * 256.0f);
    local_9c.z = (int)ROUND(*(float *)(this_ptr->unk + 0xc) * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_9c);
    local_6c.x = (int)ROUND(world_position->x * 256.0f);
    local_6c.y = (int)ROUND(*(float *)(this_ptr->unk + 8) * 256.0f);
    local_6c.z = (int)ROUND(*(float *)(this_ptr->unk + 0xc) * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_6c);
    pcVar1 = this_ptr->unk + 0x1c;
    local_3c.x = (int)ROUND(*(float *)pcVar1 * 256.0f);
    local_3c.y = (int)ROUND(*(float *)(this_ptr->unk + 0x20) * 256.0f);
    local_3c.z = (int)ROUND(*(float *)(this_ptr->unk + 0x24) * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_90._0_4_ = (uint)ROUND(*(float *)pcVar1 * 256.0f);
    local_90._4_4_ = (uint)ROUND(*(float *)(this_ptr->unk + 0x20) * 256.0f);
    local_88 = (int)ROUND(*(float *)(this_ptr->unk + 0x24) * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_90);
    pCVar5 = g_CDemonRendererPtr2;
    fVar4 = *(float *)(this_ptr->unk + 0x18);
    fVar8 = (float10)256;
    fVar3 = *(float *)(this_ptr->unk + 0x28);
    (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    dVar9 = round((double)((float10)fVar4 * fVar8));
    local_18.z = (int)ROUND(dVar9);
    piVar2 = &(pCVar5->vertex_buffer_ptr->projected_vertex).transformed_y;
    *piVar2 = *piVar2 - local_18.z;
    pCVar5->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    piVar2 = &pCVar5->vertex_buffer_ptr[1].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_18.z;
    pCVar5->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    dVar9 = round((double)((float10)fVar3 * fVar8));
    local_18.z = (int)ROUND(dVar9);
    piVar2 = &pCVar5->vertex_buffer_ptr[2].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_18.z;
    pCVar5->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar5->vertex_buffer_ptr[3].projected_vertex.transformed_y =
         pCVar5->vertex_buffer_ptr[3].projected_vertex.transformed_y - local_18.z;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (pCVar5,(SMRGLHeaderPrimitive *)&stack0xffffff1c);
    local_60._4_4_ = (uint)ROUND(world_position->x * 256.0f);
    local_58 = (int)ROUND(*(float *)(this_ptr->unk + 8) * 256.0f);
    local_54 = (int)ROUND(*(float *)(this_ptr->unk + 0xc) * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)(local_60 + 4));
    local_80.x = (int)ROUND(world_position->x * 256.0f);
    local_80.y = (int)ROUND(*(float *)(this_ptr->unk + 8) * 256.0f);
    local_80.z = (int)ROUND(*(float *)(this_ptr->unk + 0xc) * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_80);
    local_b0.x = (int)ROUND(*(float *)pcVar1 * 256.0f);
    local_b0.y = (int)ROUND(*(float *)(this_ptr->unk + 0x20) * 256.0f);
    local_b0.z = (int)ROUND(*(float *)(this_ptr->unk + 0x24) * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_b0);
    local_90._4_4_ = (uint)ROUND(*(float *)pcVar1 * 256.0f);
    local_88 = (int)ROUND(*(float *)(this_ptr->unk + 0x20) * 256.0f);
    local_84 = (int)ROUND(*(float *)(this_ptr->unk + 0x24) * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)(local_90 + 4));
    pCVar5 = g_CDemonRendererPtr2;
    (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    (pCVar5->vertex_buffer_ptr->projected_vertex).transformed_x =
         (pCVar5->vertex_buffer_ptr->projected_vertex).transformed_x - local_18.y;
    pCVar5->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    pCVar5->vertex_buffer_ptr[1].projected_vertex.transformed_x =
         pCVar5->vertex_buffer_ptr[1].projected_vertex.transformed_x + local_18.y;
    pCVar5->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    pCVar5->vertex_buffer_ptr[2].projected_vertex.transformed_x =
         pCVar5->vertex_buffer_ptr[2].projected_vertex.transformed_x + local_18.z;
    pCVar5->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar5->vertex_buffer_ptr[3].projected_vertex.transformed_x =
         pCVar5->vertex_buffer_ptr[3].projected_vertex.transformed_x - local_18.z;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (pCVar5,(SMRGLHeaderPrimitive *)&stack0xffffff1c);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
