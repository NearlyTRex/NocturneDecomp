// Name: core_script.cpp_CScript_step_FUN_0055a810
// Address: 0055a810
// Address Range: [[0055a810, 0055c9e6] [0055ca7e, 0055fef3]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_step_FUN_0055a810(CScript *this_ptr,float *time_remaining)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_script_cpp_CScript_step_FUN_0055a810(CScript *this_ptr,float *time_remaining)

{
  CGabriella *this_ptr_00;
  double dVar1;
  char cVar2;
  SDialogEntry *pSVar3;
  CGame *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  float fVar7;
  CDemonActor_vtable *pCVar8;
  CMotionList *this_ptr_01;
  CPlatform *pCVar9;
  int *piVar10;
  CHero *this_ptr_02;
  CEnemy *this_ptr_03;
  CDemonActor *pCVar11;
  CVector3f *pCVar12;
  CCharacter *pCVar13;
  CDemonActor *pCVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  byte bVar21;
  float y;
  float local_3f80;
  float local_3f7c;
  float local_3f78;
  float local_3f74;
  float local_3f70;
  CIniFile local_3f6c;
  CIniFile local_3d6c;
  char local_3b6c [500];
  char local_3978 [500];
  char local_3784 [300];
  char local_3658 [300];
  char local_352c [300];
  char local_3400 [300];
  char local_32d4 [200];
  char local_320c [200];
  char local_3144 [200];
  char local_307c [200];
  char local_2fb4 [200];
  char local_2eec [200];
  char local_2e24 [200];
  char local_2d5c [200];
  char local_2c94 [200];
  char local_2bcc [200];
  char local_2b04 [200];
  char local_2a3c [200];
  char local_2974 [200];
  char local_28ac [200];
  char local_27e4 [200];
  char local_271c [200];
  char local_2654 [200];
  char local_258c [200];
  char local_24c4 [200];
  char local_23fc [200];
  char local_2334 [200];
  char local_226c [200];
  char local_21a4 [200];
  char local_20dc [200];
  char local_2014 [200];
  char local_1f4c [200];
  char local_1e84 [200];
  char local_1dbc [200];
  char local_1cf4 [200];
  char local_1c2c [200];
  char local_1b64 [200];
  char local_1a9c [200];
  char local_19d4 [200];
  char local_190c [200];
  char local_1844 [200];
  char local_177c [200];
  char local_16b4 [200];
  char local_15ec [200];
  char local_1524 [200];
  char local_145c [200];
  char local_1394 [200];
  char local_12cc [200];
  char local_1204 [200];
  char local_113c [200];
  char local_1074 [199];
  char acStack_fad [201];
  char local_ee4 [200];
  char local_e1c [200];
  char local_d54 [200];
  int local_c8c [30];
  char local_c14 [100];
  char local_bb0 [100];
  char local_b4c [100];
  char local_ae8 [100];
  char local_a84 [100];
  char local_a20 [100];
  char local_9bc [100];
  char local_958 [100];
  char local_8f4 [100];
  char local_890 [100];
  char local_82c [100];
  char local_7c8 [100];
  char local_764 [100];
  char local_700 [100];
  char local_69c [100];
  char local_638 [100];
  byte local_5d4 [100];
  char local_570 [100];
  char local_50c [100];
  char local_4a8 [100];
  char local_444 [100];
  char local_3e0 [100];
  char local_37c [100];
  char local_318 [100];
  char local_2b4 [100];
  char local_250 [100];
  char local_1ec [100];
  CMatrix3x3f local_188;
  CVector3f local_160;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f local_13c;
  CVector3f local_130;
  int local_124;
  int local_120;
  char *local_11c;
  C3DSLight *local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  char *local_104;
  int local_fc;
  char *local_f8;
  char *local_f4;
  CCharacter *local_f0;
  CBodyPart *local_ec;
  int local_e8;
  char *local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  CEnemy *local_c4;
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
  int local_80;
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
  float local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  
  bVar21 = 0;
  if ((this_ptr->next_cmd < 0) || (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x46d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar17 = "(no error message provided)";
  pcVar20 = g_ScriptErrorBuffer;
  do {
    cVar2 = *pcVar17;
    *pcVar20 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar17[1];
    pcVar17 = pcVar17 + 2;
    pcVar20[1] = cVar2;
    pcVar20 = pcVar20 + 2;
  } while (cVar2 != '\0');
  pcVar17 = this_ptr->parsed_lines[this_ptr->next_cmd].text;
  local_124 = this_ptr->parsed_lines[this_ptr->next_cmd].line_number;
  local_110 = this_ptr->next_cmd;
  local_114 = 1;
  this_ptr->next_cmd = local_110 + 1;
  cVar2 = *pcVar17;
  if ((cVar2 == '{') || (cVar2 == '}')) {
    local_11c = &s_EmptyChar_00641c5a;
  }
  else if (cVar2 == ':') {
    local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 1);
    dVar1 = (double)CONCAT44(local_124,local_11c);
    if (g_ScriptEventsEnabled != 0) {
      cVar2 = *local_11c;
      for (pcVar17 = local_11c;
          (cVar2 != '\0' &&
          (((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 0xe0) != 0 || (*pcVar17 == '_'))
          )); pcVar17 = pcVar17 + 1) {
        cVar2 = pcVar17[1];
      }
      if (*pcVar17 != '\0') {
        pcVar17 = "Invalid label \"%s\" on line";
        goto LAB_0055a97f;
      }
      iVar6 = core_script_cpp_CScript_findLabelIndex_FUN_00560160(this_ptr,local_11c);
      if (iVar6 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x49f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Internal script error checking for duplicate label.");
      }
      if (iVar6 != local_110) {
        _sprintf
                  (g_ScriptErrorBuffer,"Duplicate label %s on lines %d and %d",local_11c,local_124,
                   this_ptr->parsed_lines[iVar6].line_number);
        return -1;
      }
    }
    local_11c = &s_EmptyChar_00641ce3;
  }
  else {
    iVar6 = strnicmp(pcVar17,"syntaxCheckOn",0xd);
    if ((iVar6 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0)) {
      if (g_ScriptEventsEnabled != 0) {
        g_ScriptEventsEnabled = 1;
      }
      local_11c = &s_EmptyChar_00641cf2;
    }
    else {
      iVar6 = strnicmp(pcVar17,"syntaxCheckOff",0xe);
      if ((iVar6 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar17[0xe] + 1)] & 0xe0) == 0))
      {
        if (g_ScriptEventsEnabled != 0) {
          g_ScriptEventsEnabled = 2;
        }
        local_11c = &s_EmptyChar_00641d02;
      }
      else if (g_ScriptEventsEnabled != 2) {
        iVar6 = strnicmp(pcVar17,"advanceLightFilter",0x12);
        if (((((((((iVar6 == 0) &&
                  ((g_CharacterClassificationTable[(byte)(pcVar17[0x12] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = strnicmp
                                     (pcVar17,"createExplosion",0xf), iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar17[0xf] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = strnicmp(pcVar17,"deleteActor",0xb),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar17[0xb] + 1)] & 0xe0) == 0)))) ||
               ((iVar6 = strnicmp(pcVar17,"displayBitmap",0xd),
                iVar6 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0)))) ||
              (((((iVar6 = strnicmp(pcVar17,"hurtCharacter",0xd),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = strnicmp(pcVar17,"incCounter",10),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar17[10] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = strnicmp(pcVar17,"fadeSfx",7),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar17[7] + 1)] & 0xe0) == 0)))) ||
               ((iVar6 = strnicmp
                                   (pcVar17,"fadeAmbientSound",0x10), iVar6 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar17[0x10] + 1)] & 0xe0) == 0)))))) ||
             ((((iVar6 = strnicmp(pcVar17,"flagOn",6), iVar6 == 0
                && ((g_CharacterClassificationTable[(byte)(pcVar17[6] + 1)] & 0xe0) == 0)) ||
               ((iVar6 = strnicmp(pcVar17,"flagOff",7),
                iVar6 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar17[7] + 1)] & 0xe0) == 0)
                ))) || ((((iVar6 = strnicmp
                                             (pcVar17,"gameFlagOn",10), iVar6 == 0 &&
                          ((g_CharacterClassificationTable[(byte)(pcVar17[10] + 1)] & 0xe0) == 0))
                         || ((iVar6 = strnicmp
                                                (pcVar17,"gameFlagOff",0xb), iVar6 == 0 &&
                             ((g_CharacterClassificationTable[(byte)(pcVar17[0xb] + 1)] & 0xe0) == 0
                             )))) ||
                        ((((iVar6 = strnicmp
                                              (pcVar17,"killCharacter",0xd), iVar6 == 0 &&
                           ((g_CharacterClassificationTable[(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0))
                          || ((iVar6 = strnicmp
                                                 (pcVar17,"killHero",8), iVar6 == 0 &&
                              ((g_CharacterClassificationTable[(byte)(pcVar17[8] + 1)] & 0xe0) == 0)
                              ))) ||
                         ((iVar6 = strnicmp(pcVar17,"killSfx",7),
                          iVar6 == 0 &&
                          ((g_CharacterClassificationTable[(byte)(pcVar17[7] + 1)] & 0xe0) == 0)))))
                        ))))) ||
            ((iVar6 = strnicmp(pcVar17,"lightning",9), iVar6 == 0
             && ((g_CharacterClassificationTable[(byte)(pcVar17[9] + 1)] & 0xe0) == 0)))) ||
           ((((iVar6 = strnicmp(pcVar17,"playSfx",7), iVar6 == 0
              && ((g_CharacterClassificationTable[(byte)(pcVar17[7] + 1)] & 0xe0) == 0)) ||
             ((iVar6 = strnicmp(pcVar17,"setCameraAmbient",0x10),
              iVar6 == 0 &&
              ((g_CharacterClassificationTable[(byte)(pcVar17[0x10] + 1)] & 0xe0) == 0)))) ||
            ((((iVar6 = strnicmp(pcVar17,"setCounter",10),
               iVar6 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar17[10] + 1)] & 0xe0) == 0)
               ) || (((iVar6 = strnicmp
                                         (pcVar17,"setGroupAmbient",0xf), iVar6 == 0 &&
                      ((g_CharacterClassificationTable[(byte)(pcVar17[0xf] + 1)] & 0xe0) == 0)) ||
                     ((((iVar6 = strnicmp
                                           (pcVar17,"setLightFilterFrame",0x13), iVar6 == 0
                        && ((g_CharacterClassificationTable[(byte)(pcVar17[0x13] + 1)] & 0xe0) == 0)
                        ) || ((iVar6 = strnicmp
                                                 (pcVar17,"setLeverState",0xd), iVar6 == 0
                              && ((g_CharacterClassificationTable[(byte)(pcVar17[0xd] + 1)] & 0xe0)
                                  == 0)))) ||
                      ((iVar6 = strnicmp
                                          (pcVar17,"setModelState",0xd), iVar6 == 0 &&
                       ((g_CharacterClassificationTable[(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0))))))
                    )) ||
             (((iVar6 = strnicmp(pcVar17,"setTimer",8),
               iVar6 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar17[8] + 1)] & 0xe0) == 0))
              || (((((iVar6 = strnicmp(pcVar17,"setWeather",10),
                     iVar6 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar17[10] + 1)] & 0xe0) == 0)) ||
                    ((iVar6 = strnicmp(pcVar17,"shakeScreen",0xb)
                     , iVar6 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar17[0xb] + 1)] & 0xe0) == 0)))) ||
                   ((iVar6 = strnicmp
                                       (pcVar17,"slamModelToMotion",0x11), iVar6 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar17[0x11] + 1)] & 0xe0) == 0)))) ||
                  ((iVar6 = strnicmp(pcVar17,"warpTo",6),
                   iVar6 == 0 &&
                   ((g_CharacterClassificationTable[(byte)(pcVar17[6] + 1)] & 0xe0) == 0))))))))))))
        {
          if (g_ScriptEventsEnabled == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,pcVar17);
          }
          else {
            pcVar17 = core_event_cpp_CEventList_validateCommands_FUN_004add40
                                (g_CEventListPtr,pcVar17);
            if (pcVar17 != (char *)0x0) goto LAB_0055bb9d;
          }
          local_11c = &s_EmptyChar_00641e5e;
        }
        else {
          iVar6 = strnicmp(pcVar17,"addItemToInventory",0x12);
          if ((iVar6 == 0) &&
             ((g_CharacterClassificationTable[(byte)(pcVar17[0x12] + 1)] & 0xe0) == 0)) {
            local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 0x12);
            local_e8 = -1;
            sscanf(local_11c," ( %[^,], %[^)])%n",local_ee4,local_27e4,&local_e8);
            if (local_e8 < 3) {
              _sprintf
                        (g_ScriptErrorBuffer,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_11c = local_11c + local_e8;
            core_script_cpp_trimString_FUN_00559360(local_ee4);
            core_script_cpp_trimString_FUN_00559360(local_27e4);
            pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                (local_ee4,g_CHeroClassInfo.name_hash,&g_CHeroClassInfo);
            if ((pCVar14 == (CDemonActor *)0x0) ||
               (pCVar11 = core_script_cpp_getActor_FUN_005594e0
                                    (local_27e4,g_CDemonActorClassInfo.name_hash,
                                     &g_CDemonActorClassInfo), pCVar11 == (CDemonActor *)0x0))
            goto joined_r0x0055c026;
            if (g_ScriptEventsEnabled == 0) {
              core_inv_cpp_CInventory_addItem_FUN_004fd600
                        ((CInventory *)(pCVar14[0x176].create_event + 0x30),pCVar11,0);
            }
          }
          else {
            iVar6 = strnicmp(pcVar17,"addLightFilter",0xe);
            if ((iVar6 == 0) &&
               ((g_CharacterClassificationTable[(byte)(pcVar17[0xe] + 1)] & 0xe0) == 0)) {
              local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 0xe);
              local_e0 = -1;
              sscanf
                        (local_11c,"( %[^,], %[^,], %f )%n",local_5d4,local_250,&local_a4,&local_e0);
              if (local_e0 < 5) {
                _sprintf
                          (g_ScriptErrorBuffer,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_11c = local_11c + local_e0;
              core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(g_CDemonSetPtr);
              if (local_118 == (C3DSLight *)0x0) {
                _sprintf
                          (g_ScriptErrorBuffer,"Light \"%s\" does not exist",local_5d4);
                return -1;
              }
              iVar6 = engine_dosio_c_getFileSize_FUN_00481880("art",local_250);
              if (iVar6 < 1) {
                _sprintf
                          (g_ScriptErrorBuffer,"Can't open filter \"%s\"",local_250);
                return -1;
              }
              if (g_ScriptEventsEnabled == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(local_118,local_250,local_a4,0);
              }
            }
            else {
              iVar6 = strnicmp(pcVar17,"allowEnemyAttack",0x10);
              if ((iVar6 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(pcVar17[0x10] + 1)] & 0xe0) == 0)) {
                local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 0x10);
                pcVar17 = core_script_cpp_parseConditionExpr_FUN_005594a0(&local_11c,local_958);
                if (pcVar17 != (char *)0x0) {
LAB_0055bb9d:
                  pcVar20 = g_ScriptErrorBuffer;
                  do {
                    cVar2 = *pcVar17;
                    *pcVar20 = cVar2;
                    if (cVar2 == '\0') {
                      return -1;
                    }
                    cVar2 = pcVar17[1];
                    pcVar17 = pcVar17 + 2;
                    pcVar20[1] = cVar2;
                    pcVar20 = pcVar20 + 2;
                  } while (cVar2 != '\0');
                  return -1;
                }
                if (g_ScriptEventsEnabled == 0) {
                  iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                    (g_CEventListPtr,local_958);
                  g_CGamePtr->allow_enemy_attack_flag = iVar6;
                }
              }
              else {
                iVar6 = strnicmp
                                  (pcVar17,"allowHeroControls",0x11);
                if ((iVar6 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(pcVar17[0x11] + 1)] & 0xe0) == 0)) {
                  local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 0x11);
                  pcVar17 = core_script_cpp_parseConditionExpr_FUN_005594a0(&local_11c,local_bb0);
                  if (pcVar17 != (char *)0x0) goto LAB_0055bb9d;
                  if (g_ScriptEventsEnabled == 0) {
                    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                      (g_CEventListPtr,local_bb0);
                    g_ScriptInputFlag = (int)(iVar6 == 0);
                    g_CGamePtr->allow_hero_controls_flag = g_ScriptInputFlag;
                  }
                }
                else {
                  iVar6 = strnicmp(pcVar17,"allowHeroDamage",0xf)
                  ;
                  if ((iVar6 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(pcVar17[0xf] + 1)] & 0xe0) == 0)) {
                    local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 0xf);
                    pcVar17 = core_script_cpp_parseConditionExpr_FUN_005594a0(&local_11c,local_a84);
                    if (pcVar17 != (char *)0x0) goto LAB_0055bb9d;
                    if (g_ScriptEventsEnabled == 0) {
                      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                        (g_CEventListPtr,local_a84);
                      g_CGamePtr->allow_damage_flag = iVar6;
                    }
                  }
                  else {
                    iVar6 = strnicmp
                                      (pcVar17,"attachActorToPlatform",0x15);
                    if ((iVar6 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(pcVar17[0x15] + 1)] & 0xe0) == 0)) {
                      local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 0x15);
                      local_10c = -1;
                      sscanf
                                (local_11c,"(%[^,], %[^)])%n",local_190c,local_1a9c,&local_10c);
                      if (local_10c < 2) {
                        _sprintf
                                  (g_ScriptErrorBuffer,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_11c = local_11c + local_10c;
                      core_script_cpp_trimString_FUN_00559360(local_190c);
                      core_script_cpp_trimString_FUN_00559360(local_1a9c);
                      pCVar9 = (CPlatform *)
                               core_script_cpp_getActor_FUN_005594e0
                                         (local_1a9c,g_CPlatformClassInfo.name_hash,
                                          &g_CPlatformClassInfo);
                      if ((pCVar9 == (CPlatform *)0x0) ||
                         (pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                              (local_190c,g_CDemonActorClassInfo.name_hash,
                                               &g_CDemonActorClassInfo),
                         pCVar14 == (CDemonActor *)0x0)) goto joined_r0x0055c026;
                      if (g_ScriptEventsEnabled == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(pCVar9);
                      }
                    }
                    else {
                      iVar6 = strnicmp(pcVar17,"beginFadeIn",0xb)
                      ;
                      if ((iVar6 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(pcVar17[0xb] + 1)] & 0xe0) == 0)) {
                        local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 0xb);
                        if (g_ScriptEventsEnabled == 0) {
                          core_game_cpp_CGame_beginFadeIn_FUN_004e0920(g_CGamePtr);
                        }
                      }
                      else {
                        iVar6 = strnicmp
                                          (pcVar17,"beginFadeOut",0xc);
                        if ((iVar6 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(pcVar17[0xc] + 1)] & 0xe0) == 0))
                        {
                          local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 0xc);
                          if (g_ScriptEventsEnabled == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004e0960(g_CGamePtr);
                          }
                        }
                        else {
                          iVar6 = strnicmp
                                            (pcVar17,"breakPoint",10);
                          if ((iVar6 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(pcVar17[10] + 1)] & 0xe0) == 0)
                             ) {
                            local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar17 + 10);
                            if (g_ScriptEventsEnabled == 0) {
                              _sprintf
                                        (local_890,"Script breakpoint reached at line %d",local_124);
                              core_game_cpp_CGame_displayMessage_FUN_004d7f20
                                        (g_CGamePtr,local_890,5.0);
                              this_ptr->script_state = 2;
                            }
                          }
                          else {
                            iVar6 = strnicmp
                                              (pcVar17,"cancelCameraHold",0x10);
                            if ((iVar6 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(pcVar17[0x10] + 1)] & 0xe0)
                                == 0)) {
                              local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                    (pcVar17 + 0x10);
                              if (g_ScriptEventsEnabled == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
                                          (g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar6 = strnicmp
                                                (pcVar17,"cancelWalkTo",0xc);
                              if ((iVar6 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(pcVar17[0xc] + 1)] & 0xe0)
                                  == 0)) {
                                local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                      (pcVar17 + 0xc);
                                pcVar17 = core_script_cpp_parseArgument_FUN_005593f0
                                                    (&local_11c,local_2334,200);
                                if (pcVar17 != (char *)0x0) {
                                  pcVar20 = g_ScriptErrorBuffer;
                                  do {
                                    cVar2 = *pcVar17;
                                    *pcVar20 = cVar2;
                                    if (cVar2 == '\0') {
                                      return -1;
                                    }
                                    cVar2 = pcVar17[1];
                                    pcVar17 = pcVar17 + 2;
                                    pcVar20[1] = cVar2;
                                    pcVar20 = pcVar20 + 2;
                                  } while (cVar2 != '\0');
                                  return -1;
                                }
                                iVar6 = stricmp(local_2334,"all")
                                ;
                                if (iVar6 == 0) {
                                  if (g_ScriptEventsEnabled == 0) {
                                    iVar18 = 0;
                                    for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr;
                                        iVar6 = iVar6 + 1) {
                                      pCVar13 = (CCharacter *)
                                                core_actor_cpp_castToClassHash_FUN_0040c790
                                                          (*(CDemonActor **)
                                                            (g_CDemonSetPtr->actor_list_data +
                                                            iVar18),g_CCharacterClassInfo.name_hash)
                                      ;
                                      if (pCVar13 != (CCharacter *)0x0) {
                                        (*(((pCVar13->base).vtable._uc)->_uc).setWalkTarget)
                                                  (pCVar13,(CDemonActor *)0x0,0.0,0.0);
                                      }
                                      iVar18 = iVar18 + 4;
                                    }
                                  }
                                }
                                else {
                                  pCVar13 = (CCharacter *)
                                            core_script_cpp_getActor_FUN_005594e0
                                                      (local_2334,g_CCharacterClassInfo.name_hash,
                                                       &g_CCharacterClassInfo);
                                  if (pCVar13 == (CCharacter *)0x0) goto joined_r0x0055c026;
                                  if (g_ScriptEventsEnabled == 0) {
                                    (*(((pCVar13->base).vtable._uc)->_uc).setWalkTarget)
                                              (pCVar13,(CDemonActor *)0x0,0.0,0.0);
                                  }
                                }
                              }
                              else {
                                iVar6 = strnicmp
                                                  (pcVar17,"chainToMission",0xe);
                                if ((iVar6 == 0) &&
                                   ((g_CharacterClassificationTable[(byte)(pcVar17[0xe] + 1)] & 0xe0
                                    ) == 0)) {
                                  local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                        (pcVar17 + 0xe);
                                  pcVar17 = core_script_cpp_parseArgument_FUN_005593f0
                                                      (&local_11c,local_2e24,200);
                                  if (pcVar17 != (char *)0x0) {
                                    pcVar20 = g_ScriptErrorBuffer;
                                    do {
                                      cVar2 = *pcVar17;
                                      *pcVar20 = cVar2;
                                      if (cVar2 == '\0') {
                                        return -1;
                                      }
                                      cVar2 = pcVar17[1];
                                      pcVar17 = pcVar17 + 2;
                                      pcVar20[1] = cVar2;
                                      pcVar20 = pcVar20 + 2;
                                    } while (cVar2 != '\0');
                                    return -1;
                                  }
                                  core_script_cpp_trimString_FUN_00559360(local_2e24);
                                  iVar6 = g_ScriptEventsEnabled;
                                  if (g_ScriptEventsEnabled == 0) {
                                    core_mission_cpp_CDemonMission_setMissionName_FUN_00524630
                                              (g_CDemonMissionPtr,local_2e24);
                                    this_ptr->script_pause_flag = 1;
                                    local_114 = iVar6;
                                  }
                                }
                                else {
                                  iVar6 = strnicmp
                                                    (pcVar17,"clearActorVariable",0x12);
                                  if ((iVar6 == 0) &&
                                     ((g_CharacterClassificationTable[(byte)(pcVar17[0x12] + 1)] &
                                      0xe0) == 0)) {
                                    local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                          (pcVar17 + 0x12);
                                    pcVar17 = core_script_cpp_parseArgument_FUN_005593f0
                                                        (&local_11c,local_3784,300);
                                    if (pcVar17 != (char *)0x0) {
LAB_0055c37e:
                                      pcVar20 = g_ScriptErrorBuffer;
                                      do {
                                        cVar2 = *pcVar17;
                                        *pcVar20 = cVar2;
                                        if (cVar2 == '\0') {
                                          return -1;
                                        }
                                        cVar2 = pcVar17[1];
                                        pcVar17 = pcVar17 + 2;
                                        pcVar20[1] = cVar2;
                                        pcVar20 = pcVar20 + 2;
                                      } while (cVar2 != '\0');
                                      return -1;
                                    }
                                    iVar6 = core_script_cpp_validateActorVariableName_FUN_00559220
                                                      (local_3784);
                                    if (iVar6 == 0) {
                                      return -1;
                                    }
                                    if (g_ScriptEventsEnabled == 0) {
                                      core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                (g_CEventListPtr);
                                    }
                                  }
                                  else {
                                    iVar6 = strnicmp
                                                      (pcVar17,"dbSay",5);
                                    if ((iVar6 == 0) &&
                                       ((g_CharacterClassificationTable[(byte)(pcVar17[5] + 1)] &
                                        0xe0) == 0)) {
                                      local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 5);
                                      local_108 = -1;
                                      sscanf
                                                (local_11c,"(%[^)])%n",local_c14,&local_108);
                                      if (local_108 < 3) {
                                        _sprintf
                                                  (g_ScriptErrorBuffer,
                                                   "Error parsing dbSay arguments");
                                        return -1;
                                      }
                                      core_script_cpp_trimString_FUN_00559360(local_c14);
                                      local_11c = local_11c + local_108;
                                      iVar6 = core_script_cpp_CScript_findDialogEntry_FUN_005606e0
                                                        (this_ptr,local_c14);
                                      if (iVar6 < 0) {
                                        local_104 = local_226c;
                                        local_e4 = "$";
                                        _sprintf
                                                  (local_226c,"[Can't find %s in database]",
                                                   local_c14);
                                        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                                  (&g_ScriptPickList.base,local_226c);
                                      }
                                      else {
                                        pSVar3 = this_ptr->dialog_entries;
                                        local_e4 = pSVar3[iVar6].data + 0x78;
                                        local_104 = pSVar3[iVar6].data + 0x96;
                                        pcVar20 = local_c14;
                                        pcVar17 = pSVar3[iVar6].data + 0x3c;
                                        do {
                                          cVar2 = *pcVar17;
                                          *pcVar20 = cVar2;
                                          if (cVar2 == '\0') break;
                                          cVar2 = pcVar17[1];
                                          pcVar17 = pcVar17 + 2;
                                          pcVar20[1] = cVar2;
                                          pcVar20 = pcVar20 + 2;
                                        } while (cVar2 != '\0');
                                      }
                                      if (this_ptr->dialog_wav_time < 0.0) {
                                        local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_0055ff00
                                                            (this_ptr,(int)local_e4,local_c14,
                                                             local_104);
                                        this_ptr->dialog_wav_time = local_14;
                                        if (this_ptr->dialog_wav_time < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((g_ScriptEventsEnabled == 0) &&
                                         (local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < local_114)) {
                                        core_script_cpp_CScript_setSpeaker_FUN_00560140
                                                  (this_ptr,this_ptr->who_is_speaking);
                                      }
                                    }
                                    else {
                                      iVar6 = strnicmp
                                                        (pcVar17,"dbStartSay",10);
                                      if ((iVar6 == 0) &&
                                         ((g_CharacterClassificationTable[(byte)(pcVar17[10] + 1)] &
                                          0xe0) == 0)) {
                                        local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                              (pcVar17 + 10);
                                        local_fc = -1;
                                        sscanf
                                                  (local_11c,"(%[^)])%n",local_1ec,&local_fc);
                                        if (local_fc < 3) {
                                          _sprintf
                                                    (g_ScriptErrorBuffer,
                                                     "Error parsing dbSay arguments");
                                          return -1;
                                        }
                                        core_script_cpp_trimString_FUN_00559360(local_1ec);
                                        local_11c = local_11c + local_fc;
                                        iVar6 = core_script_cpp_CScript_findDialogEntry_FUN_005606e0
                                                          (this_ptr,local_1ec);
                                        if (iVar6 < 0) {
                                          local_f4 = local_2654;
                                          local_f8 = "$";
                                          _sprintf
                                                    (local_2654,"[Can't find %s in database]",
                                                     local_1ec);
                                          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                                    (&g_ScriptPickList.base,local_2654);
                                        }
                                        else {
                                          pSVar3 = this_ptr->dialog_entries;
                                          local_f8 = pSVar3[iVar6].data + 0x78;
                                          local_f4 = pSVar3[iVar6].data + 0x96;
                                          pcVar20 = local_1ec;
                                          pcVar17 = pSVar3[iVar6].data + 0x3c;
                                          do {
                                            cVar2 = *pcVar17;
                                            *pcVar20 = cVar2;
                                            if (cVar2 == '\0') break;
                                            cVar2 = pcVar17[1];
                                            pcVar17 = pcVar17 + 2;
                                            pcVar20[1] = cVar2;
                                            pcVar20 = pcVar20 + 2;
                                          } while (cVar2 != '\0');
                                        }
                                        local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_0055ff00
                                                            (this_ptr,(int)local_f8,local_1ec,
                                                             local_f4);
                                        this_ptr->dialog_wav_time = local_14;
                                        fVar7 = this_ptr->dialog_wav_time;
joined_r0x0055f6da:
                                        if (fVar7 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar6 = strnicmp
                                                          (pcVar17,"debug",5);
                                        if ((iVar6 == 0) &&
                                           ((g_CharacterClassificationTable[(byte)(pcVar17[5] + 1)]
                                            & 0xe0) == 0)) {
                                          local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                                (pcVar17 + 5);
                                          pcVar17 = core_script_cpp_parseArgument_FUN_005593f0
                                                              (&local_11c,local_3658,300);
                                          if (pcVar17 != (char *)0x0) goto LAB_0055c37e;
                                          if (g_ScriptEventsEnabled == 0) {
                                            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                                                      (g_CEditorToolsPtr,
                                                       "Script debug message at line %d:\n%s",local_124
                                                       ,local_3658);
                                          }
                                        }
                                        else {
                                          iVar6 = strnicmp
                                                            (pcVar17,"dismember",9);
                                          if ((iVar6 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(pcVar17[9] + 1)] & 0xe0) == 0)) {
                                            local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                                  (pcVar17 + 9);
                                            local_60 = -1;
                                            sscanf
                                                      (local_11c,"(%[^,], %[^,)]%n",local_3144,local_1844,
                                                       &local_60);
                                            if (local_60 < 5) {
                                              _sprintf
                                                        (g_ScriptErrorBuffer,
                                                         "Error parsing dismember command parms");
                                              return -1;
                                            }
                                            local_11c = local_11c + local_60;
                                            core_script_cpp_trimString_FUN_00559360(local_3144);
                                            core_script_cpp_trimString_FUN_00559360(local_1844);
                                            local_f0 = (CCharacter *)
                                                       core_script_cpp_getActor_FUN_005594e0
                                                                 (local_3144,
                                                                  g_CCharacterClassInfo.name_hash,
                                                                  &g_CCharacterClassInfo);
                                            if (local_f0 == (CCharacter *)0x0)
                                            goto joined_r0x0055c026;
                                            iVar6 = core_script_cpp_parseBodyPartMask_FUN_00559730
                                                              (local_f0,local_1844,local_c8c);
                                            if (iVar6 == 0) {
                                              return -1;
                                            }
                                            core_actor_cpp_CVector_ctor_FUN_00410340(&local_154);
                                            if (*local_11c == ',') {
                                              local_60 = -1;
                                              sscanf
                                                        (local_11c,",%f ,%f ,%f ,%f %n",&local_154,
                                                         &local_154.y,&local_154.z,&local_3f80,
                                                         &local_60);
                                              if (local_60 < 5) {
                                                _sprintf
                                                          (g_ScriptErrorBuffer,
                                                           "Error parsing dismember command parms");
                                                return -1;
                                              }
                                              local_11c = local_11c + local_60;
                                              if (0.0 < local_3f80) {
                                                local_3f80 = local_3f80 * (float)3.1415926535000001 *
                                                             (float)0.0055555555555555497;
                                                fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                                                  (-local_3f80,local_3f80);
                                                y = 0.0;
                                                local_14 = fVar7;
                                                local_14 = 
                                                  core_actor_cpp_getRandomFloat_FUN_0040cc10
                                                            (-local_3f80,local_3f80);
                                                pCVar12 = core_script_cpp_makeVector_FUN_00567d00
                                                                    (&local_130,local_14,y,fVar7);
                                                core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                                                          (&local_188,pCVar12);
                                                pCVar12 = 
                                                  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                                            (&local_188,&local_13c,&local_154);
                                                core_actor_cpp_copyVector_FUN_00410360
                                                          (&local_154,pCVar12);
                                              }
                                            }
                                            if (*local_11c != ')') {
                                              _sprintf
                                                        (g_ScriptErrorBuffer,
                                                         "Error parsing dismember command parms near '%s'",
                                                         local_11c);
                                              return -1;
                                            }
                                            local_11c = local_11c + 1;
                                            if (g_ScriptEventsEnabled == 0) {
                                              local_ec = 
                                                  core_bodypart_cpp_createBodyPart_FUN_00418e10();
                                              iVar18 = 0;
                                              iVar6 = 0;
                                              do {
                                                if (*(int *)((int)local_c8c + iVar18) != 0) {
                                                  core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                                                            (local_f0,local_ec,iVar6,0);
                                                }
                                                iVar6 = iVar6 + 1;
                                                iVar18 = iVar18 + 4;
                                              } while (iVar6 < 0x1e);
                                              core_bodypart_cpp_CBodyPart_FUN_0041a050(local_ec);
                                            }
                                          }
                                          else {
                                            iVar6 = strnicmp
                                                              (pcVar17,"display",7);
                                            if ((iVar6 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(pcVar17[7] + 1)] & 0xe0) == 0)) {
                                              local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 7);
                                              pcVar17 = core_script_cpp_parseArgument_FUN_005593f0
                                                                  (&local_11c,
                                                                   this_ptr->current_message,0x400);
                                              if (pcVar17 != (char *)0x0) {
                                                _sprintf
                                                          (g_ScriptErrorBuffer,
                                                           "Error parsing message text on display statament: %s",
                                                           pcVar17);
                                                return -1;
                                              }
                                            }
                                            else {
                                              iVar6 = strnicmp
                                                                (pcVar17,"else",4);
                                              if ((iVar6 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(pcVar17[4] + 1)] & 0xe0) == 0)) {
                                                local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 4);
                                                iVar6 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_005601c0
                                                            (this_ptr,this_ptr->next_cmd,1);
                                                if (iVar6 < 0) {
                                                  _sprintf
                                                            (g_ScriptErrorBuffer,
                                                             "Can't skip next command after else statement on line %d",
                                                             local_124);
                                                  return -1;
                                                }
                                                this_ptr->next_cmd = iVar6;
                                              }
                                              else {
                                                iVar6 = strnicmp
                                                                  (pcVar17,"enableCamera",
                                                                   0xc);
                                                if ((iVar6 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(pcVar17[0xc] + 1)] & 0xe0) == 0)) {
                                                  local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xc);
                                                  local_4c = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^)])%n",local_307c,
                                                             local_2d5c,&local_4c);
                                                  if (local_4c < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing enableCamera parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_4c;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_307c);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_2d5c);
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790
                                                            (g_CDemonSetPtr,local_307c);
                                                  if (iVar6 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Camera \"%s\" does not exist.",
                                                               local_307c);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_2d5c);
                                                  core_set_cpp_CDemonSet_FUN_00570ea0
                                                            (g_CDemonSetPtr);
                                                  }
                                                  else {
                                                    pcVar17 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004add00
                                                            (g_CEventListPtr,local_2d5c);
                                                  if (pcVar17 != (char *)0x0) {
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar6 = strnicmp
                                                                    (pcVar17,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0x11] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0x11);
                                                  local_48 = -1;
                                                  sscanf
                                                            (local_11c,"(%d , %[^)])%n",local_ac,
                                                             local_1dbc,&local_48);
                                                  if (local_48 < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing enableCameraGroup parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_48;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1dbc);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_1dbc);
                                                  core_set_cpp_CDemonSet_FUN_00570ec0
                                                            (g_CDemonSetPtr);
                                                  }
                                                  else {
                                                    pcVar17 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004add00
                                                            (g_CEventListPtr,local_1dbc);
                                                  if (pcVar17 != (char *)0x0) {
LAB_0055cd52:
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xf);
                                                  local_dc = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^)])%n",local_32d4,
                                                             local_1f4c,&local_dc);
                                                  if (local_dc < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing enableHealthBar parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_dc;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_32d4);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1f4c);
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_32d4,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  iVar6 = stricmp
                                                                    (local_1f4c,"false");
                                                  pCVar8 = (CDemonActor_vtable *)0x0;
                                                  if (iVar6 != 0) {
                                                    iVar6 = stricmp
                                                                      (local_1f4c,"true");
                                                    if (iVar6 == 0) {
                                                      pCVar8 = (CDemonActor_vtable *)0x1;
                                                    }
                                                    else {
                                                      iVar6 = stricmp
                                                                        (local_1f4c,
                                                                         "always");
                                                      if (iVar6 != 0) {
                                                        _sprintf
                                                                  (g_ScriptErrorBuffer,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'",local_1f4c);
                                                  return -1;
                                                  }
                                                  pCVar8 = (CDemonActor_vtable *)0x2;
                                                  }
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    pCVar14[0x1a].vtable._ub = pCVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"end",3);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[3] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 3);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    local_114 = g_ScriptEventsEnabled;
                                                    this_ptr->script_pause_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"fadeIn",6);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[6] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 6);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    local_114 = g_ScriptEventsEnabled;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar15 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004e0b90
                                                            (g_CGamePtr);
                                                  if (uVar15 != 0) {
                                                    local_114 = 1;
                                                    g_CGamePtr->allow_damage_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeIn_FUN_004e0920
                                                              (g_CGamePtr);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"fadeOut",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[7] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 7);
                                                  iVar6 = g_ScriptEventsEnabled;
                                                  pCVar4 = g_CGamePtr;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    g_CGamePtr->allow_damage_flag = 0;
                                                    local_114 = iVar6;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar15 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004e0b90(pCVar4);
                                                  if (uVar15 != 0) {
                                                    local_114 = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeOut_FUN_004e0960
                                                              (pCVar4);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"gesture",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[7] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 7);
                                                  local_d8 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^)])%n",local_23fc,
                                                             local_19d4,&local_d8);
                                                  if (local_d8 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing gesture command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_d8;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_23fc);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_19d4);
                                                  pCVar13 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_23fc,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar13 == (CCharacter *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    uVar15 = 
                                                  core_charactr_cpp_CCharacter_initGesture_FUN_0042d390
                                                            (pCVar13,local_19d4);
                                                  }
                                                  else {
                                                    this_ptr_01 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            (&(pCVar13->model).motion_controller);
                                                  iVar6 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                            (this_ptr_01);
                                                  uVar15 = (uint)(-1 < iVar6);
                                                  }
                                                  if (uVar15 == 0) {
                                                    iVar6 = core_bugs_cpp_FUN_00427b70();
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Gesture name %s is not valid for actor %s, model %s",
                                                               local_19d4,local_23fc,iVar6);
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"getIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[9] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 9);
                                                  local_d4 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^,)] )%n",local_113c,
                                                             local_1e84,&local_d4);
                                                  if (local_d4 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing getIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_d4;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_113c);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1e84);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004fba70
                                                              (&local_3d6c,
                                                               "system\\nocturne.ini",
                                                               0x64241a);
                                                    local_d0 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_004b0830
                                                            (g_CEventListPtr,local_1e84);
                                                  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
                                                            (&local_3d6c,local_113c,&local_d0);
                                                  core_event_cpp_CEventList_setCounter_FUN_004b0720
                                                            (g_CEventListPtr,local_1e84,local_d0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xf);
                                                  local_cc = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^)])%n",local_1074,
                                                             local_1b64,&local_cc);
                                                  if (local_cc < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing getTriggerActor command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_cc;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1074);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1b64);
                                                  iVar6 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00559220
                                                            (local_1074);
                                                  if (iVar6 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_1b64,
                                                                       g_CTriggerClassInfo.name_hash
                                                                       ,&g_CTriggerClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                            (g_CEventListPtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"gosub",5);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[5] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 5);
                                                  iVar6 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00560160
                                                            (this_ptr,local_11c);
                                                  if (iVar6 < 0) {
                                                    dVar1 = (double)CONCAT44(local_124,local_11c);
                                                    pcVar17 = "Undefined label %s used in gosub statement on line %d";
LAB_0055a97f:
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,pcVar17,
                                                               SUB84(dVar1,0),
                                                               (int)((ulonglong)dVar1 >> 0x20));
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    if (7 < this_ptr->call_stack_count) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Call stack overflow detected on script line %d."
                                                                 ,local_124);
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack[this_ptr->call_stack_count]
                                                         = this_ptr->next_cmd;
                                                    this_ptr->next_cmd = iVar6;
                                                    this_ptr->call_stack_count =
                                                         this_ptr->call_stack_count + 1;
                                                    local_11c = &s_EmptyChar_006424ec;
                                                  }
                                                  else {
                                                    local_11c = &s_EmptyChar_006424ec;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"goto",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[4] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 4);
                                                  iVar6 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00560160
                                                            (this_ptr,local_11c);
                                                  if (iVar6 < 0) {
                                                    dVar1 = (double)CONCAT44(local_124,local_11c);
                                                    pcVar17 = "Undefined label %s used in goto statement on line %d";
                                                    goto LAB_0055a97f;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr->next_cmd = iVar6;
                                                    local_11c = &s_EmptyChar_00642527;
                                                  }
                                                  else {
                                                    local_11c = &s_EmptyChar_00642527;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"gtfo",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[4] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 4);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_3400,300);
                                                  if (pcVar17 != (char *)0x0) goto LAB_0055cd52;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                            (g_CEditorToolsPtr,
                                                             "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                             local_124,local_3400);
                                                  this_ptr->script_pause_flag = 1;
                                                  local_114 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xd);
                                                  local_c8 = 0xffffffff;
                                                  sscanf
                                                            (local_11c,"(%[^,)]%n",local_1524,
                                                             &local_c8);
                                                  if ((int)local_c8 < 2) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing holsterWeapon command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_c8;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1524);
                                                  local_c4 = (CEnemy *)
                                                             core_script_cpp_getActor_FUN_005594e0
                                                                       (local_1524,
                                                                        g_CHeroClassInfo.name_hash,
                                                                        &g_CHeroClassInfo);
                                                  if (local_c4 == (CEnemy *)0x0)
                                                  goto joined_r0x0055c026;
                                                  local_c0 = 1;
                                                  if (*local_11c == ',') {
                                                    local_11c = local_11c + 1;
                                                    uVar15 = 0xffffffff;
                                                    pcVar17 = local_11c;
                                                    do {
                                                      if (uVar15 == 0) break;
                                                      uVar15 = uVar15 - 1;
                                                      cVar2 = *pcVar17;
                                                      pcVar17 = pcVar17 + (uint)bVar21 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    uVar15 = ~uVar15 - 2;
                                                    local_c8 = uVar15;
                                                    if ((int)uVar15 < 1) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    pcVar17 = local_11c;
                                                    pcVar20 = acStack_fad + 1;
                                                    for (uVar16 = uVar15 >> 2; uVar16 != 0;
                                                        uVar16 = uVar16 - 1) {
                                                      *(uint *)pcVar20 =
                                                           *(uint *)pcVar17;
                                                      pcVar17 = pcVar17 + (uint)bVar21 * -8 + 4;
                                                      pcVar20 = pcVar20 + (uint)bVar21 * -8 + 4;
                                                    }
                                                    for (uVar15 = uVar15 & 3; uVar15 != 0;
                                                        uVar15 = uVar15 - 1) {
                                                      *pcVar20 = *pcVar17;
                                                      pcVar17 = pcVar17 + (uint)bVar21 * -2 + 1;
                                                      pcVar20 = pcVar20 + (uint)bVar21 * -2 + 1;
                                                    }
                                                    pcVar17 = local_11c + local_c8;
                                                    acStack_fad[local_c8 + 1] = '\0';
                                                    local_11c = pcVar17;
                                                    if (g_ScriptEventsEnabled == 0) {
                                                      local_c0 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,acStack_fad + 1);
                                                  }
                                                  else {
                                                    pcVar17 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004add00
                                                            (g_CEventListPtr,acStack_fad + 1);
                                                  if (pcVar17 != (char *)0x0) goto LAB_0055d708;
                                                  }
                                                  }
                                                  if (*local_11c != ')') {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Missing closing ')' in holsterWeapon command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    (*(((local_c4->base).base.vtable._ue)->_ue).
                                                      updateVictim)(local_c4,SUB14(local_c0 == 0,0))
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"idle",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[4] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 4);
                                                  local_110 = this_ptr->next_cmd;
                                                  local_114 = 0;
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"if",2);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[2] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 2);
                                                  pcVar17 = 
                                                  core_script_cpp_parseConditionExpr_FUN_005594a0
                                                            (&local_11c,local_444);
                                                  if (pcVar17 != (char *)0x0) goto LAB_0055d708;
                                                  if ((g_ScriptEventsEnabled == 0) &&
                                                     (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_444), iVar6 == 0)
                                                  ) {
                                                    iVar6 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_005601c0
                                                            (this_ptr,this_ptr->next_cmd,0);
                                                  if (iVar6 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Can't skip next command after if statement on line %d",
                                                               local_124);
                                                    return -1;
                                                  }
                                                  iVar18 = strnicmp
                                                                     (this_ptr->parsed_lines[iVar6].
                                                                      text,"else",4);
                                                  if (iVar18 == 0) {
                                                    iVar6 = iVar6 + 1;
                                                  }
                                                  this_ptr->next_cmd = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "finishedAct",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xb);
                                                  local_bc = -1;
                                                  sscanf
                                                            (local_11c," ( )%n",&local_bc);
                                                  iVar6 = g_ScriptEventsEnabled;
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_bc < 2) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing finishedAct command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_bc;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr->script_pause_flag = 1;
                                                    local_114 = iVar6;
                                                    pCVar4->act_completion_state = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"letterbox",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[9] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 9);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_b4c,100);
                                                  if (pcVar17 != (char *)0x0) {
LAB_0055d708:
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  iVar18 = -1;
                                                  iVar6 = stricmp
                                                                    (local_b4c,"false");
                                                  if (iVar6 == 0) {
                                                    iVar18 = 0;
                                                  }
                                                  iVar6 = stricmp
                                                                    (local_b4c,"true");
                                                  if (iVar6 == 0) {
                                                    iVar18 = 1;
                                                  }
                                                  iVar6 = stricmp
                                                                    (local_b4c,"bottom");
                                                  pCVar4 = g_CGamePtr;
                                                  if (iVar6 == 0) {
                                                    iVar18 = 2;
                                                  }
                                                  else if (iVar18 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Invalid letterBox mode: %s",
                                                               local_b4c);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    g_CGamePtr->letterbox_mode = iVar18;
                                                    pCVar4->allow_damage_flag = (uint)(iVar18 == 0);
                                                    pCVar4->allow_enemy_attack_flag =
                                                         (uint)(pCVar4->letterbox_mode == 0);
                                                    pCVar4->allow_hero_controls_flag =
                                                         pCVar4->letterbox_mode;
                                                    this_ptr->saved_cmd_index = -1;
                                                    pCVar5 = g_CDemonSetPtr;
                                                    g_ScriptInputFlag = 1;
                                                    if ((pCVar4->block_auto_save != 0) &&
                                                       (pCVar4->letterbox_mode != 0)) {
                                                      pCVar4->block_auto_save = 0;
                                                      iVar6 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_004b1970
                                                            (pCVar5);
                                                  core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                                                            (g_CDemonSetPtr,
                                                             g_CScriptPtr->focus_actor,1);
                                                  pCVar5 = g_CDemonSetPtr;
                                                  g_CScriptPtr->unk2 = 0;
                                                  iVar18 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_004b1970
                                                            (pCVar5);
                                                  if (iVar6 == iVar18) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                                                            (g_CDemonSetPtr,iVar18);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xe);
                                                  pcVar17 = 
                                                  core_script_cpp_parseConditionExpr_FUN_005594a0
                                                            (&local_11c,local_570);
                                                  if (pcVar17 != (char *)0x0) goto LAB_0055d708;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_570);
                                                  this_ptr->focus_actor_locked = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"lookAt",6);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[6] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 6);
                                                  local_b8 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,)]%n",local_1394,
                                                             &local_b8);
                                                  if (local_b8 < 2) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing lookAt command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_b8;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1394);
                                                  pCVar13 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_1394,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar13 == (CCharacter *)0x0) {
joined_r0x0055c026:
                                                    if (g_ActorLookedUpByVariable == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_0055a8d4;
                                                  }
                                                  pCVar14 = (CDemonActor *)0x0;
                                                  if (*local_11c == ',') {
                                                    local_b8 = -1;
                                                    sscanf
                                                              (local_11c,", %[^)]%n",local_2fb4,
                                                               &local_b8);
                                                    if (local_b8 < 3) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Error parsing lookAt command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_b8;
                                                    core_script_cpp_trimString_FUN_00559360
                                                              (local_2fb4);
                                                    pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                        (local_2fb4,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo);
                                                    if (pCVar14 == (CDemonActor *)0x0)
                                                    goto joined_r0x0055c026;
                                                  }
                                                  if (*local_11c != ')') {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Missing closing ')' in lookAt command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setLookAtTarget_FUN_0042ddd0
                                                            (pCVar13,pCVar14);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "movePlatform",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xc);
                                                  local_b4 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %f , %f )%n",local_2a3c,
                                                             &local_3f78,&local_3f74,&local_b4);
                                                  if (local_b4 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing movePlatform command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_b4;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_2a3c);
                                                  pCVar9 = (CPlatform *)
                                                           core_script_cpp_getActor_FUN_005594e0
                                                                     (local_2a3c,
                                                                      g_CPlatformClassInfo.name_hash
                                                                      ,&g_CPlatformClassInfo);
                                                  if (pCVar9 == (CPlatform *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if ((local_3f78 < 0.0) || (1.0 < local_3f78)) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  dVar1 = (double)local_3f74;
                                                  if (dVar1 <= 0.0) {
                                                    pcVar17 = "Invalid movement rate %f";
                                                    goto LAB_0055a97f;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_platfrm_cpp_CPlatform_FUN_0054d690(pCVar9);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"openDoor",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[8] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 8);
                                                  local_b0 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^)])%n",local_28ac,
                                                             local_2eec,&local_b0);
                                                  if (local_b0 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing openDoor command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_b0;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_2eec);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_28ac);
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_2eec,
                                                                       g_CDoorClassInfo.name_hash,
                                                                       &g_CDoorClassInfo);
                                                  if ((pCVar14 == (CDemonActor *)0x0) ||
                                                     (pCVar13 = (CCharacter *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_28ac,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar13 == (CCharacter *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    local_114 = g_ScriptEventsEnabled;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      iVar6 = (*(((pCVar13->base).vtable._uc)->_uc).
                                                                hasDoorTarget)(pCVar13);
                                                      if (iVar6 != 0) {
                                                        local_110 = 1;
                                                      }
                                                    }
                                                    else {
                                                      (*(((pCVar13->base).vtable._uc)->_uc).
                                                        setDoorTarget)(pCVar13,(uint)pCVar14);
                                                      this_ptr->cmd_timer = 1.0;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "pressButton",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xb);
                                                  local_a8 = -1;
                                                  sscanf
                                                            (local_11c,"( %[^,], %[^)])%n",local_4a8,
                                                             local_50c,&local_a8);
                                                  if (local_a8 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing pressButton() command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_a8;
                                                  core_script_cpp_trimString_FUN_00559360(local_4a8)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00559360(local_50c)
                                                  ;
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_4a8,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  piVar10 = 
                                                  core_script_cpp_getActionKeyOffset_FUN_00559660
                                                            ((SActionKeyBindings *)
                                                             (pCVar14[0x8d].create_event + 0x3c),
                                                             local_50c);
                                                  if (piVar10 == (int *)0x0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Invalid button name: %s",
                                                               local_50c);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    if (g_ScriptInputFlag != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
                                                            (g_CGamePtr);
                                                  g_ScriptInputFlag = 0;
                                                  }
                                                  *piVar10 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"raise",5);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[5] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 5);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_a20,100);
                                                  if (pcVar17 != (char *)0x0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing event expression on raise statament: %s",
                                                               pcVar17);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                                                            (g_CEventListPtr,local_a20);
                                                  }
                                                  else {
                                                    pcVar17 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_004add40
                                                            (g_CEventListPtr,local_a20);
                                                  if (pcVar17 != (char *)0x0) {
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "releaseButton",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xd);
                                                  local_a0 = -1;
                                                  sscanf
                                                            (local_11c,"( %[^,], %[^)])%n",local_700,
                                                             local_8f4,&local_a0);
                                                  if (local_a0 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing releaseButton() command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_a0;
                                                  core_script_cpp_trimString_FUN_00559360(local_700)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00559360(local_8f4)
                                                  ;
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_700,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  piVar10 = 
                                                  core_script_cpp_getActionKeyOffset_FUN_00559660
                                                            ((SActionKeyBindings *)
                                                             (pCVar14[0x8d].create_event + 0x3c),
                                                             local_8f4);
                                                  iVar6 = g_ScriptEventsEnabled;
                                                  if (piVar10 == (int *)0x0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Invalid button name: %s",
                                                               local_8f4);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    if (g_ScriptInputFlag != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
                                                            (g_CGamePtr);
                                                  g_ScriptInputFlag = iVar6;
                                                  }
                                                  *piVar10 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0x1b] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0x1b);
                                                  local_9c = -1;
                                                  sscanf
                                                            (local_11c," ( %[^)])%n",local_271c,
                                                             &local_9c);
                                                  if (local_9c < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing removeAllItemsFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_9c;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_271c);
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_271c,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004fd190
                                                              ((CInventory *)
                                                               (pCVar14[0x176].create_event + 0x30))
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0x17] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0x17);
                                                  local_98 = -1;
                                                  sscanf
                                                            (local_11c," ( %[^,], %[^)])%n",local_20dc,
                                                             local_2014,&local_98);
                                                  if (local_98 < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_98;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_20dc);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_2014);
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_20dc,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if ((g_ScriptEventsEnabled == 0) &&
                                                     (pCVar11 = 
                                                  core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                                                            (&g_HeroActors[g_LocalHeroIndex]->
                                                              inventory,local_2014),
                                                  pCVar11 != (CDemonActor *)0x0)) {
                                                    core_inv_cpp_CInventory_removeItem_FUN_004fea70
                                                              ((CInventory *)
                                                               (pCVar14[0x176].create_event + 0x30),
                                                               pCVar11,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"removeKeys"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[10] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 10);
                                                  local_90 = -1;
                                                  sscanf
                                                            (local_11c," (%d )%n",local_94,
                                                             &local_90);
                                                  if (local_90 < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_90;
                                                  if (g_CNetGamePtr->connection_type != 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_hero_cpp_CHero_FUN_004f3910
                                                              (g_HeroActors[g_LocalHeroIndex]);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"return",6);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[6] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 6);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    iVar6 = this_ptr->call_stack_count;
                                                    if (iVar6 < 1) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Return without gosub detected on script line %d."
                                                                 ,local_124);
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack_count = iVar6 + -1;
                                                    this_ptr->next_cmd =
                                                         this_ptr->call_stack[iVar6 + -1];
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "rollCredits",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xb);
                                                  local_8c = -1;
                                                  sscanf
                                                            (local_11c," ( )%n",&local_8c);
                                                  iVar6 = g_ScriptEventsEnabled;
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_8c < 2) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_8c;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr->script_pause_flag = 1;
                                                    local_114 = iVar6;
                                                    pCVar4->act_completion_state = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"say",3);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[3] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 3);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_3b6c,500);
                                                  if (pcVar17 != (char *)0x0) {
LAB_0055e656:
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_88 = -1;
                                                  sscanf
                                                            (local_3b6c,"%[^,], %[^,], %n",local_258c,
                                                             local_145c,&local_88);
                                                  if (local_88 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_258c);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_145c);
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    pcVar17 = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (local_3b6c + local_88);
                                                  local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_0055ff00
                                                            (this_ptr,(int)local_258c,local_145c,
                                                             pcVar17);
                                                  this_ptr->dialog_wav_time = local_14;
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    return -1;
                                                  }
                                                  }
                                                  if ((g_ScriptEventsEnabled == 0) &&
                                                     (local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < local_114)) {
                                                    core_script_cpp_CScript_setSpeaker_FUN_00560140
                                                              (this_ptr,this_ptr->who_is_speaking);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "selectWeapon",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xc);
                                                  local_84 = -1;
                                                  sscanf
                                                            (local_11c," (%[^,], %[^)])%n",local_ae8,
                                                             local_69c,&local_84);
                                                  if (local_84 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing selectWeapon parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00559360(local_ae8)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00559360(local_69c)
                                                  ;
                                                  local_11c = local_11c + local_84;
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_ae8,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr_00 = (CGabriella *)
                                                                  (pCVar14[0x176].create_event +
                                                                  0x30);
                                                    local_80 = g_ScriptEventsEnabled;
                                                    pCVar14 = (CDemonActor *)
                                                                                                                            
                                                  core_gabriela_cpp_CGabriella_FUN_004d7650
                                                            (this_ptr_00);
                                                  local_7c = pCVar14;
                                                  if (pCVar14 != (CDemonActor *)0x0) {
                                                    do {
                                                      if (pCVar14 == (CDemonActor *)0x0) {
                                                        g_CurrentFilename =
                                                             "..\\core\\script.cpp";
                                                        g_CurrentLineNumber = 0xad9;
                                                        core_main_c_displayErrorAndQuit_FUN_00506f10
                                                                  (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                                                    (pCVar14,local_69c);
                                                  if (iVar6 != 0) goto LAB_0055a8bb;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
                                                            ((CInventory *)this_ptr_00,
                                                             (CDemonActor *)0x0,5,1);
                                                  pCVar14 = (CDemonActor *)
                                                                                                                        
                                                  core_gabriela_cpp_CGabriella_FUN_004d7650
                                                            (this_ptr_00);
                                                  } while (pCVar14 != local_7c);
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
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setActorVariable",0x10);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0x10] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0x10);
                                                  local_78 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^)])%n",local_12cc,
                                                             local_24c4,&local_78);
                                                  if (local_78 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing setActorVariable command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_78;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_12cc);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_24c4);
                                                  iVar6 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00559220
                                                            (local_12cc);
                                                  if (iVar6 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_24c4,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                            (g_CEventListPtr);
                                                  }
                                                  else if ((pCVar14 == (CDemonActor *)0x0) &&
                                                          (g_ActorLookedUpByVariable == 0)) {
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xf);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_82c,100);
                                                  if (pcVar17 != (char *)0x0) goto LAB_0055e656;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0
                                                            (g_CSoundPtr,local_82c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xe);
                                                  local_70 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %d)%n",local_2b04,
                                                             &local_74,&local_70);
                                                  if (local_70 < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing setCameragroup parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_70;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_2b04);
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790
                                                            (g_CDemonSetPtr,local_2b04);
                                                  if (iVar6 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Camera \"%s\" does not exist.",
                                                               local_2b04);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    g_CDemonSetPtr->cameras[iVar6].unk2 = local_74;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0x12);
                                                  local_68 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %f)%n",local_320c,
                                                             &local_6c,&local_68);
                                                  if (local_68 < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing setCharacterHealth parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_68;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_320c);
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_320c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    pCVar14[0x1a].next_actor =
                                                         (CDemonActor *)
                                                         ((float)pCVar14[0x1a].prev_actor * local_6c
                                                         );
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setFocusActor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xd);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_9bc,100);
                                                  if (pcVar17 != (char *)0x0) {
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_9bc,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (pCVar14 != this_ptr->focus_actor) {
                                                    this_ptr->unk2 = 1;
                                                    this_ptr->focus_actor = pCVar14;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setHeroTask",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xb);
                                                  local_64 = -1;
                                                  sscanf
                                                            (local_11c," (%[^,], %[^)])%n",local_638,
                                                             local_2b4,&local_64);
                                                  if (local_64 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing setHeroTask parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00559360(local_638)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00559360(local_2b4)
                                                  ;
                                                  local_11c = local_11c + local_64;
                                                  this_ptr_02 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_638,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (this_ptr_02 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  iVar6 = stricmp
                                                                    (local_2b4,"stand");
                                                  if ((((iVar6 != 0) &&
                                                       (iVar6 = stricmp
                                                                          (local_2b4,
                                                                           "follow"),
                                                       iVar6 != 0)) &&
                                                      (iVar6 = stricmp
                                                                         (local_2b4,"kill")
                                                      , iVar6 != 0)) &&
                                                     ((iVar6 = stricmp
                                                                         (local_2b4,"guard"
                                                                         ), iVar6 != 0 &&
                                                      (iVar6 = stricmp
                                                                         (local_2b4,
                                                                          "suspend"),
                                                      iVar6 != 0)))) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Invalid Task: %s",local_2b4);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_hero_cpp_CHero_FUN_004f3930(this_ptr_02);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"setIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[9] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 9);
                                                  local_58 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %d )%n",local_e1c,
                                                             &local_5c,&local_58);
                                                  if (local_58 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing setIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_58;
                                                  core_script_cpp_trimString_FUN_00559360(local_e1c)
                                                  ;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004fba70
                                                              (&local_3f6c,
                                                               "system\\nocturne.ini",
                                                               0x642d3b);
                                                    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
                                                              (&local_3f6c,local_e1c,local_5c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0x12);
                                                  local_54 = -1;
                                                  sscanf
                                                            (local_11c," (%n %n",&local_54,
                                                             &local_54);
                                                  if (local_54 < 1) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing setSayTimeOverride parameters.");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_54;
                                                  local_50 = 0xbf800000;
                                                  if (*local_11c == ')') {
                                                    local_11c = local_11c + 1;
                                                  }
                                                  else {
                                                    local_54 = -1;
                                                    sscanf
                                                              (local_11c,"%f )%n",&local_50,
                                                               &local_54);
                                                    if (local_54 < 1) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_54;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    *(uint *)
                                                     (this_ptr->current_message + 0x400) = local_50;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xc);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_764,100);
                                                  if (pcVar17 != (char *)0x0) {
LAB_0055f0a8:
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  iVar6 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00560160
                                                            (this_ptr,local_764);
                                                  if (iVar6 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Undefined label '%s'",
                                                               local_764);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr->saved_cmd_index = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[10] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 10);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_3e0,100);
                                                  if (pcVar17 != (char *)0x0) goto LAB_0055f0a8;
                                                  if (local_3e0[0] == '\0') {
                                                    this_ptr->who_is_speaking = (CDemonActor *)0x0;
                                                  }
                                                  else {
                                                    pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                        (local_3e0,
                                                                         g_CCharacterClassInfo.
                                                                         name_hash,
                                                                         &g_CCharacterClassInfo);
                                                    this_ptr->who_is_speaking = pCVar14;
                                                    if (pCVar14 == (CDemonActor *)0x0)
                                                    goto joined_r0x0055c026;
                                                  }
                                                  this_ptr->unk1 = (int)this_ptr->who_is_speaking;
                                                  if ((this_ptr->focus_actor_locked == 0) &&
                                                     (this_ptr->who_is_speaking !=
                                                      this_ptr->focus_actor)) {
                                                    this_ptr->unk2 = 1;
                                                    this_ptr->focus_actor =
                                                         this_ptr->who_is_speaking;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xd);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_318,100);
                                                  if (pcVar17 != (char *)0x0) {
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_3f70 = -1.0;
                                                  sscanf
                                                            (local_318,"%f",&local_3f70);
                                                  if (((double)local_3f70 <= 0.0) ||
                                                     (4 < (double)local_3f70)) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Invalid time factor %s",
                                                               local_318);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    g_CGamePtr->time_scale_factor = local_3f70;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"setVictim",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[9] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 9);
                                                  local_44 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,)]%n",local_1cf4,
                                                             &local_44);
                                                  if (local_44 < 2) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing setVictim command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_44;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1cf4);
                                                  this_ptr_03 = (CEnemy *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_1cf4,g_CEnemyClassInfo.name_hash,
                                                             &g_CEnemyClassInfo);
                                                  if (this_ptr_03 == (CEnemy *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (*local_11c == ',') {
                                                    local_44 = -1;
                                                    sscanf
                                                              (local_11c,", %[^)]%n",local_1204,
                                                               &local_44);
                                                    if (local_44 < 3) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Error parsing setVictim command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_44;
                                                    core_script_cpp_trimString_FUN_00559360
                                                              (local_1204);
                                                    iVar6 = stricmp
                                                                      (local_1204,"disable"
                                                                      );
                                                    if ((iVar6 != 0) &&
                                                       (pCVar14 = 
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_1204,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar14 == (CDemonActor *)0x0))
                                                  goto joined_r0x0055c026;
                                                  }
                                                  if (*local_11c != ')') {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Missing closing ')' in setVictim command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_enemy_cpp_CEnemy_FUN_004a9ef0(this_ptr_03);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"snapToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[10] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 10);
                                                  local_40 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^)])%n",local_2c94,
                                                             local_1c2c,&local_40);
                                                  if (local_40 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error snaping turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_40;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_2c94);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_1c2c);
                                                  pCVar14 = core_script_cpp_getActor_FUN_005594e0
                                                                      (local_2c94,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if ((pCVar14 == (CDemonActor *)0x0) ||
                                                     (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_1c2c,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_bodypart_cpp_FUN_0041b510();
                                                    pCVar12 = 
                                                  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                                            (&local_160,&local_148);
                                                  (pCVar14->orient).vec.y = pCVar12->y;
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                                                            (pCVar14);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"startSay",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[8] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 8);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_3978,500);
                                                  if (pcVar17 != (char *)0x0) {
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_3c = -1;
                                                  sscanf
                                                            (local_3978,"%[^,], %[^,], %n",local_15ec,
                                                             local_21a4,&local_3c);
                                                  if (local_3c < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_15ec);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_21a4);
                                                  pcVar17 = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (local_3978 + local_3c);
                                                  local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_0055ff00
                                                            (this_ptr,(int)local_15ec,local_21a4,
                                                             pcVar17);
                                                  this_ptr->dialog_wav_time = local_14;
                                                  fVar7 = this_ptr->dialog_wav_time;
                                                  goto joined_r0x0055f6da;
                                                  }
                                                  iVar6 = strnicmp
                                                                    (pcVar17,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xc);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_d54,200);
                                                  if (pcVar17 != (char *)0x0) {
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  pcVar17 = local_d54;
                                                  do {
                                                    pcVar20 = pcVar17;
                                                    if (*pcVar17 == ',') goto LAB_0055f760;
                                                    if (*pcVar17 == '\0') break;
                                                    pcVar20 = pcVar17 + 1;
                                                    if (*pcVar20 == ',') goto LAB_0055f760;
                                                    pcVar17 = pcVar17 + 2;
                                                  } while (*pcVar20 != '\0');
                                                  pcVar20 = (char *)0x0;
LAB_0055f760:
                                                  pcVar19 = ",";
                                                  local_18 = (uint)(pcVar20 != (char *)0x0);
                                                  local_38 = -1;
                                                  iVar6 = -1;
                                                  pcVar17 = local_d54;
                                                  do {
                                                    pcVar20 = pcVar17;
                                                    if (iVar6 == 0) break;
                                                    iVar6 = iVar6 + -1;
                                                    pcVar20 = pcVar17 + (uint)bVar21 * -2 + 1;
                                                    cVar2 = *pcVar17;
                                                    pcVar17 = pcVar20;
                                                  } while (cVar2 != '\0');
                                                  pcVar20 = pcVar20 + -1;
                                                  do {
                                                    cVar2 = *pcVar19;
                                                    *pcVar20 = cVar2;
                                                    if (cVar2 == '\0') break;
                                                    cVar2 = pcVar19[1];
                                                    pcVar19 = pcVar19 + 2;
                                                    pcVar20[1] = cVar2;
                                                    pcVar20 = pcVar20 + 2;
                                                  } while (cVar2 != '\0');
                                                  sscanf
                                                            (local_d54,"%[^,],%n",local_7c8,
                                                             &local_38);
                                                  if (local_38 < 1) {
                                                    pcVar17 = "Error parsing out camera name";
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00559360(local_7c8)
                                                  ;
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790
                                                            (g_CDemonSetPtr,local_7c8);
                                                  if (iVar6 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Camera \"%s\" doesn't exist.",
                                                               local_7c8);
                                                    return -1;
                                                  }
                                                  local_3f7c = 1e+10;
                                                  if (local_18 != 0) {
                                                    sscanf
                                                              (local_d54 + local_38,"%f",
                                                               &local_3f7c);
                                                    if (((double)local_3f7c < 0.0) ||
                                                       (99999 < (double)local_3f7c)) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Invalid hold time value")
                                                      ;
                                                      return -1;
                                                    }
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00
                                                            (g_CDemonSetPtr,iVar6,local_3f7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,
                                                  "timedDisplay",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar17[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 0xc);
                                                  pcVar17 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_352c,300);
                                                  if (pcVar17 != (char *)0x0) {
LAB_0055f91c:
                                                    pcVar20 = g_ScriptErrorBuffer;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_34 = -1;
                                                  sscanf
                                                            (local_352c,"%f,%n",&local_30,
                                                             &local_34);
                                                  if (local_34 < 2) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing time value");
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    pcVar20 = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (local_352c + local_34);
                                                  pcVar17 = this_ptr->current_message;
                                                  do {
                                                    cVar2 = *pcVar20;
                                                    *pcVar17 = cVar2;
                                                    if (cVar2 == '\0') break;
                                                    cVar2 = pcVar20[1];
                                                    pcVar20 = pcVar20 + 2;
                                                    pcVar17[1] = cVar2;
                                                    pcVar17 = pcVar17 + 2;
                                                  } while (cVar2 != '\0');
                                                  local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,local_30,time_remaining);
                                                  if (0 < local_114) {
                                                    this_ptr->current_message[0] = '\0';
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"turnToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[10] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 10);
                                                  local_2c = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^)])%n",local_2974,
                                                             local_16b4,&local_2c);
                                                  if (local_2c < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_2c;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_2974);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_16b4);
                                                  pCVar13 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_2974,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if ((pCVar13 == (CCharacter *)0x0) ||
                                                     (pCVar14 = 
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_16b4,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar14 == (CDemonActor *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    (*(((pCVar13->base).vtable._uc)->_uc).
                                                      setWalkTargetImmediate)(pCVar13,pCVar14);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"wait",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[4] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 4);
                                                  local_28 = -1;
                                                  sscanf
                                                            (local_11c,"(%f)%n",&local_24,
                                                             &local_28);
                                                  if (local_28 < 1) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing time value on wait statament");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_28;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,local_24,time_remaining);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"waitFor",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[7] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 7);
                                                  pcVar17 = 
                                                  core_script_cpp_parseConditionExpr_FUN_005594a0
                                                            (&local_11c,local_37c);
                                                  if (pcVar17 != (char *)0x0) goto LAB_0055f91c;
                                                  if ((g_ScriptEventsEnabled == 0) &&
                                                     (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_37c), iVar6 == 0)
                                                  ) {
                                                    local_114 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar17,"walkTo",6);
                                                    dVar1 = (double)CONCAT44(pcVar17,local_124);
                                                    if ((iVar6 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar17[6] + 1)] & 0xe0) != 0)) {
                                                      pcVar17 = "Unknown command on line %d: %s";
                                                      goto LAB_0055a97f;
                                                    }
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar17 + 6);
                                                  local_120 = -1;
                                                  sscanf
                                                            (local_11c,"(%[^,], %[^,)] %n",local_2bcc,
                                                             local_177c,&local_120);
                                                  if (local_120 < 5) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing walkTo command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_120;
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_2bcc);
                                                  core_script_cpp_trimString_FUN_00559360
                                                            (local_177c);
                                                  local_20 = 0.0;
                                                  if (*local_11c == ',') {
                                                    local_120 = -1;
                                                    sscanf
                                                              (local_11c,",%f %n",&local_20,
                                                               &local_120);
                                                    if (local_120 < 1) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_120;
                                                  }
                                                  local_1c = 1e+10;
                                                  if (*local_11c == ',') {
                                                    local_120 = -1;
                                                    sscanf
                                                              (local_11c,",%f %n",&local_1c,
                                                               &local_120);
                                                    if (local_120 < 1) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_120;
                                                  }
                                                  if (*local_11c != ')') {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  pCVar13 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_2bcc,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if ((pCVar13 == (CCharacter *)0x0) ||
                                                     (pCVar14 = 
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_177c,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar14 == (CDemonActor *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    (*(((pCVar13->base).vtable._uc)->_uc).
                                                      setWalkTarget)(pCVar13,pCVar14,local_20,
                                                                     local_1c);
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
  if ((g_ScriptEventsEnabled != 2) && ((char)local_118->light_type != '\0')) {
    _sprintf
              (g_ScriptErrorBuffer,"Extra characters \"%s\" on line %d",local_118,local_120);
    return -1;
  }
LAB_0055a8d4:
  if (local_110 == 1) {
    this_ptr->dialog_wav_time = -1.0;
    iVar6 = g_ScriptEventsEnabled;
    this_ptr->cmd_timer = -1.0;
    if ((iVar6 == 0) && (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
      _sprintf(g_ScriptErrorBuffer,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_110) {
    this_ptr->next_cmd = local_10c;
    return local_110;
  }
  return local_110;
}
