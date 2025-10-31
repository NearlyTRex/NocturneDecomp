// Name: shape_design.c_createReversedQuadPolygon_FUN_0045e040
// Address: 0045e040
// Address Range: [[0045e040, 0045e068]]
// Convention: unknown
// Signature: undefined shape_design.c_createReversedQuadPolygon_FUN_0045e040()
// Cross-references:
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e471 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_design.c_createQuadPolygon_FUN_0045df60

#include "nocturne.h"

void shape_design_c_createReversedQuadPolygon_FUN_0045e040(void)

{
  shape_design_c_createQuadPolygon_FUN_0045df60();
  return;
}


// Assembly code:
// 0045e040: PUSH EBX
//   Label: shape_design.c_createReversedQuadPolygon_FUN_0045e040
// 0045e041: PUSH ESI
// 0045e042: PUSH EDI
// 0045e043: PUSH EBP
// 0045e044: MOV EBP,ESP
// 0045e046: SUB ESP,0x0
// 0045e04c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045e04f: PUSH EAX
// 0045e050: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045e053: PUSH EAX
// 0045e054: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045e057: PUSH EAX
// 0045e058: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0045e05b: PUSH EAX
// 0045e05c: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e061: ADD ESP,0x10
// 0045e064: POP EBP
// 0045e065: POP EDI
// 0045e066: POP ESI
// 0045e067: POP EBX
// 0045e068: RET
