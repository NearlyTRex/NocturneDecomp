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
  CLightningBolt *pCVar2;
  SRenderVertex *pSVar3;
  CLightningBolt *pCVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  CDemonRenderer *pCVar8;
  BADSPACEBASE *in_ESP;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  int in_stack_00000020;
  int iStack00000024;
  int in_stack_00000028;
  int in_stack_00000034;
  int in_stack_00000038;
  byte local_a0 [24];
  CVector3i local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3i local_70 [2];
  CVector3i local_54;
  byte local_48 [8];
  int local_40;
  int local_3c;
  CVector3i local_34;
  int local_28;
  byte local_24 [8];
  int iStack_1c;
  CVector3i local_18;
  float local_c [2];
  
  pCVar4 = this_ptr;
  if (*(float *)(this_ptr->field0_0x0 + 0x14) <= 0.0) {
    return;
  }
  iVar5 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_FireEffectLightningBoltTextures + iVar5 % 6);
  uVar6 = crt_stdlib_c_rand_FUN_005feb5c();
  if ((uVar6 & 1) == 0) {
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
  pCVar2 = *(CLightningBolt **)pCVar4->field0_0x0;
  world_position = (CVector3f *)(pCVar4->field0_0x0 + 4);
  if (pCVar2 == (CLightningBolt *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,world_position);
    engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
              (g_CDemonRendererPtr,local_c);
    this_ptr = pCVar2;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&this_ptr,(CVector3i *)0x0);
    if (0.0 < *(float *)(pCVar4->field0_0x0 + 0x18)) {
      local_88.x = *(int *)(pCVar4->field0_0x0 + 0x18);
    }
    else {
      local_88.x = (int)(*(float *)(pCVar4->field0_0x0 + 0x10) * (float)0.25);
    }
    local_88.y = *(int *)(pCVar4->field0_0x0 + 0x10);
    local_34.x = (int)ROUND((float)local_88.x * 256f);
    local_34.y = (int)ROUND((float)local_88.y * 256f);
    local_34.z = (int)ROUND(256f * 0.0);
    local_88.z = (int)pCVar2;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_34);
    local_88.y = (int)-(float)local_88.y;
    local_18.x = (int)ROUND((float)local_88.y * 256f);
    local_18.y = (int)ROUND((float)local_88.z * 256f);
    local_18.z = (int)ROUND(local_7c * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_18);
    local_7c = 0.0;
    this_ptr = (CLightningBolt *)(int)ROUND((float)local_88.z * 256f);
    in_stack_00000008 = (int)ROUND(256f * 0.0);
    in_stack_0000000c = (int)ROUND(local_78 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&this_ptr);
    local_7c = -local_7c;
    in_stack_00000020 = (int)ROUND(local_7c * 256f);
    iStack00000024 = (int)ROUND(local_78 * 256f);
    in_stack_00000028 = (int)ROUND(local_74 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)&stack0x00000020);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_a0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  else {
    local_88.x = (int)ROUND(world_position->x * 256f);
    local_88.y = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 8) * 256f);
    local_88.z = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_88);
    local_54.x = (int)ROUND(world_position->x * 256f);
    local_54.y = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 8) * 256f);
    local_54.z = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_54);
    pcVar1 = pCVar4->field0_0x0 + 0x1c;
    local_24._4_4_ = (uint)ROUND(*(float *)pcVar1 * 256f);
    iStack_1c = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x20) * 256f);
    local_18.x = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(local_24 + 4));
    local_70[0].x = (int)ROUND(*(float *)pcVar1 * 256f);
    local_70[0].y = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x20) * 256f);
    local_70[0].z = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,local_70);
    pCVar8 = g_CDemonRendererPtr;
    fVar9 = (float10)256;
    fVar10 = (float10)*(float *)(pCVar4->field0_0x0 + 0x18) * fVar9;
    pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
    fVar11 = (float10)*(float *)(pCVar4->field0_0x0 + 0x28);
    (pSVar3->projected_vertex).screen_x = -0x80000000;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pCVar8,pSVar3));
    piVar7 = (int *)((ulonglong)dVar12 >> 0x20);
    in_stack_0000001c = (int)ROUND(fVar10);
    *(int *)(*piVar7 + 4) = *(int *)(*piVar7 + 4) - in_stack_0000001c;
    *(uint *)(*piVar7 + 0x40) = 0x80000000;
    *(int *)(*piVar7 + 0x34) = *(int *)(*piVar7 + 0x34) + in_stack_0000001c;
    iVar5 = *piVar7;
    fVar11 = fVar11 * fVar9;
    *(uint *)(iVar5 + 0x70) = 0x80000000;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(piVar7,iVar5));
    pCVar8 = (CDemonRenderer *)((ulonglong)dVar12 >> 0x20);
    iStack00000024 = (int)ROUND(fVar11);
    piVar7 = &pCVar8->vertex_buffer_ptr[2].projected_vertex.transformed_y;
    *piVar7 = *piVar7 + iStack00000024;
    pCVar8->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar8->vertex_buffer_ptr[3].projected_vertex.transformed_y =
         pCVar8->vertex_buffer_ptr[3].projected_vertex.transformed_y - iStack00000024;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (pCVar8,(SMRGLHeaderPrimitive *)&stack0xffffff50);
    local_28 = (int)ROUND(world_position->x * 256f);
    local_24._0_4_ = (uint)ROUND(*(float *)(pCVar4->field0_0x0 + 8) * 256f);
    local_24._4_4_ = (uint)ROUND(*(float *)(pCVar4->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_24);
    local_48._4_4_ = (uint)ROUND(world_position->x * 256f);
    local_40 = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 8) * 256f);
    local_3c = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(local_48 + 4));
    local_70[0].x = (int)ROUND(*(float *)pcVar1 * 256f);
    local_70[0].y = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x20) * 256f);
    local_70[0].z = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,local_70);
    local_48._0_4_ = (uint)ROUND(*(float *)pcVar1 * 256f);
    local_48._4_4_ = (uint)ROUND(*(float *)(pCVar4->field0_0x0 + 0x20) * 256f);
    local_40 = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_48);
    pCVar8 = g_CDemonRendererPtr;
    (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    (pCVar8->vertex_buffer_ptr->projected_vertex).transformed_x =
         (pCVar8->vertex_buffer_ptr->projected_vertex).transformed_x - in_stack_00000034;
    pCVar8->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    pCVar8->vertex_buffer_ptr[1].projected_vertex.transformed_x =
         pCVar8->vertex_buffer_ptr[1].projected_vertex.transformed_x + in_stack_00000034;
    pCVar8->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    pCVar8->vertex_buffer_ptr[2].projected_vertex.transformed_x =
         pCVar8->vertex_buffer_ptr[2].projected_vertex.transformed_x + in_stack_00000038;
    pCVar8->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar8->vertex_buffer_ptr[3].projected_vertex.transformed_x =
         pCVar8->vertex_buffer_ptr[3].projected_vertex.transformed_x - in_stack_00000038;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (pCVar8,(SMRGLHeaderPrimitive *)(local_a0 + 4));
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
