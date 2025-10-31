// Name: core_cloth.cpp_FUN_0043c6b0
// Address: 0043c6b0
// Address Range: [[0043c6b0, 0043c6db]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c6b0()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c6b0(void)

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
// 0043c6b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_cloth.cpp_FUN_0043c6b0
//   XREF to: Stack[0x4] (READ)
// 0043c6b4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0043c6b8: TEST EAX,EAX
// 0043c6ba: JL 0x0043c6d0
//   XREF to: 0043c6d0 (CONDITIONAL_JUMP)
// 0043c6bc: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0043c6c2: JGE 0x0043c6d0
//   XREF to: 0043c6d0 (CONDITIONAL_JUMP)
// 0043c6c4: TEST EDX,EDX
// 0043c6c6: JL 0x0043c6d0
//   XREF to: 0043c6d0 (CONDITIONAL_JUMP)
// 0043c6c8: CMP EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0043c6ce: JL 0x0043c6d1
//   XREF to: 0043c6d1 (CONDITIONAL_JUMP)
// 0043c6d0: RET
//   Label: LAB_0043c6d0
// 0043c6d1: PUSH EDX
//   Label: LAB_0043c6d1
// 0043c6d2: PUSH EAX
// 0043c6d3: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0043c6d8: ADD ESP,0x8
// 0043c6db: RET
