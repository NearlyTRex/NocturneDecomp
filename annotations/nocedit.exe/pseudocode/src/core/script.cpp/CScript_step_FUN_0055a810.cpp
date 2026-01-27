// Name: core_script.cpp_CScript_step_FUN_0055a810
// Address: 0055a810
// Address Range: [[0055a810, 0055c9e6] [0055ca7e, 0055fef3]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_step_FUN_0055a810()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: byte core_script.cpp_CScript_step(CScript* pScript, uint param_2) */

int core_script_cpp_CScript_step_FUN_0055a810(void)

{
  float fVar1;
  double dVar2;
  byte bVar3;
  char cVar4;
  CScript *pCVar5;
  CGame *pCVar6;
  byte *pbVar7;
  int iVar8;
  CMotionList *this_ptr;
  uint uVar9;
  CCharacter *pCVar10;
  uint *puVar11;
  CDemonActor *pCVar12;
  CVector3f *pCVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  byte bVar21;
  uint *in_stack_00000004;
  float local_3f80;
  float local_3f7c;
  float local_3f78;
  float local_3f74;
  float local_3f70;
  CIniFile local_3f6c;
  CIniFile local_3d6c;
  char local_3b6c [500];
  char local_3978 [800];
  byte local_3658 [300];
  char local_352c [300];
  byte local_3400 [300];
  byte local_32d4 [200];
  byte local_320c [200];
  byte local_3144 [200];
  byte local_307c [200];
  byte local_2fb4 [200];
  byte local_2eec [400];
  char local_2d5c [200];
  byte local_2c94 [200];
  byte local_2bcc [200];
  byte local_2b04 [200];
  byte local_2a3c [200];
  byte local_2974 [200];
  byte local_28ac [200];
  byte local_27e4 [200];
  byte local_271c [200];
  char local_2654 [200];
  byte local_258c [200];
  byte local_24c4 [200];
  byte local_23fc [200];
  char local_2334 [200];
  char local_226c [200];
  byte local_21a4 [200];
  byte local_20dc [200];
  char local_2014 [200];
  char local_1f4c [200];
  byte local_1e84 [200];
  char local_1dbc [200];
  byte local_1cf4 [200];
  byte local_1c2c [200];
  byte local_1b64 [200];
  byte local_1a9c [200];
  byte local_19d4 [200];
  byte local_190c [200];
  byte local_1844 [200];
  byte local_177c [200];
  byte local_16b4 [200];
  byte local_15ec [200];
  byte local_1524 [200];
  byte local_145c [200];
  byte local_1394 [200];
  byte local_12cc [200];
  char local_1204 [200];
  char local_113c [200];
  byte local_1074 [199];
  byte abStack_fad [201];
  byte local_ee4 [200];
  char local_e1c [200];
  char local_d54 [200];
  int local_c8c [30];
  char local_c14 [100];
  char local_bb0 [100];
  char local_b4c [100];
  byte local_ae8 [100];
  char local_a84 [300];
  char local_958 [100];
  byte local_8f4 [100];
  char local_890 [100];
  char local_82c [100];
  byte local_7c8 [100];
  byte local_764 [100];
  byte local_700 [100];
  char local_69c [100];
  byte local_638 [100];
  byte local_5d4 [100];
  char local_570 [100];
  byte local_50c [100];
  byte local_4a8 [100];
  char local_444 [100];
  char local_3e0;
  char local_37c [100];
  char local_318 [100];
  char local_2b4 [100];
  char local_250 [100];
  char local_1ec [100];
  CMatrix3x3f local_188;
  CVector3f local_160;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f local_13c [2];
  uint local_124;
  int local_120;
  byte *local_11c;
  C3DSLight *local_118;
  uint local_114;
  int local_110;
  int local_10c;
  int local_108;
  char *local_104;
  int local_fc;
  char *local_f8;
  char *local_f4;
  CCharacter *local_f0;
  uint local_ec;
  int local_e8;
  char *local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  byte local_ac [4];
  int local_a8;
  float local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  byte local_94 [4];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  CDemonActor *local_7c;
  int local_78;
  int local_74;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte local_30 [4];
  int local_2c;
  int local_28;
  byte local_24 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  float local_14;
  
  bVar21 = 0;
  if (((int)in_stack_00000004[0x12] < 0) ||
     ((int)in_stack_00000004[0xc] <= (int)in_stack_00000004[0x12])) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x46d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar18 = "(no error message provided)";
  pcVar20 = &DAT_0310eca0;
  do {
    cVar4 = *pcVar18;
    *pcVar20 = cVar4;
    if (cVar4 == '\0') break;
    cVar4 = pcVar18[1];
    pcVar18 = pcVar18 + 2;
    pcVar20[1] = cVar4;
    pcVar20 = pcVar20 + 2;
  } while (cVar4 != '\0');
  pcVar18 = *(char **)(in_stack_00000004[0xd] + 4 + in_stack_00000004[0x12] * 8);
  local_124 = *(uint *)(in_stack_00000004[0xd] + in_stack_00000004[0x12] * 8);
  local_110 = in_stack_00000004[0x12];
  local_114 = 1;
  in_stack_00000004[0x12] = local_110 + 1;
  cVar4 = *pcVar18;
  if ((cVar4 == '{') || (cVar4 == '}')) {
    local_11c = &DAT_00641c5a;
  }
  else if (cVar4 == ':') {
    local_11c = (byte *)core_script_cpp_FUN_005593d0();
    dVar2 = (double)CONCAT44(local_124,local_11c);
    if (DAT_0310ec9c != 0) {
      bVar21 = *local_11c;
      pbVar17 = local_11c;
      for (pbVar7 = local_11c;
          (bVar21 != 0 &&
          ((pbVar17 = (byte *)(uint)(byte)(*pbVar7 + 1), (pbVar17[0x6849c4] & 0xe0) != 0 ||
           (*pbVar7 == 0x5f)))); pbVar7 = pbVar7 + 1) {
        bVar21 = pbVar7[1];
        pbVar17 = (byte *)(uint)bVar21;
      }
      if (*pbVar7 != 0) {
        pcVar18 = "Invalid label \"%s\" on line";
        goto LAB_0055a97f;
      }
      iVar8 = core_script_cpp_FUN_00560160(local_11c,pbVar17);
      if (iVar8 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x49f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Internal script error checking for duplicate label.");
      }
      if (iVar8 != local_110) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&DAT_0310eca0,"Duplicate label %s on lines %d and %d",local_11c,local_124,
                   *(uint *)(in_stack_00000004[0xd] + iVar8 * 8));
        return -1;
      }
    }
    local_11c = &DAT_00641ce3;
  }
  else {
    iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"syntaxCheckOn",0xd);
    if ((iVar8 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)) {
      if (DAT_0310ec9c != 0) {
        DAT_0310ec9c = 1;
      }
      local_11c = &DAT_00641cf2;
    }
    else {
      iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"syntaxCheckOff",0xe);
      if ((iVar8 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar18[0xe] + 1)] & 0xe0U) == 0))
      {
        if (DAT_0310ec9c != 0) {
          DAT_0310ec9c = 2;
        }
        local_11c = &DAT_00641d02;
      }
      else if (DAT_0310ec9c != 2) {
        iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"advanceLightFilter",0x12);
        if (((((((((iVar8 == 0) &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0x12] + 1)] & 0xe0U) == 0)) ||
                 ((iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                     (pcVar18,"createExplosion",0xf), iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0xf] + 1)] & 0xe0U) == 0)))) ||
                ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"deleteActor",0xb),
                 iVar8 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[0xb] + 1)] & 0xe0U) == 0)))) ||
               ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"displayBitmap",0xd),
                iVar8 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)))) ||
              (((((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"hurtCharacter",0xd),
                  iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)) ||
                 ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"incCounter",10),
                  iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0U) == 0)))) ||
                ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"fadeSfx",7),
                 iVar8 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[7] + 1)] & 0xe0U) == 0)))) ||
               ((iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                   (pcVar18,"fadeAmbientSound",0x10), iVar8 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar18[0x10] + 1)] & 0xe0U) == 0)))))) ||
             ((((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"flagOn",6), iVar8 == 0
                && ((g_CharacterClassificationTable[(byte)(pcVar18[6] + 1)] & 0xe0U) == 0)) ||
               ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"flagOff",7),
                iVar8 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar18[7] + 1)] & 0xe0U) == 0)))) ||
              ((((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"gameFlagOn",10),
                 iVar8 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0U) == 0)) ||
                ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"gameFlagOff",0xb),
                 iVar8 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[0xb] + 1)] & 0xe0U) == 0)))) ||
               ((((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"killCharacter",0xd),
                  iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)) ||
                 ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"killHero",8),
                  iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[8] + 1)] & 0xe0U) == 0)))) ||
                ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"killSfx",7),
                 iVar8 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[7] + 1)] & 0xe0U) == 0)))))))))) ||
            ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"lightning",9), iVar8 == 0
             && ((g_CharacterClassificationTable[(byte)(pcVar18[9] + 1)] & 0xe0U) == 0)))) ||
           ((((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"playSfx",7), iVar8 == 0
              && ((g_CharacterClassificationTable[(byte)(pcVar18[7] + 1)] & 0xe0U) == 0)) ||
             ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"setCameraAmbient",0x10),
              iVar8 == 0 &&
              ((g_CharacterClassificationTable[(byte)(pcVar18[0x10] + 1)] & 0xe0U) == 0)))) ||
            ((((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"setCounter",10),
               iVar8 == 0 &&
               ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0U) == 0)) ||
              (((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"setGroupAmbient",0xf),
                iVar8 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar18[0xf] + 1)] & 0xe0U) == 0)) ||
               ((((iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                     (pcVar18,"setLightFilterFrame",0x13), iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0x13] + 1)] & 0xe0U) == 0)) ||
                 ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"setLeverState",0xd),
                  iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)))) ||
                ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"setModelState",0xd),
                 iVar8 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)))))))) ||
             (((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"setTimer",8),
               iVar8 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar18[8] + 1)] & 0xe0U) == 0)
               ) || (((((iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                           (pcVar18,"setWeather",10), iVar8 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0U) == 0)) ||
                       ((iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                           (pcVar18,"shakeScreen",0xb), iVar8 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar18[0xb] + 1)] & 0xe0U) == 0))))
                      || ((iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                             (pcVar18,"slamModelToMotion",0x11), iVar8 == 0
                          && ((g_CharacterClassificationTable[(byte)(pcVar18[0x11] + 1)] & 0xe0U) ==
                              0)))) ||
                     ((iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"warpTo",6),
                      iVar8 == 0 &&
                      ((g_CharacterClassificationTable[(byte)(pcVar18[6] + 1)] & 0xe0U) == 0))))))))
            )))) {
          if (DAT_0310ec9c == 0) {
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          }
          else {
            pcVar18 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
            if (pcVar18 != (char *)0x0) goto LAB_0055bb9d;
          }
          local_11c = &DAT_00641e5e;
        }
        else {
          iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"addItemToInventory",0x12);
          if ((iVar8 == 0) &&
             ((g_CharacterClassificationTable[(byte)(pcVar18[0x12] + 1)] & 0xe0U) == 0)) {
            local_11c = (byte *)core_script_cpp_FUN_005593d0();
            local_e8 = -1;
            crt_stdio_c_sscanf_FUN_0060013c
                      ((char *)local_11c," ( %[^,], %[^)])%n",local_ee4,local_27e4,&local_e8);
            if (local_e8 < 3) {
              crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_11c = local_11c + local_e8;
            core_script_cpp_FUN_00559360();
            core_script_cpp_FUN_00559360();
            iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0();
            if ((iVar8 == 0) ||
               (pCVar12 = (CDemonActor *)core_script_cpp_GetDemonActor_FUN_005594e0(),
               pCVar12 == (CDemonActor *)0x0)) goto joined_r0x0055c026;
            if (DAT_0310ec9c == 0) {
              core_inv_cpp_CInventory_addItem_FUN_004fd600
                        ((CInventory *)(iVar8 + 0x1f738),pCVar12,0);
            }
          }
          else {
            iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"addLightFilter",0xe);
            if ((iVar8 == 0) &&
               ((g_CharacterClassificationTable[(byte)(pcVar18[0xe] + 1)] & 0xe0U) == 0)) {
              local_11c = (byte *)core_script_cpp_FUN_005593d0();
              local_e0 = -1;
              crt_stdio_c_sscanf_FUN_0060013c
                        ((char *)local_11c,"( %[^,], %[^,], %f )%n",local_5d4,local_250,&local_a4,&local_e0);
              if (local_e0 < 5) {
                crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_11c = local_11c + local_e0;
              core_set_cpp_CDemonSet_FUN_00570f10(g_CDemonSetPtr);
              if (local_118 == (C3DSLight *)0x0) {
                crt_stdio_c_sprintf_FUN_005fdbd0
                          (&DAT_0310eca0,"Light \"%s\" does not exist",local_5d4);
                return -1;
              }
              iVar8 = engine_dosio_c_getFileSize_FUN_00481880("art",local_250);
              if (iVar8 < 1) {
                crt_stdio_c_sprintf_FUN_005fdbd0
                          (&DAT_0310eca0,"Can't open filter \"%s\"",local_250);
                return -1;
              }
              if (DAT_0310ec9c == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(local_118,local_250,local_a4,0);
              }
            }
            else {
              iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"allowEnemyAttack",0x10);
              if ((iVar8 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[0x10] + 1)] & 0xe0U) == 0)) {
                local_11c = (byte *)core_script_cpp_FUN_005593d0();
                pcVar18 = (char *)core_script_cpp_FUN_005594a0();
                if (pcVar18 != (char *)0x0) {
LAB_0055bb9d:
                  pcVar20 = &DAT_0310eca0;
                  do {
                    cVar4 = *pcVar18;
                    *pcVar20 = cVar4;
                    if (cVar4 == '\0') {
                      return -1;
                    }
                    cVar4 = pcVar18[1];
                    pcVar18 = pcVar18 + 2;
                    pcVar20[1] = cVar4;
                    pcVar20 = pcVar20 + 2;
                  } while (cVar4 != '\0');
                  return -1;
                }
                if (DAT_0310ec9c == 0) {
                  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                    (g_CEventListPtr,local_958);
                  g_CGamePtr->allow_enemy_attack_flag = iVar8;
                }
              }
              else {
                iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                  (pcVar18,"allowHeroControls",0x11);
                if ((iVar8 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(pcVar18[0x11] + 1)] & 0xe0U) == 0)) {
                  local_11c = (byte *)core_script_cpp_FUN_005593d0();
                  pcVar18 = (char *)core_script_cpp_FUN_005594a0();
                  if (pcVar18 != (char *)0x0) goto LAB_0055bb9d;
                  if (DAT_0310ec9c == 0) {
                    iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                      (g_CEventListPtr,local_bb0);
                    DAT_0310f4a4 = (uint)(iVar8 == 0);
                    g_CGamePtr->allow_hero_controls_flag = DAT_0310f4a4;
                  }
                }
                else {
                  iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"allowHeroDamage",0xf)
                  ;
                  if ((iVar8 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(pcVar18[0xf] + 1)] & 0xe0U) == 0)) {
                    local_11c = (byte *)core_script_cpp_FUN_005593d0();
                    pcVar18 = (char *)core_script_cpp_FUN_005594a0();
                    if (pcVar18 != (char *)0x0) goto LAB_0055bb9d;
                    if (DAT_0310ec9c == 0) {
                      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                        (g_CEventListPtr,local_a84);
                      g_CGamePtr->allow_damage_flag = iVar8;
                    }
                  }
                  else {
                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                      (pcVar18,"attachActorToPlatform",0x15);
                    if ((iVar8 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(pcVar18[0x15] + 1)] & 0xe0U) == 0)) {
                      local_11c = (byte *)core_script_cpp_FUN_005593d0();
                      local_10c = -1;
                      crt_stdio_c_sscanf_FUN_0060013c
                                ((char *)local_11c,"(%[^,], %[^)])%n",local_190c,local_1a9c,&local_10c);
                      if (local_10c < 2) {
                        crt_stdio_c_sprintf_FUN_005fdbd0
                                  (&DAT_0310eca0,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_11c = local_11c + local_10c;
                      core_script_cpp_FUN_00559360();
                      core_script_cpp_FUN_00559360();
                      iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0();
                      if ((iVar8 == 0) ||
                         (iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0(), iVar8 == 0))
                      goto joined_r0x0055c026;
                      if (DAT_0310ec9c == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0();
                      }
                    }
                    else {
                      iVar8 = crt_string_c_strnicmp_FUN_005ff070(pcVar18,"beginFadeIn",0xb)
                      ;
                      if ((iVar8 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(pcVar18[0xb] + 1)] & 0xe0U) == 0))
                      {
                        local_11c = (byte *)core_script_cpp_FUN_005593d0();
                        if (DAT_0310ec9c == 0) {
                          core_game_cpp_CGame_beginFadeIn_FUN_004e0920(g_CGamePtr);
                        }
                      }
                      else {
                        iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                          (pcVar18,"beginFadeOut",0xc);
                        if ((iVar8 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(pcVar18[0xc] + 1)] & 0xe0U) == 0)
                           ) {
                          local_11c = (byte *)core_script_cpp_FUN_005593d0();
                          if (DAT_0310ec9c == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004e0960(g_CGamePtr);
                          }
                        }
                        else {
                          iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                            (pcVar18,"breakPoint",10);
                          if ((iVar8 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0U) == 0
                             )) {
                            local_11c = (byte *)core_script_cpp_FUN_005593d0();
                            if (DAT_0310ec9c == 0) {
                              crt_stdio_c_sprintf_FUN_005fdbd0
                                        (local_890,"Script breakpoint reached at line %d",local_124);
                              core_game_cpp_CGame_displayMessage_FUN_004d7f20
                                        (g_CGamePtr,local_890,5.0);
                              in_stack_00000004[6] = 2;
                            }
                          }
                          else {
                            iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                              (pcVar18,"cancelCameraHold",0x10);
                            if ((iVar8 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(pcVar18[0x10] + 1)] & 0xe0U)
                                == 0)) {
                              local_11c = (byte *)core_script_cpp_FUN_005593d0();
                              if (DAT_0310ec9c == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
                                          (g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                (pcVar18,"cancelWalkTo",0xc);
                              if ((iVar8 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(pcVar18[0xc] + 1)] & 0xe0U)
                                  == 0)) {
                                local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                if (pcVar18 != (char *)0x0) {
                                  pcVar20 = &DAT_0310eca0;
                                  do {
                                    cVar4 = *pcVar18;
                                    *pcVar20 = cVar4;
                                    if (cVar4 == '\0') {
                                      return -1;
                                    }
                                    cVar4 = pcVar18[1];
                                    pcVar18 = pcVar18 + 2;
                                    pcVar20[1] = cVar4;
                                    pcVar20 = pcVar20 + 2;
                                  } while (cVar4 != '\0');
                                  return -1;
                                }
                                iVar8 = crt_string_c_stricmp_FUN_005fe7f0(local_2334,"all")
                                ;
                                if (iVar8 == 0) {
                                  if (DAT_0310ec9c == 0) {
                                    iVar14 = 0;
                                    for (iVar8 = 0; iVar8 < (int)g_CDemonSetPtr->actor_list_ptr;
                                        iVar8 = iVar8 + 1) {
                                      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                                                          (*(CDemonActor **)
                                                            (g_CDemonSetPtr->actor_list_data +
                                                            iVar14),g_CCharacterClassInfo.name_hash)
                                      ;
                                      if (pCVar12 != (CDemonActor *)0x0) {
                                        (*(((pCVar12->vtable)._uc)->_uc).cfunc23)();
                                      }
                                      iVar14 = iVar14 + 4;
                                    }
                                  }
                                }
                                else {
                                  iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0();
                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                  if (DAT_0310ec9c == 0) {
                                    (**(code **)(*(int *)(iVar8 + 0x154) + 0x144))();
                                  }
                                }
                              }
                              else {
                                iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                  (pcVar18,"chainToMission",0xe);
                                if ((iVar8 == 0) &&
                                   ((g_CharacterClassificationTable[(byte)(pcVar18[0xe] + 1)] &
                                    0xe0U) == 0)) {
                                  local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                  pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                  if (pcVar18 != (char *)0x0) {
                                    pcVar20 = &DAT_0310eca0;
                                    do {
                                      cVar4 = *pcVar18;
                                      *pcVar20 = cVar4;
                                      if (cVar4 == '\0') {
                                        return -1;
                                      }
                                      cVar4 = pcVar18[1];
                                      pcVar18 = pcVar18 + 2;
                                      pcVar20[1] = cVar4;
                                      pcVar20 = pcVar20 + 2;
                                    } while (cVar4 != '\0');
                                    return -1;
                                  }
                                  core_script_cpp_FUN_00559360();
                                  uVar15 = DAT_0310ec9c;
                                  if (DAT_0310ec9c == 0) {
                                    core_mission_cpp_CDemonMission_FUN_00524630(g_CDemonMissionPtr);
                                    *in_stack_00000004 = 1;
                                    local_114 = uVar15;
                                  }
                                }
                                else {
                                  iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                    (pcVar18,"clearActorVariable",0x12);
                                  if ((iVar8 == 0) &&
                                     ((g_CharacterClassificationTable[(byte)(pcVar18[0x12] + 1)] &
                                      0xe0U) == 0)) {
                                    local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                    pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                    if (pcVar18 != (char *)0x0) {
LAB_0055c37e:
                                      pcVar20 = &DAT_0310eca0;
                                      do {
                                        cVar4 = *pcVar18;
                                        *pcVar20 = cVar4;
                                        if (cVar4 == '\0') {
                                          return -1;
                                        }
                                        cVar4 = pcVar18[1];
                                        pcVar18 = pcVar18 + 2;
                                        pcVar20[1] = cVar4;
                                        pcVar20 = pcVar20 + 2;
                                      } while (cVar4 != '\0');
                                      return -1;
                                    }
                                    iVar8 = core_script_cpp_CheckingActorVariableName_FUN_00559220()
                                    ;
                                    if (iVar8 == 0) {
                                      return -1;
                                    }
                                    if (DAT_0310ec9c == 0) {
                                      core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                (g_CEventListPtr);
                                    }
                                  }
                                  else {
                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                      (pcVar18,"dbSay",5);
                                    if ((iVar8 == 0) &&
                                       ((g_CharacterClassificationTable[(byte)(pcVar18[5] + 1)] &
                                        0xe0U) == 0)) {
                                      local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                      local_108 = -1;
                                      crt_stdio_c_sscanf_FUN_0060013c
                                                ((char *)local_11c,"(%[^)])%n",local_c14,&local_108
                                                );
                                      if (local_108 < 3) {
                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                  (&DAT_0310eca0,"Error parsing dbSay arguments"
                                                  );
                                        return -1;
                                      }
                                      core_script_cpp_FUN_00559360();
                                      local_11c = local_11c + local_108;
                                      iVar8 = core_script_cpp_FUN_005606e0();
                                      if (iVar8 < 0) {
                                        local_104 = local_226c;
                                        local_e4 = "$";
                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                  (local_226c,"[Can't find %s in database]",
                                                   local_c14);
                                        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                                  (&DAT_0310f4b0.base,local_226c);
                                      }
                                      else {
                                        iVar8 = iVar8 * 0x226 + in_stack_00000004[8];
                                        local_e4 = (char *)(iVar8 + 0x78);
                                        local_104 = (char *)(iVar8 + 0x96);
                                        pcVar20 = local_c14;
                                        pcVar18 = (char *)(iVar8 + 0x3c);
                                        do {
                                          cVar4 = *pcVar18;
                                          *pcVar20 = cVar4;
                                          if (cVar4 == '\0') break;
                                          cVar4 = pcVar18[1];
                                          pcVar18 = pcVar18 + 2;
                                          pcVar20[1] = cVar4;
                                          pcVar20 = pcVar20 + 2;
                                        } while (cVar4 != '\0');
                                      }
                                      if ((float)in_stack_00000004[0x14] < 0.0) {
                                        local_14 = (float)core_script_cpp_FUN_0055ff00();
                                        in_stack_00000004[0x14] = local_14;
                                        if ((float)in_stack_00000004[0x14] < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((DAT_0310ec9c == 0) &&
                                         (local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (), 0 < (int)local_114)) {
                                        core_script_cpp_FUN_00560140();
                                      }
                                    }
                                    else {
                                      iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                        (pcVar18,"dbStartSay",10);
                                      if ((iVar8 == 0) &&
                                         ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] &
                                          0xe0U) == 0)) {
                                        local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                        local_fc = -1;
                                        crt_stdio_c_sscanf_FUN_0060013c
                                                  ((char *)local_11c,"(%[^)])%n",local_1ec,
                                                   &local_fc);
                                        if (local_fc < 3) {
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (&DAT_0310eca0,
                                                     "Error parsing dbSay arguments");
                                          return -1;
                                        }
                                        core_script_cpp_FUN_00559360();
                                        local_11c = local_11c + local_fc;
                                        iVar8 = core_script_cpp_FUN_005606e0();
                                        if (iVar8 < 0) {
                                          local_f4 = local_2654;
                                          local_f8 = "$";
                                          crt_stdio_c_sprintf_FUN_005fdbd0
                                                    (local_2654,"[Can't find %s in database]",
                                                     local_1ec);
                                          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                                    (&DAT_0310f4b0.base,local_2654);
                                        }
                                        else {
                                          iVar8 = iVar8 * 0x226 + in_stack_00000004[8];
                                          local_f8 = (char *)(iVar8 + 0x78);
                                          local_f4 = (char *)(iVar8 + 0x96);
                                          pcVar20 = local_1ec;
                                          pcVar18 = (char *)(iVar8 + 0x3c);
                                          do {
                                            cVar4 = *pcVar18;
                                            *pcVar20 = cVar4;
                                            if (cVar4 == '\0') break;
                                            cVar4 = pcVar18[1];
                                            pcVar18 = pcVar18 + 2;
                                            pcVar20[1] = cVar4;
                                            pcVar20 = pcVar20 + 2;
                                          } while (cVar4 != '\0');
                                        }
                                        local_14 = (float)core_script_cpp_FUN_0055ff00();
                                        in_stack_00000004[0x14] = local_14;
                                        fVar1 = (float)in_stack_00000004[0x14];
joined_r0x0055f6da:
                                        if (fVar1 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                          (pcVar18,"debug",5);
                                        if ((iVar8 == 0) &&
                                           ((g_CharacterClassificationTable[(byte)(pcVar18[5] + 1)]
                                            & 0xe0U) == 0)) {
                                          local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                          pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                          if (pcVar18 != (char *)0x0) goto LAB_0055c37e;
                                          if (DAT_0310ec9c == 0) {
                                            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                                                      (g_CEditorToolsPtr,
                                                       "Script debug message at line %d:\n%s",local_124
                                                       ,local_3658);
                                          }
                                        }
                                        else {
                                          iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                            (pcVar18,"dismember",9);
                                          if ((iVar8 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(pcVar18[9] + 1)] & 0xe0U) == 0)) {
                                            local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                            local_60 = -1;
                                            crt_stdio_c_sscanf_FUN_0060013c
                                                      ((char *)local_11c,"(%[^,], %[^,)]%n",local_3144,
                                                       local_1844,&local_60);
                                            if (local_60 < 5) {
                                              crt_stdio_c_sprintf_FUN_005fdbd0
                                                        (&DAT_0310eca0,
                                                         "Error parsing dismember command parms");
                                              return -1;
                                            }
                                            local_11c = local_11c + local_60;
                                            core_script_cpp_FUN_00559360();
                                            core_script_cpp_FUN_00559360();
                                            local_f0 = (CCharacter *)
                                                       core_script_cpp_GetDemonActor_FUN_005594e0();
                                            if (local_f0 == (CCharacter *)0x0)
                                            goto joined_r0x0055c026;
                                            iVar8 = core_script_cpp_FUN_00559730();
                                            if (iVar8 == 0) {
                                              return -1;
                                            }
                                            core_actor_cpp_CVector_ctor_FUN_00410340(&local_154);
                                            if (*local_11c == 0x2c) {
                                              local_60 = -1;
                                              crt_stdio_c_sscanf_FUN_0060013c
                                                        ((char *)local_11c,",%f ,%f ,%f ,%f %n",
                                                         &local_154,&local_154.y,&local_154.z,
                                                         &local_3f80,&local_60);
                                              if (local_60 < 5) {
                                                crt_stdio_c_sprintf_FUN_005fdbd0
                                                          (&DAT_0310eca0,
                                                           "Error parsing dismember command parms");
                                                return -1;
                                              }
                                              local_11c = local_11c + local_60;
                                              if (0.0 < local_3f80) {
                                                local_3f80 = local_3f80 * (float)3.1415926535000001 *
                                                             (float)0.0055555555555555497;
                                                local_14 = 
                                                  core_actor_cpp_getRandomFloat_FUN_0040cc10
                                                            (-local_3f80,local_3f80);
                                                local_14 = 
                                                  core_actor_cpp_getRandomFloat_FUN_0040cc10
                                                            (-local_3f80,local_3f80);
                                                pCVar13 = (CVector3f *)
                                                          core_script_cpp_FUN_00567d00();
                                                core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                                                          (&local_188,pCVar13);
                                                pCVar13 = 
                                                  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                                            (&local_188,local_13c,&local_154);
                                                core_actor_cpp_copyVector_FUN_00410360
                                                          (&local_154,pCVar13);
                                              }
                                            }
                                            if (*local_11c != 0x29) {
                                              crt_stdio_c_sprintf_FUN_005fdbd0
                                                        (&DAT_0310eca0,
                                                         "Error parsing dismember command parms near '%s'",
                                                         local_11c);
                                              return -1;
                                            }
                                            local_11c = local_11c + 1;
                                            if (DAT_0310ec9c == 0) {
                                              local_ec = 
                                                  core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
                                              iVar14 = 0;
                                              iVar8 = 0;
                                              do {
                                                if (*(int *)((int)local_c8c + iVar14) != 0) {
                                                  core_charactr_cpp_CCharacter_FUN_0042bd30
                                                            (local_f0);
                                                }
                                                iVar8 = iVar8 + 1;
                                                iVar14 = iVar14 + 4;
                                              } while (iVar8 < 0x1e);
                                              core_bodypart_cpp_FUN_0041a050();
                                            }
                                          }
                                          else {
                                            iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                              (pcVar18,"display",7);
                                            if ((iVar8 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(pcVar18[7] + 1)] & 0xe0U) == 0)) {
                                              local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                              iVar8 = core_script_cpp_FUN_005593f0();
                                              if (iVar8 != 0) {
                                                crt_stdio_c_sprintf_FUN_005fdbd0
                                                          (&DAT_0310eca0,
                                                           "Error parsing message text on display statament: %s",iVar8
                                                          );
                                                return -1;
                                              }
                                            }
                                            else {
                                              iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                (pcVar18,"else",4);
                                              if ((iVar8 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(pcVar18[4] + 1)] & 0xe0U) == 0)) {
                                                local_11c = (byte *)core_script_cpp_FUN_005593d0();
                                                iVar8 = core_script_cpp_FUN_005601c0();
                                                if (iVar8 < 0) {
                                                  crt_stdio_c_sprintf_FUN_005fdbd0
                                                            (&DAT_0310eca0,
                                                             "Can't skip next command after else statement on line %d",
                                                             local_124);
                                                  return -1;
                                                }
                                                in_stack_00000004[0x12] = iVar8;
                                              }
                                              else {
                                                iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                  (pcVar18,"enableCamera",
                                                                   0xc);
                                                if ((iVar8 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(pcVar18[0xc] + 1)] & 0xe0U) == 0)) {
                                                  local_11c = (byte *)core_script_cpp_FUN_005593d0()
                                                  ;
                                                  local_4c = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,], %[^)])%n",
                                                             local_307c,local_2d5c,&local_4c);
                                                  if (local_4c < 3) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing enableCamera parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_4c;
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_00559360();
                                                  iVar8 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                    (g_CDemonSetPtr);
                                                  if (iVar8 < 0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Camera \"%s\" does not exist.",
                                                               local_307c);
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_2d5c);
                                                  core_set_cpp_CDemonSet_FUN_00570ea0
                                                            (g_CDemonSetPtr);
                                                  }
                                                  else {
                                                    pcVar18 = (char *)
                                                  core_event_cpp_CEventList_FUN_004add00
                                                            (g_CEventListPtr);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_0310eca0;
                                                    do {
                                                      cVar4 = *pcVar18;
                                                      *pcVar20 = cVar4;
                                                      if (cVar4 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar4 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar4;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar4 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                    (pcVar18,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x11] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_48 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%d , %[^)])%n",
                                                               local_ac,local_1dbc,&local_48);
                                                    if (local_48 < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing enableCameraGroup parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_48;
                                                    core_script_cpp_FUN_00559360();
                                                    if (DAT_0310ec9c == 0) {
                                                                                                            
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_1dbc);
                                                  core_set_cpp_CDemonSet_FUN_00570ec0
                                                            (g_CDemonSetPtr);
                                                  }
                                                  else {
                                                    pcVar18 = (char *)
                                                  core_event_cpp_CEventList_FUN_004add00
                                                            (g_CEventListPtr);
                                                  if (pcVar18 != (char *)0x0) {
LAB_0055cd52:
                                                    pcVar20 = &DAT_0310eca0;
                                                    do {
                                                      cVar4 = *pcVar18;
                                                      *pcVar20 = cVar4;
                                                      if (cVar4 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar4 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar4;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar4 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xf] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_dc = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%[^,], %[^)])%n",
                                                               local_32d4,local_1f4c,&local_dc);
                                                    if (local_dc < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing enableHealthBar parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_dc;
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  iVar14 = crt_string_c_stricmp_FUN_005fe7f0
                                                                     (local_1f4c,"false");
                                                  uVar9 = 0;
                                                  if (iVar14 != 0) {
                                                    iVar14 = crt_string_c_stricmp_FUN_005fe7f0
                                                                       (local_1f4c,"true");
                                                    if (iVar14 == 0) {
                                                      uVar9 = 1;
                                                    }
                                                    else {
                                                      iVar14 = crt_string_c_stricmp_FUN_005fe7f0
                                                                         (local_1f4c,
                                                                          "always");
                                                      if (iVar14 != 0) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'",local_1f4c);
                                                  return -1;
                                                  }
                                                  uVar9 = 2;
                                                  }
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    *(uint *)(iVar8 + 0x2444) = uVar9;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"end",3);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[3] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  if (DAT_0310ec9c == 0) {
                                                    local_114 = DAT_0310ec9c;
                                                    *in_stack_00000004 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"fadeIn",6);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[6] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  if (DAT_0310ec9c == 0) {
                                                    local_114 = DAT_0310ec9c;
                                                    if (0.0 <= (float)in_stack_00000004[0x13]) {
                                                      iVar8 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004e0b90
                                                            (g_CGamePtr);
                                                  if (iVar8 != 0) {
                                                    local_114 = 1;
                                                    g_CGamePtr->allow_damage_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeIn_FUN_004e0920
                                                              (g_CGamePtr);
                                                    in_stack_00000004[0x13] = 0x3f800000;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"fadeOut",7)
                                                    ;
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[7] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  uVar15 = DAT_0310ec9c;
                                                  pCVar6 = g_CGamePtr;
                                                  if (DAT_0310ec9c == 0) {
                                                    g_CGamePtr->allow_damage_flag = 0;
                                                    local_114 = uVar15;
                                                    if (0.0 <= (float)in_stack_00000004[0x13]) {
                                                      iVar8 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004e0b90(pCVar6);
                                                  if (iVar8 != 0) {
                                                    local_114 = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeOut_FUN_004e0960
                                                              (pCVar6);
                                                    in_stack_00000004[0x13] = 0x3f800000;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"gesture",7)
                                                    ;
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[7] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_d8 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,], %[^)])%n",
                                                             local_23fc,local_19d4,&local_d8);
                                                  if (local_d8 < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing gesture command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_d8;
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_00559360();
                                                  pCVar10 = (CCharacter *)
                                                                                                                        
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    uVar15 = 
                                                  core_charactr_cpp_CCharacter_FUN_0042d390(pCVar10)
                                                  ;
                                                  }
                                                  else {
                                                    this_ptr = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            (&(pCVar10->model).motion_controller);
                                                  iVar8 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                            (this_ptr);
                                                  uVar15 = (uint)(-1 < iVar8);
                                                  }
                                                  if (uVar15 == 0) {
                                                    uVar9 = core_bugs_cpp_FUN_00427b70();
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Gesture name %s is not valid for actor %s, model %s",
                                                               local_19d4,local_23fc,uVar9);
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"getIniInt",
                                                                       9);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[9] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_d4 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,], %[^,)] )%n",
                                                             local_113c,local_1e84,&local_d4);
                                                  if (local_d4 < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing getIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_d4;
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_00559360();
                                                  if (DAT_0310ec9c == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004fba70
                                                              (&local_3d6c,
                                                               "system\\nocturne.ini",
                                                               0x64241a);
                                                    local_d0 = 
                                                  core_event_cpp_CEventList_FUN_004b0830
                                                            (g_CEventListPtr);
                                                  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
                                                            (&local_3d6c,local_113c,&local_d0);
                                                  core_event_cpp_CEventList_setCounter_FUN_004b0720
                                                            (g_CEventListPtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xf] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_cc = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%[^,], %[^)])%n",
                                                               local_1074,local_1b64,&local_cc);
                                                    if (local_cc < 5) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing getTriggerActor command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_cc;
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_CheckingActorVariableName_FUN_00559220
                                                            ();
                                                  if (iVar8 == 0) {
                                                    return -1;
                                                  }
                                                  iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0
                                                                    ();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                            (g_CEventListPtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"gosub",5);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[5] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  iVar8 = core_script_cpp_FUN_00560160();
                                                  if (iVar8 < 0) {
                                                    dVar2 = (double)CONCAT44(local_124,local_11c);
                                                    pcVar18 = "Undefined label %s used in gosub statement on line %d";
LAB_0055a97f:
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,pcVar18,SUB84(dVar2,0),
                                                               (int)((ulonglong)dVar2 >> 0x20));
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    if (7 < (int)in_stack_00000004[0x117]) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Call stack overflow detected on script line %d."
                                                                 ,local_124);
                                                      return -1;
                                                    }
                                                    in_stack_00000004
                                                    [in_stack_00000004[0x117] + 0x118] =
                                                         in_stack_00000004[0x12];
                                                    in_stack_00000004[0x12] = iVar8;
                                                    in_stack_00000004[0x117] =
                                                         in_stack_00000004[0x117] + 1;
                                                    local_11c = &DAT_006424ec;
                                                  }
                                                  else {
                                                    local_11c = &DAT_006424ec;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"goto",4);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[4] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  iVar8 = core_script_cpp_FUN_00560160();
                                                  if (iVar8 < 0) {
                                                    dVar2 = (double)CONCAT44(local_124,local_11c);
                                                    pcVar18 = "Undefined label %s used in goto statement on line %d";
                                                    goto LAB_0055a97f;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    in_stack_00000004[0x12] = iVar8;
                                                    local_11c = &DAT_00642527;
                                                  }
                                                  else {
                                                    local_11c = &DAT_00642527;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"gtfo",4);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[4] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                                  if (pcVar18 != (char *)0x0) goto LAB_0055cd52;
                                                  if (DAT_0310ec9c == 0) {
                                                                                                        
                                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                            (g_CEditorToolsPtr,
                                                             "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                             local_124,local_3400);
                                                  *in_stack_00000004 = 1;
                                                  local_114 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_c8 = 0xffffffff;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%[^,)]%n",
                                                               local_1524,&local_c8);
                                                    if ((int)local_c8 < 2) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_c8;
                                                    core_script_cpp_FUN_00559360();
                                                    local_c4 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (local_c4 == 0) goto joined_r0x0055c026;
                                                  local_c0 = 1;
                                                  if (*local_11c == 0x2c) {
                                                    local_11c = local_11c + 1;
                                                    uVar15 = 0xffffffff;
                                                    pbVar7 = local_11c;
                                                    do {
                                                      if (uVar15 == 0) break;
                                                      uVar15 = uVar15 - 1;
                                                      bVar3 = *pbVar7;
                                                      pbVar7 = pbVar7 + (uint)bVar21 * -2 + 1;
                                                    } while (bVar3 != 0);
                                                    uVar15 = ~uVar15 - 2;
                                                    local_c8 = uVar15;
                                                    if ((int)uVar15 < 1) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    pbVar7 = local_11c;
                                                    pbVar17 = abStack_fad + 1;
                                                    for (uVar16 = uVar15 >> 2; uVar16 != 0;
                                                        uVar16 = uVar16 - 1) {
                                                      *(uint *)pbVar17 = *(uint *)pbVar7
                                                      ;
                                                      pbVar7 = pbVar7 + (uint)bVar21 * -8 + 4;
                                                      pbVar17 = pbVar17 + (uint)bVar21 * -8 + 4;
                                                    }
                                                    for (uVar15 = uVar15 & 3; uVar15 != 0;
                                                        uVar15 = uVar15 - 1) {
                                                      *pbVar17 = *pbVar7;
                                                      pbVar7 = pbVar7 + (uint)bVar21 * -2 + 1;
                                                      pbVar17 = pbVar17 + (uint)bVar21 * -2 + 1;
                                                    }
                                                    pbVar7 = local_11c + local_c8;
                                                    abStack_fad[local_c8 + 1] = 0;
                                                    local_11c = pbVar7;
                                                    if (DAT_0310ec9c == 0) {
                                                      local_c0 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,
                                                             (char *)(abStack_fad + 1));
                                                  }
                                                  else {
                                                    pcVar18 = (char *)
                                                  core_event_cpp_CEventList_FUN_004add00
                                                            (g_CEventListPtr);
                                                  if (pcVar18 != (char *)0x0) goto LAB_0055d708;
                                                  }
                                                  }
                                                  if (*local_11c != 0x29) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Missing closing ')' in holsterWeapon command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  if (DAT_0310ec9c == 0) {
                                                    (**(code **)(*(int *)(local_c4 + 0x154) + 0x158)
                                                    )();
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"idle",4);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[4] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_110 = in_stack_00000004[0x12];
                                                  local_114 = 0;
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"if",2);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[2] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  pcVar18 = (char *)core_script_cpp_FUN_005594a0();
                                                  if (pcVar18 != (char *)0x0) goto LAB_0055d708;
                                                  if ((DAT_0310ec9c == 0) &&
                                                     (iVar8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_444), iVar8 == 0)
                                                  ) {
                                                    iVar8 = core_script_cpp_FUN_005601c0();
                                                    if (iVar8 < 0) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Can't skip next command after if statement on line %d"
                                                                 ,local_124);
                                                      return -1;
                                                    }
                                                    iVar14 = crt_string_c_strnicmp_FUN_005ff070
                                                                       (*(char **)(in_stack_00000004
                                                                                   [0xd] + 4 +
                                                                                  iVar8 * 8),
                                                                        "else",4);
                                                    if (iVar14 == 0) {
                                                      iVar8 = iVar8 + 1;
                                                    }
                                                    in_stack_00000004[0x12] = iVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "finishedAct",0xb);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xb] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_bc = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c," ( )%n",
                                                               &local_bc);
                                                    uVar15 = DAT_0310ec9c;
                                                    pCVar6 = g_CGamePtr;
                                                    if (local_bc < 2) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing finishedAct command"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_bc;
                                                    if (DAT_0310ec9c == 0) {
                                                      *in_stack_00000004 = 1;
                                                      local_114 = uVar15;
                                                      pCVar6->unk12 = 1;
                                                    }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"letterbox",
                                                                       9);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[9] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                                  if (pcVar18 != (char *)0x0) {
LAB_0055d708:
                                                    pcVar20 = &DAT_0310eca0;
                                                    do {
                                                      cVar4 = *pcVar18;
                                                      *pcVar20 = cVar4;
                                                      if (cVar4 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar4 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar4;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar4 != '\0');
                                                    return -1;
                                                  }
                                                  iVar14 = -1;
                                                  iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                    (local_b4c,"false");
                                                  if (iVar8 == 0) {
                                                    iVar14 = 0;
                                                  }
                                                  iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                    (local_b4c,"true");
                                                  if (iVar8 == 0) {
                                                    iVar14 = 1;
                                                  }
                                                  iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                    (local_b4c,"bottom");
                                                  pCVar6 = g_CGamePtr;
                                                  if (iVar8 == 0) {
                                                    iVar14 = 2;
                                                  }
                                                  else if (iVar14 < 0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Invalid letterBox mode: %s",
                                                               local_b4c);
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    g_CGamePtr->letterbox_mode = iVar14;
                                                    pCVar6->allow_damage_flag = (uint)(iVar14 == 0);
                                                    pCVar6->allow_enemy_attack_flag =
                                                         (uint)(pCVar6->letterbox_mode == 0);
                                                    pCVar6->allow_hero_controls_flag =
                                                         pCVar6->letterbox_mode;
                                                    in_stack_00000004[0x116] = 0xffffffff;
                                                    DAT_0310f4a4 = 1;
                                                    if ((pCVar6->block_auto_save != 0) &&
                                                       (pCVar6->letterbox_mode != 0)) {
                                                      pCVar6->block_auto_save = 0;
                                                      iVar8 = core_event_cpp_FUN_004b1970();
                                                                                                            
                                                  core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                                                            (g_CDemonSetPtr,
                                                             (CDemonActor *)
                                                             g_CScriptPtr->focus_actor,1);
                                                  pCVar5 = g_CScriptPtr;
                                                  pCVar5->unk3[0] = '\0';
                                                  pCVar5->unk3[1] = '\0';
                                                  pCVar5->unk3[2] = '\0';
                                                  pCVar5->unk3[3] = '\0';
                                                  iVar14 = core_event_cpp_FUN_004b1970();
                                                  if (iVar8 == iVar14) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                                                            (g_CDemonSetPtr,iVar14);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xe] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    pcVar18 = (char *)core_script_cpp_FUN_005594a0()
                                                    ;
                                                    if (pcVar18 != (char *)0x0) goto LAB_0055d708;
                                                    if (DAT_0310ec9c == 0) {
                                                      iVar8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_570);
                                                  in_stack_00000004[5] = iVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"lookAt",6);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[6] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_b8 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,)]%n",
                                                             local_1394,&local_b8);
                                                  if (local_b8 < 2) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing lookAt command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_b8;
                                                  core_script_cpp_FUN_00559360();
                                                  pCVar10 = (CCharacter *)
                                                                                                                        
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (pCVar10 == (CCharacter *)0x0) {
joined_r0x0055c026:
                                                    if (DAT_0310f4ac == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_0055a8d4;
                                                  }
                                                  if (*local_11c == 0x2c) {
                                                    local_b8 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,", %[^)]%n",
                                                               local_2fb4,&local_b8);
                                                    if (local_b8 < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing lookAt command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_b8;
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  }
                                                  if (*local_11c != 0x29) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Missing closing ')' in lookAt command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  if (DAT_0310ec9c == 0) {
                                                    core_charactr_cpp_CCharacter_FUN_0042ddd0
                                                              (pCVar10);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "movePlatform",0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_b4 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%[^,], %f , %f )%n",
                                                               local_2a3c,&local_3f78,&local_3f74,
                                                               &local_b4);
                                                    if (local_b4 < 5) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing movePlatform command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_b4;
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  if ((local_3f78 < 0.0) || (1.0 < local_3f78)) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  dVar2 = (double)local_3f74;
                                                  if (dVar2 <= 0.0) {
                                                    pcVar18 = "Invalid movement rate %f";
                                                    goto LAB_0055a97f;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    core_platfrm_cpp_FUN_0054d690();
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"openDoor",8
                                                                      );
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[8] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_b0 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,], %[^)])%n",
                                                             local_28ac,local_2eec,&local_b0);
                                                  if (local_b0 < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing openDoor command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_b0;
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_00559360();
                                                  iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0
                                                                    ();
                                                  if ((iVar8 == 0) ||
                                                     (iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0(),
                                                  iVar8 == 0)) goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    local_114 = DAT_0310ec9c;
                                                    if (0.0 <= (float)in_stack_00000004[0x13]) {
                                                      iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) +
                                                                          0x138))();
                                                      if (iVar8 != 0) {
                                                        local_110 = 1;
                                                      }
                                                    }
                                                    else {
                                                      (**(code **)(*(int *)(iVar8 + 0x154) + 0x130))
                                                                ();
                                                      in_stack_00000004[0x13] = 0x3f800000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "pressButton",0xb);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xb] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_a8 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"( %[^,], %[^)])%n",
                                                               local_4a8,local_50c,&local_a8);
                                                    if (local_a8 < 5) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing pressButton() command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_a8;
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  puVar11 = (uint *)
                                                                                                                        
                                                  core_script_cpp_RelatedToMainButtonPresses_FUN_00559660
                                                            ();
                                                  if (puVar11 == (uint *)0x0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Invalid button name: %s",
                                                               local_50c);
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    if (DAT_0310f4a4 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
                                                            (g_CGamePtr);
                                                  DAT_0310f4a4 = 0;
                                                  }
                                                  *puVar11 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"raise",5);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[5] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  iVar8 = core_script_cpp_FUN_005593f0();
                                                  if (iVar8 != 0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing event expression on raise statament: %s",
                                                               iVar8);
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    core_event_cpp_CEventList_FUN_004aabe0
                                                              (g_CEventListPtr);
                                                  }
                                                  else {
                                                    pcVar18 = (char *)
                                                  core_event_cpp_CEventList_FUN_004add40
                                                            (g_CEventListPtr);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_0310eca0;
                                                    do {
                                                      cVar4 = *pcVar18;
                                                      *pcVar20 = cVar4;
                                                      if (cVar4 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar4 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar4;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar4 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "releaseButton",0xd);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_a0 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"( %[^,], %[^)])%n",
                                                               local_700,local_8f4,&local_a0);
                                                    if (local_a0 < 5) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing releaseButton() command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_a0;
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  puVar11 = (uint *)
                                                                                                                        
                                                  core_script_cpp_RelatedToMainButtonPresses_FUN_00559660
                                                            ();
                                                  uVar15 = DAT_0310ec9c;
                                                  if (puVar11 == (uint *)0x0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Invalid button name: %s",
                                                               local_8f4);
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    if (DAT_0310f4a4 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
                                                            (g_CGamePtr);
                                                  DAT_0310f4a4 = uVar15;
                                                  }
                                                  *puVar11 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x1b] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_9c = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c," ( %[^)])%n",
                                                               local_271c,&local_9c);
                                                    if (local_9c < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing removeAllItemsFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_9c;
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004fd190
                                                              ((CInventory *)(iVar8 + 0x1f738));
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x17] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_98 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c," ( %[^,], %[^)])%n",
                                                               local_20dc,local_2014,&local_98);
                                                    if (local_98 < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing removeItemFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_98;
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  if ((DAT_0310ec9c == 0) &&
                                                     (pCVar12 = 
                                                  core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                                                            (&g_HeroActors[g_LocalHeroIndex]->
                                                              inventory,local_2014),
                                                  pCVar12 != (CDemonActor *)0x0)) {
                                                    core_inv_cpp_CInventory_removeItem_FUN_004fea70
                                                              ((CInventory *)(iVar8 + 0x1f738),
                                                               pCVar12,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"removeKeys"
                                                                       ,10);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[10] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_90 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c," (%d )%n",
                                                             local_94,&local_90);
                                                  if (local_90 < 3) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_90;
                                                  if (g_CNetGamePtr->connection_type != 0) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    core_hero_cpp_FUN_004f3910();
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"return",6);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[6] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  if (DAT_0310ec9c == 0) {
                                                    iVar8 = in_stack_00000004[0x117];
                                                    if (iVar8 < 1) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Return without gosub detected on script line %d."
                                                                 ,local_124);
                                                      return -1;
                                                    }
                                                    in_stack_00000004[0x117] = iVar8 + -1;
                                                    in_stack_00000004[0x12] =
                                                         in_stack_00000004[iVar8 + 0x117];
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "rollCredits",0xb);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xb] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_8c = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c," ( )%n",
                                                               &local_8c);
                                                    uVar15 = DAT_0310ec9c;
                                                    pCVar6 = g_CGamePtr;
                                                    if (local_8c < 2) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing rollCredits command"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_8c;
                                                    if (DAT_0310ec9c == 0) {
                                                      *in_stack_00000004 = 1;
                                                      local_114 = uVar15;
                                                      pCVar6->unk12 = 2;
                                                    }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"say",3);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[3] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                                  if (pcVar18 != (char *)0x0) {
LAB_0055e656:
                                                    pcVar20 = &DAT_0310eca0;
                                                    do {
                                                      cVar4 = *pcVar18;
                                                      *pcVar20 = cVar4;
                                                      if (cVar4 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar4 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar4;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar4 != '\0');
                                                    return -1;
                                                  }
                                                  local_88 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            (local_3b6c,"%[^,], %[^,], %n",local_258c,
                                                             local_145c,&local_88);
                                                  if (local_88 < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_00559360();
                                                  if ((float)in_stack_00000004[0x14] < 0.0) {
                                                    core_script_cpp_FUN_005593d0();
                                                    local_14 = (float)core_script_cpp_FUN_0055ff00()
                                                    ;
                                                    in_stack_00000004[0x14] = local_14;
                                                    if ((float)in_stack_00000004[0x14] < 0.0) {
                                                      return -1;
                                                    }
                                                  }
                                                  if ((DAT_0310ec9c == 0) &&
                                                     (local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (), 0 < (int)local_114)) {
                                                    core_script_cpp_FUN_00560140();
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "selectWeapon",0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_84 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c," (%[^,], %[^)])%n",
                                                               local_ae8,local_69c,&local_84);
                                                    if (local_84 < 5) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing selectWeapon parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    local_11c = local_11c + local_84;
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    local_80 = DAT_0310ec9c;
                                                    pCVar12 = (CDemonActor *)
                                                              core_gabriela_cpp_FUN_004d7650();
                                                    local_7c = pCVar12;
                                                    if (pCVar12 != (CDemonActor *)0x0) {
                                                      do {
                                                        if (pCVar12 == (CDemonActor *)0x0) {
                                                          g_CurrentFilename =
                                                               "..\\core\\script.cpp";
                                                          g_CurrentLineNumber = 0xad9;
                                                                                                                    
                                                  core_main_c_displayErrorAndQuit_FUN_00506f10
                                                            ("script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar14 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                                                     (pCVar12,local_69c);
                                                  if (iVar14 != 0) goto LAB_0055a8bb;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
                                                            ((CInventory *)(iVar8 + 0x1f738),
                                                             (CDemonActor *)0x0,5,1);
                                                  pCVar12 = (CDemonActor *)
                                                            core_gabriela_cpp_FUN_004d7650();
                                                  } while (pCVar12 != local_7c);
                                                  }
                                                  if (local_80 == 0) {
                                                    engine_console_cpp_CConsole_printf_FUN_00441890
                                                              (g_CConsolePtr,
                                                               "%s can't selectWeapon(%s)\n",
                                                               local_ae8,local_69c);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setActorVariable",0x10);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x10] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_78 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%[^,], %[^)])%n",
                                                               local_12cc,local_24c4,&local_78);
                                                    if (local_78 < 5) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setActorVariable command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_78;
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_CheckingActorVariableName_FUN_00559220
                                                            ();
                                                  if (iVar8 == 0) {
                                                    return -1;
                                                  }
                                                  iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0
                                                                    ();
                                                  if (DAT_0310ec9c == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                            (g_CEventListPtr);
                                                  }
                                                  else if ((iVar8 == 0) && (DAT_0310f4ac == 0)) {
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xf] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    pcVar18 = (char *)core_script_cpp_FUN_005593f0()
                                                    ;
                                                    if (pcVar18 != (char *)0x0) goto LAB_0055e656;
                                                    if (DAT_0310ec9c == 0) {
                                                                                                            
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0
                                                            (g_CSoundPtr,local_82c);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xe] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_70 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%[^,], %d)%n",
                                                               local_2b04,&local_74,&local_70);
                                                    if (local_70 < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setCameragroup parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_70;
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                      (g_CDemonSetPtr);
                                                    if (iVar8 < 0) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Camera \"%s\" does not exist.",
                                                                 local_2b04);
                                                      return -1;
                                                    }
                                                    if (DAT_0310ec9c == 0) {
                                                      g_CDemonSetPtr->cameras[iVar8].unk2 = local_74
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x12] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_68 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%[^,], %f)%n",
                                                               local_320c,&local_6c,&local_68);
                                                    if (local_68 < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setCharacterHealth parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_68;
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    *(float *)(iVar8 + 0x243c) =
                                                         *(float *)(iVar8 + 0x2440) * local_6c;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setFocusActor",0xd);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    pcVar18 = (char *)core_script_cpp_FUN_005593f0()
                                                    ;
                                                    if (pcVar18 != (char *)0x0) {
                                                      pcVar20 = &DAT_0310eca0;
                                                      do {
                                                        cVar4 = *pcVar18;
                                                        *pcVar20 = cVar4;
                                                        if (cVar4 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar4 = pcVar18[1];
                                                        pcVar18 = pcVar18 + 2;
                                                        pcVar20[1] = cVar4;
                                                        pcVar20 = pcVar20 + 2;
                                                      } while (cVar4 != '\0');
                                                      return -1;
                                                    }
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  if (iVar8 != in_stack_00000004[3]) {
                                                    in_stack_00000004[4] = 1;
                                                    in_stack_00000004[3] = iVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setHeroTask",0xb);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xb] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_64 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c," (%[^,], %[^)])%n",
                                                               local_638,local_2b4,&local_64);
                                                    if (local_64 < 5) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setHeroTask parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    local_11c = local_11c + local_64;
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                    (local_2b4,"stand");
                                                  if ((((iVar8 != 0) &&
                                                       (iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                          (local_2b4,
                                                                           "follow"),
                                                       iVar8 != 0)) &&
                                                      (iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                         (local_2b4,"kill")
                                                      , iVar8 != 0)) &&
                                                     ((iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                         (local_2b4,"guard"
                                                                         ), iVar8 != 0 &&
                                                      (iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                         (local_2b4,
                                                                          "suspend"),
                                                      iVar8 != 0)))) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Invalid Task: %s",local_2b4);
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    core_hero_cpp_FUN_004f3930();
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"setIniInt",
                                                                       9);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[9] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_58 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,], %d )%n",
                                                             local_e1c,&local_5c,&local_58);
                                                  if (local_58 < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing setIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_58;
                                                  core_script_cpp_FUN_00559360();
                                                  if (DAT_0310ec9c == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004fba70
                                                              (&local_3f6c,
                                                               "system\\nocturne.ini",
                                                               0x642d3b);
                                                    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
                                                              (&local_3f6c,local_e1c,local_5c);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x12] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_54 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c," (%n %n",
                                                               &local_54,&local_54);
                                                    if (local_54 < 1) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_54;
                                                    local_50 = 0xbf800000;
                                                    if (*local_11c == ')') {
                                                      local_11c = (byte *)((char *)local_11c + 1);
                                                    }
                                                    else {
                                                      local_54 = -1;
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                ((char *)local_11c,"%f )%n",
                                                                 &local_50,&local_54);
                                                      if (local_54 < 1) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing setSayTimeOverride parameters.");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_54;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    in_stack_00000004[0x115] = local_50;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    pcVar18 = (char *)core_script_cpp_FUN_005593f0()
                                                    ;
                                                    if (pcVar18 != (char *)0x0) {
LAB_0055f0a8:
                                                      pcVar20 = &DAT_0310eca0;
                                                      do {
                                                        cVar4 = *pcVar18;
                                                        *pcVar20 = cVar4;
                                                        if (cVar4 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar4 = pcVar18[1];
                                                        pcVar18 = pcVar18 + 2;
                                                        pcVar20[1] = cVar4;
                                                        pcVar20 = pcVar20 + 2;
                                                      } while (cVar4 != '\0');
                                                      return -1;
                                                    }
                                                    iVar8 = core_script_cpp_FUN_00560160();
                                                    if (iVar8 < 0) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Undefined label '%s'",
                                                                 local_764);
                                                      return -1;
                                                    }
                                                    if (DAT_0310ec9c == 0) {
                                                      in_stack_00000004[0x116] = iVar8;
                                                    }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[10] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                                  if (pcVar18 != (char *)0x0) goto LAB_0055f0a8;
                                                  if (local_3e0 == '\0') {
                                                    in_stack_00000004[1] = 0;
                                                  }
                                                  else {
                                                    iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  in_stack_00000004[1] = iVar8;
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  }
                                                  in_stack_00000004[2] = in_stack_00000004[1];
                                                  if ((in_stack_00000004[5] == 0) &&
                                                     (in_stack_00000004[1] != in_stack_00000004[3]))
                                                  {
                                                    in_stack_00000004[4] = 1;
                                                    in_stack_00000004[3] = in_stack_00000004[1];
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xd] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    pcVar18 = (char *)core_script_cpp_FUN_005593f0()
                                                    ;
                                                    if (pcVar18 != (char *)0x0) {
                                                      pcVar20 = &DAT_0310eca0;
                                                      do {
                                                        cVar4 = *pcVar18;
                                                        *pcVar20 = cVar4;
                                                        if (cVar4 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar4 = pcVar18[1];
                                                        pcVar18 = pcVar18 + 2;
                                                        pcVar20[1] = cVar4;
                                                        pcVar20 = pcVar20 + 2;
                                                      } while (cVar4 != '\0');
                                                      return -1;
                                                    }
                                                    local_3f70 = -1.0;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              (local_318,"%f",&local_3f70);
                                                    if (((double)local_3f70 <= 0.0) ||
                                                       (4 < (double)local_3f70)) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Invalid time factor %s",
                                                                 local_318);
                                                      return -1;
                                                    }
                                                    if (DAT_0310ec9c == 0) {
                                                      g_CGamePtr->time_scale_factor = local_3f70;
                                                    }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"setVictim",
                                                                       9);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[9] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_44 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,)]%n",
                                                             local_1cf4,&local_44);
                                                  if (local_44 < 2) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing setVictim command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_44;
                                                  core_script_cpp_FUN_00559360();
                                                  iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0
                                                                    ();
                                                  if (iVar8 == 0) goto joined_r0x0055c026;
                                                  if (*local_11c == 0x2c) {
                                                    local_44 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,", %[^)]%n",
                                                               local_1204,&local_44);
                                                    if (local_44 < 3) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setVictim command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_44;
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                                                      (local_1204,"disable"
                                                                      );
                                                    if ((iVar8 != 0) &&
                                                       (iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0(),
                                                  iVar8 == 0)) goto joined_r0x0055c026;
                                                  }
                                                  if (*local_11c != 0x29) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Missing closing ')' in setVictim command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  if (DAT_0310ec9c == 0) {
                                                    core_enemy_cpp_FUN_004a9ef0();
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"snapToFace"
                                                                       ,10);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[10] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_40 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,], %[^)])%n",
                                                             local_2c94,local_1c2c,&local_40);
                                                  if (local_40 < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error snaping turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_40;
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_00559360();
                                                  pCVar12 = (CDemonActor *)
                                                                                                                        
                                                  core_script_cpp_GetDemonActor_FUN_005594e0();
                                                  if ((pCVar12 == (CDemonActor *)0x0) ||
                                                     (iVar8 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0(),
                                                  iVar8 == 0)) goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    core_bodypart_cpp_FUN_0041b510();
                                                    pCVar13 = 
                                                  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                                            (&local_160,&local_148);
                                                  (pCVar12->orient).bank = pCVar13->y;
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                                                            (pCVar12);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"startSay",8
                                                                      );
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[8] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  pcVar18 = (char *)core_script_cpp_FUN_005593f0();
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_0310eca0;
                                                    do {
                                                      cVar4 = *pcVar18;
                                                      *pcVar20 = cVar4;
                                                      if (cVar4 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar4 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar4;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar4 != '\0');
                                                    return -1;
                                                  }
                                                  local_3c = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            (local_3978,"%[^,], %[^,], %n",local_15ec,
                                                             local_21a4,&local_3c);
                                                  if (local_3c < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_005593d0();
                                                  local_14 = (float)core_script_cpp_FUN_0055ff00();
                                                  in_stack_00000004[0x14] = local_14;
                                                  fVar1 = (float)in_stack_00000004[0x14];
                                                  goto joined_r0x0055f6da;
                                                  }
                                                  iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                    (pcVar18,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    pcVar18 = (char *)core_script_cpp_FUN_005593f0()
                                                    ;
                                                    if (pcVar18 != (char *)0x0) {
                                                      pcVar20 = &DAT_0310eca0;
                                                      do {
                                                        cVar4 = *pcVar18;
                                                        *pcVar20 = cVar4;
                                                        if (cVar4 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar4 = pcVar18[1];
                                                        pcVar18 = pcVar18 + 2;
                                                        pcVar20[1] = cVar4;
                                                        pcVar20 = pcVar20 + 2;
                                                      } while (cVar4 != '\0');
                                                      return -1;
                                                    }
                                                    pcVar18 = local_d54;
                                                    do {
                                                      pcVar20 = pcVar18;
                                                      if (*pcVar18 == ',') goto LAB_0055f760;
                                                      if (*pcVar18 == '\0') break;
                                                      pcVar20 = pcVar18 + 1;
                                                      if (*pcVar20 == ',') goto LAB_0055f760;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (*pcVar20 != '\0');
                                                    pcVar20 = (char *)0x0;
LAB_0055f760:
                                                    pcVar19 = ",";
                                                    local_18 = (uint)(pcVar20 != (char *)0x0);
                                                    local_38 = -1;
                                                    iVar8 = -1;
                                                    pcVar18 = local_d54;
                                                    do {
                                                      pcVar20 = pcVar18;
                                                      if (iVar8 == 0) break;
                                                      iVar8 = iVar8 + -1;
                                                      pcVar20 = pcVar18 + (uint)bVar21 * -2 + 1;
                                                      cVar4 = *pcVar18;
                                                      pcVar18 = pcVar20;
                                                    } while (cVar4 != '\0');
                                                    pcVar20 = pcVar20 + -1;
                                                    do {
                                                      cVar4 = *pcVar19;
                                                      *pcVar20 = cVar4;
                                                      if (cVar4 == '\0') break;
                                                      cVar4 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar20[1] = cVar4;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar4 != '\0');
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              (local_d54,"%[^,],%n",local_7c8,
                                                               &local_38);
                                                    if (local_38 < 1) {
                                                      pcVar18 = "Error parsing out camera name";
                                                      pcVar20 = &DAT_0310eca0;
                                                      do {
                                                        cVar4 = *pcVar18;
                                                        *pcVar20 = cVar4;
                                                        if (cVar4 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar4 = pcVar18[1];
                                                        pcVar18 = pcVar18 + 2;
                                                        pcVar20[1] = cVar4;
                                                        pcVar20 = pcVar20 + 2;
                                                      } while (cVar4 != '\0');
                                                      return -1;
                                                    }
                                                    core_script_cpp_FUN_00559360();
                                                    iVar8 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                      (g_CDemonSetPtr);
                                                    if (iVar8 < 0) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Camera \"%s\" doesn't exist.",
                                                                 local_7c8);
                                                      return -1;
                                                    }
                                                    local_3f7c = 1e+10;
                                                    if (local_18 != 0) {
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                (local_d54 + local_38,"%f",
                                                                 &local_3f7c);
                                                      if (((double)local_3f7c < 0.0) ||
                                                         (99999 < (double)local_3f7c)) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Invalid hold time value");
                                                  return -1;
                                                  }
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00
                                                            (g_CDemonSetPtr,iVar8,local_3f7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,
                                                  "timedDisplay",0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0U) == 0)) {
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    pcVar18 = (char *)core_script_cpp_FUN_005593f0()
                                                    ;
                                                    if (pcVar18 != (char *)0x0) {
LAB_0055f91c:
                                                      pcVar20 = &DAT_0310eca0;
                                                      do {
                                                        cVar4 = *pcVar18;
                                                        *pcVar20 = cVar4;
                                                        if (cVar4 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar4 = pcVar18[1];
                                                        pcVar18 = pcVar18 + 2;
                                                        pcVar20[1] = cVar4;
                                                        pcVar20 = pcVar20 + 2;
                                                      } while (cVar4 != '\0');
                                                      return -1;
                                                    }
                                                    local_34 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              (local_352c,"%f,%n",local_30,
                                                               &local_34);
                                                    if (local_34 < 2) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing time value"
                                                                );
                                                      return -1;
                                                    }
                                                    if (DAT_0310ec9c == 0) {
                                                      pcVar20 = (char *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                      pcVar18 = (char *)(in_stack_00000004 + 0x15);
                                                      do {
                                                        cVar4 = *pcVar20;
                                                        *pcVar18 = cVar4;
                                                        if (cVar4 == '\0') break;
                                                        cVar4 = pcVar20[1];
                                                        pcVar20 = pcVar20 + 2;
                                                        pcVar18[1] = cVar4;
                                                        pcVar18 = pcVar18 + 2;
                                                      } while (cVar4 != '\0');
                                                      local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            ();
                                                  if (0 < (int)local_114) {
                                                    *(byte *)(in_stack_00000004 + 0x15) = 0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"turnToFace"
                                                                       ,10);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[10] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_2c = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%[^,], %[^)])%n",
                                                             local_2974,local_16b4,&local_2c);
                                                  if (local_2c < 5) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_2c;
                                                  core_script_cpp_FUN_00559360();
                                                  core_script_cpp_FUN_00559360();
                                                  iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0
                                                                    ();
                                                  if ((iVar8 == 0) ||
                                                     (iVar14 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0(),
                                                  iVar14 == 0)) goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    (**(code **)(*(int *)(iVar8 + 0x154) + 0x148))()
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"wait",4);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[4] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  local_28 = -1;
                                                  crt_stdio_c_sscanf_FUN_0060013c
                                                            ((char *)local_11c,"(%f)%n",
                                                             local_24,&local_28);
                                                  if (local_28 < 1) {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Error parsing time value on wait statament");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_28;
                                                  if (DAT_0310ec9c == 0) {
                                                    local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            ();
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"waitFor",7)
                                                    ;
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[7] + 1)] & 0xe0U) == 0)) {
                                                      local_11c = (byte *)
                                                  core_script_cpp_FUN_005593d0();
                                                  pcVar18 = (char *)core_script_cpp_FUN_005594a0();
                                                  if (pcVar18 != (char *)0x0) goto LAB_0055f91c;
                                                  if ((DAT_0310ec9c == 0) &&
                                                     (iVar8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_37c), iVar8 == 0)
                                                  ) {
                                                    local_114 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = crt_string_c_strnicmp_FUN_005ff070
                                                                      (pcVar18,"walkTo",6);
                                                    dVar2 = (double)CONCAT44(pcVar18,local_124);
                                                    if ((iVar8 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[6] + 1)] & 0xe0U) != 0)) {
                                                      pcVar18 = "Unknown command on line %d: %s";
                                                      goto LAB_0055a97f;
                                                    }
                                                    local_11c = (byte *)core_script_cpp_FUN_005593d0
                                                                                  ();
                                                    local_120 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,"(%[^,], %[^,)] %n",
                                                               local_2bcc,local_177c,&local_120);
                                                    if (local_120 < 5) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_120;
                                                    core_script_cpp_FUN_00559360();
                                                    core_script_cpp_FUN_00559360();
                                                    local_20 = 0;
                                                    if (*local_11c == ',') {
                                                      local_120 = -1;
                                                      crt_stdio_c_sscanf_FUN_0060013c
                                                                ((char *)local_11c,",%f %n",
                                                                 &local_20,&local_120);
                                                      if (local_120 < 1) {
                                                        crt_stdio_c_sprintf_FUN_005fdbd0
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing walkTo command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_120;
                                                  }
                                                  local_1c = 0x501502f9;
                                                  if (*local_11c == ',') {
                                                    local_120 = -1;
                                                    crt_stdio_c_sscanf_FUN_0060013c
                                                              ((char *)local_11c,",%f %n",
                                                               &local_1c,&local_120);
                                                    if (local_120 < 1) {
                                                      crt_stdio_c_sprintf_FUN_005fdbd0
                                                                (&DAT_0310eca0,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_120;
                                                  }
                                                  if (*local_11c != ')') {
                                                    crt_stdio_c_sprintf_FUN_005fdbd0
                                                              (&DAT_0310eca0,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  iVar8 = core_script_cpp_GetDemonActor_FUN_005594e0
                                                                    ();
                                                  if ((iVar8 == 0) ||
                                                     (iVar14 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0(),
                                                  iVar14 == 0)) goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    (**(code **)(*(int *)(iVar8 + 0x154) + 0x144))()
                                                    ;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0055a8bb:
  if ((DAT_0310ec9c != 2) && ((char)local_118->light_type != '\0')) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&DAT_0310eca0,"Extra characters \"%s\" on line %d",local_118,local_120);
    return -1;
  }
LAB_0055a8d4:
  if (local_110 == 1) {
    in_stack_00000004[0x14] = 0xbf800000;
    uVar15 = DAT_0310ec9c;
    in_stack_00000004[0x13] = 0xbf800000;
    if ((uVar15 == 0) && ((int)in_stack_00000004[0xc] <= (int)in_stack_00000004[0x12])) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_110) {
    in_stack_00000004[0x12] = local_10c;
    return local_110;
  }
  return local_110;
}
