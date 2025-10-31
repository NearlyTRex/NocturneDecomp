// Name: core_manpuz.cpp_FUN_0050bab0
// Address: 0050bab0
// Address Range: [[0050bab0, 0050bac4]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050bab0()
// Cross-references:
//   core_manpuz.cpp_FUN_0050b890 (0050b890) at 0050b8b5 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SGemTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050bab0(undefined4 param_1) */

void core_manpuz_cpp_FUN_0050bab0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,0xc,&g_SGemTypeInfo);
  return;
}


// Assembly code:
// 0050bab0: PUSH 0x660fa0
//   Label: core_manpuz.cpp_FUN_0050bab0
//   XREF to: 00660fa0 (DATA)
// 0050bab5: PUSH 0xc
// 0050bab7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050babb: PUSH EDX
// 0050babc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0050bac1: ADD ESP,0xc
// 0050bac4: RET
