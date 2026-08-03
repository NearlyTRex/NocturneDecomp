// Name: core_set.cpp_CDemonSet_processActors_FUN_00509140
// Address: 00509140
// Address Range: [[00509140, 00509756]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_processActors_FUN_00509140(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_processActors_FUN_00509140(CDemonSet *this_ptr)

{
  CDemonActor *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CPathMap *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar5;
  CGlass *this_ptr_02;
  CTrigger *this_ptr_03;
  CFlameCan *this_ptr_04;
  CDemonSet *pCVar6;
  int iVar7;
  CPathMap *delta_time;
  CVector3f aCStack_94 [3];
  EDamageType EStack_70;
  CVector3f CStack_64;
  float local_58;
  float local_54;
  CPathMap *local_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  int local_40;
  int local_3c;
  CCharacter *local_38;
  CCharacter *pCStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  iVar3 = 0;
  if (0 < this_ptr->actor_count) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->actor_count);
  }
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    local_44 = (float)wincore_winrun_cpp_getTime_FUN_00558a30();
    local_20 = 0;
  }
  _DAT_01fba2d8 = 0;
  _DAT_01fba2ec = 0;
  delta_time = (CPathMap *)g_CGame_PTR_005b9354->delta_time_float;
  if (0.0 < (float)delta_time) {
    local_50 = delta_time;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(this_ptr);
    iVar3 = 0;
    pCVar6 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        pCVar6->actors[0]->direction_hint = iVar3;
        iVar3 = iVar3 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar3 < this_ptr->actor_count);
    }
    if (0.0 < (float)delta_time) {
      local_24 = -999999;
      iVar3 = local_24;
      do {
        local_24 = iVar3;
        local_1c = 999999;
        iVar3 = 0;
        if (0 < this_ptr->actor_count) {
          iVar7 = local_20 << 2;
          pCVar6 = this_ptr;
          do {
            pCVar1 = pCVar6->actors[0];
            if (pCVar1->process_disabled == 0) {
              iVar4 = pCVar1->health;
              if (iVar4 == local_24) {
                CStack_64.z = (pCVar1->orient).vec.x;
                local_58 = (pCVar1->orient).vec.y;
                local_54 = (pCVar1->orient).vec.z;
                DAT_00763e44 = pCVar1;
                if (g_CGame_PTR_005b9354->profile_mode == 2) {
                  local_28 = wincore_winrun_cpp_getTime_FUN_00558a30();
                }
                (*((DAT_00763e44->vtable)._ub)->process)(DAT_00763e44,(float)delta_time);
                if (g_CGame_PTR_005b9354->profile_mode == 2) {
                  iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
                  *(int *)(iVar7 + 0x1ffb078) = iVar4 - local_20;
                  *(CDemonActor **)(iVar7 + 0x1ffcfb8) = DAT_00763e44;
                }
                if (g_CGame_PTR_005b9354->profile_mode != 0) {
                  iStack_18 = iStack_18 + 1;
                  iVar7 = iVar7 + 4;
                }
                delta_time = (CPathMap *)0x509346;
                this_ptr_00 = (*((DAT_00763e44->vtable)._ub)->getPathMap)(DAT_00763e44);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_004f0360
                            (this_ptr_00,&(DAT_00763e44->location).position,0);
                  delta_time = this_ptr_00;
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
              else if ((local_24 < iVar4) && (iVar4 < local_1c)) {
                local_1c = iVar4;
              }
            }
            iVar3 = iVar3 + 1;
            pCVar6 = (CDemonSet *)pCVar6->cameras;
          } while (iVar3 < this_ptr->actor_count);
        }
        iVar3 = local_1c;
      } while (local_1c < 999999);
    }
    iVar3 = 0;
    pCVar6 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_01 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar6->actors[0],g_CCharacterActorType_00765a60.name_hash);
        local_38 = this_ptr_01;
        if (((this_ptr_01 != (CCharacter *)0x0) &&
            (fVar5 = (float)(*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
            fVar5 == 0.0)) &&
           (local_44 = fVar5,
           iVar7 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                             (g_CFireEffect_PTR_005b80f0,&(this_ptr_01->base).location.position,0.0,
                              &CStack_64,&local_44), iVar7 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff60);
          EStack_70 = DAMAGE_TYPE_SHATTER;
          if (aCStack_94 != &CStack_64) {
            aCStack_94[0].x = CStack_64.x;
            aCStack_94[0].y = CStack_64.y;
            aCStack_94[0].z = CStack_64.z;
          }
          (*(((pCStack_34->base).vtable._uc)->_uc).processDamage)
                    (pCStack_34,(SDamageInfo *)&stack0xffffff60);
        }
        this_ptr_02 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar6->actors[0],g_CGlassActorType_01c78c40.name_hash);
        if (this_ptr_02 != (CGlass *)0x0) {
          pCStack_34 = (CCharacter *)&(this_ptr_02->base).location;
          iVar7 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                            (g_CFireEffect_PTR_005b80f0,(CVector3f *)pCStack_34,0.0,(CVector3f *)0x0
                             ,(float *)0x0);
          if ((iVar7 != 0) && (iVar7 = core_glass_cpp_FUN_004aded0(this_ptr_02), iVar7 != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004ada20(this_ptr_02,(CVector3f *)pCStack_34);
          }
        }
        this_ptr_03 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar6->actors[0],g_CTriggerActorType_02dd1084.name_hash);
        if (((this_ptr_03 != (CTrigger *)0x0) && (this_ptr_03->hero_triggers_me == 7)) &&
           (this_ptr_03->damage_actor_wildcard_name[0] == '\0')) {
          fStack_4c = 0.0;
          iVar7 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                            (g_CFireEffect_PTR_005b80f0,&(this_ptr_03->base).location.position,0.0,
                             (CVector3f *)0x0,&fStack_4c);
          if (iVar7 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_03,fStack_4c);
          }
        }
        this_ptr_04 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar6->actors[0],g_CFlameCanActorType_01c70654.name_hash);
        if ((this_ptr_04 != (CFlameCan *)0x0) &&
           (iVar7 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                              (g_CFireEffect_PTR_005b80f0,&(this_ptr_04->base).location.position,0.0
                               ,(CVector3f *)0x0,(float *)0x0), iVar7 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr_04);
        }
        iVar3 = iVar3 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar3 < this_ptr->actor_count);
    }
    if (g_CGame_PTR_005b9354->profile_mode != 0) {
      if (g_CGame_PTR_005b9354->profile_mode == 2) {
        local_3c = local_20 + -1;
        local_30 = 0;
        local_2c = 0;
        if (0 < local_3c) {
          local_40 = local_20 << 2;
          do {
            if (local_2c + 1 < local_20) {
              iVar3 = (local_2c + 1) * 4;
              do {
                iVar7 = *(int *)(local_30 + 0x1ffb078);
                if (iVar7 < *(int *)(iVar3 + 0x1ffb078)) {
                  *(uint *)(local_30 + 0x1ffb078) = *(uint *)(iVar3 + 0x1ffb078);
                  *(int *)(iVar3 + 0x1ffb078) = iVar7;
                  uVar2 = *(uint *)(local_30 + 0x1ffcfb8);
                  *(uint *)(local_30 + 0x1ffcfb8) = *(uint *)(iVar3 + 0x1ffcfb8);
                  *(uint *)(iVar3 + 0x1ffcfb8) = uVar2;
                }
                iVar3 = iVar3 + 4;
              } while (iVar3 < local_40);
            }
            local_30 = local_30 + 4;
            local_2c = local_2c + 1;
          } while (local_2c < local_3c);
        }
        iVar3 = 0x14;
        if (local_20 < 0x14) {
          iVar3 = local_20;
        }
        iVar7 = 0;
        if (0 < iVar3) {
          do {
            iVar7 = iVar7 + 1;
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (g_CConsole_PTR_005ad350,"%d. %s : %3.2f ms\n");
          } while (iVar7 < iVar3);
        }
      }
      iStack_18 = wincore_winrun_cpp_getTime_FUN_00558a30();
      iStack_18 = iStack_18 - (int)local_44;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"Process time (%d actors) : %3.2f ms\n");
    }
    iVar3 = 0;
    if (0 < this_ptr->actor_count) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < this_ptr->actor_count);
    }
  }
  return;
}
