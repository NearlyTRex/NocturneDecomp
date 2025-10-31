// Name: core_fire.cpp_freeCraters_FUN_004c9890
// Address: 004c9890
// Address Range: [[004c9890, 004c98a4]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeCraters_FUN_004c9890(CCrater * * array)
// Globals:
//   WatcomTypeInfo g_CCraterTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeCraters_FUN_004c9890(CCrater **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_CCraterTypeInfo);
  return;
}


// Assembly code:
// 004c9890: PUSH 0x65df30
//   Label: core_fire.cpp_freeCraters_FUN_004c9890
//   XREF to: 0065df30 (DATA)
// 004c9895: PUSH 0x14
// 004c9897: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c989b: PUSH EDX
// 004c989c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c98a1: ADD ESP,0xc
// 004c98a4: RET
