// Name: shape_superopt.cpp_CObj_FUN_005d22b0
// Address: 005d22b0
// Address Range: [[005d22b0, 005d22c6]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d22b0(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d22b0(CObj *this_ptr)

{
  if ((this_ptr->vertex_data != (void *)0x0) && (this_ptr->poly_array != (CPoly *)0x0)) {
    return this_ptr->field5_0x14;
  }
  return 0;
}


// Assembly code:
// 005d22b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CObj_FUN_005d22b0
//   XREF to: Stack[0x4] (READ)
// 005d22b4: CMP dword ptr [EAX + 0x4],0x0
// 005d22b8: JZ 0x005d22c4
//   XREF to: 005d22c4 (CONDITIONAL_JUMP)
// 005d22ba: CMP dword ptr [EAX + 0xc],0x0
// 005d22be: JZ 0x005d22c4
//   XREF to: 005d22c4 (CONDITIONAL_JUMP)
// 005d22c0: MOV EAX,dword ptr [EAX + 0x14]
// 005d22c3: RET
// 005d22c4: XOR EAX,EAX
//   Label: LAB_005d22c4
// 005d22c6: RET
