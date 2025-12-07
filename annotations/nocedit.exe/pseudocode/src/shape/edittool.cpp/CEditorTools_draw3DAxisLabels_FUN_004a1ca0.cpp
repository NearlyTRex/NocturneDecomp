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
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  float in_stack_00000010;
  int in_stack_00000014;
  SRenderVertex *in_stack_ffffff78;
  SRenderVertex *in_stack_ffffff7c;
  SRenderVertex *in_stack_ffffff80;
  SRenderVertex *in_stack_ffffff84;
  SRenderVertex *in_stack_ffffff88;
  SRenderVertex *in_stack_ffffff8c;
  int aiStack_58 [2];
  int aiStack_50 [2];
  int aiStack_48 [3];
  uint uStack_3c;
  CVector3i *inputPoint;
  
  bVar7 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    uStack_3c = 0x4a1e2f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  uStack_3c = 0x4a1ccd;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  g_ActiveRenderColor = in_stack_00000014;
  inputPoint = (CVector3i *)0x4a1d00;
  crt_math_c_round_FUN_005fe6b0((double)(in_stack_00000010 * (float)256));
  uStack_3c = 0x4a1d0a;
  engine_matrix_c_transformToCache_FUN_0050cd70(0,inputPoint);
  engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)&stack0xffffffe8);
  pSVar5 = g_RenderVertexBuffer + 1;
  piVar6 = aiStack_58;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  pSVar5 = g_RenderVertexBuffer;
  piVar6 = (int *)&stack0xffffff78;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff78,in_stack_ffffff7c);
  engine_matrix_c_transformToCache_FUN_0050cd70(2,(CVector3i *)&stack0xfffffff0);
  pSVar5 = g_RenderVertexBuffer + 2;
  piVar6 = aiStack_50;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  pSVar5 = g_RenderVertexBuffer;
  piVar6 = (int *)&stack0xffffff80;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff80,in_stack_ffffff84);
  engine_matrix_c_transformToCache_FUN_0050cd70(3,(CVector3i *)&stack0xfffffff8);
  pSVar5 = g_RenderVertexBuffer + 3;
  piVar6 = aiStack_48;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = 0x688044;
  pSVar5 = g_RenderVertexBuffer;
  piVar6 = (int *)&stack0xffffff88;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff88,in_stack_ffffff8c);
  iVar3 = 0;
  do {
    if ((*(byte *)(iVar4 + 0x13) & 0x80) == 0) {
      iVar1 = *(int *)(iVar4 + 0x10);
      iVar2 = *(int *)(iVar4 + 0x14);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffec,"%c");
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (g_EditorFont,&stack0xfffffff4,iVar1 >> 0x10,iVar2 >> 0x10,g_AxisLabelTextColor,-1);
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x30;
  } while (iVar3 < 3);
  return;
}
