// Name: core_dcube.cpp_freeVectors_FUN_00457eb0
// Address: 00457eb0
// Address Range: [[00457eb0, 00457ec4]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_freeVectors_FUN_00457eb0(CVector3f * * array)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_dcube_cpp_freeVectors_FUN_00457eb0(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x10,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00457eb0: PUSH 0x6598c0
//   Label: core_dcube.cpp_freeVectors_FUN_00457eb0
//   XREF to: 006598c0 (DATA)
// 00457eb5: PUSH 0x10
// 00457eb7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00457ebb: PUSH EDX
// 00457ebc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00457ec1: ADD ESP,0xc
// 00457ec4: RET
