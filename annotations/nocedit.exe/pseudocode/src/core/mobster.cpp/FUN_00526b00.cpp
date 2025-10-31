// Name: core_mobster.cpp_FUN_00526b00
// Address: 00526b00
// Address Range: [[00526b00, 00526b18]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00526b00()

#include "nocturne.h"

void core_mobster_cpp_FUN_00526b00(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  *in_stack_00000004 = in_stack_00000008;
  in_stack_00000004[2] = in_stack_0000000c;
  in_stack_00000004[1] = in_stack_00000010;
  return;
}


// Assembly code:
// 00526b00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mobster.cpp_FUN_00526b00
//   XREF to: Stack[0x4] (READ)
// 00526b04: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00526b08: MOV dword ptr [EAX],EDX
// 00526b0a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00526b0e: MOV dword ptr [EAX + 0x8],EDX
// 00526b11: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 00526b15: MOV dword ptr [EAX + 0x4],EDX
// 00526b18: RET
