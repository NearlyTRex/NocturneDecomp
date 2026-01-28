// Name: core_actor.cpp_generateRandomValue_FUN_0040cba0
// Address: 0040cba0
// Address Range: [[0040cba0, 0040cbbb]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cba0(void)

#include "nocturne.h"

uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cba0(void)

{
  g_RandomSeedValue = g_RandomSeedValue * 0x2ff0bd + 1 & 0xffffff;
  return g_RandomSeedValue;
}
