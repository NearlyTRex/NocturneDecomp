// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_004a0ab0
// Address: 004a0ab0
// Address Range: [[004a0ab0, 004a0ed6]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a0ab0(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a0ab0(CEnemy *this_ptr,float delta_time)

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
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f *pCStack_38;
  float fStack_34;
  float fStack_30;
  CLocation *pCStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  fStack_60 = this_ptr->victim_height;
  pCVar1 = this_ptr->script_victim;
  if (pCVar1 == (CCharacter *)0x0) {
    if (((*(int *)&g_CGamePtr->field_0x1f0 != 0) || (*(int *)&g_CGamePtr->field_0x24c == 0)) ||
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,"?Capture" + 1), iVar3 != 0)) {
      this_ptr->is_in_combat = 0;
      this_ptr->victim_search_timer = 0.0;
      this_ptr->victim = (CCharacter *)0x0;
      return;
    }
    fVar2 = this_ptr->victim_search_timer - delta_time;
    this_ptr->victim_search_timer = fVar2;
    if (fVar2 <= 0.0) {
      this_ptr->is_in_combat = 0;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.5,1.5);
      fStack_34 = this_ptr->victim_search_radius * this_ptr->victim_search_radius;
      iStack_1c = 0;
      this_ptr->victim_search_timer = fStack_14;
      if ((this_ptr->victim == (CCharacter *)0x0) &&
         (this_ptr->guard_distance < this_ptr->victim_search_radius)) {
        fStack_34 = this_ptr->guard_distance * this_ptr->guard_distance;
      }
      pCStack_2c = &(this_ptr->base).base.location;
      iStack_24 = 0;
      iStack_20 = 0;
      for (iStack_28 = 0; iStack_28 < g_CDemonSetPtr->character_count; iStack_28 = iStack_28 + 1) {
        iVar3 = *(int *)((int)g_CDemonSetPtr->characters + iStack_20);
        iVar6 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3,this_ptr);
        if (((iVar6 != 0) &&
            (iVar6 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar6 == 0)) &&
           ((iVar6 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x70))(iVar3), iVar6 == 0 &&
            (*(float *)(iVar3 + 0x27b4) <= 0.0)))) {
          fStack_5c = *(float *)(iVar3 + 0x20) - (pCStack_2c->position).x;
          fStack_58 = *(float *)(iVar3 + 0x24) - (pCStack_2c->position).y;
          fStack_54 = *(float *)(iVar3 + 0x28) - (pCStack_2c->position).z;
          fStack_44 = fStack_5c;
          afStack_40[(uint)bVar7 * -2] = *(float *)((int)&stack0xffffffa8 + (uint)bVar7 * -8);
          afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(float *)((int)&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (ABS(afStack_40[0]) <= fStack_60) {
            afStack_40[0] = afStack_40[0] * _DAT_005dcb8e;
            fStack_30 = afStack_40[1] * afStack_40[1] +
                        fStack_44 * fStack_44 + afStack_40[0] * afStack_40[0];
            if (fStack_30 <= fStack_34) {
              *(int *)(&DAT_01c3f6a4 + iStack_24) = iVar3;
              *(float *)(&DAT_01c415e4 + iStack_24) = fStack_30;
              iStack_24 = iStack_24 + 4;
              iStack_1c = iStack_1c + 1;
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      pCStack_38 = &(this_ptr->base).base.location.position;
      pCVar1 = this_ptr->victim;
      this_ptr->victim = (CCharacter *)0x0;
      while( true ) {
        iVar6 = 0;
        fStack_18 = 1e+20;
        iVar3 = -1;
        if (0 < iStack_1c) {
          iVar5 = 0;
          do {
            if (*(float *)(&DAT_01c415e4 + iVar5) < fStack_18) {
              fStack_18 = *(float *)(&DAT_01c415e4 + iVar5);
              iVar3 = iVar6;
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar6 < iStack_1c);
        }
        if (iVar3 < 0) break;
        this_ptr_00 = *(CCharacter **)(&DAT_01c3f6a4 + iVar3 * 4);
        iVar6 = core_enemy_cpp_FUN_004a0980(this_ptr,this_ptr_00);
        if (iVar6 != 0) {
          this_ptr->victim = this_ptr_00;
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s can see hero\n",this_ptr);
          return;
        }
        if ((((this_ptr->allow_pathfind_to_new_targets != 0) || (this_ptr_00 == pCVar1)) &&
            (this_ptr_01 = (*((this_ptr_00->base).vtable._ub)->getPathMap)(&this_ptr_00->base),
            this_ptr_01 != (CPathMap *)0x0)) &&
           (iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                              (this_ptr_01,pCStack_38,&CStack_50,
                               (this_ptr->base).base.direction_hint), iVar6 == 1)) {
          this_ptr->victim = this_ptr_00;
          return;
        }
        *(uint *)(&DAT_01c415e4 + iVar3 * 4) = 0x7149f2ca;
        if (this_ptr_00 == pCVar1) {
          this_ptr->victim = pCVar1;
        }
      }
    }
    else {
      pCVar1 = this_ptr->victim;
      if ((pCVar1 != (CCharacter *)0x0) &&
         (EVar4 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1),
         EVar4 != DEATH_STATE_ALIVE)) {
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
