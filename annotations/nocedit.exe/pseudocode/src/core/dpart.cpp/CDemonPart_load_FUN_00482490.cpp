// Name: core_dpart.cpp_CDemonPart_load_FUN_00482490
// Address: 00482490
// Address Range: [[00482490, 004824b3]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_load_FUN_00482490(CDemonPart * this_ptr)
// Globals:
//   TerminatedCString s_core_dpart_cpp_00621781
//   TerminatedCString s_CDemonPart_load_is_no_lo_00621793
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_load_FUN_00482490(CDemonPart *this_ptr)

{
  g_CurrentFilename = "..\\core\\dpart.cpp";
  g_CurrentLineNumber = 0x128;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonPart::load is no longer needed");
  return;
}


// Assembly code:
// 00482490: MOV EDX,0x621781
//   Label: core_dpart.cpp_CDemonPart_load_FUN_00482490
//   XREF to: 00621781 (DATA)
// 00482495: MOV ECX,0x128
// 0048249a: PUSH 0x621793
//   XREF to: 00621793 (DATA)
// 0048249f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004824a5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004824ab: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004824b0: ADD ESP,0x4
// 004824b3: RET
