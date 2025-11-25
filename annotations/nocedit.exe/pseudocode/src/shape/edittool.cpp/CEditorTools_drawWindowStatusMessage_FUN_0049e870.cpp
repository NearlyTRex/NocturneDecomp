// Name: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
// Address: 0049e870
// Address Range: [[0049e870, 0049e93f]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870(CEditorTools * this_ptr, char * format_string, ...)
// Cross-references:
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589b53 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d223 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc3d5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d805 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   char[2048] g_ConfirmationMessageBuffer
//   CBitFont* g_EditorFont
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   int g_WindowStatusTextColor
//   int g_ClipLeft
//   int g_ClipTop
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
          (CEditorTools *this_ptr,char *format_string,...)

{
  BADSPACEBASE *in_ESP;
  CEditorTools *in_stack_00000010;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  crt_stdio_c_vsprintf_FUN_005fdba8
            (g_ConfirmationMessageBuffer,&in_stack_00000010->field0_0x0,
             (va_list_t *)&stack0xfffffff4);
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(in_stack_00000010);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_EditorFont,g_ConfirmationMessageBuffer,g_ClipLeft,g_ClipTop,g_WindowStatusTextColor,
             -1);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}


// Assembly code:
// 0049e870: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
// 0049e871: PUSH ESI
// 0049e872: PUSH EDI
// 0049e873: PUSH EBP
// 0049e874: SUB ESP,0x4
// 0049e877: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 0049e87e: JZ 0x0049e918
//   XREF to: 0049e918 (CONDITIONAL_JUMP)
// 0049e884: MOV EAX,[0x02cf1cd0]
//   Label: LAB_0049e884
//   XREF to: 02cf1cd0 (READ)
// 0049e889: PUSH 0x6a
// 0049e88b: MOV EDX,dword ptr [EAX + 0x3168]
// 0049e891: PUSH EAX
// 0049e892: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 0049e898: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0049e89d: ADD ESP,0x8
// 0049e8a0: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 0049e8a5: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[0xc] (DATA)
// 0049e8a9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0049e8ac: MOV EAX,ESP
// 0049e8ae: PUSH EAX
// 0049e8af: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0049e8b3: PUSH ESI
// 0049e8b4: PUSH 0x2cefd30
//   XREF to: 02cefd30 (DATA)
// 0049e8b9: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 0049e8be: ADD ESP,0xc
// 0049e8c1: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0049e8c5: XOR EDI,EDI
// 0049e8c7: PUSH EBP
// 0049e8c8: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0049e8cc: CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
// 0049e8d1: ADD ESP,0x4
// 0049e8d4: PUSH 0xffff
// 0049e8d9: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0049e8de: ADD ESP,0x4
// 0049e8e1: PUSH -0x1
// 0049e8e3: MOV EAX,[0x02cf2aa8]
//   XREF to: 02cf2aa8 (READ)
// 0049e8e8: PUSH EAX
// 0049e8e9: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0049e8ef: PUSH EDX
// 0049e8f0: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049e8f6: PUSH ECX
// 0049e8f7: PUSH 0x2cefd30
//   XREF to: 02cefd30 (DATA)
// 0049e8fc: MOV EBX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049e902: PUSH EBX
// 0049e903: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0049e908: ADD ESP,0x18
// 0049e90b: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0049e910: ADD ESP,0x4
// 0049e913: POP EBP
// 0049e914: POP EDI
// 0049e915: POP ESI
// 0049e916: POP EBX
// 0049e917: RET
// 0049e918: MOV ECX,0x622eae
//   Label: LAB_0049e918
//   XREF to: 00622eae (DATA)
// 0049e91d: MOV EBX,0x8d
// 0049e922: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 0049e927: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0049e92d: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0049e933: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049e938: ADD ESP,0x4
// 0049e93b: JMP 0x0049e884
//   XREF to: 0049e884 (UNCONDITIONAL_JUMP)
