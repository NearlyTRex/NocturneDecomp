// Name: core_actor.cpp_generateRandomValue_FUN_0040cb90
// Address: 0040cb90
// Address Range: [[0040cb90, 0040cbab]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cb90(void)

#include "nocturne.h"

uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cb90(void)

{
  g_UINT_007c3368 = g_UINT_007c3368 * 0x2ff0bd + 1 & 0xffffff;
  return g_UINT_007c3368;
}
