// Name: core_set.cpp_CDemonSet_processActors_FUN_0054fc20
// Address: 0054fc20
// Address Range: [[0054fc20, 00550256]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_processActors_FUN_0054fc20(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_processActors_FUN_0054fc20(CDemonSet *this_ptr)

{
  int *piVar1;
  uint *puVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  int iVar5;
  CPathMap *this_ptr_00;
  int iVar6;
  float fVar7;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  CDemonSet *pCVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  byte bVar12;
  float afStackY_104c [993];
  CPathMap *delta_time;
  CVector3f aCStack_a0 [3];
  EDamageType EStack_7c;
  CVector3f CStack_70;
  float local_64;
  float afStack_60 [3];
  CPathMap *local_54;
  float fStack_50;
  int local_4c;
  int iStack_48;
  int local_44;
  CLocation *pCStack_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  CDemonSet *local_20;
  int local_1c;
  int iStack_18;
  
  bVar12 = 0;
  iVar5 = 0;
  if (0 < this_ptr->actor_count) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->actor_count);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_4c = wincore_winrun_cpp_getTime_FUN_005b2420();
    local_28 = 0;
  }
  _DAT_01fe55bc = 0;
  _DAT_01fe55d0 = 0;
  delta_time = (CPathMap *)g_CGamePtr->delta_time_float;
  if (0.0 < (float)delta_time) {
    local_54 = delta_time;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005593e0(this_ptr);
    iVar5 = 0;
    pCVar8 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        pCVar8->actors[0]->direction_hint = iVar5;
        iVar5 = iVar5 + 1;
        pCVar8 = (CDemonSet *)pCVar8->cameras;
      } while (iVar5 < this_ptr->actor_count);
    }
    if (0.0 < (float)delta_time) {
      local_2c = -999999;
      iVar5 = local_2c;
      do {
        local_2c = iVar5;
        local_24 = 999999;
        local_1c = 0;
        if (0 < this_ptr->actor_count) {
          local_20 = this_ptr;
          iVar5 = local_28 << 2;
          do {
            pCVar3 = local_20->actors[0];
            if (pCVar3->process_disabled == 0) {
              iVar6 = pCVar3->health;
              if (iVar6 == local_2c) {
                pfVar10 = (float *)((int)pCVar3 + (uint)bVar12 * -8 + 0x34);
                local_64 = (pCVar3->orient).vec.x;
                afStack_60[(uint)bVar12 * -2] = *pfVar10;
                afStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                     pfVar10[(uint)bVar12 * -2 + 1];
                DAT_007c2ff4 = pCVar3;
                if (g_CGamePtr->profile_mode == 2) {
                  local_30 = wincore_winrun_cpp_getTime_FUN_005b2420();
                }
                (*((DAT_007c2ff4->vtable)._ub)->process)(DAT_007c2ff4,(float)delta_time);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar6 = wincore_winrun_cpp_getTime_FUN_005b2420();
                  *(int *)(iVar5 + 0x2026370) = iVar6 - local_28;
                  *(CDemonActor **)(iVar5 + 0x20282b0) = DAT_007c2ff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  local_20 = (CDemonSet *)((int)&local_20->camera_count + 1);
                  iVar5 = iVar5 + 4;
                }
                delta_time = (CPathMap *)0x54fe48;
                this_ptr_00 = (*((DAT_007c2ff4->vtable)._ub)->getPathMap)(DAT_007c2ff4);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_005334f0
                            (this_ptr_00,&(DAT_007c2ff4->location).position,0);
                  delta_time = this_ptr_00;
                }
                if ((((float)local_54 == (DAT_007c2ff4->orient).vec.y) &&
                    (afStack_60[2] == (DAT_007c2ff4->orient).vec.x)) &&
                   (fStack_50 == (DAT_007c2ff4->orient).vec.z)) {
                  DAT_007c2ff4 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(DAT_007c2ff4);
                  DAT_007c2ff4 = (CDemonActor *)0x0;
                }
              }
              else if ((local_2c < iVar6) && (iVar6 < local_24)) {
                local_24 = iVar6;
              }
            }
            local_20 = (CDemonSet *)local_20->cameras;
            local_1c = local_1c + 1;
          } while (local_1c < this_ptr->actor_count);
        }
        iVar5 = local_24;
      } while (local_24 < 999999);
    }
    iVar5 = 0;
    pCVar8 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8->actors[0]);
        local_3c = iVar6;
        if (((iVar6 != 0) &&
            (fVar7 = (float)(**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(), fVar7 == 0.0)) &&
           (fStack_50 = fVar7,
           iVar6 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0
                             (0x01C57074,(CVector3f *)(iVar6 + 0x20),0.0,&CStack_70,&fStack_50),
           iVar6 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xffffff54);
          EStack_7c = DAMAGE_TYPE_FALL_APART;
          if (aCStack_a0 != &CStack_70) {
            aCStack_a0[0].x = CStack_70.x;
            aCStack_a0[0].y = CStack_70.y;
            aCStack_a0[0].z = CStack_70.z;
          }
          (**(code **)(*(int *)(local_3c + 0x154) + 0x108))(local_3c);
        }
        this_ptr_01 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8->actors[0]);
        if (this_ptr_01 != (CGlass *)0x0) {
          pCStack_40 = &(this_ptr_01->base).location;
          iVar6 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0
                            (0x01C57074,&pCStack_40->position,0.0,(CVector3f *)0x0,(float *)0x0);
          if ((iVar6 != 0) &&
             (iVar6 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_01),
             iVar6 != 0)) {
            core_glass_cpp_FUN_004e34b0(this_ptr_01);
          }
        }
        this_ptr_02 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8->actors[0]);
        if (((this_ptr_02 != (CTrigger *)0x0) &&
            (this_ptr_02->trigger_cause == TRIGGER_CAUSE_DAMAGE)) &&
           (this_ptr_02->damage_actor_wildcard_name[0] == '\0')) {
          afStack_60[2] = 0.0;
          iVar6 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0
                            (0x01C57074,&(this_ptr_02->base).location.position,0.0,
                             (CVector3f *)0x0,afStack_60 + 2);
          if (iVar6 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(this_ptr_02,afStack_60[2]);
          }
        }
        this_ptr_03 = (CFlameCan *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar8->actors[0]);
        if ((this_ptr_03 != (CFlameCan *)0x0) &&
           (iVar6 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0
                              (0x01C57074,&(this_ptr_03->base).location.position,0.0,
                               (CVector3f *)0x0,(float *)0x0), iVar6 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr_03);
        }
        iVar5 = iVar5 + 1;
        pCVar8 = (CDemonSet *)pCVar8->cameras;
      } while (iVar5 < this_ptr->actor_count);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_34 = 0;
        local_44 = local_28 + -1;
        local_38 = 0;
        if (0 < local_44) {
          iStack_48 = local_28 << 2;
          do {
            if (local_34 + 1 < local_28) {
              iVar5 = (local_34 + 1) * 4;
              do {
                iVar6 = *(int *)(local_38 + 0x2026370);
                if (iVar6 < *(int *)(iVar5 + 0x2026370)) {
                  *(int *)(local_38 + 0x2026370) = *(int *)(iVar5 + 0x2026370);
                  *(int *)(iVar5 + 0x2026370) = iVar6;
                  uVar4 = *(uint *)(local_38 + 0x20282b0);
                  *(uint *)(local_38 + 0x20282b0) = *(uint *)(iVar5 + 0x20282b0);
                  *(uint *)(iVar5 + 0x20282b0) = uVar4;
                }
                iVar5 = iVar5 + 4;
              } while (iVar5 < iStack_48);
            }
            local_38 = local_38 + 4;
            local_34 = local_34 + 1;
          } while (local_34 < local_44);
        }
        iVar5 = 0x14;
        if (local_28 < 0x14) {
          iVar5 = local_28;
        }
        if (0 < iVar5) {
          iVar11 = 0;
          iVar6 = 0;
          do {
            piVar1 = (int *)(iVar11 + 0x2026370);
            puVar2 = (uint *)(iVar11 + 0x20282b0);
            iVar11 = iVar11 + 4;
            iVar9 = iVar6 + 1;
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar6,*puVar2,
                       ((double)*piVar1 * _DAT_005f088e * _DAT_005f0896 * _DAT_005f089e) /
                       (double)(float)delta_time);
            iVar6 = iVar9;
          } while (iVar9 < iVar5);
        }
      }
      iVar5 = local_4c;
      iStack_18 = wincore_winrun_cpp_getTime_FUN_005b2420();
      iStack_18 = iStack_18 - iVar5;
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",local_28,
                 ((double)iStack_18 * _DAT_005f088e * _DAT_005f0896 * _DAT_005f089e) /
                 (double)(float)delta_time);
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
