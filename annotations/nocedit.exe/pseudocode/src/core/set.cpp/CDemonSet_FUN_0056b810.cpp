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
  uint uVar3;
  CPathMap *this_ptr_00;
  float fVar4;
  CGlass *this_ptr_01;
  int extraout_EAX;
  CDemonActor *pCVar5;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CDemonSet *pCVar10;
  CDemonActor *collision_info;
  float in_stack_ffffff60;
  SDamageInfo SStack_9c;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CDemonActor *local_50;
  float fStack_4c;
  char acStack_48 [4];
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  CDemonActor *local_34;
  CVector3f *pCStack_30;
  CDemonActor *local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  
  iVar8 = 0;
  pCVar6 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)pCVar6->actor_list_data,"..\\core\\set.cpp",0x593);
      iVar8 = iVar8 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar8 < (int)this_ptr->actor_list_ptr);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_40 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_20 = 0.0;
  }
  g_DynamicLightCount = 0;
  collision_info = (CDemonActor *)g_CGamePtr->delta_time_float;
  g_CoronaGlobeCount = 0;
  pCVar6 = (CDemonSet *)
           CONCAT22((short)((uint)collision_info >> 0x10),
                    (ushort)(0.0 < (float)collision_info) << 8 |
                    (ushort)NAN((float)collision_info) << 10 |
                    (ushort)((float)collision_info == 0.0) << 0xe);
  if (0.0 < (float)collision_info) {
    local_50 = collision_info;
    core_setcolid_cpp_CDemonSet_FUN_005743e0(this_ptr);
    iVar8 = 0;
    pCVar6 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        *(int *)(*(int *)pCVar6->actor_list_data + 0x6c) = iVar8;
        iVar8 = iVar8 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar8 < (int)this_ptr->actor_list_ptr);
    }
    if (0.0 < (float)collision_info) {
      local_24 = -NAN;
      fVar4 = local_24;
      do {
        local_24 = fVar4;
        local_1c = 1.401297e-39;
        iVar8 = 0;
        if (0 < (int)this_ptr->actor_list_ptr) {
          iVar7 = (int)local_20 << 2;
          pCVar6 = this_ptr;
          do {
            pCVar5 = *(CDemonActor **)pCVar6->actor_list_data;
            if (pCVar5->field17_0x104 == 0) {
              fVar4 = (float)pCVar5->health;
              if (fVar4 == local_24) {
                SStack_9c.attacker = (CDemonActor *)(pCVar5->orient).pitch;
                SStack_9c.wielder = (CDemonActor *)(pCVar5->orient).bank;
                local_60 = (pCVar5->orient).heading;
                DAT_00821ff4 = pCVar5;
                if (g_CGamePtr->profile_mode == 2) {
                  local_44 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*DAT_00821ff4->vtable->process)(DAT_00821ff4);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar9 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  *(int *)((int)&DAT_032bd794 + iVar7) = iVar9 - local_40;
                  *(CDemonActor **)((int)&DAT_032bf6d4 + iVar7) = DAT_00821ff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  local_1c = (float)((int)local_1c + 1);
                  iVar7 = iVar7 + 4;
                }
                collision_info = DAT_00821ff4;
                this_ptr_00 = (*DAT_00821ff4->vtable->getPathMap)(DAT_00821ff4);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  collision_info = (CDemonActor *)&DAT_00821ff4->location;
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
                            (this_ptr_00,(CVector3f *)collision_info,0);
                }
                if (((fStack_5c == (DAT_00821ff4->orient).bank) &&
                    (local_60 == (DAT_00821ff4->orient).pitch)) &&
                   (fStack_58 == (DAT_00821ff4->orient).heading)) {
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
                else {
                  collision_info = (CDemonActor *)0x56ba6b;
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(DAT_00821ff4);
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
              }
              else if (((int)local_24 < (int)fVar4) && ((int)fVar4 < (int)local_1c)) {
                local_1c = fVar4;
              }
            }
            iVar8 = iVar8 + 1;
            pCVar6 = (CDemonSet *)pCVar6->cameras;
          } while (iVar8 < (int)this_ptr->actor_list_ptr);
        }
        fVar4 = local_1c;
      } while ((int)local_1c < 999999);
    }
    iVar8 = 0;
    pCVar6 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        local_34 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)pCVar6->actor_list_data,
                              g_CCharacterClassInfo.name_hash);
        if ((local_34 != (CDemonActor *)0x0) &&
           (fVar4 = (float)(*local_34->vtable[1].hasCollision)
                                     (local_34,(SCollisionInfo *)collision_info), fVar4 == 0.0)) {
          collision_info = (CDemonActor *)&fStack_54;
          local_44 = fVar4;
          iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar7 != 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_9c);
            SStack_9c.damage_amount = local_44;
            SStack_9c.damage_type = 4;
            if (&SStack_9c.impact_point != (CVector3f *)&fStack_54) {
              SStack_9c.impact_point.x = fStack_54;
              SStack_9c.impact_point.y = (float)local_50;
              SStack_9c.impact_point.z = fStack_4c;
            }
            collision_info = local_2c;
            (*local_2c->vtable[1].playAmbientSoundWithVolume)
                      (local_2c,(char *)&SStack_9c,in_stack_ffffff60);
          }
        }
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar6->actor_list_data,
                                 g_CGlassClassInfo.name_hash);
        if (this_ptr_01 != (CGlass *)0x0) {
          pCStack_30 = &(this_ptr_01->base).location.position;
          iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if ((iVar7 != 0) &&
             (core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_01),
             extraout_EAX != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_01,pCStack_30);
          }
        }
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar6->actor_list_data,g_CTriggerClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) && (*(int *)(pCVar5[1].actor_name + 0x1c) == 7)) &&
           (*(char *)&pCVar5[2].orient_matrix.m[2].x == '\0')) {
          acStack_48[0] = '\0';
          acStack_48[1] = '\0';
          acStack_48[2] = '\0';
          acStack_48[3] = '\0';
          iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar7 != 0) {
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
        }
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar6->actor_list_data,g_CFlameCanClassInfo.name_hash)
        ;
        if ((pCVar5 != (CDemonActor *)0x0) &&
           (iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar7 != 0)) {
          core_flamecan_cpp_FUN_004cb340();
        }
        iVar8 = iVar8 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar8 < (int)this_ptr->actor_list_ptr);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_38 = (int)local_20 + -1;
        local_2c = (CDemonActor *)0x0;
        local_28 = 0;
        if (0 < local_38) {
          local_3c = (int)local_20 << 2;
          do {
            if (local_28 + 1 < (int)local_20) {
              iVar8 = (local_28 + 1) * 4;
              do {
                iVar7 = *(int *)(local_2c[0x25c29].create_event + 4);
                if (iVar7 < *(int *)((int)&DAT_032bd794 + iVar8)) {
                  *(uint *)(local_2c[0x25c29].create_event + 4) =
                       *(uint *)((int)&DAT_032bd794 + iVar8);
                  *(int *)((int)&DAT_032bd794 + iVar8) = iVar7;
                  uVar3 = *(uint *)(local_2c[0x25c40].create_event + 0x5c);
                  *(uint *)(local_2c[0x25c40].create_event + 0x5c) =
                       *(uint *)((int)&DAT_032bf6d4 + iVar8);
                  *(uint *)((int)&DAT_032bf6d4 + iVar8) = uVar3;
                }
                iVar8 = iVar8 + 4;
              } while (iVar8 < local_3c);
            }
            local_2c = (CDemonActor *)(local_2c->actor_name + 4);
            local_28 = local_28 + 1;
          } while (local_28 < local_38);
        }
        fVar4 = 2.8026e-44;
        if ((int)local_20 < 0x14) {
          fVar4 = local_20;
        }
        if (0 < (int)fVar4) {
          iVar7 = 0;
          iVar8 = 0;
          do {
            piVar1 = (int *)((int)&DAT_032bd794 + iVar7);
            puVar2 = (uint *)((int)&DAT_032bf6d4 + iVar7);
            iVar7 = iVar7 + 4;
            iVar9 = iVar8 + 1;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar8,*puVar2,
                       ((double)*piVar1 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                       (double)(float)collision_info);
            iVar8 = iVar9;
          } while (iVar9 < (int)fVar4);
        }
      }
      iVar8 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      fStack_18 = (float)(iVar8 - local_40);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",local_20,
                 ((double)(int)fStack_18 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                 (double)(float)collision_info);
    }
    iVar8 = 0;
    pCVar6 = this_ptr;
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
  return (int)pCVar6;
}
