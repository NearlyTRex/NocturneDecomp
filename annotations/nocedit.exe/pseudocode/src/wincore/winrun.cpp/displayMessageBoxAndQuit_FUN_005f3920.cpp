// Name: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
// Address: 005f3920
// Address Range: [[005f3920, 005f396c]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920(char * message)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 0050702c [UNCONDITIONAL_CALL]
// Globals:
//   MessageBoxA* MessageBoxA = 00211b44
//   ExitProcess* PTR_ExitProcess_00611534 = 00211d12
//   TerminatedCString s_s_File_s_Line_d_00657f84
//   TerminatedCString s_Nocturne_Editor_006581a7
//   char* g_ApplicationTitle = 006581a7
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[512] g_ErrorMessageBuffer
//   HWND g_MainWindowHandle
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   MessageBoxA

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920(char *message)

{
  crt_stdio_c_sprintf_FUN_005fdbd0
            (g_ErrorMessageBuffer,"%s\n\nFile: %s\nLine: %d",message,g_CurrentFilename,
             g_CurrentLineNumber);
  (*MessageBoxA)(g_MainWindowHandle,g_ErrorMessageBuffer,g_ApplicationTitle,0x30);
  (*PTR_ExitProcess_00611534)(1);
  return;
}


// Assembly code:
// 005f3920: PUSH EBX
//   Label: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
// 005f3921: PUSH ESI
// 005f3922: PUSH EDI
// 005f3923: MOV EDX,dword ptr [0x02f0ca4c]
//   XREF to: 02f0ca4c (READ)
// 005f3929: PUSH EDX
// 005f392a: MOV ECX,dword ptr [0x02f0ca48]
//   XREF to: 02f0ca48 (READ)
// 005f3930: PUSH ECX
// 005f3931: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005f3935: PUSH EBX
// 005f3936: PUSH 0x657f84
//   XREF to: 00657f84 (DATA)
// 005f393b: PUSH 0x3f96c30
//   XREF to: 03f96c30 (DATA)
// 005f3940: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005f3945: ADD ESP,0x14
// 005f3948: PUSH 0x30
// 005f394a: MOV ESI,dword ptr [0x0068499c]
//   XREF to: 0068499c (READ)
// 005f3950: PUSH ESI
//   XREF to: 006581a7 (DATA)
// 005f3951: PUSH 0x3f96c30
//   XREF to: 03f96c30 (DATA)
// 005f3956: MOV EDI,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005f395c: PUSH EDI
// 005f395d: CALL dword ptr CS:[0x6114c4]
//   XREF to: EXTERNAL:0000003d (COMPUTED_CALL)
//   XREF to: 006114c4 (READ)
// 005f3964: PUSH 0x1
// 005f3966: CALL dword ptr CS:[0x611534]
//   XREF to: 00611534 (READ)
