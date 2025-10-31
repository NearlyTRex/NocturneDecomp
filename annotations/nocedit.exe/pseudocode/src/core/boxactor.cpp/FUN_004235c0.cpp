// Name: core_boxactor.cpp_FUN_004235c0
// Address: 004235c0
// Address Range: [[004235c0, 004235cb]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004235c0()

#include "nocturne.h"

void core_boxactor_cpp_FUN_004235c0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x38) = in_stack_00000008;
  return;
}


// Assembly code:
// 004235c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_boxactor.cpp_FUN_004235c0
//   XREF to: Stack[0x4] (READ)
// 004235c4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004235c8: MOV dword ptr [EDX + 0x38],EAX
// 004235cb: RET
