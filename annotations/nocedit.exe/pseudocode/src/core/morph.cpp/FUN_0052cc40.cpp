// Name: core_morph.cpp_FUN_0052cc40
// Address: 0052cc40
// Address Range: [[0052cc40, 0052cc48]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052cc40()

#include "nocturne.h"

int core_morph_cpp_FUN_0052cc40(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  return in_stack_00000004 + in_stack_00000008;
}


// Assembly code:
// 0052cc40: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_morph.cpp_FUN_0052cc40
//   XREF to: Stack[0x4] (READ)
// 0052cc44: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0052cc48: RET
