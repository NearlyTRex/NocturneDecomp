// Name: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
// Address: 0049e940
// Address Range: [[0049e940, 0049e9c0]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools * this_ptr, char * dialog_text)
// Cross-references:
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589b3f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d20f [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc2f8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d7f1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   int g_WindowWidth = 0x140
//   CBitFont* g_EditorFont
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940
          (CEditorTools *this_ptr,char *dialog_text)

{
  CEditorTools *in_stack_0000000c;
  char *in_stack_00000010;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (in_stack_0000000c,(g_WindowWidth << 2) / 5,g_FontCharacterWidth,in_stack_00000010,0);
  return;
}


// Assembly code:
// 0049e940: PUSH ESI
//   Label: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
// 0049e941: PUSH EDI
// 0049e942: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 0049e949: JZ 0x0049e99a
//   XREF to: 0049e99a (CONDITIONAL_JUMP)
// 0049e94b: MOV EAX,[0x02cf1cd0]
//   Label: LAB_0049e94b
//   XREF to: 02cf1cd0 (READ)
// 0049e950: PUSH 0x6a
// 0049e952: MOV EDX,dword ptr [EAX + 0x3168]
// 0049e958: PUSH EAX
// 0049e959: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 0049e95f: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0049e964: ADD ESP,0x8
// 0049e967: MOV ECX,0x5
// 0049e96c: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0049e972: PUSH 0x0
// 0049e974: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049e978: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 0049e97d: PUSH ESI
// 0049e97e: SHL EDX,0x2
// 0049e981: PUSH EAX
// 0049e982: MOV EAX,EDX
// 0049e984: SAR EDX,0x1f
// 0049e987: IDIV ECX
// 0049e989: PUSH EAX
// 0049e98a: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0049e98e: PUSH EDI
// 0049e98f: CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   XREF to: 004a0890 (UNCONDITIONAL_CALL)
// 0049e994: ADD ESP,0x14
// 0049e997: POP EDI
// 0049e998: POP ESI
// 0049e999: RET
// 0049e99a: PUSH EBX
//   Label: LAB_0049e99a
// 0049e99b: MOV ECX,0x622eae
//   XREF to: 00622eae (DATA)
// 0049e9a0: MOV EBX,0x8d
// 0049e9a5: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 0049e9aa: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0049e9b0: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0049e9b6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049e9bb: ADD ESP,0x4
// 0049e9be: POP EBX
// 0049e9bf: JMP 0x0049e94b
//   XREF to: 0049e94b (UNCONDITIONAL_JUMP)
