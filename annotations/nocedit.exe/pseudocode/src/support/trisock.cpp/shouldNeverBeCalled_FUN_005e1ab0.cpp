// Name: support_trisock.cpp_shouldNeverBeCalled_FUN_005e1ab0
// Address: 005e1ab0
// Address Range: [[005e1ab0, 005e1ad7]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_shouldNeverBeCalled_FUN_005e1ab0(int unknown1, int unknown2)
// Globals:
//   TerminatedCString s_support_trisock_cpp_00656561
//   TerminatedCString s_Should_never_be_called_00656578
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl support_trisock_cpp_shouldNeverBeCalled_FUN_005e1ab0(int unknown1,int unknown2)

{
  g_CurrentFilename = "..\\support\\trisock.cpp";
  g_CurrentLineNumber = 0xd1;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Should never be called!");
  return unknown2;
}


// Assembly code:
// 005e1ab0: MOV EDX,0x656561
//   Label: support_trisock.cpp_shouldNeverBeCalled_FUN_005e1ab0
//   XREF to: 00656561 (DATA)
// 005e1ab5: MOV ECX,0xd1
// 005e1aba: PUSH 0x656578
//   XREF to: 00656578 (DATA)
// 005e1abf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005e1ac5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005e1acb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e1ad0: ADD ESP,0x4
// 005e1ad3: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005e1ad7: RET
