// Name: shape_design.c_wrapCoordinate_FUN_0046acc0
// Address: 0046acc0
// Address Range: [[0046acc0, 0046acff]]
// Convention: __cdecl
// Signature: int shape_design.c_wrapCoordinate_FUN_0046acc0(int coordinate, int dimension)
// Cross-references:
//   shape_design.c_samplePixelAndAccumulate_FUN_0046ad00 (0046ad00) at 0046ad27 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_design_c_wrapCoordinate_FUN_0046acc0(int coordinate,int dimension)

{
  if (coordinate < 0) {
    coordinate = dimension - -coordinate % dimension;
  }
  return coordinate % dimension;
}


// Assembly code:
// 0046acc0: PUSH EBX
//   Label: shape_design.c_wrapCoordinate_FUN_0046acc0
// 0046acc1: PUSH ESI
// 0046acc2: PUSH EDI
// 0046acc3: PUSH EBP
// 0046acc4: MOV EBP,ESP
// 0046acc6: SUB ESP,0x4
// 0046accc: CMP dword ptr [EBP + 0x14],0x0
//   XREF to: Stack[0x4] (READ)
// 0046acd0: JGE 0x0046ace7
//   XREF to: 0046ace7 (CONDITIONAL_JUMP)
// 0046acd2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046acd5: NEG EDX
// 0046acd7: MOV EAX,EDX
// 0046acd9: SAR EDX,0x1f
// 0046acdc: IDIV dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046acdf: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046ace2: SUB EAX,EDX
// 0046ace4: MOV dword ptr [EBP + 0x14],EAX
//   XREF to: Stack[0x4] (WRITE)
// 0046ace7: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046ace7
//   XREF to: Stack[0x4] (READ)
// 0046acea: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046aced: SAR EDX,0x1f
// 0046acf0: IDIV dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046acf3: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0046acf6: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046acf9: MOV ESP,EBP
// 0046acfb: POP EBP
// 0046acfc: POP EDI
// 0046acfd: POP ESI
// 0046acfe: POP EBX
// 0046acff: RET
