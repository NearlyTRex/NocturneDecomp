// Name: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
// Address: 004a0f80
// Address Range: [[004a0f80, 004a1221]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
// Cross-references:
//   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 (005107c0) at 0051085f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 (0049e870) at 0049e8cc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fc5a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a05e1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a4d51 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e305 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ef9e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dcdc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   TerminatedCString s_shape_edittool_cpp_0062348d
//   TerminatedCString s_CEditorTools_paintWindow_006234a3
//   undefined4 DAT_006234e0
//   CBitFont* g_EditorFont
//   int g_WindowStackCount
//   SWindow[5] g_WindowStack
//   undefined4 DAT_02cf1ce4
//   undefined4 DAT_02cf1ce8
//   undefined4 DAT_02cf1cec
//   undefined4 DAT_02cf1d18
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   undefined4 DAT_02cf2a78
//   int g_WindowBorderColor1
//   int g_WindowBorderColor2
//   int g_TitleBarColor
//   int g_WindowFillColor
//   int g_ClipTop
//   int g_ActiveRenderColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_2d.c_drawVLine_FUN_00402ff0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_2d.c_fillRectWithBorder_FUN_00403200
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   engine_matrix.c_popViewport_FUN_0050e480
//   engine_matrix.c_pushViewport_FUN_0050e320
//   shape_edittool.cpp_paintWindowBackground_FUN_0049e590

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools *this_ptr)

{
  char *text;
  int y_pos;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SWindow *pSVar6;
  CDemonRenderer *in_stack_0000000c;
  int in_stack_00000010;
  int color_mode;
  int in_stack_00000018;
  int in_stack_00000030;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x887;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar2 = g_WindowStackCount + -1;
  pSVar6 = g_WindowStack + iVar2;
  shape_edittool_cpp_paintWindowBackground_FUN_0049e590();
  engine_matrix_c_pushViewport_FUN_0050e320
            (pSVar6->left,g_WindowStack[iVar2].top,(g_WindowStack[iVar2].right - pSVar6->left) + 1,
             (g_WindowStack[iVar2].bottom - g_WindowStack[iVar2].top) + 1);
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (pSVar6->left + 1,g_WindowStack[iVar2].top + 1,g_WindowStack[iVar2].right + -2,
             g_WindowStack[iVar2].bottom + -2,DAT_02cf2a78,g_WindowBorderColor1);
  g_ActiveRenderColor = g_WindowBorderColor2;
  engine_2d_c_drawHLine_FUN_00402ee0
            (pSVar6->left,g_WindowStack[iVar2].bottom + -1,g_WindowStack[iVar2].right + -1);
  engine_2d_c_drawVLine_FUN_00402ff0
            (g_WindowStack[iVar2].right + -1,g_WindowStack[iVar2].top,
             g_WindowStack[iVar2].bottom + -1);
  engine_matrix_c_popViewport_FUN_0050e480(in_stack_0000000c);
  iVar1 = g_ClipTop;
  if (g_WindowStack[iVar2].text_buffer[0] == '\0') {
    g_ActiveRenderColor = in_stack_00000010;
    return;
  }
  g_ClipTop = g_WindowStack[iVar2].top;
  iVar4 = g_FontCharacterWidth / 2 + g_WindowStack[iVar2].top + -1;
  iVar5 = g_FontCharacterWidth * 5 >> 0x1f;
  engine_2d_c_fillRectColor_FUN_00403170
            (pSVar6->left + 1,iVar4,g_WindowStack[iVar2].right + -2,
             ((int)((g_FontCharacterWidth * 5 + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2) + iVar4
             + -1,g_WindowFillColor);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  y_pos = g_TitleBarColor;
  color_mode = -1;
  text = g_WindowStack[iVar2].text_buffer;
  iVar4 = pSVar6->left;
  iVar5 = g_WindowStack[iVar2].right;
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,text);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_EditorFont,text,((iVar4 + iVar5) - iVar3) / 2,y_pos,color_mode,in_stack_00000018);
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,text);
  iVar4 = g_FontCharacterWidth + iVar4;
  iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,&DAT_006234e0);
  if (iVar4 < iVar5 + g_FontCharacterWidth) {
    iVar4 = iVar5 + g_FontCharacterWidth;
  }
  g_ActiveRenderColor = g_WindowBorderColor1;
  iVar4 = iVar4 + g_WindowStack[iVar2].top;
  engine_2d_c_drawHLine_FUN_00402ee0(pSVar6->left + 1,iVar4,g_WindowStack[iVar2].right + -2);
  if (g_WindowBorderColor1 != g_WindowBorderColor2) {
    g_ActiveRenderColor = g_WindowBorderColor2;
    engine_2d_c_drawHLine_FUN_00402ee0(pSVar6->left + 1,iVar4 + -1,g_WindowStack[iVar2].right + -2);
  }
  g_ClipTop = iVar1;
  g_ActiveRenderColor = in_stack_00000030;
  return;
}


// Assembly code:
// 004a0f80: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
// 004a0f81: PUSH ESI
// 004a0f82: PUSH EDI
// 004a0f83: PUSH EBP
// 004a0f84: SUB ESP,0x4
// 004a0f87: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 004a0f8e: JZ 0x004a10a4
//   XREF to: 004a10a4 (CONDITIONAL_JUMP)
// 004a0f94: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004a0f94
//   XREF to: 02cf1cd0 (READ)
// 004a0f99: PUSH 0x6a
// 004a0f9b: MOV EDX,dword ptr [EAX + 0x3168]
// 004a0fa1: PUSH EAX
// 004a0fa2: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 004a0fa8: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004a0fad: MOV ESI,dword ptr [0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 004a0fb3: ADD ESP,0x8
// 004a0fb6: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 004a0fbb: CMP ESI,0x1
// 004a0fbe: JGE 0x004a0fe3
//   XREF to: 004a0fe3 (CONDITIONAL_JUMP)
// 004a0fc0: MOV EDI,0x62348d
//   XREF to: 0062348d (DATA)
// 004a0fc5: MOV EBP,0x887
// 004a0fca: PUSH 0x6234a3
//   XREF to: 006234a3 (DATA)
// 004a0fcf: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004a0fd5: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004a0fdb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a0fe0: ADD ESP,0x4
// 004a0fe3: MOV EAX,[0x02d02570]
//   Label: LAB_004a0fe3
//   XREF to: 02d02570 (READ)
// 004a0fe8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004a0feb: MOV EAX,[0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 004a0ff0: DEC EAX
// 004a0ff1: MOV EBX,EAX
// 004a0ff3: SHL EBX,0x4
// 004a0ff6: SUB EBX,EAX
// 004a0ff8: SHL EBX,0x2
// 004a0ffb: ADD EBX,EAX
// 004a0ffd: SHL EBX,0x3
// 004a1000: ADD EBX,0x2cf1ce0
//   XREF to: 02cf1ce0 (DATA)
// 004a1006: CALL shape_edittool.cpp_paintWindowBackground_FUN_0049e590
//   XREF to: 0049e590 (UNCONDITIONAL_CALL)
// 004a100b: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 02cf1cec (DATA)
// 004a100e: MOV EDX,dword ptr [EBX + 0x4]
//   XREF to: 02cf1ce4 (DATA)
// 004a1011: SUB EAX,EDX
// 004a1013: INC EAX
// 004a1014: MOV ECX,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a1016: PUSH EAX
// 004a1017: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a101a: SUB EAX,ECX
// 004a101c: INC EAX
// 004a101d: PUSH EAX
// 004a101e: PUSH EDX
// 004a101f: PUSH ECX
// 004a1020: CALL engine_matrix.c_pushViewport_FUN_0050e320
//   XREF to: 0050e320 (UNCONDITIONAL_CALL)
// 004a1025: ADD ESP,0x10
// 004a1028: MOV EBP,dword ptr [0x02cf2a7c]
//   XREF to: 02cf2a7c (READ)
// 004a102e: PUSH EBP
// 004a102f: MOV EAX,[0x02cf2a78]
//   XREF to: 02cf2a78 (READ)
// 004a1034: PUSH EAX
// 004a1035: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 02cf1cec (DATA)
// 004a1038: SUB EAX,0x2
// 004a103b: PUSH EAX
// 004a103c: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a103f: SUB EAX,0x2
// 004a1042: PUSH EAX
// 004a1043: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 02cf1ce4 (DATA)
// 004a1046: INC EAX
// 004a1047: PUSH EAX
// 004a1048: MOV EAX,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a104a: INC EAX
// 004a104b: PUSH EAX
// 004a104c: CALL engine_2d.c_fillRectWithBorder_FUN_00403200
//   XREF to: 00403200 (UNCONDITIONAL_CALL)
// 004a1051: MOV EAX,[0x02cf2a80]
//   XREF to: 02cf2a80 (READ)
// 004a1056: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a105b: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a105e: ADD ESP,0x18
// 004a1061: DEC EAX
// 004a1062: PUSH EAX
// 004a1063: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 02cf1cec (DATA)
// 004a1066: DEC EAX
// 004a1067: PUSH EAX
// 004a1068: MOV EDX,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a106a: PUSH EDX
// 004a106b: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a1070: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 02cf1cec (DATA)
// 004a1073: ADD ESP,0xc
// 004a1076: DEC EAX
// 004a1077: PUSH EAX
// 004a1078: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 02cf1ce4 (DATA)
// 004a107b: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a107e: PUSH ECX
// 004a107f: DEC EAX
// 004a1080: PUSH EAX
// 004a1081: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 004a1086: ADD ESP,0xc
// 004a1089: CALL engine_matrix.c_popViewport_FUN_0050e480
//   XREF to: 0050e480 (UNCONDITIONAL_CALL)
// 004a108e: CMP byte ptr [EBX + 0x38],0x0
//   XREF to: 02cf1d18 (DATA)
// 004a1092: JNZ 0x004a10cc
//   XREF to: 004a10cc (CONDITIONAL_JUMP)
// 004a1094: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004a1097: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a109c: ADD ESP,0x4
//   Label: LAB_004a109c
// 004a109f: POP EBP
// 004a10a0: POP EDI
// 004a10a1: POP ESI
// 004a10a2: POP EBX
// 004a10a3: RET
// 004a10a4: MOV ECX,0x622eae
//   Label: LAB_004a10a4
//   XREF to: 00622eae (PARAM)
// 004a10a9: MOV EBX,0x8d
// 004a10ae: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 004a10b3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a10b9: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a10bf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a10c4: ADD ESP,0x4
// 004a10c7: JMP 0x004a0f94
//   XREF to: 004a0f94 (UNCONDITIONAL_JUMP)
// 004a10cc: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_004a10cc
//   XREF to: 02cf1ce4 (DATA)
// 004a10cf: MOV EBP,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a10d5: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 004a10da: MOV EAX,[0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a10df: MOV EDX,EAX
// 004a10e1: SAR EDX,0x1f
// 004a10e4: SUB EAX,EDX
// 004a10e6: SAR EAX,0x1
// 004a10e8: ADD EAX,dword ptr [EBX + 0x4]
//   XREF to: 02cf1ce4 (DATA)
// 004a10eb: MOV EDX,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a10f1: LEA ESI,[EAX + -0x1]
// 004a10f4: LEA EAX,[EDX*0x4 + 0x0]
// 004a10fb: ADD EDX,EAX
// 004a10fd: MOV EAX,EDX
// 004a10ff: SAR EDX,0x1f
// 004a1102: SHL EDX,0x2
// 004a1105: SBB EAX,EDX
// 004a1107: SAR EAX,0x2
// 004a110a: MOV EDI,dword ptr [0x02cf2a88]
//   XREF to: 02cf2a88 (READ)
// 004a1110: ADD EAX,ESI
// 004a1112: PUSH EDI
// 004a1113: DEC EAX
// 004a1114: PUSH EAX
// 004a1115: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a1118: SUB EAX,0x2
// 004a111b: PUSH EAX
// 004a111c: MOV EAX,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a111e: PUSH ESI
// 004a111f: INC EAX
// 004a1120: PUSH EAX
// 004a1121: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004a1126: ADD ESP,0x14
// 004a1129: PUSH 0xffff
// 004a112e: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004a1133: ADD ESP,0x4
// 004a1136: PUSH -0x1
// 004a1138: MOV EAX,[0x02cf2a84]
//   XREF to: 02cf2a84 (READ)
// 004a113d: PUSH EAX
// 004a113e: MOV EAX,[0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a1143: MOV EDX,EAX
// 004a1145: SAR EDX,0x1f
// 004a1148: SUB EAX,EDX
// 004a114a: SAR EAX,0x1
// 004a114c: ADD EAX,dword ptr [EBX + 0x4]
//   XREF to: 02cf1ce4 (DATA)
// 004a114f: PUSH EAX
// 004a1150: LEA ESI,[EBX + 0x38]
// 004a1153: MOV EDI,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a1155: PUSH ESI
// 004a1156: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a115b: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a115e: PUSH EAX
// 004a115f: ADD EDI,ECX
// 004a1161: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004a1166: MOV EDX,EDI
// 004a1168: SUB EDX,EAX
// 004a116a: MOV EAX,EDX
// 004a116c: SAR EDX,0x1f
// 004a116f: SUB EAX,EDX
// 004a1171: SAR EAX,0x1
// 004a1173: ADD ESP,0x8
// 004a1176: PUSH EAX
// 004a1177: PUSH ESI
// 004a1178: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a117e: PUSH EDX
// 004a117f: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004a1184: ADD ESP,0x18
// 004a1187: PUSH ESI
// 004a1188: MOV ECX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a118e: PUSH ECX
// 004a118f: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 004a1194: ADD ESP,0x8
// 004a1197: PUSH 0x6234e0
//   XREF to: 006234e0 (DATA)
// 004a119c: MOV EDI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a11a2: MOV ESI,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a11a8: PUSH EDI
// 004a11a9: ADD ESI,EAX
// 004a11ab: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 004a11b0: ADD EAX,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a11b6: ADD ESP,0x8
// 004a11b9: CMP ESI,EAX
// 004a11bb: JGE 0x004a11bf
//   XREF to: 004a11bf (CONDITIONAL_JUMP)
// 004a11bd: MOV ESI,EAX
// 004a11bf: MOV EAX,[0x02cf2a7c]
//   Label: LAB_004a11bf
//   XREF to: 02cf2a7c (READ)
// 004a11c4: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a11c9: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a11cc: SUB EAX,0x2
// 004a11cf: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 02cf1ce4 (DATA)
// 004a11d2: PUSH EAX
// 004a11d3: ADD ESI,ECX
// 004a11d5: MOV EAX,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a11d7: PUSH ESI
// 004a11d8: INC EAX
// 004a11d9: PUSH EAX
// 004a11da: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a11df: MOV EAX,[0x02cf2a7c]
//   XREF to: 02cf2a7c (READ)
// 004a11e4: MOV EDI,dword ptr [0x02cf2a80]
//   XREF to: 02cf2a80 (READ)
// 004a11ea: ADD ESP,0xc
// 004a11ed: CMP EAX,EDI
// 004a11ef: JZ 0x004a120c
//   XREF to: 004a120c (CONDITIONAL_JUMP)
// 004a11f1: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a11f4: SUB EAX,0x2
// 004a11f7: PUSH EAX
// 004a11f8: DEC ESI
// 004a11f9: MOV EAX,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a11fb: PUSH ESI
// 004a11fc: INC EAX
// 004a11fd: PUSH EAX
// 004a11fe: MOV dword ptr [0x02d02570],EDI
//   XREF to: 02d02570 (WRITE)
// 004a1204: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a1209: ADD ESP,0xc
// 004a120c: MOV dword ptr [0x02d0255c],EBP
//   Label: LAB_004a120c
//   XREF to: 02d0255c (WRITE)
// 004a1212: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004a1215: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a121a: ADD ESP,0x4
// 004a121d: POP EBP
// 004a121e: POP EDI
// 004a121f: POP ESI
// 004a1220: POP EBX
// 004a1221: RET
