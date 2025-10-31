// Name: core_skeleton.cpp_FUN_005a1ff0
// Address: 005a1ff0
// Address Range: [[005a1ff0, 005a2007]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a1ff0()
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_skeleton_cpp_FUN_005a1ff0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,3000,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 005a1ff0: PUSH 0x6598c0
//   Label: core_skeleton.cpp_FUN_005a1ff0
//   XREF to: 006598c0 (DATA)
// 005a1ff5: PUSH 0xbb8
// 005a1ffa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a1ffe: PUSH EDX
// 005a1fff: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005a2004: ADD ESP,0xc
// 005a2007: RET
