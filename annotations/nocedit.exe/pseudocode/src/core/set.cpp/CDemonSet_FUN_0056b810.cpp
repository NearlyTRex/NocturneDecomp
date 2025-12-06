// Name: core_set.cpp_CDemonSet_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056b810(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr)

{
  uint uVar1;
  int iVar2;
  CPathMap *this_ptr_00;
  CGlass *this_ptr_01;
  int extraout_EAX;
  CDemonActor *pCVar3;
  CDemonSet *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  CDemonSet *pCVar7;
  SCollisionInfo *in_stack_fffffefc;
  float in_stack_ffffff18;
  char acStack_e4 [4];
  int iStack_e0;
  CLocation *pCStack_d8;
  float fStack_a4;
  CLocation *apCStack_9c [2];
  int iStack_94;
  CDemonActor *pCStack_90;
  int iStack_8c;
  CDemonActor *pCStack_74;
  float local_64;
  float local_60;
  float fStack_5c;
  uint uStack_58;
  CLocation *local_50;
  CVector3f *pCStack_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  iVar6 = 0;
  pCVar4 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)pCVar4->actor_list_data,"..\\core\\set.cpp",0x593);
      iVar6 = iVar6 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar6 < (int)this_ptr->actor_list_ptr);
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_3c = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_1c = 0;
  }
  g_DynamicLightCount = 0;
  local_50 = (CLocation *)g_CGamePtr->delta_time_float;
  g_CoronaGlobeCount = 0;
  pCVar4 = (CDemonSet *)
           CONCAT22 /* combine 2-byte values */((short)((uint)local_50 >> 0x10),
                    (ushort)(0.0 < (float)local_50) << 8 | (ushort)NAN((float)local_50) << 10 |
                    (ushort)((float)local_50 == 0.0) << 0xe);
  if (0.0 < (float)local_50) {
    core_setcolid_cpp_CDemonSet_FUN_005743e0(this_ptr);
    iVar6 = 0;
    pCVar4 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        *(int *)(*(int *)pCVar4->actor_list_data + 0x6c) = iVar6;
        iVar6 = iVar6 + 1;
        pCVar4 = (CDemonSet *)pCVar4->cameras;
      } while (iVar6 < (int)this_ptr->actor_list_ptr);
    }
    if (0.0 < fStack_a4) {
      local_20 = -999999;
      iVar6 = local_20;
      do {
        local_20 = iVar6;
        iStack_18 = 999999;
        iVar6 = 0;
        if (0 < (int)this_ptr->actor_list_ptr) {
          iVar5 = local_1c << 2;
          pCVar4 = this_ptr;
          do {
            pCVar3 = *(CDemonActor **)pCVar4->actor_list_data;
            if (pCVar3->field17_0x104 == 0) {
              iVar2 = pCVar3->health;
              if (iVar2 == local_20) {
                local_64 = (pCVar3->orient).pitch;
                local_60 = (pCVar3->orient).bank;
                fStack_5c = (pCVar3->orient).heading;
                DAT_00821ff4 = pCVar3;
                if (g_CGamePtr->profile_mode == 2) {
                  local_60 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*DAT_00821ff4->vtable->process)(DAT_00821ff4);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  *(int *)((int)&DAT_032bd794 + iVar5) = iVar2 - (int)local_50;
                  *(CDemonActor **)((int)&DAT_032bf6d4 + iVar5) = DAT_00821ff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  local_2c = local_2c + 1;
                  iVar5 = iVar5 + 4;
                }
                this_ptr_00 = (*DAT_00821ff4->vtable->getPathMap)(DAT_00821ff4);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
                            (this_ptr_00,&(DAT_00821ff4->location).position,0);
                }
                if (((local_60 == (DAT_00821ff4->orient).bank) &&
                    (local_64 == (DAT_00821ff4->orient).pitch)) &&
                   (fStack_5c == (DAT_00821ff4->orient).heading)) {
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(DAT_00821ff4);
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
              }
              else if ((local_20 < iVar2) && (iVar2 < iStack_18)) {
                iStack_18 = iVar2;
              }
            }
            iVar6 = iVar6 + 1;
            pCVar4 = (CDemonSet *)pCVar4->cameras;
          } while (iVar6 < (int)this_ptr->actor_list_ptr);
        }
        iVar6 = iStack_18;
      } while (iStack_18 < 999999);
    }
    iVar6 = 0;
    pCVar4 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        pCStack_90 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (*(CDemonActor **)pCVar4->actor_list_data,
                                g_CCharacterClassInfo.name_hash);
        if (((pCStack_90 != (CDemonActor *)0x0) &&
            (iVar5 = (*pCStack_90->vtable[1].hasCollision)(pCStack_90,in_stack_fffffefc), iVar5 == 0
            )) && (in_stack_fffffefc = (SCollisionInfo *)g_CFireEffectPtr, iStack_94 = iVar5,
                  iVar5 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar5 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff18);
          iStack_e0 = iStack_8c;
          if (&pCStack_d8 != apCStack_9c) {
            pCStack_d8 = apCStack_9c[0];
          }
          (*pCStack_74->vtable[1].playAmbientSoundWithVolume)
                    (pCStack_74,acStack_e4,in_stack_ffffff18);
        }
        pCStack_d8 = (CLocation *)0x56bba8;
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar4->actor_list_data,
                                 g_CGlassClassInfo.name_hash);
        if (this_ptr_01 != (CGlass *)0x0) {
          pCStack_d8 = &(this_ptr_01->base).location;
          iStack_e0 = 0x56bbcd;
          local_50 = pCStack_d8;
          iVar5 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if ((iVar5 != 0) &&
             (core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_01),
             extraout_EAX != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_01,pCStack_48);
          }
        }
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar4->actor_list_data,g_CTriggerClassInfo.name_hash);
        if (((pCVar3 != (CDemonActor *)0x0) && (*(int *)(pCVar3[1].actor_name + 0x1c) == 7)) &&
           (*(char *)&pCVar3[2].orient_matrix.m[2].x == '\0')) {
          uStack_58 = 0;
          iVar5 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar5 != 0) {
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
        }
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar4->actor_list_data,g_CFlameCanClassInfo.name_hash)
        ;
        if ((pCVar3 != (CDemonActor *)0x0) &&
           (iVar5 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar5 != 0)) {
          core_flamecan_cpp_FUN_004cb340();
        }
        iVar6 = iVar6 + 1;
        pCVar4 = (CDemonSet *)pCVar4->cameras;
      } while (iVar6 < (int)this_ptr->actor_list_ptr);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        local_34 = local_1c + -1;
        local_28 = 0;
        local_24 = 0;
        if (0 < local_34) {
          local_38 = local_1c << 2;
          do {
            if (local_24 + 1 < local_1c) {
              iVar6 = (local_24 + 1) * 4;
              do {
                iVar5 = *(int *)((int)&DAT_032bd794 + local_28);
                if (iVar5 < *(int *)((int)&DAT_032bd794 + iVar6)) {
                  *(uint *)((int)&DAT_032bd794 + local_28) =
                       *(uint *)((int)&DAT_032bd794 + iVar6);
                  *(int *)((int)&DAT_032bd794 + iVar6) = iVar5;
                  uVar1 = *(uint *)((int)&DAT_032bf6d4 + local_28);
                  *(uint *)((int)&DAT_032bf6d4 + local_28) =
                       *(uint *)((int)&DAT_032bf6d4 + iVar6);
                  *(uint *)((int)&DAT_032bf6d4 + iVar6) = uVar1;
                }
                iVar6 = iVar6 + 4;
              } while (iVar6 < local_38);
            }
            local_28 = local_28 + 4;
            local_24 = local_24 + 1;
          } while (local_24 < local_34);
        }
        iVar6 = 0x14;
        if (local_1c < 0x14) {
          iVar6 = local_1c;
        }
        iVar5 = 0;
        if (0 < iVar6) {
          do {
            iVar5 = iVar5 + 1;
            engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%d. %s : %3.2f ms\n");
          } while (iVar5 < iVar6);
        }
      }
      iStack_18 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      iStack_18 = iStack_18 - local_40;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n");
    }
    iVar6 = 0;
    pCVar4 = this_ptr;
    pCVar7 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (*(CDemonActor **)pCVar7->actor_list_data,"..\\core\\set.cpp",0x654);
        iVar6 = iVar6 + 1;
        pCVar7 = (CDemonSet *)pCVar7->cameras;
      } while (iVar6 < (int)this_ptr->actor_list_ptr);
    }
  }
  return (int)pCVar4;
}
