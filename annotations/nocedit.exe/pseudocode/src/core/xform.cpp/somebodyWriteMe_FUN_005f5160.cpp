// Name: core_xform.cpp_somebodyWriteMe_FUN_005f5160
// Address: 005f5160
// Address Range: [[005f5160, 005f5183]]
// Convention: __cdecl
// Signature: void core_xform.cpp_somebodyWriteMe_FUN_005f5160(void)
// Globals:
//   TerminatedCString s_core_xform_cpp_006582c5
//   TerminatedCString s_Somebody_write_me_006582d7
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_xform_cpp_somebodyWriteMe_FUN_005f5160(void)

{
  g_CurrentFilename = "..\\core\\xform.cpp";
  g_CurrentLineNumber = 0x7b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Somebody write me!");
  return;
}


// Assembly code:
// 005f5160: MOV EDX,0x6582c5
//   Label: core_xform.cpp_somebodyWriteMe_FUN_005f5160
//   XREF to: 006582c5 (DATA)
// 005f5165: MOV ECX,0x7b
// 005f516a: PUSH 0x6582d7
//   XREF to: 006582d7 (DATA)
// 005f516f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005f5175: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005f517b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005f5180: ADD ESP,0x4
// 005f5183: RET
