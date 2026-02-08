// Name: core_stranger.cpp_CStranger_FUN_005be430
// Address: 005be430
// Address Range: [[005be430, 005be47f]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005be430(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005be430(CStranger *this_ptr)

{
  CLightActor *pCVar2;
  
  pCVar2 = (CLightActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((this_ptr->base).base.carry_hands[0].carry_actor,
                      g_CLightActorClassInfo.name_hash);
  if ((pCVar2 != (CLightActor *)0x0) &&
     ((pCVar2->light_actor_type == LIGHT_TYPE_LANTERN ||
      (pCVar2->light_actor_type == LIGHT_TYPE_GLOBE)))) {
    return -0x4079f56e;
  }
  return -0x4037f03a;
}
