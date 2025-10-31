// Name: core_bugs.cpp_FUN_00427b40
// Address: 00427b40
// Address Range: [[00427b40, 00427b50]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427b40()

#include "nocturne.h"

undefined4 core_bugs_cpp_FUN_00427b40(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  return *(undefined4 *)(in_stack_00000008 * 4 + in_stack_00000004 + 0x2c);
}


// Assembly code:
// 00427b40: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_bugs.cpp_FUN_00427b40
//   XREF to: Stack[0x8] (READ)
// 00427b44: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00427b48: SHL EAX,0x2
// 00427b4b: ADD EAX,EDX
// 00427b4d: MOV EAX,dword ptr [EAX + 0x2c]
// 00427b50: RET
