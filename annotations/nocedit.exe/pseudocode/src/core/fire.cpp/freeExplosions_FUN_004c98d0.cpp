// Name: core_fire.cpp_freeExplosions_FUN_004c98d0
// Address: 004c98d0
// Address Range: [[004c98d0, 004c98e4]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeExplosions_FUN_004c98d0(CExplosion * * array)
// Globals:
//   WatcomTypeInfo g_CExplosionTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeExplosions_FUN_004c98d0(CExplosion **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,10,&g_CExplosionTypeInfo);
  return;
}


// Assembly code:
// 004c98d0: PUSH 0x65def0
//   Label: core_fire.cpp_freeExplosions_FUN_004c98d0
//   XREF to: 0065def0 (DATA)
// 004c98d5: PUSH 0xa
// 004c98d7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c98db: PUSH EDX
// 004c98dc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c98e1: ADD ESP,0xc
// 004c98e4: RET
