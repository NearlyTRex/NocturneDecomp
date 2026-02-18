// Name: core_fire.cpp_CLightningBolt_render_FUN_004c5720
// Address: 004c5720
// Address Range: [[004c5720, 004c5a47] [004c5a4b, 004c5dd8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt *this_ptr)

{
  CVector3f *world_position;
  CVector3f *pCVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonRenderer *pCVar6;
  int iVar7;
  uint uVar8;
  SMRGLHeaderPrimitive local_dc;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  CVector3i local_a8;
  CVector3i local_9c;
  CVector3i local_90;
  CVector3i local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  CVector3i local_18;
  int local_c;
  int local_8;
  
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  iVar7 = rand();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_FireEffectLightningBoltTextures + iVar7 % 6);
  local_dc.base.count = 4;
  local_dc.surface_normal.D = 0;
  local_dc.surface_normal.C = 0;
  local_dc.surface_normal.B = 0;
  local_dc.surface_normal.A = 0;
  local_c4 = 0;
  local_b8 = 3;
  local_c0 = 1;
  local_bc = 2;
  uVar8 = rand();
  if ((uVar8 & 1) == 0) {
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
  fVar4 = (float)this_ptr->mode;
  world_position = &this_ptr->start_position;
  if (fVar4 == 0.0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,world_position);
    engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
              (g_CDemonRendererPtr2,(float *)&local_24);
    local_24.x = (int)fVar4;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,&local_24,(CVector3i *)0x0);
    if (0.0 < this_ptr->end_width) {
      local_b4 = this_ptr->end_width;
    }
    else {
      local_b4 = this_ptr->start_width * (float)0.25;
    }
    local_b0 = this_ptr->start_width;
    local_60.x = (int)ROUND(local_b4 * 256.0f);
    local_60.y = (int)ROUND(local_b0 * 256.0f);
    local_60.z = (int)ROUND(256.0f * 0.0);
    local_ac = fVar4;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_60);
    local_b4 = -local_b4;
    local_48.x = (int)ROUND(local_b4 * 256.0f);
    local_48.y = (int)ROUND(local_b0 * 256.0f);
    local_48.z = (int)ROUND(local_ac * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_48);
    local_b0 = 0.0;
    local_30.x = (int)ROUND(local_b4 * 256.0f);
    local_30.y = (int)ROUND(256.0f * 0.0);
    local_30.z = (int)ROUND(local_ac * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_30);
    local_b4 = -local_b4;
    local_18.x = (int)ROUND(local_b4 * 256.0f);
    local_18.y = (int)ROUND(local_b0 * 256.0f);
    local_18.z = (int)ROUND(local_ac * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_18);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr2,&local_dc);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  else {
    local_9c.x = (int)ROUND(world_position->x * 256.0f);
    local_9c.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
    local_9c.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_9c);
    local_6c.x = (int)ROUND(world_position->x * 256.0f);
    local_6c.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
    local_6c.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_6c);
    pCVar1 = &this_ptr->end_position;
    local_3c.x = (int)ROUND(pCVar1->x * 256.0f);
    local_3c.y = (int)ROUND((this_ptr->end_position).y * 256.0f);
    local_3c.z = (int)ROUND((this_ptr->end_position).z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_90.x = (int)ROUND(pCVar1->x * 256.0f);
    local_90.y = (int)ROUND((this_ptr->end_position).y * 256.0f);
    local_90.z = (int)ROUND((this_ptr->end_position).z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_90);
    pCVar6 = g_CDemonRendererPtr2;
    fVar4 = this_ptr->end_width;
    fVar5 = (float)256;
    fVar3 = this_ptr->end_spread;
    (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    local_c = (int)ROUND(ROUND(fVar4 * fVar5));
    piVar2 = &(pCVar6->vertex_buffer_ptr->projected_vertex).transformed_y;
    *piVar2 = *piVar2 - local_c;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    piVar2 = &pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_c;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    local_8 = (int)ROUND(ROUND(fVar3 * fVar5));
    piVar2 = &pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_8;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_y =
         pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_y - local_8;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(pCVar6,&local_dc);
    local_54.x = (int)ROUND(world_position->x * 256.0f);
    local_54.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
    local_54.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_54);
    local_78.x = (int)ROUND(world_position->x * 256.0f);
    local_78.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
    local_78.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_78);
    local_a8.x = (int)ROUND(pCVar1->x * 256.0f);
    local_a8.y = (int)ROUND((this_ptr->end_position).y * 256.0f);
    local_a8.z = (int)ROUND((this_ptr->end_position).z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_a8);
    local_84.x = (int)ROUND(pCVar1->x * 256.0f);
    local_84.y = (int)ROUND((this_ptr->end_position).y * 256.0f);
    local_84.z = (int)ROUND((this_ptr->end_position).z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_84);
    pCVar6 = g_CDemonRendererPtr2;
    (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    (pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x =
         (pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x - local_c;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_x + local_c;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_x + local_8;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_x - local_8;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(pCVar6,&local_dc);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
