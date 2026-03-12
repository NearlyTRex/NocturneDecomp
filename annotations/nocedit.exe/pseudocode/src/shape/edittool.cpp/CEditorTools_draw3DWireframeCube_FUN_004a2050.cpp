// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// Address: 004a2050
// Address Range: [[004a2050, 004a250a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  uint uVar1;
  uint uVar2;
  int iVar2;
  int iVar3;
  float *pfVar3;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar4;
  float fVar6;
  int *piVar7;
  int *piVar5;
  byte bVar6;
  CVector3i *pCVar8;
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
  SRenderVertex in_stack_fffffe90;
  CVector3i *pCVar11;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2;
  SRenderVertex vertex2_01;
  byte auVar7 [24];
  byte in_stack_fffffec0 [32];
  uint uVar10;
  uint uVar8;
  uint uVar9;
  
  bVar6 = 0;
  uVar8 = 0x4a2079;
  __arrinit(afStack_110,8,&g_CVectorTypeInfo);
  pfVar3 = afStack_110;
  uVar1 = 0;
  do {
    local_1c = corner2->x;
    iVar3 = uVar1 * 0xc;
    while( true ) {
      *(float *)((int)afStack_110 + iVar3) = local_1c;
      if ((uVar1 & 2) == 0) {
        fVar6 = corner2->y;
      }
      else {
        fVar6 = corner1->y;
      }
      *(float *)((int)afStack_110 + iVar3 + 4) = fVar6;
      if ((uVar1 & 4) == 0) {
        fVar6 = corner2->z;
      }
      else {
        fVar6 = corner1->z;
      }
      uVar1 = uVar1 + 1;
      *(float *)((int)afStack_110 + iVar3 + 8) = fVar6;
      if (7 < (int)uVar1) {
        local_20 = 0;
        g_ActiveRenderColor = color_value;
        do {
          uVar2 = local_20 ^ 1;
          local_8c.x = (int)ROUND(*pfVar3 * 256.0f);
          local_8c.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_8c.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_8c);
          local_8c.x = (int)ROUND((*pfVar3 * 0.8f +
                                  afStack_110[uVar2 * 3] * 0.2f) * 256.0f
                                 );
          local_8c.y = (int)ROUND((pfVar3[1] * 0.8f +
                                  afStack_110[uVar2 * 3 + 1] * 0.2f) *
                                  256.0f);
          local_8c.z = (int)ROUND((pfVar3[2] * 0.8f +
                                  afStack_110[uVar2 * 3 + 2] * 0.2f) *
                                  256.0f);
          pCVar11 = &local_8c;
          uVar10 = 1;
          uVar9 = 0x4a221b;
          engine_matrix_c_transformToCache_FUN_0050cd70(1,pCVar11);
          pSVar5 = g_RenderVertexBuffer + 1;
          piVar7 = (int *)&stack0xfffffec0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar6 * -2 + 1;
          }
          pSVar5 = g_RenderVertexBuffer;
          piVar7 = (int *)&stack0xfffffe90;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar6 * -2 + 1;
          }
          vertex2.r = uVar8;
          auVar7 = in_stack_fffffec0._0_24_;
          vertex2.projected_vertex.transformed_x = auVar7._0_4_;
          vertex2.projected_vertex.transformed_y = auVar7._4_4_;
          vertex2.projected_vertex.transformed_z = auVar7._8_4_;
          vertex2.projected_vertex.inv_z = auVar7._12_4_;
          vertex2.projected_vertex.screen_x = auVar7._16_4_;
          vertex2.projected_vertex.screen_y = auVar7._20_4_;
          vertex2.u = in_stack_fffffec0._24_4_;
          vertex2.v = in_stack_fffffec0._28_4_;
          vertex2.g = uVar9;
          vertex2.b = uVar10;
          vertex2.a = (int)pCVar11;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe90,vertex2);
          uVar2 = local_20 ^ 2;
          local_b0.x = (int)ROUND(*pfVar3 * 256.0f);
          local_b0.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_b0.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_b0);
          local_b0.x = (int)ROUND((*pfVar3 * 0.8f +
                                  afStack_110[uVar2 * 3] * 0.2f) * 256.0f
                                 );
          local_b0.y = (int)ROUND((pfVar3[1] * 0.8f +
                                  afStack_110[uVar2 * 3 + 1] * 0.2f) *
                                  256.0f);
          local_b0.z = (int)ROUND((pfVar3[2] * 0.8f +
                                  afStack_110[uVar2 * 3 + 2] * 0.2f) *
                                  256.0f);
          pCVar8 = &local_b0;
          uVar10 = 1;
          uVar9 = 0x4a235b;
          engine_matrix_c_transformToCache_FUN_0050cd70(1,pCVar8);
          pSVar5 = g_RenderVertexBuffer + 1;
          piVar7 = (int *)&stack0xfffffec0;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar6 * -2 + 1;
          }
          pSVar5 = g_RenderVertexBuffer;
          piVar7 = (int *)&stack0xfffffe90;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar6 * -2 + 1;
          }
          vertex2_00.r = uVar8;
          auVar7 = in_stack_fffffec0._0_24_;
          vertex2_00.projected_vertex.transformed_x = auVar7._0_4_;
          vertex2_00.projected_vertex.transformed_y = auVar7._4_4_;
          vertex2_00.projected_vertex.transformed_z = auVar7._8_4_;
          vertex2_00.projected_vertex.inv_z = auVar7._12_4_;
          vertex2_00.projected_vertex.screen_x = auVar7._16_4_;
          vertex2_00.projected_vertex.screen_y = auVar7._20_4_;
          vertex2_00.u = in_stack_fffffec0._24_4_;
          vertex2_00.v = in_stack_fffffec0._28_4_;
          vertex2_00.g = uVar9;
          vertex2_00.b = uVar10;
          vertex2_00.a = (int)pCVar8;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe90,vertex2_00);
          uVar2 = local_20 ^ 4;
          local_50.x = (int)ROUND(*pfVar3 * 256.0f);
          local_50.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_50.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_50);
          local_50.x = (int)ROUND((*pfVar3 * 0.8f +
                                  afStack_110[uVar2 * 3] * 0.2f) * 256.0f
                                 );
          local_50.y = (int)ROUND((pfVar3[1] * 0.8f +
                                  afStack_110[uVar2 * 3 + 1] * 0.2f) *
                                  256.0f);
          local_50.z = (int)ROUND((0.8f * pfVar3[2] +
                                  0.2f * afStack_110[uVar2 * 3 + 2]) *
                                  256.0f);
          pCVar8 = &local_50;
          uVar10 = 1;
          uVar9 = 0x4a2492;
          engine_matrix_c_transformToCache_FUN_0050cd70(1,pCVar8);
          pSVar5 = g_RenderVertexBuffer + 1;
          piVar7 = (int *)&stack0xfffffec0;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar6 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar5 = (int *)&stack0xfffffe90;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = pSVar4;
            piVar5 = piVar5;
          }
          vertex2_01.r = uVar8;
          auVar7 = in_stack_fffffec0._0_24_;
          vertex2_01.projected_vertex.transformed_x = auVar7._0_4_;
          vertex2_01.projected_vertex.transformed_y = auVar7._4_4_;
          vertex2_01.projected_vertex.transformed_z = auVar7._8_4_;
          vertex2_01.projected_vertex.inv_z = auVar7._12_4_;
          vertex2_01.projected_vertex.screen_x = auVar7._16_4_;
          vertex2_01.projected_vertex.screen_y = auVar7._20_4_;
          vertex2_01.u = in_stack_fffffec0._24_4_;
          vertex2_01.v = in_stack_fffffec0._28_4_;
          vertex2_01.g = uVar9;
          vertex2_01.b = uVar10;
          vertex2_01.a = (int)pCVar8;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe90,vertex2_01);
          local_20 = local_20 + 1;
          pfVar3 = pfVar3 + 3;
        } while ((int)local_20 < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      local_1c = corner1->x;
      iVar3 = iVar3 + 0xc;
    }
  } while( true );
}
