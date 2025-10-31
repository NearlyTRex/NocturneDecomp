// Name: engine_3d.c_oldFunction_FUN_00404df0
// Address: 00404df0
// Address Range: [[00404df0, 00404e37]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00404df0(SMRGLHeaderExtended * primitive)
// Globals:
//   TerminatedCString s_Old_func_d_00613396
//   TerminatedCString s_engine_3d_c_006133a4
//   int g_RenderResult
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00404df0(SMRGLHeaderExtended *primitive)

{
  BADSPACEBASE *in_ESP;
  char acStack_50 [76];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffac,"Old func : %d",(primitive->base).type);
  g_CurrentLineNumber = 0xda;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_50);
  return (SMRGLHeaderExtended *)&g_RenderResult;
}


// Assembly code:
// 00404df0: PUSH EBX
//   Label: engine_3d.c_oldFunction_FUN_00404df0
// 00404df1: SUB ESP,0x50
// 00404df4: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 00404df8: MOV EDX,dword ptr [EAX]
// 00404dfa: PUSH EDX
// 00404dfb: PUSH 0x613396
//   XREF to: 00613396 (DATA)
// 00404e00: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x54] (DATA)
// 00404e04: PUSH EAX
// 00404e05: MOV EBX,0xda
// 00404e0a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00404e0f: ADD ESP,0xc
// 00404e12: MOV EAX,ESP
// 00404e14: MOV ECX,0x6133a4
//   XREF to: 006133a4 (PARAM)
// 00404e19: PUSH EAX
// 00404e1a: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00404e20: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00404e26: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00404e2b: MOV EAX,0x772a84
//   XREF to: 00772a84 (DATA)
// 00404e30: ADD ESP,0x4
// 00404e33: ADD ESP,0x50
// 00404e36: POP EBX
// 00404e37: RET
