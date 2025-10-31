// Name: shape_design.c_clearAllTextureNames_FUN_0046e6b0
// Address: 0046e6b0
// Address Range: [[0046e6b0, 0046e6ec]]
// Convention: __cdecl
// Signature: void shape_design.c_clearAllTextureNames_FUN_0046e6b0(void)
// Cross-references:
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046cc44 [UNCONDITIONAL_CALL]
// Globals:
//   int g_PolygonCount
//   undefined4 DAT_016e9914

#include "nocturne.h"

void __cdecl shape_design_c_clearAllTextureNames_FUN_0046e6b0(void)

{
  int local_14;
  
  for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
    g_ModelPolygonData[local_14].texture_name[0] = '\0';
  }
  return;
}


// Assembly code:
// 0046e6b0: PUSH EBX
//   Label: shape_design.c_clearAllTextureNames_FUN_0046e6b0
// 0046e6b1: PUSH ESI
// 0046e6b2: PUSH EDI
// 0046e6b3: PUSH EBP
// 0046e6b4: MOV EBP,ESP
// 0046e6b6: SUB ESP,0x4
// 0046e6bc: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046e6c3: JMP 0x0046e6cb
//   XREF to: 0046e6cb (UNCONDITIONAL_JUMP)
// 0046e6c5: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046e6c5
//   XREF to: Stack[-0x14] (READ)
// 0046e6c8: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046e6cb: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046e6cb
//   XREF to: Stack[-0x14] (READ)
// 0046e6ce: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0046e6d4: JGE 0x0046e6e6
//   XREF to: 0046e6e6 (CONDITIONAL_JUMP)
// 0046e6d6: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0046e6dd: MOV byte ptr [EAX + 0x16e9914],0x0
//   XREF to: 016e9914 (DATA)
// 0046e6e4: JMP 0x0046e6c5
//   XREF to: 0046e6c5 (UNCONDITIONAL_JUMP)
// 0046e6e6: MOV ESP,EBP
//   Label: LAB_0046e6e6
// 0046e6e8: POP EBP
// 0046e6e9: POP EDI
// 0046e6ea: POP ESI
// 0046e6eb: POP EBX
// 0046e6ec: RET
