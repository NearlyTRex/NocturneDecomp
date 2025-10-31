// Name: core_fire.cpp_freeMuzzleFlashes_FUN_004c9990
// Address: 004c9990
// Address Range: [[004c9990, 004c99a4]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeMuzzleFlashes_FUN_004c9990(CMuzzleFlash * * array)
// Globals:
//   WatcomTypeInfo g_CMuzzleFlashTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeMuzzleFlashes_FUN_004c9990(CMuzzleFlash **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_CMuzzleFlashTypeInfo);
  return;
}


// Assembly code:
// 004c9990: PUSH 0x65de30
//   Label: core_fire.cpp_freeMuzzleFlashes_FUN_004c9990
//   XREF to: 0065de30 (DATA)
// 004c9995: PUSH 0x14
// 004c9997: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c999b: PUSH EDX
// 004c999c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c99a1: ADD ESP,0xc
// 004c99a4: RET
