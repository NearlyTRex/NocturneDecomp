// Name: shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0
// Address: 005d33d0
// Address Range: [[005d33d0, 005d33f6]]
// Convention: __cdecl
// Signature: CPoly * shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0(CObj * this_ptr, uint index)

#include "nocturne.h"

CPoly * __cdecl shape_superopt_cpp_CObj_getPolygon_FUN_005d33d0(CObj *this_ptr,uint index)

{
  if ((uint)this_ptr->poly_count < index) {
    return (CPoly *)0x0;
  }
  return this_ptr->poly_array + index;
}


// Assembly code:
// 005d33d0: MOV ECX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0
//   XREF to: Stack[0x4] (READ)
// 005d33d4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d33d8: CMP EDX,dword ptr [ECX + 0x8]
// 005d33db: JBE 0x005d33e0
//   XREF to: 005d33e0 (CONDITIONAL_JUMP)
// 005d33dd: XOR EAX,EAX
//   Label: LAB_005d33dd
// 005d33df: RET
// 005d33e0: LEA EAX,[EDX*0x4 + 0x0]
//   Label: LAB_005d33e0
// 005d33e7: SUB EAX,EDX
// 005d33e9: SHL EAX,0x2
// 005d33ec: ADD EAX,EDX
// 005d33ee: SHL EAX,0x3
// 005d33f1: MOV EDX,dword ptr [ECX + 0xc]
// 005d33f4: ADD EAX,EDX
// 005d33f6: RET
