// Name: core_crate.cpp_FUN_00448960
// Address: 00448960
// Address Range: [[00448960, 0044897a]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448960()

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448960(undefined4 param_1) */

undefined4 core_crate_cpp_FUN_00448960(void)

{
  int in_stack_00000004;
  
  if ((*(int *)(in_stack_00000004 + 0x70) == 1) && (*(int *)(in_stack_00000004 + 0x2d4) == 0)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00448960: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_crate.cpp_FUN_00448960
//   XREF to: Stack[0x4] (READ)
// 00448964: MOV EDX,dword ptr [EAX + 0x70]
// 00448967: CMP EDX,0x1
// 0044896a: JNZ 0x00448975
//   XREF to: 00448975 (CONDITIONAL_JUMP)
// 0044896c: CMP dword ptr [EAX + 0x2d4],0x0
// 00448973: JZ 0x00448978
//   XREF to: 00448978 (CONDITIONAL_JUMP)
// 00448975: XOR EAX,EAX
//   Label: LAB_00448975
// 00448977: RET
// 00448978: MOV EAX,EDX
//   Label: LAB_00448978
// 0044897a: RET
