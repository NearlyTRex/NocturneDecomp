// Name: shape_meshlod.cpp_FUN_0051f0a0
// Address: 0051f0a0
// Address Range: [[0051f0a0, 0051f0ae]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051f0a0()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051bd30 (0051bd30) at 0051be75 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 * shape_meshlod_cpp_FUN_0051f0a0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 0051f0a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_0051f0a0
//   XREF to: Stack[0x4] (READ)
// 0051f0a4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0051f0a8: MOV EAX,dword ptr [EAX]
// 0051f0aa: MOV dword ptr [EDX],EAX
// 0051f0ac: MOV EAX,EDX
// 0051f0ae: RET
