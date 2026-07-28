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
  double dVar1;
  char cVar2;
  SDialogEntry *pSVar3;
  CGame *pCVar4;
  CDemonSet *pCVar5;
  char **ppcVar6;
  int iVar7;
  CVector3f *pCVar8;
  float fVar9;
  uint uVar10;
  CMotionList *this_ptr_00;
  CPlatform *pCVar11;
  int *piVar12;
  CWeapon *actor_ptr;
  CHero *this_ptr_01;
  int iVar13;
  CEnemy *this_ptr_02;
  CDemonActor *pCVar14;
  CCharacter *pCVar15;
  CDemonActor *pCVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  float *pfVar22;
  byte bVar23;
  float y;
  ulonglong in_stack_ffffc058;
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
  byte local_160 [12];
  CVector3f local_154;
  CVector3f local_148;
  CVector3f local_13c;
  byte local_130 [12];
  uint local_124;
  uint local_120;
  int local_11c;
  char *local_118;
  char **local_114;
  C3DSLight *local_110;
  char **local_10c;
  int local_108;
  char *local_104;
  byte local_100 [4];
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
  CCharacter *local_c0;
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
  uint local_70;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
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
  uint local_1c;
  int local_18;
  float local_14;
  
  bVar23 = 0;
  ppcVar6 = (this_ptr->script_text).data_array;
  if (((int)ppcVar6 < 0) || (this_ptr->xref_count <= (int)ppcVar6)) {
    PTR_01cc4800 = "..\\core\\script.cpp";
    INT_01cc4804 = 0x46d;
    core_main_c_FUN_004c8440("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar19 = "(no error message provided)";
  pcVar21 = &DAT_01e56420;
  do {
    cVar2 = *pcVar19;
    *pcVar21 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar19[1];
    pcVar19 = pcVar19 + 2;
    pcVar21[1] = cVar2;
    pcVar21 = pcVar21 + 2;
  } while (cVar2 != '\0');
  ppcVar6 = (this_ptr->script_text).data_array;
  pcVar19 = *(char **)(this_ptr->xref_entries->name + (int)ppcVar6 * 8 + 4);
  local_11c = *(int *)(this_ptr->xref_entries->name + (int)ppcVar6 * 8);
  local_114 = (this_ptr->script_text).data_array;
  local_124 = 1;
  (this_ptr->script_text).data_array = (char **)((int)local_114 + 1);
  cVar2 = *pcVar19;
  if ((cVar2 == '{') || (cVar2 == '}')) {
    local_118 = &CHAR_00h_0058e552;
  }
  else if (cVar2 == ':') {
    local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 1);
    dVar1 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118));
    if (_DAT_01e56418 != 0) {
      cVar2 = *local_118;
      for (pcVar19 = local_118;
          (cVar2 != '\0' &&
          ((((&DAT_005c168c)[(byte)(*pcVar19 + 1)] & 0xe0) != 0 || (*pcVar19 == '_'))));
          pcVar19 = pcVar19 + 1) {
        cVar2 = pcVar19[1];
      }
      if (*pcVar19 != '\0') {
        pcVar19 = "Invalid label \"%s\" on line";
        goto LAB_004ff42f;
      }
      ppcVar6 = (char **)core_script_cpp_CScript_findLabelIndex_FUN_00504c10(this_ptr,local_118);
      if ((int)ppcVar6 < 0) {
        PTR_01cc4800 = "..\\core\\script.cpp";
        INT_01cc4804 = 0x49f;
        core_main_c_FUN_004c8440("Internal script error checking for duplicate label.");
      }
      if (ppcVar6 != local_114) {
        _sprintf(&DAT_01e56420,"Duplicate label %s on lines %d and %d",local_118,local_11c,
                   *(uint *)(this_ptr->xref_entries->name + (int)ppcVar6 * 8));
        return -1;
      }
    }
    local_118 = &CHAR_00h_0058e5db;
  }
  else {
    iVar7 = _strnicmp(pcVar19,"syntaxCheckOn",0xd);
    if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] & 0xe0) == 0)) {
      if (_DAT_01e56418 != 0) {
        _DAT_01e56418 = 1;
      }
      local_118 = &CHAR_00h_0058e5ea;
    }
    else {
      iVar7 = _strnicmp(pcVar19,"syntaxCheckOff",0xe);
      if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0xe] + 1)] & 0xe0) == 0)) {
        if (_DAT_01e56418 != 0) {
          _DAT_01e56418 = 2;
        }
        local_118 = &CHAR_00h_0058e5fa;
      }
      else if (_DAT_01e56418 != 2) {
        iVar7 = _strnicmp(pcVar19,"advanceLightFilter",0x12);
        if (((((((((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0x12] + 1)] & 0xe0) == 0)) ||
                 ((iVar7 = _strnicmp
                                     (pcVar19,"createExplosion",0xf), iVar7 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar19[0xf] + 1)] & 0xe0) == 0)))) ||
                ((iVar7 = _strnicmp(pcVar19,"deleteActor",0xb),
                 iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xb] + 1)] & 0xe0) == 0)))) ||
               ((iVar7 = _strnicmp(pcVar19,"displayBitmap",0xd),
                iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] & 0xe0) == 0)))) ||
              (((((iVar7 = _strnicmp(pcVar19,"hurtCharacter",0xd)
                  , iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar7 = _strnicmp(pcVar19,"incCounter",10),
                  iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] & 0xe0) == 0)))) ||
                ((iVar7 = _strnicmp(pcVar19,"fadeSfx",7),
                 iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[7] + 1)] & 0xe0) == 0)))) ||
               ((iVar7 = _strnicmp
                                   (pcVar19,"fadeAmbientSound",0x10), iVar7 == 0 &&
                (((&DAT_005c168c)[(byte)(pcVar19[0x10] + 1)] & 0xe0) == 0)))))) ||
             ((((iVar7 = _strnicmp(pcVar19,"flagOn",6),
                iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[6] + 1)] & 0xe0) == 0)) ||
               ((iVar7 = _strnicmp(pcVar19,"flagOff",7),
                iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[7] + 1)] & 0xe0) == 0)))) ||
              ((((iVar7 = _strnicmp(pcVar19,"gameFlagOn",10),
                 iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] & 0xe0) == 0)) ||
                ((iVar7 = _strnicmp(pcVar19,"gameFlagOff",0xb),
                 iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xb] + 1)] & 0xe0) == 0)))) ||
               ((((iVar7 = _strnicmp(pcVar19,"killCharacter",0xd)
                  , iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar7 = _strnicmp(pcVar19,"killHero",8),
                  iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[8] + 1)] & 0xe0) == 0)))) ||
                ((iVar7 = _strnicmp(pcVar19,"killSfx",7),
                 iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[7] + 1)] & 0xe0) == 0)))))))))) ||
            ((iVar7 = _strnicmp(pcVar19,"lightning",9),
             iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[9] + 1)] & 0xe0) == 0)))) ||
           ((((iVar7 = _strnicmp(pcVar19,"playSfx",7), iVar7 == 0
              && (((&DAT_005c168c)[(byte)(pcVar19[7] + 1)] & 0xe0) == 0)) ||
             ((iVar7 = _strnicmp(pcVar19,"setCameraAmbient",0x10)
              , iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0x10] + 1)] & 0xe0) == 0)))) ||
            ((((iVar7 = _strnicmp(pcVar19,"setCounter",10),
               iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] & 0xe0) == 0)) ||
              (((iVar7 = _strnicmp(pcVar19,"setGroupAmbient",0xf)
                , iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xf] + 1)] & 0xe0) == 0)) ||
               ((((iVar7 = _strnicmp
                                     (pcVar19,"setLightFilterFrame",0x13), iVar7 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar19[0x13] + 1)] & 0xe0) == 0)) ||
                 ((iVar7 = _strnicmp(pcVar19,"setLeverState",0xd)
                  , iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] & 0xe0) == 0)))) ||
                ((iVar7 = _strnicmp(pcVar19,"setModelState",0xd),
                 iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] & 0xe0) == 0)))))))) ||
             (((iVar7 = _strnicmp(pcVar19,"setTimer",8),
               iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[8] + 1)] & 0xe0) == 0)) ||
              (((((iVar7 = _strnicmp(pcVar19,"setWeather",10),
                  iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] & 0xe0) == 0)) ||
                 ((iVar7 = _strnicmp(pcVar19,"shakeScreen",0xb),
                  iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[0xb] + 1)] & 0xe0) == 0)))) ||
                ((iVar7 = _strnicmp
                                    (pcVar19,"slamModelToMotion",0x11), iVar7 == 0 &&
                 (((&DAT_005c168c)[(byte)(pcVar19[0x11] + 1)] & 0xe0) == 0)))) ||
               ((iVar7 = _strnicmp(pcVar19,"warpTo",6),
                iVar7 == 0 && (((&DAT_005c168c)[(byte)(pcVar19[6] + 1)] & 0xe0) == 0)))))))))))) {
          if (_DAT_01e56418 == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,pcVar19);
          }
          else {
            pcVar19 = core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(0x01C03A10,pcVar19);
            if (pcVar19 != (char *)0x0) goto LAB_0050064d;
          }
          local_118 = &CHAR_00h_0058e756;
        }
        else {
          iVar7 = _strnicmp(pcVar19,"addItemToInventory",0x12);
          if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0x12] + 1)] & 0xe0) == 0)) {
            local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 0x12);
            local_e8 = -1;
            sscanf(local_118," ( %[^,], %[^)])%n",local_e1c,local_27e4,&local_e8);
            if (local_e8 < 3) {
              _sprintf(&DAT_01e56420,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_118 = local_118 + local_e8;
            core_script_cpp_trimString_FUN_004fe000(local_e1c);
            core_script_cpp_trimString_FUN_004fe000(local_27e4);
            pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                (local_e1c,g_CHeroActorType_01cae0ec.name_hash,
                                 &g_CHeroActorType_01cae0ec);
            if ((pCVar16 == (CDemonActor *)0x0) ||
               (pCVar14 = core_script_cpp_getActor_FUN_004fe180
                                    (local_27e4,g_CDemonActorActorType_00763e48.name_hash,
                                     &g_CDemonActorActorType_00763e48),
               pCVar14 == (CDemonActor *)0x0)) goto joined_r0x00500ad6;
            if (_DAT_01e56418 == 0) {
              core_inv_cpp_CInventory_addItem_FUN_004bf360
                        ((CInventory *)&pCVar16[0x17e].orient_matrix.m[0].y,pCVar14,0);
            }
          }
          else {
            iVar7 = _strnicmp(pcVar19,"addLightFilter",0xe);
            if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0xe] + 1)] & 0xe0) == 0)) {
              local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 0xe);
              local_e0 = -1;
              sscanf
                        (local_118,"( %[^,], %[^,], %f )%n",local_5d4,local_3e0,&local_a0,&local_e0);
              if (local_e0 < 5) {
                _sprintf(&DAT_01e56420,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_118 = local_118 + local_e0;
              core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0
                        (0x01E57284,local_5d4,&local_110,local_100);
              if (local_110 == (C3DSLight *)0x0) {
                _sprintf(&DAT_01e56420,"Light \"%s\" does not exist",local_5d4);
                return -1;
              }
              iVar7 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",local_3e0);
              if (iVar7 < 1) {
                _sprintf(&DAT_01e56420,"Can't open filter \"%s\"",local_3e0);
                return -1;
              }
              if (_DAT_01e56418 == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_00515710(local_110,local_3e0,local_a0,0);
              }
            }
            else {
              iVar7 = _strnicmp(pcVar19,"allowEnemyAttack",0x10);
              if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0x10] + 1)] & 0xe0) == 0)) {
                local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 0x10);
                pcVar19 = core_script_cpp_parseConditionExpr_FUN_004fe140(&local_118,local_4a8);
                if (pcVar19 != (char *)0x0) {
LAB_0050064d:
                  pcVar21 = &DAT_01e56420;
                  do {
                    cVar2 = *pcVar19;
                    *pcVar21 = cVar2;
                    if (cVar2 == '\0') {
                      return -1;
                    }
                    cVar2 = pcVar19[1];
                    pcVar19 = pcVar19 + 2;
                    pcVar21[1] = cVar2;
                    pcVar21 = pcVar21 + 2;
                  } while (cVar2 != '\0');
                  return -1;
                }
                if (_DAT_01e56418 == 0) {
                  iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                    (0x01C03A10,local_4a8);
                  0x01C775EC->allow_enemy_attack_flag = iVar7;
                }
              }
              else {
                iVar7 = _strnicmp
                                  (pcVar19,"allowHeroControls",0x11);
                if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0x11] + 1)] & 0xe0) == 0)) {
                  local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 0x11);
                  pcVar19 = core_script_cpp_parseConditionExpr_FUN_004fe140(&local_118,local_b4c);
                  if (pcVar19 != (char *)0x0) goto LAB_0050064d;
                  if (_DAT_01e56418 == 0) {
                    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                      (0x01C03A10,local_b4c);
                    _DAT_01e56c24 = (uint)(iVar7 == 0);
                    0x01C775EC->allow_hero_controls_flag = _DAT_01e56c24;
                  }
                }
                else {
                  iVar7 = _strnicmp
                                    (pcVar19,"allowHeroDamage",0xf);
                  if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0xf] + 1)] & 0xe0) == 0)) {
                    local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 0xf);
                    pcVar19 = core_script_cpp_parseConditionExpr_FUN_004fe140(&local_118,local_ae8);
                    if (pcVar19 != (char *)0x0) goto LAB_0050064d;
                    if (_DAT_01e56418 == 0) {
                      iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                        (0x01C03A10,local_ae8);
                      0x01C775EC->allow_damage_flag = iVar7;
                    }
                  }
                  else {
                    iVar7 = _strnicmp
                                      (pcVar19,"attachActorToPlatform",0x15);
                    if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0x15] + 1)] & 0xe0) == 0))
                    {
                      local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 0x15);
                      local_10c = (char **)0xffffffff;
                      sscanf
                                (local_118,"(%[^,], %[^)])%n",local_190c,local_d54,&local_10c);
                      if ((int)local_10c < 2) {
                        _sprintf(&DAT_01e56420,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_118 = local_118 + (int)local_10c;
                      core_script_cpp_trimString_FUN_004fe000(local_190c);
                      core_script_cpp_trimString_FUN_004fe000(local_d54);
                      pCVar11 = (CPlatform *)
                                core_script_cpp_getActor_FUN_004fe180
                                          (local_d54,g_CPlatformActorType_01e42894.name_hash,
                                           &g_CPlatformActorType_01e42894);
                      if ((pCVar11 == (CPlatform *)0x0) ||
                         (pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                              (local_190c,g_CDemonActorActorType_00763e48.name_hash,
                                               &g_CDemonActorActorType_00763e48),
                         pCVar16 == (CDemonActor *)0x0)) goto joined_r0x00500ad6;
                      if (_DAT_01e56418 == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_004f75c0(pCVar11,pCVar16);
                      }
                    }
                    else {
                      iVar7 = _strnicmp
                                        (pcVar19,"beginFadeIn",0xb);
                      if ((iVar7 == 0) && (((&DAT_005c168c)[(byte)(pcVar19[0xb] + 1)] & 0xe0) == 0))
                      {
                        local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 0xb);
                        if (_DAT_01e56418 == 0) {
                          core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(0x01C775EC);
                        }
                      }
                      else {
                        iVar7 = _strnicmp
                                          (pcVar19,"beginFadeOut",0xc);
                        if ((iVar7 == 0) &&
                           (((&DAT_005c168c)[(byte)(pcVar19[0xc] + 1)] & 0xe0) == 0)) {
                          local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 0xc);
                          if (_DAT_01e56418 == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004a3820(0x01C775EC);
                          }
                        }
                        else {
                          iVar7 = _strnicmp
                                            (pcVar19,"breakPoint",10);
                          if ((iVar7 == 0) &&
                             (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] & 0xe0) == 0)) {
                            local_118 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar19 + 10);
                            if (_DAT_01e56418 == 0) {
                              _sprintf(local_958,"Script breakpoint reached at line %d",local_11c);
                              core_game_cpp_CGame_displayMessage_FUN_0049aa30
                                        (0x01C775EC,local_958,5.0);
                              this_ptr->script_state = 2;
                            }
                          }
                          else {
                            iVar7 = _strnicmp
                                              (pcVar19,"cancelCameraHold",0x10);
                            if ((iVar7 == 0) &&
                               (((&DAT_005c168c)[(byte)(pcVar19[0x10] + 1)] & 0xe0) == 0)) {
                              local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                    (pcVar19 + 0x10);
                              if (_DAT_01e56418 == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
                                          (0x01E57284);
                              }
                            }
                            else {
                              iVar7 = _strnicmp
                                                (pcVar19,"cancelWalkTo",0xc);
                              if ((iVar7 == 0) &&
                                 (((&DAT_005c168c)[(byte)(pcVar19[0xc] + 1)] & 0xe0) == 0)) {
                                local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                      (pcVar19 + 0xc);
                                pcVar19 = core_script_cpp_parseArgument_FUN_004fe090
                                                    (&local_118,local_2334,200);
                                if (pcVar19 != (char *)0x0) {
                                  pcVar21 = &DAT_01e56420;
                                  do {
                                    cVar2 = *pcVar19;
                                    *pcVar21 = cVar2;
                                    if (cVar2 == '\0') {
                                      return -1;
                                    }
                                    cVar2 = pcVar19[1];
                                    pcVar19 = pcVar19 + 2;
                                    pcVar21[1] = cVar2;
                                    pcVar21 = pcVar21 + 2;
                                  } while (cVar2 != '\0');
                                  return -1;
                                }
                                iVar7 = _stricmp
                                                  (local_2334,"all");
                                if (iVar7 == 0) {
                                  if (_DAT_01e56418 == 0) {
                                    iVar13 = 0;
                                    for (iVar7 = 0;
                                        iVar7 < *(int *)0x01E57284->lights[199].filter_names[0x14]
                                        ; iVar7 = iVar7 + 1) {
                                      pCVar15 = (CCharacter *)
                                                core_actor_cpp_castToClassHash_FUN_0040d890
                                                          (*(CDemonActor **)
                                                            (0x01E57284->lights[199].filter_names
                                                             [0x14] + iVar13 + 4),
                                                           g_CCharacterActorType_00765a60.name_hash)
                                      ;
                                      if (pCVar15 != (CCharacter *)0x0) {
                                        (*(((pCVar15->base).vtable._uc)->_uc).canBeAttracted)
                                                  (pCVar15,(CVector3f *)0x0);
                                      }
                                      iVar13 = iVar13 + 4;
                                    }
                                  }
                                }
                                else {
                                  pCVar15 = (CCharacter *)
                                            core_script_cpp_getActor_FUN_004fe180
                                                      (local_2334,
                                                       g_CCharacterActorType_00765a60.name_hash,
                                                       &g_CCharacterActorType_00765a60);
                                  if (pCVar15 == (CCharacter *)0x0) goto joined_r0x00500ad6;
                                  if (_DAT_01e56418 == 0) {
                                    (*(((pCVar15->base).vtable._uc)->_uc).canBeAttracted)
                                              (pCVar15,(CVector3f *)0x0);
                                  }
                                }
                              }
                              else {
                                iVar7 = _strnicmp
                                                  (pcVar19,"chainToMission",0xe);
                                if ((iVar7 == 0) &&
                                   (((&DAT_005c168c)[(byte)(pcVar19[0xe] + 1)] & 0xe0) == 0)) {
                                  local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                        (pcVar19 + 0xe);
                                  pcVar19 = core_script_cpp_parseArgument_FUN_004fe090
                                                      (&local_118,local_2e24,200);
                                  if (pcVar19 != (char *)0x0) {
                                    pcVar21 = &DAT_01e56420;
                                    do {
                                      cVar2 = *pcVar19;
                                      *pcVar21 = cVar2;
                                      if (cVar2 == '\0') {
                                        return -1;
                                      }
                                      cVar2 = pcVar19[1];
                                      pcVar19 = pcVar19 + 2;
                                      pcVar21[1] = cVar2;
                                      pcVar21 = pcVar21 + 2;
                                    } while (cVar2 != '\0');
                                    return -1;
                                  }
                                  core_script_cpp_trimString_FUN_004fe000(local_2e24);
                                  uVar17 = _DAT_01e56418;
                                  if (_DAT_01e56418 == 0) {
                                    core_mission_cpp_CDemonMission_setMissionName_FUN_004d9650
                                              (0x01CC9450,local_2e24);
                                    this_ptr->script_pause_flag = 1;
                                    local_124 = uVar17;
                                  }
                                }
                                else {
                                  iVar7 = _strnicmp
                                                    (pcVar19,"clearActorVariable",0x12);
                                  if ((iVar7 == 0) &&
                                     (((&DAT_005c168c)[(byte)(pcVar19[0x12] + 1)] & 0xe0) == 0)) {
                                    local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                          (pcVar19 + 0x12);
                                    pcVar19 = core_script_cpp_parseArgument_FUN_004fe090
                                                        (&local_118,local_3658,300);
                                    if (pcVar19 != (char *)0x0) {
LAB_00500e2e:
                                      pcVar21 = &DAT_01e56420;
                                      do {
                                        cVar2 = *pcVar19;
                                        *pcVar21 = cVar2;
                                        if (cVar2 == '\0') {
                                          return -1;
                                        }
                                        cVar2 = pcVar19[1];
                                        pcVar19 = pcVar19 + 2;
                                        pcVar21[1] = cVar2;
                                        pcVar21 = pcVar21 + 2;
                                      } while (cVar2 != '\0');
                                      return -1;
                                    }
                                    iVar7 = core_script_cpp_validateActorVariableName_FUN_004fdec0
                                                      (local_3658);
                                    if (iVar7 == 0) {
                                      return -1;
                                    }
                                    if (_DAT_01e56418 == 0) {
                                      core_event_cpp_CEventList_setActorVariable_FUN_00480950
                                                (0x01C03A10,local_3658,(CDemonActor *)0x0);
                                    }
                                  }
                                  else {
                                    iVar7 = _strnicmp
                                                      (pcVar19,"dbSay",5);
                                    if ((iVar7 == 0) &&
                                       (((&DAT_005c168c)[(byte)(pcVar19[5] + 1)] & 0xe0) == 0)) {
                                      local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 5);
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
                                      iVar7 = core_script_cpp_CScript_findDialogEntry_FUN_00505180
                                                        (this_ptr,local_570);
                                      if (iVar7 < 0) {
                                        local_104 = local_226c;
                                        local_e4 = "$";
                                        _sprintf(local_226c,"[Can't find %s in database]",
                                                   local_570);
                                        shape_edittool_cpp_CStrList_add_FUN_00473cb0
                                                  ((CStrList *)0x1e56c30,local_226c);
                                      }
                                      else {
                                        pSVar3 = this_ptr->dialog_entries;
                                        local_e4 = pSVar3[iVar7].data + 0x78;
                                        local_104 = pSVar3[iVar7].data + 0x96;
                                        pcVar21 = local_570;
                                        pcVar19 = pSVar3[iVar7].data + 0x3c;
                                        do {
                                          cVar2 = *pcVar19;
                                          *pcVar21 = cVar2;
                                          if (cVar2 == '\0') break;
                                          cVar2 = pcVar19[1];
                                          pcVar19 = pcVar19 + 2;
                                          pcVar21[1] = cVar2;
                                          pcVar21 = pcVar21 + 2;
                                        } while (cVar2 != '\0');
                                      }
                                      if ((float)this_ptr->next_cmd < 0.0) {
                                        local_14 = (float)
                                                  core_script_cpp_CScript_getDialogDuration_FUN_005049b0
                                                            (this_ptr,local_e4,local_570,local_104);
                                        this_ptr->next_cmd = (int)local_14;
                                        if ((float)this_ptr->next_cmd < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((_DAT_01e56418 == 0) &&
                                         (local_124 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00504b70
                                                            (this_ptr,(float)this_ptr->next_cmd,
                                                             time_remaining), 0 < (int)local_124)) {
                                        core_script_cpp_CScript_setSpeaker_FUN_00504bf0
                                                  (this_ptr,this_ptr->who_is_speaking);
                                      }
                                    }
                                    else {
                                      iVar7 = _strnicmp
                                                        (pcVar19,"dbStartSay",10);
                                      if ((iVar7 == 0) &&
                                         (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] & 0xe0) == 0)) {
                                        local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                              (pcVar19 + 10);
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
                                        iVar7 = core_script_cpp_CScript_findDialogEntry_FUN_00505180
                                                          (this_ptr,local_444);
                                        if (iVar7 < 0) {
                                          local_f4 = local_2654;
                                          local_f8 = "$";
                                          _sprintf(local_2654,"[Can't find %s in database]",
                                                     local_444);
                                          shape_edittool_cpp_CStrList_add_FUN_00473cb0
                                                    ((CStrList *)0x1e56c30,local_2654);
                                        }
                                        else {
                                          pSVar3 = this_ptr->dialog_entries;
                                          local_f8 = pSVar3[iVar7].data + 0x78;
                                          local_f4 = pSVar3[iVar7].data + 0x96;
                                          pcVar21 = local_444;
                                          pcVar19 = pSVar3[iVar7].data + 0x3c;
                                          do {
                                            cVar2 = *pcVar19;
                                            *pcVar21 = cVar2;
                                            if (cVar2 == '\0') break;
                                            cVar2 = pcVar19[1];
                                            pcVar19 = pcVar19 + 2;
                                            pcVar21[1] = cVar2;
                                            pcVar21 = pcVar21 + 2;
                                          } while (cVar2 != '\0');
                                        }
                                        local_14 = (float)
                                                  core_script_cpp_CScript_getDialogDuration_FUN_005049b0
                                                            (this_ptr,local_f8,local_444,local_f4);
                                        this_ptr->next_cmd = (int)local_14;
                                        fVar9 = (float)this_ptr->next_cmd;
joined_r0x00504194:
                                        if (fVar9 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar7 = _strnicmp
                                                          (pcVar19,"debug",5);
                                        if ((iVar7 == 0) &&
                                           (((&DAT_005c168c)[(byte)(pcVar19[5] + 1)] & 0xe0) == 0))
                                        {
                                          local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                                (pcVar19 + 5);
                                          pcVar19 = core_script_cpp_parseArgument_FUN_004fe090
                                                              (&local_118,local_3784,300);
                                          if (pcVar19 != (char *)0x0) goto LAB_00500e2e;
                                          if (_DAT_01e56418 == 0) {
                                            shape_edittool_cpp_FUN_0046fe60
                                                      (0x01BCD074,
                                                       "Script debug message at line %d:\n%s",local_11c,
                                                       local_3784);
                                          }
                                        }
                                        else {
                                          iVar7 = _strnicmp
                                                            (pcVar19,"dismember",9);
                                          if ((iVar7 == 0) &&
                                             (((&DAT_005c168c)[(byte)(pcVar19[9] + 1)] & 0xe0) == 0)
                                             ) {
                                            local_118 = core_script_cpp_skipWhitespace_FUN_004fe070
                                                                  (pcVar19 + 9);
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
                                            iVar7 = core_script_cpp_parseBodyPartMask_FUN_004fe3d0
                                                              (local_f0,local_1844,local_c8c);
                                            if (iVar7 == 0) {
                                              return -1;
                                            }
                                            core_actor_cpp_CVector_ctor_FUN_0040e160(&local_148);
                                            pCVar8 = (CVector3f *)0x0;
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
                                                fVar9 = (float)
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                                            (-local_3f80,local_3f80);
                                                y = 0.0;
                                                local_14 = fVar9;
                                                local_14 = (float)
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                                            (-local_3f80,local_3f80);
                                                pCVar8 = core_script_cpp_makeVector_FUN_00505880
                                                                   (&local_154,local_14,y,fVar9);
                                                core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
                                                          (&local_188,pCVar8);
                                                pCVar8 = (CVector3f *)
                                                                                                                  
                                                  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                                            (&local_188,local_130,&local_148);
                                                core_actor_cpp_copyVector_FUN_0040e180
                                                          (&local_148,pCVar8);
                                              }
                                              pCVar8 = &local_148;
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
                                                             &(local_f0->base).orient,pCVar8,
                                                             &local_f0->base,0,0,
                                                             local_f0->blood_type);
                                              iVar13 = 0;
                                              iVar7 = 0;
                                              do {
                                                if (*(int *)((int)local_c8c + iVar13) != 0) {
                                                  core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                                                            (local_f0,local_ec,iVar7,0);
                                                }
                                                iVar7 = iVar7 + 1;
                                                iVar13 = iVar13 + 4;
                                              } while (iVar7 < 0x1e);
                                              core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40
                                                        (local_ec);
                                            }
                                          }
                                          else {
                                            iVar7 = _strnicmp
                                                              (pcVar19,"display",7);
                                            if ((iVar7 == 0) &&
                                               (((&DAT_005c168c)[(byte)(pcVar19[7] + 1)] & 0xe0) ==
                                                0)) {
                                              local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 7);
                                              pcVar19 = core_script_cpp_parseArgument_FUN_004fe090
                                                                  (&local_118,
                                                                   (char *)&this_ptr->cmd_timer,
                                                                   0x400);
                                              if (pcVar19 != (char *)0x0) {
                                                _sprintf(&DAT_01e56420,
                                                           "Error parsing message text on display statament: %s",
                                                           pcVar19);
                                                return -1;
                                              }
                                            }
                                            else {
                                              iVar7 = _strnicmp
                                                                (pcVar19,"else",4);
                                              if ((iVar7 == 0) &&
                                                 (((&DAT_005c168c)[(byte)(pcVar19[4] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 4);
                                                ppcVar6 = (char **)
                                                  core_script_cpp_CScript_skipCommands_FUN_00504c70
                                                            (this_ptr,(this_ptr->script_text).
                                                                      data_array,1);
                                                if ((int)ppcVar6 < 0) {
                                                  _sprintf(&DAT_01e56420,
                                                             "Can't skip next command after else statement on line %d",
                                                             local_11c);
                                                  return -1;
                                                }
                                                (this_ptr->script_text).data_array = ppcVar6;
                                              }
                                              else {
                                                iVar7 = _strnicmp
                                                                  (pcVar19,"enableCamera",
                                                                   0xc);
                                                if ((iVar7 == 0) &&
                                                   (((&DAT_005c168c)[(byte)(pcVar19[0xc] + 1)] &
                                                    0xe0) == 0)) {
                                                  local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xc);
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
                                                  iVar7 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                            (0x01E57284,local_307c);
                                                  if (iVar7 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Camera \"%s\" does not exist.",
                                                               local_307c);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    iVar13 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_2d5c);
                                                  core_set_cpp_FUN_0050e550
                                                            (0x01E57284,iVar7,iVar13);
                                                  }
                                                  else {
                                                    pcVar19 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                                                            (0x01C03A10,local_2d5c);
                                                  if (pcVar19 != (char *)0x0) {
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                }
                                                else {
                                                  iVar7 = _strnicmp
                                                                    (pcVar19,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0x11);
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
                                                    iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_1dbc);
                                                  core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580
                                                            (0x01E57284,local_a8,iVar7);
                                                  }
                                                  else {
                                                    pcVar19 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                                                            (0x01C03A10,local_1dbc);
                                                  if (pcVar19 != (char *)0x0) {
LAB_00501802:
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xf);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_32d4,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  iVar7 = _stricmp
                                                                    (local_1f4c,"false");
                                                  uVar10 = 0;
                                                  if (iVar7 != 0) {
                                                    iVar7 = _stricmp
                                                                      (local_1f4c,"true");
                                                    if (iVar7 == 0) {
                                                      uVar10 = 1;
                                                    }
                                                    else {
                                                      iVar7 = _stricmp
                                                                        (local_1f4c,
                                                                         "always");
                                                      if (iVar7 != 0) {
                                                        _sprintf(&DAT_01e56420,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'",local_1f4c);
                                                  return -1;
                                                  }
                                                  uVar10 = 2;
                                                  }
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    *(uint *)
                                                     (pCVar16[0x1b].create_event + 0x54) = uVar10;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"end",3);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 3);
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = _DAT_01e56418;
                                                    this_ptr->script_pause_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"fadeIn",6);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 6);
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = _DAT_01e56418;
                                                    if (0.0 <= (float)(this_ptr->script_text).vtable
                                                       ) {
                                                      uVar17 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004a3a50
                                                            (0x01C775EC);
                                                  if (uVar17 != 0) {
                                                    local_124 = 1;
                                                    0x01C775EC->allow_damage_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeIn_FUN_004a37e0
                                                              (0x01C775EC);
                                                    (this_ptr->script_text).vtable =
                                                         (CStrList_vtable *)0x3f800000;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"fadeOut",7)
                                                    ;
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 7);
                                                  uVar17 = _DAT_01e56418;
                                                  pCVar4 = 0x01C775EC;
                                                  if (_DAT_01e56418 == 0) {
                                                    0x01C775EC->allow_damage_flag = 0;
                                                    local_124 = uVar17;
                                                    if (0.0 <= (float)(this_ptr->script_text).vtable
                                                       ) {
                                                      uVar17 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004a3a50(pCVar4);
                                                  if (uVar17 != 0) {
                                                    local_124 = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeOut_FUN_004a3820
                                                              (pCVar4);
                                                    (this_ptr->script_text).vtable =
                                                         (CStrList_vtable *)0x3f800000;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"gesture",7)
                                                    ;
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 7);
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
                                                  pCVar15 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_1a9c,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if (pCVar15 == (CCharacter *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    uVar17 = 
                                                  core_charactr_cpp_CCharacter_initGesture_FUN_00429520
                                                            (pCVar15,local_19d4);
                                                  }
                                                  else {
                                                    iVar7 = 0;
                                                    pcVar19 = local_19d4;
                                                    this_ptr_00 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                                                            (&(pCVar15->model).motion_controller);
                                                  iVar7 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                                                            (this_ptr_00,pcVar19,iVar7);
                                                  uVar17 = (uint)(-1 < iVar7);
                                                  }
                                                  if (uVar17 == 0) {
                                                    pcVar19 = 
                                                  core_bugs_cpp_getDeformableModelName_FUN_00423d30
                                                            (&pCVar15->model);
                                                  _sprintf(&DAT_01e56420,
                                                             "Gesture name %s is not valid for actor %s, model %s",
                                                             local_19d4,local_1a9c,pcVar19);
                                                  return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"getIniInt",
                                                                       9);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 9);
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
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xf);
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
                                                  iVar7 = 
                                                  core_script_cpp_validateActorVariableName_FUN_004fdec0
                                                            (local_16b4);
                                                  if (iVar7 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_1b64,
                                                                       g_CTriggerActorType_02dd1084.
                                                                       name_hash,
                                                                       &g_CTriggerActorType_02dd1084
                                                                      );
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00480950
                                                            (0x01C03A10,local_16b4,
                                                             (CDemonActor *)
                                                             pCVar16[2].orient_matrix.m[2].x);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"gosub",5);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 5);
                                                  ppcVar6 = (char **)
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                                                            (this_ptr,local_118);
                                                  if ((int)ppcVar6 < 0) {
                                                    dVar1 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118));
                                                    pcVar19 = "Undefined label %s used in gosub statement on line %d";
LAB_004ff42f:
                                                    _sprintf(&DAT_01e56420,pcVar19,dVar1);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (7 < (int)this_ptr->message_duration) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Call stack overflow detected on script line %d."
                                                                 ,local_11c);
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack
                                                    [(int)this_ptr->message_duration + -2] =
                                                         (int)(this_ptr->script_text).data_array;
                                                    fVar9 = this_ptr->message_duration;
                                                    (this_ptr->script_text).data_array = ppcVar6;
                                                    this_ptr->message_duration =
                                                         (float)((int)fVar9 + 1);
                                                    local_118 = &CHAR_00h_0058ede4;
                                                  }
                                                  else {
                                                    local_118 = &CHAR_00h_0058ede4;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"goto",4);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 4);
                                                  ppcVar6 = (char **)
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                                                            (this_ptr,local_118);
                                                  if ((int)ppcVar6 < 0) {
                                                    dVar1 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118));
                                                    pcVar19 = "Undefined label %s used in goto statement on line %d";
                                                    goto LAB_004ff42f;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    (this_ptr->script_text).data_array = ppcVar6;
                                                    local_118 = &CHAR_00h_0058ee1f;
                                                  }
                                                  else {
                                                    local_118 = &CHAR_00h_0058ee1f;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"gtfo",4);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 4);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_3400,300);
                                                  if (pcVar19 != (char *)0x0) goto LAB_00501802;
                                                  if (_DAT_01e56418 == 0) {
                                                    shape_edittool_cpp_FUN_0046fcd0
                                                              (0x01BCD074,
                                                               "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                               local_11c,local_3400);
                                                    this_ptr->script_pause_flag = 1;
                                                    local_124 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xd);
                                                  pCVar8 = (CVector3f *)in_stack_ffffc058;
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
                                                  local_c0 = (CCharacter *)
                                                             core_script_cpp_getActor_FUN_004fe180
                                                                       (local_1524,
                                                                        g_CHeroActorType_01cae0ec.
                                                                        name_hash,
                                                                        &g_CHeroActorType_01cae0ec);
                                                  if (local_c0 == (CCharacter *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  local_bc = 1;
                                                  if (*local_118 == ',') {
                                                    local_118 = local_118 + 1;
                                                    uVar17 = 0xffffffff;
                                                    pcVar19 = local_118;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar2 = *pcVar19;
                                                      pcVar19 = pcVar19 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    uVar17 = ~uVar17 - 2;
                                                    local_c4 = uVar17;
                                                    if ((int)uVar17 < 1) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    pcVar19 = local_118;
                                                    pcVar21 = acStack_fad + 1;
                                                    for (uVar18 = uVar17 >> 2; uVar18 != 0;
                                                        uVar18 = uVar18 - 1) {
                                                      *(uint *)pcVar21 =
                                                           *(uint *)pcVar19;
                                                      pcVar19 = pcVar19 + (uint)bVar23 * -8 + 4;
                                                      pcVar21 = pcVar21 + (uint)bVar23 * -8 + 4;
                                                    }
                                                    for (uVar17 = uVar17 & 3; uVar17 != 0;
                                                        uVar17 = uVar17 - 1) {
                                                      *pcVar21 = *pcVar19;
                                                      pcVar19 = pcVar19 + (uint)bVar23 * -2 + 1;
                                                      pcVar21 = pcVar21 + (uint)bVar23 * -2 + 1;
                                                    }
                                                    pcVar19 = local_118 + local_c4;
                                                    acStack_fad[local_c4 + 1] = '\0';
                                                    local_118 = pcVar19;
                                                    if (_DAT_01e56418 == 0) {
                                                      local_bc = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,acStack_fad + 1);
                                                  }
                                                  else {
                                                    pcVar19 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0047dc90
                                                            (0x01C03A10,acStack_fad + 1);
                                                  if (pcVar19 != (char *)0x0) goto LAB_005021b8;
                                                  }
                                                  }
                                                  if (*local_118 != ')') {
                                                    _sprintf(&DAT_01e56420,
                                                               "Missing closing ')' in holsterWeapon command");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  if (_DAT_01e56418 == 0) {
                                                    (*(((local_c0->base).vtable._uc)->_uc).
                                                      dropCarriedObject)
                                                              (local_c0,(uint)(local_bc == 0),pCVar8
                                                              );
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"idle",4);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 4);
                                                  local_114 = (this_ptr->script_text).data_array;
                                                  local_124 = 0;
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"if",2);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[2] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 2);
                                                  pcVar19 = 
                                                  core_script_cpp_parseConditionExpr_FUN_004fe140
                                                            (&local_118,local_8f4);
                                                  if (pcVar19 != (char *)0x0) goto LAB_005021b8;
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_8f4), iVar7 == 0)) {
                                                    ppcVar6 = (char **)
                                                  core_script_cpp_CScript_skipCommands_FUN_00504c70
                                                            (this_ptr,(this_ptr->script_text).
                                                                      data_array,0);
                                                  if ((int)ppcVar6 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Can't skip next command after if statement on line %d",
                                                               local_11c);
                                                    return -1;
                                                  }
                                                  iVar7 = _strnicmp
                                                                    (*(char **)(this_ptr->
                                                                                xref_entries->name +
                                                                               (int)ppcVar6 * 8 + 4)
                                                                     ,"else",4);
                                                  if (iVar7 == 0) {
                                                    ppcVar6 = (char **)((int)ppcVar6 + 1);
                                                  }
                                                  (this_ptr->script_text).data_array = ppcVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "finishedAct",0xb);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xb);
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_118," ( )%n",&local_18);
                                                  uVar17 = _DAT_01e56418;
                                                  pCVar4 = 0x01C775EC;
                                                  if (local_18 < 2) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing finishedAct command");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_18;
                                                  if (_DAT_01e56418 == 0) {
                                                    this_ptr->script_pause_flag = 1;
                                                    local_124 = uVar17;
                                                    pCVar4->act_completion_state = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"letterbox",
                                                                       9);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 9);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_890,100);
                                                  if (pcVar19 != (char *)0x0) {
LAB_005021b8:
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  iVar13 = -1;
                                                  iVar7 = _stricmp
                                                                    (local_890,"false");
                                                  if (iVar7 == 0) {
                                                    iVar13 = 0;
                                                  }
                                                  iVar7 = _stricmp
                                                                    (local_890,"true");
                                                  if (iVar7 == 0) {
                                                    iVar13 = 1;
                                                  }
                                                  iVar7 = _stricmp
                                                                    (local_890,"bottom");
                                                  pCVar4 = 0x01C775EC;
                                                  if (iVar7 == 0) {
                                                    iVar13 = 2;
                                                  }
                                                  else if (iVar13 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Invalid letterBox mode: %s",
                                                               local_890);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    0x01C775EC->letterbox_mode = iVar13;
                                                    pCVar4->allow_damage_flag = (uint)(iVar13 == 0);
                                                    pCVar4->allow_enemy_attack_flag =
                                                         (uint)(pCVar4->letterbox_mode == 0);
                                                    pCVar4->allow_hero_controls_flag =
                                                         pCVar4->letterbox_mode;
                                                    this_ptr->current_message[0x3fc] = -1;
                                                    pCVar5 = 0x01E57284;
                                                    this_ptr->current_message[0x3fd] = -1;
                                                    this_ptr->current_message[0x3fe] = -1;
                                                    this_ptr->current_message[0x3ff] = -1;
                                                    _DAT_01e56c24 = 1;
                                                    if ((pCVar4->goggles_active != 0) &&
                                                       (pCVar4->letterbox_mode != 0)) {
                                                      pCVar4->goggles_active = 0;
                                                      iVar7 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_00481920
                                                            (pCVar5);
                                                  core_setdir_cpp_FUN_005125a0
                                                            (0x01E57284,
                                                             *(uint *)(0x01E56DA0 + 0xc),1);
                                                  pCVar5 = 0x01E57284;
                                                  *(uint *)(0x01E56DA0 + 0x10) = 0;
                                                  iVar13 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_00481920
                                                            (pCVar5);
                                                  if (iVar7 == iVar13) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                                                            (0x01E57284,iVar13);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xe);
                                                  pcVar19 = 
                                                  core_script_cpp_parseConditionExpr_FUN_004fe140
                                                            (&local_118,local_2b4);
                                                  if (pcVar19 != (char *)0x0) goto LAB_005021b8;
                                                  if (_DAT_01e56418 == 0) {
                                                    iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_2b4);
                                                  this_ptr->focus_actor_locked = iVar7;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"lookAt",6);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 6);
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
                                                  pCVar15 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_1394,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if (pCVar15 == (CCharacter *)0x0) {
joined_r0x00500ad6:
                                                    if (_DAT_01e56c2c == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_004ff384;
                                                  }
                                                  pCVar16 = (CDemonActor *)0x0;
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
                                                    pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                        (local_2fb4,
                                                                                                                                                  
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  &g_CDemonActorActorType_00763e48);
                                                  if (pCVar16 == (CDemonActor *)0x0)
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
                                                            (pCVar15,pCVar16);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "movePlatform",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xc);
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
                                                  pCVar11 = (CPlatform *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_177c,
                                                                       g_CPlatformActorType_01e42894
                                                                       .name_hash,
                                                                       &
                                                  g_CPlatformActorType_01e42894);
                                                  if (pCVar11 == (CPlatform *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if ((local_3f70 < 0.0) || (1.0 < local_3f70)) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  dVar1 = (double)local_3f7c;
                                                  if (dVar1 <= 0.0) {
                                                    pcVar19 = "Invalid movement rate %f";
                                                    goto LAB_004ff42f;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                                                            (pCVar11,local_3f70,local_3f7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"openDoor",8
                                                                      );
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 8);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_3144,
                                                                       g_CDoorActorType_01af4e9c.
                                                                       name_hash,
                                                                       &g_CDoorActorType_01af4e9c);
                                                  if ((pCVar16 == (CDemonActor *)0x0) ||
                                                     (pCVar15 = (CCharacter *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_28ac,
                                                             g_CCharacterActorType_00765a60.
                                                             name_hash,
                                                             &g_CCharacterActorType_00765a60),
                                                  pCVar15 == (CCharacter *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = _DAT_01e56418;
                                                    if (0.0 <= (float)(this_ptr->script_text).vtable
                                                       ) {
                                                      iVar7 = (*(((pCVar15->base).vtable._uc)->_uc).
                                                                processDamage)(pCVar15,(SDamageInfo
                                                                                        *)
                                                  in_stack_ffffc058);
                                                  if (iVar7 != 0) {
                                                    local_11c = 1;
                                                  }
                                                  }
                                                  else {
                                                    (*(((pCVar15->base).vtable._uc)->_uc).
                                                      checkCylinderCollisionWorld)
                                                              (pCVar15,(CVector3f *)pCVar16,
                                                               (float)(SDamageInfo *)
                                                                      in_stack_ffffc058,
                                                               (SDamageInfo *)
                                                               ((ulonglong)in_stack_ffffc058 >> 0x20
                                                               ));
                                                    (this_ptr->script_text).vtable =
                                                         (CStrList_vtable *)0x3f800000;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "pressButton",0xb);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xb);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_250,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  piVar12 = 
                                                  core_script_cpp_getActionState_FUN_004fe300
                                                            ((SPlayerActionState *)
                                                             &pCVar16[0x8f].platform_position_delta.
                                                              y,local_50c);
                                                  if (piVar12 == (int *)0x0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Invalid button name: %s",
                                                               local_50c);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (_DAT_01e56c24 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
                                                            (0x01C775EC);
                                                  _DAT_01e56c24 = 0;
                                                  }
                                                  *piVar12 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"raise",5);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 5);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_1ec,100);
                                                  if (pcVar19 != (char *)0x0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing event expression on raise statament: %s",
                                                               pcVar19);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                                                            (0x01C03A10,local_1ec);
                                                  }
                                                  else {
                                                    pcVar19 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_0047dcd0
                                                            (0x01C03A10,local_1ec);
                                                  if (pcVar19 != (char *)0x0) {
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "releaseButton",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xd);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_bb0,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  piVar12 = 
                                                  core_script_cpp_getActionState_FUN_004fe300
                                                            ((SPlayerActionState *)
                                                             &pCVar16[0x8f].platform_position_delta.
                                                              y,local_c14);
                                                  uVar17 = _DAT_01e56418;
                                                  if (piVar12 == (int *)0x0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Invalid button name: %s",
                                                               local_c14);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (_DAT_01e56c24 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
                                                            (0x01C775EC);
                                                  _DAT_01e56c24 = uVar17;
                                                  }
                                                  *piVar12 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0x1b] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0x1b);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_271c,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004bef10
                                                              ((CInventory *)
                                                               &pCVar16[0x17e].orient_matrix.m[0].y)
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0x17] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0x17);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_20dc,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (pCVar14 = 
                                                  core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                                                            ((CInventory *)
                                                             (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8
                                                                      ) + 0x1f5a0),local_2014),
                                                  pCVar14 != (CDemonActor *)0x0)) {
                                                    core_inv_cpp_CInventory_removeItem_FUN_004c07b0
                                                              ((CInventory *)
                                                               &pCVar16[0x17e].orient_matrix.m[0].y,
                                                               pCVar14,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"removeKeys"
                                                                       ,10);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 10);
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
                                                  if (*0x01CEA280 != 0) {
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
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"return",6);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 6);
                                                  if (_DAT_01e56418 == 0) {
                                                    fVar9 = this_ptr->message_duration;
                                                    if ((int)fVar9 < 1) {
                                                      _sprintf(&DAT_01e56420,
                                                                 "Return without gosub detected on script line %d."
                                                                 ,local_11c);
                                                      return -1;
                                                    }
                                                    this_ptr->message_duration =
                                                         (float)((int)fVar9 + -1);
                                                    (this_ptr->script_text).data_array =
                                                         (char **)this_ptr->call_stack
                                                                  [(int)fVar9 + -3];
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "rollCredits",0xb);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xb);
                                                  local_88 = -1;
                                                  sscanf
                                                            (local_118," ( )%n",&local_88);
                                                  uVar17 = _DAT_01e56418;
                                                  pCVar4 = 0x01C775EC;
                                                  if (local_88 < 2) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_118 = local_118 + local_88;
                                                  if (_DAT_01e56418 == 0) {
                                                    this_ptr->script_pause_flag = 1;
                                                    local_124 = uVar17;
                                                    pCVar4->act_completion_state = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"say",3);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 3);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_3978,500);
                                                  if (pcVar19 != (char *)0x0) {
LAB_00503106:
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
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
                                                  if ((float)this_ptr->next_cmd < 0.0) {
                                                    pcVar19 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (local_3978 + local_84);
                                                  local_14 = (float)
                                                  core_script_cpp_CScript_getDialogDuration_FUN_005049b0
                                                            (this_ptr,local_2eec,local_12cc,pcVar19)
                                                  ;
                                                  this_ptr->next_cmd = (int)local_14;
                                                  if ((float)this_ptr->next_cmd < 0.0) {
                                                    return -1;
                                                  }
                                                  }
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (local_124 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00504b70
                                                            (this_ptr,(float)this_ptr->next_cmd,
                                                             time_remaining), 0 < (int)local_124)) {
                                                    core_script_cpp_CScript_setSpeaker_FUN_00504bf0
                                                              (this_ptr,this_ptr->who_is_speaking);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "selectWeapon",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xc);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_700,
                                                                       g_CHeroActorType_01cae0ec.
                                                                       name_hash,
                                                                       &g_CHeroActorType_01cae0ec);
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    pfVar22 = &pCVar16[0x17e].orient_matrix.m[0].y;
                                                    local_7c = _DAT_01e56418;
                                                    actor_ptr = 
                                                  core_gabriela_cpp_getSelectedWeapon_FUN_0049a160
                                                            ((CInventory *)pfVar22);
                                                  local_78 = actor_ptr;
                                                  if (actor_ptr != (CWeapon *)0x0) {
                                                    do {
                                                      if (actor_ptr == (CWeapon *)0x0) {
                                                        PTR_01cc4800 = "..\\core\\script.cpp";
                                                        INT_01cc4804 = 0xad9;
                                                        core_main_c_FUN_004c8440
                                                                  (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0
                                                                    (&actor_ptr->base,local_69c);
                                                  if (iVar7 != 0) goto LAB_004ff36b;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
                                                            ((CInventory *)pfVar22,
                                                             (CDemonActor *)0x0,5,1);
                                                  actor_ptr = 
                                                  core_gabriela_cpp_getSelectedWeapon_FUN_0049a160
                                                            ((CInventory *)pfVar22);
                                                  } while (actor_ptr != local_78);
                                                  }
                                                  if (local_7c == 0) {
                                                    engine_console_cpp_CConsole_printf_FUN_0043ac60
                                                              (PTR_DAT_005ad350,
                                                               "%s can't selectWeapon(%s)\n",
                                                               local_700,local_69c);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setActorVariable",0x10);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0x10);
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
                                                  iVar7 = 
                                                  core_script_cpp_validateActorVariableName_FUN_004fdec0
                                                            (local_258c);
                                                  if (iVar7 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_24c4,
                                                                                                                                              
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  &g_CDemonActorActorType_00763e48);
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00480950
                                                            (0x01C03A10,local_258c,pCVar16);
                                                  }
                                                  else if ((pCVar16 == (CDemonActor *)0x0) &&
                                                          (_DAT_01e56c2c == 0)) {
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xf);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_37c,100);
                                                  if (pcVar19 != (char *)0x0) goto LAB_00503106;
                                                  if (_DAT_01e56418 == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0
                                                            (0x02DC9450,local_37c);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xe);
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
                                                  iVar7 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                            (0x01E57284,local_2b04);
                                                  if (iVar7 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Camera \"%s\" does not exist.",
                                                               local_2b04);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    *(uint *)
                                                     ((int)&DAT_005be368->cameras[0].rotation_matrix
                                                     + iVar7 * 0x1a0 + 0x30) = local_70;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0x12);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_23fc,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    *(float *)(pCVar16[0x1b].create_event + 0x4c) =
                                                         *(float *)(pCVar16[0x1b].create_event +
                                                                   0x50) * local_68;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setFocusActor",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xd);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_9bc,100);
                                                  if (pcVar19 != (char *)0x0) {
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_9bc,
                                                                                                                                              
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  &g_CDemonActorActorType_00763e48);
                                                  if (pCVar16 == (CDemonActor *)0x0)
                                                  goto joined_r0x00500ad6;
                                                  if (pCVar16 != this_ptr->focus_actor) {
                                                    this_ptr->focus_actor_changed = 1;
                                                    this_ptr->focus_actor = pCVar16;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setHeroTask",0xb);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xb);
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
                                                  iVar13 = _stricmp
                                                                     (local_82c,"stand");
                                                  iVar7 = 0;
                                                  if (iVar13 != 0) {
                                                    iVar7 = _stricmp
                                                                      (local_82c,"follow");
                                                    if (iVar7 == 0) {
                                                      iVar7 = 1;
                                                    }
                                                    else {
                                                      iVar7 = _stricmp
                                                                        (local_82c,"kill");
                                                      if (iVar7 == 0) {
                                                        iVar7 = 2;
                                                      }
                                                      else {
                                                        iVar7 = _stricmp
                                                                          (local_82c,
                                                                           "guard");
                                                        if (iVar7 == 0) {
                                                          iVar7 = 3;
                                                        }
                                                        else {
                                                          iVar7 = _stricmp
                                                                            (local_82c,
                                                                             "suspend");
                                                          if (iVar7 != 0) {
                                                            _sprintf(&DAT_01e56420,
                                                                       "Invalid Task: %s",
                                                                       local_82c);
                                                            return -1;
                                                          }
                                                          iVar7 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    core_hero_cpp_CHero_setAiTask_FUN_004b5cd0
                                                              (this_ptr_01,iVar7);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"setIniInt",
                                                                       9);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 9);
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
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0x12);
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
                                                  local_4c = 0xbf800000;
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
                                                    *(uint *)
                                                     (this_ptr->current_message + 0x3f8) = local_4c;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xc);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_764,100);
                                                  if (pcVar19 != (char *)0x0) {
LAB_00503b62:
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  iVar7 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                                                            (this_ptr,local_764);
                                                  if (iVar7 < 0) {
                                                    _sprintf(&DAT_01e56420,
                                                               "Undefined label '%s'",
                                                               local_764);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    *(int *)(this_ptr->current_message + 0x3fc) =
                                                         iVar7;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 10);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_a20,100);
                                                  if (pcVar19 != (char *)0x0) goto LAB_00503b62;
                                                  if (local_a20[0] == '\0') {
                                                    this_ptr->who_is_speaking = (CDemonActor *)0x0;
                                                  }
                                                  else {
                                                    pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                        (local_a20,
                                                                                                                                                  
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  this_ptr->who_is_speaking = pCVar16;
                                                  if (pCVar16 == (CDemonActor *)0x0)
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
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xd);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_318,100);
                                                  if (pcVar19 != (char *)0x0) {
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
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
                                                    0x01C775EC->time_scale_factor = local_3f74;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"setVictim",
                                                                       9);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 9);
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
                                                  pCVar16 = (CDemonActor *)0x0;
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
                                                    iVar7 = _stricmp
                                                                      (local_1204,"disable"
                                                                      );
                                                    pCVar16 = 0xFFFFFFFF;
                                                    if ((iVar7 != 0) &&
                                                       (pCVar16 = 
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_1204,
                                                             g_CCharacterActorType_00765a60.
                                                             name_hash,
                                                             &g_CCharacterActorType_00765a60),
                                                  pCVar16 == (CDemonActor *)0x0))
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
                                                              (this_ptr_02,pCVar16);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"snapToFace"
                                                                       ,10);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 10);
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
                                                  pCVar16 = core_script_cpp_getActor_FUN_004fe180
                                                                      (local_2c94,
                                                                                                                                              
                                                  g_CDemonActorActorType_00763e48.name_hash,
                                                  &g_CDemonActorActorType_00763e48);
                                                  if ((pCVar16 == (CDemonActor *)0x0) ||
                                                     (pCVar14 = 
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_1c2c,
                                                             g_CDemonActorActorType_00763e48.
                                                             name_hash,
                                                             &g_CDemonActorActorType_00763e48),
                                                  pCVar14 == (CDemonActor *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    core_bodypart_cpp_subtractVector_FUN_00417f90
                                                              (&(pCVar14->location).position,
                                                               &local_13c,
                                                               &(pCVar16->location).position);
                                                    iVar7 = 
                                                  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                                            (local_160,&local_13c);
                                                  (pCVar16->orient).vec.y = *(float *)(iVar7 + 4);
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
                                                            (pCVar16);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"startSay",8
                                                                      );
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 8);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_3b6c,500);
                                                  if (pcVar19 != (char *)0x0) {
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
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
                                                  pcVar19 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (local_3b6c + local_38);
                                                  local_14 = (float)
                                                  core_script_cpp_CScript_getDialogDuration_FUN_005049b0
                                                            (this_ptr,local_15ec,local_21a4,pcVar19)
                                                  ;
                                                  this_ptr->next_cmd = (int)local_14;
                                                  fVar9 = (float)this_ptr->next_cmd;
                                                  goto joined_r0x00504194;
                                                  }
                                                  iVar7 = _strnicmp
                                                                    (pcVar19,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xc);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_ee4,200);
                                                  if (pcVar19 != (char *)0x0) {
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  pcVar19 = local_ee4;
                                                  do {
                                                    pcVar21 = pcVar19;
                                                    if (*pcVar19 == ',') goto LAB_0050421a;
                                                    if (*pcVar19 == '\0') break;
                                                    pcVar21 = pcVar19 + 1;
                                                    if (*pcVar21 == ',') goto LAB_0050421a;
                                                    pcVar19 = pcVar19 + 2;
                                                  } while (*pcVar21 != '\0');
                                                  pcVar21 = (char *)0x0;
LAB_0050421a:
                                                  pcVar20 = ",";
                                                  local_b8 = (uint)(pcVar21 != (char *)0x0);
                                                  local_34 = -1;
                                                  iVar7 = -1;
                                                  pcVar19 = local_ee4;
                                                  do {
                                                    pcVar21 = pcVar19;
                                                    if (iVar7 == 0) break;
                                                    iVar7 = iVar7 + -1;
                                                    pcVar21 = pcVar19 + (uint)bVar23 * -2 + 1;
                                                    cVar2 = *pcVar19;
                                                    pcVar19 = pcVar21;
                                                  } while (cVar2 != '\0');
                                                  pcVar21 = pcVar21 + -1;
                                                  do {
                                                    cVar2 = *pcVar20;
                                                    *pcVar21 = cVar2;
                                                    if (cVar2 == '\0') break;
                                                    cVar2 = pcVar20[1];
                                                    pcVar20 = pcVar20 + 2;
                                                    pcVar21[1] = cVar2;
                                                    pcVar21 = pcVar21 + 2;
                                                  } while (cVar2 != '\0');
                                                  sscanf
                                                            (local_ee4,"%[^,],%n",local_7c8,
                                                             &local_34);
                                                  if (local_34 < 1) {
                                                    pcVar19 = "Error parsing out camera name";
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_004fe000(local_7c8)
                                                  ;
                                                  iVar7 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                                                            (0x01E57284,local_7c8);
                                                  if (iVar7 < 0) {
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
                                                            (0x01E57284,iVar7,local_3f78);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,
                                                  "timedDisplay",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar19[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 0xc);
                                                  pcVar19 = 
                                                  core_script_cpp_parseArgument_FUN_004fe090
                                                            (&local_118,local_352c,300);
                                                  if (pcVar19 != (char *)0x0) {
LAB_005043d6:
                                                    pcVar21 = &DAT_01e56420;
                                                    do {
                                                      cVar2 = *pcVar19;
                                                      *pcVar21 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar19[1];
                                                      pcVar19 = pcVar19 + 2;
                                                      pcVar21[1] = cVar2;
                                                      pcVar21 = pcVar21 + 2;
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
                                                    pcVar19 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (local_352c + local_30);
                                                  pfVar22 = &this_ptr->cmd_timer;
                                                  do {
                                                    cVar2 = *pcVar19;
                                                    *(char *)pfVar22 = cVar2;
                                                    if (cVar2 == '\0') break;
                                                    cVar2 = pcVar19[1];
                                                    pcVar19 = pcVar19 + 2;
                                                    *(char *)((int)pfVar22 + 1) = cVar2;
                                                    pfVar22 = (float *)((int)pfVar22 + 2);
                                                  } while (cVar2 != '\0');
                                                  local_124 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00504b70
                                                            (this_ptr,local_2c,time_remaining);
                                                  if (0 < (int)local_124) {
                                                    *(byte *)&this_ptr->cmd_timer = 0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"turnToFace"
                                                                       ,10);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 10);
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
                                                  pCVar15 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_320c,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if ((pCVar15 == (CCharacter *)0x0) ||
                                                     (pCVar16 = 
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_2974,
                                                             g_CDemonActorActorType_00763e48.
                                                             name_hash,
                                                             &g_CDemonActorActorType_00763e48),
                                                  pCVar16 == (CDemonActor *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    (*(((pCVar15->base).vtable._uc)->_uc).
                                                      getPartDominantBone)(pCVar15,(int)pCVar16);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"wait",4);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 4);
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
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"waitFor",7)
                                                    ;
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar19[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 7);
                                                  pcVar19 = 
                                                  core_script_cpp_parseConditionExpr_FUN_004fe140
                                                            (&local_118,local_a84);
                                                  if (pcVar19 != (char *)0x0) goto LAB_005043d6;
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                                            (0x01C03A10,local_a84), iVar7 == 0)) {
                                                    local_124 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar19,"walkTo",6);
                                                    dVar1 = __BITCAST_DOUBLE(CONCAT44(pcVar19,local_11c));
                                                    if ((iVar7 != 0) ||
                                                       (((&DAT_005c168c)[(byte)(pcVar19[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      pcVar19 = "Unknown command on line %d: %s";
                                                      goto LAB_004ff42f;
                                                    }
                                                    local_118 = 
                                                  core_script_cpp_skipWhitespace_FUN_004fe070
                                                            (pcVar19 + 6);
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
                                                  local_120 = 0;
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
                                                  local_1c = 0x501502f9;
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
                                                  pCVar15 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_004fe180
                                                                      (local_2a3c,
                                                                                                                                              
                                                  g_CCharacterActorType_00765a60.name_hash,
                                                  &g_CCharacterActorType_00765a60);
                                                  if ((pCVar15 == (CCharacter *)0x0) ||
                                                     (pCVar16 = 
                                                  core_script_cpp_getActor_FUN_004fe180
                                                            (local_113c,
                                                             g_CDemonActorActorType_00763e48.
                                                             name_hash,
                                                             &g_CDemonActorActorType_00763e48),
                                                  pCVar16 == (CDemonActor *)0x0))
                                                  goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    (*(((pCVar15->base).vtable._uc)->_uc).
                                                      canBeAttracted)(pCVar15,(CVector3f *)pCVar16);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  if ((_DAT_01e56418 != 2) && ((char)local_110->light_type != '\0')) {
    _sprintf(&DAT_01e56420,"Extra characters \"%s\" on line %d",local_110,local_114);
    return -1;
  }
LAB_004ff384:
  if (local_11c == 1) {
    this_ptr->next_cmd = -0x40800000;
    uVar17 = _DAT_01e56418;
    (this_ptr->script_text).vtable = (CStrList_vtable *)0xbf800000;
    if ((uVar17 == 0) && (this_ptr->xref_count <= (int)(this_ptr->script_text).data_array)) {
      _sprintf(&DAT_01e56420,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_11c) {
    (this_ptr->script_text).data_array = local_10c;
    return local_11c;
  }
  return local_11c;
}
