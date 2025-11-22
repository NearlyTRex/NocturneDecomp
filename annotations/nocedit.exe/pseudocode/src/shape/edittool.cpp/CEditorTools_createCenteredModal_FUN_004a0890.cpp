// Name: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
// Address: 004a0890
// Address Range: [[004a0890, 004a0962]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, int modal_flags)
// Cross-references:
//   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 (005107c0) at 005107f8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 (0049e940) at 0049e98f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 (004a0430) at 004a04b4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fc00 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4a76 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e235 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ec1f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dbe5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CBitFont* g_EditorFont
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
          (CEditorTools *this_ptr,int min_width,int min_height,char *text_content,int modal_flags)

{
  int iVar1;
  int iVar2;
  int in_stack_00000018;
  int in_stack_00000020;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if (text_content != (char *)0x0) {
    iVar1 = g_EditorFont->char_widths[0x20];
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,text_content);
    iVar2 = iVar2 + iVar1 * 2;
    if (min_width < iVar2) {
      min_width = iVar2;
    }
  }
  iVar1 = (g_WindowWidth - min_width) / 2;
  iVar2 = (g_WindowHeight - in_stack_00000018) / 2;
  shape_edittool_cpp_CEditorTools_createModalWindow_FUN_004a0970
            ((CEditorTools *)text_content,iVar1,iVar2,g_WindowWidth - iVar1,g_WindowHeight - iVar2,
             text_content,in_stack_00000020);
  return;
}


// Assembly code:
// 004a0890: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
// 004a0891: PUSH ESI
// 004a0892: PUSH EDI
// 004a0893: PUSH EBP
// 004a0894: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a0898: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a089c: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 004a08a3: JNZ 0x004a08c8
//   XREF to: 004a08c8 (CONDITIONAL_JUMP)
// 004a08a5: MOV ECX,0x622eae
//   XREF to: 00622eae (PARAM)
// 004a08aa: MOV EBX,0x8d
// 004a08af: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 004a08b4: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a08ba: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a08c0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a08c5: ADD ESP,0x4
// 004a08c8: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004a08c8
//   XREF to: 02cf1cd0 (READ)
// 004a08cd: PUSH 0x6a
// 004a08cf: MOV EDX,dword ptr [EAX + 0x3168]
// 004a08d5: PUSH EAX
// 004a08d6: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 004a08dc: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004a08e1: ADD ESP,0x8
// 004a08e4: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 004a08e9: TEST ESI,ESI
// 004a08eb: JNZ 0x004a0941
//   XREF to: 004a0941 (CONDITIONAL_JUMP)
// 004a08ed: MOV EDX,dword ptr [0x00679394]
//   Label: LAB_004a08ed
//   XREF to: 00679394 (READ)
// 004a08f3: SUB EDX,EDI
// 004a08f5: MOV EAX,EDX
// 004a08f7: SAR EDX,0x1f
// 004a08fa: SUB EAX,EDX
// 004a08fc: SAR EAX,0x1
// 004a08fe: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a0902: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a0908: SUB EDX,EDI
// 004a090a: MOV ECX,EAX
// 004a090c: MOV EAX,EDX
// 004a090e: SAR EDX,0x1f
// 004a0911: SUB EAX,EDX
// 004a0913: SAR EAX,0x1
// 004a0915: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004a0919: PUSH EBP
// 004a091a: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a0920: PUSH ESI
// 004a0921: SUB EBX,EAX
// 004a0923: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a0929: PUSH EBX
// 004a092a: SUB EDX,ECX
// 004a092c: PUSH EDX
// 004a092d: PUSH EAX
// 004a092e: PUSH ECX
// 004a092f: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004a0933: PUSH EAX
// 004a0934: CALL shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970
//   XREF to: 004a0970 (UNCONDITIONAL_CALL)
// 004a0939: ADD ESP,0x1c
// 004a093c: POP EBP
// 004a093d: POP EDI
// 004a093e: POP ESI
// 004a093f: POP EBX
// 004a0940: RET
// 004a0941: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004a0941
//   XREF to: 02cf1cd0 (READ)
// 004a0946: PUSH ESI
// 004a0947: MOV EDX,dword ptr [EAX + 0x25e8]
// 004a094d: PUSH EAX
// 004a094e: LEA EBX,[EDX + EDX*0x1]
// 004a0951: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004a0956: ADD EAX,EBX
// 004a0958: ADD ESP,0x8
// 004a095b: CMP EDI,EAX
// 004a095d: JGE 0x004a08ed
//   XREF to: 004a08ed (CONDITIONAL_JUMP)
// 004a095f: MOV EDI,EAX
// 004a0961: JMP 0x004a08ed
//   XREF to: 004a08ed (UNCONDITIONAL_JUMP)
