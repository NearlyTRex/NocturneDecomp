// Name: core_melee.cpp_CMelee_playAttackHitEffects_FUN_004eac30
// Address: 004eac30
// Address Range: [[004eac30, 004eacb5]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004eac30(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004eac30(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c8f0(victim,g_CCharacterClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004eacc0
              (this_ptr,0x14,(int)pCVar1[0xe].particle_systems[3].owner);
    if (attack_flags == 1) {
      (*((this_ptr->base).base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,this_ptr->thrust_hit_character_sound);
      return;
    }
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->swing_hit_character_sound);
    return;
  }
  if (victim == (CDemonActor *)0x0) {
    return;
  }
  (*((this_ptr->base).base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,this_ptr->hit_other_sound);
  return;
}
