// Name: engine_3d.c_oldFunction_FUN_004041d0
// Address: 004041d0
// Address Range: [[004041d0, 00404217]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_004041d0(SMRGLHeaderExtended * primitive)
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

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_004041d0(SMRGLHeaderExtended *primitive)

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
// 004041d0: PUSH EBX
//   Label: engine_3d.c_oldFunction_FUN_004041d0
// 004041d1: SUB ESP,0x50
// 004041d4: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 004041d8: MOV EDX,dword ptr [EAX]
// 004041da: PUSH EDX
// 004041db: PUSH 0x613396
//   XREF to: 00613396 (DATA)
// 004041e0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x54] (DATA)
// 004041e4: PUSH EAX
// 004041e5: MOV EBX,0xda
// 004041ea: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004041ef: ADD ESP,0xc
// 004041f2: MOV EAX,ESP
// 004041f4: MOV ECX,0x6133a4
//   XREF to: 006133a4 (PARAM)
// 004041f9: PUSH EAX
// 004041fa: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00404200: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00404206: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040420b: MOV EAX,0x772a84
//   XREF to: 00772a84 (DATA)
// 00404210: ADD ESP,0x4
// 00404213: ADD ESP,0x50
// 00404216: POP EBX
// 00404217: RET
