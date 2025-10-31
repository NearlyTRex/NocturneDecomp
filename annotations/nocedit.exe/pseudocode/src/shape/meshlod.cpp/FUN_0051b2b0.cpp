// Name: shape_meshlod.cpp_FUN_0051b2b0
// Address: 0051b2b0
// Address Range: [[0051b2b0, 0051b2d3]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051b2b0()
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00637caf
//   TerminatedCString s_Write_me_00637cc4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051b2b0(void)

{
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x1180;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
  return;
}


// Assembly code:
// 0051b2b0: MOV EDX,0x637caf
//   Label: shape_meshlod.cpp_FUN_0051b2b0
//   XREF to: 00637caf (DATA)
// 0051b2b5: MOV ECX,0x1180
// 0051b2ba: PUSH 0x637cc4
//   XREF to: 00637cc4 (DATA)
// 0051b2bf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0051b2c5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0051b2cb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051b2d0: ADD ESP,0x4
// 0051b2d3: RET
