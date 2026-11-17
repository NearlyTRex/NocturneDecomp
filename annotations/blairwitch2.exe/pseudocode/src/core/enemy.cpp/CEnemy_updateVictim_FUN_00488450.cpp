// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_00488450
// Address: 00488450
// Address Range: [[00488450, 0048884c]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00488450(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00488450(CEnemy *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CCharacter *target;
  float fVar2;
  int iVar3;
  EDeathState EVar4;
  CPathMap *this_ptr_00;
  int iVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1044 [1013];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  CLocation *pCStack_34;
  int iStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  fStack_60 = this_ptr->victim_height;
  pCVar1 = this_ptr->script_victim;
  if (pCVar1 == (CCharacter *)0x0) {
    if (((g_CGamePtr->freeze_enemies_enabled != 0) || (g_CGamePtr->allow_enemy_attack_flag == 0)) ||
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (g_CEventListPtr,"Capture"), iVar3 != 0)) {
      this_ptr->is_in_combat = 0;
      this_ptr->victim_search_timer = 0.0;
      this_ptr->victim = (CCharacter *)0x0;
      return;
    }
    fVar2 = this_ptr->victim_search_timer - delta_time;
    this_ptr->victim_search_timer = fVar2;
    if (fVar2 <= 0.0) {
      this_ptr->is_in_combat = 0;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
      fStack_2c = this_ptr->victim_search_radius * this_ptr->victim_search_radius;
      iStack_20 = 0;
      iStack_24 = 0;
      pCStack_34 = &(this_ptr->base).base.location;
      iStack_30 = 0;
      iStack_28 = 0;
      this_ptr->victim_search_timer = fStack_14;
      for (; iStack_24 < g_CDemonSetPtr->character_count; iStack_24 = iStack_24 + 1) {
        iVar3 = *(int *)((int)g_CDemonSetPtr->characters + iStack_30);
        iVar6 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xec))(iVar3,this_ptr);
        if (((iVar6 != 0) &&
            (iVar6 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3), iVar6 == 0)) &&
           ((iVar6 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x78))(iVar3), iVar6 == 0 &&
            (*(float *)(iVar3 + 0x2820) <= 0.0)))) {
          fStack_5c = *(float *)(iVar3 + 0x20) - (pCStack_34->position).x;
          fStack_58 = *(float *)(iVar3 + 0x24) - (pCStack_34->position).y;
          fStack_54 = *(float *)(iVar3 + 0x28) - (pCStack_34->position).z;
          fStack_50 = fStack_5c;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (ABS(fStack_4c) <= fStack_60) {
            if ((this_ptr->base).is_spectral == 0) {
              fStack_4c = fStack_4c * 3.0f;
            }
            fStack_38 = fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c;
            if (fStack_38 <= fStack_2c) {
              *(int *)((int)g_EnemyVictimCandidates + iStack_28) = iVar3;
              *(float *)((int)g_EnemyVictimCandidateDistances + iStack_28) = fStack_38;
              iStack_28 = iStack_28 + 4;
              iStack_20 = iStack_20 + 1;
            }
          }
        }
        iStack_30 = iStack_30 + 4;
      }
      pCStack_18 = &(this_ptr->base).base.location.position;
      pCVar1 = this_ptr->victim;
      this_ptr->victim = (CCharacter *)0x0;
      while( true ) {
        iVar6 = 0;
        fStack_1c = 1e+20;
        iVar3 = -1;
        if (0 < iStack_20) {
          iVar5 = 0;
          do {
            if (*(float *)((int)g_EnemyVictimCandidateDistances + iVar5) < fStack_1c) {
              fStack_1c = *(float *)((int)g_EnemyVictimCandidateDistances + iVar5);
              iVar3 = iVar6;
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar6 < iStack_20);
        }
        if (iVar3 < 0) break;
        target = (CCharacter *)g_EnemyVictimCandidates[iVar3];
        iVar6 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_00488320(this_ptr,(CDemonActor *)target);
        if (iVar6 != 0) {
          this_ptr->victim = target;
          engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s can see hero\n");
          return;
        }
        if (((this_ptr->allow_pathfind_to_new_targets != 0) || (target == pCVar1)) &&
           ((this_ptr_00 = (*((target->base).vtable._ub)->getPathMap)((CDemonActor *)target),
            this_ptr_00 != (CPathMap *)0x0 &&
            (iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                               (this_ptr_00,pCStack_18,&CStack_44,
                                (this_ptr->base).base.direction_hint), iVar6 == 1)))) {
          this_ptr->victim = target;
          return;
        }
        g_EnemyVictimCandidateDistances[iVar3] = 1e+30;
        if (target == pCVar1) {
          this_ptr->victim = pCVar1;
        }
      }
    }
    else {
      pCVar1 = this_ptr->victim;
      if (pCVar1 == (CCharacter *)0x0) {
        this_ptr->victim_search_timer = 0.0;
        return;
      }
      EVar4 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1);
      if (EVar4 != DEATH_STATE_ALIVE) {
        this_ptr->victim_search_timer = 0.0;
        this_ptr->is_in_combat = 0;
        this_ptr->victim = (CCharacter *)0x0;
        return;
      }
    }
  }
  else {
    if (pCVar1 == (CCharacter *)NAN) {
      this_ptr->victim = (CCharacter *)0x0;
    }
    else {
      this_ptr->victim = pCVar1;
    }
    this_ptr->is_in_combat = 0;
    this_ptr->victim_search_timer = 0.0;
  }
  return;
}
