// Name: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
// Address: 0049e130
// Address Range: [[0049e130, 0049e404]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130(char * title, char * message, int color)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 (0049e740) at 0049e777 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 (0049e6a0) at 0049e6d7 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 (0049e6f0) at 0049e727 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   TerminatedCString s_Cancel_00622faa
//   TerminatedCString s_Cancel_00622fb1
//   TerminatedCString s_OK_00622fb8
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowHeight = 0xc8
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130(char *title,char *message,int color)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  char *in_stack_00000014;
  char *in_stack_00000020;
  int in_stack_00000054;
  int iStack_dc;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  iVar2 = g_WindowHeight / 0x60;
  shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  iVar3 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar3 = iVar2 * 2 + iVar3;
  engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,in_stack_00000014);
  iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,message);
  iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,message);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(int)(message + g_FontCharacterHeight * 4),
             iVar5 + g_FontCharacterWidth * 2 + iVar3,in_stack_00000020,0);
  shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  iVar2 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar2 = (g_ClipBottom - iVar2) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)&stack0xffffff20);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            ((CEdButton *)&iStack_dc,iVar2,color,iVar2 + in_stack_00000010 + -1,g_ClipBottom,
             "OK");
  iStack_dc = 0x49e2de;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  while( true ) {
    bVar1 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if ((CONCAT31(extraout_var,bVar1) != 0) ||
       (iVar2 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830((CEdButton *)&stack0xffffff30),
       iVar2 != 0)) break;
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    iStack_dc = 0x49e376;
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_EditorFont,message,((g_ClipLeft + g_ClipRight) - iVar4) / 2,
               (((g_ClipTop + g_ClipBottom) - iVar5) - iVar3) / 2,in_stack_00000054,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0((CEdButton *)&stack0xffffff44,1);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)&stack0xffffff3c);
  return;
}


// Assembly code:
// 0049e130: PUSH EBX
//   Label: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
// 0049e131: PUSH ESI
// 0049e132: PUSH EDI
// 0049e133: PUSH EBP
// 0049e134: SUB ESP,0xf8
// 0049e13a: MOV EBP,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x8] (READ)
// 0049e141: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 0049e148: JZ 0x0049e3a3
//   XREF to: 0049e3a3 (CONDITIONAL_JUMP)
// 0049e14e: MOV EAX,[0x02cf1cd0]
//   Label: LAB_0049e14e
//   XREF to: 02cf1cd0 (READ)
// 0049e153: PUSH 0x6a
// 0049e155: MOV EDX,dword ptr [EAX + 0x3168]
// 0049e15b: PUSH EAX
// 0049e15c: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 0049e162: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0049e167: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 0049e16c: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0049e171: MOV EDX,EAX
// 0049e173: MOV EBX,0x60
// 0049e178: SAR EDX,0x1f
// 0049e17b: IDIV EBX
// 0049e17d: ADD ESP,0x8
// 0049e180: PUSH 0x622faa
//   XREF to: 00622faa (DATA)
// 0049e185: MOV EBX,EAX
// 0049e187: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 0049e18c: ADD ESP,0x4
// 0049e18f: PUSH 0x0
// 0049e191: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0049e198: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049e19d: ADD ESP,0x4
// 0049e1a0: MOV ESI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x4] (READ)
// 0049e1a7: PUSH ESI
// 0049e1a8: MOV EDI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049e1ae: ADD EBX,EBX
// 0049e1b0: PUSH EDI
// 0049e1b1: ADD EBX,EAX
// 0049e1b3: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0049e1b8: ADD ESP,0x8
// 0049e1bb: MOV EDI,EAX
// 0049e1bd: PUSH EBP
// 0049e1be: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049e1c5: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049e1ca: PUSH EAX
// 0049e1cb: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0049e1d0: ADD ESP,0x8
// 0049e1d3: MOV ESI,EAX
// 0049e1d5: CMP EAX,EDI
// 0049e1d7: JLE 0x0049e1e0
//   XREF to: 0049e1e0 (CONDITIONAL_JUMP)
// 0049e1d9: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049e1e0: MOV EAX,dword ptr [ESP + 0xf0]
//   Label: LAB_0049e1e0
//   XREF to: Stack[-0x18] (READ)
// 0049e1e7: CMP EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 0049e1ee: JG 0x0049e3cb
//   XREF to: 0049e3cb (CONDITIONAL_JUMP)
// 0049e1f4: PUSH EBP
//   Label: LAB_0049e1f4
// 0049e1f5: MOV ECX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049e1fb: PUSH ECX
// 0049e1fc: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 0049e201: ADD ESP,0x8
// 0049e204: PUSH 0x0
// 0049e206: MOV EDX,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x4] (READ)
// 0049e20d: PUSH EDX
// 0049e20e: MOV EDX,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 0049e214: ADD EDX,EDX
// 0049e216: MOV EDI,EAX
// 0049e218: ADD EAX,EDX
// 0049e21a: ADD EAX,EBX
// 0049e21c: PUSH EAX
// 0049e21d: MOV EAX,[0x02cf2668]
//   XREF to: 02cf2668 (READ)
// 0049e222: MOV ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 0049e229: SHL EAX,0x2
// 0049e22c: ADD EAX,ECX
// 0049e22e: PUSH EAX
// 0049e22f: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049e234: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0049e235: CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   XREF to: 004a0890 (UNCONDITIONAL_CALL)
// 0049e23a: ADD ESP,0x14
// 0049e23d: PUSH 0x622fb1
//   XREF to: 00622fb1 (DATA)
// 0049e242: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 0049e247: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0049e24d: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0049e254: ADD ESP,0x4
// 0049e257: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049e25c: MOV ECX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x1c] (READ)
// 0049e263: ADD EDX,EAX
// 0049e265: SUB EDX,ECX
// 0049e267: MOV EAX,EDX
// 0049e269: SAR EDX,0x1f
// 0049e26c: SUB EAX,EDX
// 0049e26e: SAR EAX,0x1
// 0049e270: INC EAX
// 0049e271: PUSH 0x0
// 0049e273: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0049e27a: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049e27f: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049e285: SUB EDX,EAX
// 0049e287: ADD ESP,0x4
// 0049e28a: LEA EAX,[EDX + 0x1]
// 0049e28d: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0049e294: MOV EAX,ESP
// 0049e296: PUSH EAX
// 0049e297: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 0049e29c: ADD ESP,0x4
// 0049e29f: PUSH 0x622fb8
//   XREF to: 00622fb8 (DATA)
// 0049e2a4: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049e2a9: MOV EDX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x1c] (READ)
// 0049e2b0: PUSH EAX
// 0049e2b1: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x24] (READ)
// 0049e2b8: ADD EAX,EDX
// 0049e2ba: DEC EAX
// 0049e2bb: PUSH EAX
// 0049e2bc: MOV ECX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x20] (READ)
// 0049e2c3: PUSH ECX
// 0049e2c4: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x24] (READ)
// 0049e2cb: PUSH EAX
// 0049e2cc: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x108] (DATA)
// 0049e2d0: PUSH EAX
// 0049e2d1: CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   XREF to: 004a6590 (UNCONDITIONAL_CALL)
// 0049e2d6: ADD ESP,0x18
// 0049e2d9: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0049e2de: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_0049e2de
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 0049e2e3: TEST EAX,EAX
// 0049e2e5: JNZ 0x0049e3d7
//   XREF to: 0049e3d7 (CONDITIONAL_JUMP)
// 0049e2eb: MOV EAX,ESP
// 0049e2ed: PUSH EAX
// 0049e2ee: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 0049e2f3: ADD ESP,0x4
// 0049e2f6: TEST EAX,EAX
// 0049e2f8: JNZ 0x0049e3d7
//   XREF to: 0049e3d7 (CONDITIONAL_JUMP)
// 0049e2fe: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049e304: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0049e305: CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
// 0049e30a: ADD ESP,0x4
// 0049e30d: PUSH 0x1
// 0049e30f: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049e315: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0049e316: CALL shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
//   XREF to: 004a1230 (UNCONDITIONAL_CALL)
// 0049e31b: ADD ESP,0x8
// 0049e31e: PUSH 0xffff
// 0049e323: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0049e328: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0049e32e: MOV ECX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049e334: ADD ESP,0x4
// 0049e337: ADD EDX,ECX
// 0049e339: PUSH -0x1
// 0049e33b: SUB EDX,EDI
// 0049e33d: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0xc] (READ)
// 0049e344: SUB EDX,EBX
// 0049e346: PUSH EAX
// 0049e347: MOV EAX,EDX
// 0049e349: SAR EDX,0x1f
// 0049e34c: SUB EAX,EDX
// 0049e34e: SAR EAX,0x1
// 0049e350: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049e356: PUSH EAX
// 0049e357: ADD EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0049e35d: SUB EDX,ESI
// 0049e35f: MOV EAX,EDX
// 0049e361: SAR EDX,0x1f
// 0049e364: SUB EAX,EDX
// 0049e366: SAR EAX,0x1
// 0049e368: PUSH EAX
// 0049e369: PUSH EBP
// 0049e36a: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049e370: PUSH EDX
// 0049e371: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0049e376: ADD ESP,0x18
// 0049e379: PUSH 0x1
// 0049e37b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x108] (DATA)
// 0049e37f: PUSH EAX
// 0049e380: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 0049e385: ADD ESP,0x8
// 0049e388: PUSH 0x0
// 0049e38a: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049e390: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0049e391: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 0049e396: ADD ESP,0x8
// 0049e399: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0049e39e: JMP 0x0049e2de
//   XREF to: 0049e2de (UNCONDITIONAL_JUMP)
// 0049e3a3: MOV ECX,0x622eae
//   Label: LAB_0049e3a3
//   XREF to: 00622eae (PARAM)
// 0049e3a8: MOV EBX,0x8d
// 0049e3ad: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 0049e3b2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0049e3b8: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0049e3be: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049e3c3: ADD ESP,0x4
// 0049e3c6: JMP 0x0049e14e
//   XREF to: 0049e14e (UNCONDITIONAL_JUMP)
// 0049e3cb: MOV dword ptr [ESP + 0xf4],EAX
//   Label: LAB_0049e3cb
//   XREF to: Stack[-0x14] (WRITE)
// 0049e3d2: JMP 0x0049e1f4
//   XREF to: 0049e1f4 (UNCONDITIONAL_JUMP)
// 0049e3d7: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0049e3d7
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0049e3dc: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049e3e2: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0049e3e3: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0049e3e8: ADD ESP,0x4
// 0049e3eb: PUSH 0x0
// 0049e3ed: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x108] (DATA)
// 0049e3f1: PUSH EAX
// 0049e3f2: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 0049e3f7: ADD ESP,0x8
// 0049e3fa: ADD ESP,0xf8
// 0049e400: POP EBP
// 0049e401: POP EDI
// 0049e402: POP ESI
// 0049e403: POP EBX
// 0049e404: RET
