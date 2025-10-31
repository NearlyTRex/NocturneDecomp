// Name: engine_3d.c_oldFunction_FUN_00403ec0
// Address: 00403ec0
// Address Range: [[00403ec0, 00403ee5]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00403ec0(SMRGLHeaderExtended * primitive)
// Globals:
//   TerminatedCString s_engine_3d_c_00613414
//   TerminatedCString s_Old_func_00613423
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00403ec0(SMRGLHeaderExtended *primitive)

{
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 0x361;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Old func");
  return (SMRGLHeaderExtended *)0x0;
}


// Assembly code:
// 00403ec0: MOV EDX,0x613414
//   Label: engine_3d.c_oldFunction_FUN_00403ec0
//   XREF to: 00613414 (PARAM)
// 00403ec5: MOV ECX,0x361
// 00403eca: PUSH 0x613423
//   XREF to: 00613423 (DATA)
// 00403ecf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00403ed5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00403edb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403ee0: ADD ESP,0x4
// 00403ee3: XOR EAX,EAX
// 00403ee5: RET
