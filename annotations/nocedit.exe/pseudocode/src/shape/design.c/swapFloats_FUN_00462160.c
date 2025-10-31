// Name: shape_design.c_swapFloats_FUN_00462160
// Address: 00462160
// Address Range: [[00462160, 0046218c]]
// Convention: __cdecl
// Signature: void shape_design.c_swapFloats_FUN_00462160(float * value1_ptr, float * value2_ptr)
// Cross-references:
//   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 (00462190) at 004623c3 [UNCONDITIONAL_CALL]
//   shape_design.c_turnModelInsideOut_FUN_004671e0 (004671e0) at 004672cb [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_design_c_swapFloats_FUN_00462160(float *value1_ptr,float *value2_ptr)

{
  float fVar1;
  
  fVar1 = *value1_ptr;
  *value1_ptr = *value2_ptr;
  *value2_ptr = fVar1;
  return;
}


// Assembly code:
// 00462160: PUSH EBX
//   Label: shape_design.c_swapFloats_FUN_00462160
// 00462161: PUSH ESI
// 00462162: PUSH EDI
// 00462163: PUSH EBP
// 00462164: MOV EBP,ESP
// 00462166: SUB ESP,0x4
// 0046216c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046216f: MOV EAX,dword ptr [EAX]
// 00462171: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00462174: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00462177: FLD float ptr [EAX]
// 00462179: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046217c: FSTP float ptr [EAX]
// 0046217e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00462181: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00462184: MOV dword ptr [EDX],EAX
// 00462186: MOV ESP,EBP
// 00462188: POP EBP
// 00462189: POP EDI
// 0046218a: POP ESI
// 0046218b: POP EBX
// 0046218c: RET
