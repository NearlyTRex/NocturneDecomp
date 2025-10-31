// Name: core_skeledit.cpp_FUN_00589fc0
// Address: 00589fc0
// Address Range: [[00589fc0, 00589fde]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589fc0()
// Cross-references:
//   core_skeledit.cpp_FUN_00589fa0 (00589fa0) at 00589fb0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589fe0 (00589fe0) at 00589ff8 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589fc0(void)

{
  void *in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  crt_memory_c_memset_FUN_005fde40(in_stack_0000000c,0,0x310);
  return;
}


// Assembly code:
// 00589fc0: PUSH 0x10
//   Label: core_skeledit.cpp_FUN_00589fc0
// 00589fc5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00589fca: PUSH 0x310
// 00589fcf: PUSH 0x0
// 00589fd1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00589fd5: PUSH EDX
// 00589fd6: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00589fdb: ADD ESP,0xc
// 00589fde: RET
