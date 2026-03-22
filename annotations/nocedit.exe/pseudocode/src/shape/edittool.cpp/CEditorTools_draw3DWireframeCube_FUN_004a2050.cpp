// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// Address: 004a2050
// Address Range: [[004a2050, 004a250a] [00602c18, 00602e33]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  uint uVar1;
  int iVar2;
  float *pfVar3;
  SRenderVertex *pSVar4;
  float fVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
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
  float afStack_110 [24];
  CVector3i local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  CVector3i local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3i local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  __arrinit(afStack_110,8,&g_CVectorTypeInfo);
  pfVar3 = afStack_110;
  uVar1 = 0;
  do {
    local_1c = corner2->x;
    iVar2 = uVar1 * 0xc;
    while( true ) {
      *(float *)((int)afStack_110 + iVar2) = local_1c;
      if ((uVar1 & 2) == 0) {
        fVar5 = corner2->y;
      }
      else {
        fVar5 = corner1->y;
      }
      *(float *)((int)afStack_110 + iVar2 + 4) = fVar5;
      if ((uVar1 & 4) == 0) {
        fVar5 = corner2->z;
      }
      else {
        fVar5 = corner1->z;
      }
      uVar1 = uVar1 + 1;
      *(float *)((int)afStack_110 + iVar2 + 8) = fVar5;
      if (7 < (int)uVar1) {
        local_20 = 0;
        g_ActiveRenderColor = color_value;
        do {
          uVar1 = local_20 ^ 1;
          local_8c.x = (int)ROUND(*pfVar3 * 256.0f);
          local_8c.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_8c.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_8c);
          local_8c.x = (int)ROUND((*pfVar3 * 0.8f +
                                  afStack_110[uVar1 * 3] * 0.2f) * 256.0f
                                 );
          local_8c.y = (int)ROUND((pfVar3[1] * 0.8f +
                                  afStack_110[uVar1 * 3 + 1] * 0.2f) *
                                  256.0f);
          local_8c.z = (int)ROUND((pfVar3[2] * 0.8f +
                                  afStack_110[uVar1 * 3 + 2] * 0.2f) *
                                  256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,&local_8c);
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = (int *)&stack0xfffffec0;
          iVar20 = g_RenderVertexBuffer[1].projected_vertex.transformed_x;
          iVar21 = g_RenderVertexBuffer[1].projected_vertex.transformed_y;
          iVar22 = g_RenderVertexBuffer[1].projected_vertex.transformed_z;
          iVar23 = g_RenderVertexBuffer[1].projected_vertex.inv_z;
          iVar24 = g_RenderVertexBuffer[1].projected_vertex.screen_x;
          iVar25 = g_RenderVertexBuffer[1].projected_vertex.screen_y;
          iVar26 = g_RenderVertexBuffer[1].u;
          iVar27 = g_RenderVertexBuffer[1].v;
          iVar28 = g_RenderVertexBuffer[1].r;
          iVar29 = g_RenderVertexBuffer[1].g;
          iVar30 = g_RenderVertexBuffer[1].b;
          iVar31 = g_RenderVertexBuffer[1].a;
          for (iVar2 = g_RenderVertexBuffer[1].a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffe90;
          iVar8 = g_RenderVertexBuffer[0].projected_vertex.transformed_x;
          iVar9 = g_RenderVertexBuffer[0].projected_vertex.transformed_y;
          iVar10 = g_RenderVertexBuffer[0].projected_vertex.transformed_z;
          iVar11 = g_RenderVertexBuffer[0].projected_vertex.inv_z;
          iVar12 = g_RenderVertexBuffer[0].projected_vertex.screen_x;
          iVar13 = g_RenderVertexBuffer[0].projected_vertex.screen_y;
          iVar14 = g_RenderVertexBuffer[0].u;
          iVar15 = g_RenderVertexBuffer[0].v;
          iVar16 = g_RenderVertexBuffer[0].r;
          iVar17 = g_RenderVertexBuffer[0].g;
          iVar18 = g_RenderVertexBuffer[0].b;
          iVar19 = g_RenderVertexBuffer[0].a;
          for (iVar2 = g_RenderVertexBuffer[0].a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          vertex1.projected_vertex.transformed_y = iVar9;
          vertex1.projected_vertex.transformed_x = iVar8;
          vertex1.projected_vertex.transformed_z = iVar10;
          vertex1.projected_vertex.inv_z = iVar11;
          vertex1.projected_vertex.screen_x = iVar12;
          vertex1.projected_vertex.screen_y = iVar13;
          vertex1.u = iVar14;
          vertex1.v = iVar15;
          vertex1.r = iVar16;
          vertex1.g = iVar17;
          vertex1.b = iVar18;
          vertex1.a = iVar19;
          vertex2.projected_vertex.transformed_y = iVar21;
          vertex2.projected_vertex.transformed_x = iVar20;
          vertex2.projected_vertex.transformed_z = iVar22;
          vertex2.projected_vertex.inv_z = iVar23;
          vertex2.projected_vertex.screen_x = iVar24;
          vertex2.projected_vertex.screen_y = iVar25;
          vertex2.u = iVar26;
          vertex2.v = iVar27;
          vertex2.r = iVar28;
          vertex2.g = iVar29;
          vertex2.b = iVar30;
          vertex2.a = iVar31;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
          uVar1 = local_20 ^ 2;
          local_b0.x = (int)ROUND(*pfVar3 * 256.0f);
          local_b0.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_b0.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_b0);
          local_b0.x = (int)ROUND((*pfVar3 * 0.8f +
                                  afStack_110[uVar1 * 3] * 0.2f) * 256.0f
                                 );
          local_b0.y = (int)ROUND((pfVar3[1] * 0.8f +
                                  afStack_110[uVar1 * 3 + 1] * 0.2f) *
                                  256.0f);
          local_b0.z = (int)ROUND((pfVar3[2] * 0.8f +
                                  afStack_110[uVar1 * 3 + 2] * 0.2f) *
                                  256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,&local_b0);
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = (int *)&stack0xfffffec0;
          iVar20 = g_RenderVertexBuffer[1].projected_vertex.transformed_x;
          iVar21 = g_RenderVertexBuffer[1].projected_vertex.transformed_y;
          iVar22 = g_RenderVertexBuffer[1].projected_vertex.transformed_z;
          iVar23 = g_RenderVertexBuffer[1].projected_vertex.inv_z;
          iVar24 = g_RenderVertexBuffer[1].projected_vertex.screen_x;
          iVar25 = g_RenderVertexBuffer[1].projected_vertex.screen_y;
          iVar26 = g_RenderVertexBuffer[1].u;
          iVar27 = g_RenderVertexBuffer[1].v;
          iVar28 = g_RenderVertexBuffer[1].r;
          iVar29 = g_RenderVertexBuffer[1].g;
          iVar30 = g_RenderVertexBuffer[1].b;
          iVar31 = g_RenderVertexBuffer[1].a;
          for (iVar2 = g_RenderVertexBuffer[1].a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffe90;
          iVar8 = g_RenderVertexBuffer[0].projected_vertex.transformed_x;
          iVar9 = g_RenderVertexBuffer[0].projected_vertex.transformed_y;
          iVar10 = g_RenderVertexBuffer[0].projected_vertex.transformed_z;
          iVar11 = g_RenderVertexBuffer[0].projected_vertex.inv_z;
          iVar12 = g_RenderVertexBuffer[0].projected_vertex.screen_x;
          iVar13 = g_RenderVertexBuffer[0].projected_vertex.screen_y;
          iVar14 = g_RenderVertexBuffer[0].u;
          iVar15 = g_RenderVertexBuffer[0].v;
          iVar16 = g_RenderVertexBuffer[0].r;
          iVar17 = g_RenderVertexBuffer[0].g;
          iVar18 = g_RenderVertexBuffer[0].b;
          iVar19 = g_RenderVertexBuffer[0].a;
          for (iVar2 = g_RenderVertexBuffer[0].a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          vertex1_00.projected_vertex.transformed_y = iVar9;
          vertex1_00.projected_vertex.transformed_x = iVar8;
          vertex1_00.projected_vertex.transformed_z = iVar10;
          vertex1_00.projected_vertex.inv_z = iVar11;
          vertex1_00.projected_vertex.screen_x = iVar12;
          vertex1_00.projected_vertex.screen_y = iVar13;
          vertex1_00.u = iVar14;
          vertex1_00.v = iVar15;
          vertex1_00.r = iVar16;
          vertex1_00.g = iVar17;
          vertex1_00.b = iVar18;
          vertex1_00.a = iVar19;
          vertex2_00.projected_vertex.transformed_y = iVar21;
          vertex2_00.projected_vertex.transformed_x = iVar20;
          vertex2_00.projected_vertex.transformed_z = iVar22;
          vertex2_00.projected_vertex.inv_z = iVar23;
          vertex2_00.projected_vertex.screen_x = iVar24;
          vertex2_00.projected_vertex.screen_y = iVar25;
          vertex2_00.u = iVar26;
          vertex2_00.v = iVar27;
          vertex2_00.r = iVar28;
          vertex2_00.g = iVar29;
          vertex2_00.b = iVar30;
          vertex2_00.a = iVar31;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,vertex2_00);
          uVar1 = local_20 ^ 4;
          local_50.x = (int)ROUND(*pfVar3 * 256.0f);
          local_50.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_50.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_50);
          local_50.x = (int)ROUND((*pfVar3 * 0.8f +
                                  afStack_110[uVar1 * 3] * 0.2f) * 256.0f
                                 );
          local_50.y = (int)ROUND((pfVar3[1] * 0.8f +
                                  afStack_110[uVar1 * 3 + 1] * 0.2f) *
                                  256.0f);
          local_50.z = (int)ROUND((0.8f * pfVar3[2] +
                                  0.2f * afStack_110[uVar1 * 3 + 2]) *
                                  256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,&local_50);
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = (int *)&stack0xfffffec0;
          iVar20 = g_RenderVertexBuffer[1].projected_vertex.transformed_x;
          iVar21 = g_RenderVertexBuffer[1].projected_vertex.transformed_y;
          iVar22 = g_RenderVertexBuffer[1].projected_vertex.transformed_z;
          iVar23 = g_RenderVertexBuffer[1].projected_vertex.inv_z;
          iVar24 = g_RenderVertexBuffer[1].projected_vertex.screen_x;
          iVar25 = g_RenderVertexBuffer[1].projected_vertex.screen_y;
          iVar26 = g_RenderVertexBuffer[1].u;
          iVar27 = g_RenderVertexBuffer[1].v;
          iVar28 = g_RenderVertexBuffer[1].r;
          iVar29 = g_RenderVertexBuffer[1].g;
          iVar30 = g_RenderVertexBuffer[1].b;
          iVar31 = g_RenderVertexBuffer[1].a;
          for (iVar2 = g_RenderVertexBuffer[1].a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffe90;
          iVar8 = g_RenderVertexBuffer[0].projected_vertex.transformed_x;
          iVar9 = g_RenderVertexBuffer[0].projected_vertex.transformed_y;
          iVar10 = g_RenderVertexBuffer[0].projected_vertex.transformed_z;
          iVar11 = g_RenderVertexBuffer[0].projected_vertex.inv_z;
          iVar12 = g_RenderVertexBuffer[0].projected_vertex.screen_x;
          iVar13 = g_RenderVertexBuffer[0].projected_vertex.screen_y;
          iVar14 = g_RenderVertexBuffer[0].u;
          iVar15 = g_RenderVertexBuffer[0].v;
          iVar16 = g_RenderVertexBuffer[0].r;
          iVar17 = g_RenderVertexBuffer[0].g;
          iVar18 = g_RenderVertexBuffer[0].b;
          iVar19 = g_RenderVertexBuffer[0].a;
          for (iVar2 = g_RenderVertexBuffer[0].a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          vertex1_01.projected_vertex.transformed_y = iVar9;
          vertex1_01.projected_vertex.transformed_x = iVar8;
          vertex1_01.projected_vertex.transformed_z = iVar10;
          vertex1_01.projected_vertex.inv_z = iVar11;
          vertex1_01.projected_vertex.screen_x = iVar12;
          vertex1_01.projected_vertex.screen_y = iVar13;
          vertex1_01.u = iVar14;
          vertex1_01.v = iVar15;
          vertex1_01.r = iVar16;
          vertex1_01.g = iVar17;
          vertex1_01.b = iVar18;
          vertex1_01.a = iVar19;
          vertex2_01.projected_vertex.transformed_y = iVar21;
          vertex2_01.projected_vertex.transformed_x = iVar20;
          vertex2_01.projected_vertex.transformed_z = iVar22;
          vertex2_01.projected_vertex.inv_z = iVar23;
          vertex2_01.projected_vertex.screen_x = iVar24;
          vertex2_01.projected_vertex.screen_y = iVar25;
          vertex2_01.u = iVar26;
          vertex2_01.v = iVar27;
          vertex2_01.r = iVar28;
          vertex2_01.g = iVar29;
          vertex2_01.b = iVar30;
          vertex2_01.a = iVar31;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_01,vertex2_01);
          local_20 = local_20 + 1;
          pfVar3 = pfVar3 + 3;
        } while ((int)local_20 < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      local_1c = corner1->x;
      iVar2 = iVar2 + 0xc;
    }
  } while( true );
}
