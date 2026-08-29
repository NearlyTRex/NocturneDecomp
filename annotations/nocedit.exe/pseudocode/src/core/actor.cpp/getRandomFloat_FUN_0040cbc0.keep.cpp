// Name: core_actor.cpp_getRandomFloat_FUN_0040cbc0
// Address: 0040cbc0
// MANUAL RECONSTRUCTION
// Address Range: [[0040cbc0, 0040cc0a]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cbc0(void)

#include "nocturne.h"

float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cbc0(void)

{
  uint uVar1;
  int iVar2;

  if (g_CGamePtr->is_processing != 0) {
#if NOCTURNE_AUTHENTIC_RNG
    uVar1 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
#else
    uVar1 = nocturne_rng_game(__builtin_return_address(0));
#endif
    return (float)(int)uVar1 * 5.960465e-08f;
  }
#if NOCTURNE_AUTHENTIC_RNG
  iVar2 = rand();
#else
  iVar2 = (int)nocturne_rng_offframe();
#endif
  return (float)iVar2 * 3.051851e-05f;
}
