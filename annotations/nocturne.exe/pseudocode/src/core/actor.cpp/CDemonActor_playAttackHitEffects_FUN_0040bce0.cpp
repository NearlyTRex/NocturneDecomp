// Name: core_actor.cpp_CDemonActor_playAttackHitEffects_FUN_0040bce0
// Address: 0040bce0
// Address Range: [[0040bce0, 0040bd3b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040bce0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040bce0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

{
  CHero *pCVar1;
  
  pCVar1 = (CHero *)(*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if ((pCVar1 == g_HeroActors[g_LocalHeroIndex]) && (attack_flags != 0)) {
    if ((uint)attack_flags < 2) {
      engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
      return;
    }
    if (attack_flags == 2) {
      engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
      return;
    }
  }
  return;
}
