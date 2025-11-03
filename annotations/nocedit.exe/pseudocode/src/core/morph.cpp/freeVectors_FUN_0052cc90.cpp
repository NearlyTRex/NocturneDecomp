// Name: core_morph.cpp_freeVectors_FUN_0052cc90
// Address: 0052cc90
// Address Range: [[0052cc90, 0052cca4]]
// Convention: __cdecl
// Signature: void core_morph.cpp_freeVectors_FUN_0052cc90(CVector3f * * array)
// Cross-references:
//   core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70 (0052cc70) at 0052cc7a [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_morph_cpp_freeVectors_FUN_0052cc90(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,2,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 0052cc90: PUSH 0x6598c0
//   Label: core_morph.cpp_freeVectors_FUN_0052cc90
//   XREF to: 006598c0 (DATA)
// 0052cc95: PUSH 0x2
// 0052cc97: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052cc9b: PUSH EDX
// 0052cc9c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052cca1: ADD ESP,0xc
// 0052cca4: RET
