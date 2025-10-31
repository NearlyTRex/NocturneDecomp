// Name: engine_3d.c_oldFunction_FUN_00403ef0
// Address: 00403ef0
// Address Range: [[00403ef0, 00403f15]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00403ef0(SMRGLHeaderExtended * primitive)
// Globals:
//   TerminatedCString s_engine_3d_c_0061342c
//   TerminatedCString s_Old_func_0061343b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00403ef0(SMRGLHeaderExtended *primitive)

{
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 0x375;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Old func");
  return (SMRGLHeaderExtended *)0x0;
}


// Assembly code:
// 00403ef0: MOV EDX,0x61342c
//   Label: engine_3d.c_oldFunction_FUN_00403ef0
//   XREF to: 0061342c (PARAM)
// 00403ef5: MOV ECX,0x375
// 00403efa: PUSH 0x61343b
//   XREF to: 0061343b (DATA)
// 00403eff: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00403f05: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00403f0b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403f10: ADD ESP,0x4
// 00403f13: XOR EAX,EAX
// 00403f15: RET
