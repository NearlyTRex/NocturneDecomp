// Name: core_skeledit.cpp_FUN_00589500
// Address: 00589500
// Address Range: [[00589500, 00589523]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589500()
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589500(void)

{
  char *in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  while ((g_CharacterClassificationTable[(byte)(*in_stack_0000000c + 1)] & 2U) != 0) {
    in_stack_0000000c = in_stack_0000000c + 1;
  }
  return;
}


// Assembly code:
// 00589500: PUSH 0x4
//   Label: core_skeledit.cpp_FUN_00589500
// 00589505: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058950a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0058950e: MOV DL,byte ptr [EAX]
//   Label: LAB_0058950e
// 00589510: INC DL
// 00589512: AND EDX,0xff
// 00589518: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0058951f: JZ 0x005894f1
//   XREF to: 005894f1 (CONDITIONAL_JUMP)
// 00589521: INC EAX
// 00589522: JMP 0x0058950e
//   XREF to: 0058950e (UNCONDITIONAL_JUMP)
