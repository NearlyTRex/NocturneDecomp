// Name: core_glass.cpp_freeVectorArray25_FUN_004eb8a0
// Address: 004eb8a0
// Address Range: [[004eb8a0, 004eb8b4]]
// Convention: __cdecl
// Signature: void core_glass.cpp_freeVectorArray25_FUN_004eb8a0(CVector3f * * array)
// Cross-references:
//   core_glass.cpp_CGlass_dtor_FUN_004eb820 (004eb820) at 004eb835 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_glass_cpp_freeVectorArray25_FUN_004eb8a0(CVector3f **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x19,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 004eb8a0: PUSH 0x6598c0
//   Label: core_glass.cpp_freeVectorArray25_FUN_004eb8a0
//   XREF to: 006598c0 (DATA)
// 004eb8a5: PUSH 0x19
// 004eb8a7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004eb8ab: PUSH EDX
// 004eb8ac: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004eb8b1: ADD ESP,0xc
// 004eb8b4: RET
