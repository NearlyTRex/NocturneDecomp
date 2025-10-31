// Name: core_skeledit.cpp_FUN_00599650
// Address: 00599650
// Address Range: [[00599650, 00599668]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00599650()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

undefined4 * core_skeledit_cpp_FUN_00599650(void)

{
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  *in_stack_0000000c = *in_stack_00000010;
  return in_stack_0000000c;
}


// Assembly code:
// 00599650: PUSH 0x4
//   Label: core_skeledit.cpp_FUN_00599650
// 00599655: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0059965a: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059965e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00599662: MOV EAX,dword ptr [EAX]
// 00599664: MOV dword ptr [EDX],EAX
// 00599666: MOV EAX,EDX
// 00599668: RET
