// Name: core_curtain.cpp_freeVectors_FUN_0044baf0
// Address: 0044baf0
// Address Range: [[0044baf0, 0044bb04]]
// Convention: __cdecl
// Signature: void core_curtain.cpp_freeVectors_FUN_0044baf0(CVector3f * * array)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 (0059de40) at 0059de62 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270 (0059a270) at 0059a297 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0 (005998e0) at 00599901 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_curtain_cpp_freeVectors_FUN_0044baf0(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,100,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 0044baf0: PUSH 0x6598c0
//   Label: core_curtain.cpp_freeVectors_FUN_0044baf0
//   XREF to: 006598c0 (DATA)
// 0044baf5: PUSH 0x64
// 0044baf7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0044bafb: PUSH EDX
// 0044bafc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0044bb01: ADD ESP,0xc
// 0044bb04: RET
