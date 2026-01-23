// Name: core_set.cpp_CDemonSet_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056b810(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr)

{
  int *piVar1;
  uint *puVar2;
  CPathMap *this_ptr_00;
  float fVar3;
  CGlass *this_ptr_01;
  int extraout_EAX;
  CDemonActor *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CDemonSet *pCVar10;
  CPathMap *collision_info;
  CDemonActor *in_stack_ffffff60;
  SDamageInfo SStack_9c;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CPathMap *local_50;
  float fStack_4c;
  int iStack_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  CDemonActor *local_34;
  CVector3f *pCStack_30;
  CPathMap *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  iVar8 = 0;
  pCVar5 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)pCVar5->actor_list_data,"..\\core\\set.cpp",0x593);
      iVar8 = iVar8 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar8 < (int)this_ptr->actor_list_ptr);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_40 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_20 = 0;
  }
  g_DynamicLightCount = 0;
  collision_info = (CPathMap *)g_CGamePtr->delta_time_float;
  g_CoronaGlobeCount = 0;
  pCVar5 = (CDemonSet *)
           CONCAT22((short)((uint)collision_info >> 0x10),
                    (ushort)(0.0 < (float)collision_info) << 8 |
                    (ushort)NAN((float)collision_info) << 10 |
                    (ushort)((float)collision_info == 0.0) << 0xe);
  if (0.0 < (float)collision_info) {
    local_50 = collision_info;
    core_setcolid_cpp_CDemonSet_FUN_005743e0(this_ptr);
    iVar8 = 0;
    pCVar5 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        *(int *)(*(int *)pCVar5->actor_list_data + 0x6c) = iVar8;
        iVar8 = iVar8 + 1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar8 < (int)this_ptr->actor_list_ptr);
    }
    if (0.0 < (float)collision_info) {
      local_24 = -999999;
      iVar8 = local_24;
      do {
        local_24 = iVar8;
        local_1c = 999999;
        iVar8 = 0;
        if (0 < (int)this_ptr->actor_list_ptr) {
          iVar6 = local_20 << 2;
          pCVar5 = this_ptr;
          do {
            pCVar4 = *(CDemonActor **)pCVar5->actor_list_data;
            if (pCVar4->field17_0x104 == 0) {
              iVar7 = pCVar4->health;
              if (iVar7 == local_24) {
                SStack_9c.attacker = (CDemonActor *)(pCVar4->orient).pitch;
                SStack_9c.wielder = (CDemonActor *)(pCVar4->orient).bank;
                local_60 = (pCVar4->orient).heading;
                DAT_00821ff4 = pCVar4;
                if (g_CGamePtr->profile_mode == 2) {
                  local_44 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*DAT_00821ff4->vtable->process)(DAT_00821ff4,(float)collision_info);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar7 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  *(int *)((int)&DAT_032bd794 + iVar6) = iVar7 - local_3c;
                  *(CDemonActor **)((int)&DAT_032bf6d4 + iVar6) = DAT_00821ff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  iStack_18 = iStack_18 + 1;
                  iVar6 = iVar6 + 4;
                }
                collision_info = (CPathMap *)0x56ba31;
                this_ptr_00 = (*DAT_00821ff4->vtable->getPathMap)(DAT_00821ff4);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  in_stack_ffffff60 = (CDemonActor *)0x0;
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
                            (this_ptr_00,&(DAT_00821ff4->location).position,0);
                  collision_info = this_ptr_00;
                }
                if (((fStack_58 == (DAT_00821ff4->orient).bank) &&
                    (fStack_5c == (DAT_00821ff4->orient).pitch)) &&
                   (fStack_54 == (DAT_00821ff4->orient).heading)) {
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
                else {
                  in_stack_ffffff60 = DAT_00821ff4;
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(DAT_00821ff4);
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
              }
              else if ((local_24 < iVar7) && (iVar7 < local_1c)) {
                local_1c = iVar7;
              }
            }
            iVar8 = iVar8 + 1;
            pCVar5 = (CDemonSet *)pCVar5->cameras;
          } while (iVar8 < (int)this_ptr->actor_list_ptr);
        }
        iVar8 = local_1c;
      } while (local_1c < 999999);
    }
    iVar8 = 0;
    pCVar5 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        local_34 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)pCVar5->actor_list_data,
                              g_CCharacterClassInfo.name_hash);
        if ((local_34 != (CDemonActor *)0x0) &&
           (fVar3 = (float)(*local_34->vtable[1].hasCollision)
                                     (local_34,(SCollisionInfo *)collision_info), fVar3 == 0.0)) {
          collision_info = (CPathMap *)&fStack_54;
          local_44 = fVar3;
          iVar6 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar6 != 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_9c);
            SStack_9c.damage_amount = local_44;
            SStack_9c.damage_type = 4;
            if (&SStack_9c.impact_point != (CVector3f *)&fStack_54) {
              SStack_9c.impact_point.x = fStack_54;
              SStack_9c.impact_point.y = (float)local_50;
              SStack_9c.impact_point.z = fStack_4c;
            }
            collision_info = local_2c;
            (**(code **)(local_2c->height_cache[0][0x49] + 0x11c))
                      ((CDemonActor *)local_2c,(char *)&SStack_9c,(float)in_stack_ffffff60);
          }
        }
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar5->actor_list_data,
                                 g_CGlassClassInfo.name_hash);
        if (this_ptr_01 != (CGlass *)0x0) {
          pCStack_30 = &(this_ptr_01->base).location.position;
          iVar6 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if ((iVar6 != 0) &&
             (core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_01),
             extraout_EAX != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_01,pCStack_30);
          }
        }
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar5->actor_list_data,g_CTriggerClassInfo.name_hash);
        if (((pCVar4 != (CDemonActor *)0x0) && (*(int *)(pCVar4[1].actor_name + 0x1c) == 7)) &&
           (*(char *)&pCVar4[2].orient_matrix.m[2].x == '\0')) {
          iStack_48 = 0;
          iVar6 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar6 != 0) {
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
        }
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar5->actor_list_data,g_CFlameCanClassInfo.name_hash)
        ;
        if ((pCVar4 != (CDemonActor *)0x0) &&
           (iVar6 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar6 != 0)) {
          core_flamecan_cpp_FUN_004cb340();
        }
        iVar8 = iVar8 + 1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar8 < (int)this_ptr->actor_list_ptr);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_38 = local_20 + -1;
        local_2c = (CPathMap *)0x0;
        local_28 = 0;
        if (0 < local_38) {
          local_3c = local_20 << 2;
          do {
            if (local_28 + 1 < local_20) {
              iVar8 = (local_28 + 1) * 4;
              do {
                iVar6 = local_2c[0x298].height_cache[0x3b][0x25];
                if (iVar6 < *(int *)((int)&DAT_032bd794 + iVar8)) {
                  local_2c[0x298].height_cache[0x3b][0x25] = *(int *)((int)&DAT_032bd794 + iVar8);
                  *(int *)((int)&DAT_032bd794 + iVar8) = iVar6;
                  iVar6 = local_2c[0x298].height_cache[0x4f][0x25];
                  local_2c[0x298].height_cache[0x4f][0x25] = *(int *)((int)&DAT_032bf6d4 + iVar8);
                  *(int *)((int)&DAT_032bf6d4 + iVar8) = iVar6;
                }
                iVar8 = iVar8 + 4;
              } while (iVar8 < local_3c);
            }
            local_2c = (CPathMap *)&(local_2c->current_position).y;
            local_28 = local_28 + 1;
          } while (local_28 < local_38);
        }
        iVar8 = 0x14;
        if (local_20 < 0x14) {
          iVar8 = local_20;
        }
        if (0 < iVar8) {
          iVar7 = 0;
          iVar6 = 0;
          do {
            piVar1 = (int *)((int)&DAT_032bd794 + iVar7);
            puVar2 = (uint *)((int)&DAT_032bf6d4 + iVar7);
            iVar7 = iVar7 + 4;
            iVar9 = iVar6 + 1;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar6,*puVar2,
                       ((double)*piVar1 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                       (double)(float)collision_info);
            iVar6 = iVar9;
          } while (iVar9 < iVar8);
        }
      }
      iStack_18 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      iStack_18 = iStack_18 - local_40;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",local_20,
                 ((double)iStack_18 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                 (double)(float)collision_info);
    }
    iVar8 = 0;
    pCVar5 = this_ptr;
    pCVar10 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (*(CDemonActor **)pCVar10->actor_list_data,"..\\core\\set.cpp",0x654);
        iVar8 = iVar8 + 1;
        pCVar10 = (CDemonSet *)pCVar10->cameras;
      } while (iVar8 < (int)this_ptr->actor_list_ptr);
    }
  }
  return (int)pCVar5;
}
