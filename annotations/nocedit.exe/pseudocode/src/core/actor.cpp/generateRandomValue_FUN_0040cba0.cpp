// Name: core_actor.cpp_generateRandomValue_FUN_0040cba0
// Address: 0040cba0
// Address Range: [[0040cba0, 0040cbbb]]
// Convention: __cdecl
// Signature: uint core_actor.cpp_generateRandomValue_FUN_0040cba0(void)
// Cross-references:
//   core_actor.cpp_getRandomFloat_FUN_0040cbc0 (0040cbc0) at 0040cbd1 [UNCONDITIONAL_CALL]
//   core_actor.cpp_getRandomFloat_FUN_0040cc10 (0040cc10) at 0040cc2e [UNCONDITIONAL_CALL]
//   core_actor.cpp_getRandomInt_FUN_0040cc70 (0040cc70) at 0040ccea [UNCONDITIONAL_CALL]
//   core_actor.cpp_randomChance_FUN_0040cd10 (0040cd10) at 0040cd21 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_RandomSeedValue

#include "nocturne.h"

uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cba0(void)

{
  g_RandomSeedValue = g_RandomSeedValue * 0x2ff0bd + 1 & 0xffffff;
  return g_RandomSeedValue;
}


// Assembly code:
// 0040cba0: MOV EDX,dword ptr [0x00822368]
//   Label: core_actor.cpp_generateRandomValue_FUN_0040cba0
//   XREF to: 00822368 (READ)
// 0040cba6: IMUL EDX,EDX,0x2ff0bd
// 0040cbac: INC EDX
// 0040cbad: AND EDX,0xffffff
// 0040cbb3: MOV dword ptr [0x00822368],EDX
//   XREF to: 00822368 (WRITE)
// 0040cbb9: MOV EAX,EDX
// 0040cbbb: RET
