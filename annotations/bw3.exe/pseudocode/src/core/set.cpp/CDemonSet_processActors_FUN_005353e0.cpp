// Name: core_set.cpp_CDemonSet_processActors_FUN_005353e0
// Address: 005353e0
// Address Range: [[005353e0, 00535a77]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_processActors_FUN_005353e0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_processActors_FUN_005353e0(CDemonSet *this_ptr)

{
  uint uVar1;
  int iVar2;
  CPathMap *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CGlass *this_ptr_02;
  CTrigger *this_ptr_03;
  CFlameCan *this_ptr_04;
  CDemonSet *pCVar6;
  uint *puVar7;
  byte bVar8;
  CPathMap *apCStackY_104c [993];
  CPathMap *delta_time;
  CVector3f aCStack_9c [3];
  EDamageType EStack_78;
  CVector3f CStack_6c;
  CPathMap *apCStack_60 [3];
  float fStack_54;
  float afStack_50 [2];
  int local_48;
  int iStack_44;
  int local_40;
  CLocation *pCStack_3c;
  CCharacter *local_38;
  CCharacter *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDemonSet *local_1c;
  int local_18;
  int iStack_14;
  
  bVar8 = 0;
  iVar2 = 0;
  if (0 < this_ptr->actor_count) {
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->actor_count);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_48 = wincore_winrun_cpp_getTime_FUN_005806a0();
    local_24 = 0;
  }
  _DAT_0203ad1c = 0;
  _DAT_0203ad30 = 0;
  delta_time = (CPathMap *)g_CGamePtr->delta_time_float;
  if (0.0 < (float)delta_time) {
    apCStack_60[2] = delta_time;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0(this_ptr);
    iVar2 = 0;
    pCVar6 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        pCVar6->actors[0]->direction_hint = iVar2;
        iVar2 = iVar2 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar2 < this_ptr->actor_count);
    }
    if (0.0 < (float)delta_time) {
      local_28 = -999999;
      iVar2 = local_28;
      do {
        local_28 = iVar2;
        local_20 = 999999;
        local_18 = 0;
        if (0 < this_ptr->actor_count) {
          local_1c = this_ptr;
          iVar2 = local_24 << 2;
          do {
            pCVar5 = local_1c->actors[0];
            if (pCVar5->process_disabled == 0) {
              iVar4 = pCVar5->health;
              if (iVar4 == local_28) {
                puVar7 = (uint *)((int)pCVar5 + (uint)bVar8 * -8 + 0x34);
                CStack_6c.z = (pCVar5->orient).vec.x;
                apCStack_60[(uint)bVar8 * -2] = (CPathMap *)*puVar7;
                apCStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                     (CPathMap *)puVar7[(uint)bVar8 * -2 + 1];
                DAT_007df974 = pCVar5;
                if (g_CGamePtr->profile_mode == 2) {
                  local_2c = wincore_winrun_cpp_getTime_FUN_005806a0();
                }
                (*((DAT_007df974->vtable)._ub)->process)(DAT_007df974,(float)delta_time);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar4 = wincore_winrun_cpp_getTime_FUN_005806a0();
                  *(int *)(iVar2 + 0x207bad8) = iVar4 - local_24;
                  *(CDemonActor **)(iVar2 + 0x207da18) = DAT_007df974;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  local_1c = (CDemonSet *)((int)&local_1c->camera_count + 1);
                  iVar2 = iVar2 + 4;
                }
                delta_time = (CPathMap *)0x535608;
                this_ptr_00 = (*((DAT_007df974->vtable)._ub)->getPathMap)(DAT_007df974);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_0050b1d0
                            (this_ptr_00,&(DAT_007df974->location).position,0);
                  delta_time = this_ptr_00;
                }
                if (((fStack_54 == (DAT_007df974->orient).vec.y) &&
                    ((float)apCStack_60[2] == (DAT_007df974->orient).vec.x)) &&
                   (afStack_50[0] == (DAT_007df974->orient).vec.z)) {
                  DAT_007df974 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(DAT_007df974);
                  DAT_007df974 = (CDemonActor *)0x0;
                }
              }
              else if ((local_28 < iVar4) && (iVar4 < local_20)) {
                local_20 = iVar4;
              }
            }
            local_1c = (CDemonSet *)local_1c->cameras;
            local_18 = local_18 + 1;
          } while (local_18 < this_ptr->actor_count);
        }
        iVar2 = local_20;
      } while (local_20 < 999999);
    }
    iVar2 = 0;
    pCVar6 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_01 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar6->actors[0],g_CCharacterClassInfo.name_hash);
        local_38 = this_ptr_01;
        if (((this_ptr_01 != (CCharacter *)0x0) &&
            (fVar3 = (float)(*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
            fVar3 == 0.0)) &&
           (afStack_50[0] = fVar3,
           iVar4 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004a3790
                             (0x01C73654,&(this_ptr_01->base).location.position,0.0,&CStack_6c,
                              afStack_50,&local_48), iVar4 != 0)) {
          if (local_48 == 1) {
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               ((CDemonActor *)this_ptr_01,g_CHeroClassInfo.name_hash);
            if (pCVar5 == (CDemonActor *)0x0) {
              this_ptr_01->bind_time = 10.0;
              this_ptr_01->bind_type = 0;
            }
          }
          else if (local_48 == 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xffffff58);
            EStack_78 = DAMAGE_TYPE_FALL_APART;
            if (aCStack_9c != &CStack_6c) {
              aCStack_9c[0].x = CStack_6c.x;
              aCStack_9c[0].y = CStack_6c.y;
              aCStack_9c[0].z = CStack_6c.z;
            }
            (*(((local_34->base).vtable._uc)->_uc).processDamage)
                      (local_34,(SDamageInfo *)&stack0xffffff58);
          }
        }
        this_ptr_02 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar6->actors[0],g_CGlassClassInfo.name_hash);
        if (this_ptr_02 != (CGlass *)0x0) {
          pCStack_3c = &(this_ptr_02->base).location;
          iVar4 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004a3790
                            (0x01C73654,&pCStack_3c->position,0.0,(CVector3f *)0x0,(float *)0x0,
                             (int *)0x0);
          if ((iVar4 != 0) &&
             (iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_02),
             iVar4 != 0)) {
            core_glass_cpp_FUN_004cc040(this_ptr_02);
          }
        }
        this_ptr_03 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar6->actors[0],g_CTriggerClassInfo.name_hash);
        if (((this_ptr_03 != (CTrigger *)0x0) &&
            (this_ptr_03->trigger_cause == TRIGGER_CAUSE_DAMAGE)) &&
           (this_ptr_03->damage_actor_wildcard_name[0] == '\0')) {
          afStack_50[0] = 0.0;
          iVar4 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004a3790
                            (0x01C73654,&(this_ptr_03->base).location.position,0.0,
                             (CVector3f *)0x0,afStack_50,(int *)0x0);
          if (iVar4 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_03,afStack_50[0]);
          }
        }
        this_ptr_04 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar6->actors[0],g_CFlameCanClassInfo.name_hash);
        if ((this_ptr_04 != (CFlameCan *)0x0) &&
           (iVar4 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004a3790
                              (0x01C73654,&(this_ptr_04->base).location.position,0.0,
                               (CVector3f *)0x0,(float *)0x0,(int *)0x0), iVar4 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_04);
        }
        iVar2 = iVar2 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar2 < this_ptr->actor_count);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_30 = 0;
        local_40 = local_24 + -1;
        local_34 = (CCharacter *)0x0;
        if (0 < local_40) {
          iStack_44 = local_24 << 2;
          do {
            if (local_30 + 1 < local_24) {
              iVar2 = (local_30 + 1) * 4;
              do {
                iVar4 = *(int *)(local_34[0x286].flames[0x12].off_event + 0x10);
                if (iVar4 < *(int *)(iVar2 + 0x207bad8)) {
                  *(uint *)(local_34[0x286].flames[0x12].off_event + 0x10) =
                       *(uint *)(iVar2 + 0x207bad8);
                  *(int *)(iVar2 + 0x207bad8) = iVar4;
                  uVar1 = *(uint *)(local_34[0x286].flames[0x1e].on_event + 4);
                  *(uint *)(local_34[0x286].flames[0x1e].on_event + 4) =
                       *(uint *)(iVar2 + 0x207da18);
                  *(uint *)(iVar2 + 0x207da18) = uVar1;
                }
                iVar2 = iVar2 + 4;
              } while (iVar2 < iStack_44);
            }
            local_34 = (CCharacter *)((local_34->base).actor_name + 4);
            local_30 = local_30 + 1;
          } while (local_30 < local_40);
        }
        iVar2 = 0x14;
        if (local_24 < 0x14) {
          iVar2 = local_24;
        }
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            iVar4 = iVar4 + 1;
            engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%d. %s : %3.2f ms\n");
          } while (iVar4 < iVar2);
        }
      }
      iVar2 = local_48;
      iStack_14 = wincore_winrun_cpp_getTime_FUN_005806a0();
      iStack_14 = iStack_14 - iVar2;
      engine_console_cpp_CConsole_printf_FUN_00441ff0
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n");
    }
    iVar2 = 0;
    if (0 < this_ptr->actor_count) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->actor_count);
    }
  }
  return;
}
