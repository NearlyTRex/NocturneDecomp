// Name: core_fire.cpp_freeLightningBolts_FUN_004c9850
// Address: 004c9850
// Address Range: [[004c9850, 004c9864]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeLightningBolts_FUN_004c9850(CLightningBolt * * array)
// Globals:
//   WatcomTypeInfo g_CLightningBoltTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeLightningBolts_FUN_004c9850(CLightningBolt **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,10,&g_CLightningBoltTypeInfo);
  return;
}


// Assembly code:
// 004c9850: PUSH 0x65df70
//   Label: core_fire.cpp_freeLightningBolts_FUN_004c9850
//   XREF to: 0065df70 (DATA)
// 004c9855: PUSH 0xa
// 004c9857: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c985b: PUSH EDX
// 004c985c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9861: ADD ESP,0xc
// 004c9864: RET
