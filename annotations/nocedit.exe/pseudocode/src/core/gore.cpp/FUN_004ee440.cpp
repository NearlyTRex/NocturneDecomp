// Name: core_gore.cpp_FUN_004ee440
// Address: 004ee440
// Address Range: [[004ee440, 004ee454]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ee440()
// Globals:
//   WatcomTypeInfo g_CBloodPoolTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_gore_cpp_FUN_004ee440(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,0x20,&g_CBloodPoolTypeInfo);
  return;
}


// Assembly code:
// 004ee440: PUSH 0x65f0c0
//   Label: core_gore.cpp_FUN_004ee440
//   XREF to: 0065f0c0 (DATA)
// 004ee445: PUSH 0x20
// 004ee447: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ee44b: PUSH EDX
// 004ee44c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004ee451: ADD ESP,0xc
// 004ee454: RET
