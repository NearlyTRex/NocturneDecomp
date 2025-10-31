// Name: core_curtain.cpp_FUN_0044bad0
// Address: 0044bad0
// Address Range: [[0044bad0, 0044bae7]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044bad0()
// Cross-references:
//   core_curtain.cpp_FUN_0044ba30 (0044ba30) at 0044ba45 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SCurtainVertexTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044bad0(undefined4 param_1) */

void core_curtain_cpp_FUN_0044bad0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,1000,&g_SCurtainVertexTypeInfo);
  return;
}


// Assembly code:
// 0044bad0: PUSH 0x65c5f0
//   Label: core_curtain.cpp_FUN_0044bad0
//   XREF to: 0065c5f0 (DATA)
// 0044bad5: PUSH 0x3e8
// 0044bada: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0044bade: PUSH EDX
// 0044badf: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0044bae4: ADD ESP,0xc
// 0044bae7: RET
