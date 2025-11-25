// Name: shape_superopt.cpp_COptimize_FUN_005d71c0
// Address: 005d71c0
// Address Range: [[005d71c0, 005d71cb]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_COptimize_FUN_005d71c0(COptimize * this_ptr)
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7cb1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d71c0(COptimize *this_ptr)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(this_ptr->field1_0x1c + 0x18) = in_stack_00000008;
  return;
}


// Assembly code:
// 005d71c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_COptimize_FUN_005d71c0
//   XREF to: Stack[0x4] (READ)
// 005d71c4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d71c8: MOV dword ptr [EDX + 0x34],EAX
// 005d71cb: RET
