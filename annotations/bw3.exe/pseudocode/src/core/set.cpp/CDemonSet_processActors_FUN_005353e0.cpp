// Name: core_set.cpp_CDemonSet_processActors_FUN_005353e0
// Address: 005353e0
// Address Range: [[005353e0, 00535a77]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_processActors_FUN_005353e0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_processActors_FUN_005353e0(CDemonSet *this_ptr)

{
  int *piVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  int iVar4;
  CPathMap *this_ptr_00;
  int iVar5;
  float fVar6;
  int iVar7;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  CDemonSet *pCVar8;
  uint *puVar9;
  int iVar10;
  byte bVar11;
  float afStackY_104c [993];
  CPathMap *delta_time;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  EDamageType EStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  CPathMap *local_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  CLocation *pCStack_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDemonSet *local_1c;
  int local_18;
  int iStack_14;
  
  bVar11 = 0;
  iVar4 = 0;
  if (0 < this_ptr->actor_count) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->actor_count);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_48 = wincore_winrun_cpp_getTime_FUN_005806a0();
    local_24 = 0;
  }
  _DAT_0203ad1c = 0;
  _DAT_0203ad30 = 0;
  delta_time = (CPathMap *)g_CGamePtr->delta_time_float;
  if (0.0 < (float)delta_time) {
    local_58 = delta_time;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0(this_ptr);
    iVar4 = 0;
    pCVar8 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        pCVar8->actors[0]->direction_hint = iVar4;
        iVar4 = iVar4 + 1;
        pCVar8 = (CDemonSet *)pCVar8->cameras;
      } while (iVar4 < this_ptr->actor_count);
    }
    if (0.0 < (float)delta_time) {
      local_28 = -999999;
      iVar4 = local_28;
      do {
        local_28 = iVar4;
        local_20 = 999999;
        local_18 = 0;
        if (0 < this_ptr->actor_count) {
          local_1c = this_ptr;
          iVar4 = local_24 << 2;
          do {
            pCVar2 = local_1c->actors[0];
            if (pCVar2->process_disabled == 0) {
              iVar5 = pCVar2->health;
              if (iVar5 == local_28) {
                puVar9 = (uint *)((int)pCVar2 + (uint)bVar11 * -8 + 0x34);
                local_64 = (pCVar2->orient).vec.x;
                *(uint *)((int)&stack0xffffffa0 + (uint)bVar11 * 0xfffffffe * 4) = *puVar9;
                *(uint *)(&stack0xffffffa4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                     puVar9[(uint)bVar11 * -2 + 1];
                DAT_007df974 = pCVar2;
                if (g_CGamePtr->profile_mode == 2) {
                  local_2c = wincore_winrun_cpp_getTime_FUN_005806a0();
                }
                (*((DAT_007df974->vtable)._ub)->process)(DAT_007df974,(float)delta_time);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar5 = wincore_winrun_cpp_getTime_FUN_005806a0();
                  *(int *)(iVar4 + 0x207bad8) = iVar5 - local_24;
                  *(CDemonActor **)(iVar4 + 0x207da18) = DAT_007df974;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  local_1c = (CDemonSet *)((int)&local_1c->camera_count + 1);
                  iVar4 = iVar4 + 4;
                }
                delta_time = (CPathMap *)0x535608;
                this_ptr_00 = (*((DAT_007df974->vtable)._ub)->getPathMap)(DAT_007df974);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_0050b1d0
                            (this_ptr_00,&(DAT_007df974->location).position,0);
                  delta_time = this_ptr_00;
                }
                if (((fStack_54 == (DAT_007df974->orient).vec.y) &&
                    ((float)local_58 == (DAT_007df974->orient).vec.x)) &&
                   (fStack_50 == (DAT_007df974->orient).vec.z)) {
                  DAT_007df974 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(DAT_007df974);
                  DAT_007df974 = (CDemonActor *)0x0;
                }
              }
              else if ((local_28 < iVar5) && (iVar5 < local_20)) {
                local_20 = iVar5;
              }
            }
            local_1c = (CDemonSet *)local_1c->cameras;
            local_18 = local_18 + 1;
          } while (local_18 < this_ptr->actor_count);
        }
        iVar4 = local_20;
      } while (local_20 < 999999);
    }
    iVar4 = 0;
    pCVar8 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar8->actors[0]);
        local_38 = iVar5;
        if (((iVar5 != 0) &&
            (fVar6 = (float)(**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(), fVar6 == 0.0)) &&
           (fStack_54 = fVar6,
           iVar7 = core_fire_cpp_FUN_004a3790
                             (0x01C73654,iVar5 + 0x20,0,&stack0xffffff90,&fStack_54), iVar7 != 0))
        {
          if (iStack_4c == 1) {
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar5);
            if (iVar7 == 0) {
              *(uint *)(iVar5 + 0x3254) = 0x41200000;
              *(uint *)(iVar5 + 0x3258) = 0;
            }
          }
          else if (iStack_4c == 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xffffff54);
            EStack_7c = DAMAGE_TYPE_FALL_APART;
            if (&stack0xffffff60 != &stack0xffffff90) {
              fStack_a0 = fStack_70;
              fStack_9c = fStack_6c;
              fStack_98 = fStack_68;
            }
            (**(code **)(*(int *)(local_38 + 0x154) + 0x108))(local_38);
          }
        }
        this_ptr_01 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar8->actors[0]);
        if (this_ptr_01 != (CGlass *)0x0) {
          pCStack_3c = &(this_ptr_01->base).location;
          iVar5 = core_fire_cpp_FUN_004a3790(0x01C73654,pCStack_3c,0,0,0);
          if ((iVar5 != 0) &&
             (iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01),
             iVar5 != 0)) {
            core_glass_cpp_FUN_004cc040(this_ptr_01);
          }
        }
        this_ptr_02 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar8->actors[0]);
        if (((this_ptr_02 != (CTrigger *)0x0) &&
            (this_ptr_02->trigger_cause == TRIGGER_CAUSE_DAMAGE)) &&
           (this_ptr_02->damage_actor_wildcard_name[0] == '\0')) {
          fStack_50 = 0.0;
          iVar5 = core_fire_cpp_FUN_004a3790
                            (0x01C73654,&(this_ptr_02->base).location,0,0,&fStack_50);
          if (iVar5 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_02,fStack_50);
          }
        }
        this_ptr_03 = (CFlameCan *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar8->actors[0]);
        if ((this_ptr_03 != (CFlameCan *)0x0) &&
           (iVar5 = core_fire_cpp_FUN_004a3790(0x01C73654,&(this_ptr_03->base).location,0,0,0),
           iVar5 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_03);
        }
        iVar4 = iVar4 + 1;
        pCVar8 = (CDemonSet *)pCVar8->cameras;
      } while (iVar4 < this_ptr->actor_count);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_30 = 0;
        local_40 = local_24 + -1;
        local_34 = 0;
        if (0 < local_40) {
          iStack_44 = local_24 << 2;
          do {
            if (local_30 + 1 < local_24) {
              iVar4 = (local_30 + 1) * 4;
              do {
                iVar5 = *(int *)(local_34 + 0x207bad8);
                if (iVar5 < *(int *)(iVar4 + 0x207bad8)) {
                  *(uint *)(local_34 + 0x207bad8) = *(uint *)(iVar4 + 0x207bad8);
                  *(int *)(iVar4 + 0x207bad8) = iVar5;
                  uVar3 = *(uint *)(local_34 + 0x207da18);
                  *(uint *)(local_34 + 0x207da18) = *(uint *)(iVar4 + 0x207da18);
                  *(uint *)(iVar4 + 0x207da18) = uVar3;
                }
                iVar4 = iVar4 + 4;
              } while (iVar4 < iStack_44);
            }
            local_34 = local_34 + 4;
            local_30 = local_30 + 1;
          } while (local_30 < local_40);
        }
        iVar4 = 0x14;
        if (local_24 < 0x14) {
          iVar4 = local_24;
        }
        if (0 < iVar4) {
          iVar7 = 0;
          iVar5 = 0;
          do {
            piVar1 = (int *)(iVar7 + 0x207bad8);
            puVar9 = (uint *)(iVar7 + 0x207da18);
            iVar7 = iVar7 + 4;
            iVar10 = iVar5 + 1;
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar5,*puVar9,
                       ((double)*piVar1 * _DAT_005d0527 * _DAT_005d052f * _DAT_005d0537) /
                       (double)(float)delta_time);
            iVar5 = iVar10;
          } while (iVar10 < iVar4);
        }
      }
      iVar4 = local_48;
      iStack_14 = wincore_winrun_cpp_getTime_FUN_005806a0();
      iStack_14 = iStack_14 - iVar4;
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",local_24,
                 ((double)iStack_14 * _DAT_005d0527 * _DAT_005d052f * _DAT_005d0537) /
                 (double)(float)delta_time);
    }
    iVar4 = 0;
    if (0 < this_ptr->actor_count) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < this_ptr->actor_count);
    }
  }
  return;
}
