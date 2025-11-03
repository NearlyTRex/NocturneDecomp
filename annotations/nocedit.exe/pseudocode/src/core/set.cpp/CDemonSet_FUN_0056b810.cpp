// Name: core_set.cpp_CDemonSet_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056be76]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_FUN_0056b810(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3576 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_00645cbf
//   TerminatedCString s_d_s_3_2f_ms_00645ccf
//   TerminatedCString s_Process_time_d_actors_3__00645ce2
//   TerminatedCString s_core_set_cpp_00645d07
//   double DOUBLE_00645d1b = 0.0555555555555556
//   double DOUBLE_00645d23 = 0.0000152587890625
//   double DOUBLE_00645d2b = 1000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 DAT_00821ff4
//   undefined4 g_CCharacterClassInfo.name_hash
//   CConsole g_ConsolePtr
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CFlameCanClassInfo.name_hash
//   undefined4 DAT_02d81ca8
//   undefined4 g_CGameInstance.delta_time_float
//   undefined4 g_CGlassClassInfo.name_hash
//   int g_DynamicLightCount
//   int g_CoronaGlobeCount
//   undefined4 DAT_032bd794
//   undefined4 DAT_032bd798
//   undefined4 DAT_032bf6d4
//   undefined4 DAT_032bf6d8
//   undefined4 g_CTriggerClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_fire.cpp_CFireEffect_FUN_004c8c90
//   core_flamecan.cpp_FUN_004cb340
//   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
//   core_setcolid.cpp_CDemonSet_FUN_005743e0
//   core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b810(CDemonSet *this_ptr)

{
  undefined4 uVar1;
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
  undefined4 uStack_58;
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
           CONCAT22((short)((uint)local_50 >> 0x10),
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
                  *(undefined4 *)((int)&DAT_032bd794 + local_28) =
                       *(undefined4 *)((int)&DAT_032bd794 + iVar6);
                  *(int *)((int)&DAT_032bd794 + iVar6) = iVar5;
                  uVar1 = *(undefined4 *)((int)&DAT_032bf6d4 + local_28);
                  *(undefined4 *)((int)&DAT_032bf6d4 + local_28) =
                       *(undefined4 *)((int)&DAT_032bf6d4 + iVar6);
                  *(undefined4 *)((int)&DAT_032bf6d4 + iVar6) = uVar1;
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


// Assembly code:
// 0056b810: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056b810
// 0056b811: PUSH ESI
// 0056b812: PUSH EDI
// 0056b813: PUSH EBP
// 0056b814: MOV EBP,ESP
// 0056b816: SUB ESP,0x94
// 0056b81c: AND ESP,0xfffffff8
// 0056b81f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056b822: MOV EDX,dword ptr [EAX + 0x14d154]
// 0056b828: XOR ESI,ESI
// 0056b82a: TEST EDX,EDX
// 0056b82c: JLE 0x0056b860
//   XREF to: 0056b860 (CONDITIONAL_JUMP)
// 0056b82e: MOV EBX,EAX
// 0056b830: PUSH 0x593
//   Label: LAB_0056b830
// 0056b835: PUSH 0x645cbf
//   XREF to: 00645cbf (DATA)
// 0056b83a: MOV ECX,dword ptr [EBX + 0x14d158]
// 0056b840: PUSH ECX
// 0056b841: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0056b846: ADD ESP,0xc
// 0056b849: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056b84c: INC ESI
// 0056b84d: MOV EDI,dword ptr [EAX + 0x14d154]
// 0056b853: ADD EBX,0x4
// 0056b856: CMP ESI,EDI
// 0056b858: JL 0x0056b830
//   XREF to: 0056b830 (CONDITIONAL_JUMP)
// 0056b85a: LEA EAX,[EAX]
// 0056b860: MOV EAX,[0x0067b654]
//   Label: LAB_0056b860
//   XREF to: 0067b654 (READ)
// 0056b865: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056b86c: JNZ 0x0056b95e
//   XREF to: 0056b95e (CONDITIONAL_JUMP)
// 0056b872: XOR EBX,EBX
//   Label: LAB_0056b872
// 0056b874: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0056b879: MOV dword ptr [0x032776b4],EBX
//   XREF to: 032776b4 (WRITE)
// 0056b87f: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0056b885: MOV dword ptr [0x032776c8],EBX
//   XREF to: 032776c8 (WRITE)
// 0056b88b: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0056b88f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xa8] (DATA)
// 0056b892: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x50] (READ)
// 0056b896: FLDZ
// 0056b898: FCOMPP
// 0056b89a: FNSTSW AX
// 0056b89c: SAHF
// 0056b89d: JNC 0x0056be70
//   XREF to: 0056be70 (CONDITIONAL_JUMP)
// 0056b8a3: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056b8a6: PUSH EDI
// 0056b8a7: CALL core_setcolid.cpp_CDemonSet_FUN_005743e0
//   XREF to: 005743e0 (UNCONDITIONAL_CALL)
// 0056b8ac: ADD ESP,0x4
// 0056b8af: MOV ECX,dword ptr [EDI + 0x14d154]
// 0056b8b5: XOR EAX,EAX
// 0056b8b7: TEST ECX,ECX
// 0056b8b9: JLE 0x0056b8e0
//   XREF to: 0056b8e0 (CONDITIONAL_JUMP)
// 0056b8bb: MOV EDX,EDI
// 0056b8bd: MOV ECX,dword ptr [EDX + 0x14d158]
//   Label: LAB_0056b8bd
// 0056b8c3: MOV dword ptr [ECX + 0x6c],EAX
// 0056b8c6: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056b8c9: INC EAX
// 0056b8ca: MOV EBX,dword ptr [ECX + 0x14d154]
// 0056b8d0: ADD EDX,0x4
// 0056b8d3: CMP EAX,EBX
// 0056b8d5: JL 0x0056b8bd
//   XREF to: 0056b8bd (CONDITIONAL_JUMP)
// 0056b8d7: LEA EAX,[EAX]
// 0056b8dd: LEA EDX,[EDX]
// 0056b8e0: FLD float ptr [ESP]
//   Label: LAB_0056b8e0
//   XREF to: Stack[-0xa8] (DATA)
// 0056b8e3: FLDZ
// 0056b8e5: FCOMPP
// 0056b8e7: FNSTSW AX
// 0056b8e9: SAHF
// 0056b8ea: JNC 0x0056babf
//   XREF to: 0056babf (CONDITIONAL_JUMP)
// 0056b8f0: MOV dword ptr [ESP + 0x84],0xfff0bdc1
//   XREF to: Stack[-0x24] (WRITE)
// 0056b8fb: MOV EDI,0xf423f
//   Label: LAB_0056b8fb
// 0056b900: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056b903: MOV dword ptr [ESP + 0x8c],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0056b90a: MOV EDX,dword ptr [EAX + 0x14d154]
// 0056b910: XOR EDI,EDI
// 0056b912: TEST EDX,EDX
// 0056b914: JLE 0x0056b942
//   XREF to: 0056b942 (CONDITIONAL_JUMP)
// 0056b916: MOV EBX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 0056b91d: MOV ESI,EAX
// 0056b91f: SHL EBX,0x2
// 0056b922: MOV EAX,dword ptr [ESI + 0x14d158]
//   Label: LAB_0056b922
// 0056b928: CMP dword ptr [EAX + 0x104],0x0
// 0056b92f: JZ 0x0056b975
//   XREF to: 0056b975 (CONDITIONAL_JUMP)
// 0056b931: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0056b931
//   XREF to: Stack[0x4] (READ)
// 0056b934: INC EDI
// 0056b935: MOV ECX,dword ptr [EAX + 0x14d154]
// 0056b93b: ADD ESI,0x4
// 0056b93e: CMP EDI,ECX
// 0056b940: JL 0x0056b922
//   XREF to: 0056b922 (CONDITIONAL_JUMP)
// 0056b942: MOV EBX,dword ptr [ESP + 0x8c]
//   Label: LAB_0056b942
//   XREF to: Stack[-0x1c] (READ)
// 0056b949: CMP EBX,0xf423f
// 0056b94f: JGE 0x0056babf
//   XREF to: 0056babf (CONDITIONAL_JUMP)
// 0056b955: MOV dword ptr [ESP + 0x84],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0056b95c: JMP 0x0056b8fb
//   XREF to: 0056b8fb (UNCONDITIONAL_JUMP)
// 0056b95e: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_0056b95e
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056b963: XOR ECX,ECX
// 0056b965: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0056b969: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0056b970: JMP 0x0056b872
//   XREF to: 0056b872 (UNCONDITIONAL_JUMP)
// 0056b975: MOV ECX,dword ptr [ESP + 0x84]
//   Label: LAB_0056b975
//   XREF to: Stack[-0x24] (READ)
// 0056b97c: MOV EDX,dword ptr [EAX + 0x64]
// 0056b97f: CMP EDX,ECX
// 0056b981: JNZ 0x0056baa0
//   XREF to: 0056baa0 (CONDITIONAL_JUMP)
// 0056b987: MOV [0x00821ff4],EAX
//   XREF to: 00821ff4 (WRITE)
// 0056b98c: LEA EDX,[EAX + 0x30]
// 0056b98f: MOV EAX,dword ptr [EDX]
// 0056b991: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0056b995: LEA EAX,[EDX + 0x4]
// 0056b998: MOV EAX,dword ptr [EAX]
// 0056b99a: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0056b99e: LEA EAX,[EDX + 0x8]
// 0056b9a1: MOV EAX,dword ptr [EAX]
// 0056b9a3: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0056b9a7: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0056b9ac: CMP dword ptr [EAX + 0x20c],0x2
//   XREF to: 02d81ca8 (READ)
// 0056b9b3: JNZ 0x0056b9be
//   XREF to: 0056b9be (CONDITIONAL_JUMP)
// 0056b9b5: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056b9ba: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0056b9be: MOV EAX,[0x00821ff4]
//   Label: LAB_0056b9be
//   XREF to: 00821ff4 (READ)
// 0056b9c3: PUSH dword ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0056b9c6: PUSH EAX
// 0056b9c7: MOV EDX,dword ptr [EAX + 0x154]
// 0056b9cd: CALL dword ptr [EDX + 0x4]
// 0056b9d0: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0056b9d5: MOV ECX,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 0056b9db: ADD ESP,0x8
// 0056b9de: CMP ECX,0x2
// 0056b9e1: JNZ 0x0056b9ff
//   XREF to: 0056b9ff (CONDITIONAL_JUMP)
// 0056b9e3: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056b9e8: MOV EDX,dword ptr [ESP + 0x64]
// 0056b9ec: SUB EAX,EDX
// 0056b9ee: MOV dword ptr [EBX + 0x32bd794],EAX
//   XREF to: 032bd794 (DATA)
// 0056b9f4: MOV EAX,[0x00821ff4]
//   XREF to: 00821ff4 (READ)
// 0056b9f9: MOV dword ptr [EBX + 0x32bf6d4],EAX
//   XREF to: 032bf6d4 (DATA)
// 0056b9ff: MOV EAX,[0x0067b654]
//   Label: LAB_0056b9ff
//   XREF to: 0067b654 (READ)
// 0056ba04: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056ba0b: JZ 0x0056ba1f
//   XREF to: 0056ba1f (CONDITIONAL_JUMP)
// 0056ba0d: MOV EAX,dword ptr [ESP + 0x88]
// 0056ba14: INC EAX
// 0056ba15: ADD EBX,0x4
// 0056ba18: MOV dword ptr [ESP + 0x88],EAX
// 0056ba1f: MOV EAX,[0x00821ff4]
//   Label: LAB_0056ba1f
//   XREF to: 00821ff4 (READ)
// 0056ba24: PUSH EAX
// 0056ba25: MOV EDX,dword ptr [EAX + 0x154]
// 0056ba2b: CALL dword ptr [EDX + 0xbc]
// 0056ba31: ADD ESP,0x4
// 0056ba34: TEST EAX,EAX
// 0056ba36: JZ 0x0056ba4d
//   XREF to: 0056ba4d (CONDITIONAL_JUMP)
// 0056ba38: MOV EDX,dword ptr [0x00821ff4]
//   XREF to: 00821ff4 (READ)
// 0056ba3e: PUSH 0x0
// 0056ba40: ADD EDX,0x20
// 0056ba43: PUSH EDX
// 0056ba44: PUSH EAX
// 0056ba45: CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
//   XREF to: 00546a60 (UNCONDITIONAL_CALL)
// 0056ba4a: ADD ESP,0xc
// 0056ba4d: MOV EDX,dword ptr [0x00821ff4]
//   Label: LAB_0056ba4d
//   XREF to: 00821ff4 (READ)
// 0056ba53: FLD float ptr [ESP + 0x44]
// 0056ba57: FCOMP float ptr [EDX + 0x34]
// 0056ba5a: FNSTSW AX
// 0056ba5c: SAHF
// 0056ba5d: JZ 0x0056ba7b
//   XREF to: 0056ba7b (CONDITIONAL_JUMP)
// 0056ba5f: MOV EDX,dword ptr [0x00821ff4]
//   Label: LAB_0056ba5f
//   XREF to: 00821ff4 (READ)
// 0056ba65: PUSH EDX
// 0056ba66: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0056ba6b: ADD ESP,0x4
// 0056ba6e: XOR ECX,ECX
// 0056ba70: MOV dword ptr [0x00821ff4],ECX
//   XREF to: 00821ff4 (WRITE)
// 0056ba76: JMP 0x0056b931
//   XREF to: 0056b931 (UNCONDITIONAL_JUMP)
// 0056ba7b: FLD float ptr [ESP + 0x40]
//   Label: LAB_0056ba7b
// 0056ba7f: FCOMP float ptr [EDX + 0x30]
// 0056ba82: FNSTSW AX
// 0056ba84: SAHF
// 0056ba85: JNZ 0x0056ba5f
//   XREF to: 0056ba5f (CONDITIONAL_JUMP)
// 0056ba87: FLD float ptr [ESP + 0x48]
// 0056ba8b: FCOMP float ptr [EDX + 0x38]
// 0056ba8e: FNSTSW AX
// 0056ba90: SAHF
// 0056ba91: JNZ 0x0056ba5f
//   XREF to: 0056ba5f (CONDITIONAL_JUMP)
// 0056ba93: XOR ECX,ECX
// 0056ba95: MOV dword ptr [0x00821ff4],ECX
//   XREF to: 00821ff4 (WRITE)
// 0056ba9b: JMP 0x0056b931
//   XREF to: 0056b931 (UNCONDITIONAL_JUMP)
// 0056baa0: JLE 0x0056b931
//   Label: LAB_0056baa0
//   XREF to: 0056b931 (CONDITIONAL_JUMP)
// 0056baa6: CMP EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 0056baad: JGE 0x0056b931
//   XREF to: 0056b931 (CONDITIONAL_JUMP)
// 0056bab3: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056baba: JMP 0x0056b931
//   XREF to: 0056b931 (UNCONDITIONAL_JUMP)
// 0056babf: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0056babf
//   XREF to: Stack[0x4] (READ)
// 0056bac2: MOV EBX,dword ptr [EAX + 0x14d154]
// 0056bac8: XOR EDI,EDI
// 0056baca: TEST EBX,EBX
// 0056bacc: JLE 0x0056bca6
//   XREF to: 0056bca6 (CONDITIONAL_JUMP)
// 0056bad2: MOV ESI,EAX
// 0056bad4: MOV EDX,dword ptr [0x00823c4c]
//   Label: LAB_0056bad4
//   XREF to: 00823c4c (READ)
// 0056bada: PUSH EDX
// 0056badb: MOV ECX,dword ptr [ESI + 0x14d158]
// 0056bae1: PUSH ECX
// 0056bae2: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0056bae7: ADD ESP,0x8
// 0056baea: MOV EBX,EAX
// 0056baec: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0056baf0: TEST EAX,EAX
// 0056baf2: JZ 0x0056bb96
//   XREF to: 0056bb96 (CONDITIONAL_JUMP)
// 0056baf8: PUSH EBX
// 0056baf9: MOV EAX,dword ptr [EAX + 0x154]
// 0056baff: CALL dword ptr [EAX + 0x120]
// 0056bb05: ADD ESP,0x4
// 0056bb08: TEST EAX,EAX
// 0056bb0a: JNZ 0x0056bb96
//   XREF to: 0056bb96 (CONDITIONAL_JUMP)
// 0056bb10: MOV dword ptr [ESP + 0x5c],EAX
// 0056bb14: LEA EAX,[ESP + 0x5c]
// 0056bb18: PUSH EAX
// 0056bb19: LEA EAX,[ESP + 0x50]
// 0056bb1d: PUSH EAX
// 0056bb1e: ADD EBX,0x20
// 0056bb21: PUSH 0x0
// 0056bb23: PUSH EBX
// 0056bb24: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0056bb2a: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 0056bb2b: CALL core_fire.cpp_CFireEffect_FUN_004c8c90
//   XREF to: 004c8c90 (UNCONDITIONAL_CALL)
// 0056bb30: ADD ESP,0x14
// 0056bb33: TEST EAX,EAX
// 0056bb35: JZ 0x0056bb96
//   XREF to: 0056bb96 (CONDITIONAL_JUMP)
// 0056bb37: LEA EAX,[ESP + 0x4]
// 0056bb3b: PUSH EAX
// 0056bb3c: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0056bb41: ADD ESP,0x4
// 0056bb44: MOV ECX,0x4
// 0056bb49: MOV EAX,dword ptr [ESP + 0x5c]
// 0056bb4d: LEA EDX,[ESP + 0x10]
// 0056bb51: MOV dword ptr [ESP + 0x8],EAX
// 0056bb55: LEA EAX,[ESP + 0x4c]
// 0056bb59: MOV dword ptr [ESP + 0x34],ECX
// 0056bb5d: CMP EDX,EAX
// 0056bb5f: JZ 0x0056bb79
//   XREF to: 0056bb79 (CONDITIONAL_JUMP)
// 0056bb61: MOV EAX,dword ptr [ESP + 0x4c]
// 0056bb65: MOV dword ptr [ESP + 0x10],EAX
// 0056bb69: MOV EAX,dword ptr [ESP + 0x50]
// 0056bb6d: MOV dword ptr [ESP + 0x14],EAX
// 0056bb71: MOV EAX,dword ptr [ESP + 0x54]
// 0056bb75: MOV dword ptr [ESP + 0x18],EAX
// 0056bb79: LEA EDX,[ESP + 0x4]
//   Label: LAB_0056bb79
// 0056bb7d: MOV EAX,dword ptr [ESP + 0x74]
// 0056bb81: PUSH EDX
// 0056bb82: MOV EBX,dword ptr [ESP + 0x78]
// 0056bb86: MOV EAX,dword ptr [EAX + 0x154]
// 0056bb8c: PUSH EBX
// 0056bb8d: CALL dword ptr [EAX + 0x11c]
// 0056bb93: ADD ESP,0x8
// 0056bb96: MOV EAX,[0x02d83360]
//   Label: LAB_0056bb96
//   XREF to: 02d83360 (READ)
// 0056bb9b: PUSH EAX
// 0056bb9c: MOV EDX,dword ptr [ESI + 0x14d158]
// 0056bba2: PUSH EDX
// 0056bba3: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0056bba8: MOV EBX,EAX
// 0056bbaa: ADD ESP,0x8
// 0056bbad: TEST EAX,EAX
// 0056bbaf: JZ 0x0056bbef
//   XREF to: 0056bbef (CONDITIONAL_JUMP)
// 0056bbb1: PUSH 0x0
// 0056bbb3: PUSH 0x0
// 0056bbb5: ADD EAX,0x20
// 0056bbb8: PUSH 0x0
// 0056bbba: PUSH EAX
// 0056bbbb: MOV dword ptr [ESP + 0x88],EAX
// 0056bbc2: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0056bbc7: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 0056bbc8: CALL core_fire.cpp_CFireEffect_FUN_004c8c90
//   XREF to: 004c8c90 (UNCONDITIONAL_CALL)
// 0056bbcd: ADD ESP,0x14
// 0056bbd0: TEST EAX,EAX
// 0056bbd2: JZ 0x0056bbef
//   XREF to: 0056bbef (CONDITIONAL_JUMP)
// 0056bbd4: PUSH EBX
// 0056bbd5: CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
//   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
// 0056bbda: ADD ESP,0x4
// 0056bbdd: TEST EAX,EAX
// 0056bbdf: JZ 0x0056bbef
//   XREF to: 0056bbef (CONDITIONAL_JUMP)
// 0056bbe1: MOV EDX,dword ptr [ESP + 0x78]
// 0056bbe5: PUSH EDX
// 0056bbe6: PUSH EBX
// 0056bbe7: CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 0056bbec: ADD ESP,0x8
// 0056bbef: MOV ECX,dword ptr [0x03f87490]
//   Label: LAB_0056bbef
//   XREF to: 03f87490 (READ)
// 0056bbf5: PUSH ECX
// 0056bbf6: MOV EBX,dword ptr [ESI + 0x14d158]
// 0056bbfc: PUSH EBX
// 0056bbfd: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0056bc02: MOV EBX,EAX
// 0056bc04: ADD ESP,0x8
// 0056bc07: TEST EAX,EAX
// 0056bc09: JZ 0x0056bc4f
//   XREF to: 0056bc4f (CONDITIONAL_JUMP)
// 0056bc0b: CMP dword ptr [EAX + 0x174],0x7
// 0056bc12: JNZ 0x0056bc4f
//   XREF to: 0056bc4f (CONDITIONAL_JUMP)
// 0056bc14: CMP byte ptr [EBX + 0x304],0x0
// 0056bc1b: JNZ 0x0056bc4f
//   XREF to: 0056bc4f (CONDITIONAL_JUMP)
// 0056bc1d: LEA EAX,[ESP + 0x60]
// 0056bc21: PUSH EAX
// 0056bc22: XOR EDX,EDX
// 0056bc24: PUSH EDX
// 0056bc25: LEA EAX,[EBX + 0x20]
// 0056bc28: PUSH 0x0
// 0056bc2a: PUSH EAX
// 0056bc2b: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0056bc31: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 0056bc32: MOV dword ptr [ESP + 0x74],EDX
// 0056bc36: CALL core_fire.cpp_CFireEffect_FUN_004c8c90
//   XREF to: 004c8c90 (UNCONDITIONAL_CALL)
// 0056bc3b: ADD ESP,0x14
// 0056bc3e: TEST EAX,EAX
// 0056bc40: JZ 0x0056bc4f
//   XREF to: 0056bc4f (CONDITIONAL_JUMP)
// 0056bc42: PUSH dword ptr [ESP + 0x60]
// 0056bc46: PUSH EBX
// 0056bc47: CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
//   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
// 0056bc4c: ADD ESP,0x8
// 0056bc4f: MOV EBX,dword ptr [0x02d7a738]
//   Label: LAB_0056bc4f
//   XREF to: 02d7a738 (READ)
// 0056bc55: PUSH EBX
// 0056bc56: MOV EAX,dword ptr [ESI + 0x14d158]
// 0056bc5c: PUSH EAX
// 0056bc5d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0056bc62: MOV EBX,EAX
// 0056bc64: ADD ESP,0x8
// 0056bc67: TEST EAX,EAX
// 0056bc69: JZ 0x0056bc91
//   XREF to: 0056bc91 (CONDITIONAL_JUMP)
// 0056bc6b: PUSH 0x0
// 0056bc6d: PUSH 0x0
// 0056bc6f: ADD EAX,0x20
// 0056bc72: PUSH 0x0
// 0056bc74: PUSH EAX
// 0056bc75: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0056bc7b: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 0056bc7c: CALL core_fire.cpp_CFireEffect_FUN_004c8c90
//   XREF to: 004c8c90 (UNCONDITIONAL_CALL)
// 0056bc81: ADD ESP,0x14
// 0056bc84: TEST EAX,EAX
// 0056bc86: JZ 0x0056bc91
//   XREF to: 0056bc91 (CONDITIONAL_JUMP)
// 0056bc88: PUSH EBX
// 0056bc89: CALL core_flamecan.cpp_FUN_004cb340
//   XREF to: 004cb340 (UNCONDITIONAL_CALL)
// 0056bc8e: ADD ESP,0x4
// 0056bc91: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0056bc91
//   XREF to: Stack[0x4] (READ)
// 0056bc94: INC EDI
// 0056bc95: MOV EDX,dword ptr [EAX + 0x14d154]
// 0056bc9b: ADD ESI,0x4
// 0056bc9e: CMP EDI,EDX
// 0056bca0: JL 0x0056bad4
//   XREF to: 0056bad4 (CONDITIONAL_JUMP)
// 0056bca6: MOV EAX,[0x0067b654]
//   Label: LAB_0056bca6
//   XREF to: 0067b654 (READ)
// 0056bcab: MOV ECX,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 0056bcb1: TEST ECX,ECX
// 0056bcb3: JZ 0x0056be30
//   XREF to: 0056be30 (CONDITIONAL_JUMP)
// 0056bcb9: CMP ECX,0x2
// 0056bcbc: JNZ 0x0056bde0
//   XREF to: 0056bde0 (CONDITIONAL_JUMP)
// 0056bcc2: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 0056bcc9: XOR ESI,ESI
// 0056bccb: DEC EAX
// 0056bccc: MOV dword ptr [ESP + 0x7c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0056bcd0: MOV dword ptr [ESP + 0x80],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0056bcd7: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0056bcdb: TEST EAX,EAX
// 0056bcdd: JLE 0x0056bd7d
//   XREF to: 0056bd7d (CONDITIONAL_JUMP)
// 0056bce3: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 0056bcea: SHL EAX,0x2
// 0056bced: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056bcf1: MOV EBX,dword ptr [ESP + 0x80]
//   Label: LAB_0056bcf1
// 0056bcf8: MOV EDX,dword ptr [ESP + 0x88]
// 0056bcff: INC EBX
// 0056bd00: CMP EBX,EDX
// 0056bd02: JGE 0x0056bd57
//   XREF to: 0056bd57 (CONDITIONAL_JUMP)
// 0056bd04: MOV ECX,dword ptr [ESP + 0x6c]
// 0056bd08: MOV EDX,dword ptr [ESP + 0x7c]
// 0056bd0c: LEA EAX,[EBX*0x4 + 0x0]
// 0056bd13: MOV EDI,dword ptr [EAX + 0x32bd794]
//   Label: LAB_0056bd13
//   XREF to: 032bd794 (DATA)
//   XREF to: 032bd798 (DATA)
// 0056bd19: MOV ESI,dword ptr [EDX + 0x32bd794]
//   XREF to: 032bd794 (DATA)
//   XREF to: 032bd798 (DATA)
// 0056bd1f: CMP ESI,EDI
// 0056bd21: JGE 0x0056bd4f
//   XREF to: 0056bd4f (CONDITIONAL_JUMP)
// 0056bd23: MOV EDI,ESI
// 0056bd25: MOV ESI,dword ptr [EAX + 0x32bd794]
//   XREF to: 032bd794 (DATA)
// 0056bd2b: MOV dword ptr [EDX + 0x32bd794],ESI
//   XREF to: 032bd794 (DATA)
//   XREF to: 032bd798 (DATA)
// 0056bd31: MOV dword ptr [EAX + 0x32bd794],EDI
//   XREF to: 032bd794 (DATA)
// 0056bd37: MOV EDI,dword ptr [EAX + 0x32bf6d4]
//   XREF to: 032bf6d4 (DATA)
// 0056bd3d: MOV ESI,dword ptr [EDX + 0x32bf6d4]
//   XREF to: 032bf6d4 (DATA)
// 0056bd43: MOV dword ptr [EDX + 0x32bf6d4],EDI
//   XREF to: 032bf6d4 (DATA)
// 0056bd49: MOV dword ptr [EAX + 0x32bf6d4],ESI
//   XREF to: 032bf6d4 (DATA)
// 0056bd4f: ADD EAX,0x4
//   Label: LAB_0056bd4f
// 0056bd52: INC EBX
// 0056bd53: CMP EAX,ECX
// 0056bd55: JL 0x0056bd13
//   XREF to: 0056bd13 (CONDITIONAL_JUMP)
// 0056bd57: MOV ECX,dword ptr [ESP + 0x7c]
//   Label: LAB_0056bd57
// 0056bd5b: MOV EBX,dword ptr [ESP + 0x80]
// 0056bd62: MOV ESI,dword ptr [ESP + 0x70]
// 0056bd66: ADD ECX,0x4
// 0056bd69: INC EBX
// 0056bd6a: MOV dword ptr [ESP + 0x7c],ECX
// 0056bd6e: MOV dword ptr [ESP + 0x80],EBX
// 0056bd75: CMP EBX,ESI
// 0056bd77: JL 0x0056bcf1
//   XREF to: 0056bcf1 (CONDITIONAL_JUMP)
// 0056bd7d: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_0056bd7d
// 0056bd84: MOV EDI,0x14
// 0056bd89: CMP EAX,EDI
// 0056bd8b: JGE 0x0056bd8f
//   XREF to: 0056bd8f (CONDITIONAL_JUMP)
// 0056bd8d: MOV EDI,EAX
// 0056bd8f: XOR ESI,ESI
//   Label: LAB_0056bd8f
// 0056bd91: TEST EDI,EDI
// 0056bd93: JLE 0x0056bde0
//   XREF to: 0056bde0 (CONDITIONAL_JUMP)
// 0056bd95: XOR EBX,EBX
// 0056bd97: FILD dword ptr [EBX + 0x32bd794]
//   Label: LAB_0056bd97
//   XREF to: 032bd794 (READ)
//   XREF to: 032bd798 (READ)
// 0056bd9d: FMUL double ptr [0x00645d1b]
//   XREF to: 00645d1b (READ)
// 0056bda3: FMUL double ptr [0x00645d23]
//   XREF to: 00645d23 (READ)
// 0056bda9: FMUL double ptr [0x00645d2b]
//   XREF to: 00645d2b (READ)
// 0056bdaf: FDIV float ptr [ESP]
// 0056bdb2: SUB ESP,0x8
// 0056bdb5: FSTP double ptr [ESP]
// 0056bdb8: MOV ECX,dword ptr [EBX + 0x32bf6d4]
//   XREF to: 032bf6d4 (READ)
//   XREF to: 032bf6d8 (READ)
// 0056bdbe: PUSH ECX
// 0056bdbf: PUSH ESI
// 0056bdc0: PUSH 0x645ccf
//   XREF to: 00645ccf (DATA)
// 0056bdc5: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0056bdca: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 0056bdcb: ADD EBX,0x4
// 0056bdce: INC ESI
// 0056bdcf: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0056bdd4: ADD ESP,0x18
// 0056bdd7: CMP ESI,EDI
// 0056bdd9: JL 0x0056bd97
//   XREF to: 0056bd97 (CONDITIONAL_JUMP)
// 0056bddb: LEA EAX,[EAX]
// 0056bdde: MOV ECX,ECX
// 0056bde0: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_0056bde0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056bde5: MOV EDX,dword ptr [ESP + 0x68]
// 0056bde9: SUB EAX,EDX
// 0056bdeb: MOV dword ptr [ESP + 0x90],EAX
// 0056bdf2: FILD dword ptr [ESP + 0x90]
// 0056bdf9: FMUL double ptr [0x00645d1b]
//   XREF to: 00645d1b (READ)
// 0056bdff: FMUL double ptr [0x00645d23]
//   XREF to: 00645d23 (READ)
// 0056be05: FMUL double ptr [0x00645d2b]
//   XREF to: 00645d2b (READ)
// 0056be0b: FDIV float ptr [ESP]
// 0056be0e: SUB ESP,0x8
// 0056be11: MOV ECX,dword ptr [ESP + 0x90]
// 0056be18: FSTP double ptr [ESP]
// 0056be1b: PUSH ECX
// 0056be1c: PUSH 0x645ce2
//   XREF to: 00645ce2 (DATA)
// 0056be21: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0056be27: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 0056be28: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0056be2d: ADD ESP,0x14
// 0056be30: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0056be30
//   XREF to: Stack[0x4] (READ)
// 0056be33: MOV ESI,dword ptr [EAX + 0x14d154]
// 0056be39: XOR EBX,EBX
// 0056be3b: TEST ESI,ESI
// 0056be3d: JLE 0x0056be70
//   XREF to: 0056be70 (CONDITIONAL_JUMP)
// 0056be3f: MOV ESI,EAX
// 0056be41: PUSH 0x654
//   Label: LAB_0056be41
// 0056be46: PUSH 0x645d07
//   XREF to: 00645d07 (DATA)
// 0056be4b: MOV EDI,dword ptr [ESI + 0x14d158]
// 0056be51: PUSH EDI
// 0056be52: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0056be57: ADD ESP,0xc
// 0056be5a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056be5d: INC EBX
// 0056be5e: MOV EDX,dword ptr [EAX + 0x14d154]
// 0056be64: ADD ESI,0x4
// 0056be67: CMP EBX,EDX
// 0056be69: JL 0x0056be41
//   XREF to: 0056be41 (CONDITIONAL_JUMP)
// 0056be6b: LEA EAX,[EAX]
// 0056be6e: MOV ECX,ECX
// 0056be70: MOV ESP,EBP
//   Label: LAB_0056be70
// 0056be72: POP EBP
// 0056be73: POP EDI
// 0056be74: POP ESI
// 0056be75: POP EBX
// 0056be76: RET
