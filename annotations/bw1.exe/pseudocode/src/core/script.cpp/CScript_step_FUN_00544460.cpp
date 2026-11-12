// Name: core_script.cpp_CScript_step_FUN_00544460
// Address: 00544460
// Address Range: [[00544460, 0054aa5c]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_step_FUN_00544460(CScript *this_ptr,float *time_remaining)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00549c96) */
/* WARNING: Removing unreachable block (ram,0x00549ca5) */
/* WARNING: Removing unreachable block (ram,0x00549cb3) */
/* WARNING: Removing unreachable block (ram,0x00549cfc) */
/* WARNING: Removing unreachable block (ram,0x00549cbd) */
/* WARNING: Removing unreachable block (ram,0x00549cc8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_CScript_step_FUN_00544460(CScript *this_ptr,float *time_remaining)

{
  int *piVar1;
  CInventory *this_ptr_00;
  float fVar2;
  char cVar3;
  SDialogEntry *pSVar4;
  CGame *pCVar5;
  CDemonSet *pCVar6;
  int iVar7;
  CVector3f *initial_velocity;
  float fVar8;
  uint uVar9;
  CMotionList *this_ptr_01;
  CCharacter *pCVar10;
  CPlatform *pCVar11;
  uint *puVar12;
  int iVar13;
  CHero *this_ptr_02;
  CEnemy *this_ptr_03;
  CDemonActor *pCVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  float *pfVar21;
  byte bVar22;
  float local_4938;
  float local_492c;
  float local_4928;
  CIniFile local_4924;
  CIniFile local_4720;
  char local_451c [500];
  char local_4328 [500];
  char local_4134 [300];
  char local_4008 [300];
  char local_3edc [300];
  char local_3db0 [260];
  char local_3cac [256];
  char local_3bac [256];
  char local_3aac [256];
  int local_39ac [60];
  char local_38bc [200];
  char local_37f4 [200];
  char local_372c [200];
  char local_3664 [200];
  char local_359c [200];
  char local_34d4 [200];
  char local_340c [200];
  char local_3344 [200];
  char local_327c [200];
  char local_31b4 [200];
  char local_30ec [200];
  char local_3024 [200];
  char local_2f5c [200];
  char local_2e94 [200];
  char local_2dcc [200];
  char local_2d04 [200];
  char local_2c3c [200];
  char local_2b74 [200];
  char local_2aac [200];
  char local_29e4 [200];
  char local_291c [200];
  char local_2854 [200];
  char local_278c [200];
  char local_26c4 [200];
  char local_25fc [200];
  char local_2534 [200];
  char local_246c [198];
  char acStack_23a6 [202];
  char local_22dc [200];
  char local_2214 [200];
  char local_214c [200];
  char local_2084 [200];
  char local_1fbc [200];
  char local_1ef4 [200];
  char local_1e2c [200];
  char local_1d64 [200];
  char local_1c9c [200];
  char local_1bd4 [200];
  char local_1b0c [200];
  char local_1a44 [200];
  char local_197c [200];
  char local_18b4 [200];
  char local_17ec [200];
  char local_1724 [200];
  char local_165c [200];
  char local_1594 [200];
  char local_14cc [200];
  char local_1404 [200];
  char local_133c [200];
  char local_1274 [168];
  float afStack_11cc [8];
  char local_11ac [4];
  float afStack_11a8 [49];
  char local_10e4 [200];
  char local_101c [200];
  char local_f54 [200];
  char local_e8c [200];
  char local_dc4 [200];
  char local_cfc [100];
  char local_c98 [100];
  char local_c34 [100];
  char local_bd0 [100];
  char local_b6c [100];
  char local_b08 [100];
  char local_aa4 [100];
  char local_a40 [100];
  char local_9dc [100];
  char local_978 [100];
  char local_914 [100];
  char local_8b0 [100];
  char local_84c [100];
  char local_7e8 [100];
  char local_784 [100];
  char local_720 [100];
  char local_6bc [100];
  char local_658 [100];
  char local_5f4 [100];
  char local_590 [100];
  char local_52c [100];
  char local_4c8 [100];
  char local_464 [100];
  char local_400 [100];
  char local_39c [100];
  char local_338 [100];
  char local_2d4 [100];
  char local_270 [100];
  CMatrix3x3f local_20c;
  uint local_1e4;
  float afStack_1e0 [5];
  uint local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1b4 [3];
  CVector3f local_1a8;
  CVector3f local_19c;
  uint local_190;
  float afStack_18c [5];
  uint local_178;
  int local_174;
  int local_170;
  C3DSLight *local_16c;
  int local_168;
  uint local_164;
  int local_160;
  int local_15c;
  char *local_158;
  char *local_154;
  int local_150;
  uint local_14c;
  char *local_148;
  char *local_144;
  int local_140;
  float local_13c;
  int local_138;
  int local_134;
  CCharacter *local_130;
  CBodyPart *local_12c;
  int local_128;
  int local_124;
  int local_120;
  CDemonLight *local_11c;
  char *local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  uint local_104;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
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
  uint local_b4;
  CDemonActor *local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  CDemonActor *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  char *local_34;
  char *local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  float local_14;
  
  bVar22 = 0;
  if ((this_ptr->next_cmd < 0) || (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
    _DAT_01d1d400 = "..\\core\\script.cpp";
    _DAT_01d1d404 = 0x47b;
    core_main_c_FUN_005030e0("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar18 = "(no error message provided)";
  pcVar20 = &DAT_01e810b0;
  do {
    cVar3 = *pcVar18;
    *pcVar20 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar18[1];
    pcVar18 = pcVar18 + 2;
    pcVar20[1] = cVar3;
    pcVar20 = pcVar20 + 2;
  } while (cVar3 != '\0');
  pcVar18 = this_ptr->parsed_lines[this_ptr->next_cmd].text;
  local_168 = this_ptr->parsed_lines[this_ptr->next_cmd].line_number;
  local_30 = (char *)this_ptr->next_cmd;
  local_164 = 1;
  this_ptr->next_cmd = (int)(local_30 + 1);
  cVar3 = *pcVar18;
  if ((cVar3 == '{') || (cVar3 == '}')) {
    local_34 = &DAT_005ee486;
  }
  else if (cVar3 == ':') {
    local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 1);
    if (_DAT_01e810a8 != 0) {
      cVar3 = *local_34;
      for (pcVar18 = local_34;
          (cVar3 != '\0' &&
          ((((&DAT_00626114)[(byte)(*pcVar18 + 1)] & 0xe0) != 0 || (*pcVar18 == '_'))));
          pcVar18 = pcVar18 + 1) {
        cVar3 = pcVar18[1];
      }
      if (*pcVar18 != '\0') {
        pcVar18 = "Invalid label \"%s\" on line";
        goto LAB_005445cf;
      }
      pcVar18 = (char *)core_script_cpp_CScript_findLabelIndex_FUN_0054acc0(this_ptr,local_34);
      if ((int)pcVar18 < 0) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x4ad;
        core_main_c_FUN_005030e0("Internal script error checking for duplicate label.");
      }
      if (pcVar18 != local_30) {
        _sprintf(&DAT_01e810b0,"Duplicate label %s on lines %d and %d");
        return -1;
      }
    }
    local_34 = &DAT_005ee50f;
  }
  else {
    iVar7 = _strnicmp(pcVar18,"syntaxCheckOn",0xd);
    if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) {
      if (_DAT_01e810a8 != 0) {
        _DAT_01e810a8 = 1;
      }
      local_34 = &DAT_005ee51e;
    }
    else {
      iVar7 = _strnicmp(pcVar18,"syntaxCheckOff",0xe);
      if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
        if (_DAT_01e810a8 != 0) {
          _DAT_01e810a8 = 2;
        }
        local_34 = &DAT_005ee52e;
      }
      else if (_DAT_01e810a8 != 2) {
        iVar7 = _strnicmp(pcVar18,"activateGadget",0xe);
        if (((((((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) ||
               ((iVar7 = _strnicmp(pcVar18,"activatePuzzle",0xe),
                iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)))) ||
              ((iVar7 = _strnicmp
                                  (pcVar18,"addFieldNotesTask",0x11), iVar7 == 0 &&
               (((&DAT_00626114)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)))) ||
             ((((iVar7 = _strnicmp
                                   (pcVar18,"advanceLightFilter",0x12), iVar7 == 0 &&
                (((&DAT_00626114)[(byte)(pcVar18[0x12] + 1)] & 0xe0) == 0)) ||
               ((((iVar7 = _strnicmp
                                     (pcVar18,"beginCarryItem",0xe), iVar7 == 0 &&
                  (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) ||
                 ((iVar7 = _strnicmp
                                     (pcVar18,"completeFieldNotesTask",0x16), iVar7 == 0 &&
                  (((&DAT_00626114)[(byte)(pcVar18[0x16] + 1)] & 0xe0) == 0)))) ||
                ((iVar7 = _strnicmp
                                    (pcVar18,"createExplosion",0xf), iVar7 == 0 &&
                 (((&DAT_00626114)[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)))))) ||
              ((iVar7 = _strnicmp(pcVar18,"deleteActor",0xb),
               iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)))))) ||
            (((((((iVar7 = _strnicmp(pcVar18,"displayBitmap",0xd)
                  , iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar7 = _strnicmp
                                     (pcVar18,"displayFieldNotes",0x11), iVar7 == 0 &&
                  (((&DAT_00626114)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)))) ||
                ((((iVar7 = _strnicmp(pcVar18,"dropItem",8),
                   iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[8] + 1)] & 0xe0) == 0)) ||
                  ((iVar7 = _strnicmp
                                      (pcVar18,"hurtCharacter",0xd), iVar7 == 0 &&
                   (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)))) ||
                 ((((iVar7 = _strnicmp(pcVar18,"incCounter",10),
                    iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) ||
                   ((iVar7 = _strnicmp(pcVar18,"decCounter",10),
                    iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)))) ||
                  ((iVar7 = _strnicmp
                                      (pcVar18,"enableFieldNotesEntry",0x15), iVar7 == 0 &&
                   (((&DAT_00626114)[(byte)(pcVar18[0x15] + 1)] & 0xe0) == 0)))))))) ||
               ((iVar7 = _strnicmp
                                   (pcVar18,"enableFieldNotesAnnotation",0x1a), iVar7 == 0 &&
                (((&DAT_00626114)[(byte)(pcVar18[0x1a] + 1)] & 0xe0) == 0)))) ||
              ((((iVar7 = _strnicmp(pcVar18,"fadeSfx",7),
                 iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)) ||
                ((iVar7 = _strnicmp
                                    (pcVar18,"fadeAmbientSound",0x10), iVar7 == 0 &&
                 (((&DAT_00626114)[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)))) ||
               (((((iVar7 = _strnicmp(pcVar18,"flagOn",6),
                   iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[6] + 1)] & 0xe0) == 0)) ||
                  ((iVar7 = _strnicmp(pcVar18,"flagOff",7),
                   iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)))) ||
                 (((((iVar7 = _strnicmp(pcVar18,"gameFlagOn",10),
                     iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) ||
                    ((iVar7 = _strnicmp
                                        (pcVar18,"gameFlagOff",0xb), iVar7 == 0 &&
                     (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)))) ||
                   ((iVar7 = _strnicmp
                                       (pcVar18,"killCharacter",0xd), iVar7 == 0 &&
                    (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)))) ||
                  ((iVar7 = _strnicmp(pcVar18,"killHero",8),
                   iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[8] + 1)] & 0xe0) == 0)))))) ||
                (((((((iVar7 = _strnicmp(pcVar18,"killSfx",7),
                      iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)) ||
                     ((iVar7 = _strnicmp(pcVar18,"lightning",9),
                      iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[9] + 1)] & 0xe0) == 0)))) ||
                    ((iVar7 = _strnicmp(pcVar18,"playSfx",7),
                     iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)))) ||
                   ((iVar7 = _strnicmp(pcVar18,"resetGore",9),
                    iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[9] + 1)] & 0xe0) == 0)))) ||
                  (((iVar7 = _strnicmp
                                       (pcVar18,"setActorBool",0xc), iVar7 == 0 &&
                    (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) ||
                   ((iVar7 = _strnicmp
                                       (pcVar18,"setCameraAmbient",0x10), iVar7 == 0 &&
                    (((&DAT_00626114)[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)))))) ||
                 ((iVar7 = _strnicmp(pcVar18,"setCounter",10),
                  iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)))))))))) ||
             ((iVar7 = _strnicmp(pcVar18,"setDoorState",0xc),
              iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)))))) ||
           ((((((iVar7 = _strnicmp(pcVar18,"setGroupAmbient",0xf)
                , iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)) ||
               ((iVar7 = _strnicmp
                                   (pcVar18,"setLightFilterFrame",0x13), iVar7 == 0 &&
                (((&DAT_00626114)[(byte)(pcVar18[0x13] + 1)] & 0xe0) == 0)))) ||
              (((iVar7 = _strnicmp(pcVar18,"setLeverState",0xd),
                iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) ||
               ((iVar7 = _strnicmp(pcVar18,"setModelState",0xd),
                iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)))))) ||
             (((((iVar7 = _strnicmp(pcVar18,"setSunlight",0xb),
                 iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)) ||
                ((iVar7 = _strnicmp(pcVar18,"setTimer",8),
                 iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[8] + 1)] & 0xe0) == 0)))) ||
               ((iVar7 = _strnicmp(pcVar18,"setWeather",10),
                iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)))) ||
              ((iVar7 = _strnicmp(pcVar18,"shakeScreen",0xb),
               iVar7 == 0 && (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)))))) ||
            ((((iVar7 = _strnicmp
                                  (pcVar18,"slamModelToMotion",0x11), iVar7 == 0 &&
               (((&DAT_00626114)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)) ||
              ((iVar7 = _strnicmp
                                  (pcVar18,"turnToFieldNotesEntry",0x15), iVar7 == 0 &&
               (((&DAT_00626114)[(byte)(pcVar18[0x15] + 1)] & 0xe0) == 0)))) ||
             ((iVar7 = _strnicmp(pcVar18,"warpTo",6), iVar7 == 0
              && (((&DAT_00626114)[(byte)(pcVar18[6] + 1)] & 0xe0) == 0)))))))) {
          if (_DAT_01e810a8 == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,pcVar18);
          }
          else {
            pcVar18 = core_event_cpp_CEventList_validateCommands_FUN_004a6cd0(0x01C51D80,pcVar18);
            if (pcVar18 != (char *)0x0) goto LAB_00545bc9;
          }
          local_34 = &DAT_005ee77d;
        }
        else {
          iVar7 = _strnicmp(pcVar18,"addItemToInventory",0x12);
          if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0x12] + 1)] & 0xe0) == 0)) {
            local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0x12);
            local_174 = -1;
            sscanf(local_34," ( %[^,], %[^)])%n");
            if (local_174 < 3) {
              _sprintf(&DAT_01e810b0,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_34 = local_34 + local_174;
            core_script_cpp_trimString_FUN_00543240(local_14cc);
            core_script_cpp_trimString_FUN_00543240(local_1404);
            iVar7 = core_script_cpp_getActor_FUN_005433c0
                              (local_14cc,g_CHeroClassInfo.name_hash,&g_CHeroClassInfo);
            if ((iVar7 == 0) ||
               (pCVar14 = (CDemonActor *)
                          core_script_cpp_getActor_FUN_005433c0
                                    (local_1404,g_CDemonActorClassInfo.name_hash,
                                     &g_CDemonActorClassInfo), pCVar14 == (CDemonActor *)0x0))
            goto joined_r0x00546052;
            if (_DAT_01e810a8 == 0) {
              core_inv_cpp_FUN_004f7690((CInventory *)(iVar7 + 0x1fae8),pCVar14,0);
            }
          }
          else {
            iVar7 = _strnicmp(pcVar18,"addLightFilter",0xe);
            if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
              local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0xe);
              local_170 = -1;
              sscanf(local_34,"( %[^,], %[^,], %f )%n");
              if (local_170 < 5) {
                _sprintf(&DAT_01e810b0,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_34 = local_34 + local_170;
              core_set_cpp_CDemonSet_addLightFilter_FUN_00555a20
                        (g_CDemonSetPtr,local_bd0,&local_16c,&local_11c);
              if (local_16c == (C3DSLight *)0x0) {
                _sprintf(&DAT_01e810b0,"Light \"%s\" does not exist");
                return -1;
              }
              iVar7 = engine_dosio_cpp_getFileSize_FUN_00478fb0(&DAT_005ee83e,local_6bc);
              if (iVar7 < 1) {
                _sprintf(&DAT_01e810b0,"Can't open filter \"%s\"");
                return -1;
              }
              if (_DAT_01e810a8 == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_0055d490(local_16c,local_6bc,local_14c,0);
              }
            }
            else {
              iVar7 = _strnicmp(pcVar18,"allowEnemyAttack",0x10);
              if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)) {
                local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0x10);
                pcVar18 = core_script_cpp_parseConditionExpr_FUN_00543380(&local_34,local_b6c);
                if (pcVar18 != (char *)0x0) {
LAB_00545bc9:
                  pcVar20 = &DAT_01e810b0;
                  do {
                    cVar3 = *pcVar18;
                    *pcVar20 = cVar3;
                    if (cVar3 == '\0') {
                      return -1;
                    }
                    cVar3 = pcVar18[1];
                    pcVar18 = pcVar18 + 2;
                    pcVar20[1] = cVar3;
                    pcVar20 = pcVar20 + 2;
                  } while (cVar3 != '\0');
                  return -1;
                }
                if (_DAT_01e810a8 == 0) {
                  iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                    (0x01C51D80,local_b6c);
                  g_CGamePtr->allow_enemy_attack_flag = iVar7;
                }
              }
              else {
                iVar7 = _strnicmp
                                  (pcVar18,"allowHeroControls",0x11);
                if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)) {
                  local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0x11);
                  pcVar18 = core_script_cpp_parseConditionExpr_FUN_00543380(&local_34,local_338);
                  if (pcVar18 != (char *)0x0) goto LAB_00545bc9;
                  if (_DAT_01e810a8 == 0) {
                    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                      (0x01C51D80,local_338);
                    _DAT_01e818b4 = (uint)(iVar7 == 0);
                    g_CGamePtr->hero_controls_blocked = _DAT_01e818b4;
                  }
                }
                else {
                  iVar7 = _strnicmp
                                    (pcVar18,"allowHeroDamage",0xf);
                  if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)) {
                    local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0xf);
                    pcVar18 = core_script_cpp_parseConditionExpr_FUN_00543380(&local_34,local_cfc);
                    if (pcVar18 != (char *)0x0) goto LAB_00545bc9;
                    if (_DAT_01e810a8 == 0) {
                      iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                        (0x01C51D80,local_cfc);
                      g_CGamePtr->allow_damage_flag = iVar7;
                    }
                  }
                  else {
                    iVar7 = _strnicmp
                                      (pcVar18,"attachActorToPlatform",0x15);
                    if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0x15] + 1)] & 0xe0) == 0))
                    {
                      local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0x15);
                      local_138 = -1;
                      sscanf(local_34,"(%[^,], %[^)])%n");
                      if (local_138 < 2) {
                        _sprintf(&DAT_01e810b0,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_34 = local_34 + local_138;
                      core_script_cpp_trimString_FUN_00543240(local_29e4);
                      core_script_cpp_trimString_FUN_00543240(local_30ec);
                      pCVar11 = (CPlatform *)
                                core_script_cpp_getActor_FUN_005433c0
                                          (local_30ec,g_CPlatformClassInfo.name_hash,
                                           &g_CPlatformClassInfo);
                      if ((pCVar11 == (CPlatform *)0x0) ||
                         (pCVar14 = (CDemonActor *)
                                    core_script_cpp_getActor_FUN_005433c0
                                              (local_29e4,g_CDemonActorClassInfo.name_hash,
                                               &g_CDemonActorClassInfo),
                         pCVar14 == (CDemonActor *)0x0)) goto joined_r0x00546052;
                      if (_DAT_01e810a8 == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_0053adb0(pCVar11,pCVar14);
                      }
                    }
                    else {
                      iVar7 = _strnicmp
                                        (pcVar18,"beginFadeIn",0xb);
                      if ((iVar7 == 0) && (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0))
                      {
                        local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0xb);
                        if (_DAT_01e810a8 == 0) {
                          core_game_cpp_FUN_004d6030(g_CGamePtr);
                        }
                      }
                      else {
                        iVar7 = _strnicmp
                                          (pcVar18,"beginFadeOut",0xc);
                        if ((iVar7 == 0) &&
                           (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                          local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0xc);
                          if (_DAT_01e810a8 == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004d6070(g_CGamePtr);
                          }
                        }
                        else {
                          iVar7 = _strnicmp
                                            (pcVar18,"breakPoint",10);
                          if ((iVar7 == 0) &&
                             (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) {
                            local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 10);
                            if (_DAT_01e810a8 == 0) {
                              _sprintf(local_720,"Script breakpoint reached at line %d");
                              core_game_cpp_CGame_displayMessage_FUN_004cc190
                                        (g_CGamePtr,local_720,5.0);
                              this_ptr->script_state = 2;
                            }
                          }
                          else {
                            iVar7 = _strnicmp
                                              (pcVar18,"cancelCameraHold",0x10);
                            if ((iVar7 == 0) &&
                               (((&DAT_00626114)[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)) {
                              local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar18 + 0x10)
                              ;
                              if (_DAT_01e810a8 == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200
                                          (g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar7 = _strnicmp
                                                (pcVar18,"cancelWalkTo",0xc);
                              if ((iVar7 == 0) &&
                                 (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                                local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                     (pcVar18 + 0xc);
                                pcVar18 = core_script_cpp_parseArgument_FUN_005432d0
                                                    (&local_34,local_101c,200);
                                if (pcVar18 != (char *)0x0) {
                                  pcVar20 = &DAT_01e810b0;
                                  do {
                                    cVar3 = *pcVar18;
                                    *pcVar20 = cVar3;
                                    if (cVar3 == '\0') {
                                      return -1;
                                    }
                                    cVar3 = pcVar18[1];
                                    pcVar18 = pcVar18 + 2;
                                    pcVar20[1] = cVar3;
                                    pcVar20 = pcVar20 + 2;
                                  } while (cVar3 != '\0');
                                  return -1;
                                }
                                iVar7 = _stricmp(local_101c,&DAT_005ee94c)
                                ;
                                if (iVar7 == 0) {
                                  if (_DAT_01e810a8 == 0) {
                                    iVar7 = 0;
                                    for (iVar15 = 0; iVar15 < g_CDemonSetPtr->actor_count;
                                        iVar15 = iVar15 + 1) {
                                      iVar13 = core_actor_cpp_castToClassHash_FUN_0040c600
                                                         (*(uint *)
                                                           ((int)g_CDemonSetPtr->actors + iVar7),
                                                          g_CCharacterClassInfo.name_hash);
                                      if (iVar13 != 0) {
                                        (**(code **)(*(int *)(iVar13 + 0x154) + 0x130))
                                                  (iVar13,0,0,0);
                                      }
                                      iVar7 = iVar7 + 4;
                                    }
                                  }
                                }
                                else {
                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                    (local_101c,g_CCharacterClassInfo.name_hash,
                                                     &g_CCharacterClassInfo);
                                  if (iVar7 == 0) goto joined_r0x00546052;
                                  if (_DAT_01e810a8 == 0) {
                                    (**(code **)(*(int *)(iVar7 + 0x154) + 0x130))(iVar7,0,0,0);
                                  }
                                }
                              }
                              else {
                                iVar7 = _strnicmp
                                                  (pcVar18,"chainToMission",0xe);
                                if ((iVar7 == 0) &&
                                   (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
                                  local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                       (pcVar18 + 0xe);
                                  pcVar18 = core_script_cpp_parseArgument_FUN_005432d0
                                                      (&local_34,local_246c,200);
                                  if (pcVar18 != (char *)0x0) {
LAB_0054630a:
                                    pcVar20 = &DAT_01e810b0;
                                    do {
                                      cVar3 = *pcVar18;
                                      *pcVar20 = cVar3;
                                      if (cVar3 == '\0') {
                                        return -1;
                                      }
                                      cVar3 = pcVar18[1];
                                      pcVar18 = pcVar18 + 2;
                                      pcVar20[1] = cVar3;
                                      pcVar20 = pcVar20 + 2;
                                    } while (cVar3 != '\0');
                                    return -1;
                                  }
                                  core_script_cpp_trimString_FUN_00543240(local_246c);
                                  uVar16 = _DAT_01e810a8;
                                  if (_DAT_01e810a8 == 0) {
                                    core_mission_cpp_CDemonMission_setMissionName_FUN_0051bc90
                                              (0x01D2C900,local_246c);
                                    this_ptr->mission_ended = 1;
                                    local_164 = uVar16;
                                  }
                                }
                                else {
                                  iVar7 = _strnicmp
                                                    (pcVar18,"changeSetFilename",0x11);
                                  if ((iVar7 == 0) &&
                                     (((&DAT_00626114)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)) {
                                    local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                         (pcVar18 + 0x11);
                                    local_f4 = -1;
                                    sscanf(local_34,"(%d , %[^)])%n");
                                    if (local_f4 < 2) {
                                      _sprintf(&DAT_01e810b0,"Error parsing changeSetFilename command parms");
                                      return -1;
                                    }
                                    local_34 = local_34 + local_f4;
                                    core_script_cpp_trimString_FUN_00543240(local_3bac);
                                    if ((local_160 < 0) || (0x01D2C900->num_sets <= local_160)) {
                                      _sprintf(&DAT_01e810b0,"Invalid set index");
                                      return -1;
                                    }
                                    engine_dosio_cpp_splitPath_FUN_00479580
                                              (local_3bac,(char *)0x0,(char *)0x0,(char *)0x0,
                                               local_3cac);
                                    if (local_3cac[0] == '\0') {
                                      pcVar20 = &DAT_005ee9c0;
                                      iVar7 = -1;
                                      pcVar18 = local_3bac;
                                      do {
                                        pcVar19 = pcVar18;
                                        if (iVar7 == 0) break;
                                        iVar7 = iVar7 + -1;
                                        pcVar19 = pcVar18 + (uint)bVar22 * -2 + 1;
                                        cVar3 = *pcVar18;
                                        pcVar18 = pcVar19;
                                      } while (cVar3 != '\0');
                                      pcVar19 = pcVar19 + -1;
                                      do {
                                        cVar3 = *pcVar20;
                                        *pcVar19 = cVar3;
                                        if (cVar3 == '\0') break;
                                        cVar3 = pcVar20[1];
                                        pcVar20 = pcVar20 + 2;
                                        pcVar19[1] = cVar3;
                                        pcVar19 = pcVar19 + 2;
                                      } while (cVar3 != '\0');
                                    }
                                    iVar7 = engine_dosio_cpp_getFileSize_FUN_00478fb0
                                                      ("models",local_3bac);
                                    if (iVar7 < 1) {
                                      _sprintf(&DAT_01e810b0,"File models\\%s doesn't exist");
                                      return -1;
                                    }
                                    if (_DAT_01e810a8 == 0) {
                                      core_mission_cpp_FUN_0051b500
                                                (0x01D2C900,local_160,local_3bac);
                                    }
                                  }
                                  else {
                                    iVar7 = _strnicmp
                                                      (pcVar18,"dbSay",5);
                                    if ((iVar7 == 0) &&
                                       (((&DAT_00626114)[(byte)(pcVar18[5] + 1)] & 0xe0) == 0)) {
                                      local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                           (pcVar18 + 5);
                                      local_15c = -1;
                                      sscanf(local_34,"(%[^)])%n");
                                      if (local_15c < 3) {
                                        _sprintf(&DAT_01e810b0,"Error parsing dbSay arguments"
                                                  );
                                        return -1;
                                      }
                                      core_script_cpp_trimString_FUN_00543240(local_39c);
                                      local_34 = local_34 + local_15c;
                                      iVar7 = core_script_cpp_CScript_findDialogEntry_FUN_0054b2a0
                                                        (this_ptr,local_39c);
                                      if (iVar7 < 0) {
                                        local_154 = local_38bc;
                                        local_158 = &DAT_005eea17;
                                        _sprintf(local_38bc,"[Can't find %s in database]");
                                        shape_edittool_cpp_CStrList_add_FUN_004994d0
                                                  (&g_ScriptPickList.base,local_38bc);
                                      }
                                      else {
                                        pSVar4 = this_ptr->dialog_entries;
                                        local_158 = pSVar4[iVar7].speaker;
                                        local_154 = pSVar4[iVar7].text;
                                        pcVar20 = local_39c;
                                        pcVar18 = pSVar4[iVar7].sound_filename;
                                        do {
                                          cVar3 = *pcVar18;
                                          *pcVar20 = cVar3;
                                          if (cVar3 == '\0') break;
                                          cVar3 = pcVar18[1];
                                          pcVar18 = pcVar18 + 2;
                                          pcVar20[1] = cVar3;
                                          pcVar20 = pcVar20 + 2;
                                        } while (cVar3 != '\0');
                                      }
                                      if (this_ptr->dialog_wav_time < 0.0) {
                                        local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_0054aa60
                                                            (this_ptr,local_158,local_39c,local_154)
                                        ;
                                        this_ptr->dialog_wav_time = local_14;
                                        if (this_ptr->dialog_wav_time < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((_DAT_01e810a8 == 0) &&
                                         (local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < (int)local_164)) {
                                        core_script_cpp_CScript_setSpeaker_FUN_0054aca0
                                                  (this_ptr,this_ptr->who_is_speaking);
                                      }
                                    }
                                    else {
                                      iVar7 = _strnicmp
                                                        (pcVar18,"dbStartSay",10);
                                      if ((iVar7 == 0) &&
                                         (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) {
                                        local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                             (pcVar18 + 10);
                                        local_150 = -1;
                                        sscanf(local_34,"(%[^)])%n");
                                        if (local_150 < 3) {
                                          _sprintf(&DAT_01e810b0,
                                                     "Error parsing dbSay arguments");
                                          return -1;
                                        }
                                        core_script_cpp_trimString_FUN_00543240(local_b08);
                                        local_34 = local_34 + local_150;
                                        iVar7 = core_script_cpp_CScript_findDialogEntry_FUN_0054b2a0
                                                          (this_ptr,local_b08);
                                        if (iVar7 < 0) {
                                          local_144 = local_3024;
                                          local_148 = &DAT_005eea68;
                                          _sprintf(local_3024,"[Can't find %s in database]")
                                          ;
                                          shape_edittool_cpp_CStrList_add_FUN_004994d0
                                                    (&g_ScriptPickList.base,local_3024);
                                        }
                                        else {
                                          pSVar4 = this_ptr->dialog_entries;
                                          local_148 = pSVar4[iVar7].speaker;
                                          local_144 = pSVar4[iVar7].text;
                                          pcVar20 = local_b08;
                                          pcVar18 = pSVar4[iVar7].sound_filename;
                                          do {
                                            cVar3 = *pcVar18;
                                            *pcVar20 = cVar3;
                                            if (cVar3 == '\0') break;
                                            cVar3 = pcVar18[1];
                                            pcVar18 = pcVar18 + 2;
                                            pcVar20[1] = cVar3;
                                            pcVar20 = pcVar20 + 2;
                                          } while (cVar3 != '\0');
                                        }
                                        local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_0054aa60
                                                            (this_ptr,local_148,local_b08,local_144)
                                        ;
                                        this_ptr->dialog_wav_time = local_14;
                                        fVar2 = this_ptr->dialog_wav_time;
joined_r0x0054a269:
                                        if (fVar2 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar7 = _strnicmp
                                                          (pcVar18,"dbTimedDisplay",0xe);
                                        if ((iVar7 == 0) &&
                                           (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)
                                           ) {
                                          local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                               (pcVar18 + 0xe);
                                          local_140 = -1;
                                          sscanf(local_34,"(%[^,], %f)%n");
                                          if (local_140 < 3) {
                                            _sprintf(&DAT_01e810b0,
                                                       "Error parsing dbTimedDisplay arguments");
                                            return -1;
                                          }
                                          core_script_cpp_trimString_FUN_00543240(local_52c);
                                          local_34 = local_34 + local_140;
                                          iVar7 = core_script_cpp_CScript_findDialogEntry_FUN_0054b2a0
                                                            (this_ptr,local_52c);
                                          if (iVar7 < 0) {
                                            local_118 = local_10e4;
                                            _sprintf(local_10e4,
                                                       "[Can't find %s in database]");
                                          }
                                          else {
                                            local_118 = this_ptr->dialog_entries[iVar7].text;
                                            pcVar20 = local_52c;
                                            pcVar18 = this_ptr->dialog_entries[iVar7].sound_filename
                                            ;
                                            do {
                                              cVar3 = *pcVar18;
                                              *pcVar20 = cVar3;
                                              if (cVar3 == '\0') break;
                                              cVar3 = pcVar18[1];
                                              pcVar18 = pcVar18 + 2;
                                              pcVar20[1] = cVar3;
                                              pcVar20 = pcVar20 + 2;
                                            } while (cVar3 != '\0');
                                          }
                                          if (_DAT_01e810a8 == 0) {
                                            pcVar18 = this_ptr->current_message;
                                            pcVar20 = local_118;
                                            do {
                                              cVar3 = *pcVar20;
                                              *pcVar18 = cVar3;
                                              if (cVar3 == '\0') break;
                                              cVar3 = pcVar20[1];
                                              pcVar20 = pcVar20 + 2;
                                              pcVar18[1] = cVar3;
                                              pcVar18 = pcVar18 + 2;
                                            } while (cVar3 != '\0');
                                            local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,local_13c,time_remaining);
                                            if (0 < (int)local_164) {
                                              this_ptr->current_message[0] = '\0';
                                            }
                                          }
                                        }
                                        else {
                                          iVar7 = _strnicmp
                                                            (pcVar18,"debug",5);
                                          if ((iVar7 == 0) &&
                                             (((&DAT_00626114)[(byte)(pcVar18[5] + 1)] & 0xe0) == 0)
                                             ) {
                                            local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                                 (pcVar18 + 5);
                                            pcVar18 = core_script_cpp_parseArgument_FUN_005432d0
                                                                (&local_34,local_3edc,300);
                                            if (pcVar18 != (char *)0x0) goto LAB_0054630a;
                                            if (_DAT_01e810a8 == 0) {
                                              shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                                                        (g_CEditorToolsPtr,
                                                         "Script debug message at line %d:\n%s");
                                            }
                                          }
                                          else {
                                            iVar7 = _strnicmp
                                                              (pcVar18,"dismember",9);
                                            if ((iVar7 == 0) &&
                                               (((&DAT_00626114)[(byte)(pcVar18[9] + 1)] & 0xe0) ==
                                                0)) {
                                              local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                                   (pcVar18 + 9);
                                              local_134 = -1;
                                              sscanf(local_34,"(%[^,], %[^,)]%n")
                                              ;
                                              if (local_134 < 5) {
                                                _sprintf(&DAT_01e810b0,
                                                           "Error parsing dismember command parms");
                                                return -1;
                                              }
                                              local_34 = local_34 + local_134;
                                              core_script_cpp_trimString_FUN_00543240(local_1b0c);
                                              core_script_cpp_trimString_FUN_00543240(local_1bd4);
                                              local_130 = (CCharacter *)
                                                          core_script_cpp_getActor_FUN_005433c0
                                                                    (local_1b0c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                              if (local_130 == (CCharacter *)0x0)
                                              goto joined_r0x00546052;
                                              iVar7 = core_script_cpp_parseBodyPartMask_FUN_00543610
                                                                (local_130,local_1bd4,local_39ac);
                                              if (iVar7 == 0) {
                                                return -1;
                                              }
                                              core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&local_19c)
                                              ;
                                              initial_velocity = (CVector3f *)0x0;
                                              if (*local_34 == ',') {
                                                local_134 = -1;
                                                sscanf
                                                          (local_34,",%f ,%f ,%f ,%f %n");
                                                if (local_134 < 5) {
                                                  _sprintf(&DAT_01e810b0,
                                                             "Error parsing dismember command parms");
                                                  return -1;
                                                }
                                                local_34 = local_34 + local_134;
                                                if (0.0 < local_492c) {
                                                  fVar2 = local_492c * _DAT_005efda3 * _DAT_005efda7
                                                  ;
                                                  fVar8 = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                                                            (-fVar2,fVar2);
                                                  uVar9 = 0;
                                                  local_14 = fVar8;
                                                  local_14 = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                                                            (-fVar2,fVar2);
                                                  core_doc_cpp_FUN_00476620(local_14,uVar9,fVar8);
                                                  local_1a8.x = local_1c0;
                                                  *(float *)((int)&local_1a8 + (uint)bVar22 * -8 + 4
                                                            ) = afStack_1e0[(uint)bVar22 * -2 + 9];
                                                  *(float *)((int)&local_1a8 +
                                                            (uint)bVar22 * -8 + (uint)bVar22 * -8 +
                                                            8) = afStack_1e0
                                                                 [(uint)bVar22 * -2 +
                                                                  (uint)bVar22 * -2 + 10];
                                                  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                                                            (&local_20c,&local_1a8);
                                                  core_dirmat_cpp_FUN_0045f690
                                                            (&local_20c,&local_19c);
                                                  local_1b4[0] = afStack_1e0[2];
                                                  afStack_1e0[(uint)bVar22 * -2 + 0xc] =
                                                       afStack_1e0[(uint)bVar22 * -2 + 3];
                                                  afStack_1e0
                                                  [(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd] =
                                                       afStack_1e0
                                                       [(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
                                                  core_actor_cpp_FUN_0040cff0
                                                            (&local_19c,afStack_1e0 + 0xb);
                                                }
                                                initial_velocity = &local_19c;
                                              }
                                              if (*local_34 != ')') {
                                                _sprintf(&DAT_01e810b0,
                                                           "Error parsing dismember command parms near '%s'");
                                                return -1;
                                              }
                                              local_34 = local_34 + 1;
                                              if (_DAT_01e810a8 == 0) {
                                                iVar7 = 0;
                                                local_12c = 
                                                  core_bodypart_cpp_createBodyPart_FUN_00418940
                                                            (&(local_130->base).location.position,
                                                             &(local_130->base).orient,
                                                             initial_velocity,&local_130->base,0,0,
                                                             local_130->blood_type);
                                                iVar15 = 0;
                                                do {
                                                  if (*(int *)((int)local_39ac + iVar15) != 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                                                            (local_130,local_12c,iVar7,0);
                                                  }
                                                  iVar7 = iVar7 + 1;
                                                  iVar15 = iVar15 + 4;
                                                } while (iVar7 < 0x3c);
                                                core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90
                                                          (local_12c);
                                              }
                                            }
                                            else {
                                              iVar7 = _strnicmp
                                                                (pcVar18,"display",7);
                                              if ((iVar7 == 0) &&
                                                 (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 7);
                                                pcVar18 = core_script_cpp_parseArgument_FUN_005432d0
                                                                    (&local_34,
                                                                     this_ptr->current_message,0x400
                                                                    );
                                                if (pcVar18 != (char *)0x0) {
                                                  _sprintf(&DAT_01e810b0,
                                                             "Error parsing message text on display statament: %s");
                                                  return -1;
                                                }
                                              }
                                              else {
                                                iVar7 = _strnicmp
                                                                  (pcVar18,&DAT_005eebf6,4);
                                                if ((iVar7 == 0) &&
                                                   (((&DAT_00626114)[(byte)(pcVar18[4] + 1)] & 0xe0)
                                                    == 0)) {
                                                  local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 4);
                                                  iVar7 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_0054ad20
                                                            (this_ptr,this_ptr->next_cmd,1);
                                                  if (iVar7 < 0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Can't skip next command after else statement on line %d");
                                                    return -1;
                                                  }
                                                  this_ptr->next_cmd = iVar7;
                                                }
                                                else {
                                                  iVar7 = _strnicmp
                                                                    (pcVar18,"enableCamera"
                                                                     ,0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xc);
                                                  local_128 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_128 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing enableCamera parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_128;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_25fc);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2534);
                                                  iVar7 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0
                                                            (g_CDemonSetPtr,local_25fc);
                                                  if (iVar7 < 0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Camera \"%s\" does not exist.");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    iVar15 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_2534);
                                                  core_set_cpp_CDemonSet_setCameraEnabled_FUN_005559b0
                                                            (g_CDemonSetPtr,iVar7,iVar15);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (0x01C51D80,local_2534);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0x11);
                                                  local_124 = -1;
                                                  sscanf
                                                            (local_34,"(%d , %[^)])%n");
                                                  if (local_124 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing enableCameraGroup parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_124;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_3344);
                                                  if (_DAT_01e810a8 == 0) {
                                                    iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_3344);
                                                  core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_005559d0
                                                            (g_CDemonSetPtr,local_60,iVar7);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (0x01C51D80,local_3344);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00546ffc:
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xf);
                                                  local_120 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_120 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing enableHealthBar parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_120;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2dcc);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_372c);
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_2dcc,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  iVar15 = _stricmp
                                                                     (local_372c,"false");
                                                  uVar9 = 0;
                                                  if (iVar15 != 0) {
                                                    iVar15 = _stricmp
                                                                       (local_372c,&DAT_005eed20);
                                                    if (iVar15 == 0) {
                                                      uVar9 = 1;
                                                    }
                                                    else {
                                                      iVar15 = _stricmp
                                                                         (local_372c,
                                                                          "always");
                                                      if (iVar15 != 0) {
                                                        _sprintf(&DAT_01e810b0,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'");
                                                  return -1;
                                                  }
                                                  uVar9 = 2;
                                                  }
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    *(uint *)(iVar7 + 0x2540) = uVar9;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,&DAT_005eed49,3);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 3);
                                                  if (_DAT_01e810a8 == 0) {
                                                    local_164 = _DAT_01e810a8;
                                                    this_ptr->mission_ended = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"fadeIn",6);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 6);
                                                  if (_DAT_01e810a8 == 0) {
                                                    local_164 = _DAT_01e810a8;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar16 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004d62e0
                                                            (g_CGamePtr);
                                                  if (uVar16 != 0) {
                                                    local_164 = 1;
                                                    g_CGamePtr->allow_damage_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_FUN_004d6030(g_CGamePtr);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"fadeOut",7)
                                                    ;
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 7);
                                                  uVar16 = _DAT_01e810a8;
                                                  pCVar5 = g_CGamePtr;
                                                  if (_DAT_01e810a8 == 0) {
                                                    g_CGamePtr->allow_damage_flag = 0;
                                                    local_164 = uVar16;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar16 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004d62e0(pCVar5);
                                                  if (uVar16 != 0) {
                                                    local_164 = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeOut_FUN_004d6070
                                                              (pCVar5);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"gesture",7)
                                                    ;
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 7);
                                                  local_48 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^,)]%n");
                                                  if (local_48 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing gesture command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_48;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_17ec);
                                                  core_script_cpp_trimString_FUN_00543240(local_dc4)
                                                  ;
                                                  local_114 = 0;
                                                  if (*local_34 == ',') {
                                                    local_48 = -1;
                                                    sscanf
                                                              (local_34,", %d %n");
                                                    if (local_48 < 1) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Error parsing gesture loop parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_48;
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing gesture command parms - eating last paren");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_17ec,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    uVar16 = 
                                                  core_charactr_cpp_CCharacter_initGesture_FUN_00432c70
                                                            (pCVar10,local_dc4);
                                                  pCVar10->gesture_looping = local_114;
                                                  }
                                                  else {
                                                    iVar7 = 0;
                                                    pcVar18 = local_dc4;
                                                    this_ptr_01 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                                                            (&(pCVar10->model).base);
                                                  iVar7 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                                                            (this_ptr_01,pcVar18,iVar7);
                                                  uVar16 = (uint)(-1 < iVar7);
                                                  }
                                                  if (uVar16 == 0) {
                                                    core_bugs_cpp_FUN_00428120(&pCVar10->model);
                                                    _sprintf(&DAT_01e810b0,
                                                               "Gesture name %s is not valid for actor %s, model %s");
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"getIniInt",
                                                                       9);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 9);
                                                  local_110 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^,)] )%n");
                                                  if (local_110 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing getIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_110;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_327c);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1d64);
                                                  if (_DAT_01e810a8 == 0) {
                                                    engine_ini_cpp_FUN_004f4b00
                                                              (&local_4924,
                                                               "system\\nocturne.ini",
                                                               &DAT_005eee71);
                                                    local_10c = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_004a9e80
                                                            (0x01C51D80,local_1d64);
                                                  engine_ini_cpp_FUN_004f4d10
                                                            (&local_4924,local_327c,&local_10c);
                                                  core_event_cpp_CEventList_setCounter_FUN_004a9d70
                                                            (0x01C51D80,local_1d64,local_10c);
                                                  engine_ini_cpp_CIniFile_dtor_FUN_004f4b30
                                                            (&local_4924,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xf);
                                                  local_108 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_108 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing getTriggerActor command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_108;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1ef4);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_340c);
                                                  iVar7 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00543100
                                                            (local_1ef4);
                                                  if (iVar7 == 0) {
                                                    return -1;
                                                  }
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_340c,
                                                                     g_CTriggerClassInfo.name_hash,
                                                                     &g_CTriggerClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004a9ff0
                                                            (0x01C51D80,local_1ef4,
                                                             *(CDemonActor **)(iVar7 + 0x300));
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"gosub",5);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 5);
                                                  iVar7 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_0054acc0
                                                            (this_ptr,local_34);
                                                  if (iVar7 < 0) {
                                                    pcVar18 = "Undefined label %s used in gosub statement on line %d";
LAB_005445cf:
                                                    _sprintf(&DAT_01e810b0,pcVar18);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    if (7 < this_ptr->call_stack_count) {
                                                      local_104 = _fopen("stack.txt",
                                                                             &DAT_005eef13);
                                                      FUN_005c03c0
                                                                (local_104,"line%6d: %s\n",
                                                                 local_168,pcVar18);
                                                      iVar7 = this_ptr->call_stack_count + -1;
                                                      if (-1 < iVar7) {
                                                        pfVar21 = (float *)(this_ptr->
                                                                            current_message +
                                                                           this_ptr->
                                                                           call_stack_count * 4 +
                                                                           -0x54);
                                                        do {
                                                          piVar1 = (int *)(pfVar21 + 0x117);
                                                          pfVar21 = pfVar21 + -1;
                                                          iVar7 = iVar7 + -1;
                                                          FUN_005c03c0
                                                                    (local_104,"line%6d: %s\n",
                                                                     this_ptr->parsed_lines[*piVar1]
                                                                     .line_number,
                                                                     this_ptr->parsed_lines[*piVar1]
                                                                     .text);
                                                        } while (-1 < iVar7);
                                                      }
                                                      _fclose(local_104);
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Call stack overflow detected on script line %d.  Check stack.txt for details."
                                                                );
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack[this_ptr->call_stack_count]
                                                         = this_ptr->next_cmd;
                                                    this_ptr->next_cmd = iVar7;
                                                    this_ptr->call_stack_count =
                                                         this_ptr->call_stack_count + 1;
                                                    local_34 = &DAT_005eef88;
                                                  }
                                                  else {
                                                    local_34 = &DAT_005eef88;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,&DAT_005eef89,4);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 4);
                                                  iVar7 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_0054acc0
                                                            (this_ptr,local_34);
                                                  if (iVar7 < 0) {
                                                    pcVar18 = "Undefined label %s used in goto statement on line %d";
                                                    goto LAB_005445cf;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    this_ptr->next_cmd = iVar7;
                                                    local_34 = &DAT_005eefc3;
                                                  }
                                                  else {
                                                    local_34 = &DAT_005eefc3;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,&DAT_005eefc4,4);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 4);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_4134,300);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00546ffc;
                                                  if (_DAT_01e810a8 == 0) {
                                                    shape_edittool_cpp_FUN_004943a0
                                                              (g_CEditorToolsPtr,
                                                               "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                               local_168,local_4134);
                                                    this_ptr->mission_ended = 1;
                                                    local_164 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xd);
                                                  local_100 = 0xffffffff;
                                                  sscanf
                                                            (local_34,"(%[^,)]%n");
                                                  if ((int)local_100 < 2) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing holsterWeapon command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_100;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_197c);
                                                  local_fc = core_script_cpp_getActor_FUN_005433c0
                                                                       (local_197c,
                                                                        g_CHeroClassInfo.name_hash,
                                                                        &g_CHeroClassInfo);
                                                  if (local_fc == 0) goto joined_r0x00546052;
                                                  local_f8 = 1;
                                                  if (*local_34 == ',') {
                                                    local_34 = local_34 + 1;
                                                    uVar16 = 0xffffffff;
                                                    pcVar18 = local_34;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar22 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    local_100 = ~uVar16 - 2;
                                                    if ((int)local_100 < 1) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    pcVar18 = local_34;
                                                    pcVar20 = acStack_23a6 + 2;
                                                    for (uVar17 = local_100 >> 2; uVar17 != 0;
                                                        uVar17 = uVar17 - 1) {
                                                      *(uint *)pcVar20 =
                                                           *(uint *)pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar22 * -8 + 4;
                                                      pcVar20 = pcVar20 + (uint)bVar22 * -8 + 4;
                                                    }
                                                    for (uVar17 = local_100 & 3; uVar17 != 0;
                                                        uVar17 = uVar17 - 1) {
                                                      *pcVar20 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar22 * -2 + 1;
                                                      pcVar20 = pcVar20 + (uint)bVar22 * -2 + 1;
                                                    }
                                                    local_34 = local_34 + local_100;
                                                    acStack_23a6[~uVar16] = '\0';
                                                    if (_DAT_01e810a8 == 0) {
                                                      local_f8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,acStack_23a6 + 2);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (0x01C51D80,acStack_23a6 + 2);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00547aee;
                                                  }
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Missing closing ')' in holsterWeapon command");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  if (_DAT_01e810a8 == 0) {
                                                    (**(code **)(*(int *)(local_fc + 0x154) + 0x144)
                                                    )(local_fc,local_f8 == 0);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,&DAT_005ef092,4);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 4);
                                                  local_30 = (char *)this_ptr->next_cmd;
                                                  local_164 = 0;
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,&DAT_005ef097,2);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[2] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 2);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00543380
                                                            (&local_34,local_590);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00547aee;
                                                  if ((_DAT_01e810a8 == 0) &&
                                                     (iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_590), iVar7 == 0)) {
                                                    iVar7 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_0054ad20
                                                            (this_ptr,this_ptr->next_cmd,0);
                                                  if (iVar7 < 0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Can't skip next command after if statement on line %d");
                                                    return -1;
                                                  }
                                                  iVar15 = _strnicmp
                                                                     (this_ptr->parsed_lines[iVar7].
                                                                      text,&DAT_005ef0d0,4);
                                                  if (iVar15 == 0) {
                                                    iVar7 = iVar7 + 1;
                                                  }
                                                  this_ptr->next_cmd = iVar7;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "finishedAct",0xb);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xb);
                                                  local_f0 = -1;
                                                  sscanf
                                                            (local_34," ( )%n");
                                                  pCVar5 = g_CGamePtr;
                                                  if (local_f0 < 2) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing finishedAct command");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_f0;
                                                  if (_DAT_01e810a8 == 0) {
                                                    local_164 = _DAT_01e810a8;
                                                    this_ptr->mission_ended = 1;
                                                    pCVar5->act_completion_state = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"letterbox",
                                                                       9);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 9);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_658,100);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00547aee:
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  iVar15 = -1;
                                                  iVar7 = _stricmp
                                                                    (local_658,"false");
                                                  if (iVar7 == 0) {
                                                    iVar15 = 0;
                                                  }
                                                  iVar7 = _stricmp
                                                                    (local_658,&DAT_005ef11a);
                                                  if (iVar7 == 0) {
                                                    iVar15 = 1;
                                                  }
                                                  iVar7 = _stricmp
                                                                    (local_658,"bottom");
                                                  pCVar5 = g_CGamePtr;
                                                  if (iVar7 == 0) {
                                                    iVar15 = 2;
                                                  }
                                                  else if (iVar15 < 0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Invalid letterBox mode: %s");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    g_CGamePtr->letterbox_mode = iVar15;
                                                    pCVar5->allow_damage_flag = (uint)(iVar15 == 0);
                                                    pCVar5->allow_enemy_attack_flag =
                                                         (uint)(pCVar5->letterbox_mode == 0);
                                                    pCVar5->hero_controls_blocked =
                                                         pCVar5->letterbox_mode;
                                                    if (pCVar5->letterbox_mode != 0) {
                                                      g_CFieldNotesPtr->is_displayed = 0;
                                                    }
                                                    pCVar5 = g_CGamePtr;
                                                    this_ptr->saved_cmd_index = -1;
                                                    _DAT_01e818b4 = 1;
                                                    if ((pCVar5->goggles_active != 0) &&
                                                       (pCVar5->letterbox_mode != 0)) {
                                                      iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4
                                                                      );
                                                      (**(code **)(*(int *)(iVar7 + 0x154) + 0x150))
                                                                (iVar7);
                                                      (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
                                                      iVar7 = core_event_cpp_FUN_004aafe0
                                                                        (g_CDemonSetPtr);
                                                      core_setdir_cpp_FUN_00559f80
                                                                (g_CDemonSetPtr,
                                                                 g_CScriptPtr->focus_actor,1);
                                                      pCVar6 = g_CDemonSetPtr;
                                                      g_CScriptPtr->focus_actor_changed = 0;
                                                      iVar15 = core_event_cpp_FUN_004aafe0(pCVar6);
                                                      if (iVar7 == iVar15) {
                                                                                                                
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
                                                            (g_CDemonSetPtr,iVar15);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "loadFieldNotes",0xe);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xe);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_3db0,0x104);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00547aee;
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0
                                                            (g_CFieldNotesPtr,local_3db0,(char *)0x0
                                                            );
                                                  }
                                                  else if ((0x01D2C900->is_in_editor != 0) ||
                                                          (g_CFieldNotesPtr->file_name[0] == '\0'))
                                                  {
                                                    iVar7 = 
                                                  core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0
                                                            (g_CFieldNotesPtr,local_3db0,
                                                             &DAT_01e810b0);
joined_r0x00549128:
                                                  if (iVar7 == 0) {
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xe);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00543380
                                                            (&local_34,local_914);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00547aee;
                                                  if (_DAT_01e810a8 == 0) {
                                                    iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_914);
                                                  this_ptr->focus_actor_locked = iVar7;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"lookAt",6);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 6);
                                                  local_ec = -1;
                                                  sscanf
                                                            (local_34,"(%[^,)]%n");
                                                  if (local_ec < 2) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing lookAt command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_ec;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1a44);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_1a44,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0) {
joined_r0x00546052:
                                                    if (_DAT_01e818bc == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_00544524;
                                                  }
                                                  pCVar14 = (CDemonActor *)0x0;
                                                  if (*local_34 == ',') {
                                                    local_ec = -1;
                                                    sscanf
                                                              (local_34,", %[^)]%n");
                                                    if (local_ec < 3) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Error parsing lookAt command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_ec;
                                                    core_script_cpp_trimString_FUN_00543240
                                                              (local_2b74);
                                                    pCVar14 = (CDemonActor *)
                                                              core_script_cpp_getActor_FUN_005433c0
                                                                        (local_2b74,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo);
                                                    if (pCVar14 == (CDemonActor *)0x0)
                                                    goto joined_r0x00546052;
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Missing closing ')' in lookAt command");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00433c50
                                                            (pCVar10,pCVar14);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "monsterVision",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xd);
                                                  local_78 = 0xffffffff;
                                                  local_e8 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d )%n");
                                                  if (local_e8 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing monsterVision command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_e8;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_18b4);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_18b4,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    this_ptr->monster_vision_actor = pCVar10;
                                                    local_78 = (uint)(g_CGamePtr->
                                                                      special_view_active == 0);
                                                    (**(code **)((int)g_CGamePtr->vtable + 4))
                                                              (g_CGamePtr,local_78);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "movePlatform",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xc);
                                                  local_e4 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %f , %f )%n");
                                                  if (local_e4 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing movePlatform command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_e4;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1fbc);
                                                  pCVar11 = (CPlatform *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_1fbc,
                                                                       g_CPlatformClassInfo.
                                                                       name_hash,
                                                                       &g_CPlatformClassInfo);
                                                  if (pCVar11 == (CPlatform *)0x0)
                                                  goto joined_r0x00546052;
                                                  if ((local_4938 < 0.0) || (1.0 < local_4938)) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  if (local_4928 <= 0.0) {
                                                    pcVar18 = "Invalid movement rate %f";
                                                    goto LAB_005445cf;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_platfrm_cpp_CPlatform_startMovement_FUN_0053a340
                                                            (pCVar11,local_4938,local_4928);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"openDoor",8
                                                                      );
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 8);
                                                  local_e0 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_e0 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing openDoor command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_e0;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2aac);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2c3c);
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_2aac,
                                                                     g_CDoorClassInfo.name_hash,
                                                                     &g_CDoorClassInfo);
                                                  if ((iVar7 == 0) ||
                                                     (iVar15 = core_script_cpp_getActor_FUN_005433c0
                                                                         (local_2c3c,
                                                                          g_CCharacterClassInfo.
                                                                          name_hash,
                                                                          &g_CCharacterClassInfo),
                                                     iVar15 == 0)) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    local_164 = _DAT_01e810a8;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      iVar7 = (**(code **)(*(int *)(iVar15 + 0x154)
                                                                          + 0x124))(iVar15);
                                                      if (iVar7 != 0) {
                                                        local_160 = 1;
                                                      }
                                                    }
                                                    else {
                                                      (**(code **)(*(int *)(iVar15 + 0x154) + 0x11c)
                                                      )(iVar15,iVar7);
                                                      this_ptr->cmd_timer = 1.0;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "pressButton",0xb);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xb);
                                                  local_dc = -1;
                                                  sscanf
                                                            (local_34,"( %[^,], %[^)])%n");
                                                  if (local_dc < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing pressButton() command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_dc;
                                                  core_script_cpp_trimString_FUN_00543240(local_aa4)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240(local_a40)
                                                  ;
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_aa4,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  puVar12 = (uint *)
                                                                                                                        
                                                  core_script_cpp_getActionState_FUN_00543540
                                                            (iVar7 + 0xc1d8,local_a40);
                                                  uVar16 = _DAT_01e810a8;
                                                  if (puVar12 == (uint *)0x0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Invalid button name: %s");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    if (_DAT_01e818b4 != 0) {
                                                      core_game_cpp_FUN_004d19d0(g_CGamePtr);
                                                      _DAT_01e818b4 = uVar16;
                                                    }
                                                    *puVar12 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"raise",5);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 5);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_400,100);
                                                  if (pcVar18 != (char *)0x0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing event expression on raise statament: %s");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                                                            (0x01C51D80,local_400);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_004a6cd0
                                                            (0x01C51D80,local_400);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "releaseButton",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xd);
                                                  local_d8 = -1;
                                                  sscanf
                                                            (local_34,"( %[^,], %[^)])%n");
                                                  if (local_d8 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing releaseButton() command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_d8;
                                                  core_script_cpp_trimString_FUN_00543240(local_464)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240(local_8b0)
                                                  ;
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_464,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  puVar12 = (uint *)
                                                                                                                        
                                                  core_script_cpp_getActionState_FUN_00543540
                                                            (iVar7 + 0xc1d8,local_8b0);
                                                  if (puVar12 == (uint *)0x0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Invalid button name: %s");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    if (_DAT_01e818b4 != 0) {
                                                      core_game_cpp_FUN_004d19d0(g_CGamePtr);
                                                      _DAT_01e818b4 = 0;
                                                    }
                                                    *puVar12 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0x1b] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0x1b);
                                                  local_d4 = -1;
                                                  sscanf
                                                            (local_34," ( %[^)])%n");
                                                  if (local_d4 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing removeAllItemsFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_d4;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_22dc);
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_22dc,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004f7050
                                                              ((CInventory *)(iVar7 + 0x1fae8));
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0x17] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0x17);
                                                  local_d0 = -1;
                                                  sscanf
                                                            (local_34," ( %[^,], %[^,)]%n");
                                                  if (local_d0 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_d0;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_278c);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_26c4);
                                                  local_cc = core_script_cpp_getActor_FUN_005433c0
                                                                       (local_278c,
                                                                        g_CHeroClassInfo.name_hash,
                                                                        &g_CHeroClassInfo);
                                                  if (local_cc == 0) goto joined_r0x00546052;
                                                  iVar7 = 1;
                                                  if (*local_34 == ',') {
                                                    local_d0 = -1;
                                                    sscanf
                                                              (local_34,", %[^)]%n");
                                                    if (local_d0 < 1) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Error parsing removeItemFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_d0;
                                                    if (_DAT_01e810a8 == 0) {
                                                      iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_2d04);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (0x01C51D80,local_2d04);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  if (((_DAT_01e810a8 == 0) &&
                                                      (pCVar14 = core_inv_cpp_FUN_004f8c40
                                                                           ((CInventory *)
                                                                            (*(int *)(_DAT_01d06ab4
                                                                                      * 4 + 
                                                  0x1d06aa4) + 0x1fae8),local_26c4),
                                                  pCVar14 != (CDemonActor *)0x0)) &&
                                                  (core_inv_cpp_FUN_004f8d00
                                                             ((CInventory *)(local_cc + 0x1fae8),
                                                              pCVar14,iVar7), iVar7 == 0)) {
                                                    core_event_cpp_copyQuaternion_FUN_004aafc0
                                                              (&pCVar14->location,local_cc + 0x20);
                                                                                                        
                                                  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                                                            (0x01D2C900,pCVar14);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"removeKeys"
                                                                       ,10);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 10);
                                                  local_c4 = -1;
                                                  sscanf
                                                            (local_34," (%d )%n");
                                                  if (local_c4 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_c4;
                                                  if (g_CNetGamePtr->connection_type !=
                                                      CONNECTION_NONE) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_hero_cpp_CHero_removeMatchingKeys_FUN_004ec300
                                                            (*(CHero **)
                                                              (_DAT_01d06ab4 * 4 + 0x1d06aa4),
                                                             local_c8);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"return",6);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 6);
                                                  if (_DAT_01e810a8 == 0) {
                                                    iVar7 = this_ptr->call_stack_count;
                                                    if (iVar7 < 1) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Return without gosub detected on script line %d."
                                                                );
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack_count = iVar7 + -1;
                                                    this_ptr->next_cmd =
                                                         this_ptr->call_stack[iVar7 + -1];
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "rollCredits",0xb);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xb);
                                                  local_c0 = -1;
                                                  sscanf
                                                            (local_34," ( )%n");
                                                  pCVar5 = g_CGamePtr;
                                                  if (local_c0 < 2) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_c0;
                                                  if (_DAT_01e810a8 == 0) {
                                                    local_164 = _DAT_01e810a8;
                                                    this_ptr->mission_ended = 1;
                                                    pCVar5->act_completion_state = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,&DAT_005ef5fd,3);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 3);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_4328,500);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00548d6a:
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  local_bc = -1;
                                                  sscanf
                                                            (local_4328,"%[^,], %[^,], %n");
                                                  if (local_bc < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_34d4);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_37f4);
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    pcVar18 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (local_4328 + local_bc);
                                                  local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_0054aa60
                                                            (this_ptr,local_34d4,local_37f4,pcVar18)
                                                  ;
                                                  this_ptr->dialog_wav_time = local_14;
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    return -1;
                                                  }
                                                  }
                                                  if ((_DAT_01e810a8 == 0) &&
                                                     (local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < (int)local_164)) {
                                                    core_script_cpp_CScript_setSpeaker_FUN_0054aca0
                                                              (this_ptr,this_ptr->who_is_speaking);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "selectWeapon",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xc);
                                                  local_b8 = -1;
                                                  sscanf
                                                            (local_34," (%[^,], %[^)])%n");
                                                  if (local_b8 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing selectWeapon parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240(local_978)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240(local_784)
                                                  ;
                                                  local_34 = local_34 + local_b8;
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_978,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    this_ptr_00 = (CInventory *)(iVar7 + 0x1fae8);
                                                    local_b4 = _DAT_01e810a8;
                                                    pCVar14 = (CDemonActor *)
                                                              core_doc_cpp_FUN_004766f0(this_ptr_00)
                                                    ;
                                                    local_b0 = pCVar14;
                                                    if (pCVar14 != (CDemonActor *)0x0) {
                                                      do {
                                                        if (pCVar14 == (CDemonActor *)0x0) {
                                                          _DAT_01d1d400 = "..\\core\\script.cpp"
                                                          ;
                                                          _DAT_01d1d404 = 0xbc9;
                                                          core_main_c_FUN_005030e0
                                                                    (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar7 = core_actor_cpp_isOfClass_FUN_0040c550
                                                                    (pCVar14,local_784);
                                                  if (iVar7 != 0) goto LAB_0054450b;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
                                                            (this_ptr_00,(CDemonActor *)0x0,5,1);
                                                  pCVar14 = (CDemonActor *)
                                                            core_doc_cpp_FUN_004766f0(this_ptr_00);
                                                  } while (pCVar14 != local_b0);
                                                  }
                                                  if (local_b4 == 0) {
                                                    engine_console_cpp_FUN_00445430
                                                              (g_CConsolePtr,
                                                               "%s can't selectWeapon(%s)\n",
                                                               local_978,local_784);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setActorVariable",0x10);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0x10);
                                                  local_ac = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_ac < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setActorVariable command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_ac;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_291c);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1e2c);
                                                  iVar7 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00543100
                                                            (local_291c);
                                                  if (iVar7 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar14 = (CDemonActor *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_1e2c,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004a9ff0
                                                            (0x01C51D80,local_291c,pCVar14);
                                                  }
                                                  else {
                                                    iVar7 = _DAT_01e818bc;
                                                    if (pCVar14 == (CDemonActor *)0x0)
                                                    goto joined_r0x00549128;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xf);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_c98,100);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00548d6a;
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_0057d810
                                                            (0x02C82A60,local_c98);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xe);
                                                  local_a4 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d)%n");
                                                  if (local_a4 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setCameragroup parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_a4;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1c9c);
                                                  iVar7 = 0;
                                                  local_a0 = 0;
                                                  for (iVar15 = 0;
                                                      iVar15 < g_CDemonSetPtr->camera_count;
                                                      iVar15 = iVar15 + 1) {
                                                    iVar13 = 
                                                  shape_edittool_cpp_wildcardStringMatch_FUN_0049dea0
                                                            (local_1c9c,
                                                             g_CDemonSetPtr->cameras[0].name + iVar7
                                                             ,0);
                                                  if ((iVar13 != 0) &&
                                                     (local_a0 = 1, _DAT_01e810a8 == 0)) {
                                                    *(uint *)
                                                     ((int)(&g_CDemonSetPtr->cameras[0].
                                                             rotation_matrix + 1) + iVar7 + 0x10) =
                                                         local_a8;
                                                  }
                                                  iVar7 = iVar7 + 0x1a4;
                                                  }
                                                  if (local_a0 == 0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "No cameras found matching \"%s\"");
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0x12);
                                                  local_98 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %f)%n");
                                                  if (local_98 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setCharacterHealth parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_98;
                                                  core_script_cpp_trimString_FUN_00543240(local_e8c)
                                                  ;
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_e8c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    *(float *)(iVar7 + 0x2538) =
                                                         *(float *)(iVar7 + 0x253c) * local_9c;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"setEyes",7)
                                                    ;
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 7);
                                                  local_88 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d, %d, %f)%n");
                                                  if (local_88 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setEyes parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_88;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_214c);
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_214c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    core_charactr_cpp_FUN_0042e8e0
                                                              (iVar7,0,local_94,local_8c);
                                                    core_charactr_cpp_FUN_0042e8e0
                                                              (iVar7,1,local_90,local_8c);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setSwitchmap",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_2e94,200);
                                                  if (pcVar18 != (char *)0x0) {
LAB_005494ec:
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2e94);
                                                  if (_DAT_01e810a8 == 0) {
                                                    core_mission_cpp_FUN_0051c420
                                                              (0x01D2C900,local_2e94);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setFieldNotesImageSuffix",0x18);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0x18] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0x18);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_3aac,0x100);
                                                  if (pcVar18 != (char *)0x0) goto LAB_005494ec;
                                                  if (_DAT_01e810a8 == 0) {
                                                    core_fldnotes_cpp_FUN_004be0b0
                                                              (g_CFieldNotesPtr,local_3aac);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setFocusActor",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xd);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_5f4,100);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  pCVar14 = (CDemonActor *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_5f4,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (pCVar14 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (pCVar14 != this_ptr->focus_actor) {
                                                    this_ptr->focus_actor_changed = 1;
                                                    this_ptr->focus_actor = pCVar14;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setHeroTask",0xb);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xb);
                                                  local_84 = -1;
                                                  sscanf
                                                            (local_34," (%[^,], %[^)])%n");
                                                  if (local_84 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setHeroTask parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240(local_84c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240(local_2d4)
                                                  ;
                                                  local_34 = local_34 + local_84;
                                                  this_ptr_02 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_84c,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (this_ptr_02 == (CHero *)0x0)
                                                  goto joined_r0x00546052;
                                                  iVar15 = _stricmp
                                                                     (local_2d4,"stand");
                                                  iVar7 = 0;
                                                  if (iVar15 != 0) {
                                                    iVar7 = _stricmp
                                                                      (local_2d4,"follow");
                                                    if (iVar7 == 0) {
                                                      iVar7 = 1;
                                                    }
                                                    else {
                                                      iVar7 = _stricmp
                                                                        (local_2d4,&DAT_005ef89f);
                                                      if (iVar7 == 0) {
                                                        iVar7 = 2;
                                                      }
                                                      else {
                                                        iVar7 = _stricmp
                                                                          (local_2d4,
                                                                           "guard");
                                                        if (iVar7 == 0) {
                                                          iVar7 = 3;
                                                        }
                                                        else {
                                                          iVar7 = _stricmp
                                                                            (local_2d4,
                                                                             "suspend");
                                                          if (iVar7 != 0) {
                                                            _sprintf(&DAT_01e810b0,
                                                                       "Invalid Task: %s");
                                                            return -1;
                                                          }
                                                          iVar7 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    core_hero_cpp_CHero_setAiTask_FUN_004ec320
                                                              (this_ptr_02,iVar7);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"setIniInt",
                                                                       9);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 9);
                                                  local_7c = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d )%n");
                                                  if (local_7c < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_7c;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_165c);
                                                  if (_DAT_01e810a8 == 0) {
                                                    engine_ini_cpp_FUN_004f4b00
                                                              (&local_4720,
                                                               "system\\nocturne.ini",
                                                               &DAT_005ef902);
                                                    engine_ini_cpp_FUN_004f4d70
                                                              (&local_4720,local_165c,local_80);
                                                    engine_ini_cpp_CIniFile_dtor_FUN_004f4b30
                                                              (&local_4720,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"setMouth",8
                                                                      );
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 8);
                                                  local_6c = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d, %f)%n");
                                                  if (local_6c < 4) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setMouth parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_6c;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_3664);
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_3664,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    core_charactr_cpp_FUN_0042e920
                                                              (iVar7,local_74,local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0x12);
                                                  local_68 = -1;
                                                  sscanf
                                                            (local_34," (%n %n");
                                                  if (local_68 < 1) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setSayTimeOverride parameters.");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_68;
                                                  local_64 = -1.0;
                                                  if (*local_34 == ')') {
                                                    local_34 = local_34 + 1;
                                                  }
                                                  else {
                                                    local_68 = -1;
                                                    sscanf
                                                              (local_34,"%f )%n");
                                                    if (local_68 < 1) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_68;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    this_ptr->message_duration = local_64;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_c34,100);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00549af2:
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  iVar7 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_0054acc0
                                                            (this_ptr,local_c34);
                                                  if (iVar7 < 0) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Undefined label '%s'");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    this_ptr->saved_cmd_index = iVar7;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 10);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_4c8,100);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00549af2;
                                                  if (local_4c8[0] == '\0') {
                                                    this_ptr->who_is_speaking = (CDemonActor *)0x0;
                                                  }
                                                  else {
                                                    pCVar14 = (CDemonActor *)
                                                              core_script_cpp_getActor_FUN_005433c0
                                                                        (local_4c8,
                                                                         g_CCharacterClassInfo.
                                                                         name_hash,
                                                                         &g_CCharacterClassInfo);
                                                    this_ptr->who_is_speaking = pCVar14;
                                                    if (pCVar14 == (CDemonActor *)0x0)
                                                    goto joined_r0x00546052;
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
                                                                      (pcVar18,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xd);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_7e8,100);
                                                  if (pcVar18 == (char *)0x0) {
                                                    sscanf
                                                              (local_7e8,&DAT_005efa0a);
                                                    _sprintf(&DAT_01e810b0,
                                                               "Invalid time factor %s");
                                                    return -1;
                                                  }
                                                  pcVar20 = &DAT_01e810b0;
                                                  do {
                                                    cVar3 = *pcVar18;
                                                    *pcVar20 = cVar3;
                                                    if (cVar3 == '\0') {
                                                      return -1;
                                                    }
                                                    cVar3 = pcVar18[1];
                                                    pcVar18 = pcVar18 + 2;
                                                    pcVar20[1] = cVar3;
                                                    pcVar20 = pcVar20 + 2;
                                                  } while (cVar3 != '\0');
                                                  return -1;
                                                  }
                                                  iVar7 = _strnicmp
                                                                    (pcVar18,"setVictim",9)
                                                  ;
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 9);
                                                  local_5c = -1;
                                                  sscanf
                                                            (local_34,"(%[^,)]%n");
                                                  if (local_5c < 2) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setVictim command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_5c;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2f5c);
                                                  this_ptr_03 = (CEnemy *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_2f5c,g_CEnemyClassInfo.name_hash,
                                                             &g_CEnemyClassInfo);
                                                  if (this_ptr_03 == (CEnemy *)0x0)
                                                  goto joined_r0x00546052;
                                                  pCVar14 = (CDemonActor *)0x0;
                                                  if (*local_34 == ',') {
                                                    local_5c = -1;
                                                    sscanf
                                                              (local_34,", %[^)]%n");
                                                    if (local_5c < 3) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Error parsing setVictim command parms")
                                                      ;
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_5c;
                                                    core_script_cpp_trimString_FUN_00543240
                                                              (local_1594);
                                                    iVar7 = _stricmp
                                                                      (local_1594,"disable"
                                                                      );
                                                    pCVar14 = 0xFFFFFFFF;
                                                    if ((iVar7 != 0) &&
                                                       (pCVar14 = (CDemonActor *)
                                                                                                                                    
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_1594,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar14 == (CDemonActor *)0x0))
                                                  goto joined_r0x00546052;
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Missing closing ')' in setVictim command");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  if (_DAT_01e810a8 == 0) {
                                                    core_enemy_cpp_CEnemy_setVictim_FUN_004a0ee0
                                                              (this_ptr_03,pCVar14);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "setWalkTimeout",0xe);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xe);
                                                  local_54 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %f)%n");
                                                  if (local_54 < 3) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing setWalkTimeout parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_54;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_359c);
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_359c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar7 == 0) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    (**(code **)(*(int *)(iVar7 + 0x154) + 0x138))
                                                              (iVar7,local_58);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"snapToFace"
                                                                       ,10);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 10);
                                                  local_50 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_50 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error snaping turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_50;
                                                  core_script_cpp_trimString_FUN_00543240(local_f54)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1274);
                                                  local_4c = (CDemonActor *)
                                                             core_script_cpp_getActor_FUN_005433c0
                                                                       (local_f54,
                                                                        g_CDemonActorClassInfo.
                                                                        name_hash,
                                                                        &g_CDemonActorClassInfo);
                                                  if ((local_4c == (CDemonActor *)0x0) ||
                                                     (iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                        (local_1274,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo),
                                                     iVar7 == 0)) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    core_bodypart_cpp_FUN_0041afe0
                                                              (iVar7 + 0x20,&local_4c->location);
                                                    local_190 = local_1e4;
                                                    afStack_18c[(uint)bVar22 * -2] =
                                                         afStack_1e0[(uint)bVar22 * -2];
                                                    afStack_18c
                                                    [(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                                                         afStack_1e0
                                                         [(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1]
                                                    ;
                                                                                                        
                                                  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                                                            (&local_190);
                                                  local_1cc = afStack_18c[2];
                                                  afStack_1e0[(uint)bVar22 * -2 + 6] =
                                                       afStack_18c[(uint)bVar22 * -2 + 3];
                                                  afStack_1e0
                                                  [(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                                                       afStack_18c
                                                       [(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
                                                  (local_4c->orient).vec.y = local_1c8;
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
                                                            (local_4c);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"startSay",8
                                                                      );
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 8);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_451c,500);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  local_44 = -1;
                                                  sscanf
                                                            (local_451c,"%[^,], %[^,], %n");
                                                  if (local_44 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_11ac);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1724);
                                                  pcVar18 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (local_451c + local_44);
                                                  local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_0054aa60
                                                            (this_ptr,local_11ac,local_1724,pcVar18)
                                                  ;
                                                  this_ptr->dialog_wav_time = local_14;
                                                  fVar2 = this_ptr->dialog_wav_time;
                                                  goto joined_r0x0054a269;
                                                  }
                                                  iVar7 = _strnicmp
                                                                    (pcVar18,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_31b4,200);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  pcVar18 = local_31b4;
                                                  do {
                                                    pcVar20 = pcVar18;
                                                    if (*pcVar18 == ',') goto LAB_0054a2ef;
                                                    if (*pcVar18 == '\0') break;
                                                    pcVar20 = pcVar18 + 1;
                                                    if (*pcVar20 == ',') goto LAB_0054a2ef;
                                                    pcVar18 = pcVar18 + 2;
                                                  } while (*pcVar20 != '\0');
                                                  pcVar20 = (char *)0x0;
LAB_0054a2ef:
                                                  local_40 = -1;
                                                  pcVar19 = &DAT_005efb91;
                                                  local_18 = (uint)(pcVar20 != (char *)0x0);
                                                  iVar7 = -1;
                                                  pcVar18 = local_31b4;
                                                  do {
                                                    pcVar20 = pcVar18;
                                                    if (iVar7 == 0) break;
                                                    iVar7 = iVar7 + -1;
                                                    pcVar20 = pcVar18 + (uint)bVar22 * -2 + 1;
                                                    cVar3 = *pcVar18;
                                                    pcVar18 = pcVar20;
                                                  } while (cVar3 != '\0');
                                                  pcVar20 = pcVar20 + -1;
                                                  do {
                                                    cVar3 = *pcVar19;
                                                    *pcVar20 = cVar3;
                                                    if (cVar3 == '\0') break;
                                                    cVar3 = pcVar19[1];
                                                    pcVar19 = pcVar19 + 2;
                                                    pcVar20[1] = cVar3;
                                                    pcVar20 = pcVar20 + 2;
                                                  } while (cVar3 != '\0');
                                                  sscanf
                                                            (local_31b4,&DAT_005efb93);
                                                  if (local_40 < 1) {
                                                    pcVar18 = "Error parsing out camera name";
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240(local_270)
                                                  ;
                                                  iVar7 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0
                                                            (g_CDemonSetPtr,local_270);
                                                  if ((local_18 != 0) &&
                                                     (sscanf
                                                                (local_31b4 + local_40,&DAT_005efbba
                                                                ), _DAT_005efdb7 < 10000000000.0)) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Invalid hold time value");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_0055b1e0
                                                            (g_CDemonSetPtr,iVar7,1e+10);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,
                                                  "timedDisplay",0xc);
                                                  if ((iVar7 == 0) &&
                                                     (((&DAT_00626114)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_4008,300);
                                                  if (pcVar18 != (char *)0x0) {
LAB_0054a484:
                                                    pcVar20 = &DAT_01e810b0;
                                                    do {
                                                      cVar3 = *pcVar18;
                                                      *pcVar20 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar18[1];
                                                      pcVar18 = pcVar18 + 2;
                                                      pcVar20[1] = cVar3;
                                                      pcVar20 = pcVar20 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  local_3c = -1;
                                                  sscanf
                                                            (local_4008,"%f,%n");
                                                  if (local_3c < 2) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing time value");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e810a8 == 0) {
                                                    pcVar18 = this_ptr->current_message;
                                                    pcVar20 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (local_4008 + local_3c);
                                                  do {
                                                    cVar3 = *pcVar20;
                                                    *pcVar18 = cVar3;
                                                    if (cVar3 == '\0') break;
                                                    cVar3 = pcVar20[1];
                                                    pcVar20 = pcVar20 + 2;
                                                    pcVar18[1] = cVar3;
                                                    pcVar18 = pcVar18 + 2;
                                                  } while (cVar3 != '\0');
                                                  local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,local_38,time_remaining);
                                                  if (0 < (int)local_164) {
                                                    this_ptr->current_message[0] = '\0';
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"turnToFace"
                                                                       ,10);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 10);
                                                  local_2c = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_2c < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_2c;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_133c);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2854);
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_133c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if ((iVar7 == 0) ||
                                                     (iVar15 = core_script_cpp_getActor_FUN_005433c0
                                                                         (local_2854,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo),
                                                     iVar15 == 0)) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    (**(code **)(*(int *)(iVar7 + 0x154) + 0x134))
                                                              (iVar7,iVar15);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,&DAT_005efc44,4);
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 4);
                                                  local_28 = -1;
                                                  sscanf
                                                            (local_34,"(%f)%n");
                                                  if (local_28 < 1) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing time value on wait statament");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_28;
                                                  if (_DAT_01e810a8 == 0) {
                                                    local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,local_24,time_remaining);
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"waitFor",7)
                                                    ;
                                                    if ((iVar7 == 0) &&
                                                       (((&DAT_00626114)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 7);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00543380
                                                            (&local_34,local_9dc);
                                                  if (pcVar18 != (char *)0x0) goto LAB_0054a484;
                                                  if ((_DAT_01e810a8 == 0) &&
                                                     (iVar7 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_9dc), iVar7 == 0)) {
                                                    local_164 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar7 = _strnicmp
                                                                      (pcVar18,"walkTo",6);
                                                    if ((iVar7 != 0) ||
                                                       (((&DAT_00626114)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      pcVar18 = "Unknown command on line %d: %s";
                                                      goto LAB_005445cf;
                                                    }
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar18 + 6);
                                                  local_20 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^,)] %n");
                                                  if (local_20 < 5) {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Error parsing walkTo command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_20;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2214);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2084);
                                                  local_1c = 0;
                                                  if (*local_34 == ',') {
                                                    local_20 = -1;
                                                    sscanf
                                                              (local_34,",%f %n");
                                                    if (local_20 < 1) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_20;
                                                  }
                                                  local_178 = 0x501502f9;
                                                  if (*local_34 == ',') {
                                                    local_20 = -1;
                                                    sscanf
                                                              (local_34,",%f %n");
                                                    if (local_20 < 1) {
                                                      _sprintf(&DAT_01e810b0,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_20;
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(&DAT_01e810b0,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  iVar7 = core_script_cpp_getActor_FUN_005433c0
                                                                    (local_2214,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if ((iVar7 == 0) ||
                                                     (iVar15 = core_script_cpp_getActor_FUN_005433c0
                                                                         (local_2084,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo),
                                                     iVar15 == 0)) goto joined_r0x00546052;
                                                  if (_DAT_01e810a8 == 0) {
                                                    (**(code **)(*(int *)(iVar7 + 0x154) + 0x130))
                                                              (iVar7,iVar15,local_1c,local_178);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0054450b:
  if ((_DAT_01e810a8 != 2) && (*local_30 != '\0')) {
    _sprintf(&DAT_01e810b0,"Extra characters \"%s\" on line %d");
    return -1;
  }
LAB_00544524:
  if (local_160 == 1) {
    this_ptr->dialog_wav_time = -1.0;
    uVar16 = _DAT_01e810a8;
    this_ptr->cmd_timer = -1.0;
    if ((uVar16 == 0) && (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
      _sprintf(&DAT_01e810b0,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_160) {
    this_ptr->next_cmd = local_2c;
    return local_160;
  }
  return local_160;
}
