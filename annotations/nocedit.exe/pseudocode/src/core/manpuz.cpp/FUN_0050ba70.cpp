// Name: core_manpuz.cpp_FUN_0050ba70
// Address: 0050ba70
// Address Range: [[0050ba70, 0050ba84]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050ba70()
// Cross-references:
//   core_manpuz.cpp_FUN_0050b960 (0050b960) at 0050b96a [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CDemonTriangleTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_manpuz_cpp_FUN_0050ba70(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,2,&g_CDemonTriangleTypeInfo);
  return;
}


// Assembly code:
// 0050ba70: PUSH 0x65c990
//   Label: core_manpuz.cpp_FUN_0050ba70
//   XREF to: 0065c990 (DATA)
// 0050ba75: PUSH 0x2
// 0050ba77: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050ba7b: PUSH EDX
// 0050ba7c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0050ba81: ADD ESP,0xc
// 0050ba84: RET
