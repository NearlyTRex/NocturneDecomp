// Name: core_script.cpp_CScript_step_FUN_004ff2c0
// Address: 004ff2c0
// Address Range: [[004ff2c0, 005049ad]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_step_FUN_004ff2c0(CScript *this_ptr,float *time_remaining)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_CScript_step_FUN_004ff2c0(CScript *this_ptr,float *time_remaining)

{
  float *inventory_ptr;
  double dVar1;
  char cVar2;
  SDialogEntry *pSVar3;
  CGame *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  CMotionList *this_ptr_00;
  CPlatform *pCVar9;
  CDoor *door_target;
  int *piVar10;
  CWeapon *actor_ptr;
  CHero *this_ptr_01;
  int iVar11;
  CEnemy *this_ptr_02;
  CDemonActor *pCVar12;
  CVector3f *pCVar13;
  CCharacter *pCVar14;
  CDemonActor *pCVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
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
  uint local_124;
  float local_120;
  int local_11c;
  char *local_118;
  char *local_114;
  C3DSLight *local_110;
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
  int local_c8;
  uint local_c4;
  CEnemy *local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  float local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  CWeapon *local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  bVar21 = 0;
  if ((this_ptr->next_cmd < 0) || (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 1133;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar18 = "(no error message provided)";
  pcVar20 = &DAT_01e56420;
  do {
    cVar2 = *pcVar18;
    *pcVar20 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar18[1];
    pcVar18 = pcVar18 + 2;
    pcVar20[1] = cVar2;
    pcVar20 = pcVar20 + 2;
  } while (cVar2 != '\0');
  pcVar18 = this_ptr->parsed_lines[this_ptr->next_cmd].text;
  local_11c = this_ptr->parsed_lines[this_ptr->next_cmd].line_number;
  local_114 = (char *)this_ptr->next_cmd;
  local_124 = 1;
  this_ptr->next_cmd = (int)(local_114 + 1);
  cVar2 = *pcVar18;
  if ((cVar2 == '{') || (cVar2 == '}')) {
    local_118 = &CHAR_00h_0058e552;
  }
  else if (cVar2 == ':') {
    local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 1);
    dVar1 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118));
    if (_DAT_01e56418 != 0) {
      cVar2 = *local_118;
      for (pcVar18 = local_118;
          (cVar2 != '\0' &&
          (((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 0xe0) != 0 || (*pcVar18 == '_'))
          )); pcVar18 = pcVar18 + 1) {
        cVar2 = pcVar18[1];
      }
      if (*pcVar18 != '\0') {
        pcVar18 = "Invalid label \"%s\" on line";
        goto LAB_004ff42f;
      }
      pcVar18 = (char *)core_script_cpp_CScript_findLabelIndex_FUN_00504c10(this_ptr,local_118);
      if ((int)pcVar18 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 1183;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Internal script error checking for duplicate label.");
      }
      if (pcVar18 != local_114) {
        _sprintf(&DAT_01e56420,"Duplicate label %s on lines %d and %d",local_118,local_11c,
                   this_ptr->parsed_lines[(int)pcVar18].line_number);
        return -1;
      }
    }
    local_118 = &CHAR_00h_0058e5db;
  }
  else {
    iVar6 = _strnicmp(pcVar18,"syntaxCheckOn",0xd);
    if ((iVar6 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) {
      if (_DAT_01e56418 != 0) {
        _DAT_01e56418 = 1;
      }
      local_118 = &CHAR_00h_0058e5ea;
    }
    else {
      iVar6 = _strnicmp(pcVar18,"syntaxCheckOff",0xe);
      if ((iVar6 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0))
      {
        if (_DAT_01e56418 != 0) {
          _DAT_01e56418 = 2;
        }
        local_118 = &CHAR_00h_0058e5fa;
      }
      else if (_DAT_01e56418 != 2) {
        iVar6 = _strnicmp(pcVar18,"advanceLightFilter",0x12);
        if (((((((((iVar6 == 0) &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0x12] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp
                                     (pcVar18,"createExplosion",0xf), iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp(pcVar18,"deleteActor",0xb),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)))) ||
               ((iVar6 = _strnicmp(pcVar18,"displayBitmap",0xd),
                iVar6 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)))) ||
              (((((iVar6 = _strnicmp(pcVar18,"hurtCharacter",0xd)
                  , iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp(pcVar18,"incCounter",10),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp(pcVar18,"fadeSfx",7),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)))) ||
               ((iVar6 = _strnicmp
                                   (pcVar18,"fadeAmbientSound",0x10), iVar6 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)))))) ||
             ((((iVar6 = _strnicmp(pcVar18,"flagOn",6),
                iVar6 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar18[6] + 1)] & 0xe0) == 0)
                ) || ((iVar6 = _strnicmp(pcVar18,"flagOff",7),
                      iVar6 == 0 &&
                      ((g_CharacterClassificationTable[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)))) ||
              ((((iVar6 = _strnicmp(pcVar18,"gameFlagOn",10),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) ||
                ((iVar6 = _strnicmp(pcVar18,"gameFlagOff",0xb),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)))) ||
               ((((iVar6 = _strnicmp(pcVar18,"killCharacter",0xd)
                  , iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp(pcVar18,"killHero",8),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[8] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp(pcVar18,"killSfx",7),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)))))))))) ||
            ((iVar6 = _strnicmp(pcVar18,"lightning",9),
             iVar6 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar18[9] + 1)] & 0xe0) == 0))))
           || ((((iVar6 = _strnicmp(pcVar18,"playSfx",7),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)) ||
                ((iVar6 = _strnicmp
                                    (pcVar18,"setCameraAmbient",0x10), iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)))) ||
               ((((iVar6 = _strnicmp(pcVar18,"setCounter",10),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) ||
                 (((iVar6 = _strnicmp
                                      (pcVar18,"setGroupAmbient",0xf), iVar6 == 0 &&
                   ((g_CharacterClassificationTable[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)) ||
                  ((((iVar6 = _strnicmp
                                        (pcVar18,"setLightFilterFrame",0x13), iVar6 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar18[0x13] + 1)] & 0xe0) == 0)) ||
                    ((iVar6 = _strnicmp
                                        (pcVar18,"setLeverState",0xd), iVar6 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)))) ||
                   ((iVar6 = _strnicmp
                                       (pcVar18,"setModelState",0xd), iVar6 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0))))))))
                || (((iVar6 = _strnicmp(pcVar18,"setTimer",8),
                     iVar6 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar18[8] + 1)] & 0xe0) == 0)) ||
                    (((((iVar6 = _strnicmp
                                           (pcVar18,"setWeather",10), iVar6 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) ||
                       ((iVar6 = _strnicmp
                                           (pcVar18,"shakeScreen",0xb), iVar6 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0))))
                      || ((iVar6 = _strnicmp
                                             (pcVar18,"slamModelToMotion",0x11), iVar6 == 0
                          && ((g_CharacterClassificationTable[(byte)(pcVar18[0x11] + 1)] & 0xe0) ==
                              0)))) ||
                     ((iVar6 = _strnicmp(pcVar18,"warpTo",6),
                      iVar6 == 0 &&
                      ((g_CharacterClassificationTable[(byte)(pcVar18[6] + 1)] & 0xe0) == 0)))))))))
               ))) {
          if (_DAT_01e56418 == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,pcVar18);
          }
          else {
            pcVar18 = core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(0x01C03A10,pcVar18);
            if (pcVar18 != (char *)0x0) goto LAB_0050064d;
          }
          local_118 = &CHAR_00h_0058e756;
        }
        else {
          iVar6 = _strnicmp(pcVar18,"addItemToInventory",0x12);
          if ((iVar6 == 0) &&
             ((g_CharacterClassificationTable[(byte)(pcVar18[0x12] + 1)] & 0xe0) == 0)) {
            local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 0x12);
            local_e8 = -1;
            sscanf(local_118," ( %[^,], %[^)])%n",local_e1c,local_27e4,&local_e8);
            if (local_e8 < 3) {
              _sprintf(&DAT_01e56420,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_118 = local_118 + local_e8;
            core_script_cpp_trimString_FUN_004fe000(local_e1c);
            core_script_cpp_trimString_FUN_004fe000(local_27e4);
            pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                (local_e1c,g_CHeroActorType_01cae0ec.name_hash,
                                 &g_CHeroActorType_01cae0ec);
            if ((pCVar15 == (CDemonActor *)0x0) ||
               (pCVar12 = core_script_cpp_getActor_FUN_004fe180
                                    (local_27e4,g_CDemonActorActorType_00763e48.name_hash,
                                     &g_CDemonActorActorType_00763e48),
               pCVar12 == (CDemonActor *)0x0)) goto joined_r0x00500ad6;
            if (_DAT_01e56418 == 0) {
              core_inv_cpp_CInventory_addItem_FUN_004bf360
                        ((CInventory *)&pCVar15[0x17e].orient_matrix.m[0].y,pCVar12,0);
            }
          }
          else {
            iVar6 = _strnicmp(pcVar18,"addLightFilter",0xe);
            if ((iVar6 == 0) &&
               ((g_CharacterClassificationTable[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
              local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 0xe);
              local_e0 = -1;
              sscanf
                        (local_118,"( %[^,], %[^,], %f )%n",local_5d4,local_3e0,&local_a0,&local_e0);
              if (local_e0 < 5) {
                _sprintf(&DAT_01e56420,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_118 = local_118 + local_e0;
              core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0
                        (g_CDemonSet_PTR_005be368,local_5d4,&local_110,&local_100);
              if (local_110 == (C3DSLight *)0x0) {
                _sprintf(&DAT_01e56420,"Light \"%s\" does not exist",local_5d4);
                return -1;
              }
              iVar6 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",local_3e0);
              if (iVar6 < 1) {
                _sprintf(&DAT_01e56420,"Can't open filter \"%s\"",local_3e0);
                return -1;
              }
              if (_DAT_01e56418 == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_00515710(local_110,local_3e0,local_a0,0);
              }
            }
            else {
              iVar6 = _strnicmp(pcVar18,"allowEnemyAttack",0x10);
              if ((iVar6 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)) {
                local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 0x10);
                pcVar18 = core_script_cpp_parseConditionExpr_FUN_004fe140(&local_118,local_4a8);
                if (pcVar18 != (char *)0x0) {
LAB_0050064d:
                  pcVar20 = &DAT_01e56420;
                  do {
                    cVar2 = *pcVar18;
                    *pcVar20 = cVar2;
                    if (cVar2 == '\0') {
                      return -1;
                    }
                    cVar2 = pcVar18[1];
                    pcVar18 = pcVar18 + 2;
                    pcVar20[1] = cVar2;
                    pcVar20 = pcVar20 + 2;
                  } while (cVar2 != '\0');
                  return -1;
                }
                if (_DAT_01e56418 == 0) {
                  iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                    (0x01C03A10,local_4a8);
                  g_CGame_PTR_005b9354->allow_enemy_attack_flag = iVar6;
                }
              }
              else {
                iVar6 = _strnicmp
                                  (pcVar18,"allowHeroControls",0x11);
                if ((iVar6 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)) {
                  local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 0x11);
                  pcVar18 = core_script_cpp_parseConditionExpr_FUN_004fe140(&local_118,local_b4c);
                  if (pcVar18 != (char *)0x0) goto LAB_0050064d;
                  if (_DAT_01e56418 == 0) {
                    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                      (0x01C03A10,local_b4c);
                    _DAT_01e56c24 = (uint)(iVar6 == 0);
                    g_CGame_PTR_005b9354->allow_hero_controls_flag = _DAT_01e56c24;
                  }
                }
                else {
                  iVar6 = _strnicmp
                                    (pcVar18,"allowHeroDamage",0xf);
                  if ((iVar6 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)) {
                    local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 0xf);
                    pcVar18 = core_script_cpp_parseConditionExpr_FUN_004fe140(&local_118,local_ae8);
                    if (pcVar18 != (char *)0x0) goto LAB_0050064d;
                    if (_DAT_01e56418 == 0) {
                      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                        (0x01C03A10,local_ae8);
                      g_CGame_PTR_005b9354->allow_damage_flag = iVar6;
                    }
                  }
                  else {
                    iVar6 = _strnicmp
                                      (pcVar18,"attachActorToPlatform",0x15);
                    if ((iVar6 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(pcVar18[0x15] + 1)] & 0xe0) == 0)) {
                      local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 0x15);
                      local_10c = -1;
                      sscanf
                                (local_118,"(%[^,], %[^)])%n",local_190c,local_d54,&local_10c);
                      if (local_10c < 2) {
                        _sprintf(&DAT_01e56420,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_118 = local_118 + local_10c;
                      core_script_cpp_trimString_FUN_004fe000(local_190c);
                      core_script_cpp_trimString_FUN_004fe000(local_d54);
                      pCVar9 = (CPlatform *)
                               core_script_cpp_getActor_FUN_004fe180
                                         (local_d54,g_CPlatformActorType_01e42894.name_hash,
                                          &g_CPlatformActorType_01e42894);
                      if ((pCVar9 == (CPlatform *)0x0) ||
                         (pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                              (local_190c,g_CDemonActorActorType_00763e48.name_hash,
                                               &g_CDemonActorActorType_00763e48),
                         pCVar15 == (CDemonActor *)0x0)) goto joined_r0x00500ad6;
                      if (_DAT_01e56418 == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_004f75c0(pCVar9,pCVar15);
                      }
                    }
                    else {
                      iVar6 = _strnicmp
                                        (pcVar18,"beginFadeIn",0xb);
                      if ((iVar6 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)) {
                        local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 0xb);
                        if (_DAT_01e56418 == 0) {
                          core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(g_CGame_PTR_005b9354);
                        }
                      }
                      else {
                        iVar6 = _strnicmp
                                          (pcVar18,"beginFadeOut",0xc);
                        if ((iVar6 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0))
                        {
                          local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 0xc);
                          if (_DAT_01e56418 == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004a3820(g_CGame_PTR_005b9354);
                          }
                        }
                        else {
                          iVar6 = _strnicmp
                                            (pcVar18,"breakPoint",10);
                          if ((iVar6 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)
                             ) {
                            local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar18 + 10);
                            if (_DAT_01e56418 == 0) {
                              _sprintf(local_958,"Script breakpoint reached at line %d",local_11c);
                              core_game_cpp_CGame_displayMessage_FUN_0049aa30
                                        (g_CGame_PTR_005b9354,local_958,5.0);
                              this_ptr->script_state = 2;
                            }
                          }
                          else {
                            iVar6 = _strnicmp
                                              (pcVar18,"cancelCameraHold",0x10);
                            if ((iVar6 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(pcVar18[0x10] + 1)] & 0xe0)
                                == 0)) {
                              local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                    (pcVar18 + 0x10);
                              if (_DAT_01e56418 == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
                                          (g_CDemonSet_PTR_005be368);
                              }
                            }
                            else {
                              iVar6 = _strnicmp
                                                (pcVar18,"cancelWalkTo",0xc);
                              if ((iVar6 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(pcVar18[0xc] + 1)] & 0xe0)
                                  == 0)) {
                                local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                      (pcVar18 + 0xc);
                                pcVar18 = core_script_cpp_parseArgument_FUN_004fe090
                                                    (&local_118,local_2334,200);
                                if (pcVar18 != (char *)0x0) {
                                  pcVar20 = &DAT_01e56420;
                                  do {
                                    cVar2 = *pcVar18;
                                    *pcVar20 = cVar2;
                                    if (cVar2 == '\0') {
                                      return -1;
                                    }
                                    cVar2 = pcVar18[1];
                                    pcVar18 = pcVar18 + 2;
                                    pcVar20[1] = cVar2;
                                    pcVar20 = pcVar20 + 2;
                                  } while (cVar2 != '\0');
                                  return -1;
                                }
                                iVar6 = _stricmp
                                                  (local_2334,"all");
                                if (iVar6 == 0) {
                                  if (_DAT_01e56418 == 0) {
                                    iVar11 = 0;
                                    for (iVar6 = 0; iVar6 < g_CDemonSet_PTR_005be368->actor_count;
                                        iVar6 = iVar6 + 1) {
                                      pCVar14 = (CCharacter *)
                                                core_actor_cpp_castToClassHash_FUN_0040d890
                                                          (*(CDemonActor **)
                                                            ((int)g_CDemonSet_PTR_005be368->actors +
                                                            iVar11),g_CCharacterActorType_00765a60.
                                                                    name_hash);
                                      if (pCVar14 != (CCharacter *)0x0) {
                                        (*(((pCVar14->base).vtable._uc)->_uc).setWalkTarget)
                                                  (pCVar14,(CDemonActor *)0x0,0.0,0.0);
                                      }
                                      iVar11 = iVar11 + 4;
                                    }
                                  }
                                }
                                else {
                                  pCVar14 = (CCharacter *)
                                            core_script_cpp_getActor_FUN_004fe180
                                                      (local_2334,
                                                       g_CCharacterActorType_00765a60.name_hash,
                                                       &g_CCharacterActorType_00765a60);
                                  if (pCVar14 == (CCharacter *)0x0) goto joined_r0x00500ad6;
                                  if (_DAT_01e56418 == 0) {
                                    (*(((pCVar14->base).vtable._uc)->_uc).setWalkTarget)
                                              (pCVar14,(CDemonActor *)0x0,0.0,0.0);
                                  }
                                }
                              }
                              else {
                                iVar6 = _strnicmp
                                                  (pcVar18,"chainToMission",0xe);
                                if ((iVar6 == 0) &&
                                   ((g_CharacterClassificationTable[(byte)(pcVar18[0xe] + 1)] & 0xe0
                                    ) == 0)) {
                                  local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                        (pcVar18 + 0xe);
                                  pcVar18 = core_script_cpp_parseArgument_FUN_004fe090
                                                      (&local_118,local_2e24,200);
                                  if (pcVar18 != (char *)0x0) {
                                    pcVar20 = &DAT_01e56420;
                                    do {
                                      cVar2 = *pcVar18;
                                      *pcVar20 = cVar2;
                                      if (cVar2 == '\0') {
                                        return -1;
                                      }
                                      cVar2 = pcVar18[1];
                                      pcVar18 = pcVar18 + 2;
                                      pcVar20[1] = cVar2;
                                      pcVar20 = pcVar20 + 2;
                                    } while (cVar2 != '\0');
                                    return -1;
                                  }
                                  core_script_cpp_trimString_FUN_004fe000(local_2e24);
                                  uVar16 = _DAT_01e56418;
                                  if (_DAT_01e56418 == 0) {
                                    core_mission_cpp_CDemonMission_setMissionName_FUN_004d9650
                                              (g_CDemonMission_PTR_005baf90,local_2e24);
                                    this_ptr->script_pause_flag = 1;
                                    local_124 = uVar16;
                                  }
                                }
                                else {
                                  iVar6 = _strnicmp
                                                    (pcVar18,"clearActorVariable",0x12);
                                  if ((iVar6 == 0) &&
                                     ((g_CharacterClassificationTable[(byte)(pcVar18[0x12] + 1)] &
                                      0xe0) == 0)) {
                                    local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                          (pcVar18 + 0x12);
                                    pcVar18 = core_script_cpp_parseArgument_FUN_004fe090
                                                        (&local_118,local_3658,300);
                                    if (pcVar18 != (char *)0x0) {
LAB_00500e2e:
                                      pcVar20 = &DAT_01e56420;
                                      do {
                                        cVar2 = *pcVar18;
                                        *pcVar20 = cVar2;
                                        if (cVar2 == '\0') {
                                          return -1;
                                        }
                                        cVar2 = pcVar18[1];
                                        pcVar18 = pcVar18 + 2;
                                        pcVar20[1] = cVar2;
                                        pcVar20 = pcVar20 + 2;
                                      } while (cVar2 != '\0');
                                      return -1;
                                    }
                                    iVar6 = core_script_cpp_validateActorVariableName_FUN_004fdec0
                                                      (local_3658);
                                    if (iVar6 == 0) {
                                      return -1;
                                    }
                                    if (_DAT_01e56418 == 0) {
                                      core_event_cpp_CEventList_setActorVariable_FUN_00480950
                                                (0x01C03A10,local_3658,(CDemonActor *)0x0);
                                    }
                                  }
                                  else {
                                    iVar6 = _strnicmp
                                                      (pcVar18,"dbSay",5);
                                    if ((iVar6 == 0) &&
                                       ((g_CharacterClassificationTable[(byte)(pcVar18[5] + 1)] &
                                        0xe0) == 0)) {
                                      local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 5);
                                      local_108 = -1;
                                      sscanf
                                                (local_118,"(%[^)])%n",local_570,&local_108);
                                      if (local_108 < 3) {
                                        _sprintf(&DAT_01e56420,"Error parsing dbSay arguments"
                                                  );
                                        return -1;
                                      }
                                      core_script_cpp_trimString_FUN_004fe000(local_570);
                                      local_118 = local_118 + local_108;
                                      iVar6 = core_script_cpp_CScript_findDialogEntry_FUN_00505180
                                                        (this_ptr,local_570);
                                      if (iVar6 < 0) {
                                        local_104 = local_226c;
                                        local_e4 = "$";
                                        _sprintf(local_226c,"[Can't find %s in database]",
                                                   local_570);
                                        shape_edittool_cpp_CStrList_add_FUN_00473cb0
                                                  (&g_CPickList_01e56c30.base,local_226c);
                                      }
                                      else {
                                        pSVar3 = this_ptr->dialog_entries;
                                        local_e4 = pSVar3[iVar6].data + 0x78;
                                        local_104 = pSVar3[iVar6].data + 0x96;
                                        pcVar20 = local_570;
                                        pcVar18 = pSVar3[iVar6].data + 0x3c;
                                        do {
                                          cVar2 = *pcVar18;
                                          *pcVar20 = cVar2;
                                          if (cVar2 == '\0') break;
                                          cVar2 = pcVar18[1];
                                          pcVar18 = pcVar18 + 2;
                                          pcVar20[1] = cVar2;
                                          pcVar20 = pcVar20 + 2;
                                        } while (cVar2 != '\0');
                                      }
                                      if (this_ptr->dialog_wav_time < 0.0) {
                                        local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_005049b0
                                                            (this_ptr,local_e4,local_570,local_104);
                                        this_ptr->dialog_wav_time = local_14;
                                        if (this_ptr->dialog_wav_time < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((_DAT_01e56418 == 0) &&
                                         (local_124 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00504b70
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < (int)local_124)) {
                                        core_script_cpp_CScript_setSpeaker_FUN_00504bf0
                                                  (this_ptr,this_ptr->who_is_speaking);
                                      }
                                    }
                                    else {
                                      iVar6 = _strnicmp
                                                        (pcVar18,"dbStartSay",10);
                                      if ((iVar6 == 0) &&
                                         ((g_CharacterClassificationTable[(byte)(pcVar18[10] + 1)] &
                                          0xe0) == 0)) {
                                        local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                              (pcVar18 + 10);
                                        local_fc = -1;
                                        sscanf
                                                  (local_118,"(%[^)])%n",local_444,&local_fc);
                                        if (local_fc < 3) {
                                          _sprintf(&DAT_01e56420,
                                                     "Error parsing dbSay arguments");
                                          return -1;
                                        }
                                        core_script_cpp_trimString_FUN_004fe000(local_444);
                                        local_118 = local_118 + local_fc;
                                        iVar6 = core_script_cpp_CScript_findDialogEntry_FUN_00505180
                                                          (this_ptr,local_444);
                                        if (iVar6 < 0) {
                                          local_f4 = local_2654;
                                          local_f8 = "$";
                                          _sprintf(local_2654,"[Can't find %s in database]",
                                                     local_444);
                                          shape_edittool_cpp_CStrList_add_FUN_00473cb0
                                                    (&g_CPickList_01e56c30.base,local_2654);
                                        }
                                        else {
                                          pSVar3 = this_ptr->dialog_entries;
                                          local_f8 = pSVar3[iVar6].data + 0x78;
                                          local_f4 = pSVar3[iVar6].data + 0x96;
                                          pcVar20 = local_444;
                                          pcVar18 = pSVar3[iVar6].data + 0x3c;
                                          do {
                                            cVar2 = *pcVar18;
                                            *pcVar20 = cVar2;
                                            if (cVar2 == '\0') break;
                                            cVar2 = pcVar18[1];
                                            pcVar18 = pcVar18 + 2;
                                            pcVar20[1] = cVar2;
                                            pcVar20 = pcVar20 + 2;
                                          } while (cVar2 != '\0');
                                        }
                                        local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_005049b0
                                                            (this_ptr,local_f8,local_444,local_f4);
                                        this_ptr->dialog_wav_time = local_14;
                                        fVar7 = this_ptr->dialog_wav_time;
joined_r0x00504194:
                                        if (fVar7 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar6 = _strnicmp
                                                          (pcVar18,"debug",5);
                                        if ((iVar6 == 0) &&
                                           ((g_CharacterClassificationTable[(byte)(pcVar18[5] + 1)]
                                            & 0xe0) == 0)) {
                                          local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                                (pcVar18 + 5);
                                          pcVar18 = core_script_cpp_parseArgument_FUN_004fe090
                                                              (&local_118,local_3784,300);
                                          if (pcVar18 != (char *)0x0) goto LAB_00500e2e;
                                          if (_DAT_01e56418 == 0) {
                                            shape_edittool_cpp_FUN_0046fe60
                                                      (g_CEditorTools_PTR_005b6d50,
                                                       "Script debug message at line %d:\n%s",local_11c,
                                                       local_3784);
                                          }
                                        }
                                        else {
                                          iVar6 = _strnicmp
                                                            (pcVar18,"dismember",9);
                                          if ((iVar6 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(pcVar18[9] + 1)] & 0xe0) == 0)) {
                                            local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                                  (pcVar18 + 9);
                                            local_5c = -1;
                                            sscanf
                                                      (local_118,"(%[^,], %[^,)]%n",local_2bcc,local_1844,
                                                       &local_5c);
                                            if (local_5c < 5) {
                                              _sprintf(&DAT_01e56420,
                                                         "Error parsing dismember command parms");
                                              return -1;
                                            }
                                            local_118 = local_118 + local_5c;
                                            core_script_cpp_trimString_FUN_004fe000(local_2bcc);
                                            core_script_cpp_trimString_FUN_004fe000(local_1844);
                                            local_f0 = (CCharacter *)
                                                       core_script_cpp_getActor_FUN_004fe180
                                                                 (local_2bcc,
                                                                  g_CCharacterActorType_00765a60.
                                                                  name_hash,
                                                                  &g_CCharacterActorType_00765a60);
                                            if (local_f0 == (CCharacter *)0x0)
                                            goto joined_r0x00500ad6;
                                            iVar6 = core_script_cpp_parseBodyPartMask_FUN_004fe3d0
                                                              (local_f0,local_1844,local_c8c);
                                            if (iVar6 == 0) {
                                              return -1;
                                            }
                                            core_actor_cpp_CVector_ctor_FUN_0040e160(&local_148);
                                            pCVar13 = (CVector3f *)0x0;
                                            if (*local_118 == ',') {
                                              local_5c = -1;
                                              sscanf
                                                        (local_118,",%f ,%f ,%f ,%f %n",&local_148,
                                                         &local_148.y,&local_148.z,&local_3f80,
                                                         &local_5c);
                                              if (local_5c < 5) {
                                                _sprintf(&DAT_01e56420,
                                                           "Error parsing dismember command parms");
                                                return -1;
                                              }
                                              local_118 = local_118 + local_5c;
                                              if (0.0 < local_3f80) {
                                                local_3f80 = local_3f80 * (float)3.1415926535000001 *
                                                             (float)0.0055555555555555497;
                                                fVar7 = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                                            (-local_3f80,local_3f80);
                                                y = 0.0;
                                                local_14 = fVar7;
                                                local_14 = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                                            (-local_3f80,local_3f80);
                                                pCVar13 = core_script_cpp_makeVector_FUN_00505880
                                                                    (&local_154,local_14,y,fVar7);
                                                core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
                                                          (&local_188,pCVar13);
                                                pCVar13 = 
                                                  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                                            (&local_188,&local_130,&local_148);
                                                core_actor_cpp_copyVector_FUN_0040e180
                                                          (&local_148,pCVar13);
                                              }
                                              pCVar13 = &local_148;
                                            }
                                            if (*local_118 != ')') {
                                              _sprintf(&DAT_01e56420,
                                                         "Error parsing dismember command parms near '%s'",
                                                         local_118);
                                              return -1;
                                            }
                                            local_118 = local_118 + 1;
                                            if (_DAT_01e56418 == 0) {
                                              local_ec = 
                                                  core_bodypart_cpp_createBodyPart_FUN_00415b30
                                                            (&(local_f0->base).location.position,
                                                             &(local_f0->base).orient,pCVar13,
                                                             &local_f0->base,0,0,
                                                             local_f0->blood_type);
                                              iVar11 = 0;
                                              iVar6 = 0;
                                              do {
                                                if (*(int *)((int)local_c8c + iVar11) != 0) {
                                                  core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                                                            (local_f0,local_ec,iVar6,0);
                                                }
                                                iVar6 = iVar6 + 1;
                                                iVar11 = iVar11 + 4;
                                              } while (iVar6 < 0x1e);
                                              core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40
                                                        (local_ec);
                                            }
                                          }
                                          else {
                                            iVar6 = _strnicmp
                                                              (pcVar18,"display",7);
                                            if ((iVar6 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(pcVar18[7] + 1)] & 0xe0) == 0)) {
                                              local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 7);
                                              pcVar18 = core_script_cpp_parseArgument_FUN_004fe090
                                                                  (&local_118,
                                                                   this_ptr->current_message,0x400);
                                              if (pcVar18 != (char *)0x0) {
                                                _sprintf(&DAT_01e56420,
                                                           "Error parsing message text on display statament: %s",
                                                           pcVar18);
                                                return -1;
                                              }
                                            }
                                            else {
                                              iVar6 = _strnicmp
                                                                (pcVar18,"else",4);
                                              if ((iVar6 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(pcVar18[4] + 1)] & 0xe0) == 0)) {
                                                local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 4);
                                                iVar6 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_00504c70
                                                            (this_ptr,this_ptr->next_cmd,1);
                                                if (iVar6 < 0) {
                                                  _sprintf(&DAT_01e56420,
                                                             "Can't skip next command after else statement on line %d",
                                                             local_11c);
                                                  return -1;
                                                }
                                                this_ptr->next_cmd = iVar6;
                                              }
                                              else {
                                                iVar6 = _strnicmp
                                                                  (pcVar18,"enableCamera",
                                                                   0xc);
                                                if ((iVar6 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                                                  local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xc);
                                                  local_48 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^)])%n",local_307c,
                                                             local_2d5c,&local_48);
                                                  if (local_48 < 3) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing enableCamera parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_48;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_307c);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_2d5c);
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                            (g_CDemonSet_PTR_005be368,local_307c);
                                                  if (iVar6 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Camera \"%s\" does not exist.",
                                                               local_307c);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    iVar11 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_2d5c);
                                                  core_set_cpp_CDemonSet_FUN_0050e550
                                                            (g_CDemonSet_PTR_005be368,iVar6,iVar11);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                                                            (0x01C03A10,local_2d5c);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar6 = _strnicmp
                                                                    (pcVar18,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0x11);
                                                  local_44 = -1;
                                                  sscanf
                                                            (local_118,"(%d , %[^)])%n",&local_a8,
                                                             local_1dbc,&local_44);
                                                  if (local_44 < 3) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing enableCameraGroup parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_44;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1dbc);
                                                  if (_DAT_01e56418 == 0) {
                                                    iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_1dbc);
                                                  core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580
                                                            (g_CDemonSet_PTR_005be368,local_a8,iVar6
                                                            );
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                                                            (0x01C03A10,local_1dbc);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00501802:
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xf);
                                                  local_dc = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^)])%n",local_32d4,
                                                             local_1f4c,&local_dc);
                                                  if (local_dc < 3) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing enableHealthBar parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_dc;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_32d4);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1f4c);
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_32d4,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  iVar6 = _stricmp
                                                                    (local_1f4c,"false");
                                                  uVar8 = 0;
                                                  if (iVar6 != 0) {
                                                    iVar6 = _stricmp
                                                                      (local_1f4c,"true");
                                                    if (iVar6 == 0) {
                                                      uVar8 = 1;
                                                    }
                                                    else {
                                                      iVar6 = _stricmp
                                                                        (local_1f4c,
                                                                         "always");
                                                      if (iVar6 != 0) {
                                                        _sprintf(&DAT_01e56420,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'",local_1f4c);
                                                  return -1;
                                                  }
                                                  uVar8 = 2;
                                                  }
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    *(uint *)
                                                     (pCVar15[0x1b].create_event + 0x54) = uVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"end",3);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[3] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 3);
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = _DAT_01e56418;
                                                    this_ptr->script_pause_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"fadeIn",6);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[6] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 6);
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = _DAT_01e56418;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar16 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004a3a50
                                                            (g_CGame_PTR_005b9354);
                                                  if (uVar16 != 0) {
                                                    local_124 = 1;
                                                    g_CGame_PTR_005b9354->allow_damage_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeIn_FUN_004a37e0
                                                              (g_CGame_PTR_005b9354);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"fadeOut",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[7] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 7);
                                                  uVar16 = _DAT_01e56418;
                                                  pCVar4 = g_CGame_PTR_005b9354;
                                                  if (_DAT_01e56418 == 0) {
                                                    g_CGame_PTR_005b9354->allow_damage_flag = 0;
                                                    local_124 = uVar16;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar16 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004a3a50(pCVar4);
                                                  if (uVar16 != 0) {
                                                    local_124 = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeOut_FUN_004a3820
                                                              (pCVar4);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"gesture",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[7] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 7);
                                                  local_d8 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^)])%n",local_1a9c,
                                                             local_19d4,&local_d8);
                                                  if (local_d8 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing gesture command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_d8;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1a9c);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_19d4);
                                                  pCVar14 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_1a9c,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if (pCVar14 == (CCharacter *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    uVar16 = 
                                                  core_charactr_cpp_CCharacter_initGesture_FUN_00429520
                                                            (pCVar14,local_19d4);
                                                  }
                                                  else {
                                                    iVar6 = 0;
                                                    pcVar18 = local_19d4;
                                                    this_ptr_00 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                                                            (&(pCVar14->model).motion_controller);
                                                  iVar6 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                                                            (this_ptr_00,pcVar18,iVar6);
                                                  uVar16 = (uint)(-1 < iVar6);
                                                  }
                                                  if (uVar16 == 0) {
                                                    pcVar18 = 
                                                  core_bugs_cpp_getDeformableModelName_FUN_00423d30
                                                            (&pCVar14->model);
                                                  _sprintf(&DAT_01e56420,
                                                             "Gesture name %s is not valid for actor %s, model %s",
                                                             local_19d4,local_1a9c,pcVar18);
                                                  return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"getIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[9] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 9);
                                                  local_d4 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^,)] )%n",local_145c,
                                                             local_1e84,&local_d4);
                                                  if (local_d4 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing getIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_d4;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_145c);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1e84);
                                                  if (_DAT_01e56418 == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004bd860
                                                              (&local_3d6c,
                                                               "system\\nocturne.ini",
                                                               "Game");
                                                    local_d0 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_004807e0
                                                            (0x01C03A10,local_1e84);
                                                  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
                                                            (&local_3d6c,local_145c,&local_d0);
                                                  core_event_cpp_CEventList_setCounter_FUN_004806d0
                                                            (0x01C03A10,local_1e84,local_d0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xf);
                                                  local_c8 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^)])%n",local_16b4,
                                                             local_1b64,&local_c8);
                                                  if (local_c8 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing getTriggerActor command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_c8;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_16b4);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1b64);
                                                  iVar6 = 
                                                  core_script_cpp_validateActorVariableName_FUN_004fdec0
                                                            (local_16b4);
                                                  if (iVar6 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_1b64,
                                                                       g_CTriggerActorType_02dd1084.
                                                                       name_hash,
                                                                       &g_CTriggerActorType_02dd1084
                                                                      );
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00480950
                                                            (0x01C03A10,local_16b4,
                                                             (CDemonActor *)
                                                             pCVar15[2].orient_matrix.m[2].x);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"gosub",5);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[5] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 5);
                                                  iVar6 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                                                            (this_ptr,local_118);
                                                  if (iVar6 < 0) {
                                                    dVar1 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118));
                                                    pcVar18 = "Undefined label %s used in gosub statement on line %d";
LAB_004ff42f:
                                                    _sprintf(&DAT_01e56420,pcVar18,SUB84(__BITCAST_UINT64(dVar1),0),
                                                               (int)((ulonglong)dVar1 >> 0x20));
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (7 < this_ptr->call_stack_count) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Call stack overflow detected on script line %d."
                                                                 ,local_11c);
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack[this_ptr->call_stack_count]
                                                         = this_ptr->next_cmd;
                                                    this_ptr->next_cmd = iVar6;
                                                    this_ptr->call_stack_count =
                                                         this_ptr->call_stack_count + 1;
                                                    local_118 = &CHAR_00h_0058ede4;
                                                  }
                                                  else {
                                                    local_118 = &CHAR_00h_0058ede4;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"goto",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[4] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 4);
                                                  iVar6 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                                                            (this_ptr,local_118);
                                                  if (iVar6 < 0) {
                                                    dVar1 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118));
                                                    pcVar18 = "Undefined label %s used in goto statement on line %d";
                                                    goto LAB_004ff42f;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    this_ptr->next_cmd = iVar6;
                                                    local_118 = &CHAR_00h_0058ee1f;
                                                  }
                                                  else {
                                                    local_118 = &CHAR_00h_0058ee1f;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"gtfo",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[4] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 4);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_3400,300);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00501802;
                                                  if (_DAT_01e56418 == 0) {
                                                    shape_edittool_cpp_FUN_0046fcd0
                                                              (g_CEditorTools_PTR_005b6d50,
                                                               "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                               local_11c,local_3400);
                                                    this_ptr->script_pause_flag = 1;
                                                    local_124 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xd);
                                                  local_c4 = 0xffffffff;
                                                  sscanf
                                                            (local_118,"(%[^,)]%n",local_1524,
                                                             &local_c4);
                                                  if ((int)local_c4 < 2) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing holsterWeapon command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_c4;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1524);
                                                  local_c0 = (CEnemy *)
                                                             core_script_cpp_getActor_FUN_004fe180
                                                                       (local_1524,
                                                                        g_CHeroActorType_01cae0ec.
                                                                        name_hash,
                                                                        &g_CHeroActorType_01cae0ec);
                                                  if (local_c0 == (CEnemy *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  local_bc = 1;
                                                  if (*local_118 == ',') {
                                                    local_118 = local_118 + 1;
                                                    uVar16 = 0xffffffff;
                                                    pcVar18 = local_118;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar2 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar21 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    uVar16 = ~uVar16 - 2;
                                                    local_c4 = uVar16;
                                                    if ((int)uVar16 < 1) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    pcVar18 = local_118;
                                                    pcVar20 = acStack_fad + 1;
                                                    for (uVar17 = uVar16 >> 2; uVar17 != 0;
                                                        uVar17 = uVar17 - 1) {
                                                      *(uint *)pcVar20 =
                                                           *(uint *)pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar21 * -8 + 4;
                                                      pcVar20 = pcVar20 + (uint)bVar21 * -8 + 4;
                                                    }
                                                    for (uVar16 = uVar16 & 3; uVar16 != 0;
                                                        uVar16 = uVar16 - 1) {
                                                      *pcVar20 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar21 * -2 + 1;
                                                      pcVar20 = pcVar20 + (uint)bVar21 * -2 + 1;
                                                    }
                                                    pcVar18 = local_118 + local_c4;
                                                    acStack_fad[local_c4 + 1] = '\0';
                                                    local_118 = pcVar18;
                                                    if (_DAT_01e56418 == 0) {
                                                      local_bc = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,acStack_fad + 1);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                                                            (0x01C03A10,acStack_fad + 1);
                                                  if (pcVar18 != (char *)0x0) goto LAB_005021b8;
                                                  }
                                                  }
                                                  if (*local_118 != ')') {
                                                    _sprintf(&DAT_01e56420,
                                                               "Missing closing ')' in holsterWeapon command");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  if (_DAT_01e56418 == 0) {
                                                    (*(((local_c0->base).base.vtable._ue)->_ue).
                                                      updateVictim)(local_c0,SUB14(local_bc == 0,0))
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"idle",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[4] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 4);
                                                  local_114 = (char *)this_ptr->next_cmd;
                                                  local_124 = 0;
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"if",2);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[2] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 2);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_004fe140
                                                            (&local_118,local_8f4);
                                                  if (pcVar18 != (char *)0x0) goto LAB_005021b8;
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_8f4), iVar6 == 0)) {
                                                    iVar6 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_00504c70
                                                            (this_ptr,this_ptr->next_cmd,0);
                                                  if (iVar6 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Can't skip next command after if statement on line %d",
                                                               local_11c);
                                                    return -1;
                                                  }
                                                  iVar11 = _strnicmp
                                                                     (this_ptr->parsed_lines[iVar6].
                                                                      text,"else",4);
                                                  if (iVar11 == 0) {
                                                    iVar6 = iVar6 + 1;
                                                  }
                                                  this_ptr->next_cmd = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "finishedAct",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xb);
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_118," ( )%n",&local_18);
                                                  uVar16 = _DAT_01e56418;
                                                  pCVar4 = g_CGame_PTR_005b9354;
                                                  if (local_18 < 2) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing finishedAct command");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_18;
                                                  if (_DAT_01e56418 == 0) {
                                                    this_ptr->script_pause_flag = 1;
                                                    local_124 = uVar16;
                                                    pCVar4->act_completion_state = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"letterbox",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[9] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 9);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_890,100);
                                                  if (pcVar18 != (char *)0x0) {
LAB_005021b8:
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  iVar11 = -1;
                                                  iVar6 = _stricmp
                                                                    (local_890,"false");
                                                  if (iVar6 == 0) {
                                                    iVar11 = 0;
                                                  }
                                                  iVar6 = _stricmp
                                                                    (local_890,"true");
                                                  if (iVar6 == 0) {
                                                    iVar11 = 1;
                                                  }
                                                  iVar6 = _stricmp
                                                                    (local_890,"bottom");
                                                  pCVar4 = g_CGame_PTR_005b9354;
                                                  if (iVar6 == 0) {
                                                    iVar11 = 2;
                                                  }
                                                  else if (iVar11 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Invalid letterBox mode: %s",
                                                               local_890);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    g_CGame_PTR_005b9354->letterbox_mode = iVar11;
                                                    pCVar4->allow_damage_flag = (uint)(iVar11 == 0);
                                                    pCVar4->allow_enemy_attack_flag =
                                                         (uint)(pCVar4->letterbox_mode == 0);
                                                    pCVar4->allow_hero_controls_flag =
                                                         pCVar4->letterbox_mode;
                                                    this_ptr->saved_cmd_index = -1;
                                                    pCVar5 = g_CDemonSet_PTR_005be368;
                                                    _DAT_01e56c24 = 1;
                                                    if ((pCVar4->goggles_active != 0) &&
                                                       (pCVar4->letterbox_mode != 0)) {
                                                      pCVar4->goggles_active = 0;
                                                      iVar6 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_00481920
                                                            (pCVar5);
                                                  core_setdir_cpp_CDemonSet_FUN_005125a0
                                                            (g_CDemonSet_PTR_005be368,
                                                             *(CDemonActor **)(0x01E56DA0 + 0xc),1
                                                            );
                                                  pCVar5 = g_CDemonSet_PTR_005be368;
                                                  *(uint *)(0x01E56DA0 + 0x10) = 0;
                                                  iVar11 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_00481920
                                                            (pCVar5);
                                                  if (iVar6 == iVar11) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                                                            (g_CDemonSet_PTR_005be368,iVar11);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xe);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_004fe140
                                                            (&local_118,local_2b4);
                                                  if (pcVar18 != (char *)0x0) goto LAB_005021b8;
                                                  if (_DAT_01e56418 == 0) {
                                                    iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_2b4);
                                                  this_ptr->focus_actor_locked = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"lookAt",6);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[6] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 6);
                                                  local_b4 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,)]%n",local_1394,
                                                             &local_b4);
                                                  if (local_b4 < 2) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing lookAt command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_b4;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1394);
                                                  pCVar14 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_1394,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if (pCVar14 == (CCharacter *)0x0) {
joined_r0x00500ad6:
                                                    if (_DAT_01e56c2c == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_004ff384;
                                                  }
                                                  pCVar15 = (CDemonActor *)0x0;
                                                  if (*local_118 == ',') {
                                                    local_b4 = -1;
                                                    sscanf
                                                              (local_118,", %[^)]%n",local_2fb4,
                                                               &local_b4);
                                                    if (local_b4 < 3) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Error parsing lookAt command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_118 = local_118 + local_b4;
                                                    core_script_cpp_trimString_FUN_004fe000
                                                              (local_2fb4);
                                                    pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                        (local_2fb4,
                                                                                                                                                  
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  &g_CDemonActorActorType_00763e48);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  }
                                                  if (*local_118 != ')') {
                                                    _sprintf(&DAT_01e56420,
                                                               "Missing closing ')' in lookAt command");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429f60
                                                            (pCVar14,pCVar15);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "movePlatform",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xc);
                                                  local_b0 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %f , %f )%n",local_177c,
                                                             &local_3f70,&local_3f7c,&local_b0);
                                                  if (local_b0 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing movePlatform command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_b0;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_177c);
                                                  pCVar9 = (CPlatform *)
                                                           core_script_cpp_getActor_FUN_004fe180
                                                                     (local_177c,
                                                                      g_CPlatformActorType_01e42894.
                                                                      name_hash,
                                                                      &g_CPlatformActorType_01e42894
                                                                     );
                                                  if (pCVar9 == (CPlatform *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if ((local_3f70 < 0.0) || (1.0 < local_3f70)) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  dVar1 = (double)local_3f7c;
                                                  if (dVar1 <= 0.0) {
                                                    pcVar18 = "Invalid movement rate %f";
                                                    goto LAB_004ff42f;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                                                            (pCVar9,local_3f70,local_3f7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"openDoor",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[8] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 8);
                                                  local_ac = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^)])%n",local_28ac,
                                                             local_3144,&local_ac);
                                                  if (local_ac < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing openDoor command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_ac;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_3144);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_28ac);
                                                  door_target = (CDoor *)
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_3144,
                                                             g_CDoorActorType_01af4e9c.name_hash,
                                                             &g_CDoorActorType_01af4e9c);
                                                  if ((door_target == (CDoor *)0x0) ||
                                                     (pCVar14 = (CCharacter *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_28ac,
                                                             g_CCharacterActorType_00765a60.
                                                             name_hash,
                                                             &g_CCharacterActorType_00765a60),
                                                  pCVar14 == (CCharacter *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = _DAT_01e56418;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      iVar6 = (*(((pCVar14->base).vtable._uc)->_uc).
                                                                hasDoorTarget)(pCVar14);
                                                      if (iVar6 != 0) {
                                                        local_120 = 1.4013e-45;
                                                      }
                                                    }
                                                    else {
                                                      (*(((pCVar14->base).vtable._uc)->_uc).
                                                        setDoorTarget)(pCVar14,door_target);
                                                      this_ptr->cmd_timer = 1.0;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "pressButton",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xb);
                                                  local_a4 = -1;
                                                  sscanf
                                                            (local_118,"( %[^,], %[^)])%n",local_250,
                                                             local_50c,&local_a4);
                                                  if (local_a4 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing pressButton() command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_a4;
                                                  core_script_cpp_trimString_FUN_004fe000(local_250)
                                                  ;
                                                  core_script_cpp_trimString_FUN_004fe000(local_50c)
                                                  ;
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_250,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  piVar10 = 
                                                  core_script_cpp_getActionState_FUN_004fe300
                                                            ((SPlayerActionState *)
                                                             &pCVar15[0x8f].platform_position_delta.
                                                              y,local_50c);
                                                  if (piVar10 == (int *)0x0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Invalid button name: %s",
                                                               local_50c);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (_DAT_01e56c24 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
                                                            (g_CGame_PTR_005b9354);
                                                  _DAT_01e56c24 = 0;
                                                  }
                                                  *piVar10 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"raise",5);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[5] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 5);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_1ec,100);
                                                  if (pcVar18 != (char *)0x0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing event expression on raise statament: %s",
                                                               pcVar18);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                                                            (0x01C03A10,local_1ec);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_0047dcd0
                                                            (0x01C03A10,local_1ec);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "releaseButton",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xd);
                                                  local_9c = -1;
                                                  sscanf
                                                            (local_118,"( %[^,], %[^)])%n",local_bb0,
                                                             local_c14,&local_9c);
                                                  if (local_9c < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing releaseButton() command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_9c;
                                                  core_script_cpp_trimString_FUN_004fe000(local_bb0)
                                                  ;
                                                  core_script_cpp_trimString_FUN_004fe000(local_c14)
                                                  ;
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_bb0,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  piVar10 = 
                                                  core_script_cpp_getActionState_FUN_004fe300
                                                            ((SPlayerActionState *)
                                                             &pCVar15[0x8f].platform_position_delta.
                                                              y,local_c14);
                                                  uVar16 = _DAT_01e56418;
                                                  if (piVar10 == (int *)0x0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Invalid button name: %s",
                                                               local_c14);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (_DAT_01e56c24 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
                                                            (g_CGame_PTR_005b9354);
                                                  _DAT_01e56c24 = uVar16;
                                                  }
                                                  *piVar10 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x1b] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0x1b);
                                                  local_98 = -1;
                                                  sscanf
                                                            (local_118," ( %[^)])%n",local_271c,
                                                             &local_98);
                                                  if (local_98 < 3) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing removeAllItemsFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_98;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_271c);
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_271c,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004bef10
                                                              ((CInventory *)
                                                               &pCVar15[0x17e].orient_matrix.m[0].y)
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x17] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0x17);
                                                  local_94 = -1;
                                                  sscanf
                                                            (local_118," ( %[^,], %[^)])%n",local_20dc,
                                                             local_2014,&local_94);
                                                  if (local_94 < 3) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_94;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_20dc);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_2014);
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_20dc,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (pCVar12 = 
                                                  core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                                                            ((CInventory *)
                                                             (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8
                                                                      ) + 0x1f5a0),local_2014),
                                                  pCVar12 != (CDemonActor *)0x0)) {
                                                    core_inv_cpp_CInventory_removeItem_FUN_004c07b0
                                                              ((CInventory *)
                                                               &pCVar15[0x17e].orient_matrix.m[0].y,
                                                               pCVar12,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"removeKeys"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 10);
                                                  local_8c = -1;
                                                  sscanf
                                                            (local_118," (%d )%n",&local_90,
                                                             &local_8c);
                                                  if (local_8c < 3) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_8c;
                                                  if (g_CNetGame_PTR_005bdee0->connection_type !=
                                                      CONNECTION_NONE) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_hero_cpp_CHero_removeMatchingKeys_FUN_004b5cb0
                                                            (*(CHero **)
                                                              (_DAT_01cae0e8 * 4 + 0x1cae0d8),
                                                             local_90);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"return",6);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[6] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 6);
                                                  if (_DAT_01e56418 == 0) {
                                                    iVar6 = this_ptr->call_stack_count;
                                                    if (iVar6 < 1) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Return without gosub detected on script line %d."
                                                                 ,local_11c);
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack_count = iVar6 + -1;
                                                    this_ptr->next_cmd =
                                                         this_ptr->call_stack[iVar6 + -1];
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "rollCredits",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xb);
                                                  local_88 = -1;
                                                  sscanf
                                                            (local_118," ( )%n",&local_88);
                                                  uVar16 = _DAT_01e56418;
                                                  pCVar4 = g_CGame_PTR_005b9354;
                                                  if (local_88 < 2) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_88;
                                                  if (_DAT_01e56418 == 0) {
                                                    this_ptr->script_pause_flag = 1;
                                                    local_124 = uVar16;
                                                    pCVar4->act_completion_state = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"say",3);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[3] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 3);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_3978,500);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00503106:
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_84 = -1;
                                                  sscanf
                                                            (local_3978,"%[^,], %[^,], %n",local_2eec,
                                                             local_12cc,&local_84);
                                                  if (local_84 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_2eec);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_12cc);
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    pcVar18 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (local_3978 + local_84);
                                                  local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_005049b0
                                                            (this_ptr,local_2eec,local_12cc,pcVar18)
                                                  ;
                                                  this_ptr->dialog_wav_time = local_14;
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    return -1;
                                                  }
                                                  }
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (local_124 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00504b70
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < (int)local_124)) {
                                                    core_script_cpp_CScript_setSpeaker_FUN_00504bf0
                                                              (this_ptr,this_ptr->who_is_speaking);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "selectWeapon",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xc);
                                                  local_80 = -1;
                                                  sscanf
                                                            (local_118," (%[^,], %[^)])%n",local_700,
                                                             local_69c,&local_80);
                                                  if (local_80 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing selectWeapon parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_004fe000(local_700)
                                                  ;
                                                  core_script_cpp_trimString_FUN_004fe000(local_69c)
                                                  ;
                                                  local_118 = local_118 + local_80;
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_700,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    inventory_ptr =
                                                         &pCVar15[0x17e].orient_matrix.m[0].y;
                                                    local_7c = _DAT_01e56418;
                                                    actor_ptr = 
                                                  core_gabriela_cpp_getSelectedWeapon_FUN_0049a160
                                                            ((CInventory *)inventory_ptr);
                                                  local_78 = actor_ptr;
                                                  if (actor_ptr != (CWeapon *)0x0) {
                                                    do {
                                                      if (actor_ptr == (CWeapon *)0x0) {
                                                        g_CurrentFilename =
                                                             "..\\core\\script.cpp";
                                                        g_CurrentLineNumber = 2777;
                                                        core_main_c_displayErrorAndQuit_FUN_004c8440
                                                                  (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0
                                                                    (&actor_ptr->base,local_69c);
                                                  if (iVar6 != 0) goto LAB_004ff36b;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
                                                            ((CInventory *)inventory_ptr,
                                                             (CDemonActor *)0x0,5,1);
                                                  actor_ptr = 
                                                  core_gabriela_cpp_getSelectedWeapon_FUN_0049a160
                                                            ((CInventory *)inventory_ptr);
                                                  } while (actor_ptr != local_78);
                                                  }
                                                  if (local_7c == 0) {
                                                    engine_console_cpp_CConsole_printf_FUN_0043ac60
                                                              (g_CConsole_PTR_005ad350,
                                                               "%s can't selectWeapon(%s)\n");
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setActorVariable",0x10);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0x10);
                                                  local_74 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^)])%n",local_258c,
                                                             local_24c4,&local_74);
                                                  if (local_74 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing setActorVariable command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_74;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_258c);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_24c4);
                                                  iVar6 = 
                                                  core_script_cpp_validateActorVariableName_FUN_004fdec0
                                                            (local_258c);
                                                  if (iVar6 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_24c4,
                                                                                                                                              
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  &g_CDemonActorActorType_00763e48);
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00480950
                                                            (0x01C03A10,local_258c,pCVar15);
                                                  }
                                                  else if ((pCVar15 == (CDemonActor *)0x0) &&
                                                          (_DAT_01e56c2c == 0)) {
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xf);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_37c,100);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00503106;
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0
                                                            (g_CSound_PTR_005bed68,local_37c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xe);
                                                  local_6c = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %d)%n",local_2b04,
                                                             &local_70,&local_6c);
                                                  if (local_6c < 3) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing setCameragroup parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_6c;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_2b04);
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                            (g_CDemonSet_PTR_005be368,local_2b04);
                                                  if (iVar6 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Camera \"%s\" does not exist.",
                                                               local_2b04);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    g_CDemonSet_PTR_005be368->cameras[iVar6].
                                                    camera_group = local_70;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0x12);
                                                  local_64 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %f)%n",local_23fc,
                                                             &local_68,&local_64);
                                                  if (local_64 < 3) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing setCharacterHealth parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_64;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_23fc);
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_23fc,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    *(float *)(pCVar15[0x1b].create_event + 0x4c) =
                                                         *(float *)(pCVar15[0x1b].create_event +
                                                                   0x50) * local_68;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setFocusActor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xd);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_9bc,100);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_9bc,
                                                                                                                                              
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  &g_CDemonActorActorType_00763e48);
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (pCVar15 != this_ptr->focus_actor) {
                                                    this_ptr->focus_actor_changed = 1;
                                                    this_ptr->focus_actor = pCVar15;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setHeroTask",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xb);
                                                  local_60 = -1;
                                                  sscanf
                                                            (local_118," (%[^,], %[^)])%n",local_638,
                                                             local_82c,&local_60);
                                                  if (local_60 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing setHeroTask parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_004fe000(local_638)
                                                  ;
                                                  core_script_cpp_trimString_FUN_004fe000(local_82c)
                                                  ;
                                                  local_118 = local_118 + local_60;
                                                  this_ptr_01 = (CHero *)
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_638,
                                                             g_CHeroActorType_01cae0ec.name_hash,
                                                             &g_CHeroActorType_01cae0ec);
                                                  if (this_ptr_01 == (CHero *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  iVar11 = _stricmp
                                                                     (local_82c,"stand");
                                                  iVar6 = 0;
                                                  if (iVar11 != 0) {
                                                    iVar6 = _stricmp
                                                                      (local_82c,"follow");
                                                    if (iVar6 == 0) {
                                                      iVar6 = 1;
                                                    }
                                                    else {
                                                      iVar6 = _stricmp
                                                                        (local_82c,"kill");
                                                      if (iVar6 == 0) {
                                                        iVar6 = 2;
                                                      }
                                                      else {
                                                        iVar6 = _stricmp
                                                                          (local_82c,
                                                                           "guard");
                                                        if (iVar6 == 0) {
                                                          iVar6 = 3;
                                                        }
                                                        else {
                                                          iVar6 = _stricmp
                                                                            (local_82c,
                                                                             "suspend");
                                                          if (iVar6 != 0) {
                                                            _sprintf(&DAT_01e56420,
                                                                       "Invalid Task: %s",
                                                                       local_82c);
                                                            return -1;
                                                          }
                                                          iVar6 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    core_hero_cpp_CHero_setAiTask_FUN_004b5cd0
                                                              (this_ptr_01,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[9] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 9);
                                                  local_54 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %d )%n",local_1074,
                                                             &local_58,&local_54);
                                                  if (local_54 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing setIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_54;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1074);
                                                  if (_DAT_01e56418 == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004bd860
                                                              (&local_3f6c,
                                                               "system\\nocturne.ini",
                                                               "Game");
                                                    engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
                                                              (&local_3f6c,local_1074,local_58);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0x12);
                                                  local_50 = -1;
                                                  sscanf
                                                            (local_118," (%n %n",&local_50,
                                                             &local_50);
                                                  if (local_50 < 1) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing setSayTimeOverride parameters.");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_50;
                                                  local_4c = -1.0;
                                                  if (*local_118 == ')') {
                                                    local_118 = local_118 + 1;
                                                  }
                                                  else {
                                                    local_50 = -1;
                                                    sscanf
                                                              (local_118,"%f )%n",&local_4c,
                                                               &local_50);
                                                    if (local_50 < 1) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    local_118 = local_118 + local_50;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    this_ptr->message_duration = local_4c;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_764,100);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00503b62:
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  iVar6 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                                                            (this_ptr,local_764);
                                                  if (iVar6 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Undefined label '%s'",
                                                               local_764);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    this_ptr->saved_cmd_index = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 10);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_a20,100);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00503b62;
                                                  if (local_a20[0] == '\0') {
                                                    this_ptr->who_is_speaking = (CDemonActor *)0x0;
                                                  }
                                                  else {
                                                    pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                        (local_a20,
                                                                                                                                                  
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  this_ptr->who_is_speaking = pCVar15;
                                                  if (pCVar15 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
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
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xd);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_318,100);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_3f74 = -1.0;
                                                  sscanf
                                                            (local_318,"%f",&local_3f74);
                                                  if (((double)local_3f74 <= 0.0) ||
                                                     (4 < (double)local_3f74)) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Invalid time factor %s",
                                                               local_318);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    g_CGame_PTR_005b9354->time_scale_factor =
                                                         local_3f74;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setVictim",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[9] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 9);
                                                  local_40 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,)]%n",local_1cf4,
                                                             &local_40);
                                                  if (local_40 < 2) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing setVictim command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_40;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1cf4);
                                                  this_ptr_02 = (CEnemy *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_1cf4,
                                                             g_CEnemyActorType_01bcdebc.name_hash,
                                                             &g_CEnemyActorType_01bcdebc);
                                                  if (this_ptr_02 == (CEnemy *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  pCVar15 = (CDemonActor *)0x0;
                                                  if (*local_118 == ',') {
                                                    local_40 = -1;
                                                    sscanf
                                                              (local_118,", %[^)]%n",local_1204,
                                                               &local_40);
                                                    if (local_40 < 3) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Error parsing setVictim command parms")
                                                      ;
                                                      return -1;
                                                    }
                                                    local_118 = local_118 + local_40;
                                                    core_script_cpp_trimString_FUN_004fe000
                                                              (local_1204);
                                                    iVar6 = _stricmp
                                                                      (local_1204,"disable"
                                                                      );
                                                    pCVar15 = 0xFFFFFFFF;
                                                    if ((iVar6 != 0) &&
                                                       (pCVar15 = 
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_1204,
                                                             g_CCharacterActorType_00765a60.
                                                             name_hash,
                                                             &g_CCharacterActorType_00765a60),
                                                  pCVar15 == (CDemonActor *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  }
                                                  if (*local_118 != ')') {
                                                    _sprintf(&DAT_01e56420,
                                                               "Missing closing ')' in setVictim command");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  if (_DAT_01e56418 == 0) {
                                                    core_enemy_cpp_CEnemy_setVictim_FUN_00479f50
                                                              (this_ptr_02,pCVar15);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"snapToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 10);
                                                  local_3c = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^)])%n",local_2c94,
                                                             local_1c2c,&local_3c);
                                                  if (local_3c < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error snaping turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_3c;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_2c94);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_1c2c);
                                                  pCVar15 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_2c94,
                                                                                                                                              
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  &g_CDemonActorActorType_00763e48);
                                                  if ((pCVar15 == (CDemonActor *)0x0) ||
                                                     (pCVar12 = 
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_1c2c,
                                                             g_CDemonActorActorType_00763e48.
                                                             name_hash,
                                                             &g_CDemonActorActorType_00763e48),
                                                  pCVar12 == (CDemonActor *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    core_bodypart_cpp_subtractVector_FUN_00417f90
                                                              (&(pCVar12->location).position,
                                                               &local_13c,
                                                               &(pCVar15->location).position);
                                                    pCVar13 = 
                                                  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                                            (&local_160,&local_13c);
                                                  (pCVar15->orient).vec.y = pCVar13->y;
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
                                                            (pCVar15);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"startSay",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[8] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 8);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_3b6c,500);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_38 = -1;
                                                  sscanf
                                                            (local_3b6c,"%[^,], %[^,], %n",local_15ec,
                                                             local_21a4,&local_38);
                                                  if (local_38 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_15ec);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_21a4);
                                                  pcVar18 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (local_3b6c + local_38);
                                                  local_14 = 
                                                  core_script_cpp_CScript_getDialogDuration_FUN_005049b0
                                                            (this_ptr,local_15ec,local_21a4,pcVar18)
                                                  ;
                                                  this_ptr->dialog_wav_time = local_14;
                                                  fVar7 = this_ptr->dialog_wav_time;
                                                  goto joined_r0x00504194;
                                                  }
                                                  iVar6 = _strnicmp
                                                                    (pcVar18,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_ee4,200);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  pcVar18 = local_ee4;
                                                  do {
                                                    pcVar20 = pcVar18;
                                                    if (*pcVar18 == ',') goto LAB_0050421a;
                                                    if (*pcVar18 == '\0') break;
                                                    pcVar20 = pcVar18 + 1;
                                                    if (*pcVar20 == ',') goto LAB_0050421a;
                                                    pcVar18 = pcVar18 + 2;
                                                  } while (*pcVar20 != '\0');
                                                  pcVar20 = (char *)0x0;
LAB_0050421a:
                                                  pcVar19 = ",";
                                                  local_b8 = (uint)(pcVar20 != (char *)0x0);
                                                  local_34 = -1;
                                                  iVar6 = -1;
                                                  pcVar18 = local_ee4;
                                                  do {
                                                    pcVar20 = pcVar18;
                                                    if (iVar6 == 0) break;
                                                    iVar6 = iVar6 + -1;
                                                    pcVar20 = pcVar18 + (uint)bVar21 * -2 + 1;
                                                    cVar2 = *pcVar18;
                                                    pcVar18 = pcVar20;
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
                                                            (local_ee4,"%[^,],%n",local_7c8,
                                                             &local_34);
                                                  if (local_34 < 1) {
                                                    pcVar18 = "Error parsing out camera name";
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_004fe000(local_7c8)
                                                  ;
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                            (g_CDemonSet_PTR_005be368,local_7c8);
                                                  if (iVar6 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Camera \"%s\" doesn't exist.",
                                                               local_7c8);
                                                    return -1;
                                                  }
                                                  local_3f78 = 1e+10;
                                                  if (local_b8 != 0) {
                                                    sscanf
                                                              (local_ee4 + local_34,"%f",
                                                               &local_3f78);
                                                    if (((double)local_3f78 < 0.0) ||
                                                       (99999 < (double)local_3f78)) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Invalid hold time value")
                                                      ;
                                                      return -1;
                                                    }
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0
                                                            (g_CDemonSet_PTR_005be368,iVar6,
                                                             local_3f78);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "timedDisplay",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_352c,300);
                                                  if (pcVar18 != (char *)0x0) {
LAB_005043d6:
                                                    pcVar20 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar18;
                                                      *pcVar20 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar2;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_30 = -1;
                                                  sscanf
                                                            (local_352c,"%f,%n",&local_2c,
                                                             &local_30);
                                                  if (local_30 < 2) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing time value");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    pcVar20 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (local_352c + local_30);
                                                  pcVar18 = this_ptr->current_message;
                                                  do {
                                                    cVar2 = *pcVar20;
                                                    *pcVar18 = cVar2;
                                                    if (cVar2 == '\0') break;
                                                    cVar2 = pcVar20[1];
                                                    pcVar20 = pcVar20 + 2;
                                                    pcVar18[1] = cVar2;
                                                    pcVar18 = pcVar18 + 2;
                                                  } while (cVar2 != '\0');
                                                  local_124 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00504b70
                                                            (this_ptr,local_2c,time_remaining);
                                                  if (0 < (int)local_124) {
                                                    this_ptr->current_message[0] = '\0';
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"turnToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 10);
                                                  local_cc = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^)])%n",local_320c,
                                                             local_2974,&local_cc);
                                                  if (local_cc < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_cc;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_320c);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_2974);
                                                  pCVar14 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_320c,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if ((pCVar14 == (CCharacter *)0x0) ||
                                                     (pCVar15 = 
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_2974,
                                                             g_CDemonActorActorType_00763e48.
                                                             name_hash,
                                                             &g_CDemonActorActorType_00763e48),
                                                  pCVar15 == (CDemonActor *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    (*(((pCVar14->base).vtable._uc)->_uc).
                                                      setWalkTargetImmediate)(pCVar14,pCVar15);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"wait",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[4] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 4);
                                                  local_28 = -1;
                                                  sscanf
                                                            (local_118,"(%f)%n",&local_24,
                                                             &local_28);
                                                  if (local_28 < 1) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing time value on wait statament");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_28;
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00504b70
                                                            (this_ptr,local_24,time_remaining);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"waitFor",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[7] + 1)] & 0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 7);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_004fe140
                                                            (&local_118,local_a84);
                                                  if (pcVar18 != (char *)0x0) goto LAB_005043d6;
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_a84), iVar6 == 0)) {
                                                    local_124 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"walkTo",6);
                                                    dVar1 = __BITCAST_DOUBLE(CONCAT44(pcVar18,local_11c));
                                                    if ((iVar6 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar18[6] + 1)] & 0xe0) != 0)) {
                                                      pcVar18 = "Unknown command on line %d: %s";
                                                      goto LAB_004ff42f;
                                                    }
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar18 + 6);
                                                  local_20 = -1;
                                                  sscanf
                                                            (local_118,"(%[^,], %[^,)] %n",local_2a3c,
                                                             local_113c,&local_20);
                                                  if (local_20 < 5) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing walkTo command parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_20;
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_2a3c);
                                                  core_script_cpp_trimString_FUN_004fe000
                                                            (local_113c);
                                                  local_120 = 0.0;
                                                  if (*local_118 == ',') {
                                                    local_20 = -1;
                                                    sscanf
                                                              (local_118,",%f %n",&local_120,
                                                               &local_20);
                                                    if (local_20 < 1) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_118 = local_118 + local_20;
                                                  }
                                                  local_1c = 1e+10;
                                                  if (*local_118 == ',') {
                                                    local_20 = -1;
                                                    sscanf
                                                              (local_118,",%f %n",&local_1c,
                                                               &local_20);
                                                    if (local_20 < 1) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_118 = local_118 + local_20;
                                                  }
                                                  if (*local_118 != ')') {
                                                    _sprintf(&DAT_01e56420,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  pCVar14 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_2a3c,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if ((pCVar14 == (CCharacter *)0x0) ||
                                                     (pCVar15 = 
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_113c,
                                                             g_CDemonActorActorType_00763e48.
                                                             name_hash,
                                                             &g_CDemonActorActorType_00763e48),
                                                  pCVar15 == (CDemonActor *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    (*(((pCVar14->base).vtable._uc)->_uc).
                                                      setWalkTarget)(pCVar14,pCVar15,local_120,
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
LAB_004ff36b:
  if ((_DAT_01e56418 != 2) && (*local_114 != '\0')) {
    _sprintf(&DAT_01e56420,"Extra characters \"%s\" on line %d",local_114,local_118);
    return -1;
  }
LAB_004ff384:
  if (local_120 == 1.4013e-45) {
    this_ptr->dialog_wav_time = -1.0;
    uVar16 = _DAT_01e56418;
    this_ptr->cmd_timer = -1.0;
    if ((uVar16 == 0) && (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
      _sprintf(&DAT_01e56420,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < (int)local_120) {
    this_ptr->next_cmd = (int)local_110;
    return (int)local_120;
  }
  return (int)local_120;
}
