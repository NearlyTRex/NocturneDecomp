// Name: core_manpuz.cpp_FUN_0050b340
// Address: 0050b340
// Address Range: [[0050b340, 0050b35f]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b340()

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b340(undefined4 param_1, undefined4
   param_2) */

undefined4 core_manpuz_cpp_FUN_0050b340(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x2d4) != 0) {
    return 0;
  }
  *(undefined4 *)(in_stack_00000004 + 0x2d4) = in_stack_00000008;
  return 1;
}


// Assembly code:
// 0050b340: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_manpuz.cpp_FUN_0050b340
//   XREF to: Stack[0x4] (READ)
// 0050b344: CMP dword ptr [EAX + 0x2d4],0x0
// 0050b34b: JZ 0x0050b350
//   XREF to: 0050b350 (CONDITIONAL_JUMP)
// 0050b34d: XOR EAX,EAX
// 0050b34f: RET
// 0050b350: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0050b350
//   XREF to: Stack[0x8] (READ)
// 0050b354: MOV dword ptr [EAX + 0x2d4],EDX
// 0050b35a: MOV EAX,0x1
// 0050b35f: RET
