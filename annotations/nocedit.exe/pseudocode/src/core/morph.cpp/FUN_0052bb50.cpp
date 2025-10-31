// Name: core_morph.cpp_FUN_0052bb50
// Address: 0052bb50
// Address Range: [[0052bb50, 0052bb7b]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052bb50()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void core_morph_cpp_FUN_0052bb50(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((((-1 < in_stack_00000004) && (in_stack_00000004 < g_WindowWidth)) && (-1 < in_stack_00000008)
      ) && (in_stack_00000008 < g_WindowHeight)) {
    engine_2d_c_plotPixel_FUN_00401140(in_stack_00000004,in_stack_00000008);
    return;
  }
  return;
}


// Assembly code:
// 0052bb50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_morph.cpp_FUN_0052bb50
//   XREF to: Stack[0x4] (READ)
// 0052bb54: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0052bb58: TEST EAX,EAX
// 0052bb5a: JL 0x0052bb70
//   XREF to: 0052bb70 (CONDITIONAL_JUMP)
// 0052bb5c: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0052bb62: JGE 0x0052bb70
//   XREF to: 0052bb70 (CONDITIONAL_JUMP)
// 0052bb64: TEST EDX,EDX
// 0052bb66: JL 0x0052bb70
//   XREF to: 0052bb70 (CONDITIONAL_JUMP)
// 0052bb68: CMP EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0052bb6e: JL 0x0052bb71
//   XREF to: 0052bb71 (CONDITIONAL_JUMP)
// 0052bb70: RET
//   Label: LAB_0052bb70
// 0052bb71: PUSH EDX
//   Label: LAB_0052bb71
// 0052bb72: PUSH EAX
// 0052bb73: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0052bb78: ADD ESP,0x8
// 0052bb7b: RET
