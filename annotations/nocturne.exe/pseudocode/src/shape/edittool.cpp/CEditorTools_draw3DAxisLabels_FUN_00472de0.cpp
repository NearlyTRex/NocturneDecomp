// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
// Address: 00472de0
// Address Range: [[00472de0, 00472fcd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools *this_ptr,float scale_factor,int text_color)

{
  int iVar1;
  int iVar2;
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  int iVar3;
  uint *puVar4;
  int unaff_EBP;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  uint in_stack_ffffff78;
  uint in_stack_ffffff7c;
  uint in_stack_ffffff80;
  uint in_stack_ffffff84;
  byte auVar9 [24];
  byte in_stack_ffffff88 [32];
  ulonglong in_stack_ffffffa8;
  ulonglong in_stack_ffffffb0;
  uint in_stack_ffffffb8;
  uint uVar10;
  uint uVar11;
  CVector3i *pCVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint in_stack_ffffffd0;
  uint uVar16;
  int in_stack_ffffffd4;
  uint uVar17;
  uint in_stack_ffffffd8;
  uint uVar18;
  int in_stack_ffffffdc;
  uint uVar19;
  int local_18 [2];
  
  bVar7 = 0;
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440();
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  uVar19 = 0;
  _DAT_01c00c70 = text_color;
  local_18[0] = 0;
  pCVar12 = (CVector3i *)0x472e40;
  dVar8 = round((double)(scale_factor * (float)256));
  uVar11 = 0;
  local_18[0] = (int)ROUND(dVar8);
  uVar10 = 0x472e4a;
  engine_matrix_c_transformToCache_FUN_004cd210(0,pCVar12);
  pCVar12 = (CVector3i *)&stack0xffffffe4;
  uVar14 = 1;
  local_18[0] = 0;
  local_18[1] = 0;
  uVar13 = 0x472e69;
  engine_matrix_c_transformToCache_FUN_004cd210(1,pCVar12);
  puVar5 = &DAT_005c5044;
  puVar6 = (uint *)&stack0xffffffa8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar5 = &DAT_005c5014;
  puVar6 = (uint *)&stack0xffffff78;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
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
  vertex2.projected_vertex.screen_y = uVar10;
  vertex2.u = uVar11;
  vertex2.v = uVar13;
  vertex2.r = uVar14;
  vertex2.g = (int)pCVar12;
  vertex2.b = in_stack_ffffffd0;
  vertex2.a = in_stack_ffffffd4;
  engine_3d_c_clipAndDrawLine2D_FUN_00409290(vertex1,vertex2);
  pCVar12 = (CVector3i *)(local_18 + 1);
  uVar16 = 2;
  local_18[1] = 0;
  uVar15 = 0x472eb4;
  engine_matrix_c_transformToCache_FUN_004cd210(2,pCVar12);
  puVar5 = &DAT_005c5074;
  puVar6 = (uint *)&stack0xffffffb0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar5 = &DAT_005c5014;
  puVar6 = (uint *)&stack0xffffff80;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
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
  vertex2_00.projected_vertex.inv_z = uVar10;
  vertex2_00.projected_vertex.screen_x = uVar11;
  vertex2_00.projected_vertex.screen_y = uVar13;
  vertex2_00.u = uVar14;
  vertex2_00.v = uVar15;
  vertex2_00.r = uVar16;
  vertex2_00.g = (int)pCVar12;
  vertex2_00.b = in_stack_ffffffd8;
  vertex2_00.a = in_stack_ffffffdc;
  engine_3d_c_clipAndDrawLine2D_FUN_00409290(vertex1_00,vertex2_00);
  pCVar12 = (CVector3i *)&stack0xfffffff4;
  uVar18 = 3;
  uVar17 = 0x472f01;
  engine_matrix_c_transformToCache_FUN_004cd210(3,pCVar12);
  puVar5 = &DAT_005c50a4;
  puVar6 = (uint *)&stack0xffffffb8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  puVar4 = &DAT_005c5044;
  puVar5 = &DAT_005c5014;
  puVar6 = (uint *)&stack0xffffff88;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  vertex1_01.r = (int)in_stack_ffffffa8;
  vertex1_01.g = (int)((ulonglong)in_stack_ffffffa8 >> 0x20);
  auVar9 = in_stack_ffffff88._0_24_;
  vertex1_01.projected_vertex.transformed_x = auVar9._0_4_;
  vertex1_01.projected_vertex.transformed_y = auVar9._4_4_;
  vertex1_01.projected_vertex.transformed_z = auVar9._8_4_;
  vertex1_01.projected_vertex.inv_z = auVar9._12_4_;
  vertex1_01.projected_vertex.screen_x = auVar9._16_4_;
  vertex1_01.projected_vertex.screen_y = auVar9._20_4_;
  vertex1_01.u = in_stack_ffffff88._24_4_;
  vertex1_01.v = in_stack_ffffff88._28_4_;
  vertex1_01.b = (int)in_stack_ffffffb0;
  vertex1_01.a = (int)((ulonglong)in_stack_ffffffb0 >> 0x20);
  vertex2_01.projected_vertex.transformed_y = uVar10;
  vertex2_01.projected_vertex.transformed_x = in_stack_ffffffb8;
  vertex2_01.projected_vertex.transformed_z = uVar11;
  vertex2_01.projected_vertex.inv_z = uVar13;
  vertex2_01.projected_vertex.screen_x = uVar14;
  vertex2_01.projected_vertex.screen_y = uVar15;
  vertex2_01.u = uVar16;
  vertex2_01.v = uVar17;
  vertex2_01.r = uVar18;
  vertex2_01.g = (int)pCVar12;
  vertex2_01.b = uVar19;
  vertex2_01.a = unaff_EBP;
  engine_3d_c_clipAndDrawLine2D_FUN_00409290(vertex1_01,vertex2_01);
  iVar3 = 0;
  do {
    if ((*(byte *)((int)puVar4 + 0x13) & 0x80) == 0) {
      iVar1 = puVar4[4];
      iVar2 = puVar4[5];
      _sprintf();
      engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (_DAT_01bcd070,(char *)local_18,iVar1 >> 0x10,iVar2 >> 0x10,_DAT_01bcde04,-1);
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0xc;
  } while (iVar3 < 3);
  return;
}
