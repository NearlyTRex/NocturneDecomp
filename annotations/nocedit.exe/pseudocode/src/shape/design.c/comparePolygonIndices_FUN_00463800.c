// Name: shape_design.c_comparePolygonIndices_FUN_00463800
// Address: 00463800
// Address Range: [[00463800, 0046382e]]
// Convention: __cdecl
// Signature: int shape_design.c_comparePolygonIndices_FUN_00463800(int * first_value_ptr, int * second_value_ptr)
// Cross-references:
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00464744 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
shape_design_c_comparePolygonIndices_FUN_00463800(int *first_value_ptr,int *second_value_ptr)

{
  return *second_value_ptr - *first_value_ptr;
}


// Assembly code:
// 00463800: PUSH EBX
//   Label: shape_design.c_comparePolygonIndices_FUN_00463800
// 00463801: PUSH ESI
// 00463802: PUSH EDI
// 00463803: PUSH EBP
// 00463804: MOV EBP,ESP
// 00463806: SUB ESP,0xc
// 0046380c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046380f: MOV EAX,dword ptr [EAX]
// 00463811: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00463814: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00463817: MOV EAX,dword ptr [EAX]
// 00463819: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046381c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046381f: SUB EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00463822: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00463825: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463828: MOV ESP,EBP
// 0046382a: POP EBP
// 0046382b: POP EDI
// 0046382c: POP ESI
// 0046382d: POP EBX
// 0046382e: RET
