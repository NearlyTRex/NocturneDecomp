// Name: shape_edittool.cpp_FUN_0047fd00
// Address: 0047fd00
// Address Range: [[0047fd00, 0047ff4a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047fd00(undefined4 param_1,float param_2,uint param_3)

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
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int unaff_EDI;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint in_stack_ffffff7c;
  uint in_stack_ffffff80;
  uint in_stack_ffffff84;
  uint in_stack_ffffff88;
  byte auVar8 [24];
  byte in_stack_ffffff8c [32];
  ulonglong in_stack_ffffffac;
  ulonglong in_stack_ffffffb4;
  uint in_stack_ffffffbc;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  CVector3i *pCVar13;
  uint uVar14;
  uint in_stack_ffffffd4;
  uint uVar15;
  int in_stack_ffffffd8;
  uint uVar16;
  uint in_stack_ffffffdc;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iStack_14;
  
  bVar6 = 0;
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500();
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  iVar2 = _DAT_01c25f84;
  fVar7 = (float10)param_2 * (float10)_DAT_005d24df;
  round();
  iStack_14 = (int)ROUND(fVar7);
  uVar1 = param_3;
  if (iVar2 != 0) {
    iVar2 = (param_3 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)(byte)(&DAT_01c35838)[iVar2] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar2] << 8
               | (uint)(byte)(&DAT_01c3583a)[iVar2]);
    uVar1 = _DAT_01c35e60;
  }
  _DAT_01c35e60 = uVar1;
  iVar18 = 0;
  uVar10 = 0;
  iVar19 = 0;
  uVar9 = 0x47fdb4;
  engine_matrix_c_transformToCache_FUN_004e8e60(0,(CVector3i *)&stack0xffffffe0);
  pCVar13 = (CVector3i *)&stack0xffffffe8;
  uVar12 = 1;
  iStack_14 = 0;
  uVar11 = 0x47fdd3;
  engine_matrix_c_transformToCache_FUN_004e8e60(1,pCVar13);
  puVar4 = &DAT_00622044;
  puVar5 = (uint *)&stack0xffffffac;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = &DAT_00622014;
  puVar5 = (uint *)&stack0xffffff7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
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
  vertex2.projected_vertex.screen_y = uVar9;
  vertex2.u = uVar10;
  vertex2.v = uVar11;
  vertex2.r = uVar12;
  vertex2.g = (int)pCVar13;
  vertex2.b = in_stack_ffffffd4;
  vertex2.a = in_stack_ffffffd8;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1,vertex2);
  pCVar13 = (CVector3i *)&stack0xfffffff0;
  uVar15 = 2;
  uVar14 = 0x47fe1c;
  engine_matrix_c_transformToCache_FUN_004e8e60(2,pCVar13);
  puVar4 = (uint *)&DAT_00622074;
  puVar5 = (uint *)&stack0xffffffb4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = &DAT_00622014;
  puVar5 = (uint *)&stack0xffffff84;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
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
  vertex2_00.projected_vertex.inv_z = uVar9;
  vertex2_00.projected_vertex.screen_x = uVar10;
  vertex2_00.projected_vertex.screen_y = uVar11;
  vertex2_00.u = uVar12;
  vertex2_00.v = uVar14;
  vertex2_00.r = uVar15;
  vertex2_00.g = (int)pCVar13;
  vertex2_00.b = in_stack_ffffffdc;
  vertex2_00.a = iVar18;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1_00,vertex2_00);
  pCVar13 = (CVector3i *)&stack0xfffffff8;
  uVar17 = 3;
  uVar16 = 0x47fe65;
  engine_matrix_c_transformToCache_FUN_004e8e60(3,pCVar13);
  puVar4 = (uint *)&DAT_006220a4;
  puVar5 = (uint *)&stack0xffffffbc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar3 = &DAT_00622044;
  puVar4 = &DAT_00622014;
  puVar5 = (uint *)&stack0xffffff8c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  vertex1_01.r = (int)in_stack_ffffffac;
  vertex1_01.g = (int)((ulonglong)in_stack_ffffffac >> 0x20);
  auVar8 = in_stack_ffffff8c._0_24_;
  vertex1_01.projected_vertex.transformed_x = auVar8._0_4_;
  vertex1_01.projected_vertex.transformed_y = auVar8._4_4_;
  vertex1_01.projected_vertex.transformed_z = auVar8._8_4_;
  vertex1_01.projected_vertex.inv_z = auVar8._12_4_;
  vertex1_01.projected_vertex.screen_x = auVar8._16_4_;
  vertex1_01.projected_vertex.screen_y = auVar8._20_4_;
  vertex1_01.u = in_stack_ffffff8c._24_4_;
  vertex1_01.v = in_stack_ffffff8c._28_4_;
  vertex1_01.b = (int)in_stack_ffffffb4;
  vertex1_01.a = (int)((ulonglong)in_stack_ffffffb4 >> 0x20);
  vertex2_01.projected_vertex.transformed_y = uVar9;
  vertex2_01.projected_vertex.transformed_x = in_stack_ffffffbc;
  vertex2_01.projected_vertex.transformed_z = uVar10;
  vertex2_01.projected_vertex.inv_z = uVar11;
  vertex2_01.projected_vertex.screen_x = uVar12;
  vertex2_01.projected_vertex.screen_y = uVar14;
  vertex2_01.u = uVar15;
  vertex2_01.v = uVar16;
  vertex2_01.r = uVar17;
  vertex2_01.g = (int)pCVar13;
  vertex2_01.b = iVar19;
  vertex2_01.a = unaff_EDI;
  engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(vertex1_01,vertex2_01);
  iVar2 = 0;
  do {
    if ((*(byte *)((int)puVar3 + 0x13) & 0x80) == 0) {
      _sprintf((char *)&iStack_14,(char *)0x5d24d5);
      engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
      engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
      engine_font_cpp_FUN_004a8df0();
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0xc;
  } while (iVar2 < 3);
  return;
}
