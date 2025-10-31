// Name: core_gore.cpp_FUN_004ee420
// Address: 004ee420
// Address Range: [[004ee420, 004ee437]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ee420()
// Globals:
//   WatcomTypeInfo g_CFootstepTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_gore_cpp_FUN_004ee420(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,1000,&g_CFootstepTypeInfo);
  return;
}


// Assembly code:
// 004ee420: PUSH 0x65f0e0
//   Label: core_gore.cpp_FUN_004ee420
//   XREF to: 0065f0e0 (DATA)
// 004ee425: PUSH 0x3e8
// 004ee42a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ee42e: PUSH EDX
// 004ee42f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004ee434: ADD ESP,0xc
// 004ee437: RET
