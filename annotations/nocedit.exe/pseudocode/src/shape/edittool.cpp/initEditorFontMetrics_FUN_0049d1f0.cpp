// Name: shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0
// Address: 0049d1f0
// Address Range: [[0049d1f0, 0049d241]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0(void)
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   CBitFont* g_EditorFont
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0

#include "nocturne.h"

void __cdecl shape_edittool_cpp_initEditorFontMetrics_FUN_0049d1f0(void)

{
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  return;
}


// Assembly code:
// 0049d1f0: CMP dword ptr [0x02cf1cd0],0x0
//   Label: shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0
//   XREF to: 02cf1cd0 (READ)
// 0049d1f7: JZ 0x0049d21b
//   XREF to: 0049d21b (CONDITIONAL_JUMP)
// 0049d1f9: MOV EAX,[0x02cf1cd0]
//   Label: LAB_0049d1f9
//   XREF to: 02cf1cd0 (READ)
// 0049d1fe: PUSH 0x6a
// 0049d200: MOV EDX,dword ptr [EAX + 0x3168]
// 0049d206: PUSH EAX
// 0049d207: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 0049d20d: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0049d212: ADD ESP,0x8
// 0049d215: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 0049d21a: RET
// 0049d21b: PUSH EBX
//   Label: LAB_0049d21b
// 0049d21c: MOV ECX,0x622eae
//   XREF to: 00622eae (DATA)
// 0049d221: MOV EBX,0x8d
// 0049d226: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 0049d22b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0049d231: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0049d237: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049d23c: ADD ESP,0x4
// 0049d23f: POP EBX
// 0049d240: JMP 0x0049d1f9
//   XREF to: 0049d1f9 (UNCONDITIONAL_JUMP)
