// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_00481350
// Address: 00481350
// Address Range: [[00481350, 00481916]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00481350(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00481350(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  uint uVar1;
  float unaff_EBP;
  float *pfVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  float unaff_EDI;
  int *piVar5;
  byte bVar6;
  uint unaff_retaddr;
  float afStackY_10fc [972];
  byte in_stack_fffffe34 [12];
  uint in_stack_fffffe40;
  byte in_stack_fffffe44 [12];
  uint in_stack_fffffe50;
  byte in_stack_fffffe54 [16];
  byte in_stack_fffffe64 [16];
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  CVector3i *pCVar12;
  uint uVar13;
  uint in_stack_fffffe8c;
  int in_stack_fffffe90;
  uint uVar14;
  uint uVar15;
  uint in_stack_fffffe9c;
  int in_stack_fffffea0;
  uint uVar16;
  ulonglong in_stack_fffffeac;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  byte auStack_f0 [12];
  float afStack_e4 [5];
  float fStack_d0;
  float afStack_cc [5];
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  byte auStack_98 [12];
  float fStack_8c;
  int iStack_88;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_38;
  float afStack_34 [3];
  byte auStack_28 [12];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar7 = 0x481380;
  __arrinit(&stack0xfffffe84,8,&g_CVectorTypeInfo);
  uVar1 = 0;
  do {
    fStack_1c = corner2->x;
    iVar3 = uVar1 * 0xc;
    while( true ) {
      *(float *)(&stack0xfffffe84 + iVar3) = fStack_1c;
      if ((uVar1 & 2) == 0) {
        fStack_18 = corner2->y;
      }
      else {
        fStack_18 = corner1->y;
      }
      *(float *)(&stack0xfffffe88 + iVar3) = fStack_18;
      if ((uVar1 & 4) == 0) {
        fStack_14 = corner2->z;
      }
      else {
        fStack_14 = corner1->z;
      }
      uVar1 = uVar1 + 1;
      *(float *)(&stack0xfffffe8c + iVar3) = fStack_14;
      if (7 < (int)uVar1) {
        iVar3 = color_value;
        if (g_INT_01c5baec != 0) {
          iVar3 = (color_value & 0xffU) * 3;
          engine_mini3d_cpp_setColor_FUN_004f3520
                    ((uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 2] |
                     (uint)g_UCHAR_ARRAY_01c6af98[iVar3] << 0x10 |
                     (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 1] << 8);
          iVar3 = g_INT_01c6b5c0;
        }
        g_INT_01c6b5c0 = iVar3;
        pfVar2 = (float *)&stack0xfffffe84;
        auStack_28._8_4_ = 0;
        do {
          iVar3 = (auStack_28._8_4_ ^ 1) * 0xc;
          auStack_98._0_4_ = (int)ROUND(*pfVar2 * 256.0f);
          auStack_98._4_4_ = (int)ROUND(pfVar2[1] * 256.0f);
          auStack_98._8_4_ = (uint)ROUND(pfVar2[2] * 256.0f);
          uVar9 = 0;
          uVar8 = 0x481492;
          engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)auStack_98);
          afStack_80[2] = *(float *)(&stack0xfffffe84 + iVar3) * 0.2f;
          afStack_80[3] = *(float *)(&stack0xfffffe88 + iVar3) * 0.2f;
          fStack_70 = *(float *)(&stack0xfffffe8c + iVar3) * 0.2f;
          fStack_60 = *(float *)(&stack0xfffffe84 + iVar3) * 0.2f;
          afStack_80[(uint)bVar6 * -2 + 9] = afStack_80[(uint)bVar6 * -2 + 3];
          afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
               afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_114 = *pfVar2 * 0.8f;
          fStack_110 = pfVar2[1] * 0.8f;
          fStack_10c = pfVar2[2] * 0.8f;
          afStack_e4[0] = *pfVar2 * 0.8f;
          afStack_e4[(uint)bVar6 * -2 + 1] = *(float *)(auStack_f0 + (uint)bVar6 * -8 + -0x20);
          afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2] =
               *(float *)((int)&stack0xfffffef4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          fStack_6c = afStack_e4[0] + fStack_60;
          fStack_68 = afStack_e4[1] + fStack_5c;
          fStack_64 = afStack_e4[2] + fStack_58;
          fStack_84 = afStack_e4[0] + fStack_60;
          afStack_80[(uint)bVar6 * -2] = afStack_80[(uint)bVar6 * -2 + 6];
          afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
          auStack_98._8_4_ = (uint)ROUND(fStack_84 * 256.0f);
          fStack_8c = (float)(int)ROUND(afStack_80[0] * 256.0f);
          iStack_88 = (int)ROUND(afStack_80[1] * 256.0f);
          pCVar12 = (CVector3i *)(auStack_98 + 8);
          fVar11 = 1.4013e-45;
          iVar10 = 0x4815a7;
          engine_matrix_c_transformToCache_FUN_004e5540(1,pCVar12);
          pSVar4 = g_SRenderVertex_ARRAY_0060b014 + 1;
          piVar5 = (int *)&stack0xfffffe64;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          pSVar4 = g_SRenderVertex_ARRAY_0060b014;
          piVar5 = (int *)&stack0xfffffe34;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          vertex1.projected_vertex.inv_z = in_stack_fffffe40;
          vertex1.projected_vertex.transformed_x = in_stack_fffffe34._0_4_;
          vertex1.projected_vertex.transformed_y = in_stack_fffffe34._4_4_;
          vertex1.projected_vertex.transformed_z = in_stack_fffffe34._8_4_;
          vertex1.projected_vertex.screen_x = in_stack_fffffe44._0_4_;
          vertex1.projected_vertex.screen_y = in_stack_fffffe44._4_4_;
          vertex1.u = in_stack_fffffe44._8_4_;
          vertex1.v = in_stack_fffffe50;
          vertex1.r = in_stack_fffffe54._0_4_;
          vertex1.g = in_stack_fffffe54._4_4_;
          vertex1.b = in_stack_fffffe54._8_4_;
          vertex1.a = in_stack_fffffe54._12_4_;
          vertex2.projected_vertex.screen_x = iVar7;
          vertex2.projected_vertex.transformed_x = in_stack_fffffe64._0_4_;
          vertex2.projected_vertex.transformed_y = in_stack_fffffe64._4_4_;
          vertex2.projected_vertex.transformed_z = in_stack_fffffe64._8_4_;
          vertex2.projected_vertex.inv_z = in_stack_fffffe64._12_4_;
          vertex2.projected_vertex.screen_y = uVar8;
          vertex2.u = uVar9;
          vertex2.v = iVar10;
          vertex2.r = (int)fVar11;
          vertex2.g = (int)pCVar12;
          vertex2.b = in_stack_fffffe8c;
          vertex2.a = in_stack_fffffe90;
          engine_3d_c_clipAndDrawLine2D_FUN_00407b30(vertex1,vertex2);
          iVar3 = ((uint)unaff_EBP ^ 2) * 0xc;
          auStack_28._0_4_ = (int)ROUND(*pfVar2 * 256.0f);
          auStack_28._4_4_ = (int)ROUND(pfVar2[1] * 256.0f);
          auStack_28._8_4_ = (uint)ROUND(pfVar2[2] * 256.0f);
          in_stack_fffffe8c = 0;
          uVar13 = 0x48161e;
          engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)auStack_28);
          auStack_98._0_4_ = *(float *)(&stack0xfffffe94 + iVar3) * 0.2f;
          auStack_98._4_4_ = *(float *)(&stack0xfffffe98 + iVar3) * 0.2f;
          auStack_98._8_4_ = *(float *)(&stack0xfffffe9c + iVar3) * 0.2f;
          auStack_f0._4_4_ = *(float *)(&stack0xfffffe94 + iVar3) * 0.2f;
          *(uint *)(auStack_f0 + (uint)bVar6 * -8 + 8) =
               *(uint *)(auStack_98 + (uint)bVar6 * -8 + 4);
          afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
               *(float *)(auStack_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          afStack_34[2] = *pfVar2 * 0.8f;
          auStack_28._0_4_ = pfVar2[1] * 0.8f;
          auStack_28._4_4_ = pfVar2[2] * 0.8f;
          fStack_14 = *pfVar2 * 0.8f;
          *(uint *)(&stack0xfffffff0 + (uint)bVar6 * -8) =
               *(uint *)(auStack_28 + (uint)bVar6 * -8);
          *(uint *)(&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(auStack_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
          fStack_38 = fStack_14 + (float)auStack_f0._4_4_;
          afStack_34[0] = unaff_EBP + (float)auStack_f0._8_4_;
          afStack_34[1] = unaff_EDI + afStack_e4[0];
          afStack_b4[1] = fStack_14 + (float)auStack_f0._4_4_;
          afStack_b4[(uint)bVar6 * -2 + 2] = afStack_34[(uint)bVar6 * -2];
          afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3] =
               afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          auStack_28._8_4_ = (uint)ROUND(afStack_b4[1] * 256.0f);
          fStack_1c = (float)(int)ROUND(afStack_b4[2] * 256.0f);
          fStack_18 = (float)(int)ROUND(afStack_b4[3] * 256.0f);
          pCVar12 = (CVector3i *)(auStack_28 + 8);
          uVar14 = 1;
          in_stack_fffffe90 = 0x481739;
          engine_matrix_c_transformToCache_FUN_004e5540(1,pCVar12);
          pSVar4 = g_SRenderVertex_ARRAY_0060b014 + 1;
          piVar5 = (int *)&stack0xfffffe74;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          pSVar4 = g_SRenderVertex_ARRAY_0060b014;
          piVar5 = (int *)&stack0xfffffe44;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          in_stack_fffffe40 = 0x481763;
          vertex1_00.projected_vertex.inv_z = in_stack_fffffe50;
          vertex1_00.projected_vertex.transformed_x = in_stack_fffffe44._0_4_;
          vertex1_00.projected_vertex.transformed_y = in_stack_fffffe44._4_4_;
          vertex1_00.projected_vertex.transformed_z = in_stack_fffffe44._8_4_;
          vertex1_00.projected_vertex.screen_x = in_stack_fffffe54._0_4_;
          vertex1_00.projected_vertex.screen_y = in_stack_fffffe54._4_4_;
          vertex1_00.u = in_stack_fffffe54._8_4_;
          vertex1_00.v = in_stack_fffffe54._12_4_;
          vertex1_00.r = in_stack_fffffe64._0_4_;
          vertex1_00.g = in_stack_fffffe64._4_4_;
          vertex1_00.b = in_stack_fffffe64._8_4_;
          vertex1_00.a = in_stack_fffffe64._12_4_;
          vertex2_00.projected_vertex.transformed_y = uVar8;
          vertex2_00.projected_vertex.transformed_x = iVar7;
          vertex2_00.projected_vertex.transformed_z = uVar9;
          vertex2_00.projected_vertex.inv_z = iVar10;
          vertex2_00.projected_vertex.screen_x = (int)fVar11;
          vertex2_00.projected_vertex.screen_y = uVar13;
          vertex2_00.u = in_stack_fffffe8c;
          vertex2_00.v = in_stack_fffffe90;
          vertex2_00.r = uVar14;
          vertex2_00.g = (int)pCVar12;
          vertex2_00.b = in_stack_fffffe9c;
          vertex2_00.a = in_stack_fffffea0;
          engine_3d_c_clipAndDrawLine2D_FUN_00407b30(vertex1_00,vertex2_00);
          iVar3 = (unaff_retaddr ^ 4) * 0xc;
          auStack_f0._0_4_ = (int)ROUND(*pfVar2 * 256.0f);
          auStack_f0._4_4_ = (int)ROUND(pfVar2[1] * 256.0f);
          auStack_f0._8_4_ = (uint)ROUND(pfVar2[2] * 256.0f);
          in_stack_fffffe9c = 0;
          uVar15 = 0x4817aa;
          engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)auStack_f0);
          afStack_b4[2] = *(float *)(&stack0xfffffea4 + iVar3) * 0.2f;
          afStack_b4[3] = *(float *)(&stack0xfffffea8 + iVar3) * 0.2f;
          fStack_a4 = *(float *)(&stack0xfffffeac + iVar3) * 0.2f;
          fStack_b8 = *(float *)(&stack0xfffffea4 + iVar3) * 0.2f;
          afStack_b4[(uint)bVar6 * -2] = afStack_b4[(uint)bVar6 * -2 + 3];
          afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          afStack_80[1] = *pfVar2 * 0.8f;
          afStack_80[2] = pfVar2[1] * 0.8f;
          afStack_80[3] = pfVar2[2] * 0.8f;
          afStack_34[0] = *pfVar2 * 0.8f;
          afStack_34[(uint)bVar6 * -2 + 1] = afStack_80[(uint)bVar6 * -2 + 2];
          afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2] =
               afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
          auStack_98._4_4_ = afStack_34[0] + fStack_b8;
          auStack_98._8_4_ = afStack_34[1] + afStack_b4[0];
          fStack_8c = afStack_34[2] + afStack_b4[1];
          fStack_d0 = afStack_34[0] + fStack_b8;
          afStack_cc[(uint)bVar6 * -2] = *(float *)(auStack_98 + (uint)bVar6 * -8 + 8);
          afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               (&fStack_8c)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
          auStack_f0._8_4_ = (uint)ROUND(fStack_d0 * 256.0f);
          afStack_e4[0] = (float)(int)ROUND(afStack_cc[0] * 256.0f);
          afStack_e4[1] = (float)(int)ROUND(afStack_cc[1] * 256.0f);
          pCVar12 = (CVector3i *)(auStack_f0 + 8);
          uVar16 = 1;
          in_stack_fffffea0 = 0x4818b9;
          engine_matrix_c_transformToCache_FUN_004e5540(1,pCVar12);
          pSVar4 = g_SRenderVertex_ARRAY_0060b014 + 1;
          piVar5 = (int *)&stack0xfffffe84;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          pSVar4 = g_SRenderVertex_ARRAY_0060b014;
          piVar5 = (int *)&stack0xfffffe54;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          in_stack_fffffe50 = 0x4818e3;
          vertex1_01.projected_vertex.screen_x = in_stack_fffffe64._0_4_;
          vertex1_01.projected_vertex.screen_y = in_stack_fffffe64._4_4_;
          vertex1_01.u = in_stack_fffffe64._8_4_;
          vertex1_01.v = in_stack_fffffe64._12_4_;
          vertex1_01.projected_vertex.transformed_x = in_stack_fffffe54._0_4_;
          vertex1_01.projected_vertex.transformed_y = in_stack_fffffe54._4_4_;
          vertex1_01.projected_vertex.transformed_z = in_stack_fffffe54._8_4_;
          vertex1_01.projected_vertex.inv_z = in_stack_fffffe54._12_4_;
          vertex1_01.r = iVar7;
          vertex1_01.g = uVar8;
          vertex1_01.b = uVar9;
          vertex1_01.a = iVar10;
          vertex2_01.projected_vertex.transformed_y = uVar13;
          vertex2_01.projected_vertex.transformed_x = (int)fVar11;
          vertex2_01.projected_vertex.transformed_z = in_stack_fffffe8c;
          vertex2_01.projected_vertex.inv_z = in_stack_fffffe90;
          vertex2_01.projected_vertex.screen_x = uVar14;
          vertex2_01.projected_vertex.screen_y = uVar15;
          vertex2_01.u = in_stack_fffffe9c;
          vertex2_01.v = in_stack_fffffea0;
          vertex2_01.r = uVar16;
          vertex2_01.g = (int)pCVar12;
          vertex2_01.b = (int)in_stack_fffffeac;
          vertex2_01.a = (int)((ulonglong)in_stack_fffffeac >> 0x20);
          engine_3d_c_clipAndDrawLine2D_FUN_00407b30(vertex1_01,vertex2_01);
          color_value = color_value + 1;
          pfVar2 = pfVar2 + 3;
        } while (color_value < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      fStack_1c = corner1->x;
      iVar3 = iVar3 + 0xc;
    }
  } while( true );
}
