// Name: shape_superopt.cpp_FUN_005cc670
// Address: 005cc670
// Address Range: [[005cc670, 005cc694]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cc670()
// Cross-references:
//   shape_superopt.cpp_FUN_005cc620 (005cc620) at 005cc648 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cc670(undefined4 param_1, undefined4 param_2) */

void shape_superopt_cpp_FUN_005cc670(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  in_stack_00000004[0x18] = 0;
  *in_stack_00000004 = in_stack_00000008;
  in_stack_00000004[0x16] = 0;
  (**(code **)(in_stack_00000004[0x19] + 0x50))();
  return;
}


// Assembly code:
// 005cc670: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005cc670
//   XREF to: Stack[0x4] (READ)
// 005cc674: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005cc678: MOV dword ptr [EAX + 0x60],0x0
// 005cc67f: PUSH -0x1
// 005cc681: MOV dword ptr [EAX],EDX
// 005cc683: PUSH EAX
// 005cc684: MOV EDX,dword ptr [EAX + 0x64]
// 005cc687: MOV dword ptr [EAX + 0x58],0x0
// 005cc68e: CALL dword ptr [EDX + 0x50]
// 005cc691: ADD ESP,0x8
// 005cc694: RET
