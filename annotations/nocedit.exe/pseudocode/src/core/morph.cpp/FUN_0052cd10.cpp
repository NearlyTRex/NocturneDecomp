// Name: core_morph.cpp_FUN_0052cd10
// Address: 0052cd10
// Address Range: [[0052cd10, 0052cd24]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052cd10()
// Cross-references:
//   core_morph.cpp_FUN_0052b330 (0052b330) at 0052b344 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CMorphModelTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_FUN_0052cd10(undefined4 param_1) */

void core_morph_cpp_FUN_0052cd10(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,2,&g_CMorphModelTypeInfo);
  return;
}


// Assembly code:
// 0052cd10: PUSH 0x661b60
//   Label: core_morph.cpp_FUN_0052cd10
//   XREF to: 00661b60 (DATA)
// 0052cd15: PUSH 0x2
// 0052cd17: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052cd1b: PUSH EDX
// 0052cd1c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052cd21: ADD ESP,0xc
// 0052cd24: RET
