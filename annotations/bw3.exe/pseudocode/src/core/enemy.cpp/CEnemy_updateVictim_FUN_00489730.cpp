// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_00489730
// Address: 00489730
// Address Range: [[00489730, 00489b5e]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00489730(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00489730(CEnemy *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CCharacter *this_ptr_00;
  CEnemy *this_ptr_01;
  float fVar2;
  int iVar3;
  EDeathState EVar4;
  CPathMap *this_ptr_02;
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
    if (((g_CGamePtr->freeze_enemies_enabled != 0) || (g_CGamePtr->allow_enemy_attack_flag == 0)) ||
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,"?Capture" + 1), iVar3 != 0)) {
      this_ptr->is_in_combat = 0;
      this_ptr->victim_search_timer = 0.0;
      this_ptr->victim = (CCharacter *)0x0;
      return;
    }
    fVar2 = this_ptr->victim_search_timer - delta_time;
    this_ptr->victim_search_timer = fVar2;
    if (fVar2 <= 0.0) {
      this_ptr->is_in_combat = 0;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,1.5);
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
        this_ptr_01 = *(CEnemy **)((int)g_CDemonSetPtr->characters + iStack_20);
        iVar3 = (*(((this_ptr_01->base).base.vtable._uc)->_uc).isGrabbable)
                          (&this_ptr_01->base,(CDemonActor *)this_ptr);
        if (((iVar3 != 0) &&
            (EVar4 = (*(((this_ptr_01->base).base.vtable._uc)->_uc).getDeathState)
                               (&this_ptr_01->base), EVar4 == DEATH_STATE_ALIVE)) &&
           ((iVar3 = (*((this_ptr_01->base).base.vtable._ub)->shouldIgnoreForTargeting)
                               ((CDemonActor *)this_ptr_01), iVar3 == 0 &&
            (((this_ptr_01->base).speech_timer <= 0.0 && (this_ptr_01 != this_ptr)))))) {
          fStack_44 = (this_ptr_01->base).base.location.position.x - (pCStack_2c->position).x;
          afStack_40[0] = (this_ptr_01->base).base.location.position.y - (pCStack_2c->position).y;
          afStack_40[1] = (this_ptr_01->base).base.location.position.z - (pCStack_2c->position).z;
          fStack_5c = fStack_44;
          *(float *)((int)&stack0xffffffa8 + (uint)bVar7 * -8) = afStack_40[(uint)bVar7 * -2];
          *(float *)((int)&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (ABS(fStack_58) <= fStack_60) {
            fStack_58 = fStack_58 * _DAT_005bdc9b;
            fStack_30 = fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58;
            if (fStack_30 <= fStack_34) {
              *(CEnemy **)(&DAT_01c5bc4c + iStack_24) = this_ptr_01;
              *(float *)(&DAT_01c5db8c + iStack_24) = fStack_30;
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
        iVar3 = -1;
        iVar6 = 0;
        fStack_18 = 1e+20;
        if (0 < iStack_1c) {
          iVar5 = 0;
          do {
            if (*(float *)(&DAT_01c5db8c + iVar5) < fStack_18) {
              fStack_18 = *(float *)(&DAT_01c5db8c + iVar5);
              iVar3 = iVar6;
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar6 < iStack_1c);
        }
        if (iVar3 < 0) break;
        this_ptr_00 = *(CCharacter **)(&DAT_01c5bc4c + iVar3 * 4);
        iVar6 = core_enemy_cpp_FUN_00489600(this_ptr,this_ptr_00);
        if (iVar6 != 0) {
          this_ptr->victim = this_ptr_00;
          engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s can see hero\n");
          return;
        }
        if ((((this_ptr->allow_pathfind_to_new_targets != 0) || (this_ptr_00 == pCVar1)) &&
            (this_ptr_02 = (*((this_ptr_00->base).vtable._ub)->getPathMap)(&this_ptr_00->base),
            this_ptr_02 != (CPathMap *)0x0)) &&
           (iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                              (this_ptr_02,pCStack_38,&CStack_50,
                               (this_ptr->base).base.direction_hint), iVar6 == 1)) {
          this_ptr->victim = this_ptr_00;
          return;
        }
        *(uint *)(&DAT_01c5db8c + iVar3 * 4) = 0x7149f2ca;
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
