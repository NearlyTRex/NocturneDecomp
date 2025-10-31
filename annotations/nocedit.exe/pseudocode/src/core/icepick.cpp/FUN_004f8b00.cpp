// Name: core_icepick.cpp_FUN_004f8b00
// Address: 004f8b00
// Address Range: [[004f8b00, 004f8b18]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8b00()

#include "nocturne.h"

void core_icepick_cpp_FUN_004f8b00(void)

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
// 004f8b00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_icepick.cpp_FUN_004f8b00
//   XREF to: Stack[0x4] (READ)
// 004f8b04: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004f8b08: MOV dword ptr [EAX],EDX
// 004f8b0a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004f8b0e: MOV dword ptr [EAX + 0x8],EDX
// 004f8b11: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 004f8b15: MOV dword ptr [EAX + 0x4],EDX
// 004f8b18: RET
