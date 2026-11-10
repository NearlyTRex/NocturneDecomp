// Name: core_melee.cpp_CMelee_playAttackHitEffects_FUN_004e7310
// Address: 004e7310
// Address Range: [[004e7310, 004e73a1]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004e7310(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_playAttackHitEffects_FUN_004e7310(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(victim,g_CCharacterClassInfo.name_hash);
  if (iVar1 == 0) {
    if (victim == (CDemonActor *)0x0) {
      return;
    }
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->hit_other_sound);
    return;
  }
  core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004e73b0(this_ptr,0x14,*(int *)(iVar1 + 0x27a0));
  if ((attack_flags != 1) && (attack_flags != 8)) {
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->swing_hit_character_sound);
    return;
  }
  (*((this_ptr->base).base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,this_ptr->thrust_hit_character_sound);
  return;
}
