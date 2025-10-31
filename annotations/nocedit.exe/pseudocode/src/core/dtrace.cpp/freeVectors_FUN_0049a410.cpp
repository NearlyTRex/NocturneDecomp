// Name: core_dtrace.cpp_freeVectors_FUN_0049a410
// Address: 0049a410
// Address Range: [[0049a410, 0049a427]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_freeVectors_FUN_0049a410(CVector3f * * array)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_dtrace_cpp_freeVectors_FUN_0049a410(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,20000,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 0049a410: PUSH 0x6598c0
//   Label: core_dtrace.cpp_freeVectors_FUN_0049a410
//   XREF to: 006598c0 (DATA)
// 0049a415: PUSH 0x4e20
// 0049a41a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049a41e: PUSH EDX
// 0049a41f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0049a424: ADD ESP,0xc
// 0049a427: RET
