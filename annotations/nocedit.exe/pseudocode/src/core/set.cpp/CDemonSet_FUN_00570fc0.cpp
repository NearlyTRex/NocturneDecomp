// Name: core_set.cpp_CDemonSet_FUN_00570fc0
// Address: 00570fc0
// Address Range: [[00570fc0, 0057112f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_00570fc0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570fc0(CDemonSet *this_ptr)

{
  CDemonActor *actor_ptr;
  uint class_name_hash;
  CCharacter *pCVar1;
  CEnemy *pCVar2;
  CWayPoint *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CDemonSet *pCVar6;
  
  this_ptr->enemy_count = 0;
  this_ptr->threat_count = 0;
  this_ptr->waypoint_count = 0;
  this_ptr->renderable_actor_count = 0;
  this_ptr->character_count = 0;
  iVar5 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      actor_ptr = pCVar6->actors[0];
      if ((actor_ptr->is_transparent != 0) || (actor_ptr->is_renderable != 0)) {
        this_ptr->renderable_actors[this_ptr->renderable_actor_count] = actor_ptr;
        this_ptr->renderable_actor_count = this_ptr->renderable_actor_count + 1;
      }
      pCVar1 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (actor_ptr,g_CCharacterClassInfo.name_hash);
      this_ptr->characters[this_ptr->character_count] = pCVar1;
      class_name_hash = g_CEnemyClassInfo.name_hash;
      if (this_ptr->characters[this_ptr->character_count] == (CCharacter *)0x0) {
        pCVar3 = (CWayPoint *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CWayPointClassInfo.name_hash);
        this_ptr->waypoints[this_ptr->waypoint_count] = pCVar3;
        if (this_ptr->waypoints[this_ptr->waypoint_count] != (CWayPoint *)0x0) {
          this_ptr->waypoint_count = this_ptr->waypoint_count + 1;
        }
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CTriggerClassInfo.name_hash);
        if (((pCVar4 != (CDemonActor *)0x0) && (*(int *)(pCVar4[1].actor_name + 0x1c) == 4)) &&
           (pCVar4[2].orient_matrix.m[1].z != 0.0)) goto LAB_005710a5;
      }
      else {
        this_ptr->character_count = this_ptr->character_count + 1;
        pCVar2 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash);
        this_ptr->enemies[this_ptr->enemy_count] = pCVar2;
        if (this_ptr->enemies[this_ptr->enemy_count] != (CEnemy *)0x0) {
          this_ptr->enemy_count = this_ptr->enemy_count + 1;
LAB_005710a5:
          this_ptr->threats[this_ptr->threat_count] = actor_ptr;
          this_ptr->threat_count = this_ptr->threat_count + 1;
        }
      }
      iVar5 = iVar5 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar5 < this_ptr->actor_count);
  }
  return;
}
