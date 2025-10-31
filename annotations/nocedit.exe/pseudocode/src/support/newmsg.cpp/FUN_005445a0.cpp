// Name: support_newmsg.cpp_FUN_005445a0
// Address: 005445a0
// Address Range: [[005445a0, 005445b6]]
// Convention: unknown
// Signature: undefined support_newmsg.cpp_FUN_005445a0()
// Globals:
//   int g_MouseX
//   int g_MouseY

#include "nocturne.h"

void support_newmsg_cpp_FUN_005445a0(void)

{
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  *in_stack_00000008 = g_MouseX;
  *in_stack_0000000c = g_MouseY;
  return;
}


// Assembly code:
// 005445a0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: support_newmsg.cpp_FUN_005445a0
//   XREF to: Stack[0x8] (READ)
// 005445a4: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 005445a9: MOV dword ptr [EDX],EAX
// 005445ab: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005445af: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 005445b4: MOV dword ptr [EDX],EAX
// 005445b6: RET
