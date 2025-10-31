// Name: core_setedit.cpp_FUN_0057a270
// Address: 0057a270
// Address Range: [[0057a270, 0057a293]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_0057a270()
// Globals:
//   TerminatedCString s_core_setedit_cpp_006473de
//   TerminatedCString s_Import_set_from_demon_pa_006473f2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void core_setedit_cpp_FUN_0057a270(void)

{
  g_CurrentFilename = "..\\core\\setedit.cpp";
  g_CurrentLineNumber = 0x6c0;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Import set from demon part is broken again");
  return;
}


// Assembly code:
// 0057a270: MOV EDX,0x6473de
//   Label: core_setedit.cpp_FUN_0057a270
//   XREF to: 006473de (DATA)
// 0057a275: MOV ECX,0x6c0
// 0057a27a: PUSH 0x6473f2
//   XREF to: 006473f2 (DATA)
// 0057a27f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0057a285: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0057a28b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057a290: ADD ESP,0x4
// 0057a293: RET
