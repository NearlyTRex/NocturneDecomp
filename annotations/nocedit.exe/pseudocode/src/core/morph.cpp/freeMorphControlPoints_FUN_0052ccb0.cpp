// Name: core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0
// Address: 0052ccb0
// Address Range: [[0052ccb0, 0052ccc4]]
// Convention: __cdecl
// Signature: void core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint * * array)
// Cross-references:
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052ca6c [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SMorphControlPointTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_SMorphControlPointTypeInfo);
  return;
}


// Assembly code:
// 0052ccb0: PUSH 0x661b80
//   Label: core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0
//   XREF to: 00661b80 (DATA)
// 0052ccb5: PUSH 0x14
// 0052ccb7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052ccbb: PUSH EDX
// 0052ccbc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052ccc1: ADD ESP,0xc
// 0052ccc4: RET
