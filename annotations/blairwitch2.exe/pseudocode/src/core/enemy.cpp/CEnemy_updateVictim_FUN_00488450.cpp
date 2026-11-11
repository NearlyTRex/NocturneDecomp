// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_00488450
// Address: 00488450
// Address Range: [[00488450, 0048884c]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00488450(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00488450(CEnemy *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CCharacter *this_ptr_00;
  float fVar2;
  int iVar3;
  EDeathState EVar4;
  CPathMap *this_ptr_01;
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
                          (0x01C38BC0,"?Capture" + 1), iVar3 != 0)) {
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
              fStack_4c = fStack_4c * _DAT_005d2df5;
            }
            fStack_38 = fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c;
            if (fStack_38 <= fStack_2c) {
              *(int *)(&DAT_01c264e4 + iStack_28) = iVar3;
              *(float *)(&DAT_01c28424 + iStack_28) = fStack_38;
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
            if (*(float *)(&DAT_01c28424 + iVar5) < fStack_1c) {
              fStack_1c = *(float *)(&DAT_01c28424 + iVar5);
              iVar3 = iVar6;
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar6 < iStack_20);
        }
        if (iVar3 < 0) break;
        this_ptr_00 = *(CCharacter **)(&DAT_01c264e4 + iVar3 * 4);
        iVar6 = core_enemy_cpp_FUN_00488320(this_ptr,this_ptr_00);
        if (iVar6 != 0) {
          this_ptr->victim = this_ptr_00;
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s can see hero\n",this_ptr);
          return;
        }
        if (((this_ptr->allow_pathfind_to_new_targets != 0) || (this_ptr_00 == pCVar1)) &&
           ((this_ptr_01 = (*((this_ptr_00->base).vtable._ub)->getPathMap)(&this_ptr_00->base),
            this_ptr_01 != (CPathMap *)0x0 &&
            (iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                               (this_ptr_01,pCStack_18,&CStack_44,
                                (this_ptr->base).base.direction_hint), iVar6 == 1)))) {
          this_ptr->victim = this_ptr_00;
          return;
        }
        *(uint *)(&DAT_01c28424 + iVar3 * 4) = 0x7149f2ca;
        if (this_ptr_00 == pCVar1) {
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
    if (pCVar1 == 0xFFFFFFFF) {
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
