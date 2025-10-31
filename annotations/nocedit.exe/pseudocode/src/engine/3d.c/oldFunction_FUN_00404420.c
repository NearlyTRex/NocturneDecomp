// Name: engine_3d.c_oldFunction_FUN_00404420
// Address: 00404420
// Address Range: [[00404420, 00404445]]
// Convention: __watcallRegister
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00404420(SMRGLHeaderExtended * primitive)
// Globals:
//   TerminatedCString s_engine_3d_c_00613444
//   TerminatedCString s_Old_func_00613453
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * engine_3d_c_oldFunction_FUN_00404420(SMRGLHeaderExtended *primitive)

{
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 0x434;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Old func");
  return (SMRGLHeaderExtended *)0x0;
}


// Assembly code:
// 00404420: MOV EDX,0x613444
//   Label: engine_3d.c_oldFunction_FUN_00404420
//   XREF to: 00613444 (PARAM)
// 00404425: MOV ECX,0x434
// 0040442a: PUSH 0x613453
//   XREF to: 00613453 (DATA)
// 0040442f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00404435: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040443b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00404440: ADD ESP,0x4
// 00404443: XOR EAX,EAX
// 00404445: RET
