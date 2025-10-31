// Name: core_fire.cpp_freeTrails_FUN_004c9830
// Address: 004c9830
// Address Range: [[004c9830, 004c9844]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeTrails_FUN_004c9830(CTrail * * array)
// Globals:
//   WatcomTypeInfo g_CTrailTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeTrails_FUN_004c9830(CTrail **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,100,&g_CTrailTypeInfo);
  return;
}


// Assembly code:
// 004c9830: PUSH 0x65df90
//   Label: core_fire.cpp_freeTrails_FUN_004c9830
//   XREF to: 0065df90 (DATA)
// 004c9835: PUSH 0x64
// 004c9837: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c983b: PUSH EDX
// 004c983c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9841: ADD ESP,0xc
// 004c9844: RET
