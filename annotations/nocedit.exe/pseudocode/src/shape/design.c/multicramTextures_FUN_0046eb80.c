// Name: shape_design.c_multicramTextures_FUN_0046eb80
// Address: 0046eb80
// Address Range: [[0046eb80, 0046eb9e]]
// Convention: __cdecl
// Signature: void shape_design.c_multicramTextures_FUN_0046eb80(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f78d [UNCONDITIONAL_CALL]
// Globals:
//   CMultiCram g_CMultiCramInstance
// Function calls:
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70

#include "nocturne.h"

void __cdecl shape_design_c_multicramTextures_FUN_0046eb80(void)

{
  shape_multicrm_cpp_CMultiCram_run_FUN_0053ee70(&g_CMultiCramInstance);
  return;
}


// Assembly code:
// 0046eb80: PUSH EBX
//   Label: shape_design.c_multicramTextures_FUN_0046eb80
// 0046eb81: PUSH ESI
// 0046eb82: PUSH EDI
// 0046eb83: PUSH EBP
// 0046eb84: MOV EBP,ESP
// 0046eb86: SUB ESP,0x0
// 0046eb8c: MOV EAX,0x1eb17bc
//   XREF to: 01eb17bc (PARAM)
// 0046eb91: PUSH EAX
//   XREF to: 01eb17bc (DATA)
// 0046eb92: CALL shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70
//   XREF to: 0053ee70 (UNCONDITIONAL_CALL)
// 0046eb97: ADD ESP,0x4
// 0046eb9a: POP EBP
// 0046eb9b: POP EDI
// 0046eb9c: POP ESI
// 0046eb9d: POP EBX
// 0046eb9e: RET
