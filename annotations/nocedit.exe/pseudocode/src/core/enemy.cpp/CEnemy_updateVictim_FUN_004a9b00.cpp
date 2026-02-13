// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_004a9b00
// Address: 004a9b00
// Address Range: [[004a9b00, 004a9c26]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  CCharacter *this_ptr_00;
  float fVar2;
  float fVar3;
  float fVar4;
  CConsole *this_ptr_01;
  int iVar5;
  CPathMap *this_ptr_02;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  CVector3f CStack_44;
  CVector3f *local_38;
  CDemonActor *local_34;
  float fStack_30;
  int local_2c;
  CLocation *local_28;
  int local_24;
  int local_20;
  CDemonActor *local_1c;
  CDemonActor *local_18;
  float local_14;
  
  fVar9 = this_ptr->victim_height;
  pCVar1 = this_ptr->script_victim;
  if (pCVar1 == (CDemonActor *)0x0) {
    if (((g_CGamePtr->debug_flag_2 != 0) || (g_CGamePtr->allow_enemy_attack_flag == 0)) ||
       (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,"Capture"), iVar5 != 0)) {
      this_ptr->is_in_combat = 0;
      this_ptr->victim_search_timer = 0.0;
      this_ptr->victim = (CDemonActor *)0x0;
      return;
    }
    fVar2 = this_ptr->victim_search_timer - delta_time;
    this_ptr->victim_search_timer = fVar2;
    if (fVar2 <= 0.0) {
      this_ptr->is_in_combat = 0;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.5);
      local_38 = (CVector3f *)(this_ptr->victim_search_radius * this_ptr->victim_search_radius);
      iVar5 = 0;
      this_ptr->victim_search_timer = local_14;
      if ((this_ptr->victim == (CDemonActor *)0x0) &&
         (this_ptr->guard_distance < this_ptr->victim_search_radius)) {
        local_38 = (CVector3f *)(this_ptr->guard_distance * this_ptr->guard_distance);
      }
      local_28 = &(this_ptr->base).base.location;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < g_CDemonSetPtr->damage_listener_count; local_24 = local_24 + 1)
      {
        iVar8 = *(int *)(g_CDemonSetPtr->unk4 + local_2c + -4);
        iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0xf8))();
        if ((((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), iVar7 == 0)
             ) && (iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x68))(), iVar7 == 0)) &&
           (*(float *)(iVar8 + 0x2618) <= 0.0)) {
          fVar2 = *(float *)(iVar8 + 0x20) - (local_28->position).x;
          fVar3 = *(float *)(iVar8 + 0x24) - (local_28->position).y;
          fVar4 = *(float *)(iVar8 + 0x28) - (local_28->position).z;
          if ((ABS(fVar3) <= fVar9) &&
             (fVar3 = fVar3 * 3.0f,
             fStack_30 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3, fStack_30 <= (float)local_38
             )) {
            *(int *)((int)&DAT_02cf2bf4 + local_20) = iVar8;
            *(float *)((int)&DAT_02cf4b34 + local_20) = fStack_30;
            local_20 = local_20 + 4;
            iVar5 = iVar5 + 1;
          }
        }
        local_2c = local_2c + 4;
      }
      local_34 = this_ptr->victim;
      CStack_44.z = (float)&(this_ptr->base).base.location;
      this_ptr->victim = (CDemonActor *)0x0;
      while( true ) {
        iVar7 = 0;
        local_18 = (CDemonActor *)0x60ad78ec;
        iVar8 = -1;
        if (0 < iVar5) {
          iVar6 = 0;
          do {
            if (*(float *)((int)&DAT_02cf4b34 + iVar6) < (float)local_18) {
              local_18 = *(CDemonActor **)((int)&DAT_02cf4b34 + iVar6);
              iVar8 = iVar7;
            }
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar7 < iVar5);
        }
        if (iVar8 < 0) break;
        local_1c = (CDemonActor *)(&DAT_02cf2bf4)[iVar8];
        iVar7 = core_enemy_cpp_CEnemy_FUN_004a9a50(this_ptr);
        this_ptr_01 = g_CConsolePtr;
        if (iVar7 != 0) {
          this_ptr->victim = local_1c;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_01,"%s can see hero\n",this_ptr);
          return;
        }
        if ((((this_ptr->allow_pathfind_to_new_targets != 0) ||
             ((this_ptr->allow_pathfind_to_new_targets == 0 && (local_1c == local_34)))) &&
            (this_ptr_02 = (*((local_1c->vtable)._ub)->getPathMap)(local_1c),
            this_ptr_02 != (CPathMap *)0x0)) &&
           (iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                              (this_ptr_02,local_38,&CStack_44,(this_ptr->base).base.direction_hint)
           , iVar7 == 1)) {
          this_ptr->victim = local_18;
          return;
        }
        (&DAT_02cf4b34)[iVar8] = 0x7149f2ca;
        if (local_34 == local_1c) {
          this_ptr->victim = local_1c;
        }
      }
    }
    else {
      this_ptr_00 = (CCharacter *)this_ptr->victim;
      if ((this_ptr_00 != (CCharacter *)0x0) &&
         (iVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00), iVar5 != 0)
         ) {
        this_ptr->victim_search_timer = 0.0;
        this_ptr->is_in_combat = 0;
        this_ptr->victim = (CDemonActor *)0x0;
        return;
      }
    }
  }
  else {
    if (pCVar1 == (CDemonActor *)NAN) {
      this_ptr->victim = (CDemonActor *)0x0;
    }
    else {
      this_ptr->victim = pCVar1;
    }
    this_ptr->is_in_combat = 0;
    this_ptr->victim_search_timer = 0.0;
  }
  return;
}
