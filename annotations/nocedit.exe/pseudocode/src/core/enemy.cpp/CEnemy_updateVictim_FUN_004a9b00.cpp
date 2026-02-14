// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_004a9b00
// Address: 004a9b00
// Address Range: [[004a9b00, 004a9c26]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)

{
  float fVar1;
  CDemonActor *pCVar2;
  CCharacter *this_ptr_00;
  float fVar3;
  float fVar4;
  float fVar5;
  CConsole *this_ptr_01;
  int iVar6;
  CPathMap *this_ptr_02;
  int iVar7;
  int iVar8;
  int iVar9;
  CVector3f CStack_48;
  CVector3f *local_3c;
  float local_38;
  CDemonActor *local_34;
  float fStack_30;
  int local_2c;
  CLocation *local_28;
  int local_24;
  int local_20;
  CDemonActor *local_1c;
  float local_18;
  float local_14;
  
  fVar1 = this_ptr->victim_height;
  pCVar2 = this_ptr->script_victim;
  if (pCVar2 == (CDemonActor *)0x0) {
    if (((g_CGamePtr->debug_flag_2 != 0) || (g_CGamePtr->allow_enemy_attack_flag == 0)) ||
       (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,"Capture"), iVar6 != 0)) {
      this_ptr->is_in_combat = 0;
      this_ptr->victim_search_timer = 0.0;
      this_ptr->victim = (CDemonActor *)0x0;
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
      if ((this_ptr->victim == (CDemonActor *)0x0) &&
         (this_ptr->guard_distance < this_ptr->victim_search_radius)) {
        local_38 = this_ptr->guard_distance * this_ptr->guard_distance;
      }
      local_28 = &(this_ptr->base).base.location;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < g_CDemonSetPtr->damage_listener_count; local_24 = local_24 + 1)
      {
        iVar9 = *(int *)(g_CDemonSetPtr->unk4 + local_2c + -4);
        iVar8 = (**(code **)(*(int *)(iVar9 + 0x154) + 0xf8))(iVar9,this_ptr);
        if (((iVar8 != 0) &&
            (iVar8 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x120))(iVar9), iVar8 == 0)) &&
           ((iVar8 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x68))(iVar9), iVar8 == 0 &&
            (*(float *)(iVar9 + 0x2618) <= 0.0)))) {
          fVar3 = *(float *)(iVar9 + 0x20) - (local_28->position).x;
          fVar4 = *(float *)(iVar9 + 0x24) - (local_28->position).y;
          fVar5 = *(float *)(iVar9 + 0x28) - (local_28->position).z;
          if ((ABS(fVar4) <= fVar1) &&
             (fVar4 = fVar4 * 3.0f,
             fStack_30 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4, fStack_30 <= local_38)) {
            *(int *)((int)&DAT_02cf2bf4 + local_20) = iVar9;
            *(float *)((int)&DAT_02cf4b34 + local_20) = fStack_30;
            local_20 = local_20 + 4;
            iVar6 = iVar6 + 1;
          }
        }
        local_2c = local_2c + 4;
      }
      local_34 = this_ptr->victim;
      local_3c = &(this_ptr->base).base.location.position;
      this_ptr->victim = (CDemonActor *)0x0;
      while( true ) {
        iVar8 = 0;
        local_18 = 1e+20;
        iVar9 = -1;
        if (0 < iVar6) {
          iVar7 = 0;
          do {
            if (*(float *)((int)&DAT_02cf4b34 + iVar7) < local_18) {
              local_18 = *(float *)((int)&DAT_02cf4b34 + iVar7);
              iVar9 = iVar8;
            }
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar8 < iVar6);
        }
        if (iVar9 < 0) break;
        local_1c = (CDemonActor *)(&DAT_02cf2bf4)[iVar9];
        iVar8 = core_enemy_cpp_CEnemy_FUN_004a9a50(this_ptr);
        this_ptr_01 = g_CConsolePtr;
        if (iVar8 != 0) {
          this_ptr->victim = local_1c;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_01,"%s can see hero\n",this_ptr);
          return;
        }
        if ((((this_ptr->allow_pathfind_to_new_targets != 0) ||
             ((this_ptr->allow_pathfind_to_new_targets == 0 && (local_1c == local_34)))) &&
            (this_ptr_02 = (*((local_1c->vtable)._ub)->getPathMap)(local_1c),
            this_ptr_02 != (CPathMap *)0x0)) &&
           (iVar8 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                              (this_ptr_02,local_3c,&CStack_48,(this_ptr->base).base.direction_hint)
           , iVar8 == 1)) {
          this_ptr->victim = local_1c;
          return;
        }
        (&DAT_02cf4b34)[iVar9] = 0x7149f2ca;
        if (local_34 == local_1c) {
          this_ptr->victim = local_1c;
        }
      }
    }
    else {
      this_ptr_00 = (CCharacter *)this_ptr->victim;
      if ((this_ptr_00 != (CCharacter *)0x0) &&
         (iVar6 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00), iVar6 != 0)
         ) {
        this_ptr->victim_search_timer = 0.0;
        this_ptr->is_in_combat = 0;
        this_ptr->victim = (CDemonActor *)0x0;
        return;
      }
    }
  }
  else {
    if (pCVar2 == (CDemonActor *)NAN) {
      this_ptr->victim = (CDemonActor *)0x0;
    }
    else {
      this_ptr->victim = pCVar2;
    }
    this_ptr->is_in_combat = 0;
    this_ptr->victim_search_timer = 0.0;
  }
  return;
}
