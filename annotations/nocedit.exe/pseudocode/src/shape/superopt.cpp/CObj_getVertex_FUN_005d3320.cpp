// Name: shape_superopt.cpp_CObj_getVertex_FUN_005d3320
// Address: 005d3320
// Address Range: [[005d3320, 005d3340]]
// Convention: __cdecl
// Signature: CVert * shape_superopt.cpp_CObj_getVertex_FUN_005d3320(CObj * this_ptr, uint index)

#include "nocturne.h"

CVert * __cdecl shape_superopt_cpp_CObj_getVertex_FUN_005d3320(CObj *this_ptr,uint index)

{
  if ((uint)this_ptr->vertex_count < index) {
    return (CVert *)0x0;
  }
  return this_ptr->vertex_data + index;
}


// Assembly code:
// 005d3320: MOV ECX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CObj_getVertex_FUN_005d3320
//   XREF to: Stack[0x4] (READ)
// 005d3324: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d3328: CMP EDX,dword ptr [ECX]
// 005d332a: JBE 0x005d332f
//   XREF to: 005d332f (CONDITIONAL_JUMP)
// 005d332c: XOR EAX,EAX
//   Label: LAB_005d332c
// 005d332e: RET
// 005d332f: SHL EDX,0x3
//   Label: LAB_005d332f
// 005d3332: LEA EAX,[EDX*0x8 + 0x0]
// 005d3339: SUB EAX,EDX
// 005d333b: MOV EDX,dword ptr [ECX + 0x4]
// 005d333e: ADD EAX,EDX
// 005d3340: RET
