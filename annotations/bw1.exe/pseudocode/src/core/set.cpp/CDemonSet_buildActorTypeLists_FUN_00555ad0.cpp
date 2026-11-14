// Name: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0
// Address: 00555ad0
// Address Range: [[00555ad0, 00555c91]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0(CDemonSet *this_ptr)

{
  CDemonActor *actor_ptr;
  uint class_name_hash;
  CCharacter *pCVar1;
  CEnemy *pCVar2;
  EDeathState EVar3;
  int iVar4;
  CWayPoint *pCVar5;
  CDemonActor *pCVar6;
  int iVar7;
  CDemonSet *pCVar8;
  
  this_ptr->enemy_count = 0;
  this_ptr->threat_count = 0;
  this_ptr->waypoint_count = 0;
  this_ptr->renderable_actor_count = 0;
  this_ptr->character_count = 0;
  iVar7 = 0;
  pCVar8 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      actor_ptr = pCVar8->actors[0];
      if ((actor_ptr->is_transparent != 0) || (actor_ptr->is_renderable != 0)) {
        this_ptr->renderable_actors[this_ptr->renderable_actor_count] = actor_ptr;
        this_ptr->renderable_actor_count = this_ptr->renderable_actor_count + 1;
      }
      pCVar1 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (actor_ptr,g_CCharacterClassInfo.name_hash);
      this_ptr->characters[this_ptr->character_count] = pCVar1;
      class_name_hash = g_CEnemyClassInfo.name_hash;
      if (this_ptr->characters[this_ptr->character_count] == (CCharacter *)0x0) {
        pCVar5 = (CWayPoint *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (actor_ptr,g_CWayPointClassInfo.name_hash);
        this_ptr->waypoints[this_ptr->waypoint_count] = pCVar5;
        if (this_ptr->waypoints[this_ptr->waypoint_count] != (CWayPoint *)0x0) {
          this_ptr->waypoint_count = this_ptr->waypoint_count + 1;
        }
        pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (actor_ptr,g_CTriggerClassInfo.name_hash);
        if (((pCVar6 != (CDemonActor *)0x0) && (*(int *)(pCVar6[1].actor_name + 0x1c) == 4)) &&
           (pCVar6[2].orient_matrix.m[2].x != 0.0)) {
          this_ptr->threats[this_ptr->threat_count] = actor_ptr;
          this_ptr->threat_count = this_ptr->threat_count + 1;
        }
      }
      else {
        this_ptr->character_count = this_ptr->character_count + 1;
        pCVar2 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,class_name_hash);
        this_ptr->enemies[this_ptr->enemy_count] = pCVar2;
        pCVar2 = this_ptr->enemies[this_ptr->enemy_count];
        if (pCVar2 != (CEnemy *)0x0) {
          EVar3 = (*(((pCVar2->base).base.vtable._uc)->_uc).getDeathState)(&pCVar2->base);
          if ((EVar3 == DEATH_STATE_ALIVE) &&
             (iVar4 = (*((this_ptr->enemies[this_ptr->enemy_count]->base).base.vtable._ub)->
                        shouldIgnoreForTargeting)
                                ((CDemonActor *)this_ptr->enemies[this_ptr->enemy_count]),
             iVar4 == 0)) {
            this_ptr->threats[this_ptr->threat_count] = actor_ptr;
            this_ptr->threat_count = this_ptr->threat_count + 1;
          }
          this_ptr->enemy_count = this_ptr->enemy_count + 1;
        }
      }
      iVar7 = iVar7 + 1;
      pCVar8 = (CDemonSet *)pCVar8->cameras;
    } while (iVar7 < this_ptr->actor_count);
  }
  return;
}
