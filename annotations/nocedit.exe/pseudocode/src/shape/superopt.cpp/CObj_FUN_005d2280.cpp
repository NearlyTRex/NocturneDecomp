// Name: shape_superopt.cpp_CObj_FUN_005d2280
// Address: 005d2280
// Address Range: [[005d2280, 005d22ad]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_FUN_005d2280(CObj * this_ptr)
// Cross-references:
//   shape_superopt.cpp_FUN_005d2230 (005d2230) at 005d223d [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_FUN_005d2280(CObj *this_ptr)

{
  this_ptr->vertex_data = (void *)0x0;
  this_ptr->count = 0;
  this_ptr->poly_array = (CPoly *)0x0;
  this_ptr->field4_0x10 = 0;
  this_ptr->field5_0x14 = 1;
  this_ptr->field0_0x0 = 0;
  return;
}


// Assembly code:
// 005d2280: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CObj_FUN_005d2280
//   XREF to: Stack[0x4] (READ)
// 005d2284: MOV dword ptr [EAX + 0x4],0x0
// 005d228b: MOV dword ptr [EAX + 0x8],0x0
// 005d2292: MOV dword ptr [EAX + 0xc],0x0
// 005d2299: MOV dword ptr [EAX + 0x10],0x0
// 005d22a0: MOV dword ptr [EAX + 0x14],0x1
// 005d22a7: MOV dword ptr [EAX],0x0
// 005d22ad: RET
