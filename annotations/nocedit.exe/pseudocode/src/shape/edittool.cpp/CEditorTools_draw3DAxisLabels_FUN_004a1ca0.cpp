// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
// Address Range: [[004a1ca0, 004a1e8d] [006029f4, 00602c17]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  byte uVar27;
  byte uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  int iVar32;
  char local_34 [20];
  CVector3i local_20;
  int local_14;
  
  bVar5 = 0;
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
  iVar2 = (int)ROUND(ROUND(scale_factor * (float)256));
  engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_20);
  local_20.y = 0;
  local_20.z = 0;
  local_20.x = iVar2;
  engine_matrix_c_transformToCache_FUN_0050cd70(1,&local_20);
  uVar27 = (byte)g_RenderVertexBuffer[1].r;
  uVar28 = (byte)((uint)g_RenderVertexBuffer[1].r >> 8);
  uVar29 = (ushort)((uint)g_RenderVertexBuffer[1].r >> 0x10);
  uVar30 = (ushort)g_RenderVertexBuffer[1].g;
  uVar31 = (ushort)((uint)g_RenderVertexBuffer[1].g >> 0x10);
  pSVar3 = g_RenderVertexBuffer + 1;
  piVar4 = (int *)&stack0xffffff9c;
  iVar19 = g_RenderVertexBuffer[1].projected_vertex.transformed_x;
  iVar20 = g_RenderVertexBuffer[1].projected_vertex.transformed_y;
  iVar21 = g_RenderVertexBuffer[1].projected_vertex.transformed_z;
  iVar22 = g_RenderVertexBuffer[1].projected_vertex.inv_z;
  iVar23 = g_RenderVertexBuffer[1].projected_vertex.screen_x;
  iVar24 = g_RenderVertexBuffer[1].projected_vertex.screen_y;
  iVar25 = g_RenderVertexBuffer[1].u;
  iVar26 = g_RenderVertexBuffer[1].v;
  iVar32 = g_RenderVertexBuffer[1].b;
  iVar7 = g_RenderVertexBuffer[1].a;
  for (iVar1 = g_RenderVertexBuffer[1].a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = g_RenderVertexBuffer;
  piVar4 = (int *)&stack0xffffff6c;
  iVar6 = g_RenderVertexBuffer[0].projected_vertex.transformed_x;
  iVar8 = g_RenderVertexBuffer[0].projected_vertex.transformed_y;
  iVar9 = g_RenderVertexBuffer[0].projected_vertex.transformed_z;
  iVar10 = g_RenderVertexBuffer[0].projected_vertex.inv_z;
  iVar11 = g_RenderVertexBuffer[0].projected_vertex.screen_x;
  iVar12 = g_RenderVertexBuffer[0].projected_vertex.screen_y;
  iVar13 = g_RenderVertexBuffer[0].u;
  iVar14 = g_RenderVertexBuffer[0].v;
  iVar15 = g_RenderVertexBuffer[0].r;
  iVar16 = g_RenderVertexBuffer[0].g;
  iVar17 = g_RenderVertexBuffer[0].b;
  iVar18 = g_RenderVertexBuffer[0].a;
  for (iVar1 = g_RenderVertexBuffer[0].a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1.projected_vertex.transformed_y = iVar8;
  vertex1.projected_vertex.transformed_x = iVar6;
  vertex1.projected_vertex.transformed_z = iVar9;
  vertex1.projected_vertex.inv_z = iVar10;
  vertex1.projected_vertex.screen_x = iVar11;
  vertex1.projected_vertex.screen_y = iVar12;
  vertex1.u = iVar13;
  vertex1.v = iVar14;
  vertex1.r = iVar15;
  vertex1.g = iVar16;
  vertex1.b = iVar17;
  vertex1.a = iVar18;
  vertex2.projected_vertex.transformed_y = iVar20;
  vertex2.projected_vertex.transformed_x = iVar19;
  vertex2.projected_vertex.transformed_z = iVar21;
  vertex2.projected_vertex.inv_z = iVar22;
  vertex2.projected_vertex.screen_x = iVar23;
  vertex2.projected_vertex.screen_y = iVar24;
  vertex2.u = iVar25;
  vertex2.v = iVar26;
  vertex2.r._0_1_ = uVar27;
  vertex2.r._1_1_ = uVar28;
  vertex2.r._2_2_ = uVar29;
  vertex2.g._0_2_ = uVar30;
  vertex2.g._2_2_ = uVar31;
  vertex2.b = iVar32;
  vertex2.a = iVar7;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
  local_20.x = 0;
  local_20.z = 0;
  local_20.y = iVar2;
  engine_matrix_c_transformToCache_FUN_0050cd70(2,&local_20);
  uVar27 = (byte)g_RenderVertexBuffer[2].r;
  uVar28 = (byte)((uint)g_RenderVertexBuffer[2].r >> 8);
  uVar29 = (ushort)((uint)g_RenderVertexBuffer[2].r >> 0x10);
  uVar30 = (ushort)g_RenderVertexBuffer[2].g;
  uVar31 = (ushort)((uint)g_RenderVertexBuffer[2].g >> 0x10);
  pSVar3 = g_RenderVertexBuffer + 2;
  piVar4 = (int *)&stack0xffffff9c;
  iVar19 = g_RenderVertexBuffer[2].projected_vertex.transformed_x;
  iVar20 = g_RenderVertexBuffer[2].projected_vertex.transformed_y;
  iVar21 = g_RenderVertexBuffer[2].projected_vertex.transformed_z;
  iVar22 = g_RenderVertexBuffer[2].projected_vertex.inv_z;
  iVar23 = g_RenderVertexBuffer[2].projected_vertex.screen_x;
  iVar24 = g_RenderVertexBuffer[2].projected_vertex.screen_y;
  iVar25 = g_RenderVertexBuffer[2].u;
  iVar26 = g_RenderVertexBuffer[2].v;
  iVar32 = g_RenderVertexBuffer[2].b;
  iVar7 = g_RenderVertexBuffer[2].a;
  for (iVar1 = g_RenderVertexBuffer[2].a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = g_RenderVertexBuffer;
  piVar4 = (int *)&stack0xffffff6c;
  iVar6 = g_RenderVertexBuffer[0].projected_vertex.transformed_x;
  iVar8 = g_RenderVertexBuffer[0].projected_vertex.transformed_y;
  iVar9 = g_RenderVertexBuffer[0].projected_vertex.transformed_z;
  iVar10 = g_RenderVertexBuffer[0].projected_vertex.inv_z;
  iVar11 = g_RenderVertexBuffer[0].projected_vertex.screen_x;
  iVar12 = g_RenderVertexBuffer[0].projected_vertex.screen_y;
  iVar13 = g_RenderVertexBuffer[0].u;
  iVar14 = g_RenderVertexBuffer[0].v;
  iVar15 = g_RenderVertexBuffer[0].r;
  iVar16 = g_RenderVertexBuffer[0].g;
  iVar17 = g_RenderVertexBuffer[0].b;
  iVar18 = g_RenderVertexBuffer[0].a;
  for (iVar1 = g_RenderVertexBuffer[0].a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1_00.projected_vertex.transformed_y = iVar8;
  vertex1_00.projected_vertex.transformed_x = iVar6;
  vertex1_00.projected_vertex.transformed_z = iVar9;
  vertex1_00.projected_vertex.inv_z = iVar10;
  vertex1_00.projected_vertex.screen_x = iVar11;
  vertex1_00.projected_vertex.screen_y = iVar12;
  vertex1_00.u = iVar13;
  vertex1_00.v = iVar14;
  vertex1_00.r = iVar15;
  vertex1_00.g = iVar16;
  vertex1_00.b = iVar17;
  vertex1_00.a = iVar18;
  vertex2_00.projected_vertex.transformed_y = iVar20;
  vertex2_00.projected_vertex.transformed_x = iVar19;
  vertex2_00.projected_vertex.transformed_z = iVar21;
  vertex2_00.projected_vertex.inv_z = iVar22;
  vertex2_00.projected_vertex.screen_x = iVar23;
  vertex2_00.projected_vertex.screen_y = iVar24;
  vertex2_00.u = iVar25;
  vertex2_00.v = iVar26;
  vertex2_00.r._0_1_ = uVar27;
  vertex2_00.r._1_1_ = uVar28;
  vertex2_00.r._2_2_ = uVar29;
  vertex2_00.g._0_2_ = uVar30;
  vertex2_00.g._2_2_ = uVar31;
  vertex2_00.b = iVar32;
  vertex2_00.a = iVar7;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,vertex2_00);
  local_20.x = 0;
  local_20.y = 0;
  local_20.z = iVar2;
  engine_matrix_c_transformToCache_FUN_0050cd70(3,&local_20);
  uVar27 = (byte)g_RenderVertexBuffer[3].r;
  uVar28 = (byte)((uint)g_RenderVertexBuffer[3].r >> 8);
  uVar29 = (ushort)((uint)g_RenderVertexBuffer[3].r >> 0x10);
  uVar30 = (ushort)g_RenderVertexBuffer[3].g;
  uVar31 = (ushort)((uint)g_RenderVertexBuffer[3].g >> 0x10);
  pSVar3 = g_RenderVertexBuffer + 3;
  piVar4 = (int *)&stack0xffffff9c;
  iVar1 = g_RenderVertexBuffer[3].projected_vertex.transformed_x;
  iVar19 = g_RenderVertexBuffer[3].projected_vertex.transformed_y;
  iVar20 = g_RenderVertexBuffer[3].projected_vertex.transformed_z;
  iVar21 = g_RenderVertexBuffer[3].projected_vertex.inv_z;
  iVar22 = g_RenderVertexBuffer[3].projected_vertex.screen_x;
  iVar23 = g_RenderVertexBuffer[3].projected_vertex.screen_y;
  iVar24 = g_RenderVertexBuffer[3].u;
  iVar25 = g_RenderVertexBuffer[3].v;
  iVar26 = g_RenderVertexBuffer[3].b;
  iVar32 = g_RenderVertexBuffer[3].a;
  for (iVar2 = g_RenderVertexBuffer[3].a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = g_RenderVertexBuffer;
  piVar4 = (int *)&stack0xffffff6c;
  iVar7 = g_RenderVertexBuffer[0].projected_vertex.transformed_x;
  iVar6 = g_RenderVertexBuffer[0].projected_vertex.transformed_y;
  iVar8 = g_RenderVertexBuffer[0].projected_vertex.transformed_z;
  iVar9 = g_RenderVertexBuffer[0].projected_vertex.inv_z;
  iVar10 = g_RenderVertexBuffer[0].projected_vertex.screen_x;
  iVar11 = g_RenderVertexBuffer[0].projected_vertex.screen_y;
  iVar12 = g_RenderVertexBuffer[0].u;
  iVar13 = g_RenderVertexBuffer[0].v;
  iVar14 = g_RenderVertexBuffer[0].r;
  iVar15 = g_RenderVertexBuffer[0].g;
  iVar16 = g_RenderVertexBuffer[0].b;
  iVar17 = g_RenderVertexBuffer[0].a;
  for (iVar2 = g_RenderVertexBuffer[0].a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex1_01.projected_vertex.transformed_y = iVar6;
  vertex1_01.projected_vertex.transformed_x = iVar7;
  vertex1_01.projected_vertex.transformed_z = iVar8;
  vertex1_01.projected_vertex.inv_z = iVar9;
  vertex1_01.projected_vertex.screen_x = iVar10;
  vertex1_01.projected_vertex.screen_y = iVar11;
  vertex1_01.u = iVar12;
  vertex1_01.v = iVar13;
  vertex1_01.r = iVar14;
  vertex1_01.g = iVar15;
  vertex1_01.b = iVar16;
  vertex1_01.a = iVar17;
  vertex2_01.projected_vertex.transformed_y = iVar19;
  vertex2_01.projected_vertex.transformed_x = iVar1;
  vertex2_01.projected_vertex.transformed_z = iVar20;
  vertex2_01.projected_vertex.inv_z = iVar21;
  vertex2_01.projected_vertex.screen_x = iVar22;
  vertex2_01.projected_vertex.screen_y = iVar23;
  vertex2_01.u = iVar24;
  vertex2_01.v = iVar25;
  vertex2_01.r._0_1_ = uVar27;
  vertex2_01.r._1_1_ = uVar28;
  vertex2_01.r._2_2_ = uVar29;
  vertex2_01.g._0_2_ = uVar30;
  vertex2_01.g._2_2_ = uVar31;
  vertex2_01.b = iVar26;
  vertex2_01.a = iVar32;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_01,vertex2_01);
  iVar2 = 0;
  pSVar3 = g_RenderVertexBuffer;
  do {
    if ((int)(pSVar3[1].projected_vertex.screen_x & -0x80000000) == 0) {
      iVar1 = pSVar3[1].projected_vertex.screen_x;
      iVar19 = pSVar3[1].projected_vertex.screen_y;
      _sprintf(local_34,"%c");
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                (g_EditorFont,local_34,(int)(short)((uint)iVar1 >> 0x10),
                 (int)(short)((uint)iVar19 >> 0x10),g_AxisLabelTextColor,-1);
    }
    iVar2 = iVar2 + 1;
    pSVar3 = pSVar3 + 1;
  } while (iVar2 < 3);
  return;
}
