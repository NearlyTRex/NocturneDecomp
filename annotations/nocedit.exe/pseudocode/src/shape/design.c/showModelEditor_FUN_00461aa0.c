// Name: shape_design.c_showModelEditor_FUN_00461aa0
// Address: 00461aa0
// Address Range: [[00461aa0, 00461ad1]]
// Convention: __cdecl
// Signature: void shape_design.c_showModelEditor_FUN_00461aa0(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f691 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_The_Model_Editor_is_not__0061bf7d
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_showModelEditor_FUN_00461aa0(void)

{
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("The Model Editor is not available.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}


// Assembly code:
// 00461aa0: PUSH EBX
//   Label: shape_design.c_showModelEditor_FUN_00461aa0
// 00461aa1: PUSH ESI
// 00461aa2: PUSH EDI
// 00461aa3: PUSH EBP
// 00461aa4: MOV EBP,ESP
// 00461aa6: SUB ESP,0x0
// 00461aac: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00461ab1: PUSH 0x0
// 00461ab3: PUSH 0x0
// 00461ab5: MOV EAX,0x61bf7d
//   XREF to: 0061bf7d (PARAM)
// 00461aba: PUSH EAX
//   XREF to: 0061bf7d (DATA)
// 00461abb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00461ac0: ADD ESP,0xc
// 00461ac3: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00461ac8: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00461acd: POP EBP
// 00461ace: POP EDI
// 00461acf: POP ESI
// 00461ad0: POP EBX
// 00461ad1: RET
