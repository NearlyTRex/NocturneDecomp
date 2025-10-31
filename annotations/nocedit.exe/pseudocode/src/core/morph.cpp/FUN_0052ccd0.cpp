// Name: core_morph.cpp_FUN_0052ccd0
// Address: 0052ccd0
// Address Range: [[0052ccd0, 0052cce4]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052ccd0()
// Cross-references:
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052c100 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_FUN_0052ccd0(undefined4 param_1) */

void core_morph_cpp_FUN_0052ccd0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,2,&g_CDeformableModelInstanceTypeInfo);
  return;
}


// Assembly code:
// 0052ccd0: PUSH 0x65af20
//   Label: core_morph.cpp_FUN_0052ccd0
//   XREF to: 0065af20 (DATA)
// 0052ccd5: PUSH 0x2
// 0052ccd7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052ccdb: PUSH EDX
// 0052ccdc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052cce1: ADD ESP,0xc
// 0052cce4: RET
