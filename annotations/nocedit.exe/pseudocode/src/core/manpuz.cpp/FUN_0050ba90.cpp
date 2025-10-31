// Name: core_manpuz.cpp_FUN_0050ba90
// Address: 0050ba90
// Address Range: [[0050ba90, 0050baa4]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050ba90()
// Cross-references:
//   core_manpuz.cpp_FUN_0050b890 (0050b890) at 0050b8c5 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SPanelTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050ba90(undefined4 param_1) */

void core_manpuz_cpp_FUN_0050ba90(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,0xc,&g_SPanelTypeInfo);
  return;
}


// Assembly code:
// 0050ba90: PUSH 0x660f80
//   Label: core_manpuz.cpp_FUN_0050ba90
//   XREF to: 00660f80 (DATA)
// 0050ba95: PUSH 0xc
// 0050ba97: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050ba9b: PUSH EDX
// 0050ba9c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0050baa1: ADD ESP,0xc
// 0050baa4: RET
