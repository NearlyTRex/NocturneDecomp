// Name: engine_boss.c_modelStructNotSupported_FUN_0041dbb0
// Address: 0041dbb0
// Address Range: [[0041dbb0, 0041dbd3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041dbb0(SMRGLHeaderExtended * header)
// Cross-references:
//   engine_model.c_freeMRGLData_FUN_005280b0 (005280b0) at 005280ca [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_boss_c_006163ee
//   TerminatedCString s_modelStruct_not_supporte_006163ff
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_boss_c_modelStructNotSupported_FUN_0041dbb0(SMRGLHeaderExtended *header)

{
  SMRGLHeaderExtended *extraout_EAX;
  
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x3f;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  return extraout_EAX;
}


// Assembly code:
// 0041dbb0: MOV EDX,0x6163ee
//   Label: engine_boss.c_modelStructNotSupported_FUN_0041dbb0
//   XREF to: 006163ee (PARAM)
// 0041dbb5: MOV ECX,0x3f
// 0041dbba: PUSH 0x6163ff
//   XREF to: 006163ff (DATA)
// 0041dbbf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0041dbc5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0041dbcb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041dbd0: ADD ESP,0x4
// 0041dbd3: RET
