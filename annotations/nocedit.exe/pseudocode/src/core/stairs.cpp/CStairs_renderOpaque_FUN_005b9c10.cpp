// Name: core_stairs.cpp_CStairs_renderOpaque_FUN_005b9c10
// Address: 005b9c10
// Address Range: [[005b9c10, 005ba486] [006031b4, 00603675]]
// Convention: __cdecl
// Signature: int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

#include "nocturne.h"

int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex1_02;
  SRenderVertex vertex1_03;
  SRenderVertex vertex1_04;
  SRenderVertex vertex1_05;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  SRenderVertex vertex2_02;
  SRenderVertex vertex2_03;
  SRenderVertex vertex2_04;
  SRenderVertex vertex2_05;
  int iVar4;
  CBoundingBox3D *this_ptr_00;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  SMRGLTextureBasic *pSVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  SRenderVertex *pSVar14;
  SRenderVertex *pSVar15;
  int iVar16;
  int *piVar17;
  byte bVar18;
  CDemonActor *in_stack_0000000c;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int in_stack_fffffee8;
  int in_stack_fffffeec;
  int in_stack_fffffef0;
  int in_stack_fffffef4;
  int in_stack_fffffef8;
  int in_stack_fffffefc;
  int in_stack_ffffff00;
  CStairs *pCVar38;
  int iVar39;
  CDemonRenderer *pCVar40;
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
  
  bVar18 = 0;
  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar4 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    iVar4 = 0x5b9c61;
    pCVar38 = this_ptr;
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_bc);
    iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar5 != 0) {
      input = &SMRGLTextureBasic_00684178;
      iVar12 = 0;
      iVar39 = 0x5b9c8f;
      pCVar40 = g_CDemonRendererPtr2;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&SMRGLTextureBasic_00684178);
      if (-1 < this_ptr->stair_count) {
        iStack_1c = 0x60;
        iStack_20 = 0x90;
        iVar11 = 0x30;
        iVar16 = 0;
        do {
          fVar3 = -*(float *)(in_stack_0000000c[1].actor_name + 8) * (float)0.5;
          fVar1 = *(float *)in_stack_0000000c[1].actor_name * (float)iVar12;
          fVar2 = (float)iVar12 * *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_84.x = (int)ROUND(fVar3 * 256.0f);
          CStack_84.y = (int)ROUND(fVar1 * 256.0f);
          CStack_84.z = (int)ROUND(fVar2 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iVar16),&CStack_84);
          fVar2 = fVar2 + *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_78.x = (int)ROUND(fVar3 * 256.0f);
          CStack_78.y = (int)ROUND(fVar1 * 256.0f);
          CStack_78.z = (int)ROUND(fVar2 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iVar11),&CStack_78);
          fVar2 = fVar2 - *(float *)(in_stack_0000000c[1].actor_name + 4);
          fVar3 = fVar3 + *(float *)(in_stack_0000000c[1].actor_name + 8);
          CStack_48.x = (int)ROUND(fVar3 * 256.0f);
          CStack_48.y = (int)ROUND(fVar1 * 256.0f);
          CStack_48.z = (int)ROUND(fVar2 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iStack_1c),&CStack_48);
          auStack_60._0_4_ = (uint)ROUND(fVar3 * 256.0f);
          auStack_60._4_4_ = (uint)ROUND(fVar1 * 256.0f);
          auStack_60._8_4_ =
               (uint)
               ROUND((fVar2 + *(float *)(in_stack_0000000c[1].actor_name + 4)) * 256.0f);
          input = (SMRGLTextureBasic *)auStack_60;
          pCVar40 = (CDemonRenderer *)
                    ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x
                    + iStack_20);
          iVar39 = 0x5b9e6a;
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)pCVar40,(CVector3i *)input);
          iVar12 = iVar12 + 1;
          iVar16 = iVar16 + 0xc0;
          iStack_1c = iStack_1c + 0xc0;
          iVar11 = iVar11 + 0xc0;
          iStack_20 = iStack_20 + 0xc0;
        } while (iVar12 <= *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      iStack_14 = 0;
      g_ActiveRenderColor = 3;
      if (0 < *(int *)(in_stack_0000000c[1].actor_name + 0x14)) {
        iVar11 = 0x90;
        iStack_18 = 0x120;
        iStack_24 = 0xc0;
        iStack_c = 0;
        iStack_10 = 0x60;
        iVar12 = 0x30;
        do {
          pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iStack_10);
          iVar4 = *piVar13;
          iVar39 = piVar13[1];
          iVar16 = piVar13[2];
          iVar19 = piVar13[3];
          iVar21 = piVar13[4];
          iVar23 = piVar13[5];
          iVar25 = piVar13[6];
          iVar27 = piVar13[7];
          iVar29 = piVar13[8];
          iVar31 = piVar13[9];
          iVar33 = piVar13[10];
          iVar7 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffee8;
          iVar36 = iVar7;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iStack_c);
          iVar7 = *piVar13;
          iVar10 = piVar13[1];
          iVar20 = piVar13[2];
          iVar22 = piVar13[3];
          iVar24 = piVar13[4];
          iVar26 = piVar13[5];
          iVar28 = piVar13[6];
          iVar30 = piVar13[7];
          iVar32 = piVar13[8];
          iVar34 = piVar13[9];
          iVar35 = piVar13[10];
          iVar8 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffeb8;
          iVar37 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          vertex1.projected_vertex.transformed_y = iVar10;
          vertex1.projected_vertex.transformed_x = iVar7;
          vertex1.projected_vertex.transformed_z = iVar20;
          vertex1.projected_vertex.inv_z = iVar22;
          vertex1.projected_vertex.screen_x = iVar24;
          vertex1.projected_vertex.screen_y = iVar26;
          vertex1.u = iVar28;
          vertex1.v = iVar30;
          vertex1.r = iVar32;
          vertex1.g = iVar34;
          vertex1.b = iVar35;
          vertex1.a = iVar37;
          vertex2.projected_vertex.transformed_y = iVar39;
          vertex2.projected_vertex.transformed_x = iVar4;
          vertex2.projected_vertex.transformed_z = iVar16;
          vertex2.projected_vertex.inv_z = iVar19;
          vertex2.projected_vertex.screen_x = iVar21;
          vertex2.projected_vertex.screen_y = iVar23;
          vertex2.u = iVar25;
          vertex2.v = iVar27;
          vertex2.r = iVar29;
          vertex2.g = iVar31;
          vertex2.b = iVar33;
          vertex2.a = iVar36;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
          pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iVar11);
          iVar4 = *piVar13;
          iVar39 = piVar13[1];
          iVar16 = piVar13[2];
          iVar19 = piVar13[3];
          iVar21 = piVar13[4];
          iVar23 = piVar13[5];
          iVar25 = piVar13[6];
          iVar27 = piVar13[7];
          iVar29 = piVar13[8];
          iVar31 = piVar13[9];
          iVar33 = piVar13[10];
          iVar7 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffee8;
          iVar36 = iVar7;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iVar12);
          iVar7 = *piVar13;
          iVar10 = piVar13[1];
          iVar20 = piVar13[2];
          iVar22 = piVar13[3];
          iVar24 = piVar13[4];
          iVar26 = piVar13[5];
          iVar28 = piVar13[6];
          iVar30 = piVar13[7];
          iVar32 = piVar13[8];
          iVar34 = piVar13[9];
          iVar35 = piVar13[10];
          iVar8 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffeb8;
          iVar37 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          vertex1_00.projected_vertex.transformed_y = iVar10;
          vertex1_00.projected_vertex.transformed_x = iVar7;
          vertex1_00.projected_vertex.transformed_z = iVar20;
          vertex1_00.projected_vertex.inv_z = iVar22;
          vertex1_00.projected_vertex.screen_x = iVar24;
          vertex1_00.projected_vertex.screen_y = iVar26;
          vertex1_00.u = iVar28;
          vertex1_00.v = iVar30;
          vertex1_00.r = iVar32;
          vertex1_00.g = iVar34;
          vertex1_00.b = iVar35;
          vertex1_00.a = iVar37;
          vertex2_00.projected_vertex.transformed_y = iVar39;
          vertex2_00.projected_vertex.transformed_x = iVar4;
          vertex2_00.projected_vertex.transformed_z = iVar16;
          vertex2_00.projected_vertex.inv_z = iVar19;
          vertex2_00.projected_vertex.screen_x = iVar21;
          vertex2_00.projected_vertex.screen_y = iVar23;
          vertex2_00.u = iVar25;
          vertex2_00.v = iVar27;
          vertex2_00.r = iVar29;
          vertex2_00.g = iVar31;
          vertex2_00.b = iVar33;
          vertex2_00.a = iVar36;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,vertex2_00);
          pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iVar12);
          iVar4 = *piVar13;
          iVar39 = piVar13[1];
          iVar16 = piVar13[2];
          iVar19 = piVar13[3];
          iVar21 = piVar13[4];
          iVar23 = piVar13[5];
          iVar25 = piVar13[6];
          iVar27 = piVar13[7];
          iVar29 = piVar13[8];
          iVar31 = piVar13[9];
          iVar33 = piVar13[10];
          iVar7 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffee8;
          iVar36 = iVar7;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iStack_c);
          iVar7 = *piVar13;
          iVar10 = piVar13[1];
          iVar20 = piVar13[2];
          iVar22 = piVar13[3];
          iVar24 = piVar13[4];
          iVar26 = piVar13[5];
          iVar28 = piVar13[6];
          iVar30 = piVar13[7];
          iVar32 = piVar13[8];
          iVar34 = piVar13[9];
          iVar35 = piVar13[10];
          iVar8 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffeb8;
          iVar37 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          vertex1_01.projected_vertex.transformed_y = iVar10;
          vertex1_01.projected_vertex.transformed_x = iVar7;
          vertex1_01.projected_vertex.transformed_z = iVar20;
          vertex1_01.projected_vertex.inv_z = iVar22;
          vertex1_01.projected_vertex.screen_x = iVar24;
          vertex1_01.projected_vertex.screen_y = iVar26;
          vertex1_01.u = iVar28;
          vertex1_01.v = iVar30;
          vertex1_01.r = iVar32;
          vertex1_01.g = iVar34;
          vertex1_01.b = iVar35;
          vertex1_01.a = iVar37;
          vertex2_01.projected_vertex.transformed_y = iVar39;
          vertex2_01.projected_vertex.transformed_x = iVar4;
          vertex2_01.projected_vertex.transformed_z = iVar16;
          vertex2_01.projected_vertex.inv_z = iVar19;
          vertex2_01.projected_vertex.screen_x = iVar21;
          vertex2_01.projected_vertex.screen_y = iVar23;
          vertex2_01.u = iVar25;
          vertex2_01.v = iVar27;
          vertex2_01.r = iVar29;
          vertex2_01.g = iVar31;
          vertex2_01.b = iVar33;
          vertex2_01.a = iVar36;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_01,vertex2_01);
          pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iVar11);
          iVar4 = *piVar13;
          iVar39 = piVar13[1];
          iVar16 = piVar13[2];
          iVar19 = piVar13[3];
          iVar21 = piVar13[4];
          iVar23 = piVar13[5];
          iVar25 = piVar13[6];
          iVar27 = piVar13[7];
          iVar29 = piVar13[8];
          iVar31 = piVar13[9];
          iVar33 = piVar13[10];
          iVar7 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffee8;
          iVar36 = iVar7;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iStack_10);
          iVar7 = *piVar13;
          iVar10 = piVar13[1];
          iVar20 = piVar13[2];
          iVar22 = piVar13[3];
          iVar24 = piVar13[4];
          iVar26 = piVar13[5];
          iVar28 = piVar13[6];
          iVar30 = piVar13[7];
          iVar32 = piVar13[8];
          iVar34 = piVar13[9];
          iVar35 = piVar13[10];
          iVar8 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffeb8;
          iVar37 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          vertex1_02.projected_vertex.transformed_y = iVar10;
          vertex1_02.projected_vertex.transformed_x = iVar7;
          vertex1_02.projected_vertex.transformed_z = iVar20;
          vertex1_02.projected_vertex.inv_z = iVar22;
          vertex1_02.projected_vertex.screen_x = iVar24;
          vertex1_02.projected_vertex.screen_y = iVar26;
          vertex1_02.u = iVar28;
          vertex1_02.v = iVar30;
          vertex1_02.r = iVar32;
          vertex1_02.g = iVar34;
          vertex1_02.b = iVar35;
          vertex1_02.a = iVar37;
          vertex2_02.projected_vertex.transformed_y = iVar39;
          vertex2_02.projected_vertex.transformed_x = iVar4;
          vertex2_02.projected_vertex.transformed_z = iVar16;
          vertex2_02.projected_vertex.inv_z = iVar19;
          vertex2_02.projected_vertex.screen_x = iVar21;
          vertex2_02.projected_vertex.screen_y = iVar23;
          vertex2_02.u = iVar25;
          vertex2_02.v = iVar27;
          vertex2_02.r = iVar29;
          vertex2_02.g = iVar31;
          vertex2_02.b = iVar33;
          vertex2_02.a = iVar36;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_02,vertex2_02);
          pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iStack_24);
          iVar4 = *piVar13;
          iVar39 = piVar13[1];
          iVar16 = piVar13[2];
          iVar19 = piVar13[3];
          iVar21 = piVar13[4];
          iVar23 = piVar13[5];
          iVar25 = piVar13[6];
          iVar27 = piVar13[7];
          iVar29 = piVar13[8];
          iVar31 = piVar13[9];
          iVar33 = piVar13[10];
          iVar7 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffee8;
          iVar36 = iVar7;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iVar12);
          iVar7 = *piVar13;
          iVar10 = piVar13[1];
          iVar20 = piVar13[2];
          iVar22 = piVar13[3];
          iVar24 = piVar13[4];
          iVar26 = piVar13[5];
          iVar28 = piVar13[6];
          iVar30 = piVar13[7];
          iVar32 = piVar13[8];
          iVar34 = piVar13[9];
          iVar35 = piVar13[10];
          iVar8 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffeb8;
          iVar37 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          vertex1_03.projected_vertex.transformed_y = iVar10;
          vertex1_03.projected_vertex.transformed_x = iVar7;
          vertex1_03.projected_vertex.transformed_z = iVar20;
          vertex1_03.projected_vertex.inv_z = iVar22;
          vertex1_03.projected_vertex.screen_x = iVar24;
          vertex1_03.projected_vertex.screen_y = iVar26;
          vertex1_03.u = iVar28;
          vertex1_03.v = iVar30;
          vertex1_03.r = iVar32;
          vertex1_03.g = iVar34;
          vertex1_03.b = iVar35;
          vertex1_03.a = iVar37;
          vertex2_03.projected_vertex.transformed_y = iVar39;
          vertex2_03.projected_vertex.transformed_x = iVar4;
          vertex2_03.projected_vertex.transformed_z = iVar16;
          vertex2_03.projected_vertex.inv_z = iVar19;
          vertex2_03.projected_vertex.screen_x = iVar21;
          vertex2_03.projected_vertex.screen_y = iVar23;
          vertex2_03.u = iVar25;
          vertex2_03.v = iVar27;
          vertex2_03.r = iVar29;
          vertex2_03.g = iVar31;
          vertex2_03.b = iVar33;
          vertex2_03.a = iVar36;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_03,vertex2_03);
          pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iStack_18);
          in_stack_fffffee8 = *piVar13;
          in_stack_fffffeec = piVar13[1];
          in_stack_fffffef0 = piVar13[2];
          in_stack_fffffef4 = piVar13[3];
          in_stack_fffffef8 = piVar13[4];
          in_stack_fffffefc = piVar13[5];
          in_stack_ffffff00 = piVar13[6];
          iVar4 = piVar13[7];
          pCVar38 = (CStairs *)piVar13[8];
          iVar39 = piVar13[9];
          pCVar40 = (CDemonRenderer *)piVar13[10];
          pSVar9 = (SMRGLTextureBasic *)piVar13[0xb];
          piVar17 = (int *)&stack0xfffffee8;
          input = pSVar9;
          for (; pSVar9 != (SMRGLTextureBasic *)0x0;
              pSVar9 = (SMRGLTextureBasic *)((int)pSVar9[-1].texture_name + 0xf)) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          piVar13 = (int *)((int)&(pSVar15->projected_vertex).transformed_x + iVar11);
          iVar12 = iVar12 + 0xc0;
          iVar16 = *piVar13;
          iVar19 = piVar13[1];
          iVar21 = piVar13[2];
          iVar23 = piVar13[3];
          iVar25 = piVar13[4];
          iVar27 = piVar13[5];
          iVar29 = piVar13[6];
          iVar31 = piVar13[7];
          iVar33 = piVar13[8];
          iVar7 = piVar13[9];
          iVar36 = piVar13[10];
          iVar10 = piVar13[0xb];
          piVar17 = (int *)&stack0xfffffeb8;
          iVar20 = iVar10;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar17 = *piVar13;
            piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar18 * -2 + 1;
          }
          vertex1_04.projected_vertex.transformed_y = iVar19;
          vertex1_04.projected_vertex.transformed_x = iVar16;
          vertex1_04.projected_vertex.transformed_z = iVar21;
          vertex1_04.projected_vertex.inv_z = iVar23;
          vertex1_04.projected_vertex.screen_x = iVar25;
          vertex1_04.projected_vertex.screen_y = iVar27;
          vertex1_04.u = iVar29;
          vertex1_04.v = iVar31;
          vertex1_04.r = iVar33;
          vertex1_04.g = iVar7;
          vertex1_04.b = iVar36;
          vertex1_04.a = iVar20;
          vertex2_04.projected_vertex.transformed_y = in_stack_fffffeec;
          vertex2_04.projected_vertex.transformed_x = in_stack_fffffee8;
          vertex2_04.projected_vertex.transformed_z = in_stack_fffffef0;
          vertex2_04.projected_vertex.inv_z = in_stack_fffffef4;
          vertex2_04.projected_vertex.screen_x = in_stack_fffffef8;
          vertex2_04.projected_vertex.screen_y = in_stack_fffffefc;
          vertex2_04.u = in_stack_ffffff00;
          vertex2_04.v = iVar4;
          vertex2_04.r = (int)pCVar38;
          vertex2_04.g = iVar39;
          vertex2_04.b = (int)pCVar40;
          vertex2_04.a = (int)input;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_04,vertex2_04);
          iVar11 = iVar11 + 0xc0;
          iStack_18 = iStack_18 + 0xc0;
          iStack_24 = iStack_24 + 0xc0;
          iStack_c = iStack_c + 0xc0;
          iStack_10 = iStack_10 + 0xc0;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      pSVar15 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      pSVar14 = pSVar15 + *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4 + 2;
      piVar13 = (int *)&stack0xfffffee8;
      for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar13 = (pSVar14->projected_vertex).transformed_x;
        pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar18 * -2 + 1) * 4);
        piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
      }
      pSVar15 = pSVar15 + *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4;
      iVar12 = (pSVar15->projected_vertex).transformed_x;
      iVar11 = (pSVar15->projected_vertex).transformed_y;
      iVar16 = (pSVar15->projected_vertex).transformed_z;
      iVar19 = (pSVar15->projected_vertex).inv_z;
      iVar21 = (pSVar15->projected_vertex).screen_x;
      iVar23 = (pSVar15->projected_vertex).screen_y;
      iVar25 = pSVar15->u;
      iVar27 = pSVar15->v;
      iVar29 = pSVar15->r;
      iVar31 = pSVar15->g;
      iVar33 = pSVar15->b;
      iVar7 = pSVar15->a;
      piVar13 = (int *)&stack0xfffffeb8;
      iVar36 = iVar7;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar13 = (pSVar15->projected_vertex).transformed_x;
        pSVar15 = (SRenderVertex *)((int)pSVar15 + ((uint)bVar18 * -2 + 1) * 4);
        piVar13 = piVar13 + (uint)bVar18 * -2 + 1;
      }
      vertex1_05.projected_vertex.transformed_y = iVar11;
      vertex1_05.projected_vertex.transformed_x = iVar12;
      vertex1_05.projected_vertex.transformed_z = iVar16;
      vertex1_05.projected_vertex.inv_z = iVar19;
      vertex1_05.projected_vertex.screen_x = iVar21;
      vertex1_05.projected_vertex.screen_y = iVar23;
      vertex1_05.u = iVar25;
      vertex1_05.v = iVar27;
      vertex1_05.r = iVar29;
      vertex1_05.g = iVar31;
      vertex1_05.b = iVar33;
      vertex1_05.a = iVar36;
      vertex2_05.projected_vertex.transformed_y = in_stack_fffffeec;
      vertex2_05.projected_vertex.transformed_x = in_stack_fffffee8;
      vertex2_05.projected_vertex.transformed_z = in_stack_fffffef0;
      vertex2_05.projected_vertex.inv_z = in_stack_fffffef4;
      vertex2_05.projected_vertex.screen_x = in_stack_fffffef8;
      vertex2_05.projected_vertex.screen_y = in_stack_fffffefc;
      vertex2_05.u = in_stack_ffffff00;
      vertex2_05.v = iVar4;
      vertex2_05.r = (int)pCVar38;
      vertex2_05.g = iVar39;
      vertex2_05.b = (int)pCVar40;
      vertex2_05.a = (int)input;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_05,vertex2_05);
      SStack_dc.base.count = 4;
      SStack_dc.surface_normal.D = 0;
      SStack_dc.surface_normal.C = 0;
      SStack_dc.surface_normal.B = 0;
      SStack_dc.surface_normal.A = 0;
      iVar4 = 0;
      for (iVar39 = 0; pCVar40 = g_CDemonRendererPtr2,
          iVar39 <= *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4; iVar39 = iVar39 + 1) {
        *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar4) = 0;
        *(uint *)((int)&pCVar40->vertex_buffer_ptr->g + iVar4) = 0;
        *(uint *)((int)&pCVar40->vertex_buffer_ptr->b + iVar4) = 0xff00;
        *(uint *)((int)&pCVar40->vertex_buffer_ptr->a + iVar4) = 0x8000;
        *(uint *)((int)&pCVar40->vertex_buffer_ptr->u + iVar4) = 0x800000;
        *(uint *)((int)&pCVar40->vertex_buffer_ptr->v + iVar4) = 0x800000;
        iVar4 = iVar4 + 0x30;
      }
      iVar4 = 0;
      if (0 < *(int *)(in_stack_0000000c[1].actor_name + 0x14)) {
        iVar39 = 0;
        do {
          local_bc.min.y = (float)(iVar39 + 2);
          local_bc.min.x = (float)(iVar39 + 3);
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,&SStack_dc);
          local_bc.min.x = (float)(iVar39 + 6);
          local_bc.min.y = (float)(iVar39 + 3);
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,&SStack_dc);
          iVar4 = iVar4 + 1;
          iVar39 = iVar39 + 4;
        } while (iVar4 < *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      SStack_dc.base.count = 3;
      SStack_dc.surface_normal.D = 0;
      SStack_dc.surface_normal.C = 0;
      SStack_dc.surface_normal.B = 0;
      local_bc.min.x = 2.8026e-45;
      SStack_dc.surface_normal.A = 0;
      pUStack_28 = &in_stack_0000000c[1].orient;
      pfStack_2c = &in_stack_0000000c[1].location.position.y;
      for (iStack_8 = 0; iStack_8 < *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 2;
          iStack_8 = iStack_8 + 1) {
        pcVar6 = in_stack_0000000c[1].actor_name + iStack_8 * 0x38 + 0x18;
        CStack_6c.x = (int)ROUND(*(float *)pcVar6 * 256.0f);
        CStack_6c.y = (int)ROUND(*(float *)(pcVar6 + 4) * 256.0f);
        CStack_6c.z = (int)ROUND(*(float *)(pcVar6 + 8) * 256.0f);
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
        iVar4 = 0;
        do {
          pCVar40 = g_CDemonRendererPtr2;
          *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar4) = 0;
          *(uint *)((int)&pCVar40->vertex_buffer_ptr->g + iVar4) = 0xff00;
          *(uint *)((int)&pCVar40->vertex_buffer_ptr->b + iVar4) = 0;
          *(uint *)((int)&pCVar40->vertex_buffer_ptr->a + iVar4) = 0x8000;
          *(uint *)((int)&pCVar40->vertex_buffer_ptr->u + iVar4) = 0x800000;
          iVar39 = iVar4 + 0x30;
          *(uint *)((int)&pCVar40->vertex_buffer_ptr->v + iVar4) = 0x800000;
          iVar4 = iVar39;
        } while (iVar39 != 0x90);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(pCVar40,&SStack_dc);
        pUStack_28 = (UOrientationVector *)((int)pUStack_28 + 0x38);
        pfStack_2c = pfStack_2c + 0xe;
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
    return iVar5;
  }
  return 0;
}
