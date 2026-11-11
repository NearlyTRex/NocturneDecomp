// Name: core_holycrss.cpp_CHolycross_playAttackHitEffects_FUN_004d5260
// Address: 004d5260
// Address Range: [[004d5260, 004d52d7]]
// Convention: __cdecl
// Signature: void __cdecl core_holycrss_cpp_CHolycross_playAttackHitEffects_FUN_004d5260(CHolycross *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_holycrss_cpp_CHolycross_playAttackHitEffects_FUN_004d5260(CHolycross *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(victim,g_CCharacterClassInfo.name_hash);
  if (iVar1 != 0) {
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"@@IMPCT-KICK1.WAV" + 2);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
              (g_CGorePtr,&(this_ptr->base).base.location.position,(CVector3f *)0x0,4,
               *(EBloodType *)(iVar1 + 0x27a0));
    return;
  }
  if (victim == (CDemonActor *)0x0) {
    return;
  }
  (*((this_ptr->base).base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"IMPCT-ROCK-X.WAV");
  return;
}
