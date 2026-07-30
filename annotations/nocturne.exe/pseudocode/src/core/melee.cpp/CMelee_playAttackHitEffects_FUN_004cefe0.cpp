// Name: core_melee.cpp_CMelee_playAttackHitEffects_FUN_004cefe0
// Address: 004cefe0
// Address Range: [[004cefe0, 004cf080]]
// Convention: unknown
// Signature: void core_melee_cpp_CMelee_playAttackHitEffects_FUN_004cefe0(CMelee *param_1,int param_2,SDamageInfo *param_3,CDemonActor *param_4)

#include "nocturne.h"

void core_melee_cpp_CMelee_playAttackHitEffects_FUN_004cefe0(CMelee *param_1,int param_2,SDamageInfo *param_3,CDemonActor *param_4)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040bce0
            ((CDemonActor *)param_1,param_2,param_3,param_4);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (param_4,g_CCharacterActorType_00765a60.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004cf090
              (param_1,0x14,(int)pCVar1[0x1c].prev_actor);
    if (param_2 == 1) {
      (*((param_1->base).base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,param_1->thrust_hit_character_sound);
      return;
    }
    (*((param_1->base).base.vtable._ub)->playSound)
              ((CDemonActor *)param_1,param_1->swing_hit_character_sound);
    return;
  }
  if (param_4 == (CDemonActor *)0x0) {
    return;
  }
  (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,param_1->hit_other_sound);
  return;
}
