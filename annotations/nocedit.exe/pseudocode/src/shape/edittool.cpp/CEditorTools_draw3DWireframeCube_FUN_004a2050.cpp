// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// Address: 004a2050
// Address Range: [[004a2050, 004a250a]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools * this_ptr, CVector3f * corner1, CVector3f * corner2, int color_value)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
          (CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  uint uVar1;
  int iVar2;
  float *pfVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  SRenderVertex in_stack_fffffe90;
  byte auVar7 [24];
  byte in_stack_fffffec0 [32];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  CVector3i *pCVar11;
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
  
  bVar6 = 0;
  uVar8 = 0x4a2079;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(afStack_110,8,&g_CVectorTypeInfo);
  pfVar3 = afStack_110;
  uVar1 = 0;
  do {
    local_1c = corner2->x;
    iVar2 = uVar1 * 0xc;
    while( true ) {
      *(float *)((int)afStack_110 + iVar2) = local_1c;
      if ((uVar1 & 2) == 0) {
        local_14 = corner2->y;
      }
      else {
        local_14 = corner1->y;
      }
      *(float *)((int)afStack_110 + iVar2 + 4) = local_14;
      if ((uVar1 & 4) == 0) {
        local_18 = corner2->z;
      }
      else {
        local_18 = corner1->z;
      }
      uVar1 = uVar1 + 1;
      *(float *)((int)afStack_110 + iVar2 + 8) = local_18;
      if (7 < (int)uVar1) {
        local_20 = 0;
        g_ActiveRenderColor = color_value;
        do {
          uVar1 = local_20 ^ 1;
          local_8c.x = (int)ROUND(*pfVar3 * 256.0f);
          local_8c.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_8c.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_8c);
          local_68 = afStack_110[uVar1 * 3] * 0.2f;
          local_64 = afStack_110[uVar1 * 3 + 1] * 0.2f;
          local_60 = afStack_110[uVar1 * 3 + 2] * 0.2f;
          local_38 = *pfVar3 * 0.8f;
          local_34 = pfVar3[1] * 0.8f;
          local_30 = pfVar3[2] * 0.8f;
          local_44 = *pfVar3 * 0.8f + afStack_110[uVar1 * 3] * 0.2f;
          local_40 = pfVar3[1] * 0.8f + afStack_110[uVar1 * 3 + 1] * 0.2f;
          local_3c = local_30 + afStack_110[uVar1 * 3 + 2] * 0.2f;
          local_8c.x = (int)ROUND(local_44 * 256.0f);
          local_8c.y = (int)ROUND(local_40 * 256.0f);
          local_8c.z = (int)ROUND(local_3c * 256.0f);
          pCVar11 = &local_8c;
          uVar10 = 1;
          uVar9 = 0x4a221b;
          engine_matrix_c_transformToCache_FUN_0050cd70(1,pCVar11);
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar5 = (int *)&stack0xfffffec0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar5 = (int *)&stack0xfffffe90;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          vertex2.light = (float)uVar8;
          auVar7 = in_stack_fffffec0._0_24_;
          vertex2.projected_vertex.transformed_x = auVar7._0_4_;
          vertex2.projected_vertex.transformed_y = auVar7._4_4_;
          vertex2.projected_vertex.transformed_z = auVar7._8_4_;
          vertex2.projected_vertex.inv_z = auVar7._12_4_;
          vertex2.projected_vertex.screen_x = auVar7._16_4_;
          vertex2.projected_vertex.screen_y = auVar7._20_4_;
          vertex2.u = (float)in_stack_fffffec0._24_4_;
          vertex2.v = (float)in_stack_fffffec0._28_4_;
          vertex2.color = uVar9;
          vertex2.fog = (float)uVar10;
          vertex2.w_recip = (float)pCVar11;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe90,vertex2);
          uVar1 = local_20 ^ 2;
          local_b0.x = (int)ROUND(*pfVar3 * 256.0f);
          local_b0.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_b0.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_b0);
          local_98 = afStack_110[uVar1 * 3] * 0.2f;
          local_94 = afStack_110[uVar1 * 3 + 1] * 0.2f;
          local_90 = afStack_110[uVar1 * 3 + 2] * 0.2f;
          local_74 = *pfVar3 * 0.8f;
          local_70 = pfVar3[1] * 0.8f;
          local_6c = pfVar3[2] * 0.8f;
          local_2c = *pfVar3 * 0.8f + afStack_110[uVar1 * 3] * 0.2f;
          local_28 = pfVar3[1] * 0.8f + afStack_110[uVar1 * 3 + 1] * 0.2f;
          local_24 = local_6c + afStack_110[uVar1 * 3 + 2] * 0.2f;
          local_b0.x = (int)ROUND(local_2c * 256.0f);
          local_b0.y = (int)ROUND(local_28 * 256.0f);
          local_b0.z = (int)ROUND(local_24 * 256.0f);
          pCVar11 = &local_b0;
          uVar10 = 1;
          uVar9 = 0x4a235b;
          engine_matrix_c_transformToCache_FUN_0050cd70(1,pCVar11);
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar5 = (int *)&stack0xfffffec0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar5 = (int *)&stack0xfffffe90;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          vertex2_00.light = (float)uVar8;
          auVar7 = in_stack_fffffec0._0_24_;
          vertex2_00.projected_vertex.transformed_x = auVar7._0_4_;
          vertex2_00.projected_vertex.transformed_y = auVar7._4_4_;
          vertex2_00.projected_vertex.transformed_z = auVar7._8_4_;
          vertex2_00.projected_vertex.inv_z = auVar7._12_4_;
          vertex2_00.projected_vertex.screen_x = auVar7._16_4_;
          vertex2_00.projected_vertex.screen_y = auVar7._20_4_;
          vertex2_00.u = (float)in_stack_fffffec0._24_4_;
          vertex2_00.v = (float)in_stack_fffffec0._28_4_;
          vertex2_00.color = uVar9;
          vertex2_00.fog = (float)uVar10;
          vertex2_00.w_recip = (float)pCVar11;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe90,vertex2_00);
          uVar1 = local_20 ^ 4;
          local_50.x = (int)ROUND(*pfVar3 * 256.0f);
          local_50.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_50.z = (int)ROUND(pfVar3[2] * 256.0f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_50);
          local_80 = afStack_110[uVar1 * 3] * 0.2f;
          local_7c = afStack_110[uVar1 * 3 + 1] * 0.2f;
          local_78 = 0.2f * afStack_110[uVar1 * 3 + 2];
          local_a4 = *pfVar3 * 0.8f;
          local_a0 = pfVar3[1] * 0.8f;
          local_9c = 0.8f * pfVar3[2];
          local_5c = *pfVar3 * 0.8f + afStack_110[uVar1 * 3] * 0.2f;
          local_58 = pfVar3[1] * 0.8f + afStack_110[uVar1 * 3 + 1] * 0.2f;
          local_54 = local_9c + 0.2f * afStack_110[uVar1 * 3 + 2];
          local_50.x = (int)ROUND(local_5c * 256.0f);
          local_50.y = (int)ROUND(local_58 * 256.0f);
          local_50.z = (int)ROUND(local_54 * 256.0f);
          pCVar11 = &local_50;
          uVar10 = 1;
          uVar9 = 0x4a2492;
          engine_matrix_c_transformToCache_FUN_0050cd70(1,pCVar11);
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar5 = (int *)&stack0xfffffec0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar5 = (int *)&stack0xfffffe90;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          vertex2_01.light = (float)uVar8;
          auVar7 = in_stack_fffffec0._0_24_;
          vertex2_01.projected_vertex.transformed_x = auVar7._0_4_;
          vertex2_01.projected_vertex.transformed_y = auVar7._4_4_;
          vertex2_01.projected_vertex.transformed_z = auVar7._8_4_;
          vertex2_01.projected_vertex.inv_z = auVar7._12_4_;
          vertex2_01.projected_vertex.screen_x = auVar7._16_4_;
          vertex2_01.projected_vertex.screen_y = auVar7._20_4_;
          vertex2_01.u = (float)in_stack_fffffec0._24_4_;
          vertex2_01.v = (float)in_stack_fffffec0._28_4_;
          vertex2_01.color = uVar9;
          vertex2_01.fog = (float)uVar10;
          vertex2_01.w_recip = (float)pCVar11;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe90,vertex2_01);
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
