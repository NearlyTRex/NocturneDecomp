// Name: core_fire.cpp_freeSmokeParticles_FUN_004c9a10
// Address: 004c9a10
// Address Range: [[004c9a10, 004c9a27]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeSmokeParticles_FUN_004c9a10(CSmokeParticle * * array)
// Globals:
//   WatcomTypeInfo g_CSmokeParticleTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeSmokeParticles_FUN_004c9a10(CSmokeParticle **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x800,&g_CSmokeParticleTypeInfo);
  return;
}


// Assembly code:
// 004c9a10: PUSH 0x65ddb0
//   Label: core_fire.cpp_freeSmokeParticles_FUN_004c9a10
//   XREF to: 0065ddb0 (DATA)
// 004c9a15: PUSH 0x800
// 004c9a1a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c9a1e: PUSH EDX
// 004c9a1f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9a24: ADD ESP,0xc
// 004c9a27: RET
