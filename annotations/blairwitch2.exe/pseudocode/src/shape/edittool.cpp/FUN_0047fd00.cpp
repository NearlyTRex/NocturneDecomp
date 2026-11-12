// Name: shape_edittool.cpp_FUN_0047fd00
// Address: 0047fd00
// Address Range: [[0047fd00, 0047ff4a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047fd00(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047fd00(uint param_1,float param_2,uint param_3)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int unaff_EDI;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  uint in_stack_ffffff7c;
  uint in_stack_ffffff80;
  uint in_stack_ffffff84;
  uint in_stack_ffffff88;
  byte auVar7 [24];
  byte in_stack_ffffff8c [32];
  ulonglong in_stack_ffffffac;
  ulonglong in_stack_ffffffb4;
  uint in_stack_ffffffbc;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  CVector3i *pCVar12;
  uint uVar13;
  uint in_stack_ffffffd4;
  uint uVar14;
  int in_stack_ffffffd8;
  uint uVar15;
  uint in_stack_ffffffdc;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iStack_14;
  
  bVar5 = 0;
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500();
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  iVar1 = _DAT_01c25f84;
  fVar6 = (float10)param_2 * (float10)_DAT_005d24df;
  round();
  iStack_14 = (int)ROUND(fVar6);
  uVar8 = param_3;
  if (iVar1 != 0) {
    engine_mini3d_cpp_FUN_004f8e20();
    uVar8 = _DAT_01c35e60;
  }
  _DAT_01c35e60 = uVar8;
  iVar17 = 0;
  uVar9 = 0;
  iVar18 = 0;
  uVar8 = 0x47fdb4;
  engine_matrix_c_transformToCache_FUN_004e8e60(0,(CVector3i *)&stack0xffffffe0);
  pCVar12 = (CVector3i *)&stack0xffffffe8;
  uVar11 = 1;
  iStack_14 = 0;
  uVar10 = 0x47fdd3;
  engine_matrix_c_transformToCache_FUN_004e8e60(1,pCVar12);
  puVar3 = &DAT_00622044;
  puVar4 = (uint *)&stack0xffffffac;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = &DAT_00622014;
  puVar4 = (uint *)&stack0xffffff7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1.projected_vertex.transformed_y = in_stack_ffffff80;
  vertex1.projected_vertex.transformed_x = in_stack_ffffff7c;
  vertex1.projected_vertex.transformed_z = in_stack_ffffff84;
  vertex1.projected_vertex.inv_z = in_stack_ffffff88;
  vertex1.projected_vertex.screen_x = in_stack_ffffff8c._0_4_;
  vertex1.projected_vertex.screen_y = in_stack_ffffff8c._4_4_;
  vertex1.u = in_stack_ffffff8c._8_4_;
  vertex1.v = in_stack_ffffff8c._12_4_;
  vertex1.r = in_stack_ffffff8c._16_4_;
  vertex1.g = in_stack_ffffff8c._20_4_;
  vertex1.b = in_stack_ffffff8c._24_4_;
  vertex1.a = in_stack_ffffff8c._28_4_;
  vertex2.projected_vertex.transformed_z = (int)in_stack_ffffffb4;
  vertex2.projected_vertex.inv_z = (int)((ulonglong)in_stack_ffffffb4 >> 0x20);
  vertex2.projected_vertex.transformed_x = (int)in_stack_ffffffac;
  vertex2.projected_vertex.transformed_y = (int)((ulonglong)in_stack_ffffffac >> 0x20);
  vertex2.projected_vertex.screen_x = in_stack_ffffffbc;
  vertex2.projected_vertex.screen_y = uVar8;
  vertex2.u = uVar9;
  vertex2.v = uVar10;
  vertex2.r = uVar11;
  vertex2.g = (int)pCVar12;
  vertex2.b = in_stack_ffffffd4;
  vertex2.a = in_stack_ffffffd8;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1,vertex2);
  pCVar12 = (CVector3i *)&stack0xfffffff0;
  uVar14 = 2;
  uVar13 = 0x47fe1c;
  engine_matrix_c_transformToCache_FUN_004e8e60(2,pCVar12);
  puVar3 = (uint *)&DAT_00622074;
  puVar4 = (uint *)&stack0xffffffb4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = &DAT_00622014;
  puVar4 = (uint *)&stack0xffffff84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1_00.projected_vertex.transformed_y = in_stack_ffffff88;
  vertex1_00.projected_vertex.transformed_x = in_stack_ffffff84;
  vertex1_00.projected_vertex.transformed_z = in_stack_ffffff8c._0_4_;
  vertex1_00.projected_vertex.inv_z = in_stack_ffffff8c._4_4_;
  vertex1_00.projected_vertex.screen_x = in_stack_ffffff8c._8_4_;
  vertex1_00.projected_vertex.screen_y = in_stack_ffffff8c._12_4_;
  vertex1_00.u = in_stack_ffffff8c._16_4_;
  vertex1_00.v = in_stack_ffffff8c._20_4_;
  vertex1_00.r = in_stack_ffffff8c._24_4_;
  vertex1_00.g = in_stack_ffffff8c._28_4_;
  vertex1_00.b = (int)in_stack_ffffffac;
  vertex1_00.a = (int)((ulonglong)in_stack_ffffffac >> 0x20);
  vertex2_00.projected_vertex.transformed_z = in_stack_ffffffbc;
  vertex2_00.projected_vertex.transformed_x = (int)in_stack_ffffffb4;
  vertex2_00.projected_vertex.transformed_y = (int)((ulonglong)in_stack_ffffffb4 >> 0x20);
  vertex2_00.projected_vertex.inv_z = uVar8;
  vertex2_00.projected_vertex.screen_x = uVar9;
  vertex2_00.projected_vertex.screen_y = uVar10;
  vertex2_00.u = uVar11;
  vertex2_00.v = uVar13;
  vertex2_00.r = uVar14;
  vertex2_00.g = (int)pCVar12;
  vertex2_00.b = in_stack_ffffffdc;
  vertex2_00.a = iVar17;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1_00,vertex2_00);
  pCVar12 = (CVector3i *)&stack0xfffffff8;
  uVar16 = 3;
  uVar15 = 0x47fe65;
  engine_matrix_c_transformToCache_FUN_004e8e60(3,pCVar12);
  puVar3 = (uint *)&DAT_006220a4;
  puVar4 = (uint *)&stack0xffffffbc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar2 = &DAT_00622044;
  puVar3 = &DAT_00622014;
  puVar4 = (uint *)&stack0xffffff8c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1_01.r = (int)in_stack_ffffffac;
  vertex1_01.g = (int)((ulonglong)in_stack_ffffffac >> 0x20);
  auVar7 = in_stack_ffffff8c._0_24_;
  vertex1_01.projected_vertex.transformed_x = auVar7._0_4_;
  vertex1_01.projected_vertex.transformed_y = auVar7._4_4_;
  vertex1_01.projected_vertex.transformed_z = auVar7._8_4_;
  vertex1_01.projected_vertex.inv_z = auVar7._12_4_;
  vertex1_01.projected_vertex.screen_x = auVar7._16_4_;
  vertex1_01.projected_vertex.screen_y = auVar7._20_4_;
  vertex1_01.u = in_stack_ffffff8c._24_4_;
  vertex1_01.v = in_stack_ffffff8c._28_4_;
  vertex1_01.b = (int)in_stack_ffffffb4;
  vertex1_01.a = (int)((ulonglong)in_stack_ffffffb4 >> 0x20);
  vertex2_01.projected_vertex.transformed_y = uVar8;
  vertex2_01.projected_vertex.transformed_x = in_stack_ffffffbc;
  vertex2_01.projected_vertex.transformed_z = uVar9;
  vertex2_01.projected_vertex.inv_z = uVar10;
  vertex2_01.projected_vertex.screen_x = uVar11;
  vertex2_01.projected_vertex.screen_y = uVar13;
  vertex2_01.u = uVar14;
  vertex2_01.v = uVar15;
  vertex2_01.r = uVar16;
  vertex2_01.g = (int)pCVar12;
  vertex2_01.b = iVar18;
  vertex2_01.a = unaff_EDI;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1_01,vertex2_01);
  iVar1 = 0;
  do {
    if ((*(byte *)((int)puVar2 + 0x13) & 0x80) == 0) {
      _sprintf((char *)&iStack_14,(char *)0x5d24d5);
      engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
      engine_mini3d_cpp_FUN_004f3570();
      engine_font_cpp_FUN_004a8df0();
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0xc;
  } while (iVar1 < 3);
  return;
}
