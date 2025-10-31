// Name: core_setedit.cpp_ImportA3DBroken_FUN_00578c60
// Address: 00578c60
// Address Range: [[00578c60, 00578c83]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_ImportA3DBroken_FUN_00578c60()
// Cross-references:
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578b16 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_00646b91
//   TerminatedCString s_Import_A3D_is_broken_aga_00646ba5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_ImportA3DBroken() */

void core_setedit_cpp_ImportA3DBroken_FUN_00578c60(void)

{
  g_CurrentFilename = "..\\core\\setedit.cpp";
  g_CurrentLineNumber = 0x41b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Import A3D is broken again");
  return;
}


// Assembly code:
// 00578c60: MOV EDX,0x646b91
//   Label: core_setedit.cpp_ImportA3DBroken_FUN_00578c60
//   XREF to: 00646b91 (PARAM)
// 00578c65: MOV ECX,0x41b
// 00578c6a: PUSH 0x646ba5
//   XREF to: 00646ba5 (DATA)
// 00578c6f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00578c75: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00578c7b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00578c80: ADD ESP,0x4
// 00578c83: RET
