// Name: core_melee.cpp_CMelee_playAttackHitEffects_FUN_004cefe0
// Address: 004cefe0
// Address Range: [[004cefe0, 004cf080]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004cefe0(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004cefe0(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040bce0
            ((CDemonActor *)this_ptr,attack_flags,damage_info,victim);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (victim,g_CCharacterActorType_00765a60.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004cf090
              (this_ptr,0x14,(int)pCVar1[0x1c].prev_actor);
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
