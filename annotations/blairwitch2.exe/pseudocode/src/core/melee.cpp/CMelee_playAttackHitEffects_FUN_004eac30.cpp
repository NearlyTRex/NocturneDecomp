// Name: core_melee.cpp_CMelee_playAttackHitEffects_FUN_004eac30
// Address: 004eac30
// Address Range: [[004eac30, 004eacb5]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004eac30(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004eac30(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(victim,g_CCharacterClassInfo.name_hash);
  if (iVar1 != 0) {
    core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004eacc0(this_ptr,0x14,*(int *)(iVar1 + 0x280c))
    ;
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
