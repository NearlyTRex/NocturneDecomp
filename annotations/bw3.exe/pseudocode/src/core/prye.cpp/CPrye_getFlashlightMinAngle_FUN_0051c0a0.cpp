// Name: core_prye.cpp_CPrye_getFlashlightMinAngle_FUN_0051c0a0
// Address: 0051c0a0
// Address Range: [[0051c0a0, 0051c0ef]]
// Convention: __cdecl
// Signature: float __cdecl core_prye_cpp_CPrye_getFlashlightMinAngle_FUN_0051c0a0(CPrye *this_ptr)

#include "nocturne.h"

float __cdecl core_prye_cpp_CPrye_getFlashlightMinAngle_FUN_0051c0a0(CPrye *this_ptr)

{
  float fVar1;
  CDemonActor *pCVar2;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
  if ((pCVar2 != (CDemonActor *)0x0) &&
     ((fVar1 = pCVar2[5].orient.vec.x, fVar1 == 2.8026e-45 || (fVar1 == 4.2039e-45)))) {
    return -1.0471976;
  }
  return -1.5629814;
}
