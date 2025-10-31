// Name: core_dpart.cpp_CDemonPart_save_FUN_004824c0
// Address: 004824c0
// Address Range: [[004824c0, 004824e3]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_save_FUN_004824c0(CDemonPart * this_ptr)
// Globals:
//   TerminatedCString s_core_dpart_cpp_006217b8
//   TerminatedCString s_CDemonPart_save_is_no_lo_006217ca
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_save_FUN_004824c0(CDemonPart *this_ptr)

{
  g_CurrentFilename = "..\\core\\dpart.cpp";
  g_CurrentLineNumber = 0x132;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonPart::save is no longer needed");
  return;
}


// Assembly code:
// 004824c0: MOV EDX,0x6217b8
//   Label: core_dpart.cpp_CDemonPart_save_FUN_004824c0
//   XREF to: 006217b8 (DATA)
// 004824c5: MOV ECX,0x132
// 004824ca: PUSH 0x6217ca
//   XREF to: 006217ca (DATA)
// 004824cf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004824d5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004824db: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004824e0: ADD ESP,0x4
// 004824e3: RET
