// Name: core_fire.cpp_freeStakes_FUN_004c99d0
// Address: 004c99d0
// Address Range: [[004c99d0, 004c99e7]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeStakes_FUN_004c99d0(CStake * * array)
// Globals:
//   WatcomTypeInfo g_CStakeTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeStakes_FUN_004c99d0(CStake **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CStakeTypeInfo);
  return;
}


// Assembly code:
// 004c99d0: PUSH 0x65ddf0
//   Label: core_fire.cpp_freeStakes_FUN_004c99d0
//   XREF to: 0065ddf0 (DATA)
// 004c99d5: PUSH 0x100
// 004c99da: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c99de: PUSH EDX
// 004c99df: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c99e4: ADD ESP,0xc
// 004c99e7: RET
