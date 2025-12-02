// Name: shape_superopt.cpp_COptimize_FUN_005d70d0
// Address: 005d70d0
// Address Range: [[005d70d0, 005d70e2]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_COptimize_FUN_005d70d0(COptimize * this_ptr)
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7c65 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d70d0(COptimize *this_ptr)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)&this_ptr->field1_0x1c = in_stack_00000008;
  *(undefined4 *)((int)&this_ptr->field1_0x1c + 4) = in_stack_0000000c;
  return;
}


// Assembly code:
// 005d70d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_COptimize_FUN_005d70d0
//   XREF to: Stack[0x4] (READ)
// 005d70d4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d70d8: MOV dword ptr [EDX + 0x1c],EAX
// 005d70db: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005d70df: MOV dword ptr [EDX + 0x20],EAX
// 005d70e2: RET
