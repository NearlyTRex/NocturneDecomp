// Name: core_fire.cpp_freeSparks_FUN_004c99b0
// Address: 004c99b0
// Address Range: [[004c99b0, 004c99c7]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeSparks_FUN_004c99b0(CSpark * * array)
// Globals:
//   WatcomTypeInfo g_CSparkTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeSparks_FUN_004c99b0(CSpark **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CSparkTypeInfo);
  return;
}


// Assembly code:
// 004c99b0: PUSH 0x65de10
//   Label: core_fire.cpp_freeSparks_FUN_004c99b0
//   XREF to: 0065de10 (DATA)
// 004c99b5: PUSH 0x100
// 004c99ba: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c99be: PUSH EDX
// 004c99bf: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c99c4: ADD ESP,0xc
// 004c99c7: RET
