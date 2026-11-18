// Name: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0053b460
// Address: 0053b460
// Address Range: [[0053b460, 0053b65d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0053b460(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0053b460(CDemonSet *this_ptr)

{
  CDemonActor *actor_ptr;
  uint class_name_hash;
  CCharacter *pCVar1;
  CEnemy *pCVar2;
  EDeathState EVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CWayPoint *pCVar6;
  CDemonSet *pCVar7;
  int iVar8;
  
  this_ptr->enemy_count = 0;
  this_ptr->threat_count = 0;
  this_ptr->waypoint_count = 0;
  this_ptr->renderable_actor_count = 0;
  this_ptr->character_count = 0;
  iVar8 = 0;
  pCVar7 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      actor_ptr = pCVar7->actors[0];
      if ((actor_ptr->is_transparent != 0) || (actor_ptr->is_renderable != 0)) {
        this_ptr->renderable_actors[this_ptr->renderable_actor_count] = actor_ptr;
        this_ptr->renderable_actor_count = this_ptr->renderable_actor_count + 1;
      }
      pCVar1 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (actor_ptr,g_CCharacterClassInfo.name_hash);
      this_ptr->characters[this_ptr->character_count] = pCVar1;
      class_name_hash = g_CEnemyClassInfo.name_hash;
      if (this_ptr->characters[this_ptr->character_count] == (CCharacter *)0x0) {
        pCVar6 = (CWayPoint *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (actor_ptr,g_CWayPointClassInfo.name_hash);
        this_ptr->waypoints[this_ptr->waypoint_count] = pCVar6;
        if (this_ptr->waypoints[this_ptr->waypoint_count] != (CWayPoint *)0x0) {
          this_ptr->waypoint_count = this_ptr->waypoint_count + 1;
        }
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (actor_ptr,g_CTriggerClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) && (*(int *)(pCVar5[1].actor_name + 0x1c) == 4)) &&
           (pCVar5[2].orient_matrix.m[2].x != 0.0)) {
          this_ptr->threats[this_ptr->threat_count] = actor_ptr;
          this_ptr->threat_count = this_ptr->threat_count + 1;
        }
      }
      else {
        this_ptr->character_count = this_ptr->character_count + 1;
        pCVar2 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(actor_ptr,class_name_hash);
        this_ptr->enemies[this_ptr->enemy_count] = pCVar2;
        pCVar2 = this_ptr->enemies[this_ptr->enemy_count];
        if (pCVar2 != (CEnemy *)0x0) {
          EVar3 = (*(((pCVar2->base).base.vtable._uc)->_uc).getDeathState)(&pCVar2->base);
          if (((EVar3 == DEATH_STATE_ALIVE) &&
              (iVar4 = (*((this_ptr->enemies[this_ptr->enemy_count]->base).base.vtable._ub)->
                         shouldIgnoreForTargeting)
                                 ((CDemonActor *)this_ptr->enemies[this_ptr->enemy_count]),
              iVar4 == 0)) &&
             ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (actor_ptr,g_CBugsClassInfo.name_hash),
              pCVar5 == (CDemonActor *)0x0 &&
              (iVar4 = (*(((this_ptr->enemies[this_ptr->enemy_count]->base).base.vtable._uc)->_uc).
                         isInvulnerable)(&this_ptr->enemies[this_ptr->enemy_count]->base),
              iVar4 == 0)))) {
            this_ptr->threats[this_ptr->threat_count] = actor_ptr;
            this_ptr->threat_count = this_ptr->threat_count + 1;
          }
          this_ptr->enemy_count = this_ptr->enemy_count + 1;
        }
      }
      iVar8 = iVar8 + 1;
      pCVar7 = (CDemonSet *)pCVar7->cameras;
    } while (iVar8 < this_ptr->actor_count);
  }
  return;
}
