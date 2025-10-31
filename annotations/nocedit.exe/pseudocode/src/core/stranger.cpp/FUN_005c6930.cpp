// Name: core_stranger.cpp_FUN_005c6930
// Address: 005c6930
// Address Range: [[005c6930, 005c6949]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c6930()

#include "nocturne.h"

void core_stranger_cpp_FUN_005c6930(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0xc) = *in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 0x1c) = in_stack_00000008[1];
  *(undefined4 *)(in_stack_00000004 + 0x2c) = in_stack_00000008[2];
  return;
}


// Assembly code:
// 005c6930: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_stranger.cpp_FUN_005c6930
//   XREF to: Stack[0x4] (READ)
// 005c6934: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005c6938: MOV ECX,dword ptr [EDX]
// 005c693a: MOV dword ptr [EAX + 0xc],ECX
// 005c693d: MOV ECX,dword ptr [EDX + 0x4]
// 005c6940: MOV dword ptr [EAX + 0x1c],ECX
// 005c6943: MOV ECX,dword ptr [EDX + 0x8]
// 005c6946: MOV dword ptr [EAX + 0x2c],ECX
// 005c6949: RET
