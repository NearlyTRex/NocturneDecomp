// Name: shape_design.c_renderPolygonsByPart_FUN_004616a0
// Address: 004616a0
// Address Range: [[004616a0, 004616ec]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonsByPart_FUN_004616a0(int part_id)
// Cross-references:
//   shape_design.c_traverseSpatialTree_FUN_004616f0 (004616f0) at 00461715 [UNCONDITIONAL_CALL]
// Globals:
//   int g_PolygonCount
//   undefined4 DAT_016e9a88
// Function calls:
//   shape_design.c_renderSinglePolygon_FUN_0045ce20

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonsByPart_FUN_004616a0(int part_id)

{
  int local_14;
  
  for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
    if (g_ModelPolygonData[local_14].part_assignment == part_id) {
      shape_design_c_renderSinglePolygon_FUN_0045ce20(local_14);
    }
  }
  return;
}


// Assembly code:
// 004616a0: PUSH EBX
//   Label: shape_design.c_renderPolygonsByPart_FUN_004616a0
// 004616a1: PUSH ESI
// 004616a2: PUSH EDI
// 004616a3: PUSH EBP
// 004616a4: MOV EBP,ESP
// 004616a6: SUB ESP,0x4
// 004616ac: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 004616b3: JMP 0x004616bb
//   XREF to: 004616bb (UNCONDITIONAL_JUMP)
// 004616b5: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_004616b5
//   XREF to: Stack[-0x14] (READ)
// 004616b8: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 004616bb: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_004616bb
//   XREF to: Stack[-0x14] (READ)
// 004616be: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 004616c4: JGE 0x004616e6
//   XREF to: 004616e6 (CONDITIONAL_JUMP)
// 004616c6: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 004616cd: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 004616d3: CMP EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004616d6: JNZ 0x004616e4
//   XREF to: 004616e4 (CONDITIONAL_JUMP)
// 004616d8: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004616db: PUSH EAX
// 004616dc: CALL shape_design.c_renderSinglePolygon_FUN_0045ce20
//   XREF to: 0045ce20 (UNCONDITIONAL_CALL)
// 004616e1: ADD ESP,0x4
// 004616e4: JMP 0x004616b5
//   Label: LAB_004616e4
//   XREF to: 004616b5 (UNCONDITIONAL_JUMP)
// 004616e6: MOV ESP,EBP
//   Label: LAB_004616e6
// 004616e8: POP EBP
// 004616e9: POP EDI
// 004616ea: POP ESI
// 004616eb: POP EBX
// 004616ec: RET
