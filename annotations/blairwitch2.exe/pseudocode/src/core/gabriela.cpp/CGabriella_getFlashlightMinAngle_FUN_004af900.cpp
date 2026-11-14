// Name: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004af900
// Address: 004af900
// Address Range: [[004af900, 004af94f]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(CGabriella *this_ptr)

#include "nocturne.h"

float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(CGabriella *this_ptr)

{
  float fVar1;
  CDemonActor *pCVar2;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007bcc84);
  if ((pCVar2 != (CDemonActor *)0x0) &&
     ((fVar1 = pCVar2[2].particle_systems[4].position.z, fVar1 == 2.8026e-45 ||
      (fVar1 == 4.2039e-45)))) {
    return -1.0471976;
  }
  return -1.5629814;
}
