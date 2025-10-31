// Name: core_dtrace.cpp_staticInit_FUN_004941e0
// Address: 004941e0
// Address Range: [[004941e0, 004941f7]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_staticInit_FUN_004941e0(void)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   CVector3f[20000] g_PVSCubePositions
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

void __cdecl core_dtrace_cpp_staticInit_FUN_004941e0(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_PVSCubePositions,20000,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 004941e0: PUSH 0x6598c0
//   Label: core_dtrace.cpp_staticInit_FUN_004941e0
//   XREF to: 006598c0 (DATA)
// 004941e5: PUSH 0x4e20
// 004941ea: PUSH 0x2cb3c2c
//   XREF to: 02cb3c2c (DATA)
// 004941ef: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004941f4: ADD ESP,0xc
// 004941f7: RET
