// Name: core_stairs.cpp_FUN_005bac80
// Address: 005bac80
// Address Range: [[005bac80, 005bac94]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005bac80()
// Cross-references:
//   core_stairs.cpp_CStairs_dtor_FUN_005bac10 (005bac10) at 005bac25 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CDemonTriangleTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_stairs_cpp_FUN_005bac80(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,0x28,&g_CDemonTriangleTypeInfo);
  return;
}


// Assembly code:
// 005bac80: PUSH 0x65c990
//   Label: core_stairs.cpp_FUN_005bac80
//   XREF to: 0065c990 (DATA)
// 005bac85: PUSH 0x28
// 005bac87: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005bac8b: PUSH EDX
// 005bac8c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005bac91: ADD ESP,0xc
// 005bac94: RET
