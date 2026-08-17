// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_00479b60
// Address: 00479b60
// Address Range: [[00479b60, 00479f4a]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00479b60(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00479b60(CEnemy *this_ptr,float delta_time)

{
  float fVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CConsole *this_ptr_00;
  int iVar6;
  EDeathState EVar7;
  CPathMap *this_ptr_01;
  int iVar8;
  int iVar9;
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
  
  fVar1 = this_ptr->victim_height;
  pCVar2 = this_ptr->script_victim;
  if (pCVar2 == (CCharacter *)0x0) {
    if (((g_CGame_PTR_005b9354->freeze_enemies_enabled != 0) ||
        (g_CGame_PTR_005b9354->allow_enemy_attack_flag == 0)) ||
       (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,"Capture"), iVar6 != 0)) {
      this_ptr->is_in_combat = 0;
      this_ptr->victim_search_timer = 0.0;
      this_ptr->victim = (CCharacter *)0x0;
      return;
    }
    fVar3 = this_ptr->victim_search_timer - delta_time;
    this_ptr->victim_search_timer = fVar3;
    if (fVar3 <= 0.0) {
      this_ptr->is_in_combat = 0;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.5,1.5);
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
      for (local_24 = 0; local_24 < g_CDemonSet_PTR_005be368->character_count;
          local_24 = local_24 + 1) {
        iVar10 = *(int *)((int)g_CDemonSet_PTR_005be368->characters + local_2c);
        iVar9 = (**(code **)(*(int *)(iVar10 + 0x14c) + 0xdc))(iVar10,this_ptr);
        if (((iVar9 != 0) &&
            (iVar9 = (**(code **)(*(int *)(iVar10 + 0x14c) + 0x104))(iVar10), iVar9 == 0)) &&
           ((iVar9 = (**(code **)(*(int *)(iVar10 + 0x14c) + 0x68))(iVar10), iVar9 == 0 &&
            (*(float *)(iVar10 + 0x2610) <= 0.0)))) {
          fVar3 = *(float *)(iVar10 + 0x20) - (local_28->position).x;
          fVar4 = *(float *)(iVar10 + 0x24) - (local_28->position).y;
          fVar5 = *(float *)(iVar10 + 0x28) - (local_28->position).z;
          if ((ABS(fVar4) <= fVar1) &&
             (fVar4 = fVar4 * 3.0f,
             fStack_30 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4, fStack_30 <= local_38)) {
            *(int *)(&DAT_01bcdef8 + local_20) = iVar10;
            *(float *)(local_20 + 0x1bcfe38) = fStack_30;
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
        iVar9 = 0;
        local_18 = 1e+20;
        iVar10 = -1;
        if (0 < iVar6) {
          iVar8 = 0;
          do {
            if (*(float *)(iVar8 + 0x1bcfe38) < local_18) {
              local_18 = *(float *)(iVar8 + 0x1bcfe38);
              iVar10 = iVar9;
            }
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 4;
          } while (iVar9 < iVar6);
        }
        if (iVar10 < 0) break;
        local_1c = *(CCharacter **)(&DAT_01bcdef8 + iVar10 * 4);
        iVar9 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(this_ptr,&local_1c->base);
        this_ptr_00 = g_CConsole_PTR_005ad350;
        if (iVar9 != 0) {
          this_ptr->victim = local_1c;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (this_ptr_00,"%s can see hero\n",this_ptr);
          return;
        }
        if ((((this_ptr->allow_pathfind_to_new_targets != 0) ||
             ((this_ptr->allow_pathfind_to_new_targets == 0 && (local_1c == local_34)))) &&
            (this_ptr_01 = (*((local_1c->base).vtable._ub)->getPathMap)(&local_1c->base),
            this_ptr_01 != (CPathMap *)0x0)) &&
           (iVar9 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                              (this_ptr_01,local_3c,&CStack_48,(this_ptr->base).base.direction_hint)
           , iVar9 == 1)) {
          this_ptr->victim = local_1c;
          return;
        }
        *(uint *)(iVar10 * 4 + 0x1bcfe38) = 0x7149f2ca;
        if (local_34 == local_1c) {
          this_ptr->victim = local_1c;
        }
      }
    }
    else {
      pCVar2 = this_ptr->victim;
      if ((pCVar2 != (CCharacter *)0x0) &&
         (EVar7 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
         EVar7 != DEATH_STATE_ALIVE)) {
        this_ptr->victim_search_timer = 0.0;
        this_ptr->is_in_combat = 0;
        this_ptr->victim = (CCharacter *)0x0;
        return;
      }
    }
  }
  else {
    if (pCVar2 == 0xFFFFFFFF) {
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
