// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_00473190
// Address: 00473190
// Address Range: [[00473190, 0047364a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00473190(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00473190(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  uint uVar1;
  int iVar2;
  float unaff_EBP;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint unaff_retaddr;
  byte in_stack_fffffea0 [12];
  uint in_stack_fffffeac;
  byte in_stack_fffffeb0 [12];
  uint in_stack_fffffebc;
  byte in_stack_fffffec0 [16];
  byte in_stack_fffffed0 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  CVector3i *pCVar12;
  uint uVar13;
  uint in_stack_fffffef8;
  int in_stack_fffffefc;
  uint uVar14;
  uint uVar15;
  uint in_stack_ffffff08;
  int in_stack_ffffff0c;
  uint uVar16;
  ulonglong in_stack_ffffff18;
  byte auStack_a0 [12];
  int iStack_94;
  int iStack_90;
  byte auStack_8c [12];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  byte auStack_30 [12];
  int iStack_24;
  uint uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  uVar7 = 0x4731b9;
  __arrinit(&stack0xfffffef0,8,&g_CVectorTypeInfo_005993b0);
  pfVar3 = (float *)&stack0xfffffef0;
  uVar1 = 0;
  do {
    fStack_1c = corner2->x;
    iVar2 = uVar1 * 0xc;
    while( true ) {
      *(float *)(&stack0xfffffef0 + iVar2) = fStack_1c;
      if ((uVar1 & 2) == 0) {
        fStack_14 = corner2->y;
      }
      else {
        fStack_14 = corner1->y;
      }
      *(float *)(&stack0xfffffef4 + iVar2) = fStack_14;
      if ((uVar1 & 4) == 0) {
        fStack_18 = corner2->z;
      }
      else {
        fStack_18 = corner1->z;
      }
      uVar1 = uVar1 + 1;
      *(float *)(&stack0xfffffef8 + iVar2) = fStack_18;
      if (7 < (int)uVar1) {
        uStack_20 = 0;
        g_ActiveRenderColor = color_value;
        do {
          iVar2 = (uStack_20 ^ 1) * 0xc;
          auStack_8c._0_4_ = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          auStack_8c._4_4_ = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          auStack_8c._8_4_ = (uint)ROUND(pfVar3[2] * _DAT_0059ca4c);
          uVar9 = 0;
          uVar8 = 0x47327c;
          engine_matrix_c_transformToCache_FUN_004cd210(0,(CVector3i *)auStack_8c);
          fStack_60 = *(float *)(&stack0xfffffef0 + iVar2) * 0.2f;
          fStack_5c = *(float *)(&stack0xfffffef4 + iVar2) * 0.2f;
          fStack_58 = *(float *)(&stack0xfffffef8 + iVar2) * 0.2f;
          auStack_30._0_4_ = *pfVar3 * 3.0517585321376802e-05._0_4_;
          auStack_30._4_4_ = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          auStack_30._8_4_ = pfVar3[2] * 3.0517585321376802e-05._0_4_;
          fStack_3c = *pfVar3 * 3.0517585321376802e-05._0_4_ +
                      *(float *)(&stack0xfffffef0 + iVar2) * 0.2f;
          fStack_38 = pfVar3[1] * 3.0517585321376802e-05._0_4_ +
                      *(float *)(&stack0xfffffef4 + iVar2) * 0.2f;
          fStack_34 = (float)auStack_30._8_4_ +
                      *(float *)(&stack0xfffffef8 + iVar2) * 0.2f;
          auStack_8c._8_4_ = (uint)ROUND(fStack_3c * _DAT_0059ca4c);
          fStack_80 = (float)(int)ROUND(fStack_38 * _DAT_0059ca4c);
          fStack_7c = (float)(int)ROUND(fStack_34 * _DAT_0059ca4c);
          pCVar12 = (CVector3i *)(auStack_8c + 8);
          fVar11 = 1.4013e-45;
          iVar10 = 0x47335b;
          engine_matrix_c_transformToCache_FUN_004cd210(1,pCVar12);
          puVar4 = &DAT_005c5044;
          puVar5 = (uint *)&stack0xfffffed0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = (uint *)&stack0xfffffea0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          vertex1.projected_vertex.inv_z = in_stack_fffffeac;
          vertex1.projected_vertex.transformed_x = in_stack_fffffea0._0_4_;
          vertex1.projected_vertex.transformed_y = in_stack_fffffea0._4_4_;
          vertex1.projected_vertex.transformed_z = in_stack_fffffea0._8_4_;
          vertex1.projected_vertex.screen_x = in_stack_fffffeb0._0_4_;
          vertex1.projected_vertex.screen_y = in_stack_fffffeb0._4_4_;
          vertex1.u = in_stack_fffffeb0._8_4_;
          vertex1.v = in_stack_fffffebc;
          vertex1.r = in_stack_fffffec0._0_4_;
          vertex1.g = in_stack_fffffec0._4_4_;
          vertex1.b = in_stack_fffffec0._8_4_;
          vertex1.a = in_stack_fffffec0._12_4_;
          vertex2.projected_vertex.screen_x = uVar7;
          vertex2.projected_vertex.transformed_x = in_stack_fffffed0._0_4_;
          vertex2.projected_vertex.transformed_y = in_stack_fffffed0._4_4_;
          vertex2.projected_vertex.transformed_z = in_stack_fffffed0._8_4_;
          vertex2.projected_vertex.inv_z = in_stack_fffffed0._12_4_;
          vertex2.projected_vertex.screen_y = uVar8;
          vertex2.u = uVar9;
          vertex2.v = iVar10;
          vertex2.r = (int)fVar11;
          vertex2.g = (int)pCVar12;
          vertex2.b = in_stack_fffffef8;
          vertex2.a = in_stack_fffffefc;
          engine_3d_c_clipAndDrawLine2D_FUN_00409290(vertex1,vertex2);
          iVar2 = ((uint)unaff_EBP ^ 2) * 0xc;
          auStack_a0._0_4_ = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          auStack_a0._4_4_ = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          auStack_a0._8_4_ = (uint)ROUND(pfVar3[2] * _DAT_0059ca4c);
          in_stack_fffffef8 = 0;
          uVar13 = 0x4733ce;
          engine_matrix_c_transformToCache_FUN_004cd210(0,(CVector3i *)auStack_a0);
          fStack_80 = *(float *)(&stack0xffffff00 + iVar2) * 0.2f;
          fStack_7c = *(float *)(&stack0xffffff04 + iVar2) * 0.2f;
          fStack_78 = *(float *)(&stack0xffffff08 + iVar2) * 0.2f;
          fStack_5c = *pfVar3 * 3.0517585321376802e-05._0_4_;
          fStack_58 = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          fStack_54 = pfVar3[2] * 3.0517585321376802e-05._0_4_;
          fStack_14 = *pfVar3 * 3.0517585321376802e-05._0_4_ +
                      *(float *)(&stack0xffffff00 + iVar2) * 0.2f;
          unaff_EBP = pfVar3[1] * 3.0517585321376802e-05._0_4_ +
                      *(float *)(&stack0xffffff04 + iVar2) * 0.2f;
          auStack_a0._8_4_ = (uint)ROUND(fStack_14 * _DAT_0059ca4c);
          iStack_94 = (int)ROUND(unaff_EBP * _DAT_0059ca4c);
          iStack_90 = (int)ROUND((fStack_54 + *(float *)(&stack0xffffff08 + iVar2) * 0.2f)
                                 * _DAT_0059ca4c);
          pCVar12 = (CVector3i *)(auStack_a0 + 8);
          uVar14 = 1;
          in_stack_fffffefc = 0x47349b;
          engine_matrix_c_transformToCache_FUN_004cd210(1,pCVar12);
          puVar4 = &DAT_005c5044;
          puVar5 = (uint *)&stack0xfffffee0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = (uint *)&stack0xfffffeb0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          in_stack_fffffeac = 0x4734c5;
          vertex1_00.projected_vertex.inv_z = in_stack_fffffebc;
          vertex1_00.projected_vertex.transformed_x = in_stack_fffffeb0._0_4_;
          vertex1_00.projected_vertex.transformed_y = in_stack_fffffeb0._4_4_;
          vertex1_00.projected_vertex.transformed_z = in_stack_fffffeb0._8_4_;
          vertex1_00.projected_vertex.screen_x = in_stack_fffffec0._0_4_;
          vertex1_00.projected_vertex.screen_y = in_stack_fffffec0._4_4_;
          vertex1_00.u = in_stack_fffffec0._8_4_;
          vertex1_00.v = in_stack_fffffec0._12_4_;
          vertex1_00.r = in_stack_fffffed0._0_4_;
          vertex1_00.g = in_stack_fffffed0._4_4_;
          vertex1_00.b = in_stack_fffffed0._8_4_;
          vertex1_00.a = in_stack_fffffed0._12_4_;
          vertex2_00.projected_vertex.transformed_y = uVar8;
          vertex2_00.projected_vertex.transformed_x = uVar7;
          vertex2_00.projected_vertex.transformed_z = uVar9;
          vertex2_00.projected_vertex.inv_z = iVar10;
          vertex2_00.projected_vertex.screen_x = (int)fVar11;
          vertex2_00.projected_vertex.screen_y = uVar13;
          vertex2_00.u = in_stack_fffffef8;
          vertex2_00.v = in_stack_fffffefc;
          vertex2_00.r = uVar14;
          vertex2_00.g = (int)pCVar12;
          vertex2_00.b = in_stack_ffffff08;
          vertex2_00.a = in_stack_ffffff0c;
          engine_3d_c_clipAndDrawLine2D_FUN_00409290(vertex1_00,vertex2_00);
          iVar2 = (unaff_retaddr ^ 4) * 0xc;
          auStack_30._0_4_ = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          auStack_30._4_4_ = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          auStack_30._8_4_ = (uint)ROUND(pfVar3[2] * _DAT_0059ca4c);
          in_stack_ffffff08 = 0;
          uVar15 = 0x473512;
          engine_matrix_c_transformToCache_FUN_004cd210(0,(CVector3i *)auStack_30);
          fStack_58 = *(float *)(&stack0xffffff10 + iVar2) * 0.2f;
          fStack_54 = *(float *)(&stack0xffffff14 + iVar2) * 0.2f;
          fStack_50 = 0.2f * *(float *)(&stack0xffffff18 + iVar2);
          fStack_7c = *pfVar3 * 3.0517585321376802e-05._0_4_;
          fStack_78 = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          fStack_74 = 3.0517585321376802e-05._0_4_ * pfVar3[2];
          fStack_34 = *pfVar3 * 3.0517585321376802e-05._0_4_ +
                      *(float *)(&stack0xffffff10 + iVar2) * 0.2f;
          auStack_30._0_4_ =
               pfVar3[1] * 3.0517585321376802e-05._0_4_ +
               *(float *)(&stack0xffffff14 + iVar2) * 0.2f;
          auStack_30._4_4_ = fStack_74 + 0.2f * *(float *)(&stack0xffffff18 + iVar2);
          auStack_30._8_4_ = (uint)ROUND(fStack_34 * _DAT_0059ca4c);
          iStack_24 = (int)ROUND((float)auStack_30._0_4_ * _DAT_0059ca4c);
          uStack_20 = (uint)ROUND((float)auStack_30._4_4_ * _DAT_0059ca4c);
          pCVar12 = (CVector3i *)(auStack_30 + 8);
          uVar16 = 1;
          in_stack_ffffff0c = 0x4735d2;
          engine_matrix_c_transformToCache_FUN_004cd210(1,pCVar12);
          puVar4 = &DAT_005c5044;
          puVar5 = (uint *)&stack0xfffffef0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = (uint *)&stack0xfffffec0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          in_stack_fffffebc = 0x4735fc;
          vertex1_01.projected_vertex.screen_x = in_stack_fffffed0._0_4_;
          vertex1_01.projected_vertex.screen_y = in_stack_fffffed0._4_4_;
          vertex1_01.u = in_stack_fffffed0._8_4_;
          vertex1_01.v = in_stack_fffffed0._12_4_;
          vertex1_01.projected_vertex.transformed_x = in_stack_fffffec0._0_4_;
          vertex1_01.projected_vertex.transformed_y = in_stack_fffffec0._4_4_;
          vertex1_01.projected_vertex.transformed_z = in_stack_fffffec0._8_4_;
          vertex1_01.projected_vertex.inv_z = in_stack_fffffec0._12_4_;
          vertex1_01.r = uVar7;
          vertex1_01.g = uVar8;
          vertex1_01.b = uVar9;
          vertex1_01.a = iVar10;
          vertex2_01.projected_vertex.transformed_y = uVar13;
          vertex2_01.projected_vertex.transformed_x = (int)fVar11;
          vertex2_01.projected_vertex.transformed_z = in_stack_fffffef8;
          vertex2_01.projected_vertex.inv_z = in_stack_fffffefc;
          vertex2_01.projected_vertex.screen_x = uVar14;
          vertex2_01.projected_vertex.screen_y = uVar15;
          vertex2_01.u = in_stack_ffffff08;
          vertex2_01.v = in_stack_ffffff0c;
          vertex2_01.r = uVar16;
          vertex2_01.g = (int)pCVar12;
          vertex2_01.b = (int)in_stack_ffffff18;
          vertex2_01.a = (int)((ulonglong)in_stack_ffffff18 >> 0x20);
          engine_3d_c_clipAndDrawLine2D_FUN_00409290(vertex1_01,vertex2_01);
          color_value = color_value + 1;
          pfVar3 = pfVar3 + 3;
        } while (color_value < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      fStack_1c = corner1->x;
      iVar2 = iVar2 + 0xc;
    }
  } while( true );
}
