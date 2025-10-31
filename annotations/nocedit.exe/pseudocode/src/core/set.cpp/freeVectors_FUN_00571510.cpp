// Name: core_set.cpp_freeVectors_FUN_00571510
// Address: 00571510
// Address Range: [[00571510, 00571527]]
// Convention: __cdecl
// Signature: void core_set.cpp_freeVectors_FUN_00571510(CVector3f * * array)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_set_cpp_freeVectors_FUN_00571510(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,4000,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00571510: PUSH 0x6598c0
//   Label: core_set.cpp_freeVectors_FUN_00571510
//   XREF to: 006598c0 (DATA)
// 00571515: PUSH 0xfa0
// 0057151a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0057151e: PUSH EDX
// 0057151f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00571524: ADD ESP,0xc
// 00571527: RET
