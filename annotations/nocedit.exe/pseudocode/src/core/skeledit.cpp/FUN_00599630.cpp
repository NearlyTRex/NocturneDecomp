// Name: core_skeledit.cpp_FUN_00599630
// Address: 00599630
// Address Range: [[00599630, 00599648]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00599630()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

undefined4 * core_skeledit_cpp_FUN_00599630(void)

{
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  *in_stack_0000000c = *in_stack_00000010;
  return in_stack_0000000c;
}


// Assembly code:
// 00599630: PUSH 0x4
//   Label: core_skeledit.cpp_FUN_00599630
// 00599635: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0059963a: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059963e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00599642: MOV EAX,dword ptr [EAX]
// 00599644: MOV dword ptr [EDX],EAX
// 00599646: MOV EAX,EDX
// 00599648: RET
