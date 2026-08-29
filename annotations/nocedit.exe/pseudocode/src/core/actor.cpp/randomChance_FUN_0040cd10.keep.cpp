// Name: core_actor.cpp_randomChance_FUN_0040cd10
// Address: 0040cd10
// MANUAL RECONSTRUCTION
// Address Range: [[0040cd10, 0040cd61]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_randomChance_FUN_0040cd10(float probability_threshold)

#include "nocturne.h"

int __cdecl core_actor_cpp_randomChance_FUN_0040cd10(float probability_threshold)

{
  uint uVar2;
  int iVar3;
  float fVar1;

  if (g_CGamePtr->is_processing == 0) {
#if NOCTURNE_AUTHENTIC_RNG
    iVar3 = rand();
#else
    iVar3 = (int)nocturne_rng_offframe();
#endif
    fVar1 = (float)iVar3 * 3.051851e-05f;
  }
  else {
#if NOCTURNE_AUTHENTIC_RNG
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
#else
    uVar2 = nocturne_rng_game(__builtin_return_address(0));
#endif
    fVar1 = (float)(int)uVar2 * 5.960465e-08f;
  }
  return (uint)(fVar1 < probability_threshold);
}
