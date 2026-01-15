// Name: core_enemy.cpp_CEnemy_FUN_004a9b00
// Address: 004a9b00
// Address Range: [[004a9b00, 004a9c26]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_FUN_004a9b00(CEnemy * this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004a9b00(CEnemy *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CConsole *this_ptr_00;
  int iVar5;
  CPathMap *this_ptr_01;
  int iVar6;
  int iVar7;
  int iVar8;
  float in_stack_00000008;
  CVector3f CStack_48;
  CVector3f *local_3c;
  float local_38;
  int local_34;
  float fStack_30;
  int local_2c;
  CLocation *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  fVar1 = this_ptr->victim_height;
  iVar5 = *(int *)this_ptr[1].base_character.base_actor.actor_name;
  if (iVar5 == 0) {
    if (((g_CGamePtr->field54_0x1d4 != 0) || (g_CGamePtr->allow_enemy_attack_flag == 0)) ||
       (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,"Capture"), iVar5 != 0)) {
      this_ptr->field4_0xbe30 = 0;
      this_ptr->field6_0xbe38[8] = '\0';
      this_ptr->field6_0xbe38[9] = '\0';
      this_ptr->field6_0xbe38[10] = '\0';
      this_ptr->field6_0xbe38[0xb] = '\0';
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
      return;
    }
    fVar2 = *(float *)(this_ptr->field6_0xbe38 + 8) - in_stack_00000008;
    *(float *)(this_ptr->field6_0xbe38 + 8) = fVar2;
    if (fVar2 <= 0.0) {
      this_ptr->field4_0xbe30 = 0;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.5);
      local_38 = *(float *)(this_ptr->field6_0xbe38 + 0xc) *
                 *(float *)(this_ptr->field6_0xbe38 + 0xc);
      iVar5 = 0;
      *(float *)(this_ptr->field6_0xbe38 + 8) = local_14;
      if ((*(int *)(this_ptr->field6_0xbe38 + 4) == 0) &&
         (this_ptr->guard_distance < *(float *)(this_ptr->field6_0xbe38 + 0xc))) {
        local_38 = this_ptr->guard_distance * this_ptr->guard_distance;
      }
      local_28 = &(this_ptr->base_character).base_actor.location;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < g_CDemonSetPtr->damage_listener_count; local_24 = local_24 + 1)
      {
        iVar8 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + local_2c + -4);
        iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0xf8))();
        if ((((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), iVar7 == 0)
             ) && (iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x68))(), iVar7 == 0)) &&
           (*(float *)(iVar8 + 0x2618) <= 0.0)) {
          fVar2 = *(float *)(iVar8 + 0x20) - (local_28->position).x;
          fVar3 = *(float *)(iVar8 + 0x24) - (local_28->position).y;
          fVar4 = *(float *)(iVar8 + 0x28) - (local_28->position).z;
          if ((ABS(fVar3) <= fVar1) &&
             (fVar3 = fVar3 * 3f,
             fStack_30 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3, fStack_30 <= local_38)) {
            *(int *)((int)&DAT_02cf2bf4 + local_20) = iVar8;
            *(float *)((int)&DAT_02cf4b34 + local_20) = fStack_30;
            local_20 = local_20 + 4;
            iVar5 = iVar5 + 1;
          }
        }
        local_2c = local_2c + 4;
      }
      local_34 = *(int *)(this_ptr->field6_0xbe38 + 4);
      local_3c = &(this_ptr->base_character).base_actor.location.position;
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
      while( true ) {
        iVar7 = 0;
        local_18 = 1e+20;
        iVar8 = -1;
        if (0 < iVar5) {
          iVar6 = 0;
          do {
            if (*(float *)((int)&DAT_02cf4b34 + iVar6) < local_18) {
              local_18 = *(float *)((int)&DAT_02cf4b34 + iVar6);
              iVar8 = iVar7;
            }
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar7 < iVar5);
        }
        if (iVar8 < 0) break;
        local_1c = (&DAT_02cf2bf4)[iVar8];
        iVar7 = core_enemy_cpp_FUN_004a9a50();
        this_ptr_00 = g_CConsolePtr;
        if (iVar7 != 0) {
          *(int *)(this_ptr->field6_0xbe38 + 4) = local_1c;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_00,"%s can see hero\n",this_ptr);
          return;
        }
        if ((((*(int *)(this_ptr[1].base_character.base_actor.actor_name + 4) != 0) ||
             ((*(int *)(this_ptr[1].base_character.base_actor.actor_name + 4) == 0 &&
              (local_1c == local_34)))) &&
            (this_ptr_01 = (CPathMap *)(**(code **)(*(int *)(local_1c + 0x154) + 0xbc))(),
            this_ptr_01 != (CPathMap *)0x0)) &&
           (iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                              (this_ptr_01,local_3c,&CStack_48,
                               (this_ptr->base_character).base_actor.field7_0x6c), iVar7 == 1)) {
          *(int *)(this_ptr->field6_0xbe38 + 4) = local_1c;
          return;
        }
        (&DAT_02cf4b34)[iVar8] = 0x7149f2ca;
        if (local_34 == local_1c) {
          *(int *)(this_ptr->field6_0xbe38 + 4) = local_1c;
        }
      }
    }
    else if ((*(int *)(this_ptr->field6_0xbe38 + 4) != 0) &&
            (iVar5 = (**(code **)(*(int *)(*(int *)(this_ptr->field6_0xbe38 + 4) + 0x154) + 0x120))
                               (), iVar5 != 0)) {
      this_ptr->field6_0xbe38[8] = '\0';
      this_ptr->field6_0xbe38[9] = '\0';
      this_ptr->field6_0xbe38[10] = '\0';
      this_ptr->field6_0xbe38[0xb] = '\0';
      this_ptr->field4_0xbe30 = 0;
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
      return;
    }
  }
  else {
    if (iVar5 == DAT_0065d7c8) {
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
    }
    else {
      *(int *)(this_ptr->field6_0xbe38 + 4) = iVar5;
    }
    this_ptr->field4_0xbe30 = 0;
    this_ptr->field6_0xbe38[8] = '\0';
    this_ptr->field6_0xbe38[9] = '\0';
    this_ptr->field6_0xbe38[10] = '\0';
    this_ptr->field6_0xbe38[0xb] = '\0';
  }
  return;
}
