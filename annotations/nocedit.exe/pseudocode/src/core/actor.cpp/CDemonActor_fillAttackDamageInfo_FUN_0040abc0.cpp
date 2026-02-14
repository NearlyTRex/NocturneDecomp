// Name: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
// Address: 0040abc0
// Address Range: [[0040abc0, 0040ac1f]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x6e4);
  out_damage_info->damage_amount = 5.0;
  out_damage_info->damage_type = 0x67;
  out_damage_info->weapon_damage_modifier = 0.2;
  out_damage_info->damage_flags = 0x3ecccccd;
  out_damage_info->attacker = this_ptr;
  pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  out_damage_info->wielder = pCVar1;
  return;
}
