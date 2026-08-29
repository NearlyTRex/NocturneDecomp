// Name: core_enemy.cpp_CEnemy_countSameClassAttackingHero_FUN_004aa0f0
// Address: 004aa0f0
// MANUAL RECONSTRUCTION
// Address Range: [[004aa0f0, 004aa16b]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_countSameClassAttackingHero_FUN_004aa0f0(CEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_countSameClassAttackingHero_FUN_004aa0f0(CEnemy *this_ptr)

{
  CHero *sim_target;
  CCharacter *this_ptr_01;
  char *class_name;
  int iVar1;
  EDeathState EVar2;
  int iVar3;
  int iVar5;
  CHero *target_hero;

#if NOCTURNE_AUTHENTIC_NETPLAY
  sim_target = g_HeroActors[g_LocalHeroIndex];
#else
  sim_target = nocturne_net_sim_target_for((CDemonActor *)this_ptr);
#endif
  iVar5 = 0;
  class_name = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)this_ptr);
  target_hero = sim_target;
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->enemy_count <= iVar5) break;
    this_ptr_01 = (CCharacter *)g_CDemonSetPtr->enemies[iVar5];
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_01->base,class_name);
    if (iVar1 != 0) {
      EVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01);
      if ((EVar2 == DEATH_STATE_ALIVE) &&
         (((CEnemy *)this_ptr_01)->victim == &target_hero->base)) {
        iVar3 = iVar3 + 1;
      }
    }
    iVar5 = iVar5 + 1;
  }
  return iVar3;
}
