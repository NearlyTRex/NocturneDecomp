// Name: core_flies.cpp_FUN_004cc2c0
// Address: 004cc2c0
// Address Range: [[004cc2c0, 004cc2f2]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc2c0()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   core_flies.cpp_FUN_004cc230

#include "nocturne.h"

void core_flies_cpp_FUN_004cc2c0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((((-1 < in_stack_00000004) && (in_stack_00000004 < g_WindowWidth)) && (-1 < in_stack_00000008)
      ) && (in_stack_00000008 < g_WindowHeight)) {
    core_flies_cpp_FUN_004cc230();
    return;
  }
  return;
}


// Assembly code:
// 004cc2c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_flies.cpp_FUN_004cc2c0
//   XREF to: Stack[0x4] (READ)
// 004cc2c4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004cc2c8: TEST EDX,EDX
// 004cc2ca: JL 0x004cc2e0
//   XREF to: 004cc2e0 (CONDITIONAL_JUMP)
// 004cc2cc: CMP EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004cc2d2: JGE 0x004cc2e0
//   XREF to: 004cc2e0 (CONDITIONAL_JUMP)
// 004cc2d4: TEST EAX,EAX
// 004cc2d6: JL 0x004cc2e0
//   XREF to: 004cc2e0 (CONDITIONAL_JUMP)
// 004cc2d8: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004cc2de: JL 0x004cc2e1
//   XREF to: 004cc2e1 (CONDITIONAL_JUMP)
// 004cc2e0: RET
//   Label: LAB_004cc2e0
// 004cc2e1: PUSH ESI
//   Label: LAB_004cc2e1
// 004cc2e2: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004cc2e6: PUSH ESI
// 004cc2e7: PUSH EAX
// 004cc2e8: PUSH EDX
// 004cc2e9: CALL core_flies.cpp_FUN_004cc230
//   XREF to: 004cc230 (UNCONDITIONAL_CALL)
// 004cc2ee: ADD ESP,0xc
// 004cc2f1: POP ESI
// 004cc2f2: RET
