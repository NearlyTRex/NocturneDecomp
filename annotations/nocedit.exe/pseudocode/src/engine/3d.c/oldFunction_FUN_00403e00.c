// Name: engine_3d.c_oldFunction_FUN_00403e00
// Address: 00403e00
// Address Range: [[00403e00, 00403e25]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00403e00(SMRGLHeaderExtended * primitive)
// Globals:
//   TerminatedCString s_engine_3d_c_006133fc
//   TerminatedCString s_Old_func_0061340b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00403e00(SMRGLHeaderExtended *primitive)

{
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 0x335;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Old func");
  return (SMRGLHeaderExtended *)0x0;
}


// Assembly code:
// 00403e00: MOV EDX,0x6133fc
//   Label: engine_3d.c_oldFunction_FUN_00403e00
//   XREF to: 006133fc (PARAM)
// 00403e05: MOV ECX,0x335
// 00403e0a: PUSH 0x61340b
//   XREF to: 0061340b (DATA)
// 00403e0f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00403e15: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00403e1b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403e20: ADD ESP,0x4
// 00403e23: XOR EAX,EAX
// 00403e25: RET
