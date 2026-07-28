// Name: core_enemy.cpp_CEnemy_updateVictim_FUN_00479b60
// Address: 00479b60
// Address Range: [[00479b60, 00479f4a]]
// Convention: unknown
// Signature: void core_enemy_cpp_CEnemy_updateVictim_FUN_00479b60(CEnemy *param_1,float param_2)

#include "nocturne.h"

void core_enemy_cpp_CEnemy_updateVictim_FUN_00479b60(CEnemy *param_1,float param_2)

{
  float fVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte *puVar6;
  int iVar7;
  CPathMap *this_ptr;
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
  
  fVar1 = param_1->victim_height;
  pCVar2 = param_1->script_victim;
  if (pCVar2 == (CCharacter *)0x0) {
    if (((*(int *)(0x01C775EC + 0x1d4) != 0) || (*(int *)(0x01C775EC + 0x230) == 0)) ||
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,"Capture"), iVar7 != 0)) {
      param_1->is_in_combat = 0;
      param_1->victim_search_timer = 0.0;
      param_1->victim = (CCharacter *)0x0;
      return;
    }
    param_2 = param_1->victim_search_timer - param_2;
    param_1->victim_search_timer = param_2;
    if (param_2 <= 0.0) {
      param_1->is_in_combat = 0;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f000000,0x3fc00000);
      local_38 = param_1->victim_search_radius * param_1->victim_search_radius;
      iVar7 = 0;
      param_1->victim_search_timer = local_14;
      if ((param_1->victim == (CCharacter *)0x0) &&
         (param_1->guard_distance < param_1->victim_search_radius)) {
        local_38 = param_1->guard_distance * param_1->guard_distance;
      }
      local_28 = &(param_1->base).base.location;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < *(int *)(0x01E57284 + 0x14ecb0); local_24 = local_24 + 1) {
        iVar10 = *(int *)(0x01E57284 + local_2c + 0x14ecb4);
        iVar9 = (**(code **)(*(int *)(iVar10 + 0x14c) + 0xdc))(iVar10,param_1);
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
            iVar7 = iVar7 + 1;
          }
        }
        local_2c = local_2c + 4;
      }
      local_34 = param_1->victim;
      local_3c = &(param_1->base).base.location.position;
      param_1->victim = (CCharacter *)0x0;
      while( true ) {
        iVar9 = 0;
        local_18 = 1e+20;
        iVar10 = -1;
        if (0 < iVar7) {
          iVar8 = 0;
          do {
            if (*(float *)(iVar8 + 0x1bcfe38) < local_18) {
              local_18 = *(float *)(iVar8 + 0x1bcfe38);
              iVar10 = iVar9;
            }
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 4;
          } while (iVar9 < iVar7);
        }
        if (iVar10 < 0) break;
        local_1c = *(CCharacter **)(&DAT_01bcdef8 + iVar10 * 4);
        iVar9 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(param_1,&local_1c->base);
        puVar6 = PTR_DAT_005ad350;
        if (iVar9 != 0) {
          param_1->victim = local_1c;
          engine_console_cpp_CConsole_printf_FUN_0043ac60(puVar6,"%s can see hero\n",param_1);
          return;
        }
        if ((((param_1->allow_pathfind_to_new_targets != 0) ||
             ((param_1->allow_pathfind_to_new_targets == 0 && (local_1c == local_34)))) &&
            (this_ptr = (*((local_1c->base).vtable._ub)->getPathMap)(&local_1c->base),
            this_ptr != (CPathMap *)0x0)) &&
           (iVar9 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                              (this_ptr,local_3c,&CStack_48,(param_1->base).base.direction_hint),
           iVar9 == 1)) {
          param_1->victim = local_1c;
          return;
        }
        *(uint *)(iVar10 * 4 + 0x1bcfe38) = 0x7149f2ca;
        if (local_34 == local_1c) {
          param_1->victim = local_1c;
        }
      }
    }
    else {
      pCVar2 = param_1->victim;
      if ((pCVar2 != (CCharacter *)0x0) &&
         (iVar7 = (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2), iVar7 != 0)) {
        param_1->victim_search_timer = 0.0;
        param_1->is_in_combat = 0;
        param_1->victim = (CCharacter *)0x0;
        return;
      }
    }
  }
  else {
    if (pCVar2 == 0xFFFFFFFF) {
      param_1->victim = (CCharacter *)0x0;
    }
    else {
      param_1->victim = pCVar2;
    }
    param_1->is_in_combat = 0;
    param_1->victim_search_timer = 0.0;
  }
  return;
}
