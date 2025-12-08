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
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  int in_stack_00000010;
  int iStack00000014;
  int in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  byte local_b0 [24];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  byte local_88 [12];
  int local_7c;
  int local_78;
  CVector3i local_70 [2];
  byte local_58 [8];
  int local_50;
  int local_4c;
  CVector3i local_44;
  int local_38;
  CVector3i local_34;
  byte local_28 [12];
  int iStack_1c;
  int local_18;
  float local_c;
  int local_8;
  
  if (*(float *)(this_ptr->field0_0x0 + 0x14) <= 0.0) {
    return;
  }
  iVar4 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_FireEffectLightningBoltTextures + iVar4 % 6);
  local_b0._0_4_ = 3;
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
              (g_CDemonRendererPtr,&local_c);
    local_c = fVar3;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&local_c,(CVector3i *)0x0);
    if (0.0 < *(float *)(this_ptr->field0_0x0 + 0x18)) {
      local_98 = *(float *)(this_ptr->field0_0x0 + 0x18);
    }
    else {
      local_98 = *(float *)(this_ptr->field0_0x0 + 0x10) * (float)0.25;
    }
    local_94 = *(float *)(this_ptr->field0_0x0 + 0x10);
    local_44.x = (int)ROUND(local_98 * 256f);
    local_44.y = (int)ROUND(local_94 * 256f);
    local_44.z = (int)ROUND(256f * 0.0);
    local_90 = fVar3;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_44);
    local_94 = -local_94;
    local_28._0_4_ = (uint)ROUND(local_94 * 256f);
    local_28._4_4_ = (uint)ROUND(local_90 * 256f);
    local_28._8_4_ = (uint)ROUND(local_8c * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_28);
    local_8c = 0.0;
    local_c = (float)(int)ROUND(local_90 * 256f);
    local_8 = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&local_c);
    local_8c = -local_8c;
    in_stack_00000010 = (int)ROUND(local_8c * 256f);
    iStack00000014 = (int)ROUND((float)local_88._0_4_ * 256f);
    in_stack_00000018 = (int)ROUND((float)local_88._4_4_ * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)&stack0x00000010);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_b0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  else {
    local_88._0_4_ = (uint)ROUND(world_position->x * 256f);
    local_88._4_4_ = (uint)ROUND(*(float *)(this_ptr->field0_0x0 + 8) * 256f);
    local_88._8_4_ = (uint)ROUND(*(float *)(this_ptr->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_88);
    local_58._4_4_ = (uint)ROUND(world_position->x * 256f);
    local_50 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 8) * 256f);
    local_4c = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(local_58 + 4));
    pcVar1 = this_ptr->field0_0x0 + 0x1c;
    local_28._8_4_ = (uint)ROUND(*(float *)pcVar1 * 256f);
    iStack_1c = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x20) * 256f);
    local_18 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(local_28 + 8));
    local_70[0].x = (int)ROUND(*(float *)pcVar1 * 256f);
    local_70[0].y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x20) * 256f);
    local_70[0].z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,local_70);
    fVar3 = *(float *)(this_ptr->field0_0x0 + 0x18);
    fVar6 = (float10)256;
    fVar7 = (float10)*(float *)(this_ptr->field0_0x0 + 0x28);
    (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar3 * fVar6));
    iStack00000014 = (int)ROUND(dVar8);
    *(int *)(*extraout_EDX + 4) = *(int *)(*extraout_EDX + 4) - iStack00000014;
    *(uint *)(*extraout_EDX + 0x40) = 0x80000000;
    *(int *)(*extraout_EDX + 0x34) = *(int *)(*extraout_EDX + 0x34) + iStack00000014;
    *(uint *)(*extraout_EDX + 0x70) = 0x80000000;
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)(fVar7 * fVar6));
    iStack00000014 = (int)ROUND(dVar8);
    piVar2 = &this_ptr_01->vertex_buffer_ptr[2].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + iStack00000014;
    this_ptr_01->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    this_ptr_01->vertex_buffer_ptr[3].projected_vertex.transformed_y =
         this_ptr_01->vertex_buffer_ptr[3].projected_vertex.transformed_y - iStack00000014;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (this_ptr_01,(SMRGLHeaderPrimitive *)&stack0xffffff40);
    local_38 = (int)ROUND(world_position->x * 256f);
    local_34.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 8) * 256f);
    local_34.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_34);
    local_58._4_4_ = (uint)ROUND(world_position->x * 256f);
    local_50 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 8) * 256f);
    local_4c = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0xc) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(local_58 + 4));
    local_88._8_4_ = (uint)ROUND(*(float *)pcVar1 * 256f);
    local_7c = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x20) * 256f);
    local_78 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(local_88 + 8));
    local_58._0_4_ = (uint)ROUND(*(float *)pcVar1 * 256f);
    local_58._4_4_ = (uint)ROUND(*(float *)(this_ptr->field0_0x0 + 0x20) * 256f);
    local_50 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x24) * 256f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_58);
    this_ptr_00 = g_CDemonRendererPtr;
    (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x =
         (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x - in_stack_00000024;
    this_ptr_00->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x =
         this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x + in_stack_00000024;
    this_ptr_00->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x =
         this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x + in_stack_00000028;
    this_ptr_00->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x =
         this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x - in_stack_00000028;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (this_ptr_00,(SMRGLHeaderPrimitive *)(local_b0 + 4));
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
