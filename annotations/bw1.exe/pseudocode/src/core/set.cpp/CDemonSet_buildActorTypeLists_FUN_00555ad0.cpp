// Name: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0
// Address: 00555ad0
// Address Range: [[00555ad0, 00555c91]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0(CDemonSet *this_ptr)

{
  CDemonActor *pCVar1;
  uint uVar2;
  CCharacter *pCVar3;
  CEnemy *pCVar4;
  EDeathState EVar5;
  int iVar6;
  CWayPoint *pCVar7;
  int iVar8;
  CDemonSet *pCVar9;
  
  this_ptr->enemy_count = 0;
  this_ptr->threat_count = 0;
  this_ptr->waypoint_count = 0;
  this_ptr->renderable_actor_count = 0;
  this_ptr->character_count = 0;
  iVar8 = 0;
  pCVar9 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar1 = pCVar9->actors[0];
      if ((pCVar1->is_transparent != 0) || (pCVar1->is_renderable != 0)) {
        this_ptr->renderable_actors[this_ptr->renderable_actor_count] = pCVar1;
        this_ptr->renderable_actor_count = this_ptr->renderable_actor_count + 1;
      }
      pCVar3 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,g_CCharacterClassInfo.name_hash);
      this_ptr->characters[this_ptr->character_count] = pCVar3;
      uVar2 = g_CEnemyClassInfo.name_hash;
      if (this_ptr->characters[this_ptr->character_count] == (CCharacter *)0x0) {
        pCVar7 = (CWayPoint *)
                 core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,g_CWayPointClassInfo.name_hash);
        this_ptr->waypoints[this_ptr->waypoint_count] = pCVar7;
        if (this_ptr->waypoints[this_ptr->waypoint_count] != (CWayPoint *)0x0) {
          this_ptr->waypoint_count = this_ptr->waypoint_count + 1;
        }
        iVar6 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,g_CTriggerClassInfo.name_hash);
        if (((iVar6 != 0) && (*(int *)(iVar6 + 0x174) == 4)) && (*(int *)(iVar6 + 0x304) != 0)) {
          this_ptr->threats[this_ptr->threat_count] = pCVar1;
          this_ptr->threat_count = this_ptr->threat_count + 1;
        }
      }
      else {
        this_ptr->character_count = this_ptr->character_count + 1;
        pCVar4 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,uVar2);
        this_ptr->enemies[this_ptr->enemy_count] = pCVar4;
        pCVar4 = this_ptr->enemies[this_ptr->enemy_count];
        if (pCVar4 != (CEnemy *)0x0) {
          EVar5 = (*(((pCVar4->base).base.vtable._uc)->_uc).getDeathState)(&pCVar4->base);
          if ((EVar5 == DEATH_STATE_ALIVE) &&
             (iVar6 = (*((this_ptr->enemies[this_ptr->enemy_count]->base).base.vtable._ub)->
                        shouldIgnoreForTargeting)
                                ((CDemonActor *)this_ptr->enemies[this_ptr->enemy_count]),
             iVar6 == 0)) {
            this_ptr->threats[this_ptr->threat_count] = pCVar1;
            this_ptr->threat_count = this_ptr->threat_count + 1;
          }
          this_ptr->enemy_count = this_ptr->enemy_count + 1;
        }
      }
      iVar8 = iVar8 + 1;
      pCVar9 = (CDemonSet *)pCVar9->cameras;
    } while (iVar8 < this_ptr->actor_count);
  }
  return;
}
