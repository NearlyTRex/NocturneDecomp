// Name: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00534820
// Address: 00534820
// Address Range: [[00534820, 0053498f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00534820(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_00534820(CDemonSet *this_ptr)

{
  CDemonActor *pCVar1;
  uint uVar2;
  CCharacter *pCVar3;
  CEnemy *pCVar4;
  CWayPoint *pCVar5;
  int iVar6;
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
      pCVar1 = pCVar8->actors[0];
      if ((pCVar1->is_transparent != 0) || (pCVar1->is_renderable != 0)) {
        this_ptr->renderable_actors[this_ptr->renderable_actor_count] = pCVar1;
        this_ptr->renderable_actor_count = this_ptr->renderable_actor_count + 1;
      }
      pCVar3 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,g_CCharacterClassInfo.name_hash);
      this_ptr->characters[this_ptr->character_count] = pCVar3;
      uVar2 = g_CEnemyClassInfo.name_hash;
      if (this_ptr->characters[this_ptr->character_count] == (CCharacter *)0x0) {
        pCVar5 = (CWayPoint *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,g_CWayPointClassInfo.name_hash);
        this_ptr->waypoints[this_ptr->waypoint_count] = pCVar5;
        if (this_ptr->waypoints[this_ptr->waypoint_count] != (CWayPoint *)0x0) {
          this_ptr->waypoint_count = this_ptr->waypoint_count + 1;
        }
        iVar6 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,g_CTriggerClassInfo.name_hash);
        if (((iVar6 != 0) && (*(int *)(iVar6 + 0x2d0) == 4)) && (*(int *)(iVar6 + 0x460) != 0))
        goto LAB_00534905;
      }
      else {
        this_ptr->character_count = this_ptr->character_count + 1;
        pCVar4 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,uVar2);
        this_ptr->enemies[this_ptr->enemy_count] = pCVar4;
        if (this_ptr->enemies[this_ptr->enemy_count] != (CEnemy *)0x0) {
          this_ptr->enemy_count = this_ptr->enemy_count + 1;
LAB_00534905:
          this_ptr->threats[this_ptr->threat_count] = pCVar1;
          this_ptr->threat_count = this_ptr->threat_count + 1;
        }
      }
      iVar7 = iVar7 + 1;
      pCVar8 = (CDemonSet *)pCVar8->cameras;
    } while (iVar7 < this_ptr->actor_count);
  }
  return;
}
