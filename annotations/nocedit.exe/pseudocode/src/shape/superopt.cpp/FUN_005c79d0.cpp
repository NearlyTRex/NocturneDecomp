// Name: shape_superopt.cpp_FUN_005c79d0
// Address: 005c79d0
// Address Range: [[005c79d0, 005c79e1]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c79d0()
// Cross-references:
//   shape_superopt.cpp_FUN_005d7000 (005d7000) at 005d70a5 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_superopt.cpp_FUN_005c79f0

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005c79d0(undefined4 param_1) */

undefined4 shape_superopt_cpp_FUN_005c79d0(void)

{
  undefined4 in_stack_00000004;
  
  shape_superopt_cpp_FUN_005c79f0();
  return in_stack_00000004;
}


// Assembly code:
// 005c79d0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c79d0
// 005c79d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c79d5: PUSH EBX
// 005c79d6: CALL shape_superopt.cpp_FUN_005c79f0
//   XREF to: 005c79f0 (UNCONDITIONAL_CALL)
// 005c79db: ADD ESP,0x4
// 005c79de: MOV EAX,EBX
// 005c79e0: POP EBX
// 005c79e1: RET
