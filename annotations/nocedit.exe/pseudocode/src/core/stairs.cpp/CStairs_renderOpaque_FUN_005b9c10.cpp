// Name: core_stairs.cpp_CStairs_renderOpaque_FUN_005b9c10
// Address: 005b9c10
// Address Range: [[005b9c10, 005ba486]]
// Convention: __cdecl
// Signature: int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

#include "nocturne.h"

int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  SRenderVertex vertex2_02;
  SRenderVertex vertex2_03;
  SRenderVertex vertex2_04;
  SRenderVertex vertex2_05;
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  byte bVar10;
  CDemonActor *in_stack_0000000c;
  SRenderVertex in_stack_fffffeb8;
  byte auVar11 [24];
  byte in_stack_fffffee8 [28];
  uint uVar12;
  CStairs *pCVar13;
  uint uVar14;
  CDemonRenderer *pCVar15;
  SMRGLTextureBasic *input;
  SMRGLHeaderPrimitive SStack_dc;
  int iStack_c4;
  int iStack_c0;
  CBoundingBox3D local_bc;
  CVector3i CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3i CStack_84;
  CVector3i CStack_78;
  CVector3i CStack_6c;
  byte auStack_60 [16];
  int iStack_50;
  int iStack_4c;
  CVector3i CStack_48;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  char *pcStack_30;
  float *pfStack_2c;
  UOrientationVector *pUStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  bVar10 = 0;
  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    uVar12 = 0x5b9c61;
    pCVar13 = this_ptr;
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_bc);
    iStack_3c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iStack_3c != 0) {
      input = &SMRGLTextureBasic_00684178;
      iVar1 = 0;
      uVar14 = 0x5b9c8f;
      pCVar15 = g_CDemonRendererPtr2;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&SMRGLTextureBasic_00684178);
      if (-1 < this_ptr->stair_count) {
        iStack_1c = 0x60;
        iStack_20 = 0x90;
        iVar3 = 0x30;
        iVar7 = 0;
        do {
          fStack_90 = -*(float *)(in_stack_0000000c[1].actor_name + 8) * (float)0.5;
          fStack_8c = *(float *)in_stack_0000000c[1].actor_name * (float)iVar1;
          fStack_88 = (float)iVar1 * *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_84.x = (int)ROUND(fStack_90 * 256.0f);
          CStack_84.y = (int)ROUND(fStack_8c * 256.0f);
          CStack_84.z = (int)ROUND(fStack_88 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iVar7),&CStack_84);
          fStack_88 = fStack_88 + *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_78.x = (int)ROUND(fStack_90 * 256.0f);
          CStack_78.y = (int)ROUND(fStack_8c * 256.0f);
          CStack_78.z = (int)ROUND(fStack_88 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iVar3),&CStack_78);
          fStack_88 = fStack_88 - *(float *)(in_stack_0000000c[1].actor_name + 4);
          fStack_90 = fStack_90 + *(float *)(in_stack_0000000c[1].actor_name + 8);
          CStack_48.x = (int)ROUND(fStack_90 * 256.0f);
          CStack_48.y = (int)ROUND(fStack_8c * 256.0f);
          CStack_48.z = (int)ROUND(fStack_88 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iStack_1c),&CStack_48);
          fStack_88 = fStack_88 + *(float *)(in_stack_0000000c[1].actor_name + 4);
          auStack_60._0_4_ = (uint)ROUND(fStack_90 * 256.0f);
          auStack_60._4_4_ = (uint)ROUND(fStack_8c * 256.0f);
          auStack_60._8_4_ = (uint)ROUND(fStack_88 * 256.0f);
          input = (SMRGLTextureBasic *)auStack_60;
          pCVar15 = (CDemonRenderer *)
                    ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x
                    + iStack_20);
          uVar14 = 0x5b9e6a;
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)pCVar15,(CVector3i *)input);
          iVar1 = iVar1 + 1;
          iVar7 = iVar7 + 0xc0;
          iStack_1c = iStack_1c + 0xc0;
          iVar3 = iVar3 + 0xc0;
          iStack_20 = iStack_20 + 0xc0;
        } while (iVar1 <= *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      iStack_14 = 0;
      g_ActiveRenderColor = 3;
      if (0 < *(int *)(in_stack_0000000c[1].actor_name + 0x14)) {
        iVar3 = 0x90;
        iStack_18 = 0x120;
        iStack_24 = 0xc0;
        iStack_c = 0;
        iStack_10 = 0x60;
        iVar1 = 0x30;
        do {
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iStack_10);
          puVar8 = (uint *)&stack0xfffffee8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iStack_c);
          puVar8 = (uint *)&stack0xfffffeb8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          vertex2.v = uVar12;
          auVar11 = in_stack_fffffee8._0_24_;
          vertex2.projected_vertex.transformed_x = auVar11._0_4_;
          vertex2.projected_vertex.transformed_y = auVar11._4_4_;
          vertex2.projected_vertex.transformed_z = auVar11._8_4_;
          vertex2.projected_vertex.inv_z = auVar11._12_4_;
          vertex2.projected_vertex.screen_x = auVar11._16_4_;
          vertex2.projected_vertex.screen_y = auVar11._20_4_;
          vertex2.u = in_stack_fffffee8._24_4_;
          vertex2.r = (int)pCVar13;
          vertex2.g = uVar14;
          vertex2.b = (int)pCVar15;
          vertex2.a = (int)input;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,vertex2);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iVar3);
          puVar8 = (uint *)&stack0xfffffee8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iVar1);
          puVar8 = (uint *)&stack0xfffffeb8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          vertex2_00.v = uVar12;
          auVar11 = in_stack_fffffee8._0_24_;
          vertex2_00.projected_vertex.transformed_x = auVar11._0_4_;
          vertex2_00.projected_vertex.transformed_y = auVar11._4_4_;
          vertex2_00.projected_vertex.transformed_z = auVar11._8_4_;
          vertex2_00.projected_vertex.inv_z = auVar11._12_4_;
          vertex2_00.projected_vertex.screen_x = auVar11._16_4_;
          vertex2_00.projected_vertex.screen_y = auVar11._20_4_;
          vertex2_00.u = in_stack_fffffee8._24_4_;
          vertex2_00.r = (int)pCVar13;
          vertex2_00.g = uVar14;
          vertex2_00.b = (int)pCVar15;
          vertex2_00.a = (int)input;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,vertex2_00);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iVar1);
          puVar8 = (uint *)&stack0xfffffee8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iStack_c);
          puVar8 = (uint *)&stack0xfffffeb8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          vertex2_01.v = uVar12;
          auVar11 = in_stack_fffffee8._0_24_;
          vertex2_01.projected_vertex.transformed_x = auVar11._0_4_;
          vertex2_01.projected_vertex.transformed_y = auVar11._4_4_;
          vertex2_01.projected_vertex.transformed_z = auVar11._8_4_;
          vertex2_01.projected_vertex.inv_z = auVar11._12_4_;
          vertex2_01.projected_vertex.screen_x = auVar11._16_4_;
          vertex2_01.projected_vertex.screen_y = auVar11._20_4_;
          vertex2_01.u = in_stack_fffffee8._24_4_;
          vertex2_01.r = (int)pCVar13;
          vertex2_01.g = uVar14;
          vertex2_01.b = (int)pCVar15;
          vertex2_01.a = (int)input;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,vertex2_01);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iVar3);
          puVar8 = (uint *)&stack0xfffffee8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iStack_10);
          puVar8 = (uint *)&stack0xfffffeb8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          vertex2_02.v = uVar12;
          auVar11 = in_stack_fffffee8._0_24_;
          vertex2_02.projected_vertex.transformed_x = auVar11._0_4_;
          vertex2_02.projected_vertex.transformed_y = auVar11._4_4_;
          vertex2_02.projected_vertex.transformed_z = auVar11._8_4_;
          vertex2_02.projected_vertex.inv_z = auVar11._12_4_;
          vertex2_02.projected_vertex.screen_x = auVar11._16_4_;
          vertex2_02.projected_vertex.screen_y = auVar11._20_4_;
          vertex2_02.u = in_stack_fffffee8._24_4_;
          vertex2_02.r = (int)pCVar13;
          vertex2_02.g = uVar14;
          vertex2_02.b = (int)pCVar15;
          vertex2_02.a = (int)input;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,vertex2_02);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iStack_24);
          puVar8 = (uint *)&stack0xfffffee8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iVar1);
          puVar8 = (uint *)&stack0xfffffeb8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          vertex2_03.v = uVar12;
          auVar11 = in_stack_fffffee8._0_24_;
          vertex2_03.projected_vertex.transformed_x = auVar11._0_4_;
          vertex2_03.projected_vertex.transformed_y = auVar11._4_4_;
          vertex2_03.projected_vertex.transformed_z = auVar11._8_4_;
          vertex2_03.projected_vertex.inv_z = auVar11._12_4_;
          vertex2_03.projected_vertex.screen_x = auVar11._16_4_;
          vertex2_03.projected_vertex.screen_y = auVar11._20_4_;
          vertex2_03.u = in_stack_fffffee8._24_4_;
          vertex2_03.r = (int)pCVar13;
          vertex2_03.g = uVar14;
          vertex2_03.b = (int)pCVar15;
          vertex2_03.a = (int)input;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,vertex2_03);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iStack_18);
          puVar8 = (uint *)&stack0xfffffee8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          iVar1 = iVar1 + 0xc0;
          puVar4 = (uint *)((int)&(pSVar6->projected_vertex).transformed_x + iVar3);
          puVar8 = (uint *)&stack0xfffffeb8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + (uint)bVar10 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          }
          vertex2_04.v = uVar12;
          auVar11 = in_stack_fffffee8._0_24_;
          vertex2_04.projected_vertex.transformed_x = auVar11._0_4_;
          vertex2_04.projected_vertex.transformed_y = auVar11._4_4_;
          vertex2_04.projected_vertex.transformed_z = auVar11._8_4_;
          vertex2_04.projected_vertex.inv_z = auVar11._12_4_;
          vertex2_04.projected_vertex.screen_x = auVar11._16_4_;
          vertex2_04.projected_vertex.screen_y = auVar11._20_4_;
          vertex2_04.u = in_stack_fffffee8._24_4_;
          vertex2_04.r = (int)pCVar13;
          vertex2_04.g = uVar14;
          vertex2_04.b = (int)pCVar15;
          vertex2_04.a = (int)input;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,vertex2_04);
          iVar3 = iVar3 + 0xc0;
          iStack_18 = iStack_18 + 0xc0;
          iStack_24 = iStack_24 + 0xc0;
          iStack_c = iStack_c + 0xc0;
          iStack_10 = iStack_10 + 0xc0;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      pSVar5 = pSVar6 + *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4 + 2;
      piVar9 = (int *)&stack0xfffffee8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar9 = (pSVar5->projected_vertex).transformed_x;
        pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar10 * -2 + 1) * 4);
        piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
      }
      pSVar6 = pSVar6 + *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4;
      piVar9 = (int *)&stack0xfffffeb8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar9 = (pSVar6->projected_vertex).transformed_x;
        pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
        piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
      }
      vertex2_05.v = uVar12;
      auVar11 = in_stack_fffffee8._0_24_;
      vertex2_05.projected_vertex.transformed_x = auVar11._0_4_;
      vertex2_05.projected_vertex.transformed_y = auVar11._4_4_;
      vertex2_05.projected_vertex.transformed_z = auVar11._8_4_;
      vertex2_05.projected_vertex.inv_z = auVar11._12_4_;
      vertex2_05.projected_vertex.screen_x = auVar11._16_4_;
      vertex2_05.projected_vertex.screen_y = auVar11._20_4_;
      vertex2_05.u = in_stack_fffffee8._24_4_;
      vertex2_05.r = (int)pCVar13;
      vertex2_05.g = uVar14;
      vertex2_05.b = (int)pCVar15;
      vertex2_05.a = (int)input;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,vertex2_05);
      SStack_dc.base.count = 4;
      SStack_dc.surface_normal.D = 0;
      SStack_dc.surface_normal.C = 0;
      SStack_dc.surface_normal.B = 0;
      SStack_dc.surface_normal.A = 0;
      uStack_38 = 0;
      uStack_34 = 0xff00;
      iVar1 = 0;
      for (iVar3 = 0; pCVar15 = g_CDemonRendererPtr2,
          iVar3 <= *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4; iVar3 = iVar3 + 1) {
        *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar1) = 0;
        *(uint *)((int)&pCVar15->vertex_buffer_ptr->g + iVar1) = 0;
        *(uint *)((int)&pCVar15->vertex_buffer_ptr->b + iVar1) = 0xff00;
        *(uint *)((int)&pCVar15->vertex_buffer_ptr->a + iVar1) = 0x8000;
        *(uint *)((int)&pCVar15->vertex_buffer_ptr->u + iVar1) = 0x800000;
        *(uint *)((int)&pCVar15->vertex_buffer_ptr->v + iVar1) = 0x800000;
        iVar1 = iVar1 + 0x30;
      }
      iVar1 = 0;
      if (0 < *(int *)(in_stack_0000000c[1].actor_name + 0x14)) {
        iVar3 = 0;
        do {
          local_bc.min.y = (float)(iVar3 + 2);
          iStack_c4 = iVar3;
          iStack_c0 = iVar3 + 1;
          local_bc.min.x = (float)(iVar3 + 3);
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,&SStack_dc);
          local_bc.min.x = (float)(iVar3 + 6);
          iStack_c4 = iVar3 + 1;
          iStack_c0 = iVar3 + 4;
          local_bc.min.y = (float)(iVar3 + 3);
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,&SStack_dc);
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar1 < *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      SStack_dc.base.count = 3;
      SStack_dc.surface_normal.D = 0;
      SStack_dc.surface_normal.C = 0;
      SStack_dc.surface_normal.B = 0;
      local_bc.min.x = 2.8026e-45;
      SStack_dc.surface_normal.A = 0;
      pcStack_30 = in_stack_0000000c[1].actor_name + 0x18;
      iStack_c4 = 0;
      iStack_c0 = 1;
      pUStack_28 = &in_stack_0000000c[1].orient;
      pfStack_2c = &in_stack_0000000c[1].location.position.y;
      for (iStack_8 = 0; iStack_8 < *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 2;
          iStack_8 = iStack_8 + 1) {
        pcVar2 = pcStack_30 + iStack_8 * 0x38;
        CStack_6c.x = (int)ROUND(*(float *)pcVar2 * 256.0f);
        CStack_6c.y = (int)ROUND(*(float *)(pcVar2 + 4) * 256.0f);
        CStack_6c.z = (int)ROUND((((CLocation *)(pcVar2 + 8))->position).x * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_6c);
        CStack_9c.x = (int)ROUND(*pfStack_2c * 256.0f);
        CStack_9c.y = (int)ROUND(pfStack_2c[1] * 256.0f);
        CStack_9c.z = (int)ROUND(pfStack_2c[2] * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_9c);
        auStack_60._12_4_ = (uint)ROUND((pUStack_28->vec).x * 256.0f);
        iStack_50 = (int)ROUND((pUStack_28->vec).y * 256.0f);
        iStack_4c = (int)ROUND((pUStack_28->vec).z * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)(auStack_60 + 0xc));
        iVar1 = 0;
        do {
          pCVar15 = g_CDemonRendererPtr2;
          *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar1) = 0;
          *(uint *)((int)&pCVar15->vertex_buffer_ptr->g + iVar1) = 0xff00;
          *(uint *)((int)&pCVar15->vertex_buffer_ptr->b + iVar1) = 0;
          *(uint *)((int)&pCVar15->vertex_buffer_ptr->a + iVar1) = 0x8000;
          *(uint *)((int)&pCVar15->vertex_buffer_ptr->u + iVar1) = 0x800000;
          iVar3 = iVar1 + 0x30;
          *(uint *)((int)&pCVar15->vertex_buffer_ptr->v + iVar1) = 0x800000;
          iVar1 = iVar3;
        } while (iVar3 != 0x90);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(pCVar15,&SStack_dc);
        pUStack_28 = (UOrientationVector *)((int)pUStack_28 + 0x38);
        pfStack_2c = pfStack_2c + 0xe;
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
    return iStack_3c;
  }
  return 0;
}
