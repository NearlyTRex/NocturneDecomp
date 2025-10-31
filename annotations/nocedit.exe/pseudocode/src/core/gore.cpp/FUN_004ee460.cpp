// Name: core_gore.cpp_FUN_004ee460
// Address: 004ee460
// Address Range: [[004ee460, 004ee477]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ee460()
// Globals:
//   WatcomTypeInfo g_CBloodSplatTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_gore_cpp_FUN_004ee460(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,2000,&g_CBloodSplatTypeInfo);
  return;
}


// Assembly code:
// 004ee460: PUSH 0x65f0a0
//   Label: core_gore.cpp_FUN_004ee460
//   XREF to: 0065f0a0 (DATA)
// 004ee465: PUSH 0x7d0
// 004ee46a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ee46e: PUSH EDX
// 004ee46f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004ee474: ADD ESP,0xc
// 004ee477: RET
