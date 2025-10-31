// Name: engine_boss.c_modelStructNotSupported_FUN_0041dc20
// Address: 0041dc20
// Address Range: [[0041dc20, 0041dc43]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041dc20(SMRGLHeaderExtended * header)
// Cross-references:
//   engine_model.c_loadMRGLTextures_FUN_00528870 (00528870) at 005288ca [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_boss_c_00616444
//   TerminatedCString s_modelStruct_not_supporte_00616455
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_boss_c_modelStructNotSupported_FUN_0041dc20(SMRGLHeaderExtended *header)

{
  SMRGLHeaderExtended *extraout_EAX;
  
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x49;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  return extraout_EAX;
}


// Assembly code:
// 0041dc20: MOV EDX,0x616444
//   Label: engine_boss.c_modelStructNotSupported_FUN_0041dc20
//   XREF to: 00616444 (DATA)
// 0041dc25: MOV ECX,0x49
// 0041dc2a: PUSH 0x616455
//   XREF to: 00616455 (DATA)
// 0041dc2f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0041dc35: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0041dc3b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041dc40: ADD ESP,0x4
// 0041dc43: RET
