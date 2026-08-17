// Name: core_set.cpp_CDemonSet_processActors_FUN_00509140
// Address: 00509140
// Address Range: [[00509140, 00509756]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_processActors_FUN_00509140(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_processActors_FUN_00509140(CDemonSet *this_ptr)

{
  int *piVar1;
  uint *puVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  int iVar5;
  CPathMap *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar6;
  CGlass *this_ptr_02;
  CTrigger *this_ptr_03;
  CFlameCan *this_ptr_04;
  CDemonSet *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CPathMap *damage_info;
  CVector3f aCStack_94 [3];
  EDamageType EStack_70;
  CVector3f CStack_64;
  float local_58;
  float local_54;
  CPathMap *local_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  CCharacter *local_38;
  CCharacter *pCStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  iVar5 = 0;
  if (0 < this_ptr->actor_count) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->actor_count);
  }
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    local_44 = (float)wincore_winrun_cpp_getTime_FUN_00558a30();
    local_20 = 0;
  }
  _DAT_01fba2d8 = 0;
  _DAT_01fba2ec = 0;
  damage_info = (CPathMap *)g_CGame_PTR_005b9354->delta_time_float;
  if (0.0 < (float)damage_info) {
    local_50 = damage_info;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(this_ptr);
    iVar5 = 0;
    pCVar7 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        pCVar7->actors[0]->direction_hint = iVar5;
        iVar5 = iVar5 + 1;
        pCVar7 = (CDemonSet *)pCVar7->cameras;
      } while (iVar5 < this_ptr->actor_count);
    }
    if (0.0 < (float)damage_info) {
      local_24 = -999999;
      iVar5 = local_24;
      do {
        local_24 = iVar5;
        local_1c = 999999;
        iVar5 = 0;
        if (0 < this_ptr->actor_count) {
          iVar8 = local_20 << 2;
          pCVar7 = this_ptr;
          do {
            pCVar3 = pCVar7->actors[0];
            if (pCVar3->process_disabled == 0) {
              iVar10 = pCVar3->health;
              if (iVar10 == local_24) {
                CStack_64.z = (pCVar3->orient).vec.x;
                local_58 = (pCVar3->orient).vec.y;
                local_54 = (pCVar3->orient).vec.z;
                DAT_00763e44 = pCVar3;
                if (g_CGame_PTR_005b9354->profile_mode == 2) {
                  local_28 = wincore_winrun_cpp_getTime_FUN_00558a30();
                }
                (*((DAT_00763e44->vtable)._ub)->process)(DAT_00763e44,(float)damage_info);
                if (g_CGame_PTR_005b9354->profile_mode == 2) {
                  iVar10 = wincore_winrun_cpp_getTime_FUN_00558a30();
                  *(int *)(iVar8 + 0x1ffb078) = iVar10 - local_20;
                  *(CDemonActor **)(iVar8 + 0x1ffcfb8) = DAT_00763e44;
                }
                if (g_CGame_PTR_005b9354->profile_mode != 0) {
                  iStack_18 = iStack_18 + 1;
                  iVar8 = iVar8 + 4;
                }
                damage_info = (CPathMap *)0x509346;
                this_ptr_00 = (*((DAT_00763e44->vtable)._ub)->getPathMap)(DAT_00763e44);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_004f0360
                            (this_ptr_00,&(DAT_00763e44->location).position,0);
                  damage_info = this_ptr_00;
                }
                if (((fStack_4c == (DAT_00763e44->orient).vec.y) &&
                    ((float)local_50 == (DAT_00763e44->orient).vec.x)) &&
                   (fStack_48 == (DAT_00763e44->orient).vec.z)) {
                  DAT_00763e44 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(DAT_00763e44);
                  DAT_00763e44 = (CDemonActor *)0x0;
                }
              }
              else if ((local_24 < iVar10) && (iVar10 < local_1c)) {
                local_1c = iVar10;
              }
            }
            iVar5 = iVar5 + 1;
            pCVar7 = (CDemonSet *)pCVar7->cameras;
          } while (iVar5 < this_ptr->actor_count);
        }
        iVar5 = local_1c;
      } while (local_1c < 999999);
    }
    iVar5 = 0;
    pCVar7 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_01 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar7->actors[0],g_CCharacterActorType_00765a60.name_hash);
        local_38 = this_ptr_01;
        if ((this_ptr_01 != (CCharacter *)0x0) &&
           (fVar6 = (float)(*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
           fVar6 == 0.0)) {
          damage_info = (CPathMap *)&local_44;
          local_44 = fVar6;
          iVar8 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                            (g_CFireEffect_PTR_005b80f0,&(this_ptr_01->base).location.position,0.0,
                             &CStack_64,(float *)damage_info);
          if (iVar8 != 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff60);
            EStack_70 = DAMAGE_TYPE_SHATTER;
            if (aCStack_94 != &CStack_64) {
              aCStack_94[0].x = CStack_64.x;
              aCStack_94[0].y = CStack_64.y;
              aCStack_94[0].z = CStack_64.z;
            }
            damage_info = (CPathMap *)&stack0xffffff60;
            (*(((pCStack_34->base).vtable._uc)->_uc).processDamage)
                      (pCStack_34,(SDamageInfo *)damage_info);
          }
        }
        this_ptr_02 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar7->actors[0],g_CGlassActorType_01c78c40.name_hash);
        if (this_ptr_02 != (CGlass *)0x0) {
          pCStack_34 = (CCharacter *)&(this_ptr_02->base).location;
          iVar8 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                            (g_CFireEffect_PTR_005b80f0,(CVector3f *)pCStack_34,0.0,(CVector3f *)0x0
                             ,(float *)0x0);
          if ((iVar8 != 0) && (iVar8 = core_glass_cpp_CGlass_FUN_004aded0(this_ptr_02), iVar8 != 0))
          {
            core_glass_cpp_CGlass_shatter_FUN_004ada20(this_ptr_02,(CVector3f *)pCStack_34);
          }
        }
        this_ptr_03 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar7->actors[0],g_CTriggerActorType_02dd1084.name_hash);
        if (((this_ptr_03 != (CTrigger *)0x0) && (this_ptr_03->hero_triggers_me == 7)) &&
           (this_ptr_03->damage_actor_wildcard_name[0] == '\0')) {
          fStack_4c = 0.0;
          iVar8 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                            (g_CFireEffect_PTR_005b80f0,&(this_ptr_03->base).location.position,0.0,
                             (CVector3f *)0x0,&fStack_4c);
          if (iVar8 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_03,fStack_4c);
          }
        }
        this_ptr_04 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar7->actors[0],g_CFlameCanActorType_01c70654.name_hash);
        if ((this_ptr_04 != (CFlameCan *)0x0) &&
           (iVar8 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                              (g_CFireEffect_PTR_005b80f0,&(this_ptr_04->base).location.position,0.0
                               ,(CVector3f *)0x0,(float *)0x0), iVar8 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr_04);
        }
        iVar5 = iVar5 + 1;
        pCVar7 = (CDemonSet *)pCVar7->cameras;
      } while (iVar5 < this_ptr->actor_count);
    }
    if (g_CGame_PTR_005b9354->profile_mode != 0) {
      if (g_CGame_PTR_005b9354->profile_mode == 2) {
        local_3c = (float)(local_20 + -1);
        local_30 = 0;
        local_2c = 0;
        if (0 < (int)local_3c) {
          local_40 = (float)(local_20 << 2);
          do {
            if (local_2c + 1 < local_20) {
              iVar5 = (local_2c + 1) * 4;
              do {
                iVar8 = *(int *)(local_30 + 0x1ffb078);
                if (iVar8 < *(int *)(iVar5 + 0x1ffb078)) {
                  *(uint *)(local_30 + 0x1ffb078) = *(uint *)(iVar5 + 0x1ffb078);
                  *(int *)(iVar5 + 0x1ffb078) = iVar8;
                  uVar4 = *(uint *)(local_30 + 0x1ffcfb8);
                  *(uint *)(local_30 + 0x1ffcfb8) = *(uint *)(iVar5 + 0x1ffcfb8);
                  *(uint *)(iVar5 + 0x1ffcfb8) = uVar4;
                }
                iVar5 = iVar5 + 4;
              } while (iVar5 < (int)local_40);
            }
            local_30 = local_30 + 4;
            local_2c = local_2c + 1;
          } while (local_2c < (int)local_3c);
        }
        iVar5 = 0x14;
        if (local_20 < 0x14) {
          iVar5 = local_20;
        }
        if (0 < iVar5) {
          iVar10 = 0;
          iVar8 = 0;
          do {
            piVar1 = (int *)(iVar10 + 0x1ffb078);
            puVar2 = (uint *)(iVar10 + 0x1ffcfb8);
            iVar10 = iVar10 + 4;
            iVar9 = iVar8 + 1;
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (g_CConsole_PTR_005ad350,"%d. %s : %3.2f ms\n",iVar8,*puVar2,
                       ((double)*piVar1 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                       (double)(float)damage_info);
            iVar8 = iVar9;
          } while (iVar9 < iVar5);
        }
      }
      iStack_18 = wincore_winrun_cpp_getTime_FUN_00558a30();
      iStack_18 = iStack_18 - (int)local_44;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"Process time (%d actors) : %3.2f ms\n",local_20,
                 ((double)iStack_18 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                 (double)(float)damage_info);
    }
    iVar5 = 0;
    if (0 < this_ptr->actor_count) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < this_ptr->actor_count);
    }
  }
  return;
}
