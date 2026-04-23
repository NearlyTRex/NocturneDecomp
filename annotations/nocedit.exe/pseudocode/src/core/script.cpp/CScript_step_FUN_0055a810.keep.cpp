// Name: core_script.cpp_CScript_step_FUN_0055a810
// Address: 0055a810
// MANUAL RECONSTRUCTION
// Address Range: [[0055a810, 0055c9e6] [0055ca7e, 0055fef3]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_step_FUN_0055a810(CScript *this_ptr,float *time_remaining)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_script_cpp_CScript_step_FUN_0055a810(CScript *this_ptr,float *time_remaining)

{
  float fVar1;
  char cVar3;
  int iVar4;
  SDialogEntry *pSVar5;
  CGame *pCVar6;
  CDemonSet *set_ptr;
  char *pcVar7;
  int iVar6;
  int iVar8;
  CHero *pCVar20;
  CPlatform *this_ptr_03;
  CVector3f *pCVar10;
  float fVar7;
  CCharacter *pCVar27;
  CDemonActor_vtable *pCVar8;
  CMotionList *this_ptr_00;
  CTrigger *pCVar25;
  CPlatform *pCVar9;
  CDoor *pCVar23;
  CHero *pCVar21;
  int *piVar11;
  CHero *pCVar22;
  int *piVar10;
  CHero *pCVar26;
  CHero *pCVar18;
  CHero *pCVar15;
  CWeapon *actor_ptr;
  CCharacter *pCVar19;
  CHero *this_ptr_01;
  int iVar11;
  CCharacter *pCVar28;
  CEnemy *this_ptr_02;
  CCharacter *pCVar24;
  CDemonActor *pCVar12;
  CVector3f *pCVar13;
  CCharacter *pCVar17;
  CDemonActor *pCVar18_00;
  CCharacter *pCVar14;
  CDemonActor *pCVar16;
  uint uVar17;
  uint uVar29;
  uint uVar18;
  char *pcVar19;
  int iVar30;
  char *pcVar20;
  char *pcVar21;
  char *pcVar31;
  byte bVar22;
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
  char local_5d4 [100];
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
  CDemonLight *local_100;
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
  CHero *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  CWeapon *local_7c;
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
  float local_50;
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
  CDemonSet *pCVar5;
  CGame *pCVar4;
  char cVar2;
  SDialogEntry *pSVar3;
  double dVar1;
  CInventory *inventory_ptr;
  float y;
  
  bVar22 = 0;
  if ((this_ptr->next_cmd < 0) || (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x46d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  strcpy(g_ScriptErrorBuffer,"(no error message provided)");
  pcVar7 = this_ptr->parsed_lines[this_ptr->next_cmd].text;
  iVar4 = this_ptr->parsed_lines[this_ptr->next_cmd].line_number;
  dVar1 = __BITCAST_DOUBLE(CONCAT44(pcVar7,iVar4));
  local_110 = this_ptr->next_cmd;
  local_114 = 1;
  this_ptr->next_cmd = local_110 + 1;
  cVar3 = *pcVar7;
  if ((cVar3 == '{') || (cVar3 == '}')) {
    local_11c = &s_EmptyChar_00641c5a;
  }
  else if (cVar3 == ':') {
    local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 1);
    dVar1 = __BITCAST_DOUBLE(CONCAT44(iVar4,local_11c));
    if (g_ScriptEventsEnabled != 0) {
      cVar3 = *local_11c;
      for (pcVar7 = local_11c;
          (cVar3 != '\0' &&
          (((g_CharacterClassificationTable[(byte)(*pcVar7 + 1)] & 0xe0) != 0 || (*pcVar7 == '_'))))
          ; pcVar7 = pcVar7 + 1) {
        cVar3 = pcVar7[1];
      }
      if (*pcVar7 != '\0') {
        pcVar7 = "Invalid label \"%s\" on line";
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
                  (g_ScriptErrorBuffer,"Duplicate label %s on lines %d and %d",local_11c,iVar4,
                   this_ptr->parsed_lines[iVar6].line_number);
        return -1;
      }
    }
    local_11c = &s_EmptyChar_00641ce3;
  }
  else {
    iVar8 = _strnicmp(pcVar7,"syntaxCheckOn",0xd);
    if ((iVar8 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0)) {
      if (g_ScriptEventsEnabled != 0) {
        g_ScriptEventsEnabled = 1;
      }
      local_11c = &s_EmptyChar_00641cf2;
    }
    else {
      iVar8 = _strnicmp(pcVar7,"syntaxCheckOff",0xe);
      if ((iVar8 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar7[0xe] + 1)] & 0xe0) == 0)) {
        if (g_ScriptEventsEnabled != 0) {
          g_ScriptEventsEnabled = 2;
        }
        local_11c = &s_EmptyChar_00641d02;
      }
      else if (g_ScriptEventsEnabled != 2) {
        iVar8 = _strnicmp(pcVar7,"advanceLightFilter",0x12);
        if (((((((((iVar8 == 0) &&
                  ((g_CharacterClassificationTable[(byte)(pcVar7[0x12] + 1)] & 0xe0) == 0)) ||
                 ((iVar8 = _strnicmp
                                     (pcVar7,"createExplosion",0xf), iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar7[0xf] + 1)] & 0xe0) == 0)))) ||
                ((iVar8 = _strnicmp(pcVar7,"deleteActor",0xb),
                 iVar8 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar7[0xb] + 1)] & 0xe0) == 0)))) ||
               ((iVar8 = _strnicmp(pcVar7,"displayBitmap",0xd),
                iVar8 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0)))) ||
              (((((iVar8 = _strnicmp(pcVar7,"hurtCharacter",0xd),
                  iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar8 = _strnicmp(pcVar7,"incCounter",10),
                  iVar8 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar7[10] + 1)] & 0xe0) == 0)))) ||
                ((iVar8 = _strnicmp(pcVar7,"fadeSfx",7),
                 iVar8 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar7[7] + 1)] & 0xe0) == 0)
                 ))) || ((iVar8 = _strnicmp
                                            (pcVar7,"fadeAmbientSound",0x10), iVar8 == 0 &&
                         ((g_CharacterClassificationTable[(byte)(pcVar7[0x10] + 1)] & 0xe0) == 0))))
              )) || ((((iVar8 = _strnicmp(pcVar7,"flagOn",6),
                       iVar8 == 0 &&
                       ((g_CharacterClassificationTable[(byte)(pcVar7[6] + 1)] & 0xe0) == 0)) ||
                      ((iVar8 = _strnicmp(pcVar7,"flagOff",7),
                       iVar8 == 0 &&
                       ((g_CharacterClassificationTable[(byte)(pcVar7[7] + 1)] & 0xe0) == 0)))) ||
                     ((((iVar8 = _strnicmp
                                           (pcVar7,"gameFlagOn",10), iVar8 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar7[10] + 1)] & 0xe0) == 0)) ||
                       ((iVar8 = _strnicmp
                                           (pcVar7,"gameFlagOff",0xb), iVar8 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar7[0xb] + 1)] & 0xe0) == 0))))
                      || ((((iVar8 = _strnicmp
                                               (pcVar7,"killCharacter",0xd), iVar8 == 0 &&
                            ((g_CharacterClassificationTable[(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0))
                           || ((iVar8 = _strnicmp
                                                  (pcVar7,"killHero",8), iVar8 == 0 &&
                               ((g_CharacterClassificationTable[(byte)(pcVar7[8] + 1)] & 0xe0) == 0)
                               ))) ||
                          ((iVar8 = _strnicmp(pcVar7,"killSfx",7)
                           , iVar8 == 0 &&
                           ((g_CharacterClassificationTable[(byte)(pcVar7[7] + 1)] & 0xe0) == 0)))))
                      ))))) ||
            ((iVar8 = _strnicmp(pcVar7,"lightning",9), iVar8 == 0
             && ((g_CharacterClassificationTable[(byte)(pcVar7[9] + 1)] & 0xe0) == 0)))) ||
           ((((iVar8 = _strnicmp(pcVar7,"playSfx",7), iVar8 == 0
              && ((g_CharacterClassificationTable[(byte)(pcVar7[7] + 1)] & 0xe0) == 0)) ||
             ((iVar8 = _strnicmp(pcVar7,"setCameraAmbient",0x10),
              iVar8 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar7[0x10] + 1)] & 0xe0) == 0)
              ))) || ((((iVar8 = _strnicmp
                                           (pcVar7,"setCounter",10), iVar8 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar7[10] + 1)] & 0xe0) == 0)) ||
                       (((iVar8 = _strnicmp
                                            (pcVar7,"setGroupAmbient",0xf), iVar8 == 0 &&
                         ((g_CharacterClassificationTable[(byte)(pcVar7[0xf] + 1)] & 0xe0) == 0)) ||
                        ((((iVar8 = _strnicmp
                                              (pcVar7,"setLightFilterFrame",0x13),
                           iVar8 == 0 &&
                           ((g_CharacterClassificationTable[(byte)(pcVar7[0x13] + 1)] & 0xe0) == 0))
                          || ((iVar8 = _strnicmp
                                                 (pcVar7,"setLeverState",0xd), iVar8 == 0
                              && ((g_CharacterClassificationTable[(byte)(pcVar7[0xd] + 1)] & 0xe0)
                                  == 0)))) ||
                         ((iVar8 = _strnicmp
                                             (pcVar7,"setModelState",0xd), iVar8 == 0 &&
                          ((g_CharacterClassificationTable[(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0))))
                        )))) || (((iVar8 = _strnicmp
                                                     (pcVar7,"setTimer",8), iVar8 == 0 &&
                                  ((g_CharacterClassificationTable[(byte)(pcVar7[8] + 1)] & 0xe0) ==
                                   0)) || (((((iVar8 = _strnicmp
                                                                 (pcVar7,"setWeather",10),
                                              iVar8 == 0 &&
                                              ((g_CharacterClassificationTable
                                                [(byte)(pcVar7[10] + 1)] & 0xe0) == 0)) ||
                                             ((iVar8 = _strnicmp
                                                                 (pcVar7,"shakeScreen",0xb)
                                              , iVar8 == 0 &&
                                              ((g_CharacterClassificationTable
                                                [(byte)(pcVar7[0xb] + 1)] & 0xe0) == 0)))) ||
                                            ((iVar8 = _strnicmp
                                                                (pcVar7,"slamModelToMotion"
                                                                 ,0x11), iVar8 == 0 &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(pcVar7[0x11] + 1)] & 0xe0) == 0)))) ||
                                           ((iVar8 = _strnicmp
                                                               (pcVar7,"warpTo",6),
                                            iVar8 == 0 &&
                                            ((g_CharacterClassificationTable[(byte)(pcVar7[6] + 1)]
                                             & 0xe0) == 0)))))))))))) {
          if (g_ScriptEventsEnabled == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,pcVar7);
          }
          else {
            pcVar7 = core_event_cpp_CEventList_validateCommands_FUN_004add40(g_CEventListPtr,pcVar7)
            ;
            if (pcVar7 != (char *)0x0) goto LAB_0055bb9d;
          }
          local_11c = &s_EmptyChar_00641e5e;
        }
        else {
          iVar8 = _strnicmp(pcVar7,"addItemToInventory",0x12);
          if ((iVar8 == 0) &&
             ((g_CharacterClassificationTable[(byte)(pcVar7[0x12] + 1)] & 0xe0) == 0)) {
            local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0x12);
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
            pCVar20 = (CHero *)core_script_cpp_getActor_FUN_005594e0
                                         (local_ee4,g_CHeroClassInfo.name_hash,&g_CHeroClassInfo);
            if ((pCVar20 == (CHero *)0x0) ||
               (pCVar18_00 = core_script_cpp_getActor_FUN_005594e0
                                       (local_27e4,g_CDemonActorClassInfo.name_hash,
                                        &g_CDemonActorClassInfo), pCVar18_00 == (CDemonActor *)0x0))
            goto joined_r0x0055c026;
            if (g_ScriptEventsEnabled == 0) {
              core_inv_cpp_CInventory_addItem_FUN_004fd600(&pCVar20->inventory,pCVar18_00,0);
            }
          }
          else {
            iVar8 = _strnicmp(pcVar7,"addLightFilter",0xe);
            if ((iVar8 == 0) &&
               ((g_CharacterClassificationTable[(byte)(pcVar7[0xe] + 1)] & 0xe0) == 0)) {
              local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0xe);
              local_e0 = -1;
              sscanf
                        (local_11c,"( %[^,], %[^,], %f )%n",local_5d4,local_250,&local_a4,&local_e0);
              if (local_e0 < 5) {
                _sprintf
                          (g_ScriptErrorBuffer,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_11c = local_11c + local_e0;
              core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10
                        (g_CDemonSetPtr,local_5d4,&local_118,&local_100);
              if (local_118 == (C3DSLight *)0x0) {
                _sprintf
                          (g_ScriptErrorBuffer,"Light \"%s\" does not exist",local_5d4);
                return -1;
              }
              iVar8 = engine_dosio_c_getFileSize_FUN_00481880("art",local_250);
              if (iVar8 < 1) {
                _sprintf
                          (g_ScriptErrorBuffer,"Can't open filter \"%s\"",local_250);
                return -1;
              }
              if (g_ScriptEventsEnabled == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(local_118,local_250,local_a4,0);
              }
            }
            else {
              iVar8 = _strnicmp(pcVar7,"allowEnemyAttack",0x10);
              if ((iVar8 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(pcVar7[0x10] + 1)] & 0xe0) == 0)) {
                local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0x10);
                pcVar7 = core_script_cpp_parseConditionExpr_FUN_005594a0(&local_11c,local_958);
                if (pcVar7 != (char *)0x0) {
LAB_0055bb9d:
                  strcpy(g_ScriptErrorBuffer,pcVar7);
                  return -1;
                }
                if (g_ScriptEventsEnabled == 0) {
                  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                    (g_CEventListPtr,local_958);
                  g_CGamePtr->allow_enemy_attack_flag = iVar8;
                }
              }
              else {
                iVar8 = _strnicmp
                                  (pcVar7,"allowHeroControls",0x11);
                if ((iVar8 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(pcVar7[0x11] + 1)] & 0xe0) == 0)) {
                  local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0x11);
                  pcVar7 = core_script_cpp_parseConditionExpr_FUN_005594a0(&local_11c,local_bb0);
                  if (pcVar7 != (char *)0x0) goto LAB_0055bb9d;
                  if (g_ScriptEventsEnabled == 0) {
                    iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                      (g_CEventListPtr,local_bb0);
                    g_ScriptInputFlag = (int)(iVar8 == 0);
                    g_CGamePtr->allow_hero_controls_flag = g_ScriptInputFlag;
                  }
                }
                else {
                  iVar8 = _strnicmp(pcVar7,"allowHeroDamage",0xf)
                  ;
                  if ((iVar8 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(pcVar7[0xf] + 1)] & 0xe0) == 0)) {
                    local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0xf);
                    pcVar7 = core_script_cpp_parseConditionExpr_FUN_005594a0(&local_11c,local_a84);
                    if (pcVar7 != (char *)0x0) goto LAB_0055bb9d;
                    if (g_ScriptEventsEnabled == 0) {
                      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                        (g_CEventListPtr,local_a84);
                      g_CGamePtr->allow_damage_flag = iVar8;
                    }
                  }
                  else {
                    iVar8 = _strnicmp
                                      (pcVar7,"attachActorToPlatform",0x15);
                    if ((iVar8 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(pcVar7[0x15] + 1)] & 0xe0) == 0)) {
                      local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0x15);
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
                      this_ptr_03 = (CPlatform *)
                                    core_script_cpp_getActor_FUN_005594e0
                                              (local_1a9c,g_CPlatformClassInfo.name_hash,
                                               &g_CPlatformClassInfo);
                      if ((this_ptr_03 == (CPlatform *)0x0) ||
                         (pCVar18_00 = core_script_cpp_getActor_FUN_005594e0
                                                 (local_190c,g_CDemonActorClassInfo.name_hash,
                                                  &g_CDemonActorClassInfo),
                         pCVar18_00 == (CDemonActor *)0x0)) goto joined_r0x0055c026;
                      if (g_ScriptEventsEnabled == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(this_ptr_03,pCVar18_00);
                      }
                    }
                    else {
                      iVar8 = _strnicmp(pcVar7,"beginFadeIn",0xb)
                      ;
                      if ((iVar8 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(pcVar7[0xb] + 1)] & 0xe0) == 0)) {
                        local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0xb);
                        if (g_ScriptEventsEnabled == 0) {
                          core_game_cpp_CGame_beginFadeIn_FUN_004e0920(g_CGamePtr);
                        }
                      }
                      else {
                        iVar8 = _strnicmp
                                          (pcVar7,"beginFadeOut",0xc);
                        if ((iVar8 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(pcVar7[0xc] + 1)] & 0xe0) == 0))
                        {
                          local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0xc);
                          if (g_ScriptEventsEnabled == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004e0960(g_CGamePtr);
                          }
                        }
                        else {
                          iVar8 = _strnicmp
                                            (pcVar7,"breakPoint",10);
                          if ((iVar8 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(pcVar7[10] + 1)] & 0xe0) == 0))
                          {
                            local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 10);
                            if (g_ScriptEventsEnabled == 0) {
                              _sprintf
                                        (local_890,"Script breakpoint reached at line %d",iVar4);
                              core_game_cpp_CGame_displayMessage_FUN_004d7f20
                                        (g_CGamePtr,local_890,5.0);
                              this_ptr->script_state = 2;
                            }
                          }
                          else {
                            iVar8 = _strnicmp
                                              (pcVar7,"cancelCameraHold",0x10);
                            if ((iVar8 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(pcVar7[0x10] + 1)] & 0xe0) ==
                                0)) {
                              local_11c = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar7 + 0x10)
                              ;
                              if (g_ScriptEventsEnabled == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
                                          (g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar8 = _strnicmp
                                                (pcVar7,"cancelWalkTo",0xc);
                              if ((iVar8 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(pcVar7[0xc] + 1)] & 0xe0)
                                  == 0)) {
                                local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                      (pcVar7 + 0xc);
                                pcVar7 = core_script_cpp_parseArgument_FUN_005593f0
                                                   (&local_11c,local_2334,200);
                                if (pcVar7 != (char *)0x0) {
                                  strcpy(g_ScriptErrorBuffer,pcVar7);
                                  return -1;
                                }
                                iVar8 = _stricmp
                                                  (local_2334,"all");
                                if (iVar8 == 0) {
                                  if (g_ScriptEventsEnabled == 0) {
                                    iVar30 = 0;
                                    for (iVar8 = 0; iVar8 < g_CDemonSetPtr->actor_count;
                                        iVar8 = iVar8 + 1) {
                                      pCVar17 = (CCharacter *)
                                                core_actor_cpp_castToClassHash_FUN_0040c790
                                                          (*(CDemonActor **)
                                                            ((int)g_CDemonSetPtr->actors + iVar30),
                                                           g_CCharacterClassInfo.name_hash);
                                      if (pCVar17 != (CCharacter *)0x0) {
                                        (*(((pCVar17->base).vtable._uc)->_uc).setWalkTarget)
                                                  (pCVar17,(CDemonActor *)0x0,0.0,0.0);
                                      }
                                      iVar30 = iVar30 + 4;
                                    }
                                  }
                                }
                                else {
                                  pCVar17 = (CCharacter *)
                                            core_script_cpp_getActor_FUN_005594e0
                                                      (local_2334,g_CCharacterClassInfo.name_hash,
                                                       &g_CCharacterClassInfo);
                                  if (pCVar17 == (CCharacter *)0x0) goto joined_r0x0055c026;
                                  if (g_ScriptEventsEnabled == 0) {
                                    (*(((pCVar17->base).vtable._uc)->_uc).setWalkTarget)
                                              (pCVar17,(CDemonActor *)0x0,0.0,0.0);
                                  }
                                }
                              }
                              else {
                                iVar8 = _strnicmp
                                                  (pcVar7,"chainToMission",0xe);
                                if ((iVar8 == 0) &&
                                   ((g_CharacterClassificationTable[(byte)(pcVar7[0xe] + 1)] & 0xe0)
                                    == 0)) {
                                  local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                        (pcVar7 + 0xe);
                                  pcVar7 = core_script_cpp_parseArgument_FUN_005593f0
                                                     (&local_11c,local_2e24,200);
                                  if (pcVar7 != (char *)0x0) {
                                    strcpy(g_ScriptErrorBuffer,pcVar7);
                                    return -1;
                                  }
                                  core_script_cpp_trimString_FUN_00559360(local_2e24);
                                  iVar8 = g_ScriptEventsEnabled;
                                  if (g_ScriptEventsEnabled == 0) {
                                    core_mission_cpp_CDemonMission_setMissionName_FUN_00524630
                                              (g_CDemonMissionPtr,local_2e24);
                                    this_ptr->script_pause_flag = 1;
                                    local_114 = iVar8;
                                  }
                                }
                                else {
                                  iVar8 = _strnicmp
                                                    (pcVar7,"clearActorVariable",0x12);
                                  if ((iVar8 == 0) &&
                                     ((g_CharacterClassificationTable[(byte)(pcVar7[0x12] + 1)] &
                                      0xe0) == 0)) {
                                    local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                          (pcVar7 + 0x12);
                                    pcVar7 = core_script_cpp_parseArgument_FUN_005593f0
                                                       (&local_11c,local_3784,300);
                                    if (pcVar7 != (char *)0x0) {
LAB_0055c37e:
                                      strcpy(g_ScriptErrorBuffer,pcVar7);
                                      return -1;
                                    }
                                    iVar8 = core_script_cpp_validateActorVariableName_FUN_00559220
                                                      (local_3784);
                                    if (iVar8 == 0) {
                                      return -1;
                                    }
                                    if (g_ScriptEventsEnabled == 0) {
                                      core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                (g_CEventListPtr,local_3784,(CDemonActor *)0x0);
                                    }
                                  }
                                  else {
                                    iVar8 = _strnicmp
                                                      (pcVar7,"dbSay",5);
                                    if ((iVar8 == 0) &&
                                       ((g_CharacterClassificationTable[(byte)(pcVar7[5] + 1)] &
                                        0xe0) == 0)) {
                                      local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 5);
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
                                      iVar8 = core_script_cpp_CScript_findDialogEntry_FUN_005606e0
                                                        (this_ptr,local_c14);
                                      if (iVar8 < 0) {
                                        local_104 = local_226c;
                                        local_e4 = "$";
                                        _sprintf
                                                  (local_226c,"[Can't find %s in database]",
                                                   local_c14);
                                        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                                  (&g_ScriptPickList.base,local_226c);
                                      }
                                      else {
                                        pSVar5 = this_ptr->dialog_entries;
                                        local_e4 = pSVar5[iVar8].data + 0x78;
                                        local_104 = pSVar5[iVar8].data + 0x96;
                                        strcpy(local_c14,pSVar5[iVar8].data + 0x3c);
                                      }
                                      if (this_ptr->dialog_wav_time < 0.0) {
                                        local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_0055ff00
                                                            (this_ptr,local_e4,local_c14,local_104);
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
                                      iVar8 = _strnicmp
                                                        (pcVar7,"dbStartSay",10);
                                      if ((iVar8 == 0) &&
                                         ((g_CharacterClassificationTable[(byte)(pcVar7[10] + 1)] &
                                          0xe0) == 0)) {
                                        local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                              (pcVar7 + 10);
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
                                        iVar8 = core_script_cpp_CScript_findDialogEntry_FUN_005606e0
                                                          (this_ptr,local_1ec);
                                        if (iVar8 < 0) {
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
                                          local_f8 = pSVar3[iVar8].data + 0x78;
                                          local_f4 = pSVar3[iVar8].data + 0x96;
                                          strcpy(local_1ec,pSVar3[iVar8].data + 0x3c);
                                        }
                                        local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_0055ff00
                                                            (this_ptr,local_f8,local_1ec,local_f4);
                                        this_ptr->dialog_wav_time = local_14;
                                        fVar1 = this_ptr->dialog_wav_time;
joined_r0x0055f6da:
                                        if (fVar1 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar8 = _strnicmp
                                                          (pcVar7,"debug",5);
                                        if ((iVar8 == 0) &&
                                           ((g_CharacterClassificationTable[(byte)(pcVar7[5] + 1)] &
                                            0xe0) == 0)) {
                                          local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                                (pcVar7 + 5);
                                          pcVar7 = core_script_cpp_parseArgument_FUN_005593f0
                                                             (&local_11c,local_3658,300);
                                          if (pcVar7 != (char *)0x0) goto LAB_0055c37e;
                                          if (g_ScriptEventsEnabled == 0) {
                                            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                                                      (g_CEditorToolsPtr,
                                                       "Script debug message at line %d:\n%s",iVar4,
                                                       local_3658);
                                          }
                                        }
                                        else {
                                          iVar8 = _strnicmp
                                                            (pcVar7,"dismember",9);
                                          if ((iVar8 == 0) &&
                                             ((g_CharacterClassificationTable[(byte)(pcVar7[9] + 1)]
                                              & 0xe0) == 0)) {
                                            local_11c = core_script_cpp_skipWhitespace_FUN_005593d0
                                                                  (pcVar7 + 9);
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
                                            iVar8 = core_script_cpp_parseBodyPartMask_FUN_00559730
                                                              (local_f0,local_1844,local_c8c);
                                            if (iVar8 == 0) {
                                              return -1;
                                            }
                                            core_actor_cpp_CVector_ctor_FUN_00410340(&local_154);
                                            pCVar10 = (CVector3f *)0x0;
                                            if (*local_11c == ',') {
                                              local_60 = -1;
                                              sscanf
                                                        (local_11c,",%f ,%f ,%f ,%f %n",&local_154.x,
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
                                                fVar7 = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                                                            (-local_3f80,local_3f80);
                                                y = 0.0;
                                                local_14 = fVar7;
                                                local_14 = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                                                            (-local_3f80,local_3f80);
                                                pCVar10 = core_script_cpp_makeVector_FUN_00567d00
                                                                    (&local_130,local_14,y,fVar7);
                                                core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                                                          (&local_188,pCVar10);
                                                pCVar10 = 
                                                  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                                            (&local_188,&local_13c,&local_154);
                                                core_actor_cpp_copyVector_FUN_00410360
                                                          (&local_154,pCVar10);
                                              }
                                              pCVar10 = &local_154;
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
                                                  core_bodypart_cpp_createBodyPart_FUN_00418e10
                                                            (&(local_f0->base).location.position,
                                                             &(local_f0->base).orient,pCVar10,
                                                             &local_f0->base,0,0,
                                                             local_f0->blood_type);
                                              for (iVar8 = 0; iVar8 < 0x1e; iVar8 = iVar8 + 1) {
                                                if (local_c8c[iVar8] != 0) {
                                                  core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                                                            (local_f0,local_ec,iVar8,0);
                                                }
                                              }
                                              core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050
                                                        (local_ec);
                                            }
                                          }
                                          else {
                                            iVar8 = _strnicmp
                                                              (pcVar7,"display",7);
                                            if ((iVar8 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(pcVar7[7] + 1)] & 0xe0) == 0)) {
                                              local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 7);
                                              pcVar7 = core_script_cpp_parseArgument_FUN_005593f0
                                                                 (&local_11c,
                                                                  this_ptr->current_message,0x400);
                                              if (pcVar7 != (char *)0x0) {
                                                _sprintf
                                                          (g_ScriptErrorBuffer,
                                                           "Error parsing message text on display statament: %s",
                                                           pcVar7);
                                                return -1;
                                              }
                                            }
                                            else {
                                              iVar8 = _strnicmp
                                                                (pcVar7,"else",4);
                                              if ((iVar8 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(pcVar7[4] + 1)] & 0xe0) == 0)) {
                                                local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 4);
                                                iVar8 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_005601c0
                                                            (this_ptr,this_ptr->next_cmd,1);
                                                if (iVar8 < 0) {
                                                  _sprintf
                                                            (g_ScriptErrorBuffer,
                                                             "Can't skip next command after else statement on line %d",
                                                             iVar4);
                                                  return -1;
                                                }
                                                this_ptr->next_cmd = iVar8;
                                              }
                                              else {
                                                iVar8 = _strnicmp
                                                                  (pcVar7,"enableCamera",
                                                                   0xc);
                                                if ((iVar8 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(pcVar7[0xc] + 1)] & 0xe0) == 0)) {
                                                  local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xc);
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
                                                  iVar8 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790
                                                            (g_CDemonSetPtr,local_307c);
                                                  if (iVar8 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Camera \"%s\" does not exist.",
                                                               local_307c);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    iVar30 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_2d5c);
                                                  core_set_cpp_CDemonSet_setCameraEnabled_FUN_00570ea0
                                                            (g_CDemonSetPtr,iVar8,iVar30);
                                                  }
                                                  else {
                                                    pcVar7 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004add00
                                                            (g_CEventListPtr,local_2d5c);
                                                  if (pcVar7 != (char *)0x0) {
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
                                                    return -1;
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar8 = _strnicmp
                                                                    (pcVar7,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0x11] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0x11);
                                                  local_48 = -1;
                                                  sscanf
                                                            (local_11c,"(%d , %[^)])%n",&local_ac,
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
                                                    iVar8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_1dbc);
                                                  core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_00570ec0
                                                            (g_CDemonSetPtr,local_ac,iVar8);
                                                  }
                                                  else {
                                                    pcVar7 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004add00
                                                            (g_CEventListPtr,local_1dbc);
                                                  if (pcVar7 != (char *)0x0) {
LAB_0055cd52:
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xf);
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
                                                  pCVar27 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_32d4,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar27 == (CCharacter *)0x0)
                                                  goto joined_r0x0055c026;
                                                  iVar8 = _stricmp
                                                                    (local_1f4c,"false");
                                                  pCVar8 = (CDemonActor_vtable *)0x0;
                                                  if (iVar8 != 0) {
                                                    iVar8 = _stricmp
                                                                      (local_1f4c,"true");
                                                    if (iVar8 == 0) {
                                                      pCVar8 = (CDemonActor_vtable *)0x1;
                                                    }
                                                    else {
                                                      iVar8 = _stricmp
                                                                        (local_1f4c,
                                                                         "always");
                                                      if (iVar8 != 0) {
                                                        _sprintf
                                                                  (g_ScriptErrorBuffer,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'",local_1f4c);
                                                  return -1;
                                                  }
                                                  pCVar8 = (CDemonActor_vtable *)0x2;
                                                  }
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    pCVar27->health_bar_mode = (int)pCVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"end",3);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[3] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 3);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    local_114 = g_ScriptEventsEnabled;
                                                    this_ptr->script_pause_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"fadeIn",6);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[6] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 6);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    local_114 = g_ScriptEventsEnabled;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar29 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004e0b90
                                                            (g_CGamePtr);
                                                  if (uVar29 != 0) {
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
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"fadeOut",7);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[7] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 7);
                                                  iVar8 = g_ScriptEventsEnabled;
                                                  pCVar4 = g_CGamePtr;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    g_CGamePtr->allow_damage_flag = 0;
                                                    local_114 = iVar8;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar29 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004e0b90(pCVar4);
                                                  if (uVar29 != 0) {
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
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"gesture",7);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[7] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 7);
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
                                                  pCVar17 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_23fc,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar17 == (CCharacter *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    uVar29 = 
                                                  core_charactr_cpp_CCharacter_initGesture_FUN_0042d390
                                                            (pCVar17,local_19d4);
                                                  }
                                                  else {
                                                    iVar8 = 0;
                                                    pcVar7 = local_19d4;
                                                    this_ptr_00 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            (&(pCVar17->model).motion_controller);
                                                  iVar8 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                            (this_ptr_00,pcVar7,iVar8);
                                                  uVar29 = (uint)(-1 < iVar8);
                                                  }
                                                  if (uVar29 == 0) {
                                                    pcVar7 = 
                                                  core_bugs_cpp_getDeformableModelName_FUN_00427b70
                                                            (&pCVar17->model);
                                                  _sprintf
                                                            (g_ScriptErrorBuffer,
                                                             "Gesture name %s is not valid for actor %s, model %s",
                                                             local_19d4,local_23fc,pcVar7);
                                                  return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"getIniInt",9
                                                                      );
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[9] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 9);
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
                                                               "Game");
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
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xf);
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
                                                  iVar8 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00559220
                                                            (local_1074);
                                                  if (iVar8 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar25 = (CTrigger *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_1b64,
                                                                       g_CTriggerClassInfo.name_hash
                                                                       ,&g_CTriggerClassInfo);
                                                  if (pCVar25 == (CTrigger *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                            (g_CEventListPtr,local_1074,
                                                             pCVar25->triggering_actor);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"gosub",5);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[5] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 5);
                                                  iVar8 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00560160
                                                            (this_ptr,local_11c);
                                                  if (iVar8 < 0) {
                                                    dVar1 = __BITCAST_DOUBLE(CONCAT44(iVar4,local_11c));
                                                    pcVar7 = "Undefined label %s used in gosub statement on line %d";
LAB_0055a97f:
                                                    _sprintf(g_ScriptErrorBuffer,pcVar7,dVar1);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    if (7 < this_ptr->call_stack_count) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Call stack overflow detected on script line %d."
                                                                 ,iVar4);
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack[this_ptr->call_stack_count]
                                                         = this_ptr->next_cmd;
                                                    this_ptr->next_cmd = iVar8;
                                                    this_ptr->call_stack_count =
                                                         this_ptr->call_stack_count + 1;
                                                    local_11c = &s_EmptyChar_006424ec;
                                                  }
                                                  else {
                                                    local_11c = &s_EmptyChar_006424ec;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"goto",4);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[4] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 4);
                                                  iVar8 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00560160
                                                            (this_ptr,local_11c);
                                                  if (iVar8 < 0) {
                                                    dVar1 = __BITCAST_DOUBLE(CONCAT44(iVar4,local_11c));
                                                    pcVar7 = "Undefined label %s used in goto statement on line %d";
                                                    goto LAB_0055a97f;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr->next_cmd = iVar8;
                                                    local_11c = &s_EmptyChar_00642527;
                                                  }
                                                  else {
                                                    local_11c = &s_EmptyChar_00642527;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"gtfo",4);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[4] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 4);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_3400,300);
                                                  if (pcVar7 != (char *)0x0) goto LAB_0055cd52;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                            (g_CEditorToolsPtr,
                                                             "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                             iVar4,local_3400);
                                                  this_ptr->script_pause_flag = 1;
                                                  local_114 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xd);
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
                                                  local_c4 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_1524,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (local_c4 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  local_c0 = 1;
                                                  if (*local_11c == ',') {
                                                    local_11c = local_11c + 1;
                                                    uVar29 = strlen(local_11c) - 1;
                                                    local_c8 = uVar29;
                                                    if ((int)uVar29 < 1) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    memcpy(acStack_fad + 1,local_11c,uVar29);
                                                    pcVar7 = local_11c + local_c8;
                                                    acStack_fad[local_c8 + 1] = '\0';
                                                    local_11c = pcVar7;
                                                    if (g_ScriptEventsEnabled == 0) {
                                                      local_c0 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,acStack_fad + 1);
                                                  }
                                                  else {
                                                    pcVar7 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004add00
                                                            (g_CEventListPtr,acStack_fad + 1);
                                                  if (pcVar7 != (char *)0x0) goto LAB_0055d708;
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
                                                    (*(((local_c4->base).base.vtable._uh)->_uh).
                                                      drawWeapon)(local_c4,(local_c0 == 0));
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"idle",4);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[4] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 4);
                                                  local_110 = this_ptr->next_cmd;
                                                  local_114 = 0;
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"if",2);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[2] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 2);
                                                  pcVar7 = 
                                                  core_script_cpp_parseConditionExpr_FUN_005594a0
                                                            (&local_11c,local_444);
                                                  if (pcVar7 != (char *)0x0) goto LAB_0055d708;
                                                  if ((g_ScriptEventsEnabled == 0) &&
                                                     (iVar8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_444), iVar8 == 0)
                                                  ) {
                                                    iVar8 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_005601c0
                                                            (this_ptr,this_ptr->next_cmd,0);
                                                  if (iVar8 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Can't skip next command after if statement on line %d",
                                                               iVar4);
                                                    return -1;
                                                  }
                                                  iVar30 = _strnicmp
                                                                     (this_ptr->parsed_lines[iVar8].
                                                                      text,"else",4);
                                                  if (iVar30 == 0) {
                                                    iVar8 = iVar8 + 1;
                                                  }
                                                  this_ptr->next_cmd = iVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"finishedAct"
                                                                       ,0xb);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[0xb] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xb);
                                                  local_bc = -1;
                                                  sscanf
                                                            (local_11c," ( )%n",&local_bc);
                                                  iVar8 = g_ScriptEventsEnabled;
                                                  pCVar6 = g_CGamePtr;
                                                  if (local_bc < 2) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing finishedAct command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_bc;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr->script_pause_flag = 1;
                                                    local_114 = iVar8;
                                                    pCVar6->act_completion_state = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"letterbox",9
                                                                      );
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[9] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 9);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_b4c,100);
                                                  if (pcVar7 != (char *)0x0) {
LAB_0055d708:
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
                                                    return -1;
                                                  }
                                                  iVar30 = -1;
                                                  iVar8 = _stricmp
                                                                    (local_b4c,"false");
                                                  if (iVar8 == 0) {
                                                    iVar30 = 0;
                                                  }
                                                  iVar8 = _stricmp
                                                                    (local_b4c,"true");
                                                  if (iVar8 == 0) {
                                                    iVar30 = 1;
                                                  }
                                                  iVar8 = _stricmp
                                                                    (local_b4c,"bottom");
                                                  pCVar6 = g_CGamePtr;
                                                  if (iVar8 == 0) {
                                                    iVar30 = 2;
                                                  }
                                                  else if (iVar30 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Invalid letterBox mode: %s",
                                                               local_b4c);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    g_CGamePtr->letterbox_mode = iVar30;
                                                    pCVar6->allow_damage_flag = (uint)(iVar30 == 0);
                                                    pCVar6->allow_enemy_attack_flag =
                                                         (uint)(pCVar6->letterbox_mode == 0);
                                                    pCVar6->allow_hero_controls_flag =
                                                         pCVar6->letterbox_mode;
                                                    this_ptr->saved_cmd_index = -1;
                                                    pCVar5 = g_CDemonSetPtr;
                                                    g_ScriptInputFlag = 1;
                                                    if ((pCVar6->block_auto_save != 0) &&
                                                       (pCVar6->letterbox_mode != 0)) {
                                                      pCVar6->block_auto_save = 0;
                                                      iVar8 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_004b1970
                                                            (pCVar5);
                                                  core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                                                            (g_CDemonSetPtr,
                                                             g_CScriptPtr->focus_actor,1);
                                                  set_ptr = g_CDemonSetPtr;
                                                  g_CScriptPtr->focus_actor_changed = 0;
                                                  iVar30 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_004b1970
                                                            (set_ptr);
                                                  if (iVar8 == iVar30) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                                                            (g_CDemonSetPtr,iVar30);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xe);
                                                  pcVar7 = 
                                                  core_script_cpp_parseConditionExpr_FUN_005594a0
                                                            (&local_11c,local_570);
                                                  if (pcVar7 != (char *)0x0) goto LAB_0055d708;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    iVar8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_570);
                                                  this_ptr->focus_actor_locked = iVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"lookAt",6);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[6] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 6);
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
                                                  pCVar17 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_1394,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar17 == (CCharacter *)0x0) {
joined_r0x0055c026:
                                                    if (g_ActorLookedUpByVariable == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_0055a8d4;
                                                  }
                                                  pCVar18_00 = (CDemonActor *)0x0;
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
                                                    pCVar18_00 = 
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_2fb4,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo);
                                                  if (pCVar18_00 == (CDemonActor *)0x0)
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
                                                            (pCVar17,pCVar18_00);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "movePlatform",0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xc);
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
                                                    pcVar7 = "Invalid movement rate %f";
                                                    goto LAB_0055a97f;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_platfrm_cpp_CPlatform_startMovement_FUN_0054d690
                                                            (pCVar9,local_3f78,local_3f74);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"openDoor",8)
                                                    ;
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[8] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 8);
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
                                                  pCVar23 = (CDoor *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_2eec,g_CDoorClassInfo.name_hash,
                                                             &g_CDoorClassInfo);
                                                  if ((pCVar23 == (CDoor *)0x0) ||
                                                     (pCVar17 = (CCharacter *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_28ac,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar17 == (CCharacter *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    local_114 = g_ScriptEventsEnabled;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      iVar8 = (*(((pCVar17->base).vtable._uc)->_uc).
                                                                hasDoorTarget)(pCVar17);
                                                      if (iVar8 != 0) {
                                                        local_114 = 1;
                                                      }
                                                    }
                                                    else {
                                                      (*(((pCVar17->base).vtable._uc)->_uc).
                                                        setDoorTarget)(pCVar17,(uint)pCVar23);
                                                      this_ptr->cmd_timer = 1.0;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"pressButton"
                                                                       ,0xb);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[0xb] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xb);
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
                                                  pCVar21 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_4a8,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (pCVar21 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  piVar11 = 
                                                  core_script_cpp_getActionState_FUN_00559660
                                                            (&(pCVar21->player_input).action_state,
                                                             local_50c);
                                                  if (piVar11 == (int *)0x0) {
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
                                                  *piVar11 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"raise",5);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[5] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 5);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_a20,100);
                                                  if (pcVar7 != (char *)0x0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing event expression on raise statament: %s",
                                                               pcVar7);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                                                            (g_CEventListPtr,local_a20);
                                                  }
                                                  else {
                                                    pcVar7 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_004add40
                                                            (g_CEventListPtr,local_a20);
                                                  if (pcVar7 != (char *)0x0) {
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "releaseButton",0xd);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xd);
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
                                                  pCVar22 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_700,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (pCVar22 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  piVar10 = 
                                                  core_script_cpp_getActionState_FUN_00559660
                                                            (&(pCVar22->player_input).action_state,
                                                             local_8f4);
                                                  iVar8 = g_ScriptEventsEnabled;
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
                                                  g_ScriptInputFlag = iVar8;
                                                  }
                                                  *piVar10 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0x1b] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0x1b);
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
                                                  pCVar26 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_271c,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (pCVar26 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004fd190
                                                              (&pCVar26->inventory);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0x17] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0x17);
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
                                                  pCVar18 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_20dc,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (pCVar18 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if ((g_ScriptEventsEnabled == 0) &&
                                                     (pCVar18_00 = 
                                                  core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                                                            (&g_HeroActors[g_LocalHeroIndex]->
                                                              inventory,local_2014),
                                                  pCVar18_00 != (CDemonActor *)0x0)) {
                                                    core_inv_cpp_CInventory_removeItem_FUN_004fea70
                                                              (&pCVar18->inventory,pCVar18_00,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"removeKeys",
                                                                       10);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[10] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 10);
                                                  local_90 = -1;
                                                  sscanf
                                                            (local_11c," (%d )%n",&local_94,
                                                             &local_90);
                                                  if (local_90 < 3) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_90;
                                                  if (g_CNetGamePtr->connection_type !=
                                                      CONNECTION_NONE) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_hero_cpp_CHero_removeMatchingKeys_FUN_004f3910
                                                            (g_HeroActors[g_LocalHeroIndex],local_94
                                                            );
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"return",6);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[6] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 6);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    iVar8 = this_ptr->call_stack_count;
                                                    if (iVar8 < 1) {
                                                      _sprintf
                                                                (g_ScriptErrorBuffer,
                                                                 "Return without gosub detected on script line %d."
                                                                 ,iVar4);
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack_count = iVar8 + -1;
                                                    this_ptr->next_cmd =
                                                         this_ptr->call_stack[iVar8 + -1];
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"rollCredits"
                                                                       ,0xb);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[0xb] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xb);
                                                  local_8c = -1;
                                                  sscanf
                                                            (local_11c," ( )%n",&local_8c);
                                                  iVar8 = g_ScriptEventsEnabled;
                                                  pCVar6 = g_CGamePtr;
                                                  if (local_8c < 2) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_8c;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr->script_pause_flag = 1;
                                                    local_114 = iVar8;
                                                    pCVar6->act_completion_state = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"say",3);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[3] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 3);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_3b6c,500);
                                                  if (pcVar7 != (char *)0x0) {
LAB_0055e656:
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
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
                                                    pcVar7 = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (local_3b6c + local_88);
                                                  local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_0055ff00
                                                            (this_ptr,local_258c,local_145c,pcVar7);
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
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "selectWeapon",0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xc);
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
                                                  pCVar15 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_ae8,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (pCVar15 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    inventory_ptr = &pCVar15->inventory;
                                                    local_80 = g_ScriptEventsEnabled;
                                                    actor_ptr = 
                                                  core_gabriela_cpp_getSelectedWeapon_FUN_004d7650
                                                            (inventory_ptr);
                                                  local_7c = actor_ptr;
                                                  if (actor_ptr != (CWeapon *)0x0) {
                                                    do {
                                                      if (actor_ptr == (CWeapon *)0x0) {
                                                        g_CurrentFilename =
                                                             "..\\core\\script.cpp";
                                                        g_CurrentLineNumber = 0xad9;
                                                        core_main_c_displayErrorAndQuit_FUN_00506f10
                                                                  (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                                                    (&actor_ptr->base,local_69c);
                                                  if (iVar8 != 0) goto LAB_0055a8bb;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
                                                            (inventory_ptr,(CDemonActor *)0x0,5,1);
                                                  actor_ptr = 
                                                  core_gabriela_cpp_getSelectedWeapon_FUN_004d7650
                                                            (inventory_ptr);
                                                  } while (actor_ptr != local_7c);
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
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "setActorVariable",0x10);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0x10] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0x10);
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
                                                  iVar8 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00559220
                                                            (local_12cc);
                                                  if (iVar8 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar18_00 = core_script_cpp_getActor_FUN_005594e0
                                                                         (local_24c4,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo);
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                            (g_CEventListPtr,local_12cc,pCVar18_00);
                                                  }
                                                  else if ((pCVar18_00 == (CDemonActor *)0x0) &&
                                                          (g_ActorLookedUpByVariable == 0)) {
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xf);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_82c,100);
                                                  if (pcVar7 != (char *)0x0) goto LAB_0055e656;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0
                                                            (g_CSoundPtr,local_82c);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xe);
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
                                                  iVar8 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790
                                                            (g_CDemonSetPtr,local_2b04);
                                                  if (iVar8 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Camera \"%s\" does not exist.",
                                                               local_2b04);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    g_CDemonSetPtr->cameras[iVar8].camera_group =
                                                         local_74;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0x12);
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
                                                  pCVar19 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_320c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar19 == (CCharacter *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    pCVar19->hit_points =
                                                         pCVar19->max_hit_points * local_6c;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "setFocusActor",0xd);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xd);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_9bc,100);
                                                  if (pcVar7 != (char *)0x0) {
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
                                                    return -1;
                                                  }
                                                  pCVar18_00 = core_script_cpp_getActor_FUN_005594e0
                                                                         (local_9bc,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo);
                                                  if (pCVar18_00 == (CDemonActor *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (pCVar18_00 != this_ptr->focus_actor) {
                                                    this_ptr->focus_actor_changed = 1;
                                                    this_ptr->focus_actor = pCVar18_00;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"setHeroTask"
                                                                       ,0xb);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[0xb] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xb);
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
                                                  this_ptr_01 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_638,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (this_ptr_01 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  iVar11 = _stricmp
                                                                     (local_2b4,"stand");
                                                  iVar8 = 0;
                                                  if (iVar11 != 0) {
                                                    iVar8 = _stricmp
                                                                      (local_2b4,"follow");
                                                    if (iVar8 == 0) {
                                                      iVar8 = 1;
                                                    }
                                                    else {
                                                      iVar8 = _stricmp
                                                                        (local_2b4,"kill");
                                                      if (iVar8 == 0) {
                                                        iVar8 = 2;
                                                      }
                                                      else {
                                                        iVar8 = _stricmp
                                                                          (local_2b4,
                                                                           "guard");
                                                        if (iVar8 == 0) {
                                                          iVar8 = 3;
                                                        }
                                                        else {
                                                          iVar8 = _stricmp
                                                                            (local_2b4,
                                                                             "suspend");
                                                          if (iVar8 != 0) {
                                                            _sprintf
                                                                      (g_ScriptErrorBuffer,
                                                                       "Invalid Task: %s",
                                                                       local_2b4);
                                                            return -1;
                                                          }
                                                          iVar8 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_hero_cpp_CHero_setAiTask_FUN_004f3930
                                                              (this_ptr_01,iVar8);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"setIniInt",9
                                                                      );
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[9] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 9);
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
                                                               "Game");
                                                    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
                                                              (&local_3f6c,local_e1c,local_5c);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0x12);
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
                                                  local_50 = -1.0;
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
                                                    this_ptr->message_duration = local_50;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xc);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_764,100);
                                                  if (pcVar7 != (char *)0x0) {
LAB_0055f0a8:
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
                                                    return -1;
                                                  }
                                                  iVar8 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00560160
                                                            (this_ptr,local_764);
                                                  if (iVar8 < 0) {
                                                    _sprintf
                                                              (g_ScriptErrorBuffer,
                                                               "Undefined label '%s'",
                                                               local_764);
                                                    return -1;
                                                  }
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    this_ptr->saved_cmd_index = iVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"setSpeaker",
                                                                       10);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[10] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 10);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_3e0,100);
                                                  if (pcVar7 != (char *)0x0) goto LAB_0055f0a8;
                                                  if (local_3e0[0] == '\0') {
                                                    this_ptr->who_is_speaking = (CDemonActor *)0x0;
                                                  }
                                                  else {
                                                    pCVar28 = (CCharacter *)
                                                              core_script_cpp_getActor_FUN_005594e0
                                                                        (local_3e0,
                                                                         g_CCharacterClassInfo.
                                                                         name_hash,
                                                                         &g_CCharacterClassInfo);
                                                    this_ptr->who_is_speaking =
                                                         (CDemonActor *)pCVar28;
                                                    if (pCVar28 == (CCharacter *)0x0)
                                                    goto joined_r0x0055c026;
                                                  }
                                                  this_ptr->last_speaker = this_ptr->who_is_speaking
                                                  ;
                                                  if ((this_ptr->focus_actor_locked == 0) &&
                                                     (this_ptr->who_is_speaking !=
                                                      this_ptr->focus_actor)) {
                                                    this_ptr->focus_actor_changed = 1;
                                                    this_ptr->focus_actor =
                                                         this_ptr->who_is_speaking;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xd);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_318,100);
                                                  if (pcVar7 != (char *)0x0) {
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
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
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"setVictim",9
                                                                      );
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[9] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 9);
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
                                                  this_ptr_02 = (CEnemy *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_1cf4,g_CEnemyClassInfo.name_hash,
                                                             &g_CEnemyClassInfo);
                                                  if (this_ptr_02 == (CEnemy *)0x0)
                                                  goto joined_r0x0055c026;
                                                  pCVar24 = (CCharacter *)0x0;
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
                                                    iVar8 = _stricmp
                                                                      (local_1204,"disable"
                                                                      );
                                                    pCVar24 = (CCharacter *)g_ScriptSentinelActor;
                                                    if ((iVar8 != 0) &&
                                                       (pCVar24 = (CCharacter *)
                                                                                                                                    
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_1204,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar24 == (CCharacter *)0x0))
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
                                                    core_enemy_cpp_CEnemy_setVictim_FUN_004a9ef0
                                                              (this_ptr_02,&pCVar24->base);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"snapToFace",
                                                                       10);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[10] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 10);
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
                                                  pCVar18_00 = core_script_cpp_getActor_FUN_005594e0
                                                                         (local_2c94,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo);
                                                  if ((pCVar18_00 == (CDemonActor *)0x0) ||
                                                     (pCVar12 = 
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_1c2c,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar12 == (CDemonActor *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    core_bodypart_cpp_subtractVector_FUN_0041b510
                                                              (&(pCVar12->location).position,
                                                               &local_148,
                                                               &(pCVar18_00->location).position);
                                                    pCVar13 = 
                                                  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                                            (&local_160,&local_148);
                                                  (pCVar18_00->orient).vec.y = pCVar13->y;
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                                                            (pCVar18_00);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"startSay",8)
                                                    ;
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[8] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 8);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_3978,500);
                                                  if (pcVar7 != (char *)0x0) {
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
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
                                                  pcVar7 = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (local_3978 + local_3c);
                                                  local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_0055ff00
                                                            (this_ptr,local_15ec,local_21a4,pcVar7);
                                                  this_ptr->dialog_wav_time = local_14;
                                                  fVar1 = this_ptr->dialog_wav_time;
                                                  goto joined_r0x0055f6da;
                                                  }
                                                  iVar8 = _strnicmp
                                                                    (pcVar7,"switchCamera",
                                                                     0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xc);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_d54,200);
                                                  if (pcVar7 != (char *)0x0) {
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
                                                    return -1;
                                                  }
                                                  pcVar31 = strchr(local_d54,',');
                                                  local_18 = (uint)(pcVar31 != (char *)0x0);
                                                  local_38 = -1;
                                                  strcat(local_d54,",");
                                                  sscanf
                                                            (local_d54,"%[^,],%n",local_7c8,
                                                             &local_38);
                                                  if (local_38 < 1) {
                                                    strcpy(g_ScriptErrorBuffer,"Error parsing out camera name");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00559360(local_7c8)
                                                  ;
                                                  iVar8 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790
                                                            (g_CDemonSetPtr,local_7c8);
                                                  if (iVar8 < 0) {
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
                                                            (g_CDemonSetPtr,iVar8,local_3f7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,
                                                  "timedDisplay",0xc);
                                                  if ((iVar8 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar7[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 0xc);
                                                  pcVar7 = 
                                                  core_script_cpp_parseArgument_FUN_005593f0
                                                            (&local_11c,local_352c,300);
                                                  if (pcVar7 != (char *)0x0) {
LAB_0055f91c:
                                                    strcpy(g_ScriptErrorBuffer,pcVar7);
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
                                                    strcpy(this_ptr->current_message,
                                                           core_script_cpp_skipWhitespace_FUN_005593d0(local_352c + local_34));
                                                  local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,local_30,time_remaining);
                                                  if (0 < local_114) {
                                                    this_ptr->current_message[0] = '\0';
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"turnToFace",
                                                                       10);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[10] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 10);
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
                                                  pCVar17 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_2974,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if ((pCVar17 == (CCharacter *)0x0) ||
                                                     (pCVar18_00 = 
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_16b4,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar18_00 == (CDemonActor *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    (*(((pCVar17->base).vtable._uc)->_uc).
                                                      setWalkTargetImmediate)(pCVar17,pCVar18_00);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"wait",4);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[4] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 4);
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
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"waitFor",7);
                                                    if ((iVar8 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[7] + 1)] & 0xe0) == 0)) {
                                                      local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 7);
                                                  pcVar7 = 
                                                  core_script_cpp_parseConditionExpr_FUN_005594a0
                                                            (&local_11c,local_37c);
                                                  if (pcVar7 != (char *)0x0) goto LAB_0055f91c;
                                                  if ((g_ScriptEventsEnabled == 0) &&
                                                     (iVar8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_37c), iVar8 == 0)
                                                  ) {
                                                    local_114 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = _strnicmp
                                                                      (pcVar7,"walkTo",6);
                                                    if ((iVar8 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar7[6] + 1)] & 0xe0) != 0)) {
                                                      pcVar7 = "Unknown command on line %d: %s";
                                                      goto LAB_0055a97f;
                                                    }
                                                    local_11c = 
                                                  core_script_cpp_skipWhitespace_FUN_005593d0
                                                            (pcVar7 + 6);
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
                                                  pCVar14 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005594e0
                                                                      (local_2bcc,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if ((pCVar14 == (CCharacter *)0x0) ||
                                                     (pCVar16 = 
                                                  core_script_cpp_getActor_FUN_005594e0
                                                            (local_177c,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar16 == (CDemonActor *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (g_ScriptEventsEnabled == 0) {
                                                    (*(((pCVar14->base).vtable._uc)->_uc).
                                                      setWalkTarget)(pCVar14,pCVar16,local_20,
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
  if ((g_ScriptEventsEnabled != 2) && (*local_11c != '\0')) {
    _sprintf
              (g_ScriptErrorBuffer,"Extra characters \"%s\" on line %d",local_11c,iVar4);
    return -1;
  }
LAB_0055a8d4:
  if (local_114 == 1) {
    this_ptr->dialog_wav_time = -1.0;
    iVar4 = g_ScriptEventsEnabled;
    this_ptr->cmd_timer = -1.0;
    if ((iVar4 == 0) && (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
      _sprintf(g_ScriptErrorBuffer,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_114) {
    this_ptr->next_cmd = local_110;
    return local_114;
  }
  return local_114;
}
