// Name: core_skeledit.cpp_FUN_00589fa0
// Address: 00589fa0
// Address Range: [[00589fa0, 00589fbb]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589fa0()
// Cross-references:
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589da4 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeledit.cpp_FUN_00589fc0
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

undefined4 core_skeledit_cpp_FUN_00589fa0(void)

{
  undefined4 in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xc);
  core_skeledit_cpp_FUN_00589fc0();
  return in_stack_0000000c;
}


// Assembly code:
// 00589fa0: PUSH 0xc
//   Label: core_skeledit.cpp_FUN_00589fa0
// 00589fa5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00589faa: PUSH EBX
// 00589fab: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00589faf: PUSH EBX
// 00589fb0: CALL core_skeledit.cpp_FUN_00589fc0
//   XREF to: 00589fc0 (UNCONDITIONAL_CALL)
// 00589fb5: ADD ESP,0x4
// 00589fb8: MOV EAX,EBX
// 00589fba: POP EBX
// 00589fbb: RET
