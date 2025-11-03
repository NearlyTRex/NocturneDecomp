// Name: core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0
// Address: 0052ccd0
// Address Range: [[0052ccd0, 0052cce4]]
// Convention: __cdecl
// Signature: void core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0(CDeformableModelInstance * * array)
// Cross-references:
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c100 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl
core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0(CDeformableModelInstance **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,2,&g_CDeformableModelInstanceTypeInfo);
  return;
}


// Assembly code:
// 0052ccd0: PUSH 0x65af20
//   Label: core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0
//   XREF to: 0065af20 (DATA)
// 0052ccd5: PUSH 0x2
// 0052ccd7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052ccdb: PUSH EDX
// 0052ccdc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052cce1: ADD ESP,0xc
// 0052cce4: RET
