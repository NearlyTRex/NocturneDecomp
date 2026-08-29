// Name: core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
// Address: 0040cc10
// MANUAL RECONSTRUCTION
// Address Range: [[0040cc10, 0040cc6f]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value,float max_value)

#include "nocturne.h"

float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value,float max_value)

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
  return fVar1 * (max_value - min_value) + min_value;
}
