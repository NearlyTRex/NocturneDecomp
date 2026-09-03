// Name: core_stranger.cpp_CStranger_getCarryLightIntensity_FUN_005383e0
// Address: 005383e0
// Address Range: [[005383e0, 0053842f]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_CStranger_getCarryLightIntensity_FUN_005383e0(CStranger *this_ptr)

#include "nocturne.h"

float __cdecl core_stranger_cpp_CStranger_getCarryLightIntensity_FUN_005383e0(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     ((this_ptr->base).base.carry_hands[0].carry_actor,
                      g_CLightActorActorType_00764a9c.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && ((pCVar1[4].dead2 == 2 || (pCVar1[4].dead2 == 3)))) {
    return -1.0471976;
  }
  return -1.5629814;
}
