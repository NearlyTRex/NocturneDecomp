// Name: core_bugs.cpp_FUN_00427b80
// Address: 00427b80
// Address Range: [[00427b80, 00427b94]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427b80()

#include "nocturne.h"

void core_bugs_cpp_FUN_00427b80(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  uVar1 = *in_stack_00000004;
  *in_stack_00000004 = *in_stack_00000008;
  *in_stack_00000008 = uVar1;
  return;
}


// Assembly code:
// 00427b80: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_00427b80
//   XREF to: Stack[0x4] (READ)
// 00427b84: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00427b88: MOV EAX,dword ptr [EAX]
// 00427b8a: MOV EDX,dword ptr [ECX]
// 00427b8c: MOV dword ptr [ECX],EAX
// 00427b8e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00427b92: MOV dword ptr [EAX],EDX
// 00427b94: RET
