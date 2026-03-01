// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
// Address Range: [[004a1ca0, 004a1e8d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

{
  uint uVar1;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  byte in_FPUControlWord;
  SRenderVertex in_stack_ffffff6c;
  byte in_stack_ffffff9c [20];
  uint in_stack_ffffffb0;
  uint in_stack_ffffffb4;
  uint in_stack_ffffffb8;
  byte uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  CVector3i *pCVar12;
  char local_34 [20];
  CVector3i local_20;
  int local_14;
  
  bVar6 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  local_20.x = 0;
  local_20.y = 0;
  g_ActiveRenderColor = text_color;
  local_20.z = 0;
  uVar9 = (ushort)((uint)&local_20 >> 0x10);
  uVar7 = 0x1f;
  local_14 = (int)ROUND(ROUND(scale_factor * (float)256));
  engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_20);
  local_20.x = local_14;
  pCVar12 = &local_20;
  uVar11 = 1;
  local_20.y = 0;
  local_20.z = 0;
  uVar8 = 0x1d29;
  uVar10 = 0x4a;
  engine_matrix_c_transformToCache_FUN_0050cd70(1,pCVar12);
  pSVar4 = g_RenderVertexBuffer + 1;
  piVar5 = (int *)&stack0xffffff9c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = g_RenderVertexBuffer;
  piVar5 = (int *)&stack0xffffff6c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  vertex2.projected_vertex.screen_y = in_stack_ffffffb0;
  vertex2.projected_vertex.transformed_x = in_stack_ffffff9c._0_4_;
  vertex2.projected_vertex.transformed_y = in_stack_ffffff9c._4_4_;
  vertex2.projected_vertex.transformed_z = in_stack_ffffff9c._8_4_;
  vertex2.projected_vertex.inv_z = in_stack_ffffff9c._12_4_;
  vertex2.projected_vertex.screen_x = in_stack_ffffff9c._16_4_;
  vertex2.u = in_stack_ffffffb4;
  vertex2.v = in_stack_ffffffb8;
  vertex2.z._0_1_ = in_FPUControlWord;
  vertex2.z._1_1_ = uVar7;
  vertex2.z._2_2_ = uVar9;
  vertex2.r._0_2_ = uVar8;
  vertex2.r._2_2_ = uVar10;
  vertex2.g = uVar11;
  vertex2.fog = (int)pCVar12;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff6c,vertex2);
  local_20.y = local_14;
  pCVar12 = &local_20;
  uVar11 = 2;
  local_20.x = 0;
  local_20.z = 0;
  uVar8 = 0x1d74;
  uVar10 = 0x4a;
  engine_matrix_c_transformToCache_FUN_0050cd70(2,pCVar12);
  pSVar4 = g_RenderVertexBuffer + 2;
  piVar5 = (int *)&stack0xffffff9c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = g_RenderVertexBuffer;
  piVar5 = (int *)&stack0xffffff6c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  vertex2_00.projected_vertex.screen_y = in_stack_ffffffb0;
  vertex2_00.projected_vertex.transformed_x = in_stack_ffffff9c._0_4_;
  vertex2_00.projected_vertex.transformed_y = in_stack_ffffff9c._4_4_;
  vertex2_00.projected_vertex.transformed_z = in_stack_ffffff9c._8_4_;
  vertex2_00.projected_vertex.inv_z = in_stack_ffffff9c._12_4_;
  vertex2_00.projected_vertex.screen_x = in_stack_ffffff9c._16_4_;
  vertex2_00.u = in_stack_ffffffb4;
  vertex2_00.v = in_stack_ffffffb8;
  vertex2_00.z._0_1_ = in_FPUControlWord;
  vertex2_00.z._1_1_ = uVar7;
  vertex2_00.z._2_2_ = uVar9;
  vertex2_00.r._0_2_ = uVar8;
  vertex2_00.r._2_2_ = uVar10;
  vertex2_00.g = uVar11;
  vertex2_00.fog = (int)pCVar12;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff6c,vertex2_00);
  local_20.z = local_14;
  pCVar12 = &local_20;
  uVar11 = 3;
  local_20.x = 0;
  local_20.y = 0;
  uVar8 = 0x1dc1;
  uVar10 = 0x4a;
  engine_matrix_c_transformToCache_FUN_0050cd70(3,pCVar12);
  pSVar4 = g_RenderVertexBuffer + 3;
  piVar5 = (int *)&stack0xffffff9c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = 0x688044;
  pSVar4 = g_RenderVertexBuffer;
  piVar5 = (int *)&stack0xffffff6c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  vertex2_01.projected_vertex.screen_y = in_stack_ffffffb0;
  vertex2_01.projected_vertex.transformed_x = in_stack_ffffff9c._0_4_;
  vertex2_01.projected_vertex.transformed_y = in_stack_ffffff9c._4_4_;
  vertex2_01.projected_vertex.transformed_z = in_stack_ffffff9c._8_4_;
  vertex2_01.projected_vertex.inv_z = in_stack_ffffff9c._12_4_;
  vertex2_01.projected_vertex.screen_x = in_stack_ffffff9c._16_4_;
  vertex2_01.u = in_stack_ffffffb4;
  vertex2_01.v = in_stack_ffffffb8;
  vertex2_01.z._0_1_ = in_FPUControlWord;
  vertex2_01.z._1_1_ = uVar7;
  vertex2_01.z._2_2_ = uVar9;
  vertex2_01.r._0_2_ = uVar8;
  vertex2_01.r._2_2_ = uVar10;
  vertex2_01.g = uVar11;
  vertex2_01.fog = (int)pCVar12;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff6c,vertex2_01);
  iVar2 = 0;
  do {
    if ((*(byte *)(iVar3 + 0x13) & 0x80) == 0) {
      uVar11 = *(uint *)(iVar3 + 0x10);
      uVar1 = *(uint *)(iVar3 + 0x14);
      _sprintf(local_34,"%c");
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                (g_EditorFont,local_34,(int)(short)((uint)uVar11 >> 0x10),
                 (int)(short)((uint)uVar1 >> 0x10),g_AxisLabelTextColor,-1);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x30;
  } while (iVar2 < 3);
  return;
}
