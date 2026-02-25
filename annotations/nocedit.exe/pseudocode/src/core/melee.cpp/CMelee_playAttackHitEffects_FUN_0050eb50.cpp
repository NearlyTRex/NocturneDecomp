// Name: core_melee.cpp_CMelee_playAttackHitEffects_FUN_0050eb50
// Address: 0050eb50
// Address Range: [[0050eb50, 0050ebd5]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_0050eb50(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_0050eb50(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c790(victim,g_CCharacterClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_melee_cpp_CMelee_FUN_0050ebe0(this_ptr);
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
