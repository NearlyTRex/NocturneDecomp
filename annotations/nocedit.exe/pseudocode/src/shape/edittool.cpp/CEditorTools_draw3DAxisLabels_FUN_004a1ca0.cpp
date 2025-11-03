// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
// Address Range: [[004a1ca0, 004a1e8d]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)
// Cross-references:
//   core_cloth.cpp_FUN_0043b7e0 (0043b7e0) at 0043b9e0 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509c60 (00509c60) at 00509cff [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 00509de2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581d79 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583539 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005975b4 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 (0059b640) at 0059b7c1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 (004a1e90) at 004a1f20 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   TerminatedCString g_AxisLabelChars
//   undefined4 DAT_006235ac
//   TerminatedCString s_c_006235af
//   double g_AxisScaleMultiplier = 256
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 DAT_00688044
//   undefined4 DAT_00688048
//   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x
//   undefined4 DAT_00688054+3
//   undefined4 DAT_00688058
//   undefined4 DAT_00688074
//   undefined4 g_RenderVertexBuffer[2].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[2].projected_vertex.screen_x
//   undefined4 DAT_00688084+3
//   undefined4 g_RenderVertexBuffer[2].projected_vertex.screen_y
//   undefined4 DAT_006880a4
//   undefined4 g_RenderVertexBuffer[3].projected_vertex.transformed_y
//   CBitFont* g_EditorFont
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   int g_AxisLabelTextColor
//   int g_ActiveRenderColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_matrix.c_transformToCache_FUN_0050cd70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
          (CEditorTools *this_ptr,float scale_factor,int text_color)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  int in_stack_00000014;
  SRenderVertex *in_stack_ffffff80;
  SRenderVertex *in_stack_ffffff84;
  SRenderVertex *in_stack_ffffff88;
  SRenderVertex *in_stack_ffffff8c;
  SRenderVertex *in_stack_ffffff90;
  SRenderVertex *in_stack_ffffff94;
  int aiStack_50 [2];
  int aiStack_48 [2];
  int aiStack_40 [2];
  CVector3i *in_stack_ffffffd4;
  
  bVar7 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    aiStack_40[1] = 0x4a1e2f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  aiStack_40[1] = 0x4a1ccd;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  g_ActiveRenderColor = in_stack_00000014;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,&stack0xffffffe8));
  engine_matrix_c_transformToCache_FUN_0050cd70(0,in_stack_ffffffd4);
  engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)&stack0xfffffff0);
  pSVar5 = g_RenderVertexBuffer + 1;
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
  engine_matrix_c_transformToCache_FUN_0050cd70(2,(CVector3i *)&stack0xfffffff8);
  pSVar5 = g_RenderVertexBuffer + 2;
  piVar6 = aiStack_48;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  pSVar5 = g_RenderVertexBuffer;
  piVar6 = (int *)&stack0xffffff88;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff88,in_stack_ffffff8c);
  engine_matrix_c_transformToCache_FUN_0050cd70(3,(CVector3i *)&stack0x00000000);
  pSVar5 = g_RenderVertexBuffer + 3;
  piVar6 = aiStack_40;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = 0x688044;
  pSVar5 = g_RenderVertexBuffer;
  piVar6 = (int *)&stack0xffffff90;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff90,in_stack_ffffff94);
  iVar3 = 0;
  do {
    if ((*(byte *)(iVar4 + 0x13) & 0x80) == 0) {
      iVar1 = *(int *)(iVar4 + 0x10);
      iVar2 = *(int *)(iVar4 + 0x14);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffff4,"%c");
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (g_EditorFont,&stack0xfffffffc,iVar1 >> 0x10,iVar2 >> 0x10,g_AxisLabelTextColor,-1);
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x30;
  } while (iVar3 < 3);
  return;
}


// Assembly code:
// 004a1ca0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// 004a1ca1: PUSH ESI
// 004a1ca2: PUSH EDI
// 004a1ca3: PUSH EBP
// 004a1ca4: SUB ESP,0x24
// 004a1ca7: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 004a1cae: JZ 0x004a1e0f
//   XREF to: 004a1e0f (CONDITIONAL_JUMP)
// 004a1cb4: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004a1cb4
//   XREF to: 02cf1cd0 (READ)
// 004a1cb9: PUSH 0x6a
// 004a1cbb: MOV EBX,dword ptr [EAX + 0x3168]
// 004a1cc1: PUSH EAX
// 004a1cc2: MOV dword ptr [0x02cf2668],EBX
//   XREF to: 02cf2668 (WRITE)
// 004a1cc8: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004a1ccd: ADD ESP,0x8
// 004a1cd0: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004a1cd4: FMUL double ptr [0x006235b6]
//   XREF to: 006235b6 (READ)
// 004a1cda: XOR ESI,ESI
// 004a1cdc: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 004a1ce1: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 004a1ce5: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004a1ce9: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 004a1ced: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a1cf2: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x20] (DATA)
// 004a1cf6: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004a1cfa: PUSH EAX
// 004a1cfb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004a1d00: PUSH ESI
// 004a1d01: FISTP dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (WRITE)
// 004a1d05: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a1d0a: ADD ESP,0x8
// 004a1d0d: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 004a1d11: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004a1d15: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x20] (DATA)
// 004a1d19: PUSH EAX
// 004a1d1a: PUSH 0x1
// 004a1d1c: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 004a1d20: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004a1d24: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a1d29: ADD ESP,0x8
// 004a1d2c: MOV ESI,0x688044
//   XREF to: 00688044 (DATA)
// 004a1d31: SUB ESP,0x30
// 004a1d34: MOV ECX,0xc
// 004a1d39: MOV EDI,ESP
// 004a1d3b: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688044 (READ)
//   XREF to: 00688048 (READ)
// 004a1d3d: SUB ESP,0x30
// 004a1d40: MOV ECX,0xc
// 004a1d45: MOV ESI,0x688014
//   XREF to: 00688014 (DATA)
// 004a1d4a: MOV EDI,ESP
// 004a1d4c: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (READ)
//   XREF to: 00688018 (READ)
// 004a1d4e: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 004a1d53: ADD ESP,0x60
// 004a1d56: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 004a1d5a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a1d5e: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x20] (DATA)
// 004a1d62: PUSH EAX
// 004a1d63: XOR ECX,ECX
// 004a1d65: PUSH 0x2
// 004a1d67: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004a1d6b: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004a1d6f: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a1d74: ADD ESP,0x8
// 004a1d77: MOV ESI,0x688074
//   XREF to: 00688074 (DATA)
// 004a1d7c: SUB ESP,0x30
// 004a1d7f: MOV ECX,0xc
// 004a1d84: MOV EDI,ESP
// 004a1d86: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688074 (READ)
//   XREF to: 00688078 (READ)
// 004a1d88: SUB ESP,0x30
// 004a1d8b: MOV ECX,0xc
// 004a1d90: MOV ESI,0x688014
//   XREF to: 00688014 (DATA)
// 004a1d95: MOV EDI,ESP
// 004a1d97: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (READ)
//   XREF to: 00688018 (READ)
// 004a1d99: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 004a1d9e: ADD ESP,0x60
// 004a1da1: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 004a1da5: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004a1da9: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x20] (DATA)
// 004a1dad: PUSH EAX
// 004a1dae: XOR EBX,EBX
// 004a1db0: XOR ESI,ESI
// 004a1db2: PUSH 0x3
// 004a1db4: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004a1db8: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a1dbc: CALL engine_matrix.c_transformToCache_FUN_0050cd70
//   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
// 004a1dc1: ADD ESP,0x8
// 004a1dc4: MOV ESI,0x6880a4
//   XREF to: 006880a4 (DATA)
// 004a1dc9: SUB ESP,0x30
// 004a1dcc: MOV ECX,0xc
// 004a1dd1: MOV EDI,ESP
// 004a1dd3: MOV EBX,0x688014
//   XREF to: 00688014 (DATA)
// 004a1dd8: MOVSD.REP ES:EDI,ESI
//   XREF to: 006880a4 (READ)
//   XREF to: 006880a8 (READ)
// 004a1dda: SUB ESP,0x30
// 004a1ddd: MOV ECX,0xc
// 004a1de2: MOV ESI,0x688014
//   XREF to: 00688014 (DATA)
// 004a1de7: MOV EDI,ESP
// 004a1de9: ADD EBX,0x30
//   XREF to: 00688044 (PARAM)
// 004a1dec: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (READ)
//   XREF to: 00688018 (READ)
// 004a1dee: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 004a1df3: ADD ESP,0x60
// 004a1df6: XOR ESI,ESI
// 004a1df8: TEST byte ptr [EBX + 0x13],0x80
//   Label: LAB_004a1df8
//   XREF to: 00688057 (READ)
//   XREF to: 00688087 (READ)
// 004a1dfc: JZ 0x004a1e37
//   XREF to: 004a1e37 (CONDITIONAL_JUMP)
// 004a1dfe: INC ESI
//   Label: LAB_004a1dfe
// 004a1dff: ADD EBX,0x30
//   XREF to: 00688074 (PARAM)
// 004a1e02: CMP ESI,0x3
// 004a1e05: JL 0x004a1df8
//   XREF to: 004a1df8 (CONDITIONAL_JUMP)
// 004a1e07: ADD ESP,0x24
// 004a1e0a: POP EBP
// 004a1e0b: POP EDI
// 004a1e0c: POP ESI
// 004a1e0d: POP EBX
// 004a1e0e: RET
// 004a1e0f: MOV ECX,0x622eae
//   Label: LAB_004a1e0f
//   XREF to: 00622eae (PARAM)
// 004a1e14: MOV EBX,0x8d
// 004a1e19: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 004a1e1e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a1e24: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a1e2a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a1e2f: ADD ESP,0x4
// 004a1e32: JMP 0x004a1cb4
//   XREF to: 004a1cb4 (UNCONDITIONAL_JUMP)
// 004a1e37: XOR EAX,EAX
//   Label: LAB_004a1e37
// 004a1e39: MOV AL,byte ptr [ESI + 0x6235ab]
//   XREF to: 006235ab (READ)
//   XREF to: 006235ac (READ)
// 004a1e3f: PUSH EAX
// 004a1e40: PUSH 0x6235af
//   XREF to: 006235af (DATA)
// 004a1e45: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 004a1e49: PUSH EAX
// 004a1e4a: MOV EBP,dword ptr [EBX + 0x10]
//   XREF to: 00688054 (READ)
//   XREF to: 00688084 (READ)
// 004a1e4d: MOV EDI,dword ptr [EBX + 0x14]
//   XREF to: 00688058 (READ)
//   XREF to: 00688088 (READ)
// 004a1e50: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a1e55: ADD ESP,0xc
// 004a1e58: PUSH 0xffff
// 004a1e5d: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004a1e62: ADD ESP,0x4
// 004a1e65: PUSH -0x1
// 004a1e67: MOV EAX,[0x02cf2ac4]
//   XREF to: 02cf2ac4 (READ)
// 004a1e6c: PUSH EAX
// 004a1e6d: SAR EDI,0x10
// 004a1e70: PUSH EDI
// 004a1e71: SAR EBP,0x10
// 004a1e74: PUSH EBP
// 004a1e75: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x34] (DATA)
// 004a1e79: PUSH EAX
// 004a1e7a: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a1e80: PUSH EDX
// 004a1e81: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004a1e86: ADD ESP,0x18
// 004a1e89: JMP 0x004a1dfe
//   XREF to: 004a1dfe (UNCONDITIONAL_JUMP)
