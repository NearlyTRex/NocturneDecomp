// Name: core_bugs.cpp_FUN_00425620
// Address: 00425620
// Address Range: [[00425620, 0042563d]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425620()

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00425620(undefined4 param_1) */

undefined4 core_bugs_cpp_FUN_00425620(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x70) == 2) {
    return 2;
  }
  if (*(int *)(in_stack_00000004 + 0xbebc) == 3) {
    return 2;
  }
  return 0;
}


// Assembly code:
// 00425620: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_00425620
//   XREF to: Stack[0x4] (READ)
// 00425624: MOV EDX,dword ptr [EAX + 0x70]
// 00425627: CMP EDX,0x2
// 0042562a: JZ 0x0042563b
//   XREF to: 0042563b (CONDITIONAL_JUMP)
// 0042562c: CMP dword ptr [EAX + 0xbebc],0x3
// 00425633: JNZ 0x00425610
//   XREF to: 00425610 (CONDITIONAL_JUMP)
// 00425635: MOV EAX,0x2
// 0042563a: RET
// 0042563b: MOV EAX,EDX
//   Label: LAB_0042563b
// 0042563d: RET
