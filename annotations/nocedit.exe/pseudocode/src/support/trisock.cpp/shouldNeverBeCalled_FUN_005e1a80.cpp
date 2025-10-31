// Name: support_trisock.cpp_shouldNeverBeCalled_FUN_005e1a80
// Address: 005e1a80
// Address Range: [[005e1a80, 005e1aa7]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_shouldNeverBeCalled_FUN_005e1a80(int unknown1, int unknown2)
// Globals:
//   TerminatedCString s_support_trisock_cpp_00656532
//   TerminatedCString s_Should_never_be_called_00656549
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl support_trisock_cpp_shouldNeverBeCalled_FUN_005e1a80(int unknown1,int unknown2)

{
  g_CurrentFilename = "..\\support\\trisock.cpp";
  g_CurrentLineNumber = 0xd0;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Should never be called!");
  return unknown2;
}


// Assembly code:
// 005e1a80: MOV EDX,0x656532
//   Label: support_trisock.cpp_shouldNeverBeCalled_FUN_005e1a80
//   XREF to: 00656532 (DATA)
// 005e1a85: MOV ECX,0xd0
// 005e1a8a: PUSH 0x656549
//   XREF to: 00656549 (DATA)
// 005e1a8f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005e1a95: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005e1a9b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e1aa0: ADD ESP,0x4
// 005e1aa3: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005e1aa7: RET
