// Name: core_gabriela.cpp_FUN_004d75b0
// Address: 004d75b0
// Address Range: [[004d75b0, 004d75d3]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d75b0()

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d75b0(undefined4 param_1, undefined4
   param_2) */

void core_gabriela_cpp_FUN_004d75b0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(undefined4 *)(in_stack_00000004 + 0x1fbd4) = 3;
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x1fbd4) = 0;
  return;
}


// Assembly code:
// 004d75b0: CMP dword ptr [ESP + 0x8],0x0
//   Label: core_gabriela.cpp_FUN_004d75b0
//   XREF to: Stack[0x8] (READ)
// 004d75b5: JZ 0x004d75c7
//   XREF to: 004d75c7 (CONDITIONAL_JUMP)
// 004d75b7: MOV EAX,0x3
// 004d75bc: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004d75c0: MOV dword ptr [EDX + 0x1fbd4],EAX
// 004d75c6: RET
// 004d75c7: XOR EAX,EAX
//   Label: LAB_004d75c7
// 004d75c9: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004d75cd: MOV dword ptr [EDX + 0x1fbd4],EAX
// 004d75d3: RET
