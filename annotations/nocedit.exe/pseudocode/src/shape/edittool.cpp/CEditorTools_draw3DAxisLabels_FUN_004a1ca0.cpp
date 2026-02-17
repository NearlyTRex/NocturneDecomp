// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
// Address Range: [[004a1ca0, 004a1e8d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Variable defined which should be unmapped: local_64 */
/* WARNING: Variable defined which should be unmapped: local_94 */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

{
  uint uVar1;
  uint uVar2;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  short sVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  byte bVar8;
  byte in_FPUControlWord;
  SRenderVertex local_94;
  SRenderVertex local_64;
  char local_34 [20];
  CVector3i local_20;
  int local_14;
  
  bVar8 = 0;
  local_64.light._0_1_ = in_FPUControlWord;
  if (g_EditorFont == (CBitFont *)0x0) {
    local_64.w_recip = (float)"gEdFont must be set by the application.";
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    local_64.fog = 0x4a1e2f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  local_64.w_recip = 1.48538e-43;
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  local_64.fog = (int)g_EditorFont;
  local_64.color._0_2_ = 0x1ccd;
  local_64.color._2_2_ = 0x4a;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  local_20.x = 0;
  local_20.y = 0;
  g_ActiveRenderColor = text_color;
  local_64.w_recip = (float)&local_20;
  local_20.z = 0;
  local_64.color._2_2_ = (short)((uint)local_64.w_recip >> 0x10);
  local_64.light._2_2_ = local_64.color._2_2_;
  local_64.light._1_1_ = 0x1f;
  local_64.fog = 0;
  local_14 = (int)ROUND(ROUND(scale_factor * (float)256));
  local_64.color._0_2_ = 0x1d0a;
  local_64.color._2_2_ = 0x4a;
  engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_64.w_recip);
  local_20.x = local_14;
  local_64.w_recip = (float)&local_20;
  local_64.fog = 1;
  local_20.y = 0;
  local_20.z = 0;
  local_64.color._0_2_ = 0x1d29;
  local_64.color._2_2_ = 0x4a;
  engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)local_64.w_recip);
  pSVar6 = g_RenderVertexBuffer + 1;
  pSVar7 = &local_64;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pSVar7 = (pSVar6->projected_vertex).transformed_x;
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  pSVar6 = g_RenderVertexBuffer;
  pSVar7 = &local_94;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pSVar7 = (pSVar6->projected_vertex).transformed_x;
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  vertex2.projected_vertex.screen_y = local_64.projected_vertex.screen_y;
  vertex2.projected_vertex.transformed_x = local_64.projected_vertex.transformed_x;
  vertex2.projected_vertex.transformed_y = local_64.projected_vertex.transformed_y;
  vertex2.projected_vertex.transformed_z = local_64.projected_vertex.transformed_z;
  vertex2.projected_vertex.inv_z = local_64.projected_vertex.inv_z;
  vertex2.projected_vertex.screen_x = local_64.projected_vertex.screen_x;
  vertex2.u = local_64.u;
  vertex2.v = local_64.v;
  vertex2.light._0_1_ = (byte)local_64.light;
  vertex2.light._1_1_ = local_64.light._1_1_;
  vertex2.light._2_2_ = local_64.light._2_2_;
  vertex2.color._0_2_ = (short)local_64.color;
  vertex2.color._2_2_ = local_64.color._2_2_;
  vertex2.fog = local_64.fog;
  vertex2.w_recip = local_64.w_recip;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_94,vertex2);
  local_20.y = local_14;
  local_64.w_recip = (float)&local_20;
  local_64.fog = 2;
  local_20.x = 0;
  local_20.z = 0;
  local_64.color._0_2_ = 0x1d74;
  local_64.color._2_2_ = 0x4a;
  engine_matrix_c_transformToCache_FUN_0050cd70(2,(CVector3i *)local_64.w_recip);
  pSVar6 = g_RenderVertexBuffer + 2;
  pSVar7 = &local_64;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pSVar7 = (pSVar6->projected_vertex).transformed_x;
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  pSVar6 = g_RenderVertexBuffer;
  pSVar7 = &local_94;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pSVar7 = (pSVar6->projected_vertex).transformed_x;
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  vertex2_00.projected_vertex.screen_y = local_64.projected_vertex.screen_y;
  vertex2_00.projected_vertex.transformed_x = local_64.projected_vertex.transformed_x;
  vertex2_00.projected_vertex.transformed_y = local_64.projected_vertex.transformed_y;
  vertex2_00.projected_vertex.transformed_z = local_64.projected_vertex.transformed_z;
  vertex2_00.projected_vertex.inv_z = local_64.projected_vertex.inv_z;
  vertex2_00.projected_vertex.screen_x = local_64.projected_vertex.screen_x;
  vertex2_00.u = local_64.u;
  vertex2_00.v = local_64.v;
  vertex2_00.light._0_1_ = (byte)local_64.light;
  vertex2_00.light._1_1_ = local_64.light._1_1_;
  vertex2_00.light._2_2_ = local_64.light._2_2_;
  vertex2_00.color._0_2_ = (short)local_64.color;
  vertex2_00.color._2_2_ = local_64.color._2_2_;
  vertex2_00.fog = local_64.fog;
  vertex2_00.w_recip = local_64.w_recip;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_94,vertex2_00);
  local_20.z = local_14;
  local_64.w_recip = (float)&local_20;
  local_64.fog = 3;
  local_20.x = 0;
  local_20.y = 0;
  local_64.color._0_2_ = 0x1dc1;
  local_64.color._2_2_ = 0x4a;
  engine_matrix_c_transformToCache_FUN_0050cd70(3,(CVector3i *)local_64.w_recip);
  pSVar6 = g_RenderVertexBuffer + 3;
  pSVar7 = &local_64;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pSVar7 = (pSVar6->projected_vertex).transformed_x;
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  iVar5 = 0x688044;
  pSVar6 = g_RenderVertexBuffer;
  pSVar7 = &local_94;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pSVar7 = (pSVar6->projected_vertex).transformed_x;
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  vertex2_01.projected_vertex.screen_y = local_64.projected_vertex.screen_y;
  vertex2_01.projected_vertex.transformed_x = local_64.projected_vertex.transformed_x;
  vertex2_01.projected_vertex.transformed_y = local_64.projected_vertex.transformed_y;
  vertex2_01.projected_vertex.transformed_z = local_64.projected_vertex.transformed_z;
  vertex2_01.projected_vertex.inv_z = local_64.projected_vertex.inv_z;
  vertex2_01.projected_vertex.screen_x = local_64.projected_vertex.screen_x;
  vertex2_01.u = local_64.u;
  vertex2_01.v = local_64.v;
  vertex2_01.light._0_1_ = (byte)local_64.light;
  vertex2_01.light._1_1_ = local_64.light._1_1_;
  vertex2_01.light._2_2_ = local_64.light._2_2_;
  vertex2_01.color._0_2_ = (short)local_64.color;
  vertex2_01.color._2_2_ = local_64.color._2_2_;
  vertex2_01.fog = local_64.fog;
  vertex2_01.w_recip = local_64.w_recip;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_94,vertex2_01);
  iVar4 = 0;
  do {
    if ((*(byte *)(iVar5 + 0x13) & 0x80) == 0) {
      local_64.w_recip = (float)(uint)(byte)g_AxisLabelChars[iVar4];
      local_64.fog = (int)"%c";
      uVar1 = *(uint *)(iVar5 + 0x10);
      uVar2 = *(uint *)(iVar5 + 0x14);
      local_64.light._0_1_ = 0x55;
      local_64.light._1_1_ = 0x1e;
      local_64.light._2_2_ = 0x4a;
      local_64.color = (int)local_34;
      _sprintf(local_34,"%c");
      local_64.w_recip = 9.18341e-41;
      local_64.fog = 0x4a1e62;
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      local_64.w_recip = -NAN;
      local_64.fog = g_AxisLabelTextColor;
      local_64.color._0_2_ = (short)((uint)uVar2 >> 0x10);
      local_64.color._2_2_ = (short)local_64.color >> 0xf;
      local_64.light._0_1_ = (byte)((uint)uVar1 >> 0x10);
      local_64.light._1_1_ = (byte)((uint)uVar1 >> 0x18);
      sVar3 = (short)((uint)uVar1 >> 0x10);
      local_64.light._2_2_ = sVar3 >> 0xf;
      local_64.u = (int)g_EditorFont;
      local_64.projected_vertex.screen_y = 0x4a1e86;
      local_64.v = (int)local_34;
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                (g_EditorFont,local_34,(int)sVar3,(int)(short)local_64.color,g_AxisLabelTextColor,-1
                );
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x30;
  } while (iVar4 < 3);
  return;
}
