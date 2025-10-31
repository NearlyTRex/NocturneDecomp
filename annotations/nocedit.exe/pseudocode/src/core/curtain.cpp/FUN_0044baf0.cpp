// Name: core_curtain.cpp_FUN_0044baf0
// Address: 0044baf0
// Address Range: [[0044baf0, 0044bb04]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044baf0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 (0059de40) at 0059de62 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270 (0059a270) at 0059a297 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0 (005998e0) at 00599901 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044baf0(undefined4 param_1) */

void core_curtain_cpp_FUN_0044baf0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,100,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 0044baf0: PUSH 0x6598c0
//   Label: core_curtain.cpp_FUN_0044baf0
//   XREF to: 006598c0 (DATA)
// 0044baf5: PUSH 0x64
// 0044baf7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0044bafb: PUSH EDX
// 0044bafc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0044bb01: ADD ESP,0xc
// 0044bb04: RET
