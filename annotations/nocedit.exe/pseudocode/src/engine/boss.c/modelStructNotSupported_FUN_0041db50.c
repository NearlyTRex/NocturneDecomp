// Name: engine_boss.c_modelStructNotSupported_FUN_0041db50
// Address: 0041db50
// Address Range: [[0041db50, 0041db75]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041db50(SMRGLHeaderExtended * header)
// Globals:
//   TerminatedCString s_engine_boss_c_00616398
//   TerminatedCString s_modelStruct_not_supporte_006163a9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_boss_c_modelStructNotSupported_FUN_0041db50(SMRGLHeaderExtended *header)

{
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x35;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}


// Assembly code:
// 0041db50: MOV EDX,0x616398
//   Label: engine_boss.c_modelStructNotSupported_FUN_0041db50
//   XREF to: 00616398 (PARAM)
// 0041db55: MOV ECX,0x35
// 0041db5a: PUSH 0x6163a9
//   XREF to: 006163a9 (DATA)
// 0041db5f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0041db65: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0041db6b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041db70: ADD ESP,0x4
// 0041db73: XOR EAX,EAX
// 0041db75: RET
