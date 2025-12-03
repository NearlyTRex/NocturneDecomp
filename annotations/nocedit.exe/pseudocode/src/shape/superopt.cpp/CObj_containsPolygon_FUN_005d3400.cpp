// Name: shape_superopt.cpp_CObj_containsPolygon_FUN_005d3400
// Address: 005d3400
// Address Range: [[005d3400, 005d3433]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_containsPolygon_FUN_005d3400(CObj * this_ptr, CPoly * poly_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_containsPolygon_FUN_005d3400(CObj *this_ptr,CPoly *poly_ptr)

{
  if ((this_ptr->poly_array <= poly_ptr) && (poly_ptr < this_ptr->poly_array + this_ptr->poly_count)
     ) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005d3400: MOV ECX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CObj_containsPolygon_FUN_005d3400
//   XREF to: Stack[0x4] (READ)
// 005d3404: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d3408: CMP EAX,dword ptr [ECX + 0xc]
// 005d340b: JC 0x005d33dd
//   XREF to: 005d33dd (CONDITIONAL_JUMP)
// 005d340d: MOV EDX,dword ptr [ECX + 0x8]
// 005d3410: LEA EAX,[EDX*0x4 + 0x0]
// 005d3417: SUB EAX,EDX
// 005d3419: SHL EAX,0x2
// 005d341c: ADD EDX,EAX
// 005d341e: SHL EDX,0x3
// 005d3421: MOV EAX,dword ptr [ECX + 0xc]
// 005d3424: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d3428: ADD EAX,EDX
// 005d342a: CMP EAX,ECX
// 005d342c: JBE 0x005d33dd
//   XREF to: 005d33dd (CONDITIONAL_JUMP)
// 005d342e: MOV EAX,0x1
// 005d3433: RET
