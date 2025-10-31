// Name: core_skeleton.cpp_FUN_005a2030
// Address: 005a2030
// Address Range: [[005a2030, 005a2044]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a2030()
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270 (0059a270) at 0059a287 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CBoundingBox3DTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_FUN_005a2030(undefined4 param_1) */

void core_skeleton_cpp_FUN_005a2030(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,100,&g_CBoundingBox3DTypeInfo);
  return;
}


// Assembly code:
// 005a2030: PUSH 0x659900
//   Label: core_skeleton.cpp_FUN_005a2030
//   XREF to: 00659900 (DATA)
// 005a2035: PUSH 0x64
// 005a2037: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a203b: PUSH EDX
// 005a203c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005a2041: ADD ESP,0xc
// 005a2044: RET
