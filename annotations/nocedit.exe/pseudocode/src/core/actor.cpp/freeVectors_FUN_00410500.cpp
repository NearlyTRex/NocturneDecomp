// Name: core_actor.cpp_freeVectors_FUN_00410500
// Address: 00410500
// Address Range: [[00410500, 00410514]]
// Convention: __cdecl
// Signature: void core_actor.cpp_freeVectors_FUN_00410500(CVector3f * * array)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_actor_cpp_freeVectors_FUN_00410500(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,10,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00410500: PUSH 0x6598c0
//   Label: core_actor.cpp_freeVectors_FUN_00410500
//   XREF to: 006598c0 (DATA)
// 00410505: PUSH 0xa
// 00410507: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041050b: PUSH EDX
// 0041050c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00410511: ADD ESP,0xc
// 00410514: RET
