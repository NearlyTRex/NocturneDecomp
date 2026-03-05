// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_004a9b00
// Address: 004a9b00
// Address Range: [[004a9b00, 004a9c26]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)

{
  float fVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CConsole *this_ptr_00;
  int iVar6;
  CPathMap *this_ptr_01;
  int iVar7;
  int iVar8;
  int iVar10;
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
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.5);
      local_38 = this_ptr->victim_search_radius * this_ptr->victim_search_radius;
      iVar6 = 0;
      this_ptr->victim_search_timer = local_14;
      if ((this_ptr->victim == (CCharacter *)0x0) &&
         (this_ptr->guard_distance < this_ptr->victim_search_radius)) {
        local_38 = this_ptr->guard_distance * this_ptr->guard_distance;
      }
      local_28 = &(this_ptr->base).base.location;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < g_CDemonSetPtr->character_count; local_24 = local_24 + 1) {
        iVar9 = *(CCharacter **)((int)g_CDemonSetPtr->characters + local_2c);
        iVar10 = (*(((iVar9->base).vtable._uc)->_uc).isGrabbable)(iVar9,(CDemonActor *)this_ptr);
        if (((iVar10 != 0) &&
            (iVar10 = (*(((iVar9->base).vtable._uc)->_uc).getDeathState)(iVar9), iVar10 == 0)) &&
           ((iVar10 = (*((iVar9->base).vtable._ub)->shouldIgnoreForTargeting)(&iVar9->base),
            iVar10 == 0 && (iVar9->speech_timer <= 0.0)))) {
          fVar3 = (iVar9->base).location.position.x - (local_28->position).x;
          fVar4 = (iVar9->base).location.position.y - (local_28->position).y;
          fVar5 = (iVar9->base).location.position.z - (local_28->position).z;
          if ((ABS(fVar4) <= fVar1) &&
             (fVar4 = fVar4 * 3.0f,
             fStack_30 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4, fStack_30 <= local_38)) {
            *(CCharacter **)((int)g_EnemyVictimCandidates + local_20) = iVar9;
            *(float *)((int)g_EnemyVictimCandidateDistances + local_20) = fStack_30;
            local_20 = local_20 + 4;
            iVar6 = iVar6 + 1;
          }
        }
        local_2c = local_2c + 4;
      }
      local_34 = this_ptr->victim;
      local_3c = &(this_ptr->base).base.location.position;
      this_ptr->victim = (CCharacter *)0x0;
      while( true ) {
        iVar8 = 0;
        local_18 = 1e+20;
        iVar10 = -1;
        if (0 < iVar6) {
          iVar7 = 0;
          do {
            if (*(float *)((int)g_EnemyVictimCandidateDistances + iVar7) < local_18) {
              local_18 = *(float *)((int)g_EnemyVictimCandidateDistances + iVar7);
              iVar10 = iVar8;
            }
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar8 < iVar6);
        }
        if (iVar10 < 0) break;
        local_1c = (CCharacter *)g_EnemyVictimCandidates[iVar10];
        iVar8 = core_enemy_cpp_CEnemy_FUN_004a9a50(this_ptr,(CDemonActor *)local_1c);
        this_ptr_00 = g_CConsolePtr;
        if (iVar8 != 0) {
          this_ptr->victim = local_1c;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_00,"%s can see hero\n",this_ptr);
          return;
        }
        if ((((this_ptr->allow_pathfind_to_new_targets != 0) ||
             ((this_ptr->allow_pathfind_to_new_targets == 0 && (local_1c == local_34)))) &&
            (this_ptr_01 = (*((local_1c->base).vtable._ub)->getPathMap)(&local_1c->base),
            this_ptr_01 != (CPathMap *)0x0)) &&
           (iVar8 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                              (this_ptr_01,local_3c,&CStack_48,(this_ptr->base).base.direction_hint)
           , iVar8 == 1)) {
          this_ptr->victim = local_1c;
          return;
        }
        g_EnemyVictimCandidateDistances[iVar10] = 1e+30;
        if (local_34 == local_1c) {
          this_ptr->victim = local_1c;
        }
      }
    }
    else {
      pCVar2 = this_ptr->victim;
      if ((pCVar2 != (CCharacter *)0x0) &&
         (iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2), iVar6 != 0)) {
        this_ptr->victim_search_timer = 0.0;
        this_ptr->is_in_combat = 0;
        this_ptr->victim = (CCharacter *)0x0;
        return;
      }
    }
  }
  else {
    if (pCVar2 == (CCharacter *)NAN) {
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
