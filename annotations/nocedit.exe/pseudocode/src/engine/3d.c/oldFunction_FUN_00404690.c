// Name: engine_3d.c_oldFunction_FUN_00404690
// Address: 00404690
// Address Range: [[00404690, 004046b5]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00404690(SMRGLHeaderExtended * primitive)
// Globals:
//   TerminatedCString s_engine_3d_c_0061345c
//   TerminatedCString s_old_func_0061346b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00404690(SMRGLHeaderExtended *primitive)

{
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 0x50c;
  core_main_c_displayErrorAndQuit_FUN_00506f10("old func");
  return (SMRGLHeaderExtended *)0x0;
}


// Assembly code:
// 00404690: MOV EDX,0x61345c
//   Label: engine_3d.c_oldFunction_FUN_00404690
//   XREF to: 0061345c (PARAM)
// 00404695: MOV ECX,0x50c
// 0040469a: PUSH 0x61346b
//   XREF to: 0061346b (DATA)
// 0040469f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004046a5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004046ab: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004046b0: ADD ESP,0x4
// 004046b3: XOR EAX,EAX
// 004046b5: RET
