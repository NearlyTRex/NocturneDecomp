// Name: core_fire.cpp_freeFireballs_FUN_004c9930
// Address: 004c9930
// Address Range: [[004c9930, 004c9944]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeFireballs_FUN_004c9930(CFireball * * array)
// Globals:
//   WatcomTypeInfo g_CFireballTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeFireballs_FUN_004c9930(CFireball **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x40,&g_CFireballTypeInfo);
  return;
}


// Assembly code:
// 004c9930: PUSH 0x65de90
//   Label: core_fire.cpp_freeFireballs_FUN_004c9930
//   XREF to: 0065de90 (DATA)
// 004c9935: PUSH 0x40
// 004c9937: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c993b: PUSH EDX
// 004c993c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9941: ADD ESP,0xc
// 004c9944: RET
