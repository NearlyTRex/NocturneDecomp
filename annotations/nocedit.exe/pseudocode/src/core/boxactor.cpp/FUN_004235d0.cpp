// Name: core_boxactor.cpp_FUN_004235d0
// Address: 004235d0
// Address Range: [[004235d0, 004235e3]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004235d0()

#include "nocturne.h"

bool core_boxactor_cpp_FUN_004235d0(void)

{
  int in_stack_00000004;
  
  return *(int *)(in_stack_00000004 + 0x178) != 0;
}


// Assembly code:
// 004235d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_boxactor.cpp_FUN_004235d0
//   XREF to: Stack[0x4] (READ)
// 004235d4: CMP dword ptr [EAX + 0x178],0x0
// 004235db: SETNZ AL
// 004235de: AND EAX,0xff
// 004235e3: RET
