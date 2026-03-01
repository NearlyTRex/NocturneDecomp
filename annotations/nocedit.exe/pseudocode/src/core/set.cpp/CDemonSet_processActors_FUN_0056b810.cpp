// Name: core_set.cpp_CDemonSet_processActors_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_processActors_FUN_0056b810(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_processActors_FUN_0056b810(CDemonSet *this_ptr)

{
  int *piVar1;
  uint *puVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  CPathMap *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar5;
  CGlass *this_ptr_02;
  CTrigger *this_ptr_03;
  CFlameCan *this_ptr_04;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CDemonSet *pCVar11;
  CPathMap *damage_info;
  CVector3f aCStack_94 [3];
  int iStack_70;
  CDemonActor *local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  CVector3f CStack_58;
  float fStack_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_38;
  CCharacter *local_34;
  CCharacter *pCStack_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  iVar9 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (pCVar6->actors[0],"..\\core\\set.cpp",0x593);
      iVar9 = iVar9 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar9 < this_ptr->actor_count);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_40 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_20 = 0;
  }
  g_DynamicLightCount = 0;
  damage_info = (CPathMap *)g_CGamePtr->delta_time_float;
  g_CoronaGlobeCount = 0;
  pCVar6 = (CDemonSet *)
           CONCAT22((short)((uint)damage_info >> 0x10),
                    (ushort)(0.0 < (float)damage_info) << 8 | (ushort)NAN((float)damage_info) << 10
                    | (ushort)((float)damage_info == 0.0) << 0xe);
  if (0.0 < (float)damage_info) {
    CStack_58.z = (float)damage_info;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(this_ptr);
    iVar9 = 0;
    pCVar6 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        pCVar6->actors[0]->direction_hint = iVar9;
        iVar9 = iVar9 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar9 < this_ptr->actor_count);
    }
    if (0.0 < (float)damage_info) {
      local_24 = -999999;
      iVar9 = local_24;
      do {
        local_24 = iVar9;
        local_1c = 999999;
        iVar9 = 0;
        if (0 < this_ptr->actor_count) {
          iVar7 = local_20 << 2;
          pCVar6 = this_ptr;
          do {
            pCVar3 = pCVar6->actors[0];
            if (pCVar3->process_disabled == 0) {
              iVar8 = pCVar3->health;
              if (iVar8 == local_24) {
                local_68 = (CDemonActor *)(pCVar3->orient).vec.x;
                local_64 = (pCVar3->orient).vec.y;
                local_60 = (pCVar3->orient).vec.z;
                g_CurrentProcessingActor = pCVar3;
                if (g_CGamePtr->profile_mode == 2) {
                  local_44 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*((g_CurrentProcessingActor->vtable)._ub)->process)
                          (g_CurrentProcessingActor,(float)damage_info);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar8 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  *(int *)((int)g_ActorProfileTimes + iVar7) = iVar8 - local_3c;
                  *(CDemonActor **)((int)g_ActorProfileActors + iVar7) = g_CurrentProcessingActor;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  iStack_18 = iStack_18 + 1;
                  iVar7 = iVar7 + 4;
                }
                damage_info = (CPathMap *)0x56ba31;
                this_ptr_00 = (*((g_CurrentProcessingActor->vtable)._ub)->getPathMap)
                                        (g_CurrentProcessingActor);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
                            (this_ptr_00,&(g_CurrentProcessingActor->location).position,0);
                  damage_info = this_ptr_00;
                }
                if (((CStack_58.x == (g_CurrentProcessingActor->orient).vec.y) &&
                    (fStack_5c == (g_CurrentProcessingActor->orient).vec.x)) &&
                   (CStack_58.y == (g_CurrentProcessingActor->orient).vec.z)) {
                  g_CurrentProcessingActor = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                            (g_CurrentProcessingActor);
                  g_CurrentProcessingActor = (CDemonActor *)0x0;
                }
              }
              else if ((local_24 < iVar8) && (iVar8 < local_1c)) {
                local_1c = iVar8;
              }
            }
            iVar9 = iVar9 + 1;
            pCVar6 = (CDemonSet *)pCVar6->cameras;
          } while (iVar9 < this_ptr->actor_count);
        }
        iVar9 = local_1c;
      } while (local_1c < 999999);
    }
    iVar9 = 0;
    pCVar6 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_01 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar6->actors[0],g_CCharacterClassInfo.name_hash);
        local_34 = this_ptr_01;
        if ((this_ptr_01 != (CCharacter *)0x0) &&
           (fVar5 = (float)(*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
           fVar5 == 0.0)) {
          damage_info = (CPathMap *)&fStack_48;
          fStack_48 = fVar5;
          iVar7 = core_fire_cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90
                            (g_CFireEffectPtr,&(this_ptr_01->base).location.position,0.0,&CStack_58,
                             (int *)damage_info);
          if (iVar7 != 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff60);
            iStack_70 = 4;
            if (aCStack_94 != &CStack_58) {
              aCStack_94[0].x = CStack_58.x;
              aCStack_94[0].y = CStack_58.y;
              aCStack_94[0].z = CStack_58.z;
            }
            damage_info = (CPathMap *)&stack0xffffff60;
            (*(((pCStack_30->base).vtable._uc)->_uc).processDamage)
                      (pCStack_30,(SDamageInfo *)damage_info);
          }
        }
        this_ptr_02 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar6->actors[0],g_CGlassClassInfo.name_hash);
        if (this_ptr_02 != (CGlass *)0x0) {
          pCStack_30 = (CCharacter *)&(this_ptr_02->base).location;
          iVar7 = core_fire_cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90
                            (g_CFireEffectPtr,(CVector3f *)pCStack_30,0.0,(CVector3f *)0x0,
                             (int *)0x0);
          if ((iVar7 != 0) &&
             (iVar7 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_02),
             iVar7 != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_02,(CVector3f *)pCStack_30);
          }
        }
        this_ptr_03 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar6->actors[0],g_CTriggerClassInfo.name_hash);
        if (((this_ptr_03 != (CTrigger *)0x0) && (this_ptr_03->hero_triggers_me == 7)) &&
           (this_ptr_03->damage_actor_wildcard_name[0] == '\0')) {
          fStack_48 = 0.0;
          iVar7 = core_fire_cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90
                            (g_CFireEffectPtr,&(this_ptr_03->base).location.position,0.0,
                             (CVector3f *)0x0,(int *)&fStack_48);
          if (iVar7 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_03,fStack_48);
          }
        }
        this_ptr_04 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar6->actors[0],g_CFlameCanClassInfo.name_hash);
        if ((this_ptr_04 != (CFlameCan *)0x0) &&
           (iVar7 = core_fire_cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90
                              (g_CFireEffectPtr,&(this_ptr_04->base).location.position,0.0,
                               (CVector3f *)0x0,(int *)0x0), iVar7 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_04);
        }
        iVar9 = iVar9 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar9 < this_ptr->actor_count);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_38 = local_20 + -1;
        local_2c = 0;
        local_28 = 0;
        if (0 < local_38) {
          local_3c = local_20 << 2;
          do {
            if (local_28 + 1 < local_20) {
              iVar9 = (local_28 + 1) * 4;
              do {
                iVar7 = *(int *)((int)g_ActorProfileTimes + local_2c);
                if (iVar7 < *(int *)((int)g_ActorProfileTimes + iVar9)) {
                  *(uint *)((int)g_ActorProfileTimes + local_2c) =
                       *(uint *)((int)g_ActorProfileTimes + iVar9);
                  *(int *)((int)g_ActorProfileTimes + iVar9) = iVar7;
                  uVar4 = *(uint *)((int)g_ActorProfileActors + local_2c);
                  *(uint *)((int)g_ActorProfileActors + local_2c) =
                       *(uint *)((int)g_ActorProfileActors + iVar9);
                  *(uint *)((int)g_ActorProfileActors + iVar9) = uVar4;
                }
                iVar9 = iVar9 + 4;
              } while (iVar9 < local_3c);
            }
            local_2c = local_2c + 4;
            local_28 = local_28 + 1;
          } while (local_28 < local_38);
        }
        iVar9 = 0x14;
        if (local_20 < 0x14) {
          iVar9 = local_20;
        }
        if (0 < iVar9) {
          iVar8 = 0;
          iVar7 = 0;
          do {
            piVar1 = (int *)((int)g_ActorProfileTimes + iVar8);
            puVar2 = (uint *)((int)g_ActorProfileActors + iVar8);
            iVar8 = iVar8 + 4;
            iVar10 = iVar7 + 1;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar7,*puVar2,
                       ((double)*piVar1 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                       (double)(float)damage_info);
            iVar7 = iVar10;
          } while (iVar10 < iVar9);
        }
      }
      iStack_18 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      iStack_18 = iStack_18 - (int)local_40;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",local_20,
                 ((double)iStack_18 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                 (double)(float)damage_info);
    }
    iVar9 = 0;
    pCVar6 = this_ptr;
    pCVar11 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (pCVar11->actors[0],"..\\core\\set.cpp",0x654);
        iVar9 = iVar9 + 1;
        pCVar11 = (CDemonSet *)pCVar11->cameras;
      } while (iVar9 < this_ptr->actor_count);
    }
  }
  return (int)pCVar6;
}
