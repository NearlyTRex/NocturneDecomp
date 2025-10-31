// Name: shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
// Address: 004a6970
// Address Range: [[004a6970, 004a69fe]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
// Cross-references:
//   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 (004a6550) at 004a6558 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 (004a1230) at 004a12a6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a49f8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a4e3c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e198 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ebe2 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dba9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   int g_WindowHeight = 0xc8
//   CBitFont* g_EditorFont
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_004a6970(char *button_text)

{
  int iVar1;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if (button_text == (char *)0x0) {
    iVar1 = g_EditorFont->max_char_width;
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,button_text);
  }
  return g_WindowHeight / 0x50 + iVar1;
}


// Assembly code:
// 004a6970: PUSH EBX
//   Label: shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
// 004a6971: PUSH EDI
// 004a6972: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a6976: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 004a697d: JNZ 0x004a69a4
//   XREF to: 004a69a4 (CONDITIONAL_JUMP)
// 004a697f: PUSH ESI
// 004a6980: MOV ECX,0x622eae
//   XREF to: 00622eae (PARAM)
// 004a6985: MOV ESI,0x8d
// 004a698a: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 004a698f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a6995: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004a699b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a69a0: ADD ESP,0x4
// 004a69a3: POP ESI
// 004a69a4: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004a69a4
//   XREF to: 02cf1cd0 (READ)
// 004a69a9: PUSH 0x6a
// 004a69ab: MOV ECX,dword ptr [EAX + 0x3168]
// 004a69b1: PUSH EAX
// 004a69b2: MOV dword ptr [0x02cf2668],ECX
//   XREF to: 02cf2668 (WRITE)
// 004a69b8: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004a69bd: ADD ESP,0x8
// 004a69c0: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 004a69c5: TEST EBX,EBX
// 004a69c7: JNZ 0x004a69eb
//   XREF to: 004a69eb (CONDITIONAL_JUMP)
// 004a69c9: MOV ECX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a69cf: MOV ECX,dword ptr [ECX + 0x316c]
// 004a69d5: MOV EAX,[0x00679398]
//   Label: LAB_004a69d5
//   XREF to: 00679398 (READ)
// 004a69da: MOV EDX,EAX
// 004a69dc: MOV EBX,0x50
// 004a69e1: SAR EDX,0x1f
// 004a69e4: IDIV EBX
// 004a69e6: ADD EAX,ECX
// 004a69e8: POP EDI
// 004a69e9: POP EBX
// 004a69ea: RET
// 004a69eb: PUSH EBX
//   Label: LAB_004a69eb
// 004a69ec: MOV EDI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a69f2: PUSH EDI
// 004a69f3: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 004a69f8: ADD ESP,0x8
// 004a69fb: MOV ECX,EAX
// 004a69fd: JMP 0x004a69d5
//   XREF to: 004a69d5 (UNCONDITIONAL_JUMP)
