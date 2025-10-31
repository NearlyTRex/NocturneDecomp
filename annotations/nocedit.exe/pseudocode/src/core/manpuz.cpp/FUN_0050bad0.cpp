// Name: core_manpuz.cpp_FUN_0050bad0
// Address: 0050bad0
// Address Range: [[0050bad0, 0050bae4]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050bad0()
// Cross-references:
//   core_manpuz.cpp_FUN_0050b890 (0050b890) at 0050b8a5 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SReflectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050bad0(undefined4 param_1) */

void core_manpuz_cpp_FUN_0050bad0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,2,&g_SReflectorTypeInfo);
  return;
}


// Assembly code:
// 0050bad0: PUSH 0x660fc0
//   Label: core_manpuz.cpp_FUN_0050bad0
//   XREF to: 00660fc0 (DATA)
// 0050bad5: PUSH 0x2
// 0050bad7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050badb: PUSH EDX
// 0050badc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0050bae1: ADD ESP,0xc
// 0050bae4: RET
