// Name: core_skeleton.cpp_FUN_005a1fb0
// Address: 005a1fb0
// Address Range: [[005a1fb0, 005a1fc4]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a1fb0()
// Globals:
//   WatcomTypeInfo g_CSkeletonTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_skeleton_cpp_FUN_005a1fb0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,0x28,&g_CSkeletonTypeInfo);
  return;
}


// Assembly code:
// 005a1fb0: PUSH 0x662f10
//   Label: core_skeleton.cpp_FUN_005a1fb0
//   XREF to: 00662f10 (DATA)
// 005a1fb5: PUSH 0x28
// 005a1fb7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a1fbb: PUSH EDX
// 005a1fbc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005a1fc1: ADD ESP,0xc
// 005a1fc4: RET
