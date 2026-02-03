// Name: core_set.cpp_CDemonSet_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  CPathMap *this_ptr_00;
  float fVar4;
  CGlass *this_ptr_01;
  int extraout_EAX;
  CDemonActor *pCVar5;
  CFlameCan *this_ptr_02;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CDemonSet *pCVar11;
  CPathMap *damage_info;
  float fStack_94;
  float fStack_90;
  CPathMap *pCStack_8c;
  int iStack_70;
  CDemonActor *local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CPathMap *local_50;
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
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)pCVar6->actor_list_data,"..\\core\\set.cpp",0x593);
      iVar9 = iVar9 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar9 < (int)this_ptr->actor_list_ptr);
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
    local_50 = damage_info;
    core_setcolid_cpp_CDemonSet_FUN_005743e0(this_ptr);
    iVar9 = 0;
    pCVar6 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        *(int *)(*(int *)pCVar6->actor_list_data + 0x6c) = iVar9;
        iVar9 = iVar9 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar9 < (int)this_ptr->actor_list_ptr);
    }
    if (0.0 < (float)damage_info) {
      local_24 = -999999;
      iVar9 = local_24;
      do {
        local_24 = iVar9;
        local_1c = 999999;
        iVar9 = 0;
        if (0 < (int)this_ptr->actor_list_ptr) {
          iVar7 = local_20 << 2;
          pCVar6 = this_ptr;
          do {
            pCVar5 = *(CDemonActor **)pCVar6->actor_list_data;
            if (pCVar5->unk7 == 0.0) {
              iVar8 = pCVar5->health;
              if (iVar8 == local_24) {
                local_68 = (CDemonActor *)(pCVar5->orient).pitch;
                local_64 = (pCVar5->orient).bank;
                local_60 = (pCVar5->orient).heading;
                DAT_00821ff4 = pCVar5;
                if (g_CGamePtr->profile_mode == 2) {
                  local_44 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*((DAT_00821ff4->vtable)._ub)->process)(DAT_00821ff4,(float)damage_info);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar8 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  *(int *)((int)&DAT_032bd794 + iVar7) = iVar8 - local_3c;
                  *(CDemonActor **)((int)&DAT_032bf6d4 + iVar7) = DAT_00821ff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  iStack_18 = iStack_18 + 1;
                  iVar7 = iVar7 + 4;
                }
                damage_info = (CPathMap *)0x56ba31;
                this_ptr_00 = (*((DAT_00821ff4->vtable)._ub)->getPathMap)(DAT_00821ff4);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
                            (this_ptr_00,&(DAT_00821ff4->location).position,0);
                  damage_info = this_ptr_00;
                }
                if (((fStack_58 == (DAT_00821ff4->orient).bank) &&
                    (fStack_5c == (DAT_00821ff4->orient).pitch)) &&
                   (fStack_54 == (DAT_00821ff4->orient).heading)) {
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(DAT_00821ff4);
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
              }
              else if ((local_24 < iVar8) && (iVar8 < local_1c)) {
                local_1c = iVar8;
              }
            }
            iVar9 = iVar9 + 1;
            pCVar6 = (CDemonSet *)pCVar6->cameras;
          } while (iVar9 < (int)this_ptr->actor_list_ptr);
        }
        iVar9 = local_1c;
      } while (local_1c < 999999);
    }
    iVar9 = 0;
    pCVar6 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        local_34 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)pCVar6->actor_list_data,
                              g_CCharacterClassInfo.name_hash);
        if ((local_34 != (CCharacter *)0x0) &&
           (fVar4 = (float)(*(((local_34->base).vtable._uc)->_uc).isDamageable)(local_34),
           fVar4 == 0.0)) {
          damage_info = (CPathMap *)&fStack_48;
          fStack_48 = fVar4;
          iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar7 != 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff60);
            iStack_70 = 4;
            if (&fStack_94 != &fStack_58) {
              fStack_94 = fStack_58;
              fStack_90 = fStack_54;
              pCStack_8c = local_50;
            }
            damage_info = (CPathMap *)&stack0xffffff60;
            (*(((pCStack_30->base).vtable._uc)->_uc).processDamage)
                      (pCStack_30,(SDamageInfo *)damage_info);
          }
        }
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar6->actor_list_data,
                                 g_CGlassClassInfo.name_hash);
        if (this_ptr_01 != (CGlass *)0x0) {
          pCStack_30 = (CCharacter *)&(this_ptr_01->base).location;
          iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if ((iVar7 != 0) &&
             (core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_01),
             extraout_EAX != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_01,(CVector3f *)pCStack_30);
          }
        }
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar6->actor_list_data,g_CTriggerClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) && (*(int *)(pCVar5[1].actor_name + 0x1c) == 7)) &&
           (*(char *)&pCVar5[2].orient_matrix.m[2].x == '\0')) {
          fStack_48 = 0.0;
          iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar7 != 0) {
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
        }
        this_ptr_02 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar6->actor_list_data,
                                 g_CFlameCanClassInfo.name_hash);
        if ((this_ptr_02 != (CFlameCan *)0x0) &&
           (iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar7 != 0)) {
          core_flamecan_cpp_CFlameCan_FUN_004cb340(this_ptr_02);
        }
        iVar9 = iVar9 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar9 < (int)this_ptr->actor_list_ptr);
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
                iVar7 = *(int *)((int)&DAT_032bd794 + local_2c);
                if (iVar7 < *(int *)((int)&DAT_032bd794 + iVar9)) {
                  *(uint *)((int)&DAT_032bd794 + local_2c) =
                       *(uint *)((int)&DAT_032bd794 + iVar9);
                  *(int *)((int)&DAT_032bd794 + iVar9) = iVar7;
                  uVar3 = *(uint *)((int)&DAT_032bf6d4 + local_2c);
                  *(uint *)((int)&DAT_032bf6d4 + local_2c) =
                       *(uint *)((int)&DAT_032bf6d4 + iVar9);
                  *(uint *)((int)&DAT_032bf6d4 + iVar9) = uVar3;
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
            piVar1 = (int *)((int)&DAT_032bd794 + iVar8);
            puVar2 = (uint *)((int)&DAT_032bf6d4 + iVar8);
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
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (*(CDemonActor **)pCVar11->actor_list_data,"..\\core\\set.cpp",0x654);
        iVar9 = iVar9 + 1;
        pCVar11 = (CDemonSet *)pCVar11->cameras;
      } while (iVar9 < (int)this_ptr->actor_list_ptr);
    }
  }
  return (int)pCVar6;
}
