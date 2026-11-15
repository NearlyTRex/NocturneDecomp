// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00480f00
// Address: 00480f00
// Address Range: [[00480f00, 0048114a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00480f00(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00480f00(CEditorTools *this_ptr,float scale_factor,int text_color)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  int iVar1;
  uint *puVar2;
  int unaff_EBP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  double dVar6;
  uint in_stack_ffffff78;
  uint in_stack_ffffff7c;
  uint in_stack_ffffff80;
  uint in_stack_ffffff84;
  byte auVar7 [24];
  byte in_stack_ffffff88 [32];
  ulonglong in_stack_ffffffa8;
  ulonglong in_stack_ffffffb0;
  uint in_stack_ffffffb8;
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
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  iVar1 = _DAT_01c5baec;
  dVar6 = round((double)(scale_factor * (float)_DAT_005bd335));
  aiStack_18[0] = (int)ROUND(dVar6);
  iVar17 = text_color;
  if (iVar1 != 0) {
    iVar1 = (text_color & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f3520
              ((uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c6af99)[iVar1] << 8
               | (uint)(byte)(&DAT_01c6af9a)[iVar1]);
    iVar17 = _DAT_01c6b5c0;
  }
  _DAT_01c6b5c0 = iVar17;
  iVar17 = 0;
  uVar9 = 0;
  iVar18 = 0;
  uVar8 = 0x480fb4;
  engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)&stack0xffffffdc);
  pCVar12 = (CVector3i *)&stack0xffffffe4;
  uVar11 = 1;
  aiStack_18[0] = 0;
  aiStack_18[1] = 0;
  uVar10 = 0x480fd3;
  engine_matrix_c_transformToCache_FUN_004e5540(1,pCVar12);
  puVar3 = &DAT_0060b044;
  puVar4 = (uint *)&stack0xffffffa8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = &DAT_0060b014;
  puVar4 = (uint *)&stack0xffffff78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407b30(vertex1,vertex2);
  pCVar12 = (CVector3i *)(aiStack_18 + 1);
  uVar14 = 2;
  aiStack_18[1] = 0;
  uVar13 = 0x48101c;
  engine_matrix_c_transformToCache_FUN_004e5540(2,pCVar12);
  puVar3 = (uint *)&DAT_0060b074;
  puVar4 = (uint *)&stack0xffffffb0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = &DAT_0060b014;
  puVar4 = (uint *)&stack0xffffff80;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407b30(vertex1_00,vertex2_00);
  pCVar12 = (CVector3i *)&stack0xfffffff4;
  uVar16 = 3;
  uVar15 = 0x481065;
  engine_matrix_c_transformToCache_FUN_004e5540(3,pCVar12);
  puVar3 = (uint *)&DAT_0060b0a4;
  puVar4 = (uint *)&stack0xffffffb8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar2 = &DAT_0060b044;
  puVar3 = &DAT_0060b014;
  puVar4 = (uint *)&stack0xffffff88;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407b30(vertex1_01,vertex2_01);
  iVar1 = 0;
  do {
    if ((*(byte *)((int)puVar2 + 0x13) & 0x80) == 0) {
      iVar17 = puVar2[4];
      iVar18 = puVar2[5];
      _sprintf((char *)aiStack_18,(char *)0x5bd32b);
      engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
      engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
      engine_font_cpp_CBitFont_drawText_FUN_004b0a20
                (_DAT_01c5b0e0,(char *)aiStack_18,iVar17 >> 0x10,iVar18 >> 0x10,_DAT_01c5bb3c,-1);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0xc;
  } while (iVar1 < 3);
  return;
}
