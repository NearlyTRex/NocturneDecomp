// Name: shape_design.c_smoothMesh_FUN_0046ed00
// Address: 0046ed00
// Address Range: [[0046ed00, 0046ed4a]]
// Convention: __cdecl
// Signature: void shape_design.c_smoothMesh_FUN_0046ed00(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f7a1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Mesh_smoothed_0061e0a3
//   CDSEModel g_CDSEModelInstance
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_dsemodel.cpp_CDSEModel_doNothing_FUN_00490020
//   shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_smoothMesh_FUN_0046ed00(void)

{
  shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(&g_CDSEModelInstance,0);
  shape_dsemodel_cpp_CDSEModel_doNothing_FUN_00490020(&g_CDSEModelInstance);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Mesh smoothed.",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}


// Assembly code:
// 0046ed00: PUSH EBX
//   Label: shape_design.c_smoothMesh_FUN_0046ed00
// 0046ed01: PUSH ESI
// 0046ed02: PUSH EDI
// 0046ed03: PUSH EBP
// 0046ed04: MOV EBP,ESP
// 0046ed06: SUB ESP,0x0
// 0046ed0c: PUSH 0x0
// 0046ed0e: MOV EAX,0x1eb2760
//   XREF to: 01eb2760 (PARAM)
// 0046ed13: PUSH EAX
//   XREF to: 01eb2760 (DATA)
// 0046ed14: CALL shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
//   XREF to: 0048f770 (UNCONDITIONAL_CALL)
// 0046ed19: ADD ESP,0x8
// 0046ed1c: MOV EAX,0x1eb2760
//   XREF to: 01eb2760 (PARAM)
// 0046ed21: PUSH EAX
//   XREF to: 01eb2760 (DATA)
// 0046ed22: CALL shape_dsemodel.cpp_CDSEModel_doNothing_FUN_00490020
//   XREF to: 00490020 (UNCONDITIONAL_CALL)
// 0046ed27: ADD ESP,0x4
// 0046ed2a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046ed2f: PUSH 0x0
// 0046ed31: PUSH 0x0
// 0046ed33: MOV EAX,0x61e0a3
//   XREF to: 0061e0a3 (PARAM)
// 0046ed38: PUSH EAX
//   XREF to: 0061e0a3 (DATA)
// 0046ed39: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046ed3e: ADD ESP,0xc
// 0046ed41: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0046ed46: POP EBP
// 0046ed47: POP EDI
// 0046ed48: POP ESI
// 0046ed49: POP EBX
// 0046ed4a: RET
