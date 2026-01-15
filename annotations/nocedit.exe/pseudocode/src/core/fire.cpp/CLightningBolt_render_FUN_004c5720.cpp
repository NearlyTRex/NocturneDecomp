// Name: core_fire.cpp_CLightningBolt_render_FUN_004c5720
// Address: 004c5720
// Address Range: [[004c5720, 004c5a47] [004c5a4b, 004c5dd8]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt *this_ptr)

{
  CVector3f *world_position;
  char *pcVar1;
  int *piVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  uint uVar5;
  int *extraout_EDX;
  CDemonRenderer *this_ptr_01;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
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
  
  if (*(float *)(this_ptr->field0_0x0 + 0x14) <= 0.0) {
    return;
  }
  iVar4 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_FireEffectLightningBoltTextures + iVar4 % 6);
  local_dc.base.count = 4;
  local_dc.surface_normal.D = 0;
  local_dc.surface_normal.C = 0;
  local_dc.surface_normal.B = 0;
  local_dc.surface_normal.A = 0;
  local_c4 = 0;
  local_b8 = 3;
  local_c0 = 1;
  local_bc = 2;
  uVar5 = crt_stdlib_c_rand_FUN_005feb5c();
  if ((uVar5 & 1) == 0) {
    g_RenderVertexBuffer[1].u = 7.34684e-40;
    g_RenderVertexBuffer[2].u = 7.34684e-40;
    g_RenderVertexBuffer[3].u = 2.2775203e-38;
    g_RenderVertexBuffer[0].u = 2.2775203e-38;
  }
  else {
    g_RenderVertexBuffer[1].u = 2.2775203e-38;
    g_RenderVertexBuffer[2].u = 2.2775203e-38;
    g_RenderVertexBuffer[3].u = 7.34684e-40;
    g_RenderVertexBuffer[0].u = 7.34684e-40;
  }
  g_RenderVertexBuffer[3].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 7.34684e-40;
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
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  fVar3 = *(float *)this_ptr->field0_0x0;
  world_position = (CVector3f *)(this_ptr->field0_0x0 + 4);
  if (fVar3 == 0.0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,world_position);
    engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
              (g_CDemonRendererPtr,(float *)&local_24);
    local_24.x = (int)fVar3;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,&local_24,(CVector3i *)0x0);
    if (0.0 < *(float *)(this_ptr->field0_0x0 + 0x18)) {
      local_b4 = *(float *)(this_ptr->field0_0x0 + 0x18);
    }
    else {
      local_b4 = *(float *)(this_ptr->field0_0x0 + 0x10) * (float)0.25;
    }
    local_b0.x = *(int *)(this_ptr->field0_0x0 + 0x10);
    local_60._0_4_ = (uint)ROUND(local_b4 * 256f);
    local_60._4_4_ = (uint)ROUND((float)local_b0.x * 256f);
    local_58 = (int)ROUND(256f * 0.0);
    local_b0.y = (int)fVar3;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_60);
    local_b4 = -local_b4;
    local_48.x = (int)ROUND(local_b4 * 256f);
    local_48.y = (int)ROUND((float)local_b0.x * 256f);
    local_48.z = (int)ROUND((float)local_b0.y * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_48);
    local_b0.x = 0;
    local_30.x = (int)ROUND(local_b4 * 256f);
    local_30.y = (int)ROUND(256f * 0.0);
    local_30.z = (int)ROUND((float)local_b0.y * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_30);
    local_b4 = -local_b4;
    local_18.x = (int)ROUND(local_b4 * 256f);
    local_18.y = (int)ROUND((float)local_b0.x * 256f);
    local_18.z = (int)ROUND((float)local_b0.y * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_18);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr,&local_dc);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  else {
    local_9c.x = (int)ROUND(world_position->x * 256f);
    local_9c.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 8) * 256f);
    local_9c.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_9c);
    local_6c.x = (int)ROUND(world_position->x * 256f);
    local_6c.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 8) * 256f);
    local_6c.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_6c);
    pcVar1 = this_ptr->field0_0x0 + 0x1c;
    local_3c.x = (int)ROUND(*(float *)pcVar1 * 256f);
    local_3c.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x20) * 256f);
    local_3c.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_90._0_4_ = (uint)ROUND(*(float *)pcVar1 * 256f);
    local_90._4_4_ = (uint)ROUND(*(float *)(this_ptr->field0_0x0 + 0x20) * 256f);
    local_88 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_90);
    fVar3 = *(float *)(this_ptr->field0_0x0 + 0x18);
    fVar6 = (float10)256;
    fVar7 = (float10)*(float *)(this_ptr->field0_0x0 + 0x28);
    (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar3 * fVar6));
    local_18.z = (int)ROUND(dVar8);
    *(int *)(*extraout_EDX + 4) = *(int *)(*extraout_EDX + 4) - local_18.z;
    *(uint *)(*extraout_EDX + 0x40) = 0x80000000;
    *(int *)(*extraout_EDX + 0x34) = *(int *)(*extraout_EDX + 0x34) + local_18.z;
    *(uint *)(*extraout_EDX + 0x70) = 0x80000000;
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)(fVar7 * fVar6));
    local_18.z = (int)ROUND(dVar8);
    piVar2 = &this_ptr_01->vertex_buffer_ptr[2].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_18.z;
    this_ptr_01->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    this_ptr_01->vertex_buffer_ptr[3].projected_vertex.transformed_y =
         this_ptr_01->vertex_buffer_ptr[3].projected_vertex.transformed_y - local_18.z;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (this_ptr_01,(SMRGLHeaderPrimitive *)&stack0xffffff1c);
    local_60._4_4_ = (uint)ROUND(world_position->x * 256f);
    local_58 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 8) * 256f);
    local_54 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_60 + 4)
              );
    local_80.x = (int)ROUND(world_position->x * 256f);
    local_80.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 8) * 256f);
    local_80.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_80);
    local_b0.x = (int)ROUND(*(float *)pcVar1 * 256f);
    local_b0.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x20) * 256f);
    local_b0.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_b0);
    local_90._4_4_ = (uint)ROUND(*(float *)pcVar1 * 256f);
    local_88 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x20) * 256f);
    local_84 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)(local_90 + 4));
    this_ptr_00 = g_CDemonRendererPtr;
    (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x =
         (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x - local_18.y;
    this_ptr_00->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x =
         this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x + local_18.y;
    this_ptr_00->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x =
         this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x + local_18.z;
    this_ptr_00->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x =
         this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x - local_18.z;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (this_ptr_00,(SMRGLHeaderPrimitive *)&stack0xffffff1c);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
