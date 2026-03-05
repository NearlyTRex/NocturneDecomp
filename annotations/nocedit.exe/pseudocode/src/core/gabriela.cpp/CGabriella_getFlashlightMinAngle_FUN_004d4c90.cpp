// Name: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004d4c90
// Address: 004d4c90
// Address Range: [[004d4c90, 004d4cdf]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004d4c90(CGabriella *this_ptr)

#include "nocturne.h"

float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004d4c90(CGabriella *this_ptr)

{
  CLightActor *pCVar2;
  
  pCVar2 = (CLightActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((this_ptr->base).base.carry_hands[0].carry_actor,
                      g_CLightActorClassInfo.name_hash);
  if ((pCVar2 != (CLightActor *)0x0) &&
     ((pCVar2->light_actor_type == LIGHT_TYPE_LANTERN ||
      (pCVar2->light_actor_type == LIGHT_TYPE_GLOBE)))) {
    return -1.0471976;
  }
  return -1.5629814;
}
