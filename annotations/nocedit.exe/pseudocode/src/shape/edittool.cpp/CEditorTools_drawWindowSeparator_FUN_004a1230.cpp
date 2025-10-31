// Name: shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
// Address: 004a1230
// Address Range: [[004a1230, 004a132d]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(CEditorTools * editor_tools, int line_position)
// Cross-references:
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a4d62 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e316 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dced [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_006234e2
//   TerminatedCString s_CEditorTools_paintWindow_006234f8
//   int g_WindowHeight = 0xc8
//   int g_WindowStackCount
//   SWindow[5] g_WindowStack
//   undefined4 DAT_02cf1ce4
//   undefined4 DAT_02cf1ce8
//   undefined4 DAT_02cf1cec
//   int g_WindowBorderColor1
//   int g_WindowBorderColor2
//   int g_ClipTop
//   int g_ActiveRenderColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_drawHLine_FUN_00402ee0
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
          (CEditorTools *editor_tools,int line_position)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000010;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8c6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar2 = g_ActiveRenderColor;
  iVar1 = g_ClipTop;
  iVar5 = g_WindowStackCount + -1;
  g_ClipTop = g_WindowStack[iVar5].top;
  iVar3 = g_WindowHeight / 0x60;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar3 = g_WindowStack[iVar5].bottom -
          ((in_stack_00000010 + 1) * iVar3 + in_stack_00000010 * iVar4);
  g_ActiveRenderColor = g_WindowBorderColor1;
  engine_2d_c_drawHLine_FUN_00402ee0
            (g_WindowStack[iVar5].left + 1,iVar3,g_WindowStack[iVar5].right + -2);
  if (g_WindowBorderColor1 == g_WindowBorderColor2) {
    g_ActiveRenderColor = iVar2;
    g_ClipTop = iVar1;
    return;
  }
  g_ActiveRenderColor = g_WindowBorderColor2;
  engine_2d_c_drawHLine_FUN_00402ee0
            (g_WindowStack[iVar5].left + 1,iVar3 + -1,g_WindowStack[iVar5].right + -2);
  g_ActiveRenderColor = iVar2;
  g_ClipTop = iVar1;
  return;
}


// Assembly code:
// 004a1230: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
// 004a1231: PUSH ESI
// 004a1232: PUSH EDI
// 004a1233: PUSH EBP
// 004a1234: CMP dword ptr [0x02cf1cdc],0x1
//   XREF to: 02cf1cdc (READ)
// 004a123b: JGE 0x004a1260
//   XREF to: 004a1260 (CONDITIONAL_JUMP)
// 004a123d: MOV ECX,0x6234e2
//   XREF to: 006234e2 (PARAM)
// 004a1242: MOV EBX,0x8c6
// 004a1247: PUSH 0x6234f8
//   XREF to: 006234f8 (DATA)
// 004a124c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a1252: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a1258: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a125d: ADD ESP,0x4
// 004a1260: MOV EBX,dword ptr [0x02cf1cdc]
//   Label: LAB_004a1260
//   XREF to: 02cf1cdc (READ)
// 004a1266: DEC EBX
// 004a1267: MOV EAX,EBX
// 004a1269: SHL EAX,0x4
// 004a126c: SUB EAX,EBX
// 004a126e: SHL EAX,0x2
// 004a1271: ADD EAX,EBX
// 004a1273: MOV EBX,0x2cf1ce0
//   XREF to: 02cf1ce0 (DATA)
// 004a1278: SHL EAX,0x3
// 004a127b: ADD EBX,EAX
// 004a127d: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 02cf1ce4 (DATA)
// 004a1280: MOV EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a1286: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 004a128b: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004a1290: MOV EDX,EAX
// 004a1292: MOV ESI,0x60
// 004a1297: SAR EDX,0x1f
// 004a129a: IDIV ESI
// 004a129c: PUSH 0x0
// 004a129e: MOV EBP,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 004a12a4: MOV ESI,EAX
// 004a12a6: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 004a12ab: ADD ESP,0x4
// 004a12ae: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a12b2: IMUL EDX,EAX
// 004a12b5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a12b9: INC EAX
// 004a12ba: IMUL EAX,ESI
// 004a12bd: MOV ESI,dword ptr [EBX + 0xc]
//   XREF to: 02cf1cec (DATA)
// 004a12c0: ADD EAX,EDX
// 004a12c2: SUB ESI,EAX
// 004a12c4: MOV EAX,[0x02cf2a7c]
//   XREF to: 02cf2a7c (READ)
// 004a12c9: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a12ce: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 02cf1ce8 (DATA)
// 004a12d1: SUB EAX,0x2
// 004a12d4: PUSH EAX
// 004a12d5: MOV EAX,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a12d7: PUSH ESI
// 004a12d8: INC EAX
// 004a12d9: PUSH EAX
// 004a12da: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a12df: MOV EAX,[0x02cf2a7c]
//   XREF to: 02cf2a7c (READ)
// 004a12e4: MOV EDX,dword ptr [0x02cf2a80]
//   XREF to: 02cf2a80 (READ)
// 004a12ea: ADD ESP,0xc
// 004a12ed: CMP EAX,EDX
// 004a12ef: JNZ 0x004a1302
//   XREF to: 004a1302 (CONDITIONAL_JUMP)
// 004a12f1: MOV dword ptr [0x02d02570],EBP
//   XREF to: 02d02570 (WRITE)
// 004a12f7: MOV dword ptr [0x02d0255c],EDI
//   XREF to: 02d0255c (WRITE)
// 004a12fd: POP EBP
// 004a12fe: POP EDI
// 004a12ff: POP ESI
// 004a1300: POP EBX
// 004a1301: RET
// 004a1302: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_004a1302
//   XREF to: 02cf1ce8 (DATA)
// 004a1305: SUB EAX,0x2
// 004a1308: PUSH EAX
// 004a1309: DEC ESI
// 004a130a: MOV EAX,dword ptr [EBX]
//   XREF to: 02cf1ce0 (DATA)
// 004a130c: PUSH ESI
// 004a130d: INC EAX
// 004a130e: PUSH EAX
// 004a130f: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004a1315: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a131a: ADD ESP,0xc
// 004a131d: MOV dword ptr [0x02d02570],EBP
//   XREF to: 02d02570 (WRITE)
// 004a1323: MOV dword ptr [0x02d0255c],EDI
//   XREF to: 02d0255c (WRITE)
// 004a1329: POP EBP
// 004a132a: POP EDI
// 004a132b: POP ESI
// 004a132c: POP EBX
// 004a132d: RET
