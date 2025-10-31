// Name: core_manpuz.cpp_FUN_0050b3c0
// Address: 0050b3c0
// Address Range: [[0050b3c0, 0050b3db]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b3c0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b3c0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_0050b3c0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0x2d4)) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x2d4) = 0;
  return;
}


// Assembly code:
// 0050b3c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_manpuz.cpp_FUN_0050b3c0
//   XREF to: Stack[0x4] (READ)
// 0050b3c4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0050b3c8: CMP EDX,dword ptr [EAX + 0x2d4]
// 0050b3ce: JZ 0x0050b3d1
//   XREF to: 0050b3d1 (CONDITIONAL_JUMP)
// 0050b3d0: RET
// 0050b3d1: MOV dword ptr [EAX + 0x2d4],0x0
//   Label: LAB_0050b3d1
// 0050b3db: RET
