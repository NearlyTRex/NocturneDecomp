// Name: shape_quantize.cpp_FUN_00556ce0
// Address: 00556ce0
// Address Range: [[00556ce0, 00556d05]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_FUN_00556ce0()
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640a89
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void shape_quantize_cpp_FUN_00556ce0
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               char *param_5)

{
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  g_CurrentLineNumber = 0x67;
  core_main_c_displayErrorAndQuit_FUN_00506f10(param_5,unaff_EBX);
  return;
}


// Assembly code:
// 00556ce0: PUSH EBX
//   Label: shape_quantize.cpp_FUN_00556ce0
// 00556ce1: MOV EDX,0x640a89
//   XREF to: 00640a89 (DATA)
// 00556ce6: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00556cea: MOV ECX,0x67
// 00556cef: PUSH EBX
// 00556cf0: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00556cf6: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00556cfc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00556d01: ADD ESP,0x4
// 00556d04: POP EBX
// 00556d05: RET
