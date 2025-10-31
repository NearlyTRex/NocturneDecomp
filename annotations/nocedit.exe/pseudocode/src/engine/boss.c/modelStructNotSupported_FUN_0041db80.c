// Name: engine_boss.c_modelStructNotSupported_FUN_0041db80
// Address: 0041db80
// Address Range: [[0041db80, 0041dba5]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041db80(SMRGLHeaderExtended * header)
// Cross-references:
//   engine_model.c_loadModelFile_FUN_00527ec0 (00527ec0) at 00528093 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_boss_c_006163c3
//   TerminatedCString s_modelStruct_not_supporte_006163d4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_boss_c_modelStructNotSupported_FUN_0041db80(SMRGLHeaderExtended *header)

{
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x3a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}


// Assembly code:
// 0041db80: MOV EDX,0x6163c3
//   Label: engine_boss.c_modelStructNotSupported_FUN_0041db80
//   XREF to: 006163c3 (PARAM)
// 0041db85: MOV ECX,0x3a
// 0041db8a: PUSH 0x6163d4
//   XREF to: 006163d4 (DATA)
// 0041db8f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0041db95: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0041db9b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041dba0: ADD ESP,0x4
// 0041dba3: XOR EAX,EAX
// 0041dba5: RET
