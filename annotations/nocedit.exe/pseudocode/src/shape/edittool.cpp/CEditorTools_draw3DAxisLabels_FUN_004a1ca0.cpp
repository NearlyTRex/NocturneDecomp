// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
// Address Range: [[004a1ca0, 004a1e8d]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_64 */
/* WARNING: Variable defined which should be unmapped: local_94 */

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
  float *pfVar6;
  int *piVar7;
  byte bVar8;
  double dVar9;
  byte auStack_98 [4];
  SRenderVertex local_94;
  SRenderVertex local_64;
  CVector3i CStack_24;
  int local_18;
  
  bVar8 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    local_64.w_recip = (float)"gEdFont must be set by the application.";
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    local_64.fog = 6.806655e-39;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  local_64.w_recip = 1.48538e-43;
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  local_64.fog = (float)g_EditorFont;
  local_64.color = 0x4a1ccd;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  CStack_24.y = 0;
  CStack_24.z = 0;
  g_ActiveRenderColor = text_color;
  local_64.w_recip = (float)&CStack_24.y;
  local_18 = 0;
  local_64.fog = 6.80623e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(scale_factor * (float)256));
  local_64.color = 0;
  local_18 = (int)ROUND(dVar9);
  local_64.light = 6.806244e-39;
  engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_64.fog);
  CStack_24.x = local_18;
  local_64.fog = (float)&CStack_24;
  local_64.color = 1;
  CStack_24.y = 0;
  CStack_24.z = 0;
  local_64.light = 6.806287e-39;
  engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)local_64.fog);
  pSVar5 = g_RenderVertexBuffer + 1;
  pfVar6 = &local_94.w_recip;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = (float)(pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
    pfVar6 = (float *)((int *)pfVar6 + (uint)bVar8 * -2 + 1);
  }
  pSVar5 = g_RenderVertexBuffer;
  piVar7 = (int *)auStack_98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  vertex2.projected_vertex.screen_y = local_64.projected_vertex.screen_x;
  vertex2.projected_vertex.transformed_x = (int)local_94.w_recip;
  vertex2.projected_vertex.transformed_y = local_64.projected_vertex.transformed_x;
  vertex2.projected_vertex.transformed_z = local_64.projected_vertex.transformed_y;
  vertex2.projected_vertex.inv_z = local_64.projected_vertex.transformed_z;
  vertex2.projected_vertex.screen_x = local_64.projected_vertex.inv_z;
  vertex2.u = (float)local_64.projected_vertex.screen_y;
  vertex2.v = local_64.u;
  vertex2.light = local_64.v;
  vertex2.color = (int)local_64.light;
  vertex2.fog = (float)local_64.color;
  vertex2.w_recip = local_64.fog;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_98,vertex2);
  CStack_24.y = local_18;
  local_64.fog = (float)&CStack_24;
  local_64.color = 2;
  CStack_24.x = 0;
  CStack_24.z = 0;
  local_64.light = 6.806393e-39;
  engine_matrix_c_transformToCache_FUN_0050cd70(2,(CVector3i *)local_64.fog);
  pSVar5 = g_RenderVertexBuffer + 2;
  pfVar6 = &local_94.w_recip;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = (float)(pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
    pfVar6 = (float *)((int *)pfVar6 + (uint)bVar8 * -2 + 1);
  }
  pSVar5 = g_RenderVertexBuffer;
  piVar7 = (int *)auStack_98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  vertex2_00.projected_vertex.screen_y = local_64.projected_vertex.screen_x;
  vertex2_00.projected_vertex.transformed_x = (int)local_94.w_recip;
  vertex2_00.projected_vertex.transformed_y = local_64.projected_vertex.transformed_x;
  vertex2_00.projected_vertex.transformed_z = local_64.projected_vertex.transformed_y;
  vertex2_00.projected_vertex.inv_z = local_64.projected_vertex.transformed_z;
  vertex2_00.projected_vertex.screen_x = local_64.projected_vertex.inv_z;
  vertex2_00.u = (float)local_64.projected_vertex.screen_y;
  vertex2_00.v = local_64.u;
  vertex2_00.light = local_64.v;
  vertex2_00.color = (int)local_64.light;
  vertex2_00.fog = (float)local_64.color;
  vertex2_00.w_recip = local_64.fog;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_98,vertex2_00);
  CStack_24.z = local_18;
  local_64.fog = (float)&CStack_24;
  local_64.color = 3;
  CStack_24.x = 0;
  CStack_24.y = 0;
  local_64.light = 6.8065e-39;
  engine_matrix_c_transformToCache_FUN_0050cd70(3,(CVector3i *)local_64.fog);
  pSVar5 = g_RenderVertexBuffer + 3;
  pfVar6 = &local_94.w_recip;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = (float)(pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
    pfVar6 = (float *)((int *)pfVar6 + (uint)bVar8 * -2 + 1);
  }
  iVar4 = 0x688044;
  pSVar5 = g_RenderVertexBuffer;
  piVar7 = (int *)auStack_98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  vertex2_01.projected_vertex.screen_y = local_64.projected_vertex.screen_x;
  vertex2_01.projected_vertex.transformed_x = (int)local_94.w_recip;
  vertex2_01.projected_vertex.transformed_y = local_64.projected_vertex.transformed_x;
  vertex2_01.projected_vertex.transformed_z = local_64.projected_vertex.transformed_y;
  vertex2_01.projected_vertex.inv_z = local_64.projected_vertex.transformed_z;
  vertex2_01.projected_vertex.screen_x = local_64.projected_vertex.inv_z;
  vertex2_01.u = (float)local_64.projected_vertex.screen_y;
  vertex2_01.v = local_64.u;
  vertex2_01.light = local_64.v;
  vertex2_01.color = (int)local_64.light;
  vertex2_01.fog = (float)local_64.color;
  vertex2_01.w_recip = local_64.fog;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_98,vertex2_01);
  iVar3 = 0;
  do {
    if ((*(byte *)(iVar4 + 0x13) & 0x80) == 0) {
      local_64.fog = (float)(uint)(byte)g_AxisLabelChars[iVar3];
      local_64.color = (int)"%c";
      iVar1 = *(int *)(iVar4 + 0x10);
      iVar2 = *(int *)(iVar4 + 0x14);
      local_64.v = 6.806708e-39;
      local_64.light = (float)&local_64.w_recip;
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)&local_64.w_recip,"%c");
      local_64.fog = 9.18341e-41;
      local_64.color = 0x4a1e62;
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      local_64.fog = -NAN;
      local_64.color = g_AxisLabelTextColor;
      local_64.light = (float)(iVar2 >> 0x10);
      local_64.v = (float)(iVar1 >> 0x10);
      local_64.projected_vertex.screen_y = (int)g_EditorFont;
      local_64.projected_vertex.screen_x = 0x4a1e86;
      local_64.u = (float)&local_64.w_recip;
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (g_EditorFont,(char *)&local_64.w_recip,(int)local_64.v,(int)local_64.light,
                 g_AxisLabelTextColor,-1);
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x30;
  } while (iVar3 < 3);
  return;
}
