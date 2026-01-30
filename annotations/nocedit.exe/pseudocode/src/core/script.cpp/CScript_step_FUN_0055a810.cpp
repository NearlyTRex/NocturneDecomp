// Name: core_script.cpp_CScript_step_FUN_0055a810
// Address: 0055a810
// Address Range: [[0055a810, 0055c9e6] [0055ca7e, 0055fef3]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_step_FUN_0055a810(CScript *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_script_cpp_CScript_step_FUN_0055a810(CScript *this_ptr,int param_2)

{
  double dVar1;
  char cVar2;
  CScript *pCVar3;
  CGame *pCVar4;
  CDemonSet *pCVar5;
  char *extraout_EAX;
  int iVar6;
  char *str;
  char *str_00;
  char *extraout_EAX_00;
  char *extraout_EAX_01;
  char *extraout_EAX_02;
  char *extraout_EAX_03;
  char *extraout_EAX_04;
  char *extraout_EAX_05;
  char *str_01;
  char *extraout_EAX_06;
  char *extraout_EAX_07;
  char *extraout_EAX_08;
  char *extraout_EAX_09;
  char *extraout_EAX_10;
  char *extraout_EAX_11;
  char *extraout_EAX_12;
  char *str_02;
  char *str_03;
  char *extraout_EAX_13;
  char *str_04;
  float fVar7;
  char *extraout_EAX_14;
  char *extraout_EAX_15;
  char *str_05;
  char *str_06;
  char *str_07;
  char *extraout_EAX_16;
  char *extraout_EAX_17;
  char *extraout_EAX_18;
  char *str_08;
  CMotionList *this_ptr_00;
  char *str_09;
  char *str_10;
  char *extraout_EAX_19;
  char *extraout_EAX_20;
  char *extraout_EAX_21;
  char *str_11;
  char *extraout_EAX_22;
  char *extraout_EAX_23;
  char *extraout_EAX_24;
  char *str_12;
  char *extraout_EAX_25;
  char *extraout_EAX_26;
  char *extraout_EAX_27;
  char *str_13;
  char *str_14;
  char *str_15;
  char *str_16;
  char *extraout_EAX_28;
  char *str_17;
  uint *puVar8;
  char *str_18;
  char *str_19;
  char *str_20;
  char *extraout_EAX_29;
  char *str_21;
  char *extraout_EAX_30;
  char *extraout_EAX_31;
  char *str_22;
  CDemonActor *pCVar9;
  char *str_23;
  char *extraout_EAX_32;
  char *str_24;
  char *str_25;
  char *extraout_EAX_33;
  char *str_26;
  char *str_27;
  char *str_28;
  char *extraout_EAX_34;
  char *extraout_EAX_35;
  char *extraout_EAX_36;
  char *str_29;
  char *str_30;
  CVector3f *pCVar10;
  char *extraout_EAX_37;
  char *extraout_EAX_38;
  char *extraout_EAX_39;
  char *extraout_EAX_40;
  char *extraout_EAX_41;
  char *str_31;
  char *str_32;
  char *extraout_EAX_42;
  char *extraout_EAX_43;
  char *str_33;
  CHero *pCVar11;
  CHero *pCVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  byte bVar19;
  float fVar20;
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
  uint local_124;
  int local_120;
  char *local_11c;
  C3DSLight *local_118;
  uint local_114;
  int local_110;
  int local_10c;
  int local_108;
  char *local_104;
  int local_fc;
  char *local_f8;
  char *local_f4;
  CHero *local_f0;
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
  float local_30;
  int local_2c;
  int local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  float local_14;
  
  bVar19 = 0;
  if ((this_ptr->next_cmd < 0) || (*(int *)(this_ptr->unk4 + 0x18) <= this_ptr->next_cmd)) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x46d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar15 = "(no error message provided)";
  pcVar18 = &DAT_0310eca0;
  do {
    cVar2 = *pcVar15;
    *pcVar18 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar15[1];
    pcVar15 = pcVar15 + 2;
    pcVar18[1] = cVar2;
    pcVar18 = pcVar18 + 2;
  } while (cVar2 != '\0');
  pcVar15 = *(char **)(*(int *)(this_ptr->unk4 + 0x1c) + 4 + this_ptr->next_cmd * 8);
  local_124 = *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + this_ptr->next_cmd * 8);
  local_110 = this_ptr->next_cmd;
  local_114 = 1;
  this_ptr->next_cmd = local_110 + 1;
  cVar2 = *pcVar15;
  if ((cVar2 == '{') || (cVar2 == '}')) {
    local_11c = &DAT_00641c5a;
  }
  else if (cVar2 == ':') {
    core_script_cpp_FUN_005593d0(pcVar15 + 1);
    dVar1 = (double)CONCAT44(local_124,extraout_EAX);
    if (DAT_0310ec9c != 0) {
      cVar2 = *extraout_EAX;
      for (pcVar15 = extraout_EAX;
          (cVar2 != '\0' &&
          (((g_CharacterClassificationTable[(byte)(*pcVar15 + 1)] & 0xe0U) != 0 || (*pcVar15 == '_')
           ))); pcVar15 = pcVar15 + 1) {
        cVar2 = pcVar15[1];
      }
      local_11c = extraout_EAX;
      if (*pcVar15 != '\0') {
        pcVar15 = "Invalid label \"%s\" on line";
        goto LAB_0055a97f;
      }
      iVar6 = core_script_cpp_CScript_FUN_00560160(this_ptr,extraout_EAX);
      if (iVar6 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x49f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Internal script error checking for duplicate label.");
      }
      if (iVar6 != local_110) {
        sprintf
                  (&DAT_0310eca0,"Duplicate label %s on lines %d and %d",local_11c,local_124,
                   *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + iVar6 * 8));
        return -1;
      }
    }
    local_11c = &DAT_00641ce3;
  }
  else {
    iVar6 = strnicmp(pcVar15,"syntaxCheckOn",0xd);
    if ((iVar6 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)) {
      if (DAT_0310ec9c != 0) {
        DAT_0310ec9c = 1;
      }
      local_11c = &DAT_00641cf2;
    }
    else {
      iVar6 = strnicmp(pcVar15,"syntaxCheckOff",0xe);
      if ((iVar6 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar15[0xe] + 1)] & 0xe0U) == 0))
      {
        if (DAT_0310ec9c != 0) {
          DAT_0310ec9c = 2;
        }
        local_11c = &DAT_00641d02;
      }
      else if (DAT_0310ec9c != 2) {
        iVar6 = strnicmp(pcVar15,"advanceLightFilter",0x12);
        if (((((((((iVar6 == 0) &&
                  ((g_CharacterClassificationTable[(byte)(pcVar15[0x12] + 1)] & 0xe0U) == 0)) ||
                 ((iVar6 = strnicmp
                                     (pcVar15,"createExplosion",0xf), iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar15[0xf] + 1)] & 0xe0U) == 0)))) ||
                ((iVar6 = strnicmp(pcVar15,"deleteActor",0xb),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar15[0xb] + 1)] & 0xe0U) == 0)))) ||
               ((iVar6 = strnicmp(pcVar15,"displayBitmap",0xd),
                iVar6 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)))) ||
              (((((iVar6 = strnicmp(pcVar15,"hurtCharacter",0xd),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)) ||
                 ((iVar6 = strnicmp(pcVar15,"incCounter",10),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar15[10] + 1)] & 0xe0U) == 0)))) ||
                ((iVar6 = strnicmp(pcVar15,"fadeSfx",7),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar15[7] + 1)] & 0xe0U) == 0)))) ||
               ((iVar6 = strnicmp
                                   (pcVar15,"fadeAmbientSound",0x10), iVar6 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar15[0x10] + 1)] & 0xe0U) == 0)))))) ||
             ((((iVar6 = strnicmp(pcVar15,"flagOn",6), iVar6 == 0
                && ((g_CharacterClassificationTable[(byte)(pcVar15[6] + 1)] & 0xe0U) == 0)) ||
               ((iVar6 = strnicmp(pcVar15,"flagOff",7),
                iVar6 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar15[7] + 1)] & 0xe0U) == 0)))) ||
              ((((iVar6 = strnicmp(pcVar15,"gameFlagOn",10),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar15[10] + 1)] & 0xe0U) == 0)) ||
                ((iVar6 = strnicmp(pcVar15,"gameFlagOff",0xb),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar15[0xb] + 1)] & 0xe0U) == 0)))) ||
               ((((iVar6 = strnicmp(pcVar15,"killCharacter",0xd),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)) ||
                 ((iVar6 = strnicmp(pcVar15,"killHero",8),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar15[8] + 1)] & 0xe0U) == 0)))) ||
                ((iVar6 = strnicmp(pcVar15,"killSfx",7),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar15[7] + 1)] & 0xe0U) == 0)))))))))) ||
            ((iVar6 = strnicmp(pcVar15,"lightning",9), iVar6 == 0
             && ((g_CharacterClassificationTable[(byte)(pcVar15[9] + 1)] & 0xe0U) == 0)))) ||
           ((((iVar6 = strnicmp(pcVar15,"playSfx",7), iVar6 == 0
              && ((g_CharacterClassificationTable[(byte)(pcVar15[7] + 1)] & 0xe0U) == 0)) ||
             ((iVar6 = strnicmp(pcVar15,"setCameraAmbient",0x10),
              iVar6 == 0 &&
              ((g_CharacterClassificationTable[(byte)(pcVar15[0x10] + 1)] & 0xe0U) == 0)))) ||
            ((((iVar6 = strnicmp(pcVar15,"setCounter",10),
               iVar6 == 0 &&
               ((g_CharacterClassificationTable[(byte)(pcVar15[10] + 1)] & 0xe0U) == 0)) ||
              (((iVar6 = strnicmp(pcVar15,"setGroupAmbient",0xf),
                iVar6 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar15[0xf] + 1)] & 0xe0U) == 0)) ||
               ((((iVar6 = strnicmp
                                     (pcVar15,"setLightFilterFrame",0x13), iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar15[0x13] + 1)] & 0xe0U) == 0)) ||
                 ((iVar6 = strnicmp(pcVar15,"setLeverState",0xd),
                  iVar6 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)))) ||
                ((iVar6 = strnicmp(pcVar15,"setModelState",0xd),
                 iVar6 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)))))))) ||
             (((iVar6 = strnicmp(pcVar15,"setTimer",8),
               iVar6 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar15[8] + 1)] & 0xe0U) == 0)
               ) || (((((iVar6 = strnicmp
                                           (pcVar15,"setWeather",10), iVar6 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar15[10] + 1)] & 0xe0U) == 0)) ||
                       ((iVar6 = strnicmp
                                           (pcVar15,"shakeScreen",0xb), iVar6 == 0 &&
                        ((g_CharacterClassificationTable[(byte)(pcVar15[0xb] + 1)] & 0xe0U) == 0))))
                      || ((iVar6 = strnicmp
                                             (pcVar15,"slamModelToMotion",0x11), iVar6 == 0
                          && ((g_CharacterClassificationTable[(byte)(pcVar15[0x11] + 1)] & 0xe0U) ==
                              0)))) ||
                     ((iVar6 = strnicmp(pcVar15,"warpTo",6),
                      iVar6 == 0 &&
                      ((g_CharacterClassificationTable[(byte)(pcVar15[6] + 1)] & 0xe0U) == 0))))))))
            )))) {
          if (DAT_0310ec9c == 0) {
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          }
          else {
            pcVar15 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
            if (pcVar15 != (char *)0x0) goto LAB_0055bb9d;
          }
          local_11c = &DAT_00641e5e;
        }
        else {
          iVar6 = strnicmp(pcVar15,"addItemToInventory",0x12);
          if ((iVar6 == 0) &&
             ((g_CharacterClassificationTable[(byte)(pcVar15[0x12] + 1)] & 0xe0U) == 0)) {
            core_script_cpp_FUN_005593d0(pcVar15 + 0x12);
            local_e8 = -1;
            local_11c = str;
            sscanf(str," ( %[^,], %[^)])%n",local_ee4,local_27e4,&local_e8);
            if (local_e8 < 3) {
              sprintf(&DAT_0310eca0,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_11c = local_11c + local_e8;
            core_script_cpp_FUN_00559360(local_ee4);
            core_script_cpp_FUN_00559360(local_27e4);
            pCVar11 = core_script_cpp_GetDemonActor_FUN_005594e0
                                (local_ee4,g_CHeroClassInfo.name_hash,0x2db87d4);
            if ((pCVar11 == (CHero *)0x0) ||
               (pCVar12 = core_script_cpp_GetDemonActor_FUN_005594e0
                                    (local_27e4,g_CDemonActorClassInfo.name_hash,0x821ff8),
               pCVar12 == (CHero *)0x0)) goto joined_r0x0055c026;
            if (DAT_0310ec9c == 0) {
              core_inv_cpp_CInventory_addItem_FUN_004fd600
                        (&pCVar11->inventory,(CDemonActor *)pCVar12,0);
            }
          }
          else {
            iVar6 = strnicmp(pcVar15,"addLightFilter",0xe);
            if ((iVar6 == 0) &&
               ((g_CharacterClassificationTable[(byte)(pcVar15[0xe] + 1)] & 0xe0U) == 0)) {
              core_script_cpp_FUN_005593d0(pcVar15 + 0xe);
              local_e0 = -1;
              local_11c = str_00;
              sscanf
                        (str_00,"( %[^,], %[^,], %f )%n",local_5d4,local_250,&local_a4,&local_e0);
              if (local_e0 < 5) {
                sprintf(&DAT_0310eca0,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_11c = local_11c + local_e0;
              core_set_cpp_CDemonSet_FUN_00570f10(g_CDemonSetPtr);
              if (local_118 == (C3DSLight *)0x0) {
                sprintf
                          (&DAT_0310eca0,"Light \"%s\" does not exist",local_5d4);
                return -1;
              }
              iVar6 = engine_dosio_c_getFileSize_FUN_00481880("art",local_250);
              if (iVar6 < 1) {
                sprintf
                          (&DAT_0310eca0,"Can't open filter \"%s\"",local_250);
                return -1;
              }
              if (DAT_0310ec9c == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(local_118,local_250,local_a4,0);
              }
            }
            else {
              iVar6 = strnicmp(pcVar15,"allowEnemyAttack",0x10);
              if ((iVar6 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(pcVar15[0x10] + 1)] & 0xe0U) == 0)) {
                core_script_cpp_FUN_005593d0(pcVar15 + 0x10);
                local_11c = extraout_EAX_00;
                core_script_cpp_FUN_005594a0((int)&local_11c,(int)local_958);
                pcVar15 = extraout_EAX_01;
                if (extraout_EAX_01 != (char *)0x0) {
LAB_0055bb9d:
                  pcVar18 = &DAT_0310eca0;
                  do {
                    cVar2 = *pcVar15;
                    *pcVar18 = cVar2;
                    if (cVar2 == '\0') {
                      return -1;
                    }
                    cVar2 = pcVar15[1];
                    pcVar15 = pcVar15 + 2;
                    pcVar18[1] = cVar2;
                    pcVar18 = pcVar18 + 2;
                  } while (cVar2 != '\0');
                  return -1;
                }
                if (DAT_0310ec9c == 0) {
                  iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                    (g_CEventListPtr,local_958);
                  g_CGamePtr->allow_enemy_attack_flag = iVar6;
                }
              }
              else {
                iVar6 = strnicmp
                                  (pcVar15,"allowHeroControls",0x11);
                if ((iVar6 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(pcVar15[0x11] + 1)] & 0xe0U) == 0)) {
                  core_script_cpp_FUN_005593d0(pcVar15 + 0x11);
                  local_11c = extraout_EAX_02;
                  core_script_cpp_FUN_005594a0((int)&local_11c,(int)local_bb0);
                  pcVar15 = extraout_EAX_03;
                  if (extraout_EAX_03 != (char *)0x0) goto LAB_0055bb9d;
                  if (DAT_0310ec9c == 0) {
                    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                      (g_CEventListPtr,local_bb0);
                    DAT_0310f4a4 = (uint)(iVar6 == 0);
                    g_CGamePtr->allow_hero_controls_flag = DAT_0310f4a4;
                  }
                }
                else {
                  iVar6 = strnicmp(pcVar15,"allowHeroDamage",0xf)
                  ;
                  if ((iVar6 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(pcVar15[0xf] + 1)] & 0xe0U) == 0)) {
                    core_script_cpp_FUN_005593d0(pcVar15 + 0xf);
                    local_11c = extraout_EAX_04;
                    core_script_cpp_FUN_005594a0((int)&local_11c,(int)local_a84);
                    pcVar15 = extraout_EAX_05;
                    if (extraout_EAX_05 != (char *)0x0) goto LAB_0055bb9d;
                    if (DAT_0310ec9c == 0) {
                      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                        (g_CEventListPtr,local_a84);
                      g_CGamePtr->allow_damage_flag = iVar6;
                    }
                  }
                  else {
                    iVar6 = strnicmp
                                      (pcVar15,"attachActorToPlatform",0x15);
                    if ((iVar6 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(pcVar15[0x15] + 1)] & 0xe0U) == 0)) {
                      core_script_cpp_FUN_005593d0(pcVar15 + 0x15);
                      local_10c = -1;
                      local_11c = str_01;
                      sscanf
                                (str_01,"(%[^,], %[^)])%n",local_190c,local_1a9c,&local_10c);
                      if (local_10c < 2) {
                        sprintf
                                  (&DAT_0310eca0,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_11c = local_11c + local_10c;
                      core_script_cpp_FUN_00559360(local_190c);
                      core_script_cpp_FUN_00559360(local_1a9c);
                      pCVar11 = core_script_cpp_GetDemonActor_FUN_005594e0
                                          (local_1a9c,g_CPlatformClassInfo.name_hash,0x30d5054);
                      if ((pCVar11 == (CHero *)0x0) ||
                         (pCVar11 = core_script_cpp_GetDemonActor_FUN_005594e0
                                              (local_190c,g_CDemonActorClassInfo.name_hash,0x821ff8)
                         , pCVar11 == (CHero *)0x0)) goto joined_r0x0055c026;
                      if (DAT_0310ec9c == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0();
                      }
                    }
                    else {
                      iVar6 = strnicmp(pcVar15,"beginFadeIn",0xb)
                      ;
                      if ((iVar6 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(pcVar15[0xb] + 1)] & 0xe0U) == 0))
                      {
                        core_script_cpp_FUN_005593d0(pcVar15 + 0xb);
                        local_11c = extraout_EAX_06;
                        if (DAT_0310ec9c == 0) {
                          core_game_cpp_CGame_beginFadeIn_FUN_004e0920(g_CGamePtr);
                        }
                      }
                      else {
                        iVar6 = strnicmp
                                          (pcVar15,"beginFadeOut",0xc);
                        if ((iVar6 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(pcVar15[0xc] + 1)] & 0xe0U) == 0)
                           ) {
                          core_script_cpp_FUN_005593d0(pcVar15 + 0xc);
                          local_11c = extraout_EAX_07;
                          if (DAT_0310ec9c == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004e0960(g_CGamePtr);
                          }
                        }
                        else {
                          iVar6 = strnicmp
                                            (pcVar15,"breakPoint",10);
                          if ((iVar6 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(pcVar15[10] + 1)] & 0xe0U) == 0
                             )) {
                            core_script_cpp_FUN_005593d0(pcVar15 + 10);
                            local_11c = extraout_EAX_08;
                            if (DAT_0310ec9c == 0) {
                              sprintf
                                        (local_890,"Script breakpoint reached at line %d",local_124);
                              core_game_cpp_CGame_displayMessage_FUN_004d7f20
                                        (g_CGamePtr,local_890,5.0);
                              this_ptr->unk4[0] = '\x02';
                              this_ptr->unk4[1] = '\0';
                              this_ptr->unk4[2] = '\0';
                              this_ptr->unk4[3] = '\0';
                            }
                          }
                          else {
                            iVar6 = strnicmp
                                              (pcVar15,"cancelCameraHold",0x10);
                            if ((iVar6 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(pcVar15[0x10] + 1)] & 0xe0U)
                                == 0)) {
                              core_script_cpp_FUN_005593d0(pcVar15 + 0x10);
                              local_11c = extraout_EAX_09;
                              if (DAT_0310ec9c == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
                                          (g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar6 = strnicmp
                                                (pcVar15,"cancelWalkTo",0xc);
                              if ((iVar6 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(pcVar15[0xc] + 1)] & 0xe0U)
                                  == 0)) {
                                core_script_cpp_FUN_005593d0(pcVar15 + 0xc);
                                local_11c = extraout_EAX_10;
                                pcVar15 = core_script_cpp_FUN_005593f0
                                                    ((int *)&local_11c,local_2334,200);
                                if (pcVar15 != (char *)0x0) {
                                  pcVar18 = &DAT_0310eca0;
                                  do {
                                    cVar2 = *pcVar15;
                                    *pcVar18 = cVar2;
                                    if (cVar2 == '\0') {
                                      return -1;
                                    }
                                    cVar2 = pcVar15[1];
                                    pcVar15 = pcVar15 + 2;
                                    pcVar18[1] = cVar2;
                                    pcVar18 = pcVar18 + 2;
                                  } while (cVar2 != '\0');
                                  return -1;
                                }
                                iVar6 = stricmp(local_2334,"all")
                                ;
                                if (iVar6 == 0) {
                                  if (DAT_0310ec9c == 0) {
                                    iVar16 = 0;
                                    for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr;
                                        iVar6 = iVar6 + 1) {
                                      pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790
                                                         (*(CDemonActor **)
                                                           (g_CDemonSetPtr->actor_list_data + iVar16
                                                           ),g_CCharacterClassInfo.name_hash);
                                      if (pCVar9 != (CDemonActor *)0x0) {
                                        (*(((pCVar9->vtable)._uc)->_uc).cfunc23)();
                                      }
                                      iVar16 = iVar16 + 4;
                                    }
                                  }
                                }
                                else {
                                  pCVar11 = core_script_cpp_GetDemonActor_FUN_005594e0
                                                      (local_2334,g_CCharacterClassInfo.name_hash,
                                                       0x823c14);
                                  if (pCVar11 == (CHero *)0x0) goto joined_r0x0055c026;
                                  if (DAT_0310ec9c == 0) {
                                    (*(((pCVar11->base).base.vtable._uc)->_uc).cfunc23)();
                                  }
                                }
                              }
                              else {
                                iVar6 = strnicmp
                                                  (pcVar15,"chainToMission",0xe);
                                if ((iVar6 == 0) &&
                                   ((g_CharacterClassificationTable[(byte)(pcVar15[0xe] + 1)] &
                                    0xe0U) == 0)) {
                                  core_script_cpp_FUN_005593d0(pcVar15 + 0xe);
                                  local_11c = extraout_EAX_11;
                                  pcVar15 = core_script_cpp_FUN_005593f0
                                                      ((int *)&local_11c,local_2e24,200);
                                  if (pcVar15 != (char *)0x0) {
                                    pcVar18 = &DAT_0310eca0;
                                    do {
                                      cVar2 = *pcVar15;
                                      *pcVar18 = cVar2;
                                      if (cVar2 == '\0') {
                                        return -1;
                                      }
                                      cVar2 = pcVar15[1];
                                      pcVar15 = pcVar15 + 2;
                                      pcVar18[1] = cVar2;
                                      pcVar18 = pcVar18 + 2;
                                    } while (cVar2 != '\0');
                                    return -1;
                                  }
                                  core_script_cpp_FUN_00559360(local_2e24);
                                  uVar13 = DAT_0310ec9c;
                                  if (DAT_0310ec9c == 0) {
                                    core_mission_cpp_CDemonMission_FUN_00524630(g_CDemonMissionPtr);
                                    this_ptr->unk1[0] = '\x01';
                                    this_ptr->unk1[1] = '\0';
                                    this_ptr->unk1[2] = '\0';
                                    this_ptr->unk1[3] = '\0';
                                    local_114 = uVar13;
                                  }
                                }
                                else {
                                  iVar6 = strnicmp
                                                    (pcVar15,"clearActorVariable",0x12);
                                  if ((iVar6 == 0) &&
                                     ((g_CharacterClassificationTable[(byte)(pcVar15[0x12] + 1)] &
                                      0xe0U) == 0)) {
                                    core_script_cpp_FUN_005593d0(pcVar15 + 0x12);
                                    local_11c = extraout_EAX_12;
                                    pcVar15 = core_script_cpp_FUN_005593f0
                                                        ((int *)&local_11c,local_3784,300);
                                    if (pcVar15 != (char *)0x0) {
LAB_0055c37e:
                                      pcVar18 = &DAT_0310eca0;
                                      do {
                                        cVar2 = *pcVar15;
                                        *pcVar18 = cVar2;
                                        if (cVar2 == '\0') {
                                          return -1;
                                        }
                                        cVar2 = pcVar15[1];
                                        pcVar15 = pcVar15 + 2;
                                        pcVar18[1] = cVar2;
                                        pcVar18 = pcVar18 + 2;
                                      } while (cVar2 != '\0');
                                      return -1;
                                    }
                                    iVar6 = core_script_cpp_FUN_00559220(local_3784);
                                    if (iVar6 == 0) {
                                      return -1;
                                    }
                                    if (DAT_0310ec9c == 0) {
                                      core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                (g_CEventListPtr);
                                    }
                                  }
                                  else {
                                    iVar6 = strnicmp
                                                      (pcVar15,"dbSay",5);
                                    if ((iVar6 == 0) &&
                                       ((g_CharacterClassificationTable[(byte)(pcVar15[5] + 1)] &
                                        0xe0U) == 0)) {
                                      core_script_cpp_FUN_005593d0(pcVar15 + 5);
                                      local_108 = -1;
                                      local_11c = str_02;
                                      sscanf
                                                (str_02,"(%[^)])%n",local_c14,&local_108);
                                      if (local_108 < 3) {
                                        sprintf
                                                  (&DAT_0310eca0,"Error parsing dbSay arguments"
                                                  );
                                        return -1;
                                      }
                                      core_script_cpp_FUN_00559360(local_c14);
                                      local_11c = local_11c + local_108;
                                      iVar6 = core_script_cpp_CScript_FUN_005606e0
                                                        (this_ptr,local_c14);
                                      if (iVar6 < 0) {
                                        local_104 = local_226c;
                                        local_e4 = "$";
                                        sprintf
                                                  (local_226c,"[Can't find %s in database]",
                                                   local_c14);
                                        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                                  (&DAT_0310f4b0.base,local_226c);
                                      }
                                      else {
                                        iVar6 = iVar6 * 0x226 + *(int *)(this_ptr->unk4 + 8);
                                        local_e4 = (char *)(iVar6 + 0x78);
                                        local_104 = (char *)(iVar6 + 0x96);
                                        pcVar18 = local_c14;
                                        pcVar15 = (char *)(iVar6 + 0x3c);
                                        do {
                                          cVar2 = *pcVar15;
                                          *pcVar18 = cVar2;
                                          if (cVar2 == '\0') break;
                                          cVar2 = pcVar15[1];
                                          pcVar15 = pcVar15 + 2;
                                          pcVar18[1] = cVar2;
                                          pcVar18 = pcVar18 + 2;
                                        } while (cVar2 != '\0');
                                      }
                                      if (this_ptr->dialog_wav_time < 0.0) {
                                        local_14 = core_script_cpp_CScript_FUN_0055ff00
                                                             (this_ptr,(int)local_e4,local_c14,
                                                              local_104);
                                        this_ptr->dialog_wav_time = local_14;
                                        if (this_ptr->dialog_wav_time < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((DAT_0310ec9c == 0) &&
                                         (local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             (float *)param_2), 0 < (int)local_114))
                                      {
                                        core_script_cpp_CScript_FUN_00560140
                                                  (this_ptr,this_ptr->who_is_speaking);
                                      }
                                    }
                                    else {
                                      iVar6 = strnicmp
                                                        (pcVar15,"dbStartSay",10);
                                      if ((iVar6 == 0) &&
                                         ((g_CharacterClassificationTable[(byte)(pcVar15[10] + 1)] &
                                          0xe0U) == 0)) {
                                        core_script_cpp_FUN_005593d0(pcVar15 + 10);
                                        local_fc = -1;
                                        local_11c = str_03;
                                        sscanf
                                                  (str_03,"(%[^)])%n",local_1ec,&local_fc);
                                        if (local_fc < 3) {
                                          sprintf
                                                    (&DAT_0310eca0,
                                                     "Error parsing dbSay arguments");
                                          return -1;
                                        }
                                        core_script_cpp_FUN_00559360(local_1ec);
                                        local_11c = local_11c + local_fc;
                                        iVar6 = core_script_cpp_CScript_FUN_005606e0
                                                          (this_ptr,local_1ec);
                                        if (iVar6 < 0) {
                                          local_f4 = local_2654;
                                          local_f8 = "$";
                                          sprintf
                                                    (local_2654,"[Can't find %s in database]",
                                                     local_1ec);
                                          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                                    (&DAT_0310f4b0.base,local_2654);
                                        }
                                        else {
                                          iVar6 = iVar6 * 0x226 + *(int *)(this_ptr->unk4 + 8);
                                          local_f8 = (char *)(iVar6 + 0x78);
                                          local_f4 = (char *)(iVar6 + 0x96);
                                          pcVar18 = local_1ec;
                                          pcVar15 = (char *)(iVar6 + 0x3c);
                                          do {
                                            cVar2 = *pcVar15;
                                            *pcVar18 = cVar2;
                                            if (cVar2 == '\0') break;
                                            cVar2 = pcVar15[1];
                                            pcVar15 = pcVar15 + 2;
                                            pcVar18[1] = cVar2;
                                            pcVar18 = pcVar18 + 2;
                                          } while (cVar2 != '\0');
                                        }
                                        local_14 = core_script_cpp_CScript_FUN_0055ff00
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
                                                          (pcVar15,"debug",5);
                                        if ((iVar6 == 0) &&
                                           ((g_CharacterClassificationTable[(byte)(pcVar15[5] + 1)]
                                            & 0xe0U) == 0)) {
                                          core_script_cpp_FUN_005593d0(pcVar15 + 5);
                                          local_11c = extraout_EAX_13;
                                          pcVar15 = core_script_cpp_FUN_005593f0
                                                              ((int *)&local_11c,local_3658,300);
                                          if (pcVar15 != (char *)0x0) goto LAB_0055c37e;
                                          if (DAT_0310ec9c == 0) {
                                            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                                                      (g_CEditorToolsPtr,
                                                       "Script debug message at line %d:\n%s",local_124
                                                       ,local_3658);
                                          }
                                        }
                                        else {
                                          iVar6 = strnicmp
                                                            (pcVar15,"dismember",9);
                                          if ((iVar6 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(pcVar15[9] + 1)] & 0xe0U) == 0)) {
                                            core_script_cpp_FUN_005593d0(pcVar15 + 9);
                                            local_60 = -1;
                                            local_11c = str_04;
                                            sscanf
                                                      (str_04,"(%[^,], %[^,)]%n",local_3144,local_1844,
                                                       &local_60);
                                            if (local_60 < 5) {
                                              sprintf
                                                        (&DAT_0310eca0,
                                                         "Error parsing dismember command parms");
                                              return -1;
                                            }
                                            local_11c = local_11c + local_60;
                                            core_script_cpp_FUN_00559360(local_3144);
                                            core_script_cpp_FUN_00559360(local_1844);
                                            local_f0 = core_script_cpp_GetDemonActor_FUN_005594e0
                                                                 (local_3144,
                                                                  g_CCharacterClassInfo.name_hash,
                                                                  0x823c14);
                                            if (local_f0 == (CHero *)0x0) goto joined_r0x0055c026;
                                            iVar6 = core_script_cpp_FUN_00559730
                                                              ((int)local_f0,local_1844,local_c8c);
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
                                                sprintf
                                                          (&DAT_0310eca0,
                                                           "Error parsing dismember command parms");
                                                return -1;
                                              }
                                              local_11c = local_11c + local_60;
                                              if (0.0 < local_3f80) {
                                                local_3f80 = local_3f80 * (float)3.1415926535000001 *
                                                             (float)0.0055555555555555497;
                                                fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                                                  (-local_3f80,local_3f80);
                                                fVar20 = 0.0;
                                                local_14 = fVar7;
                                                local_14 = 
                                                  core_actor_cpp_getRandomFloat_FUN_0040cc10
                                                            (-local_3f80,local_3f80);
                                                pCVar10 = core_script_cpp_FUN_00567d00
                                                                    (&local_130,local_14,fVar20,
                                                                     fVar7);
                                                core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                                                          (&local_188,pCVar10);
                                                pCVar10 = 
                                                  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                                            (&local_188,&local_13c,&local_154);
                                                core_actor_cpp_copyVector_FUN_00410360
                                                          (&local_154,pCVar10);
                                              }
                                            }
                                            if (*local_11c != ')') {
                                              sprintf
                                                        (&DAT_0310eca0,
                                                         "Error parsing dismember command parms near '%s'",
                                                         local_11c);
                                              return -1;
                                            }
                                            local_11c = local_11c + 1;
                                            if (DAT_0310ec9c == 0) {
                                              local_ec = 
                                                  core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
                                              iVar16 = 0;
                                              iVar6 = 0;
                                              do {
                                                if (*(int *)((int)local_c8c + iVar16) != 0) {
                                                  core_charactr_cpp_CCharacter_FUN_0042bd30
                                                            (&local_f0->base);
                                                }
                                                iVar6 = iVar6 + 1;
                                                iVar16 = iVar16 + 4;
                                              } while (iVar6 < 0x1e);
                                              core_bodypart_cpp_FUN_0041a050();
                                            }
                                          }
                                          else {
                                            iVar6 = strnicmp
                                                              (pcVar15,"display",7);
                                            if ((iVar6 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(pcVar15[7] + 1)] & 0xe0U) == 0)) {
                                              core_script_cpp_FUN_005593d0(pcVar15 + 7);
                                              local_11c = extraout_EAX_14;
                                              pcVar15 = core_script_cpp_FUN_005593f0
                                                                  ((int *)&local_11c,
                                                                   &this_ptr->current_message,0x400)
                                              ;
                                              if (pcVar15 != (char *)0x0) {
                                                sprintf
                                                          (&DAT_0310eca0,
                                                           "Error parsing message text on display statament: %s",
                                                           pcVar15);
                                                return -1;
                                              }
                                            }
                                            else {
                                              iVar6 = strnicmp
                                                                (pcVar15,"else",4);
                                              if ((iVar6 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(pcVar15[4] + 1)] & 0xe0U) == 0)) {
                                                core_script_cpp_FUN_005593d0(pcVar15 + 4);
                                                local_11c = extraout_EAX_15;
                                                iVar6 = core_script_cpp_CScript_FUN_005601c0
                                                                  (this_ptr,this_ptr->next_cmd,1);
                                                if (iVar6 < 0) {
                                                  sprintf
                                                            (&DAT_0310eca0,
                                                             "Can't skip next command after else statement on line %d",
                                                             local_124);
                                                  return -1;
                                                }
                                                this_ptr->next_cmd = iVar6;
                                              }
                                              else {
                                                iVar6 = strnicmp
                                                                  (pcVar15,"enableCamera",
                                                                   0xc);
                                                if ((iVar6 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(pcVar15[0xc] + 1)] & 0xe0U) == 0)) {
                                                  core_script_cpp_FUN_005593d0(pcVar15 + 0xc);
                                                  local_4c = -1;
                                                  local_11c = str_05;
                                                  sscanf
                                                            (str_05,"(%[^,], %[^)])%n",local_307c,
                                                             local_2d5c,&local_4c);
                                                  if (local_4c < 3) {
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Error parsing enableCamera parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + local_4c;
                                                  core_script_cpp_FUN_00559360(local_307c);
                                                  core_script_cpp_FUN_00559360(local_2d5c);
                                                  iVar6 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                    (g_CDemonSetPtr);
                                                  if (iVar6 < 0) {
                                                    sprintf
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
                                                    pcVar15 = (char *)
                                                  core_event_cpp_CEventList_FUN_004add00
                                                            (g_CEventListPtr);
                                                  if (pcVar15 != (char *)0x0) {
                                                    pcVar18 = &DAT_0310eca0;
                                                    do {
                                                      cVar2 = *pcVar15;
                                                      *pcVar18 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar15[1];
                                                      pcVar15 = pcVar15 + 2;
                                                      pcVar18[1] = cVar2;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar6 = strnicmp
                                                                    (pcVar15,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0x11] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0x11);
                                                    local_48 = -1;
                                                    local_11c = str_06;
                                                    sscanf
                                                              (str_06,"(%d , %[^)])%n",local_ac,
                                                               local_1dbc,&local_48);
                                                    if (local_48 < 3) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing enableCameraGroup parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_48;
                                                    core_script_cpp_FUN_00559360(local_1dbc);
                                                    if (DAT_0310ec9c == 0) {
                                                                                                            
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_1dbc);
                                                  core_set_cpp_CDemonSet_FUN_00570ec0
                                                            (g_CDemonSetPtr);
                                                  }
                                                  else {
                                                    pcVar15 = (char *)
                                                  core_event_cpp_CEventList_FUN_004add00
                                                            (g_CEventListPtr);
                                                  if (pcVar15 != (char *)0x0) {
LAB_0055cd52:
                                                    pcVar18 = &DAT_0310eca0;
                                                    do {
                                                      cVar2 = *pcVar15;
                                                      *pcVar18 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar15[1];
                                                      pcVar15 = pcVar15 + 2;
                                                      pcVar18[1] = cVar2;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xf] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xf);
                                                    local_dc = -1;
                                                    local_11c = str_07;
                                                    sscanf
                                                              (str_07,"(%[^,], %[^)])%n",local_32d4,
                                                               local_1f4c,&local_dc);
                                                    if (local_dc < 3) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing enableHealthBar parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_dc;
                                                    core_script_cpp_FUN_00559360(local_32d4);
                                                    core_script_cpp_FUN_00559360(local_1f4c);
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_32d4,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  iVar16 = stricmp
                                                                     (local_1f4c,"false");
                                                  iVar6 = 0;
                                                  if (iVar16 != 0) {
                                                    iVar6 = stricmp
                                                                      (local_1f4c,"true");
                                                    if (iVar6 == 0) {
                                                      iVar6 = 1;
                                                    }
                                                    else {
                                                      iVar6 = stricmp
                                                                        (local_1f4c,
                                                                         "always");
                                                      if (iVar6 != 0) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'",local_1f4c);
                                                  return -1;
                                                  }
                                                  iVar6 = 2;
                                                  }
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    (pCVar11->base).health_bar_mode = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"end",3);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[3] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 3);
                                                      local_11c = extraout_EAX_16;
                                                      if (DAT_0310ec9c == 0) {
                                                        local_114 = DAT_0310ec9c;
                                                        this_ptr->unk1[0] = '\x01';
                                                        this_ptr->unk1[1] = '\0';
                                                        this_ptr->unk1[2] = '\0';
                                                        this_ptr->unk1[3] = '\0';
                                                      }
                                                    }
                                                    else {
                                                      iVar6 = strnicmp
                                                                        (pcVar15,"fadeIn",6
                                                                        );
                                                      if ((iVar6 == 0) &&
                                                         ((g_CharacterClassificationTable
                                                           [(byte)(pcVar15[6] + 1)] & 0xe0U) == 0))
                                                      {
                                                        core_script_cpp_FUN_005593d0(pcVar15 + 6);
                                                        local_11c = extraout_EAX_17;
                                                        if (DAT_0310ec9c == 0) {
                                                          local_114 = DAT_0310ec9c;
                                                          if (0.0 <= this_ptr->cmd_timer) {
                                                            uVar13 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004e0b90
                                                            (g_CGamePtr);
                                                  if (uVar13 != 0) {
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
                                                                      (pcVar15,"fadeOut",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[7] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 7);
                                                      uVar13 = DAT_0310ec9c;
                                                      pCVar4 = g_CGamePtr;
                                                      local_11c = extraout_EAX_18;
                                                      if (DAT_0310ec9c == 0) {
                                                        g_CGamePtr->allow_damage_flag = 0;
                                                        local_114 = uVar13;
                                                        if (0.0 <= this_ptr->cmd_timer) {
                                                          uVar13 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004e0b90(pCVar4);
                                                  if (uVar13 != 0) {
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
                                                                      (pcVar15,"gesture",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[7] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 7);
                                                      local_d8 = -1;
                                                      local_11c = str_08;
                                                      sscanf
                                                                (str_08,"(%[^,], %[^)])%n",local_23fc,
                                                                 local_19d4,&local_d8);
                                                      if (local_d8 < 5) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing gesture command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_d8;
                                                  core_script_cpp_FUN_00559360(local_23fc);
                                                  core_script_cpp_FUN_00559360(local_19d4);
                                                  pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_23fc,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    uVar13 = 
                                                  core_charactr_cpp_CCharacter_FUN_0042d390
                                                            (&pCVar11->base);
                                                  }
                                                  else {
                                                    this_ptr_00 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                                            (&(pCVar11->base).model.
                                                              motion_controller);
                                                  iVar6 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                            (this_ptr_00);
                                                  uVar13 = (uint)(-1 < iVar6);
                                                  }
                                                  if (uVar13 == 0) {
                                                    iVar6 = core_bugs_cpp_FUN_00427b70();
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Gesture name %s is not valid for actor %s, model %s",
                                                               local_19d4,local_23fc,iVar6);
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"getIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[9] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 9);
                                                      local_d4 = -1;
                                                      local_11c = str_09;
                                                      sscanf
                                                                (str_09,"(%[^,], %[^,)] )%n",local_113c,
                                                                 local_1e84,&local_d4);
                                                      if (local_d4 < 5) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing getIniInt command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_d4;
                                                  core_script_cpp_FUN_00559360(local_113c);
                                                  core_script_cpp_FUN_00559360(local_1e84);
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
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xf] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xf);
                                                    local_cc = -1;
                                                    local_11c = str_10;
                                                    sscanf
                                                              (str_10,"(%[^,], %[^)])%n",local_1074,
                                                               local_1b64,&local_cc);
                                                    if (local_cc < 5) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing getTriggerActor command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_cc;
                                                    core_script_cpp_FUN_00559360(local_1074);
                                                    core_script_cpp_FUN_00559360(local_1b64);
                                                    iVar6 = core_script_cpp_FUN_00559220(local_1074)
                                                    ;
                                                    if (iVar6 == 0) {
                                                      return -1;
                                                    }
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_1b64,
                                                             g_CTriggerClassInfo.name_hash,0x3f87458
                                                            );
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                            (g_CEventListPtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"gosub",5);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[5] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 5);
                                                      local_11c = extraout_EAX_19;
                                                      iVar6 = core_script_cpp_CScript_FUN_00560160
                                                                        (this_ptr,extraout_EAX_19);
                                                      if (iVar6 < 0) {
                                                        dVar1 = (double)CONCAT44(local_124,local_11c
                                                                                );
                                                        pcVar15 = 
                                                  "Undefined label %s used in gosub statement on line %d";
LAB_0055a97f:
                                                  sprintf
                                                            (&DAT_0310eca0,pcVar15,SUB84(dVar1,0),
                                                             (int)((ulonglong)dVar1 >> 0x20));
                                                  return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    if (7 < this_ptr->call_stack_count) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Call stack overflow detected on script line %d."
                                                                 ,local_124);
                                                      return -1;
                                                    }
                                                    *(int *)(this_ptr->unk6 +
                                                            this_ptr->call_stack_count * 4) =
                                                         this_ptr->next_cmd;
                                                    this_ptr->next_cmd = iVar6;
                                                    this_ptr->call_stack_count =
                                                         this_ptr->call_stack_count + 1;
                                                    local_11c = &DAT_006424ec;
                                                  }
                                                  else {
                                                    local_11c = &DAT_006424ec;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"goto",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[4] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 4);
                                                      local_11c = extraout_EAX_20;
                                                      iVar6 = core_script_cpp_CScript_FUN_00560160
                                                                        (this_ptr,extraout_EAX_20);
                                                      if (iVar6 < 0) {
                                                        dVar1 = (double)CONCAT44(local_124,local_11c
                                                                                );
                                                        pcVar15 = 
                                                  "Undefined label %s used in goto statement on line %d";
                                                  goto LAB_0055a97f;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    this_ptr->next_cmd = iVar6;
                                                    local_11c = &DAT_00642527;
                                                  }
                                                  else {
                                                    local_11c = &DAT_00642527;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"gtfo",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[4] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 4);
                                                      local_11c = extraout_EAX_21;
                                                      pcVar15 = core_script_cpp_FUN_005593f0
                                                                          ((int *)&local_11c,
                                                                           local_3400,300);
                                                      if (pcVar15 != (char *)0x0) goto LAB_0055cd52;
                                                      if (DAT_0310ec9c == 0) {
                                                                                                                
                                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                            (g_CEditorToolsPtr,
                                                             "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                             local_124,local_3400);
                                                  this_ptr->unk1[0] = '\x01';
                                                  this_ptr->unk1[1] = '\0';
                                                  this_ptr->unk1[2] = '\0';
                                                  this_ptr->unk1[3] = '\0';
                                                  local_114 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xd);
                                                    local_c8 = 0xffffffff;
                                                    local_11c = str_11;
                                                    sscanf
                                                              (str_11,"(%[^,)]%n",local_1524,
                                                               &local_c8);
                                                    if ((int)local_c8 < 2) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_c8;
                                                    core_script_cpp_FUN_00559360(local_1524);
                                                    local_c4 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_1524,g_CHeroClassInfo.name_hash,
                                                             0x2db87d4);
                                                  if (local_c4 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  local_c0 = 1;
                                                  if (*local_11c == ',') {
                                                    local_11c = local_11c + 1;
                                                    uVar13 = 0xffffffff;
                                                    pcVar15 = local_11c;
                                                    do {
                                                      if (uVar13 == 0) break;
                                                      uVar13 = uVar13 - 1;
                                                      cVar2 = *pcVar15;
                                                      pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    uVar13 = ~uVar13 - 2;
                                                    local_c8 = uVar13;
                                                    if ((int)uVar13 < 1) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    pcVar15 = local_11c;
                                                    pcVar18 = acStack_fad + 1;
                                                    for (uVar14 = uVar13 >> 2; uVar14 != 0;
                                                        uVar14 = uVar14 - 1) {
                                                      *(uint *)pcVar18 =
                                                           *(uint *)pcVar15;
                                                      pcVar15 = pcVar15 + (uint)bVar19 * -8 + 4;
                                                      pcVar18 = pcVar18 + (uint)bVar19 * -8 + 4;
                                                    }
                                                    for (uVar13 = uVar13 & 3; uVar13 != 0;
                                                        uVar13 = uVar13 - 1) {
                                                      *pcVar18 = *pcVar15;
                                                      pcVar15 = pcVar15 + (uint)bVar19 * -2 + 1;
                                                      pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
                                                    }
                                                    pcVar15 = local_11c + local_c8;
                                                    acStack_fad[local_c8 + 1] = '\0';
                                                    local_11c = pcVar15;
                                                    if (DAT_0310ec9c == 0) {
                                                      local_c0 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,acStack_fad + 1);
                                                  }
                                                  else {
                                                    pcVar15 = (char *)
                                                  core_event_cpp_CEventList_FUN_004add00
                                                            (g_CEventListPtr);
                                                  if (pcVar15 != (char *)0x0) goto LAB_0055d708;
                                                  }
                                                  }
                                                  if (*local_11c != ')') {
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Missing closing ')' in holsterWeapon command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  if (DAT_0310ec9c == 0) {
                                                    (*(((local_c4->base).base.vtable._ue)->_ue).
                                                      field_4)();
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"idle",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[4] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 4);
                                                      local_110 = this_ptr->next_cmd;
                                                      local_114 = 0;
                                                      local_11c = extraout_EAX_22;
                                                    }
                                                    else {
                                                      iVar6 = strnicmp
                                                                        (pcVar15,"if",2);
                                                      if ((iVar6 == 0) &&
                                                         ((g_CharacterClassificationTable
                                                           [(byte)(pcVar15[2] + 1)] & 0xe0U) == 0))
                                                      {
                                                        core_script_cpp_FUN_005593d0(pcVar15 + 2);
                                                        local_11c = extraout_EAX_23;
                                                        core_script_cpp_FUN_005594a0
                                                                  ((int)&local_11c,(int)local_444);
                                                        pcVar15 = extraout_EAX_24;
                                                        if (extraout_EAX_24 != (char *)0x0)
                                                        goto LAB_0055d708;
                                                        if ((DAT_0310ec9c == 0) &&
                                                           (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_444), iVar6 == 0)
                                                  ) {
                                                    iVar6 = core_script_cpp_CScript_FUN_005601c0
                                                                      (this_ptr,this_ptr->next_cmd,0
                                                                      );
                                                    if (iVar6 < 0) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Can't skip next command after if statement on line %d"
                                                                 ,local_124);
                                                      return -1;
                                                    }
                                                    iVar16 = strnicmp
                                                                       (*(char **)(*(int *)(this_ptr
                                                  ->unk4 + 0x1c) + 4 + iVar6 * 8),"else",4)
                                                  ;
                                                  if (iVar16 == 0) {
                                                    iVar6 = iVar6 + 1;
                                                  }
                                                  this_ptr->next_cmd = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "finishedAct",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xb] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xb);
                                                    local_bc = -1;
                                                    local_11c = str_12;
                                                    sscanf
                                                              (str_12," ( )%n",&local_bc);
                                                    uVar13 = DAT_0310ec9c;
                                                    pCVar4 = g_CGamePtr;
                                                    if (local_bc < 2) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing finishedAct command"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_bc;
                                                    if (DAT_0310ec9c == 0) {
                                                      this_ptr->unk1[0] = '\x01';
                                                      this_ptr->unk1[1] = '\0';
                                                      this_ptr->unk1[2] = '\0';
                                                      this_ptr->unk1[3] = '\0';
                                                      local_114 = uVar13;
                                                      pCVar4->unk12 = 1;
                                                    }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"letterbox",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[9] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 9);
                                                      local_11c = extraout_EAX_25;
                                                      pcVar15 = core_script_cpp_FUN_005593f0
                                                                          ((int *)&local_11c,
                                                                           local_b4c,100);
                                                      if (pcVar15 != (char *)0x0) {
LAB_0055d708:
                                                        pcVar18 = &DAT_0310eca0;
                                                        do {
                                                          cVar2 = *pcVar15;
                                                          *pcVar18 = cVar2;
                                                          if (cVar2 == '\0') {
                                                            return -1;
                                                          }
                                                          cVar2 = pcVar15[1];
                                                          pcVar15 = pcVar15 + 2;
                                                          pcVar18[1] = cVar2;
                                                          pcVar18 = pcVar18 + 2;
                                                        } while (cVar2 != '\0');
                                                        return -1;
                                                      }
                                                      iVar16 = -1;
                                                      iVar6 = stricmp
                                                                        (local_b4c,"false")
                                                      ;
                                                      if (iVar6 == 0) {
                                                        iVar16 = 0;
                                                      }
                                                      iVar6 = stricmp
                                                                        (local_b4c,"true");
                                                      if (iVar6 == 0) {
                                                        iVar16 = 1;
                                                      }
                                                      iVar6 = stricmp
                                                                        (local_b4c,"bottom"
                                                                        );
                                                      pCVar4 = g_CGamePtr;
                                                      if (iVar6 == 0) {
                                                        iVar16 = 2;
                                                      }
                                                      else if (iVar16 < 0) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Invalid letterBox mode: %s",local_b4c);
                                                  return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    g_CGamePtr->letterbox_mode = iVar16;
                                                    pCVar4->allow_damage_flag = (uint)(iVar16 == 0);
                                                    pCVar4->allow_enemy_attack_flag =
                                                         (uint)(pCVar4->letterbox_mode == 0);
                                                    pCVar4->allow_hero_controls_flag =
                                                         pCVar4->letterbox_mode;
                                                    this_ptr->unk5[0x403] = -1;
                                                    pCVar5 = g_CDemonSetPtr;
                                                    this_ptr->unk5[0x404] = -1;
                                                    this_ptr->unk5[0x405] = -1;
                                                    this_ptr->unk5[0x406] = -1;
                                                    DAT_0310f4a4 = 1;
                                                    if ((pCVar4->block_auto_save != 0) &&
                                                       (pCVar4->letterbox_mode != 0)) {
                                                      pCVar4->block_auto_save = 0;
                                                      iVar6 = core_event_cpp_FUN_004b1970
                                                                        ((int)pCVar5);
                                                                                                            
                                                  core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                                                            (g_CDemonSetPtr,
                                                             (CDemonActor *)
                                                             g_CScriptPtr->focus_actor,1);
                                                  pCVar5 = g_CDemonSetPtr;
                                                  pCVar3 = g_CScriptPtr;
                                                  pCVar3->unk3[0] = '\0';
                                                  pCVar3->unk3[1] = '\0';
                                                  pCVar3->unk3[2] = '\0';
                                                  pCVar3->unk3[3] = '\0';
                                                  iVar16 = core_event_cpp_FUN_004b1970((int)pCVar5);
                                                  if (iVar6 == iVar16) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                                                            (g_CDemonSetPtr,iVar16);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xe] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xe);
                                                    local_11c = extraout_EAX_26;
                                                    core_script_cpp_FUN_005594a0
                                                              ((int)&local_11c,(int)local_570);
                                                    pcVar15 = extraout_EAX_27;
                                                    if (extraout_EAX_27 != (char *)0x0)
                                                    goto LAB_0055d708;
                                                    if (DAT_0310ec9c == 0) {
                                                      iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_570);
                                                  this_ptr->focus_actor_locked = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"lookAt",6);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[6] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 6);
                                                      local_b8 = -1;
                                                      local_11c = str_13;
                                                      sscanf
                                                                (str_13,"(%[^,)]%n",local_1394,
                                                                 &local_b8);
                                                      if (local_b8 < 2) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing lookAt command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_b8;
                                                  core_script_cpp_FUN_00559360(local_1394);
                                                  pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_1394,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14);
                                                  if (pCVar11 == (CHero *)0x0) {
joined_r0x0055c026:
                                                    if (DAT_0310f4ac == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_0055a8d4;
                                                  }
                                                  if (*local_11c == ',') {
                                                    local_b8 = -1;
                                                    sscanf
                                                              (local_11c,", %[^)]%n",local_2fb4,
                                                               &local_b8);
                                                    if (local_b8 < 3) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing lookAt command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_b8;
                                                    core_script_cpp_FUN_00559360(local_2fb4);
                                                    pCVar12 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_2fb4,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             0x821ff8);
                                                  if (pCVar12 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  }
                                                  if (*local_11c != ')') {
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Missing closing ')' in lookAt command");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  if (DAT_0310ec9c == 0) {
                                                    core_charactr_cpp_CCharacter_FUN_0042ddd0
                                                              (&pCVar11->base);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "movePlatform",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xc] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xc);
                                                    local_b4 = -1;
                                                    local_11c = str_14;
                                                    sscanf
                                                              (str_14,"(%[^,], %f , %f )%n",local_2a3c,
                                                               &local_3f78,&local_3f74,&local_b4);
                                                    if (local_b4 < 5) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing movePlatform command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_b4;
                                                    core_script_cpp_FUN_00559360(local_2a3c);
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_2a3c,
                                                             g_CPlatformClassInfo.name_hash,
                                                             0x30d5054);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if ((local_3f78 < 0.0) || (1.0 < local_3f78)) {
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  dVar1 = (double)local_3f74;
                                                  if (dVar1 <= 0.0) {
                                                    pcVar15 = "Invalid movement rate %f";
                                                    goto LAB_0055a97f;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    core_platfrm_cpp_FUN_0054d690();
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"openDoor",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[8] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 8);
                                                      local_b0 = -1;
                                                      local_11c = str_15;
                                                      sscanf
                                                                (str_15,"(%[^,], %[^)])%n",local_28ac,
                                                                 local_2eec,&local_b0);
                                                      if (local_b0 < 5) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing openDoor command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_b0;
                                                  core_script_cpp_FUN_00559360(local_2eec);
                                                  core_script_cpp_FUN_00559360(local_28ac);
                                                  pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_2eec,g_CDoorClassInfo.name_hash,
                                                             0x2c14cdc);
                                                  if ((pCVar11 == (CHero *)0x0) ||
                                                     (pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_28ac,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14), pCVar11 == (CHero *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    local_114 = DAT_0310ec9c;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      iVar6 = (*(((pCVar11->base).base.vtable._uc)->
                                                                _uc).cfunc20)();
                                                      if (iVar6 != 0) {
                                                        local_110 = 1;
                                                      }
                                                    }
                                                    else {
                                                      (*(((pCVar11->base).base.vtable._uc)->_uc).
                                                        cfunc18)();
                                                      this_ptr->cmd_timer = 1.0;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "pressButton",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xb] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xb);
                                                    local_a8 = -1;
                                                    local_11c = str_16;
                                                    sscanf
                                                              (str_16,"( %[^,], %[^)])%n",local_4a8,
                                                               local_50c,&local_a8);
                                                    if (local_a8 < 5) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing pressButton() command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_a8;
                                                    core_script_cpp_FUN_00559360(local_4a8);
                                                    core_script_cpp_FUN_00559360(local_50c);
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_4a8,g_CHeroClassInfo.name_hash,
                                                             0x2db87d4);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  puVar8 = (uint *)
                                                           core_script_cpp_FUN_00559660
                                                                     ((int)pCVar11->unk2,local_50c);
                                                  if (puVar8 == (uint *)0x0) {
                                                    sprintf
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
                                                  *puVar8 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"raise",5);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[5] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 5);
                                                      local_11c = extraout_EAX_28;
                                                      pcVar15 = core_script_cpp_FUN_005593f0
                                                                          ((int *)&local_11c,
                                                                           local_a20,100);
                                                      if (pcVar15 != (char *)0x0) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing event expression on raise statament: %s",pcVar15);
                                                  return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    core_event_cpp_CEventList_FUN_004aabe0
                                                              (g_CEventListPtr);
                                                  }
                                                  else {
                                                    pcVar15 = (char *)
                                                  core_event_cpp_CEventList_FUN_004add40
                                                            (g_CEventListPtr);
                                                  if (pcVar15 != (char *)0x0) {
                                                    pcVar18 = &DAT_0310eca0;
                                                    do {
                                                      cVar2 = *pcVar15;
                                                      *pcVar18 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar15[1];
                                                      pcVar15 = pcVar15 + 2;
                                                      pcVar18[1] = cVar2;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "releaseButton",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xd);
                                                    local_a0 = -1;
                                                    local_11c = str_17;
                                                    sscanf
                                                              (str_17,"( %[^,], %[^)])%n",local_700,
                                                               local_8f4,&local_a0);
                                                    if (local_a0 < 5) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing releaseButton() command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_a0;
                                                    core_script_cpp_FUN_00559360(local_700);
                                                    core_script_cpp_FUN_00559360(local_8f4);
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_700,g_CHeroClassInfo.name_hash,
                                                             0x2db87d4);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  puVar8 = (uint *)
                                                           core_script_cpp_FUN_00559660
                                                                     ((int)pCVar11->unk2,local_8f4);
                                                  uVar13 = DAT_0310ec9c;
                                                  if (puVar8 == (uint *)0x0) {
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Invalid button name: %s",
                                                               local_8f4);
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    if (DAT_0310f4a4 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
                                                            (g_CGamePtr);
                                                  DAT_0310f4a4 = uVar13;
                                                  }
                                                  *puVar8 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0x1b] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0x1b);
                                                    local_9c = -1;
                                                    local_11c = str_18;
                                                    sscanf
                                                              (str_18," ( %[^)])%n",local_271c,
                                                               &local_9c);
                                                    if (local_9c < 3) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing removeAllItemsFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_9c;
                                                    core_script_cpp_FUN_00559360(local_271c);
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_271c,g_CHeroClassInfo.name_hash,
                                                             0x2db87d4);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004fd190
                                                              (&pCVar11->inventory);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0x17] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0x17);
                                                    local_98 = -1;
                                                    local_11c = str_19;
                                                    sscanf
                                                              (str_19," ( %[^,], %[^)])%n",local_20dc,
                                                               local_2014,&local_98);
                                                    if (local_98 < 3) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing removeItemFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_98;
                                                    core_script_cpp_FUN_00559360(local_20dc);
                                                    core_script_cpp_FUN_00559360(local_2014);
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_20dc,g_CHeroClassInfo.name_hash,
                                                             0x2db87d4);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if ((DAT_0310ec9c == 0) &&
                                                     (pCVar9 = 
                                                  core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                                                            (&g_HeroActors[g_LocalHeroIndex]->
                                                              inventory,local_2014),
                                                  pCVar9 != (CDemonActor *)0x0)) {
                                                    core_inv_cpp_CInventory_removeItem_FUN_004fea70
                                                              (&pCVar11->inventory,pCVar9,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"removeKeys"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[10] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 10);
                                                      local_90 = -1;
                                                      local_11c = str_20;
                                                      sscanf
                                                                (str_20," (%d )%n",local_94,
                                                                 &local_90);
                                                      if (local_90 < 3) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing removeKeys() command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_90;
                                                  if (g_CNetGamePtr->connection_type != 0) {
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    core_hero_cpp_FUN_004f3910();
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"return",6);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[6] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 6);
                                                      local_11c = extraout_EAX_29;
                                                      if (DAT_0310ec9c == 0) {
                                                        iVar6 = this_ptr->call_stack_count;
                                                        if (iVar6 < 1) {
                                                          sprintf
                                                                    (&DAT_0310eca0,
                                                                                                                                          
                                                  "Return without gosub detected on script line %d.",local_124);
                                                  return -1;
                                                  }
                                                  this_ptr->call_stack_count = iVar6 + -1;
                                                  this_ptr->next_cmd =
                                                       *(int *)(this_ptr->unk6 + iVar6 * 4 + -4);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "rollCredits",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xb] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xb);
                                                    local_8c = -1;
                                                    local_11c = str_21;
                                                    sscanf
                                                              (str_21," ( )%n",&local_8c);
                                                    uVar13 = DAT_0310ec9c;
                                                    pCVar4 = g_CGamePtr;
                                                    if (local_8c < 2) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing rollCredits command"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_8c;
                                                    if (DAT_0310ec9c == 0) {
                                                      this_ptr->unk1[0] = '\x01';
                                                      this_ptr->unk1[1] = '\0';
                                                      this_ptr->unk1[2] = '\0';
                                                      this_ptr->unk1[3] = '\0';
                                                      local_114 = uVar13;
                                                      pCVar4->unk12 = 2;
                                                    }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"say",3);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[3] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 3);
                                                      local_11c = extraout_EAX_30;
                                                      pcVar15 = core_script_cpp_FUN_005593f0
                                                                          ((int *)&local_11c,
                                                                           local_3b6c,500);
                                                      if (pcVar15 != (char *)0x0) {
LAB_0055e656:
                                                        pcVar18 = &DAT_0310eca0;
                                                        do {
                                                          cVar2 = *pcVar15;
                                                          *pcVar18 = cVar2;
                                                          if (cVar2 == '\0') {
                                                            return -1;
                                                          }
                                                          cVar2 = pcVar15[1];
                                                          pcVar15 = pcVar15 + 2;
                                                          pcVar18[1] = cVar2;
                                                          pcVar18 = pcVar18 + 2;
                                                        } while (cVar2 != '\0');
                                                        return -1;
                                                      }
                                                      local_88 = -1;
                                                      sscanf
                                                                (local_3b6c,"%[^,], %[^,], %n",local_258c,
                                                                 local_145c,&local_88);
                                                      if (local_88 < 5) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing speaker and wav arguments");
                                                  return -1;
                                                  }
                                                  core_script_cpp_FUN_00559360(local_258c);
                                                  core_script_cpp_FUN_00559360(local_145c);
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    core_script_cpp_FUN_005593d0
                                                              (local_3b6c + local_88);
                                                    local_14 = core_script_cpp_CScript_FUN_0055ff00
                                                                         (this_ptr,(int)local_258c,
                                                                          local_145c,extraout_EAX_31
                                                                         );
                                                    this_ptr->dialog_wav_time = local_14;
                                                    if (this_ptr->dialog_wav_time < 0.0) {
                                                      return -1;
                                                    }
                                                  }
                                                  if ((DAT_0310ec9c == 0) &&
                                                     (local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             (float *)param_2), 0 < (int)local_114))
                                                  {
                                                    core_script_cpp_CScript_FUN_00560140
                                                              (this_ptr,this_ptr->who_is_speaking);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "selectWeapon",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xc] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xc);
                                                    local_84 = -1;
                                                    local_11c = str_22;
                                                    sscanf
                                                              (str_22," (%[^,], %[^)])%n",local_ae8,
                                                               local_69c,&local_84);
                                                    if (local_84 < 5) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing selectWeapon parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    core_script_cpp_FUN_00559360(local_ae8);
                                                    core_script_cpp_FUN_00559360(local_69c);
                                                    local_11c = local_11c + local_84;
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_ae8,g_CHeroClassInfo.name_hash,
                                                             0x2db87d4);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    local_80 = DAT_0310ec9c;
                                                    pCVar9 = (CDemonActor *)
                                                             core_gabriela_cpp_FUN_004d7650();
                                                    local_7c = pCVar9;
                                                    if (pCVar9 != (CDemonActor *)0x0) {
                                                      do {
                                                        if (pCVar9 == (CDemonActor *)0x0) {
                                                          g_CurrentFilename =
                                                               "..\\core\\script.cpp";
                                                          g_CurrentLineNumber = 0xad9;
                                                                                                                    
                                                  core_main_c_displayErrorAndQuit_FUN_00506f10
                                                            ("script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                                                    (pCVar9,local_69c);
                                                  if (iVar6 != 0) goto LAB_0055a8bb;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
                                                            (&pCVar11->inventory,(CDemonActor *)0x0,
                                                             5,1);
                                                  pCVar9 = (CDemonActor *)
                                                           core_gabriela_cpp_FUN_004d7650();
                                                  } while (pCVar9 != local_7c);
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
                                                                      (pcVar15,
                                                  "setActorVariable",0x10);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0x10] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0x10);
                                                    local_78 = -1;
                                                    local_11c = str_23;
                                                    sscanf
                                                              (str_23,"(%[^,], %[^)])%n",local_12cc,
                                                               local_24c4,&local_78);
                                                    if (local_78 < 5) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setActorVariable command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_78;
                                                    core_script_cpp_FUN_00559360(local_12cc);
                                                    core_script_cpp_FUN_00559360(local_24c4);
                                                    iVar6 = core_script_cpp_FUN_00559220(local_12cc)
                                                    ;
                                                    if (iVar6 == 0) {
                                                      return -1;
                                                    }
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_24c4,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             0x821ff8);
                                                  if (DAT_0310ec9c == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004b09a0
                                                            (g_CEventListPtr);
                                                  }
                                                  else if ((pCVar11 == (CHero *)0x0) &&
                                                          (DAT_0310f4ac == 0)) {
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xf] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xf);
                                                    local_11c = extraout_EAX_32;
                                                    pcVar15 = core_script_cpp_FUN_005593f0
                                                                        ((int *)&local_11c,local_82c
                                                                         ,100);
                                                    if (pcVar15 != (char *)0x0) goto LAB_0055e656;
                                                    if (DAT_0310ec9c == 0) {
                                                                                                            
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0
                                                            (g_CSoundPtr,local_82c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xe] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xe);
                                                    local_70 = -1;
                                                    local_11c = str_24;
                                                    sscanf
                                                              (str_24,"(%[^,], %d)%n",local_2b04,
                                                               &local_74,&local_70);
                                                    if (local_70 < 3) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setCameragroup parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_70;
                                                    core_script_cpp_FUN_00559360(local_2b04);
                                                    iVar6 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                      (g_CDemonSetPtr);
                                                    if (iVar6 < 0) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Camera \"%s\" does not exist.",
                                                                 local_2b04);
                                                      return -1;
                                                    }
                                                    if (DAT_0310ec9c == 0) {
                                                      g_CDemonSetPtr->cameras[iVar6].unk2 = local_74
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0x12] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0x12);
                                                    local_68 = -1;
                                                    local_11c = str_25;
                                                    sscanf
                                                              (str_25,"(%[^,], %f)%n",local_320c,
                                                               &local_6c,&local_68);
                                                    if (local_68 < 3) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setCharacterHealth parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_68;
                                                    core_script_cpp_FUN_00559360(local_320c);
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_320c,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    (pCVar11->base).hit_points =
                                                         (pCVar11->base).max_hit_points * local_6c;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "setFocusActor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xd);
                                                    local_11c = extraout_EAX_33;
                                                    pcVar15 = core_script_cpp_FUN_005593f0
                                                                        ((int *)&local_11c,local_9bc
                                                                         ,100);
                                                    if (pcVar15 != (char *)0x0) {
                                                      pcVar18 = &DAT_0310eca0;
                                                      do {
                                                        cVar2 = *pcVar15;
                                                        *pcVar18 = cVar2;
                                                        if (cVar2 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar2 = pcVar15[1];
                                                        pcVar15 = pcVar15 + 2;
                                                        pcVar18[1] = cVar2;
                                                        pcVar18 = pcVar18 + 2;
                                                      } while (cVar2 != '\0');
                                                      return -1;
                                                    }
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_9bc,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             0x821ff8);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (pCVar11 != (CHero *)this_ptr->focus_actor) {
                                                    this_ptr->unk3[0] = '\x01';
                                                    this_ptr->unk3[1] = '\0';
                                                    this_ptr->unk3[2] = '\0';
                                                    this_ptr->unk3[3] = '\0';
                                                    this_ptr->focus_actor = (int)pCVar11;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "setHeroTask",0xb);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xb] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xb);
                                                    local_64 = -1;
                                                    local_11c = str_26;
                                                    sscanf
                                                              (str_26," (%[^,], %[^)])%n",local_638,
                                                               local_2b4,&local_64);
                                                    if (local_64 < 5) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setHeroTask parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    core_script_cpp_FUN_00559360(local_638);
                                                    core_script_cpp_FUN_00559360(local_2b4);
                                                    local_11c = local_11c + local_64;
                                                    pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_638,g_CHeroClassInfo.name_hash,
                                                             0x2db87d4);
                                                  if (pCVar11 == (CHero *)0x0)
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
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Invalid Task: %s",local_2b4);
                                                    return -1;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    core_hero_cpp_FUN_004f3930();
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"setIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[9] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 9);
                                                      local_58 = -1;
                                                      local_11c = str_27;
                                                      sscanf
                                                                (str_27,"(%[^,], %d )%n",local_e1c,
                                                                 &local_5c,&local_58);
                                                      if (local_58 < 5) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing setIniInt command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_58;
                                                  core_script_cpp_FUN_00559360(local_e1c);
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
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0x12] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0x12);
                                                    local_54 = -1;
                                                    local_11c = str_28;
                                                    sscanf
                                                              (str_28," (%n %n",&local_54,
                                                               &local_54);
                                                    if (local_54 < 1) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
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
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing setSayTimeOverride parameters.");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_54;
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                    *(uint *)(this_ptr->unk5 + 0x3ff) =
                                                         local_50;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xc] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xc);
                                                    local_11c = extraout_EAX_34;
                                                    pcVar15 = core_script_cpp_FUN_005593f0
                                                                        ((int *)&local_11c,local_764
                                                                         ,100);
                                                    if (pcVar15 != (char *)0x0) {
LAB_0055f0a8:
                                                      pcVar18 = &DAT_0310eca0;
                                                      do {
                                                        cVar2 = *pcVar15;
                                                        *pcVar18 = cVar2;
                                                        if (cVar2 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar2 = pcVar15[1];
                                                        pcVar15 = pcVar15 + 2;
                                                        pcVar18[1] = cVar2;
                                                        pcVar18 = pcVar18 + 2;
                                                      } while (cVar2 != '\0');
                                                      return -1;
                                                    }
                                                    iVar6 = core_script_cpp_CScript_FUN_00560160
                                                                      (this_ptr,local_764);
                                                    if (iVar6 < 0) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Undefined label '%s'",
                                                                 local_764);
                                                      return -1;
                                                    }
                                                    if (DAT_0310ec9c == 0) {
                                                      *(int *)(this_ptr->unk5 + 0x403) = iVar6;
                                                    }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[10] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 10);
                                                      local_11c = extraout_EAX_35;
                                                      pcVar15 = core_script_cpp_FUN_005593f0
                                                                          ((int *)&local_11c,
                                                                           local_3e0,100);
                                                      if (pcVar15 != (char *)0x0) goto LAB_0055f0a8;
                                                      if (local_3e0[0] == '\0') {
                                                        this_ptr->who_is_speaking = 0;
                                                      }
                                                      else {
                                                        pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_3e0,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14);
                                                  this_ptr->who_is_speaking = (int)pCVar11;
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  }
                                                  *(int *)this_ptr->unk2 = this_ptr->who_is_speaking
                                                  ;
                                                  if ((this_ptr->focus_actor_locked == 0) &&
                                                     (this_ptr->who_is_speaking !=
                                                      this_ptr->focus_actor)) {
                                                    iVar6 = this_ptr->who_is_speaking;
                                                    this_ptr->unk3[0] = '\x01';
                                                    this_ptr->unk3[1] = '\0';
                                                    this_ptr->unk3[2] = '\0';
                                                    this_ptr->unk3[3] = '\0';
                                                    this_ptr->focus_actor = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xd] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xd);
                                                    local_11c = extraout_EAX_36;
                                                    pcVar15 = core_script_cpp_FUN_005593f0
                                                                        ((int *)&local_11c,local_318
                                                                         ,100);
                                                    if (pcVar15 != (char *)0x0) {
                                                      pcVar18 = &DAT_0310eca0;
                                                      do {
                                                        cVar2 = *pcVar15;
                                                        *pcVar18 = cVar2;
                                                        if (cVar2 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar2 = pcVar15[1];
                                                        pcVar15 = pcVar15 + 2;
                                                        pcVar18[1] = cVar2;
                                                        pcVar18 = pcVar18 + 2;
                                                      } while (cVar2 != '\0');
                                                      return -1;
                                                    }
                                                    local_3f70 = -1.0;
                                                    sscanf
                                                              (local_318,"%f",&local_3f70);
                                                    if (((double)local_3f70 <= 0.0) ||
                                                       (4 < (double)local_3f70)) {
                                                      sprintf
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
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"setVictim",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[9] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 9);
                                                      local_44 = -1;
                                                      local_11c = str_29;
                                                      sscanf
                                                                (str_29,"(%[^,)]%n",local_1cf4,
                                                                 &local_44);
                                                      if (local_44 < 2) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing setVictim command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_44;
                                                  core_script_cpp_FUN_00559360(local_1cf4);
                                                  pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_1cf4,g_CEnemyClassInfo.name_hash,
                                                             0x2cf2bb8);
                                                  if (pCVar11 == (CHero *)0x0)
                                                  goto joined_r0x0055c026;
                                                  if (*local_11c == ',') {
                                                    local_44 = -1;
                                                    sscanf
                                                              (local_11c,", %[^)]%n",local_1204,
                                                               &local_44);
                                                    if (local_44 < 3) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing setVictim command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_44;
                                                    core_script_cpp_FUN_00559360(local_1204);
                                                    iVar6 = stricmp
                                                                      (local_1204,"disable"
                                                                      );
                                                    if ((iVar6 != 0) &&
                                                       (pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_1204,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14), pCVar11 == (CHero *)0x0))
                                                  goto joined_r0x0055c026;
                                                  }
                                                  if (*local_11c != ')') {
                                                    sprintf
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
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"snapToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[10] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 10);
                                                      local_40 = -1;
                                                      local_11c = str_30;
                                                      sscanf
                                                                (str_30,"(%[^,], %[^)])%n",local_2c94,
                                                                 local_1c2c,&local_40);
                                                      if (local_40 < 5) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error snaping turnToFace command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_40;
                                                  core_script_cpp_FUN_00559360(local_2c94);
                                                  core_script_cpp_FUN_00559360(local_1c2c);
                                                  pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_2c94,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             0x821ff8);
                                                  if ((pCVar11 == (CHero *)0x0) ||
                                                     (pCVar12 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_1c2c,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             0x821ff8), pCVar12 == (CHero *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    core_bodypart_cpp_FUN_0041b510();
                                                    pCVar10 = 
                                                  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                                            (&local_160,&local_148);
                                                  (pCVar11->base).base.orient.bank = pCVar10->y;
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                                                            ((CDemonActor *)pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"startSay",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[8] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 8);
                                                      local_11c = extraout_EAX_37;
                                                      pcVar15 = core_script_cpp_FUN_005593f0
                                                                          ((int *)&local_11c,
                                                                           local_3978,500);
                                                      if (pcVar15 != (char *)0x0) {
                                                        pcVar18 = &DAT_0310eca0;
                                                        do {
                                                          cVar2 = *pcVar15;
                                                          *pcVar18 = cVar2;
                                                          if (cVar2 == '\0') {
                                                            return -1;
                                                          }
                                                          cVar2 = pcVar15[1];
                                                          pcVar15 = pcVar15 + 2;
                                                          pcVar18[1] = cVar2;
                                                          pcVar18 = pcVar18 + 2;
                                                        } while (cVar2 != '\0');
                                                        return -1;
                                                      }
                                                      local_3c = -1;
                                                      sscanf
                                                                (local_3978,"%[^,], %[^,], %n",local_15ec,
                                                                 local_21a4,&local_3c);
                                                      if (local_3c < 5) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing speaker and wav arguments");
                                                  return -1;
                                                  }
                                                  core_script_cpp_FUN_00559360(local_15ec);
                                                  core_script_cpp_FUN_00559360(local_21a4);
                                                  core_script_cpp_FUN_005593d0
                                                            (local_3978 + local_3c);
                                                  local_14 = core_script_cpp_CScript_FUN_0055ff00
                                                                       (this_ptr,(int)local_15ec,
                                                                        local_21a4,extraout_EAX_38);
                                                  this_ptr->dialog_wav_time = local_14;
                                                  fVar7 = this_ptr->dialog_wav_time;
                                                  goto joined_r0x0055f6da;
                                                  }
                                                  iVar6 = strnicmp
                                                                    (pcVar15,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xc] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xc);
                                                    local_11c = extraout_EAX_39;
                                                    pcVar15 = core_script_cpp_FUN_005593f0
                                                                        ((int *)&local_11c,local_d54
                                                                         ,200);
                                                    if (pcVar15 != (char *)0x0) {
                                                      pcVar18 = &DAT_0310eca0;
                                                      do {
                                                        cVar2 = *pcVar15;
                                                        *pcVar18 = cVar2;
                                                        if (cVar2 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar2 = pcVar15[1];
                                                        pcVar15 = pcVar15 + 2;
                                                        pcVar18[1] = cVar2;
                                                        pcVar18 = pcVar18 + 2;
                                                      } while (cVar2 != '\0');
                                                      return -1;
                                                    }
                                                    pcVar15 = local_d54;
                                                    do {
                                                      pcVar18 = pcVar15;
                                                      if (*pcVar15 == ',') goto LAB_0055f760;
                                                      if (*pcVar15 == '\0') break;
                                                      pcVar18 = pcVar15 + 1;
                                                      if (*pcVar18 == ',') goto LAB_0055f760;
                                                      pcVar15 = pcVar15 + 2;
                                                    } while (*pcVar18 != '\0');
                                                    pcVar18 = (char *)0x0;
LAB_0055f760:
                                                    pcVar17 = ",";
                                                    local_18 = (uint)(pcVar18 != (char *)0x0);
                                                    local_38 = -1;
                                                    iVar6 = -1;
                                                    pcVar15 = local_d54;
                                                    do {
                                                      pcVar18 = pcVar15;
                                                      if (iVar6 == 0) break;
                                                      iVar6 = iVar6 + -1;
                                                      pcVar18 = pcVar15 + (uint)bVar19 * -2 + 1;
                                                      cVar2 = *pcVar15;
                                                      pcVar15 = pcVar18;
                                                    } while (cVar2 != '\0');
                                                    pcVar18 = pcVar18 + -1;
                                                    do {
                                                      cVar2 = *pcVar17;
                                                      *pcVar18 = cVar2;
                                                      if (cVar2 == '\0') break;
                                                      cVar2 = pcVar17[1];
                                                      pcVar17 = pcVar17 + 2;
                                                      pcVar18[1] = cVar2;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar2 != '\0');
                                                    sscanf
                                                              (local_d54,"%[^,],%n",local_7c8,
                                                               &local_38);
                                                    if (local_38 < 1) {
                                                      pcVar15 = "Error parsing out camera name";
                                                      pcVar18 = &DAT_0310eca0;
                                                      do {
                                                        cVar2 = *pcVar15;
                                                        *pcVar18 = cVar2;
                                                        if (cVar2 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar2 = pcVar15[1];
                                                        pcVar15 = pcVar15 + 2;
                                                        pcVar18[1] = cVar2;
                                                        pcVar18 = pcVar18 + 2;
                                                      } while (cVar2 != '\0');
                                                      return -1;
                                                    }
                                                    core_script_cpp_FUN_00559360(local_7c8);
                                                    iVar6 = core_set_cpp_CDemonSet_FUN_0056b790
                                                                      (g_CDemonSetPtr);
                                                    if (iVar6 < 0) {
                                                      sprintf
                                                                (&DAT_0310eca0,
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
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Invalid hold time value");
                                                  return -1;
                                                  }
                                                  }
                                                  if (DAT_0310ec9c == 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00
                                                            (g_CDemonSetPtr,iVar6,local_3f7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,
                                                  "timedDisplay",0xc);
                                                  if ((iVar6 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar15[0xc] + 1)] & 0xe0U) == 0)) {
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 0xc);
                                                    local_11c = extraout_EAX_40;
                                                    pcVar15 = core_script_cpp_FUN_005593f0
                                                                        ((int *)&local_11c,
                                                                         local_352c,300);
                                                    if (pcVar15 != (char *)0x0) {
LAB_0055f91c:
                                                      pcVar18 = &DAT_0310eca0;
                                                      do {
                                                        cVar2 = *pcVar15;
                                                        *pcVar18 = cVar2;
                                                        if (cVar2 == '\0') {
                                                          return -1;
                                                        }
                                                        cVar2 = pcVar15[1];
                                                        pcVar15 = pcVar15 + 2;
                                                        pcVar18[1] = cVar2;
                                                        pcVar18 = pcVar18 + 2;
                                                      } while (cVar2 != '\0');
                                                      return -1;
                                                    }
                                                    local_34 = -1;
                                                    sscanf
                                                              (local_352c,"%f,%n",&local_30,
                                                               &local_34);
                                                    if (local_34 < 2) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing time value"
                                                                );
                                                      return -1;
                                                    }
                                                    if (DAT_0310ec9c == 0) {
                                                      core_script_cpp_FUN_005593d0
                                                                (local_352c + local_34);
                                                      pcVar15 = &this_ptr->current_message;
                                                      pcVar18 = extraout_EAX_41;
                                                      do {
                                                        cVar2 = *pcVar18;
                                                        *pcVar15 = cVar2;
                                                        if (cVar2 == '\0') break;
                                                        cVar2 = pcVar18[1];
                                                        pcVar18 = pcVar18 + 2;
                                                        pcVar15[1] = cVar2;
                                                        pcVar15 = pcVar15 + 2;
                                                      } while (cVar2 != '\0');
                                                      local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,local_30,(float *)param_2);
                                                  if (0 < (int)local_114) {
                                                    this_ptr->current_message = '\0';
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"turnToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[10] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 10);
                                                      local_2c = -1;
                                                      local_11c = str_31;
                                                      sscanf
                                                                (str_31,"(%[^,], %[^)])%n",local_2974,
                                                                 local_16b4,&local_2c);
                                                      if (local_2c < 5) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing turnToFace command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_2c;
                                                  core_script_cpp_FUN_00559360(local_2974);
                                                  core_script_cpp_FUN_00559360(local_16b4);
                                                  pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_2974,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14);
                                                  if ((pCVar11 == (CHero *)0x0) ||
                                                     (pCVar12 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_16b4,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             0x821ff8), pCVar12 == (CHero *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    (*(((pCVar11->base).base.vtable._uc)->_uc).
                                                      cfunc24)();
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"wait",4);
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[4] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 4);
                                                      local_28 = -1;
                                                      local_11c = str_32;
                                                      sscanf
                                                                (str_32,"(%f)%n",&local_24,
                                                                 &local_28);
                                                      if (local_28 < 1) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing time value on wait statament");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_28;
                                                  if (DAT_0310ec9c == 0) {
                                                    local_114 = 
                                                  core_script_cpp_CScript_processTimer_FUN_005600c0
                                                            (this_ptr,local_24,(float *)param_2);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"waitFor",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[7] + 1)] & 0xe0U) == 0)) {
                                                      core_script_cpp_FUN_005593d0(pcVar15 + 7);
                                                      local_11c = extraout_EAX_42;
                                                      core_script_cpp_FUN_005594a0
                                                                ((int)&local_11c,(int)local_37c);
                                                      pcVar15 = extraout_EAX_43;
                                                      if (extraout_EAX_43 != (char *)0x0)
                                                      goto LAB_0055f91c;
                                                      if ((DAT_0310ec9c == 0) &&
                                                         (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                                            (g_CEventListPtr,local_37c), iVar6 == 0)
                                                  ) {
                                                    local_114 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = strnicmp
                                                                      (pcVar15,"walkTo",6);
                                                    dVar1 = (double)CONCAT44(pcVar15,local_124);
                                                    if ((iVar6 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar15[6] + 1)] & 0xe0U) != 0)) {
                                                      pcVar15 = "Unknown command on line %d: %s";
                                                      goto LAB_0055a97f;
                                                    }
                                                    core_script_cpp_FUN_005593d0(pcVar15 + 6);
                                                    local_120 = -1;
                                                    local_11c = str_33;
                                                    sscanf
                                                              (str_33,"(%[^,], %[^,)] %n",local_2bcc,
                                                               local_177c,&local_120);
                                                    if (local_120 < 5) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_120;
                                                    core_script_cpp_FUN_00559360(local_2bcc);
                                                    core_script_cpp_FUN_00559360(local_177c);
                                                    local_20 = 0;
                                                    if (*local_11c == ',') {
                                                      local_120 = -1;
                                                      sscanf
                                                                (local_11c,",%f %n",&local_20,
                                                                 &local_120);
                                                      if (local_120 < 1) {
                                                        sprintf
                                                                  (&DAT_0310eca0,
                                                                                                                                      
                                                  "Error parsing walkTo command parms");
                                                  return -1;
                                                  }
                                                  local_11c = local_11c + local_120;
                                                  }
                                                  local_1c = 0x501502f9;
                                                  if (*local_11c == ',') {
                                                    local_120 = -1;
                                                    sscanf
                                                              (local_11c,",%f %n",&local_1c,
                                                               &local_120);
                                                    if (local_120 < 1) {
                                                      sprintf
                                                                (&DAT_0310eca0,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_11c = local_11c + local_120;
                                                  }
                                                  if (*local_11c != ')') {
                                                    sprintf
                                                              (&DAT_0310eca0,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_11c = local_11c + 1;
                                                  pCVar11 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_2bcc,
                                                             g_CCharacterClassInfo.name_hash,
                                                             0x823c14);
                                                  if ((pCVar11 == (CHero *)0x0) ||
                                                     (pCVar12 = 
                                                  core_script_cpp_GetDemonActor_FUN_005594e0
                                                            (local_177c,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             0x821ff8), pCVar12 == (CHero *)0x0))
                                                  goto joined_r0x0055c026;
                                                  if (DAT_0310ec9c == 0) {
                                                    (*(((pCVar11->base).base.vtable._uc)->_uc).
                                                      cfunc23)();
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
    sprintf
              (&DAT_0310eca0,"Extra characters \"%s\" on line %d",local_118,local_120);
    return -1;
  }
LAB_0055a8d4:
  if (local_110 == 1) {
    this_ptr->dialog_wav_time = -1.0;
    uVar13 = DAT_0310ec9c;
    this_ptr->cmd_timer = -1.0;
    if ((uVar13 == 0) && (*(int *)(this_ptr->unk4 + 0x18) <= this_ptr->next_cmd)) {
      sprintf(&DAT_0310eca0,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_110) {
    this_ptr->next_cmd = local_10c;
    return local_110;
  }
  return local_110;
}
