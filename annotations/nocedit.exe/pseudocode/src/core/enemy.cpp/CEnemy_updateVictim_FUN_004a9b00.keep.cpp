// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_004a9b00
// Address: 004a9b00
// MANUAL RECONSTRUCTION
// Address Range: [[004a9b00, 004a9c26]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CCharacter *target;
  int iVar6;
  EDeathState EVar7;
  float fVar2;
  int iVar3;
  CPathMap *this_ptr_01;
  EDeathState EVar4;
  int iVar8;
  int iVar10;
  int iVar11;
  int iVar5;
  CVector3f CStack_48;
  CVector3f *local_3c;
  float local_38;
  CCharacter *local_34;
  float fStack_30;
  int local_2c;
  CLocation *local_28;
  int local_24;
  int local_20;
  CCharacter *local_1c;
  float local_18;
  float local_14;
  CCharacter *iVar9;
  float fVar3;
  float fVar4;
  float fVar5;
  CConsole *this_ptr_00;
  float fVar1;
  CCharacter *pCVar2;
  
  fVar1 = this_ptr->victim_height;
  pCVar2 = this_ptr->script_victim;
  if (pCVar2 == (CCharacter *)0x0) {
    if (((g_CGamePtr->freeze_enemies_enabled != 0) || (g_CGamePtr->allow_enemy_attack_flag == 0)) ||
       (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,"Capture"), iVar6 != 0)) {
      this_ptr->is_in_combat = 0;
      this_ptr->victim_search_timer = 0.0;
      this_ptr->victim = (CCharacter *)0x0;
      return;
    }
    fVar3 = this_ptr->victim_search_timer - delta_time;
    this_ptr->victim_search_timer = fVar3;
    if (fVar3 <= 0.0) {
      this_ptr->is_in_combat = 0;
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.5,1.5);
      local_38 = this_ptr->victim_search_radius * this_ptr->victim_search_radius;
      iVar5 = 0;
      this_ptr->victim_search_timer = fVar2;
      if ((this_ptr->victim == (CCharacter *)0x0) &&
         (this_ptr->guard_distance < this_ptr->victim_search_radius)) {
        local_38 = this_ptr->guard_distance * this_ptr->guard_distance;
      }
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < g_CDemonSetPtr->character_count; local_24 = local_24 + 1) {
        iVar9 = *(CCharacter **)((int)g_CDemonSetPtr->characters + local_2c);
        iVar3 = (*(((iVar9->base).vtable._uc)->_uc).isGrabbable)(iVar9,(CDemonActor *)this_ptr);
        if (((iVar3 != 0) &&
            (EVar4 = (*(((iVar9->base).vtable._uc)->_uc).getDeathState)(iVar9),
            EVar4 == DEATH_STATE_ALIVE)) &&
           ((iVar3 = (*((iVar9->base).vtable._ub)->shouldIgnoreForTargeting)(&iVar9->base),
            iVar3 == 0 && (iVar9->speech_timer <= 0.0)))) {
          fVar2 = (iVar9->base).location.position.x - (this_ptr->base).base.location.position.x;
          fVar4 = (iVar9->base).location.position.y - (this_ptr->base).base.location.position.y;
          fVar5 = (iVar9->base).location.position.z - (this_ptr->base).base.location.position.z;
          if ((ABS(fVar4) <= fVar1) &&
             (fVar2 = fVar5 * fVar5 +
                      fVar2 * fVar2 + fVar4 * 3.0f * fVar4 * 3.0f,
             fVar2 <= local_38)) {
            *(CCharacter **)((int)g_EnemyVictimCandidates + local_20) = iVar9;
            *(float *)((int)g_EnemyVictimCandidateDistances + local_20) = fVar2;
            local_20 = local_20 + 4;
            iVar5 = iVar5 + 1;
          }
        }
        local_2c = local_2c + 4;
      }
      pCVar1 = this_ptr->victim;
      this_ptr->victim = (CCharacter *)0x0;
      while( true ) {
        iVar10 = 0;
        local_18 = 1e+20;
        iVar11 = -1;
        if (0 < iVar5) {
          iVar8 = 0;
          do {
            if (*(float *)((int)g_EnemyVictimCandidateDistances + iVar8) < local_18) {
              local_18 = *(float *)((int)g_EnemyVictimCandidateDistances + iVar8);
              iVar11 = iVar10;
            }
            iVar10 = iVar10 + 1;
            iVar8 = iVar8 + 4;
          } while (iVar10 < iVar5);
        }
        if (iVar11 < 0) break;
        target = (CCharacter *)g_EnemyVictimCandidates[iVar11];
        iVar3 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_004a9a50(this_ptr,(CDemonActor *)target);
        this_ptr_00 = g_CConsolePtr;
        if (iVar3 != 0) {
          this_ptr->victim = target;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_00,"%s can see hero\n",this_ptr->base.base.actor_name);
          return;
        }
        if ((((this_ptr->allow_pathfind_to_new_targets != 0) ||
             ((this_ptr->allow_pathfind_to_new_targets == 0 && (target == pCVar1)))) &&
            (this_ptr_01 = (*((target->base).vtable._ub)->getPathMap)((CDemonActor *)target),
            this_ptr_01 != (CPathMap *)0x0)) &&
           (iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                              (this_ptr_01,&(this_ptr->base).base.location.position,&CStack_48,
                               (this_ptr->base).base.direction_hint), iVar3 == 1)) {
          this_ptr->victim = target;
          return;
        }
        g_EnemyVictimCandidateDistances[iVar11] = 1e+30;
        if (pCVar1 == target) {
          this_ptr->victim = target;
        }
      }
    }
    else {
      pCVar1 = this_ptr->victim;
      if ((pCVar1 != (CCharacter *)0x0) &&
         (EVar7 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1),
         EVar7 != DEATH_STATE_ALIVE)) {
        this_ptr->victim_search_timer = 0.0;
        this_ptr->is_in_combat = 0;
        this_ptr->victim = (CCharacter *)0x0;
        return;
      }
    }
  }
  else {
    if (pCVar2 == (CCharacter *)0x7fc00000) {
      this_ptr->victim = (CCharacter *)0x0;
    }
    else {
      this_ptr->victim = pCVar2;
    }
    this_ptr->is_in_combat = 0;
    this_ptr->victim_search_timer = 0.0;
  }
  return;
}
