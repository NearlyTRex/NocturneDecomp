// Name: core_set.cpp_CDemonSet_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056b810(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  CPathMap *this_ptr_00;
  CDemonActor *pCVar7;
  CGlass *this_ptr_01;
  int extraout_EAX;
  byte *puVar8;
  CDemonSet *pCVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  int iVar12;
  CDemonSet *pCVar13;
  CVector3f *pCVar14;
  CDemonActor *in_stack_ffffff5c;
  SCollisionInfo *in_stack_ffffff60;
  CLocation *in_stack_ffffff64;
  int local_3c;
  int local_38;
  CDemonActor *local_28;
  int local_24;
  int local_20;
  CVector3f *local_1c;
  int iStack_18;
  
  iVar11 = 0;
  pCVar9 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)pCVar9->actor_list_data,"..\\core\\set.cpp",0x593);
      iVar11 = iVar11 + 1;
      pCVar9 = (CDemonSet *)pCVar9->cameras;
    } while (iVar11 < (int)this_ptr->actor_list_ptr);
  }
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  g_DynamicLightCount = 0;
  fVar2 = g_CGamePtr->delta_time_float;
  g_CoronaGlobeCount = 0;
  pCVar9 = (CDemonSet *)
           CONCAT22 /* combine 2-byte values */((short)((uint)fVar2 >> 0x10),
                    (ushort)(0.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                    (ushort)(fVar2 == 0.0) << 0xe);
  if (0.0 < fVar2) {
    core_setcolid_cpp_CDemonSet_FUN_005743e0(this_ptr);
    iVar11 = 0;
    pCVar9 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        *(int *)(*(int *)pCVar9->actor_list_data + 0x6c) = iVar11;
        iVar11 = iVar11 + 1;
        pCVar9 = (CDemonSet *)pCVar9->cameras;
      } while (iVar11 < (int)this_ptr->actor_list_ptr);
    }
    if (0.0 < (float)in_stack_ffffff5c) {
      local_20 = -999999;
      do {
        iStack_18 = 999999;
        iVar11 = 0;
        if (0 < (int)this_ptr->actor_list_ptr) {
          iVar10 = (int)local_1c << 2;
          pCVar9 = this_ptr;
          do {
            pCVar7 = *(CDemonActor **)pCVar9->actor_list_data;
            if (pCVar7->field17_0x104 == 0) {
              iVar12 = pCVar7->health;
              if (iVar12 == local_20) {
                fVar2 = (pCVar7->orient).pitch;
                fVar3 = (pCVar7->orient).bank;
                fVar4 = (pCVar7->orient).heading;
                DAT_00821ff4 = pCVar7;
                if (g_CGamePtr->profile_mode == 2) {
                  wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*DAT_00821ff4->vtable->process)(DAT_00821ff4);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar12 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  *(int *)((int)&DAT_032bd794 + iVar10) = iVar12 - local_3c;
                  *(CDemonActor **)((int)&DAT_032bf6d4 + iVar10) = DAT_00821ff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  iStack_18 = iStack_18 + 1;
                  iVar10 = iVar10 + 4;
                }
                in_stack_ffffff5c = DAT_00821ff4;
                this_ptr_00 = (*DAT_00821ff4->vtable->getPathMap)(DAT_00821ff4);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
                            (this_ptr_00,&(DAT_00821ff4->location).position,0);
                }
                if (((fVar3 == (DAT_00821ff4->orient).bank) &&
                    (fVar2 == (DAT_00821ff4->orient).pitch)) &&
                   (fVar4 == (DAT_00821ff4->orient).heading)) {
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(DAT_00821ff4);
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
              }
              else if ((local_20 < iVar12) && (iVar12 < iStack_18)) {
                iStack_18 = iVar12;
              }
            }
            iVar11 = iVar11 + 1;
            pCVar9 = (CDemonSet *)pCVar9->cameras;
          } while (iVar11 < (int)this_ptr->actor_list_ptr);
        }
        local_20 = iStack_18;
      } while (iStack_18 < 999999);
    }
    iVar11 = 0;
    pCVar9 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar9->actor_list_data,g_CCharacterClassInfo.name_hash
                           );
        if (((pCVar7 != (CDemonActor *)0x0) &&
            (iVar10 = (*pCVar7->vtable[1].hasCollision)(pCVar7,in_stack_ffffff60), iVar10 == 0)) &&
           (iVar10 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar10 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff64);
          in_stack_ffffff60 = (SCollisionInfo *)&stack0xffffff68;
          (*local_28->vtable[1].playAmbientSoundWithVolume)
                    (local_28,(char *)in_stack_ffffff60,(float)in_stack_ffffff64);
        }
        in_stack_ffffff5c = (CDemonActor *)g_CGlassClassInfo.name_hash;
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar9->actor_list_data,
                                 g_CGlassClassInfo.name_hash);
        if (this_ptr_01 != (CGlass *)0x0) {
          in_stack_ffffff60 = (SCollisionInfo *)0x0;
          in_stack_ffffff5c = (CDemonActor *)0x0;
          iVar10 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar10 != 0) {
            in_stack_ffffff60 = (SCollisionInfo *)0x56bbda;
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_01);
            if (extraout_EAX != 0) {
              in_stack_ffffff60 = (SCollisionInfo *)0x56bbec;
              core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_01,local_1c);
            }
          }
        }
        in_stack_ffffff64 = (CLocation *)0x56bc02;
        pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar9->actor_list_data,g_CTriggerClassInfo.name_hash);
        if (((pCVar7 != (CDemonActor *)0x0) && (*(int *)(pCVar7[1].actor_name + 0x1c) == 7)) &&
           (*(char *)&pCVar7[2].orient_matrix.m[2].x == '\0')) {
          in_stack_ffffff64 = &pCVar7->location;
          in_stack_ffffff5c = (CDemonActor *)0x56bc3b;
          in_stack_ffffff60 = (SCollisionInfo *)g_CFireEffectPtr;
          iVar10 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar10 != 0) {
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
        }
        pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar9->actor_list_data,g_CFlameCanClassInfo.name_hash)
        ;
        if ((pCVar7 != (CDemonActor *)0x0) &&
           (iVar10 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar10 != 0)) {
          core_flamecan_cpp_FUN_004cb340();
        }
        iVar11 = iVar11 + 1;
        pCVar9 = (CDemonSet *)pCVar9->cameras;
      } while (iVar11 < (int)this_ptr->actor_list_ptr);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        puVar8 = (byte *)((int)&local_1c[-1].z + 3);
        local_28 = (CDemonActor *)0x0;
        local_24 = 0;
        if (0 < (int)puVar8) {
          local_38 = (int)local_1c << 2;
          do {
            if (local_24 + 1 < (int)local_1c) {
              iVar11 = (local_24 + 1) * 4;
              do {
                iVar10 = *(int *)((int)&DAT_032bd794 + (int)local_28);
                if (iVar10 < *(int *)((int)&DAT_032bd794 + iVar11)) {
                  *(uint *)((int)&DAT_032bd794 + (int)local_28) =
                       *(uint *)((int)&DAT_032bd794 + iVar11);
                  *(int *)((int)&DAT_032bd794 + iVar11) = iVar10;
                  uVar5 = *(uint *)((int)&DAT_032bf6d4 + (int)local_28);
                  *(uint *)((int)&DAT_032bf6d4 + (int)local_28) =
                       *(uint *)((int)&DAT_032bf6d4 + iVar11);
                  *(uint *)((int)&DAT_032bf6d4 + iVar11) = uVar5;
                }
                iVar11 = iVar11 + 4;
              } while (iVar11 < local_38);
            }
            local_28 = (CDemonActor *)((int)local_28 + 4);
            local_24 = local_24 + 1;
          } while (local_24 < (int)puVar8);
        }
        pCVar14 = (CVector3f *)0x14;
        if ((int)local_1c < 0x14) {
          pCVar14 = local_1c;
        }
        if (0 < (int)pCVar14) {
          iVar10 = 0;
          iVar11 = 0;
          do {
            dVar6 = ((double)*(int *)((int)&DAT_032bd794 + iVar10) * 0.055555555555555601 *
                     1.52587890625e-05 * 1000) / (double)(float)in_stack_ffffff5c;
            puVar1 = (uint *)((int)&DAT_032bf6d4 + iVar10);
            iVar10 = iVar10 + 4;
            iVar12 = iVar11 + 1;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar11,*puVar1,SUB84 /* extract 2-byte value */(dVar6,0),
                       (int)((ulonglong)dVar6 >> 0x20));
            iVar11 = iVar12;
          } while (iVar12 < (int)pCVar14);
        }
      }
      iVar11 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      dVar6 = ((double)(iVar11 - local_38) * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
              (double)(float)in_stack_ffffff60;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",iStack_18,SUB84 /* extract 2-byte value */(dVar6,0),
                 (int)((ulonglong)dVar6 >> 0x20));
    }
    iVar11 = 0;
    pCVar9 = this_ptr;
    pCVar13 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (*(CDemonActor **)pCVar13->actor_list_data,"..\\core\\set.cpp",0x654);
        iVar11 = iVar11 + 1;
        pCVar13 = (CDemonSet *)pCVar13->cameras;
      } while (iVar11 < (int)this_ptr->actor_list_ptr);
    }
  }
  return (int)pCVar9;
}
