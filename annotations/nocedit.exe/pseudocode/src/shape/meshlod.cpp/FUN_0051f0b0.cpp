// Name: shape_meshlod.cpp_FUN_0051f0b0
// Address: 0051f0b0
// Address Range: [[0051f0b0, 0051f0be]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051f0b0()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051bd30 (0051bd30) at 0051be62 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 * shape_meshlod_cpp_FUN_0051f0b0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 0051f0b0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_0051f0b0
//   XREF to: Stack[0x4] (READ)
// 0051f0b4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0051f0b8: MOV EAX,dword ptr [EAX]
// 0051f0ba: MOV dword ptr [EDX],EAX
// 0051f0bc: MOV EAX,EDX
// 0051f0be: RET
