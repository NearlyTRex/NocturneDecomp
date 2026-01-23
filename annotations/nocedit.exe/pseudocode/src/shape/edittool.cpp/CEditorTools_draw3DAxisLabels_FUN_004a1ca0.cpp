// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
// Address Range: [[004a1ca0, 004a1e8d]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
          (CEditorTools *this_ptr,float scale_factor,int text_color)

{
  int iVar1;
  int iVar2;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  int iVar3;
  int iVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  double dVar8;
  SRenderVertex in_stack_ffffff68;
  byte in_stack_ffffff98 [20];
  uint in_stack_ffffffac;
  uint in_stack_ffffffb0;
  uint in_stack_ffffffb4;
  uint in_stack_ffffffb8;
  uint uVar9;
  uint uVar10;
  CVector3i *pCVar11;
  CVector3i CStack_24;
  int local_18;
  
  bVar7 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  CStack_24.y = 0;
  CStack_24.z = 0;
  g_ActiveRenderColor = text_color;
  local_18 = 0;
  pCVar11 = (CVector3i *)0x4a1d00;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)(scale_factor * (float)256));
  local_18 = (int)ROUND(dVar8);
  engine_matrix_c_transformToCache_FUN_0050cd70(0,pCVar11);
  CStack_24.x = local_18;
  pCVar11 = &CStack_24;
  uVar10 = 1;
  CStack_24.y = 0;
  CStack_24.z = 0;
  uVar9 = 0x4a1d29;
  engine_matrix_c_transformToCache_FUN_0050cd70(1,pCVar11);
  pSVar5 = g_RenderVertexBuffer + 1;
  piVar6 = (int *)&stack0xffffff98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  pSVar5 = g_RenderVertexBuffer;
  piVar6 = (int *)&stack0xffffff68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  vertex2.projected_vertex.screen_y = in_stack_ffffffac;
  vertex2.projected_vertex.transformed_x = in_stack_ffffff98._0_4_;
  vertex2.projected_vertex.transformed_y = in_stack_ffffff98._4_4_;
  vertex2.projected_vertex.transformed_z = in_stack_ffffff98._8_4_;
  vertex2.projected_vertex.inv_z = in_stack_ffffff98._12_4_;
  vertex2.projected_vertex.screen_x = in_stack_ffffff98._16_4_;
  vertex2.u = (float)in_stack_ffffffb0;
  vertex2.v = (float)in_stack_ffffffb4;
  vertex2.light = (float)in_stack_ffffffb8;
  vertex2.color = uVar9;
  vertex2.fog = (float)uVar10;
  vertex2.w_recip = (float)pCVar11;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff68,vertex2);
  CStack_24.y = local_18;
  pCVar11 = &CStack_24;
  uVar10 = 2;
  CStack_24.x = 0;
  CStack_24.z = 0;
  uVar9 = 0x4a1d74;
  engine_matrix_c_transformToCache_FUN_0050cd70(2,pCVar11);
  pSVar5 = g_RenderVertexBuffer + 2;
  piVar6 = (int *)&stack0xffffff98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  pSVar5 = g_RenderVertexBuffer;
  piVar6 = (int *)&stack0xffffff68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  vertex2_00.projected_vertex.screen_y = in_stack_ffffffac;
  vertex2_00.projected_vertex.transformed_x = in_stack_ffffff98._0_4_;
  vertex2_00.projected_vertex.transformed_y = in_stack_ffffff98._4_4_;
  vertex2_00.projected_vertex.transformed_z = in_stack_ffffff98._8_4_;
  vertex2_00.projected_vertex.inv_z = in_stack_ffffff98._12_4_;
  vertex2_00.projected_vertex.screen_x = in_stack_ffffff98._16_4_;
  vertex2_00.u = (float)in_stack_ffffffb0;
  vertex2_00.v = (float)in_stack_ffffffb4;
  vertex2_00.light = (float)in_stack_ffffffb8;
  vertex2_00.color = uVar9;
  vertex2_00.fog = (float)uVar10;
  vertex2_00.w_recip = (float)pCVar11;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff68,vertex2_00);
  CStack_24.z = local_18;
  pCVar11 = &CStack_24;
  uVar10 = 3;
  CStack_24.x = 0;
  CStack_24.y = 0;
  uVar9 = 0x4a1dc1;
  engine_matrix_c_transformToCache_FUN_0050cd70(3,pCVar11);
  pSVar5 = g_RenderVertexBuffer + 3;
  piVar6 = (int *)&stack0xffffff98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = 0x688044;
  pSVar5 = g_RenderVertexBuffer;
  piVar6 = (int *)&stack0xffffff68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  vertex2_01.projected_vertex.screen_y = in_stack_ffffffac;
  vertex2_01.projected_vertex.transformed_x = in_stack_ffffff98._0_4_;
  vertex2_01.projected_vertex.transformed_y = in_stack_ffffff98._4_4_;
  vertex2_01.projected_vertex.transformed_z = in_stack_ffffff98._8_4_;
  vertex2_01.projected_vertex.inv_z = in_stack_ffffff98._12_4_;
  vertex2_01.projected_vertex.screen_x = in_stack_ffffff98._16_4_;
  vertex2_01.u = (float)in_stack_ffffffb0;
  vertex2_01.v = (float)in_stack_ffffffb4;
  vertex2_01.light = (float)in_stack_ffffffb8;
  vertex2_01.color = uVar9;
  vertex2_01.fog = (float)uVar10;
  vertex2_01.w_recip = (float)pCVar11;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff68,vertex2_01);
  iVar3 = 0;
  do {
    if ((*(byte *)(iVar4 + 0x13) & 0x80) == 0) {
      iVar1 = *(int *)(iVar4 + 0x10);
      iVar2 = *(int *)(iVar4 + 0x14);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffc8,"%c");
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (g_EditorFont,&stack0xffffffc8,iVar1 >> 0x10,iVar2 >> 0x10,g_AxisLabelTextColor,-1);
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x30;
  } while (iVar3 < 3);
  return;
}
