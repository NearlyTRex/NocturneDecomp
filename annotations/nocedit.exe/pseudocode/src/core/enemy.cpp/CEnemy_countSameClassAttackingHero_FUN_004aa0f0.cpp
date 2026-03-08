// Name: core_enemy.cpp_CEnemy_countSameClassAttackingHero_FUN_004aa0f0
// Address: 004aa0f0
// Address Range: [[004aa0f0, 004aa16b]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_countSameClassAttackingHero_FUN_004aa0f0(CEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_countSameClassAttackingHero_FUN_004aa0f0(CEnemy *this_ptr)

{
  CCharacter *this_ptr_00;
  char *class_name;
  int iVar1;
  EDeathState EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  class_name = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)this_ptr);
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->enemy_count <= iVar5) break;
    this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->enemies + iVar4);
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,class_name);
    if (iVar1 != 0) {
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if ((EVar2 == DEATH_STATE_ALIVE) &&
         (*(CHero **)(this_ptr_00[1].base.actor_name + 0x18) == g_HeroActors[g_LocalHeroIndex])) {
        iVar3 = iVar3 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  }
  return iVar3;
}
