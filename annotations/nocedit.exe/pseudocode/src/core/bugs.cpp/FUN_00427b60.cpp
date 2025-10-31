// Name: core_bugs.cpp_FUN_00427b60
// Address: 00427b60
// Address Range: [[00427b60, 00427b66]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427b60()

#include "nocturne.h"

undefined4 core_bugs_cpp_FUN_00427b60(void)

{
  undefined4 *in_stack_00000004;
  
  return *in_stack_00000004;
}


// Assembly code:
// 00427b60: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_00427b60
//   XREF to: Stack[0x4] (READ)
// 00427b64: MOV EAX,dword ptr [EAX]
// 00427b66: RET
