// Name: core_bugs.cpp_FUN_004279b0
// Address: 004279b0
// Address Range: [[004279b0, 004279c8]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004279b0()

#include "nocturne.h"

void core_bugs_cpp_FUN_004279b0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  *in_stack_00000004 = in_stack_00000008;
  in_stack_00000004[1] = in_stack_0000000c;
  in_stack_00000004[2] = in_stack_00000010;
  return;
}


// Assembly code:
// 004279b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_004279b0
//   XREF to: Stack[0x4] (READ)
// 004279b4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004279b8: MOV dword ptr [EAX],EDX
// 004279ba: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004279be: MOV dword ptr [EAX + 0x4],EDX
// 004279c1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 004279c5: MOV dword ptr [EAX + 0x8],EDX
// 004279c8: RET
