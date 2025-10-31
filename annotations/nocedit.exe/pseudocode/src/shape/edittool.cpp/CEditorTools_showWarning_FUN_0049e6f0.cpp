// Name: shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
// Address: 0049e6f0
// Address Range: [[0049e6f0, 0049e733]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format, ...)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00508022 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537dd0 (00537dd0) at 00537e7b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 005380f5 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_loadState_FUN_00560820 (00560820) at 00560b34 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230 (00571230) at 005712a0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be3a0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1f00 (005c1f00) at 005c1f6e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2b4e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5aff [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b5009 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b38a5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bc0a7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Warning_00623010
//   char[1024] g_DialogMessageBuffer
//   HWND g_DialogParentWindow
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools *this_ptr,char *format,...)

{
  BADSPACEBASE *in_ESP;
  
  crt_stdio_c_vsprintf_FUN_005fdba8(g_DialogMessageBuffer,format,(va_list_t *)&stack0xfffffff8);
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130
            ("Warning",g_DialogMessageBuffer,(int)g_DialogParentWindow);
  return;
}


// Assembly code:
// 0049e6f0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
// 0049e6f1: SUB ESP,0x4
// 0049e6f4: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[0xc] (DATA)
// 0049e6f8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 0049e6fb: MOV EAX,ESP
// 0049e6fd: PUSH EAX
// 0049e6fe: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049e702: PUSH EDX
// 0049e703: PUSH 0x2cef130
//   XREF to: 02cef130 (DATA)
// 0049e708: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 0049e70d: ADD ESP,0xc
// 0049e710: MOV EBX,dword ptr [0x02cf2a90]
//   XREF to: 02cf2a90 (READ)
// 0049e716: PUSH EBX
// 0049e717: PUSH 0x2cef130
//   XREF to: 02cef130 (DATA)
// 0049e71c: XOR ECX,ECX
// 0049e71e: PUSH 0x623010
//   XREF to: 00623010 (DATA)
// 0049e723: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0049e727: CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
//   XREF to: 0049e130 (UNCONDITIONAL_CALL)
// 0049e72c: ADD ESP,0xc
// 0049e72f: ADD ESP,0x4
// 0049e732: POP EBX
// 0049e733: RET
