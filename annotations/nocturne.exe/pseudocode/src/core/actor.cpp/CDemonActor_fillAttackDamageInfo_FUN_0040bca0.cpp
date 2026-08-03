// Name: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0
// Address: 0040bca0
// Address Range: [[0040bca0, 0040bcdc]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  out_damage_info->damage_amount = 5.0;
  out_damage_info->damage_type = DAMAGE_TYPE_MELEE;
  out_damage_info->dismember_prob = 0.2;
  out_damage_info->gore_multiplier = 0.4;
  out_damage_info->attacker = this_ptr;
  pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  out_damage_info->wielder = pCVar1;
  return;
}
