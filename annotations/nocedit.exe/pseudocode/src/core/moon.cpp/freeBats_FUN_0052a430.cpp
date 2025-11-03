// Name: core_moon.cpp_freeBats_FUN_0052a430
// Address: 0052a430
// Address Range: [[0052a430, 0052a444]]
// Convention: __cdecl
// Signature: void core_moon.cpp_freeBats_FUN_0052a430(SBat * * array)
// Globals:
//   WatcomTypeInfo g_SBatTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_moon_cpp_freeBats_FUN_0052a430(SBat **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x1e,&g_SBatTypeInfo);
  return;
}


// Assembly code:
// 0052a430: PUSH 0x661b20
//   Label: core_moon.cpp_freeBats_FUN_0052a430
//   XREF to: 00661b20 (DATA)
// 0052a435: PUSH 0x1e
// 0052a437: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052a43b: PUSH EDX
// 0052a43c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052a441: ADD ESP,0xc
// 0052a444: RET
