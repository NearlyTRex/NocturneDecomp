// Name: shape_quantize.cpp_FUN_00556cb0
// Address: 00556cb0
// Address Range: [[00556cb0, 00556cd5]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_FUN_00556cb0()
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640a73
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void shape_quantize_cpp_FUN_00556cb0
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               char *param_5)

{
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  g_CurrentLineNumber = 0x61;
  core_main_c_displayErrorAndQuit_FUN_00506f10(param_5,unaff_EBX);
  return;
}


// Assembly code:
// 00556cb0: PUSH EBX
//   Label: shape_quantize.cpp_FUN_00556cb0
// 00556cb1: MOV EDX,0x640a73
//   XREF to: 00640a73 (DATA)
// 00556cb6: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00556cba: MOV ECX,0x61
// 00556cbf: PUSH EBX
// 00556cc0: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00556cc6: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00556ccc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00556cd1: ADD ESP,0x4
// 00556cd4: POP EBX
// 00556cd5: RET
