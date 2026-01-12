// Name: core_set.cpp_CDemonSet_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056b810(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  CPathMap *this_ptr_00;
  float fVar4;
  CGlass *this_ptr_01;
  int extraout_EAX;
  CDemonActor *pCVar5;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  int iVar10;
  CDemonSet *pCVar11;
  SDamageInfo SStack_a0;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_48;
  uint local_44;
  int local_3c;
  int local_38;
  int local_34;
  CDemonActor *pCStack_30;
  CVector3f *local_2c;
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
    local_38 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iStack_18 = 0;
  }
  g_DynamicLightCount = 0;
  SStack_a0.field0_0x0 = (int)g_CGamePtr->delta_time_float;
  g_CoronaGlobeCount = 0;
  pCVar6 = (CDemonSet *)
           CONCAT22 /* combine 2-byte values */((short)((uint)SStack_a0.field0_0x0 >> 0x10),
                    (ushort)(0.0 < (float)SStack_a0.field0_0x0) << 8 |
                    (ushort)NAN((float)SStack_a0.field0_0x0) << 10 |
                    (ushort)((float)SStack_a0.field0_0x0 == 0.0) << 0xe);
  if (0.0 < (float)SStack_a0.field0_0x0) {
    pCVar11 = this_ptr;
    fStack_48 = (float)SStack_a0.field0_0x0;
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
    if (0.0 < (float)pCVar11) {
      local_20 = -999999;
      iVar9 = local_20;
      do {
        local_20 = iVar9;
        iStack_18 = 999999;
        iVar9 = 0;
        if (0 < (int)this_ptr->actor_list_ptr) {
          iVar7 = local_1c << 2;
          pCVar6 = this_ptr;
          do {
            pCVar5 = *(CDemonActor **)pCVar6->actor_list_data;
            if (pCVar5->field17_0x104 == 0) {
              iVar8 = pCVar5->health;
              if (iVar8 == local_20) {
                local_64 = (pCVar5->orient).pitch;
                local_60 = (pCVar5->orient).bank;
                fStack_5c = (pCVar5->orient).heading;
                DAT_00821ff4 = pCVar5;
                if (g_CGamePtr->profile_mode == 2) {
                  local_3c = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*DAT_00821ff4->vtable->process)(DAT_00821ff4);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar8 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  *(int *)((int)&DAT_032bd794 + iVar7) = iVar8 - local_3c;
                  *(CDemonActor **)((int)&DAT_032bf6d4 + iVar7) = DAT_00821ff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  iStack_18 = iStack_18 + 1;
                  iVar7 = iVar7 + 4;
                }
                pCVar11 = (CDemonSet *)DAT_00821ff4;
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
              else if ((local_20 < iVar8) && (iVar8 < iStack_18)) {
                iStack_18 = iVar8;
              }
            }
            iVar9 = iVar9 + 1;
            pCVar6 = (CDemonSet *)pCVar6->cameras;
          } while (iVar9 < (int)this_ptr->actor_list_ptr);
        }
        iVar9 = iStack_18;
      } while (iStack_18 < 999999);
    }
    iVar9 = 0;
    pCVar6 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        pCStack_30 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (*(CDemonActor **)pCVar6->actor_list_data,
                                g_CCharacterClassInfo.name_hash);
        if (((pCStack_30 != (CDemonActor *)0x0) &&
            (fVar4 = (float)(*pCStack_30->vtable[1].hasCollision)
                                      (pCStack_30,(SCollisionInfo *)pCVar11), fVar4 == 0.0)) &&
           (fStack_48 = fVar4, iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr),
           iVar7 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_a0);
          SStack_a0.damage_amount = fStack_48;
          SStack_a0.damage_type = 4;
          if (&SStack_a0.impact_point != (CVector3f *)&fStack_58) {
            SStack_a0.impact_point.x = fStack_58;
            SStack_a0.impact_point.y = fStack_54;
            SStack_a0.impact_point.z = local_50;
          }
          (*pCStack_30->vtable[1].playAmbientSoundWithVolume)
                    (pCStack_30,(char *)&SStack_a0,(float)pCVar11);
        }
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar6->actor_list_data,
                                 g_CGlassClassInfo.name_hash);
        if (this_ptr_01 != (CGlass *)0x0) {
          local_2c = &(this_ptr_01->base).location.position;
          iVar7 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if ((iVar7 != 0) &&
             (core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_01),
             extraout_EAX != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_01,local_2c);
          }
        }
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar6->actor_list_data,g_CTriggerClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) && (*(int *)(pCVar5[1].actor_name + 0x1c) == 7)) &&
           (*(char *)&pCVar5[2].orient_matrix.m[2].x == '\0')) {
          local_44 = 0;
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
        iVar9 = iVar9 + 1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar9 < (int)this_ptr->actor_list_ptr);
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
              iVar9 = (local_24 + 1) * 4;
              do {
                iVar7 = *(int *)((int)&DAT_032bd794 + local_28);
                if (iVar7 < *(int *)((int)&DAT_032bd794 + iVar9)) {
                  *(uint *)((int)&DAT_032bd794 + local_28) =
                       *(uint *)((int)&DAT_032bd794 + iVar9);
                  *(int *)((int)&DAT_032bd794 + iVar9) = iVar7;
                  uVar2 = *(uint *)((int)&DAT_032bf6d4 + local_28);
                  *(uint *)((int)&DAT_032bf6d4 + local_28) =
                       *(uint *)((int)&DAT_032bf6d4 + iVar9);
                  *(uint *)((int)&DAT_032bf6d4 + iVar9) = uVar2;
                }
                iVar9 = iVar9 + 4;
              } while (iVar9 < local_38);
            }
            local_28 = local_28 + 4;
            local_24 = local_24 + 1;
          } while (local_24 < local_34);
        }
        iVar9 = 0x14;
        if (local_1c < 0x14) {
          iVar9 = local_1c;
        }
        if (0 < iVar9) {
          iVar8 = 0;
          iVar7 = 0;
          do {
            dVar3 = ((double)*(int *)((int)&DAT_032bd794 + iVar8) * 0.055555555555555601 *
                     1.52587890625e-05 * 1000) / (double)(float)pCVar11;
            puVar1 = (uint *)((int)&DAT_032bf6d4 + iVar8);
            iVar8 = iVar8 + 4;
            iVar10 = iVar7 + 1;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar7,*puVar1,SUB84 /* extract 2-byte value */(dVar3,0),
                       (int)((ulonglong)dVar3 >> 0x20));
            iVar7 = iVar10;
          } while (iVar10 < iVar9);
        }
      }
      iVar9 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      dVar3 = ((double)(iVar9 - local_38) * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
              (double)(float)SStack_a0.field0_0x0;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",iStack_18,SUB84 /* extract 2-byte value */(dVar3,0),
                 (int)((ulonglong)dVar3 >> 0x20));
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
