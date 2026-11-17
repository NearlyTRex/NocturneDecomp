// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00
// Address: 0047fd00
// Address Range: [[0047fd00, 0047ff4a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00(CEditorTools *this_ptr,float scale_factor,int text_color)

{
  int iVar1;
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  int iVar2;
  int unaff_EBP;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  double dVar6;
  int in_stack_ffffff78;
  uint in_stack_ffffff7c;
  int in_stack_ffffff80;
  uint in_stack_ffffff84;
  byte auVar7 [24];
  byte in_stack_ffffff88 [32];
  ulonglong in_stack_ffffffa8;
  ulonglong in_stack_ffffffb0;
  int in_stack_ffffffb8;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  CVector3i *pCVar12;
  uint uVar13;
  uint in_stack_ffffffd0;
  uint uVar14;
  int in_stack_ffffffd4;
  uint uVar15;
  uint in_stack_ffffffd8;
  uint uVar16;
  int iVar17;
  int iVar18;
  int aiStack_18 [2];
  
  bVar5 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_EditorFont->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_EditorFont,0x6a);
  iVar2 = g_INT_01c25f84;
  dVar6 = round((double)(scale_factor * (float)256));
  aiStack_18[0] = (int)ROUND(dVar6);
  iVar17 = text_color;
  if (iVar2 != 0) {
    iVar2 = (text_color & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)g_UCHAR_ARRAY_01c35838[iVar2] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar2 + 1] << 8 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar2 + 2]);
    iVar17 = g_INT_01c35e60;
  }
  g_INT_01c35e60 = iVar17;
  iVar17 = 0;
  uVar9 = 0;
  iVar18 = 0;
  uVar8 = 0x47fdb4;
  engine_matrix_c_transformToCache_FUN_004e8e60(0,(CVector3i *)&stack0xffffffdc);
  pCVar12 = (CVector3i *)&stack0xffffffe4;
  uVar11 = 1;
  aiStack_18[0] = 0;
  aiStack_18[1] = 0;
  uVar10 = 0x47fdd3;
  engine_matrix_c_transformToCache_FUN_004e8e60(1,pCVar12);
  pSVar3 = g_SRenderVertex_ARRAY_00622014 + 1;
  piVar4 = (int *)&stack0xffffffa8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = g_SRenderVertex_ARRAY_00622014;
  piVar4 = (int *)&stack0xffffff78;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1.projected_vertex.transformed_y = in_stack_ffffff7c;
  vertex1.projected_vertex.transformed_x = in_stack_ffffff78;
  vertex1.projected_vertex.transformed_z = in_stack_ffffff80;
  vertex1.projected_vertex.inv_z = in_stack_ffffff84;
  vertex1.projected_vertex.screen_x = in_stack_ffffff88._0_4_;
  vertex1.projected_vertex.screen_y = in_stack_ffffff88._4_4_;
  vertex1.u = in_stack_ffffff88._8_4_;
  vertex1.v = in_stack_ffffff88._12_4_;
  vertex1.r = in_stack_ffffff88._16_4_;
  vertex1.g = in_stack_ffffff88._20_4_;
  vertex1.b = in_stack_ffffff88._24_4_;
  vertex1.a = in_stack_ffffff88._28_4_;
  vertex2.projected_vertex.transformed_z = (int)in_stack_ffffffb0;
  vertex2.projected_vertex.inv_z = (int)((ulonglong)in_stack_ffffffb0 >> 0x20);
  vertex2.projected_vertex.transformed_x = (int)in_stack_ffffffa8;
  vertex2.projected_vertex.transformed_y = (int)((ulonglong)in_stack_ffffffa8 >> 0x20);
  vertex2.projected_vertex.screen_x = in_stack_ffffffb8;
  vertex2.projected_vertex.screen_y = uVar8;
  vertex2.u = uVar9;
  vertex2.v = uVar10;
  vertex2.r = uVar11;
  vertex2.g = (int)pCVar12;
  vertex2.b = in_stack_ffffffd0;
  vertex2.a = in_stack_ffffffd4;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1,vertex2);
  pCVar12 = (CVector3i *)(aiStack_18 + 1);
  uVar14 = 2;
  aiStack_18[1] = 0;
  uVar13 = 0x47fe1c;
  engine_matrix_c_transformToCache_FUN_004e8e60(2,pCVar12);
  pSVar3 = g_SRenderVertex_ARRAY_00622014 + 2;
  piVar4 = (int *)&stack0xffffffb0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = g_SRenderVertex_ARRAY_00622014;
  piVar4 = (int *)&stack0xffffff80;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1_00.projected_vertex.transformed_y = in_stack_ffffff84;
  vertex1_00.projected_vertex.transformed_x = in_stack_ffffff80;
  vertex1_00.projected_vertex.transformed_z = in_stack_ffffff88._0_4_;
  vertex1_00.projected_vertex.inv_z = in_stack_ffffff88._4_4_;
  vertex1_00.projected_vertex.screen_x = in_stack_ffffff88._8_4_;
  vertex1_00.projected_vertex.screen_y = in_stack_ffffff88._12_4_;
  vertex1_00.u = in_stack_ffffff88._16_4_;
  vertex1_00.v = in_stack_ffffff88._20_4_;
  vertex1_00.r = in_stack_ffffff88._24_4_;
  vertex1_00.g = in_stack_ffffff88._28_4_;
  vertex1_00.b = (int)in_stack_ffffffa8;
  vertex1_00.a = (int)((ulonglong)in_stack_ffffffa8 >> 0x20);
  vertex2_00.projected_vertex.transformed_z = in_stack_ffffffb8;
  vertex2_00.projected_vertex.transformed_x = (int)in_stack_ffffffb0;
  vertex2_00.projected_vertex.transformed_y = (int)((ulonglong)in_stack_ffffffb0 >> 0x20);
  vertex2_00.projected_vertex.inv_z = uVar8;
  vertex2_00.projected_vertex.screen_x = uVar9;
  vertex2_00.projected_vertex.screen_y = uVar10;
  vertex2_00.u = uVar11;
  vertex2_00.v = uVar13;
  vertex2_00.r = uVar14;
  vertex2_00.g = (int)pCVar12;
  vertex2_00.b = in_stack_ffffffd8;
  vertex2_00.a = iVar17;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1_00,vertex2_00);
  pCVar12 = (CVector3i *)&stack0xfffffff4;
  uVar16 = 3;
  uVar15 = 0x47fe65;
  engine_matrix_c_transformToCache_FUN_004e8e60(3,pCVar12);
  pSVar3 = g_SRenderVertex_ARRAY_00622014 + 3;
  piVar4 = (int *)&stack0xffffffb8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar17 = 0x622044;
  pSVar3 = g_SRenderVertex_ARRAY_00622014;
  piVar4 = (int *)&stack0xffffff88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1_01.r = (int)in_stack_ffffffa8;
  vertex1_01.g = (int)((ulonglong)in_stack_ffffffa8 >> 0x20);
  auVar7 = in_stack_ffffff88._0_24_;
  vertex1_01.projected_vertex.transformed_x = auVar7._0_4_;
  vertex1_01.projected_vertex.transformed_y = auVar7._4_4_;
  vertex1_01.projected_vertex.transformed_z = auVar7._8_4_;
  vertex1_01.projected_vertex.inv_z = auVar7._12_4_;
  vertex1_01.projected_vertex.screen_x = auVar7._16_4_;
  vertex1_01.projected_vertex.screen_y = auVar7._20_4_;
  vertex1_01.u = in_stack_ffffff88._24_4_;
  vertex1_01.v = in_stack_ffffff88._28_4_;
  vertex1_01.b = (int)in_stack_ffffffb0;
  vertex1_01.a = (int)((ulonglong)in_stack_ffffffb0 >> 0x20);
  vertex2_01.projected_vertex.transformed_y = uVar8;
  vertex2_01.projected_vertex.transformed_x = in_stack_ffffffb8;
  vertex2_01.projected_vertex.transformed_z = uVar9;
  vertex2_01.projected_vertex.inv_z = uVar10;
  vertex2_01.projected_vertex.screen_x = uVar11;
  vertex2_01.projected_vertex.screen_y = uVar13;
  vertex2_01.u = uVar14;
  vertex2_01.v = uVar15;
  vertex2_01.r = uVar16;
  vertex2_01.g = (int)pCVar12;
  vertex2_01.b = iVar18;
  vertex2_01.a = unaff_EBP;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1_01,vertex2_01);
  iVar2 = 0;
  do {
    if ((*(byte *)(iVar17 + 0x13) & 0x80) == 0) {
      iVar18 = *(int *)(iVar17 + 0x10);
      iVar1 = *(int *)(iVar17 + 0x14);
      _sprintf((char *)aiStack_18,"%c");
      engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
      engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
      engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                (g_EditorFont,(char *)aiStack_18,iVar18 >> 0x10,iVar1 >> 0x10,g_AxisLabelTextColor,
                 -1);
    }
    iVar2 = iVar2 + 1;
    iVar17 = iVar17 + 0x30;
  } while (iVar2 < 3);
  return;
}
