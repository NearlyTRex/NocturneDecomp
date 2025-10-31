// Name: core_fire.cpp_freeRocks_FUN_004c9910
// Address: 004c9910
// Address Range: [[004c9910, 004c9924]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeRocks_FUN_004c9910(CRock * * array)
// Globals:
//   WatcomTypeInfo g_CRockTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeRocks_FUN_004c9910(CRock **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x40,&g_CRockTypeInfo);
  return;
}


// Assembly code:
// 004c9910: PUSH 0x65deb0
//   Label: core_fire.cpp_freeRocks_FUN_004c9910
//   XREF to: 0065deb0 (DATA)
// 004c9915: PUSH 0x40
// 004c9917: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c991b: PUSH EDX
// 004c991c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9921: ADD ESP,0xc
// 004c9924: RET
