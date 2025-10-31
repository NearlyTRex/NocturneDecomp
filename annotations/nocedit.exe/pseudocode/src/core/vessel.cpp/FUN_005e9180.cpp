// Name: core_vessel.cpp_FUN_005e9180
// Address: 005e9180
// Address Range: [[005e9180, 005e9190]]
// Convention: unknown
// Signature: undefined core_vessel.cpp_FUN_005e9180()
// Cross-references:
//   core_vessel.cpp_CCryptVessel_process_FUN_005e91a0 (005e91a0) at 005e95a1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_vessel.cpp_FUN_005e9180(undefined4 param_1) */

undefined4 core_vessel_cpp_FUN_005e9180(void)

{
  int in_stack_00000004;
  
  return *(undefined4 *)(*(int *)(in_stack_00000004 + 0x3a8) + 0x184);
}


// Assembly code:
// 005e9180: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_vessel.cpp_FUN_005e9180
//   XREF to: Stack[0x4] (READ)
// 005e9184: MOV EAX,dword ptr [EAX + 0x3a8]
// 005e918a: MOV EAX,dword ptr [EAX + 0x184]
// 005e9190: RET
