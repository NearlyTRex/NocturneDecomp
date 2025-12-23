// Name: core_set.cpp_CDemonSet_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056b810(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  CPathMap *this_ptr_00;
  CDemonActor *pCVar6;
  CGlass *this_ptr_01;
  int extraout_EAX;
  CDemonSet *pCVar7;
  int iVar8;
  byte *puVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  CDemonSet *pCVar11;
  int iStack00000008;
  int in_stack_0000000c;
  int iStack00000010;
  CLocation *in_stack_ffffff60;
  float in_stack_ffffff84;
  SCollisionInfo *in_stack_ffffff88;
  CDemonActor *local_2c;
  CVector3f *local_20;
  
  iVar10 = 0;
  pCVar7 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)pCVar7->actor_list_data,"..\\core\\set.cpp",0x593);
      iVar10 = iVar10 + 1;
      pCVar7 = (CDemonSet *)pCVar7->cameras;
    } while (iVar10 < (int)this_ptr->actor_list_ptr);
  }
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  g_DynamicLightCount = 0;
  fVar1 = g_CGamePtr->delta_time_float;
  g_CoronaGlobeCount = 0;
  pCVar7 = (CDemonSet *)
           CONCAT22 /* combine 2-byte values */((short)((uint)fVar1 >> 0x10),
                    (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                    (ushort)(fVar1 == 0.0) << 0xe);
  if (0.0 < fVar1) {
    core_setcolid_cpp_CDemonSet_FUN_005743e0(this_ptr);
    iVar10 = 0;
    pCVar7 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        *(int *)(*(int *)pCVar7->actor_list_data + 0x6c) = iVar10;
        iVar10 = iVar10 + 1;
        pCVar7 = (CDemonSet *)pCVar7->cameras;
      } while (iVar10 < (int)this_ptr->actor_list_ptr);
    }
    if (0.0 < in_stack_ffffff84) {
      iStack00000008 = -999999;
      do {
        iStack00000010 = 999999;
        iVar10 = 0;
        if (0 < (int)this_ptr->actor_list_ptr) {
          iVar8 = in_stack_0000000c << 2;
          pCVar7 = this_ptr;
          do {
            pCVar6 = *(CDemonActor **)pCVar7->actor_list_data;
            if (pCVar6->field17_0x104 == 0) {
              iVar5 = pCVar6->health;
              if (iVar5 == iStack00000008) {
                fVar1 = (pCVar6->orient).pitch;
                fVar2 = (pCVar6->orient).bank;
                fVar3 = (pCVar6->orient).heading;
                DAT_00821ff4 = pCVar6;
                if (g_CGamePtr->profile_mode == 2) {
                  wincore_winrun_cpp_getTime_FUN_005f2dc0();
                }
                (*DAT_00821ff4->vtable->process)(DAT_00821ff4);
                if (g_CGamePtr->profile_mode == 2) {
                  iVar5 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
                  *(int *)((int)&DAT_032bd794 + iVar8) = iVar5 - (int)fVar1;
                  *(CDemonActor **)((int)&DAT_032bf6d4 + iVar8) = DAT_00821ff4;
                }
                if (g_CGamePtr->profile_mode != 0) {
                  iVar8 = iVar8 + 4;
                }
                this_ptr_00 = (*DAT_00821ff4->vtable->getPathMap)(DAT_00821ff4);
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
                            (this_ptr_00,&(DAT_00821ff4->location).position,0);
                }
                if (((fVar2 == (DAT_00821ff4->orient).bank) &&
                    (fVar1 == (DAT_00821ff4->orient).pitch)) &&
                   (fVar3 == (DAT_00821ff4->orient).heading)) {
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(DAT_00821ff4);
                  DAT_00821ff4 = (CDemonActor *)0x0;
                }
              }
              else if ((iStack00000008 < iVar5) && (iVar5 < iStack00000010)) {
                iStack00000010 = iVar5;
              }
            }
            iVar10 = iVar10 + 1;
            pCVar7 = (CDemonSet *)pCVar7->cameras;
          } while (iVar10 < (int)this_ptr->actor_list_ptr);
        }
        iStack00000008 = iStack00000010;
      } while (iStack00000010 < 999999);
    }
    iVar10 = 0;
    pCVar7 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar7->actor_list_data,g_CCharacterClassInfo.name_hash
                           );
        if (((pCVar6 != (CDemonActor *)0x0) &&
            (iVar8 = (*pCVar6->vtable[1].hasCollision)(pCVar6,in_stack_ffffff88), iVar8 == 0)) &&
           (iVar8 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar8 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff60);
          (*local_2c->vtable[1].playAmbientSoundWithVolume)
                    (local_2c,&stack0xffffff64,(float)in_stack_ffffff60);
        }
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar7->actor_list_data,
                                 g_CGlassClassInfo.name_hash);
        if (this_ptr_01 != (CGlass *)0x0) {
          iVar8 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if ((iVar8 != 0) &&
             (core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_01),
             extraout_EAX != 0)) {
            core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr_01,local_20);
          }
        }
        in_stack_ffffff60 = (CLocation *)0x56bc02;
        pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar7->actor_list_data,g_CTriggerClassInfo.name_hash);
        if (((pCVar6 != (CDemonActor *)0x0) && (*(int *)(pCVar6[1].actor_name + 0x1c) == 7)) &&
           (*(char *)&pCVar6[2].orient_matrix.m[2].x == '\0')) {
          in_stack_ffffff60 = &pCVar6->location;
          iVar8 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
          if (iVar8 != 0) {
            core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
          }
        }
        pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)pCVar7->actor_list_data,g_CFlameCanClassInfo.name_hash)
        ;
        if ((pCVar6 != (CDemonActor *)0x0) &&
           (iVar8 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr), iVar8 != 0)) {
          core_flamecan_cpp_FUN_004cb340();
        }
        iVar10 = iVar10 + 1;
        pCVar7 = (CDemonSet *)pCVar7->cameras;
      } while (iVar10 < (int)this_ptr->actor_list_ptr);
    }
    if (g_CGamePtr->profile_mode != 0) {
      if (g_CGamePtr->profile_mode == 2) {
        iVar10 = 0;
        this_ptr = (CDemonSet *)0x0;
        if (0 < in_stack_0000000c + -1) {
          do {
            puVar9 = (byte *)((int)&this_ptr->camera_count + 1);
            if ((int)puVar9 < in_stack_0000000c) {
              iVar8 = (int)puVar9 * 4;
              do {
                iVar5 = *(int *)((int)&DAT_032bd794 + iVar10);
                if (iVar5 < *(int *)((int)&DAT_032bd794 + iVar8)) {
                  *(uint *)((int)&DAT_032bd794 + iVar10) =
                       *(uint *)((int)&DAT_032bd794 + iVar8);
                  *(int *)((int)&DAT_032bd794 + iVar8) = iVar5;
                  uVar4 = *(uint *)((int)&DAT_032bf6d4 + iVar10);
                  *(uint *)((int)&DAT_032bf6d4 + iVar10) =
                       *(uint *)((int)&DAT_032bf6d4 + iVar8);
                  *(uint *)((int)&DAT_032bf6d4 + iVar8) = uVar4;
                }
                iVar8 = iVar8 + 4;
              } while (iVar8 < in_stack_0000000c << 2);
            }
            iVar10 = iVar10 + 4;
            this_ptr = (CDemonSet *)((int)&this_ptr->camera_count + 1);
          } while ((int)this_ptr < in_stack_0000000c + -1);
        }
        iVar10 = 0x14;
        if (in_stack_0000000c < 0x14) {
          iVar10 = in_stack_0000000c;
        }
        iVar8 = 0;
        if (0 < iVar10) {
          do {
            iVar8 = iVar8 + 1;
            engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%d. %s : %3.2f ms\n");
          } while (iVar8 < iVar10);
        }
      }
      wincore_winrun_cpp_getTime_FUN_005f2dc0();
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n");
    }
    iVar10 = 0;
    pCVar7 = this_ptr;
    pCVar11 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (*(CDemonActor **)pCVar11->actor_list_data,"..\\core\\set.cpp",0x654);
        iVar10 = iVar10 + 1;
        pCVar11 = (CDemonSet *)pCVar11->cameras;
      } while (iVar10 < (int)this_ptr->actor_list_ptr);
    }
  }
  return (int)pCVar7;
}
