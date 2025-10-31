// Name: shape_design.c_swapDWords_FUN_00462130
// Address: 00462130
// Address Range: [[00462130, 0046215c]]
// Convention: __cdecl
// Signature: void shape_design.c_swapDWords_FUN_00462130(uint * value1_ptr, uint * value2_ptr)
// Cross-references:
//   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 (00462190) at 004623a3 [UNCONDITIONAL_CALL]
//   shape_design.c_turnModelInsideOut_FUN_004671e0 (004671e0) at 00467281 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_design_c_swapDWords_FUN_00462130(uint *value1_ptr,uint *value2_ptr)

{
  uint uVar1;
  
  uVar1 = *value1_ptr;
  *value1_ptr = *value2_ptr;
  *value2_ptr = uVar1;
  return;
}


// Assembly code:
// 00462130: PUSH EBX
//   Label: shape_design.c_swapDWords_FUN_00462130
// 00462131: PUSH ESI
// 00462132: PUSH EDI
// 00462133: PUSH EBP
// 00462134: MOV EBP,ESP
// 00462136: SUB ESP,0x4
// 0046213c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046213f: MOV EAX,dword ptr [EAX]
// 00462141: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00462144: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00462147: MOV EDX,dword ptr [EAX]
// 00462149: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046214c: MOV dword ptr [EAX],EDX
// 0046214e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00462151: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00462154: MOV dword ptr [EDX],EAX
// 00462156: MOV ESP,EBP
// 00462158: POP EBP
// 00462159: POP EDI
// 0046215a: POP ESI
// 0046215b: POP EBX
// 0046215c: RET
