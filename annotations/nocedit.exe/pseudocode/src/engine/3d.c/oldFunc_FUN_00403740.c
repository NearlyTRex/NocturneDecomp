// Name: engine_3d.c_oldFunc_FUN_00403740
// Address: 00403740
// Address Range: [[00403740, 00403787]]
// Convention: __cdecl
// Signature: void * engine_3d.c_oldFunc_FUN_00403740(SMRGLHeaderPrimitive * primitive)
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

void * __cdecl engine_3d_c_oldFunc_FUN_00403740(SMRGLHeaderPrimitive *primitive)

{
  BADSPACEBASE *in_ESP;
  char acStack_50 [76];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffac,"Old func : %d",(primitive->base).type);
  g_CurrentLineNumber = 0xda;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_50);
  return &g_RenderResult;
}


// Assembly code:
// 00403740: PUSH EBX
//   Label: engine_3d.c_oldFunc_FUN_00403740
// 00403741: SUB ESP,0x50
// 00403744: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 00403748: MOV EDX,dword ptr [EAX]
// 0040374a: PUSH EDX
// 0040374b: PUSH 0x613396
//   XREF to: 00613396 (DATA)
// 00403750: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x54] (DATA)
// 00403754: PUSH EAX
// 00403755: MOV EBX,0xda
// 0040375a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040375f: ADD ESP,0xc
// 00403762: MOV EAX,ESP
// 00403764: MOV ECX,0x6133a4
//   XREF to: 006133a4 (DATA)
// 00403769: PUSH EAX
// 0040376a: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00403770: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00403776: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040377b: MOV EAX,0x772a84
//   XREF to: 00772a84 (DATA)
// 00403780: ADD ESP,0x4
// 00403783: ADD ESP,0x50
// 00403786: POP EBX
// 00403787: RET
