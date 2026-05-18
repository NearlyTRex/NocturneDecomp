// Name: core_set.cpp_CDemonSet_processActors_FUN_0056b810
// Address: 0056b810
// MANUAL RECONSTRUCTION
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_processActors_FUN_0056b810(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_processActors_FUN_0056b810(CDemonSet *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CPathMap *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar5;
  int iVar3;
  CGlass *this_ptr_02;
  CTrigger *this_ptr_03;
  CFlameCan *this_ptr_04;
  int iVar9;
  SDamageInfo local_a0;
  CVector3f aCStack_94 [3];
  CVector3f orient_snapshot;
  CVector3f CStack_58;
  float fStack_48;
  float local_40;
  int local_3c;
  int local_38;
  CCharacter *pCStack_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  CPathMap *damage_info;
  float fDeltaTime;
  CDemonActor *pCVar3;
  CCharacter *local_34;
  
  for (iVar9 = 0; iVar9 < this_ptr->actor_count; iVar9 = iVar9 + 1) {
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (this_ptr->actors[iVar9],"..\\core\\set.cpp",0x593);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_40 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_20 = 0;
  }
  g_DynamicLightCount = 0;
  fDeltaTime = g_CGamePtr->delta_time_float;
  g_CoronaGlobeCount = 0;
  if (!(0.0 < fDeltaTime)) {
    return;
  }
  {
    CStack_58.z = fDeltaTime;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(this_ptr);
    for (iVar2 = 0; iVar2 < this_ptr->actor_count; iVar2 = iVar2 + 1) {
      this_ptr->actors[iVar2]->direction_hint = iVar2;
    }
    if (0.0 < fDeltaTime) {
      local_24 = -999999;
      iVar2 = local_24;
      do {
        local_24 = iVar2;
        local_1c = 999999;
        iVar2 = 0;
        if (0 < this_ptr->actor_count) {
          do {
            pCVar1 = this_ptr->actors[iVar2];
            if (pCVar1->process_disabled == 0) {
              iVar3 = pCVar1->health;
              if (iVar3 == local_24) {
                g_CurrentProcessingActor = pCVar1;
                orient_snapshot = (g_CurrentProcessingActor->orient).vec;
                if (g_CGamePtr->profile_mode == 2) {
                  local_3c = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*((g_CurrentProcessingActor->vtable)._ub)->process)
                          (g_CurrentProcessingActor,fDeltaTime);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  g_ActorProfileTimes[local_20] = iVar3 - local_3c;
                  g_ActorProfileActors[local_20] = g_CurrentProcessingActor;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  local_20 = local_20 + 1;
                }
                damage_info = (CPathMap *)0x56ba31;
                this_ptr_00 = (*((g_CurrentProcessingActor->vtable)._ub)->getPathMap)
                                        (g_CurrentProcessingActor);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
                            (this_ptr_00,&(g_CurrentProcessingActor->location).position,0);
                  damage_info = this_ptr_00;
                }
                if ((orient_snapshot.x == (g_CurrentProcessingActor->orient).vec.x) &&
                    (orient_snapshot.y == (g_CurrentProcessingActor->orient).vec.y) &&
                    (orient_snapshot.z == (g_CurrentProcessingActor->orient).vec.z)) {
                  g_CurrentProcessingActor = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                            (g_CurrentProcessingActor);
                  g_CurrentProcessingActor = (CDemonActor *)0x0;
                }
              }
              else if ((local_24 < iVar3) && (iVar3 < local_1c)) {
                local_1c = iVar3;
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < this_ptr->actor_count);
        }
        iVar2 = local_1c;
      } while (local_1c < 999999);
    }
    iVar2 = 0;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_01 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (this_ptr->actors[iVar2],g_CCharacterClassInfo.name_hash);
        local_34 = this_ptr_01;
        if ((this_ptr_01 != (CCharacter *)0x0) &&
           (fVar5 = (float)(*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
           fVar5 == 0.0)) {
          damage_info = (CPathMap *)&fStack_48;
          fStack_48 = fVar5;
          iVar3 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004c8c90
                            (g_CFireEffectPtr,&(this_ptr_01->base).location.position,0.0,&CStack_58,
                             (float *)damage_info);
          if (iVar3 != 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_a0);
            if (aCStack_94 != &CStack_58) {
              aCStack_94[0] = CStack_58;
            }
            damage_info = (CPathMap *)&local_a0;
            (*(((pCStack_30->base).vtable._uc)->_uc).processDamage)
                      (pCStack_30,(SDamageInfo *)damage_info);
          }
        }
        this_ptr_02 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (this_ptr->actors[iVar2],g_CGlassClassInfo.name_hash);
        if (this_ptr_02 != (CGlass *)0x0) {
          pCStack_30 = (CCharacter *)&(this_ptr_02->base).location;
          iVar3 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004c8c90
                            (g_CFireEffectPtr,(CVector3f *)pCStack_30,0.0,(CVector3f *)0x0,
                             (float *)0x0);
          if ((iVar3 != 0) &&
             (iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_02),
             iVar3 != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_02,(CVector3f *)pCStack_30);
          }
        }
        this_ptr_03 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (this_ptr->actors[iVar2],g_CTriggerClassInfo.name_hash);
        if (((this_ptr_03 != (CTrigger *)0x0) && (this_ptr_03->hero_triggers_me == 7)) &&
           (this_ptr_03->damage_actor_wildcard_name[0] == '\0')) {
          fStack_48 = 0.0;
          iVar3 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004c8c90
                            (g_CFireEffectPtr,&(this_ptr_03->base).location.position,0.0,
                             (CVector3f *)0x0,&fStack_48);
          if (iVar3 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_03,fStack_48);
          }
        }
        this_ptr_04 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (this_ptr->actors[iVar2],g_CFlameCanClassInfo.name_hash);
        if ((this_ptr_04 != (CFlameCan *)0x0) &&
           (iVar3 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004c8c90
                              (g_CFireEffectPtr,&(this_ptr_04->base).location.position,0.0,
                               (CVector3f *)0x0,(float *)0x0), iVar3 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_04);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->actor_count);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_38 = local_20 + -1;
        for (local_28 = 0; local_28 < local_38; local_28 = local_28 + 1) {
          for (iVar2 = local_28 + 1; iVar2 < local_20; iVar2 = iVar2 + 1) {
            iVar3 = g_ActorProfileTimes[local_28];
            if (iVar3 < g_ActorProfileTimes[iVar2]) {
              g_ActorProfileTimes[local_28] = g_ActorProfileTimes[iVar2];
              g_ActorProfileTimes[iVar2] = iVar3;
              pCVar3 = g_ActorProfileActors[local_28];
              g_ActorProfileActors[local_28] = g_ActorProfileActors[iVar2];
              g_ActorProfileActors[iVar2] = pCVar3;
            }
          }
        }
        iVar2 = 0x14;
        if (local_20 < 0x14) {
          iVar2 = local_20;
        }
        for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar3,
                     g_ActorProfileActors[iVar3]->actor_name,
                     ((double)g_ActorProfileTimes[iVar3] * 0.055555555555555601 *
                      1.52587890625e-05 * 1000) / (double)fDeltaTime);
        }
      }
      iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      iStack_18 = iVar2 - (int)local_40;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",local_20,
                 ((double)iStack_18 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                 (double)fDeltaTime);
    }
    for (iVar2 = 0; iVar2 < this_ptr->actor_count; iVar2 = iVar2 + 1) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (this_ptr->actors[iVar2],"..\\core\\set.cpp",0x654);
    }
  }
  return;
}
