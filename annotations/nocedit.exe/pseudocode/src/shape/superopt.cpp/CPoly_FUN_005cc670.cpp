// Name: shape_superopt.cpp_CPoly_FUN_005cc670
// Address: 005cc670
// Address Range: [[005cc670, 005cc694]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cc670(CPoly * this_ptr)
// Cross-references:
//   shape_superopt.cpp_CPoly_ctor_FUN_005cc620 (005cc620) at 005cc648 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cc670(CPoly *this_ptr)

{
  CObj *in_stack_00000008;
  
  this_ptr->field8_0x60 = 0;
  this_ptr->parent_obj = in_stack_00000008;
  this_ptr->field6_0x58 = 0;
  (**(code **)((int)this_ptr->vtable + 0x50))();
  return;
}


// Assembly code:
// 005cc670: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CPoly_FUN_005cc670
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
