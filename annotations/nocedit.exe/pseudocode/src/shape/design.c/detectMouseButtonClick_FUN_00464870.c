// Name: shape_design.c_detectMouseButtonClick_FUN_00464870
// Address: 00464870
// Address Range: [[00464870, 004648d6]]
// Convention: __cdecl
// Signature: int shape_design.c_detectMouseButtonClick_FUN_00464870(int mouse_button_mask)
// Cross-references:
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464b72 [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464e63 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MouseButtonClickCounter
//   int g_MouseButtonFlags

#include "nocturne.h"

int __cdecl shape_design_c_detectMouseButtonClick_FUN_00464870(int mouse_button_mask)

{
  uint local_1c;
  
  if ((g_MouseButtonFlags & mouse_button_mask) != 0) {
    g_MouseButtonClickCounter = g_MouseButtonClickCounter + 1;
  }
  if ((g_MouseButtonClickCounter != 0) && ((g_MouseButtonFlags & mouse_button_mask) == 0)) {
    g_MouseButtonClickCounter = 0;
  }
  local_1c = (uint)(g_MouseButtonClickCounter == 1);
  return local_1c;
}


// Assembly code:
// 00464870: PUSH EBX
//   Label: shape_design.c_detectMouseButtonClick_FUN_00464870
// 00464871: PUSH ESI
// 00464872: PUSH EDI
// 00464873: PUSH EBP
// 00464874: MOV EBP,ESP
// 00464876: SUB ESP,0xc
// 0046487c: MOV EAX,[0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 00464881: AND EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00464884: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00464887: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 0046488b: JZ 0x00464893
//   XREF to: 00464893 (CONDITIONAL_JUMP)
// 0046488d: INC dword ptr [0x015c4840]
//   XREF to: 015c4840 (READ_WRITE)
// 00464893: CMP dword ptr [0x015c4840],0x0
//   Label: LAB_00464893
//   XREF to: 015c4840 (READ)
// 0046489a: JZ 0x004648a2
//   XREF to: 004648a2 (CONDITIONAL_JUMP)
// 0046489c: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 004648a0: JZ 0x004648a4
//   XREF to: 004648a4 (CONDITIONAL_JUMP)
// 004648a2: JMP 0x004648ae
//   Label: LAB_004648a2
//   XREF to: 004648ae (UNCONDITIONAL_JUMP)
// 004648a4: MOV dword ptr [0x015c4840],0x0
//   Label: LAB_004648a4
//   XREF to: 015c4840 (WRITE)
// 004648ae: CMP dword ptr [0x015c4840],0x1
//   Label: LAB_004648ae
//   XREF to: 015c4840 (READ)
// 004648b5: JNZ 0x004648c0
//   XREF to: 004648c0 (CONDITIONAL_JUMP)
// 004648b7: MOV dword ptr [EBP + -0xc],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 004648be: JMP 0x004648c7
//   XREF to: 004648c7 (UNCONDITIONAL_JUMP)
// 004648c0: MOV dword ptr [EBP + -0xc],0x0
//   Label: LAB_004648c0
//   XREF to: Stack[-0x1c] (WRITE)
// 004648c7: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004648c7
//   XREF to: Stack[-0x1c] (READ)
// 004648ca: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004648cd: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004648d0: MOV ESP,EBP
// 004648d2: POP EBP
// 004648d3: POP EDI
// 004648d4: POP ESI
// 004648d5: POP EBX
// 004648d6: RET
