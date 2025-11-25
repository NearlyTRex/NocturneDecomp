// Name: shape_superopt.cpp_COptimize_FUN_005d7120
// Address: 005d7120
// Address Range: [[005d7120, 005d7132]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_COptimize_FUN_005d7120(COptimize * this_ptr)
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7c85 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d7120(COptimize *this_ptr)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)(this_ptr->field1_0x1c + 8) = in_stack_00000008;
  *(undefined4 *)(this_ptr->field1_0x1c + 0xc) = in_stack_0000000c;
  return;
}


// Assembly code:
// 005d7120: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_COptimize_FUN_005d7120
//   XREF to: Stack[0x4] (READ)
// 005d7124: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d7128: MOV dword ptr [EDX + 0x24],EAX
// 005d712b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005d712f: MOV dword ptr [EDX + 0x28],EAX
// 005d7132: RET
