// Name: shape_meshlod.cpp_FUN_0051f090
// Address: 0051f090
// Address Range: [[0051f090, 0051f09e]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051f090()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051bd30 (0051bd30) at 0051be88 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 * shape_meshlod_cpp_FUN_0051f090(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 0051f090: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_0051f090
//   XREF to: Stack[0x4] (READ)
// 0051f094: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0051f098: MOV EAX,dword ptr [EAX]
// 0051f09a: MOV dword ptr [EDX],EAX
// 0051f09c: MOV EAX,EDX
// 0051f09e: RET
