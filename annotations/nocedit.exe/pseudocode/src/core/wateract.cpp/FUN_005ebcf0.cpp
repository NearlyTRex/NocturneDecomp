// Name: core_wateract.cpp_FUN_005ebcf0
// Address: 005ebcf0
// Address Range: [[005ebcf0, 005ebd07]]
// Convention: unknown
// Signature: undefined core_wateract.cpp_FUN_005ebcf0()
// Cross-references:
//   core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60 (005ebc60) at 005ebc75 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SWaterVertexTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 actors_other_wateractor.cpp_FUN_005ebcf0(undefined4 param_1) */

void core_wateract_cpp_FUN_005ebcf0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,1000,&g_SWaterVertexTypeInfo);
  return;
}


// Assembly code:
// 005ebcf0: PUSH 0x665420
//   Label: core_wateract.cpp_FUN_005ebcf0
//   XREF to: 00665420 (DATA)
// 005ebcf5: PUSH 0x3e8
// 005ebcfa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ebcfe: PUSH EDX
// 005ebcff: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005ebd04: ADD ESP,0xc
// 005ebd07: RET
