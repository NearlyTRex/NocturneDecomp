// Name: core_bodypart.cpp_CBodyPart_spawnGore_FUN_0041b1b0
// Address: 0041b1b0
// MANUAL RECONSTRUCTION
// Address Range: [[0041b1b0, 0041b1e5]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041b1b0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041b1b0(CBodyPart *this_ptr)

{
  int iVar1;

#if NOCTURNE_AUTHENTIC_RNG
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.08);
#else
  iVar1 = nocturne_rng_fx_chance(0.08);
#endif
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
            (g_CGorePtr,&(this_ptr->base).location.position,&g_ZeroVector.f,this_ptr->blood_type);
  return;
}
