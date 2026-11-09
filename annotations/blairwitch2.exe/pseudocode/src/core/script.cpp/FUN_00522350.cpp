// Name: core_script.cpp_FUN_00522350
// Address: 00522350
// Address Range: [[00522350, 00529744]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_00522350(CScript *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005289a6) */
/* WARNING: Removing unreachable block (ram,0x005289b4) */
/* WARNING: Removing unreachable block (ram,0x005289c1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_script_cpp_FUN_00522350(CScript *param_1,float *param_2)

{
  CInventory *this_ptr;
  float fVar1;
  double dVar2;
  char cVar3;
  CGame *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  CVector3f *initial_velocity;
  uint uVar7;
  CCharacter *pCVar8;
  CPlatform *pCVar9;
  int *piVar10;
  CMotionList *pCVar11;
  CDemonActor *pCVar12;
  CDemonActor *pCVar13;
  CHero *this_ptr_00;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  byte bVar21;
  float local_4dc0;
  float local_4dbc;
  float local_4db0;
  CIniFile local_4dac;
  CIniFile local_4ba8;
  char local_49a4 [500];
  char local_47b0 [500];
  char local_45bc [300];
  char local_4490 [300];
  char local_4364 [300];
  char local_4238 [260];
  char local_4134 [256];
  char local_4034 [256];
  char local_3f34 [256];
  char local_3e34 [200];
  char local_3d6c [200];
  char local_3ca4 [200];
  char local_3bdc [200];
  char local_3b14 [200];
  char local_3a4c [200];
  char local_3984 [200];
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
  char local_246c [200];
  char local_23a4 [200];
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
  char local_165c [198];
  char acStack_1596 [202];
  char local_14cc [200];
  char local_1404 [200];
  char local_133c [200];
  char local_1274 [28];
  uint auStack_1258 [43];
  char local_11ac [200];
  int local_10e4 [30];
  char local_106c [100];
  char local_1008 [100];
  char local_fa4 [100];
  char local_f40 [100];
  char local_edc [100];
  char local_e78 [100];
  char local_e14 [100];
  char local_db0 [100];
  char local_d4c [100];
  char local_ce8 [100];
  char local_c84 [100];
  char local_c20 [100];
  char local_bbc [100];
  char local_b58 [100];
  char local_af4 [100];
  char local_a90 [100];
  char local_a2c [100];
  char local_9c8 [100];
  char local_964 [100];
  char local_900 [100];
  char local_89c [100];
  char local_838 [100];
  char local_7d4 [100];
  char local_770 [100];
  char local_70c [100];
  char local_6a8 [100];
  char local_644 [100];
  char local_5e0 [100];
  char local_57c [52];
  char local_548 [52];
  char local_514 [52];
  char local_4e0 [52];
  char local_4ac [52];
  char local_478 [52];
  char local_444 [52];
  char local_410 [52];
  char local_3dc [52];
  char local_3a8 [52];
  char local_374 [52];
  char local_340 [52];
  char local_30c [52];
  char local_2d8 [52];
  CMatrix3x3f local_2a4 [40];
  CVector3f local_27c;
  uint local_270;
  uint auStack_26c [5];
  uint local_258;
  uint local_254;
  uint local_24c [3];
  uint local_240;
  uint local_234 [3];
  CVector3f local_228;
  CVector3f local_21c;
  uint local_210;
  int local_20c;
  int local_208;
  uint local_204;
  CDemonLight *local_200;
  int local_1fc;
  C3DSLight *local_1f8;
  int local_1f4;
  int local_1f0;
  char *local_1ec;
  char *local_1e8;
  int local_1e4;
  byte *local_1e0;
  char *local_1dc;
  int local_1d8;
  int local_1d4;
  CCharacter *local_1d0;
  CBodyPart *local_1cc;
  char *local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint local_19c;
  int local_198;
  float local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  uint local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  CDemonActor *local_15c;
  uint local_158;
  int local_154;
  uint local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  uint local_138;
  uint local_134;
  int local_130;
  uint local_12c;
  uint local_128;
  int local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  int local_110;
  int local_10c;
  char *local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_cc;
  int local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  float local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  CDemonActor *local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  float local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  byte *local_18;
  uint local_14;
  
  bVar21 = 0;
  if ((*(int *)&param_1->field_0x44 < 0) ||
     (*(int *)&param_1->field_0x2c <= *(int *)&param_1->field_0x44)) {
    _DAT_01d046a0 = "..\\core\\script.cpp";
    _DAT_01d046a4 = 0x47e;
    core_main_c_FUN_004e4500("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar18 = "(no error message provided)";
  pcVar20 = &DAT_01e65100;
  do {
    cVar3 = *pcVar18;
    *pcVar20 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar18[1];
    pcVar18 = pcVar18 + 2;
    pcVar20[1] = cVar3;
    pcVar20 = pcVar20 + 2;
  } while (cVar3 != '\0');
  pcVar18 = *(char **)(*(int *)&param_1->field_0x30 + 4 + *(int *)&param_1->field_0x44 * 8);
  local_204 = *(uint *)(*(int *)&param_1->field_0x30 + *(int *)&param_1->field_0x44 * 8);
  local_208 = *(int *)&param_1->field_0x44;
  local_210 = 1;
  *(int *)&param_1->field_0x44 = local_208 + 1;
  cVar3 = *pcVar18;
  if ((cVar3 == '{') || (cVar3 == '}')) {
    local_1ec = &DAT_005e3182;
  }
  else if (cVar3 == ':') {
    local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 1);
    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_204,local_1ec));
    if (_DAT_01e650f8 != 0) {
      cVar3 = *local_1ec;
      for (pcVar18 = local_1ec;
          (cVar3 != '\0' &&
          ((((&DAT_0061ed94)[(byte)(*pcVar18 + 1)] & 0xe0) != 0 || (*pcVar18 == '_'))));
          pcVar18 = pcVar18 + 1) {
        cVar3 = pcVar18[1];
      }
      if (*pcVar18 != '\0') {
        pcVar18 = "Invalid label \"%s\" on line";
        goto LAB_005224bf;
      }
      iVar6 = core_script_cpp_FUN_005299b0(param_1,local_1ec);
      if (iVar6 < 0) {
        _DAT_01d046a0 = "..\\core\\script.cpp";
        _DAT_01d046a4 = 0x4b0;
        core_main_c_FUN_004e4500("Internal script error checking for duplicate label.");
      }
      if (iVar6 != local_208) {
        FUN_005b7790
                  (&DAT_01e65100,"Duplicate label %s on lines %d and %d",local_1ec,local_204,
                   *(uint *)(*(int *)&param_1->field_0x30 + iVar6 * 8));
        return -1;
      }
    }
    local_1ec = &DAT_005e320b;
  }
  else {
    iVar6 = _strnicmp(pcVar18,"syntaxCheckOn",0xd);
    if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) {
      if (_DAT_01e650f8 != 0) {
        _DAT_01e650f8 = 1;
      }
      local_1ec = &DAT_005e321a;
    }
    else {
      iVar6 = _strnicmp(pcVar18,"syntaxCheckOff",0xe);
      if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
        if (_DAT_01e650f8 != 0) {
          _DAT_01e650f8 = 2;
        }
        local_1ec = &DAT_005e322a;
      }
      else if (_DAT_01e650f8 != 2) {
        iVar6 = _strnicmp(pcVar18,"activateGadget",0xe);
        if ((((((((((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) ||
                  ((iVar6 = _strnicmp
                                      (pcVar18,"activatePuzzle",0xe), iVar6 == 0 &&
                   (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)))) ||
                 ((iVar6 = _strnicmp
                                     (pcVar18,"addFieldNotesTask",0x11), iVar6 == 0 &&
                  (((&DAT_0061ed94)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp
                                    (pcVar18,"advanceLightFilter",0x12), iVar6 == 0 &&
                 (((&DAT_0061ed94)[(byte)(pcVar18[0x12] + 1)] & 0xe0) == 0)))) ||
               ((((iVar6 = _strnicmp
                                     (pcVar18,"beginCarryItem",0xe), iVar6 == 0 &&
                  (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp
                                     (pcVar18,"completeFieldNotesTask",0x16), iVar6 == 0 &&
                  (((&DAT_0061ed94)[(byte)(pcVar18[0x16] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp
                                    (pcVar18,"createExplosion",0xf), iVar6 == 0 &&
                 (((&DAT_0061ed94)[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)))))) ||
              ((iVar6 = _strnicmp(pcVar18,"deleteActor",0xb),
               iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)))) ||
             (((((iVar6 = _strnicmp(pcVar18,"displayBitmap",0xd),
                 iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) ||
                ((iVar6 = _strnicmp
                                    (pcVar18,"displayFieldNotes",0x11), iVar6 == 0 &&
                 (((&DAT_0061ed94)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)))) ||
               ((((iVar6 = _strnicmp(pcVar18,"dropItem",8),
                  iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[8] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp(pcVar18,"hurtCharacter",0xd)
                  , iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)))) ||
                ((((iVar6 = _strnicmp(pcVar18,"incCounter",10),
                   iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) ||
                  ((iVar6 = _strnicmp
                                      (pcVar18,"enableFieldNotesEntry",0x15), iVar6 == 0 &&
                   (((&DAT_0061ed94)[(byte)(pcVar18[0x15] + 1)] & 0xe0) == 0)))) ||
                 ((iVar6 = _strnicmp
                                     (pcVar18,"enableFieldNotesAnnotation",0x1a), iVar6 == 0
                  && (((&DAT_0061ed94)[(byte)(pcVar18[0x1a] + 1)] & 0xe0) == 0)))))))) ||
              ((iVar6 = _strnicmp(pcVar18,"fadeSfx",7),
               iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)))))) ||
            ((((((iVar6 = _strnicmp
                                    (pcVar18,"fadeAmbientSound",0x10), iVar6 == 0 &&
                 (((&DAT_0061ed94)[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)) ||
                ((iVar6 = _strnicmp(pcVar18,"flagOn",6),
                 iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[6] + 1)] & 0xe0) == 0)))) ||
               ((((iVar6 = _strnicmp(pcVar18,"flagOff",7),
                  iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)) ||
                 (((iVar6 = _strnicmp(pcVar18,"gameFlagOn",10),
                   iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) ||
                  ((((iVar6 = _strnicmp
                                        (pcVar18,"gameFlagOff",0xb), iVar6 == 0 &&
                     (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)) ||
                    ((iVar6 = _strnicmp
                                        (pcVar18,"killCharacter",0xd), iVar6 == 0 &&
                     (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)))) ||
                   ((iVar6 = _strnicmp(pcVar18,"killHero",8),
                    iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[8] + 1)] & 0xe0) == 0)))))))) ||
                ((iVar6 = _strnicmp(pcVar18,"killSfx",7),
                 iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)))))) ||
              ((((((iVar6 = _strnicmp(pcVar18,"lightning",9),
                   iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] & 0xe0) == 0)) ||
                  ((iVar6 = _strnicmp(pcVar18,"playSfx",7),
                   iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] & 0xe0) == 0)))) ||
                 ((iVar6 = _strnicmp(pcVar18,"resetGore",9),
                  iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp(pcVar18,"setActorBool",0xc),
                 iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)))) ||
               ((((iVar6 = _strnicmp
                                     (pcVar18,"setCameraAmbient",0x10), iVar6 == 0 &&
                  (((&DAT_0061ed94)[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp(pcVar18,"setCounter",10),
                  iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp(pcVar18,"setDoorState",0xc),
                 iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)))))))) ||
             ((iVar6 = _strnicmp(pcVar18,"setGroupAmbient",0xf),
              iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)))))) ||
           ((((iVar6 = _strnicmp
                                 (pcVar18,"setLightFilterFrame",0x13), iVar6 == 0 &&
              (((&DAT_0061ed94)[(byte)(pcVar18[0x13] + 1)] & 0xe0) == 0)) ||
             ((iVar6 = _strnicmp(pcVar18,"setLeverState",0xd),
              iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)))) ||
            (((((iVar6 = _strnicmp(pcVar18,"setModelState",0xd),
                iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] & 0xe0) == 0)) ||
               ((iVar6 = _strnicmp(pcVar18,"setSunlight",0xb),
                iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)))) ||
              (((((iVar6 = _strnicmp(pcVar18,"setTimer",8),
                  iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[8] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp(pcVar18,"setWeather",10),
                  iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp(pcVar18,"shakeScreen",0xb),
                 iVar6 == 0 && (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0)))) ||
               ((iVar6 = _strnicmp
                                   (pcVar18,"slamModelToMotion",0x11), iVar6 == 0 &&
                (((&DAT_0061ed94)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)))))) ||
             (((iVar6 = _strnicmp
                                  (pcVar18,"turnToFieldNotesEntry",0x15), iVar6 == 0 &&
               (((&DAT_0061ed94)[(byte)(pcVar18[0x15] + 1)] & 0xe0) == 0)) ||
              ((iVar6 = _strnicmp(pcVar18,"warpTo",6), iVar6 == 0
               && (((&DAT_0061ed94)[(byte)(pcVar18[6] + 1)] & 0xe0) == 0)))))))))) {
          if (_DAT_01e650f8 == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,pcVar18);
          }
          else {
            pcVar18 = core_event_cpp_CEventList_validateCommands_FUN_0048e3e0(0x01C38BC0,pcVar18);
            if (pcVar18 != (char *)0x0) goto LAB_00523d13;
          }
          local_1ec = &DAT_005e346e;
        }
        else {
          iVar6 = _strnicmp(pcVar18,"addItemToInventory",0x12);
          if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0x12] + 1)] & 0xe0) == 0)) {
            local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 0x12);
            local_160 = -1;
            sscanf(local_1ec," ( %[^,], %[^)])%n");
            if (local_160 < 3) {
              FUN_005b7790(&DAT_01e65100,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_1ec = local_1ec + local_160;
            core_script_cpp_trimString_FUN_00521110(local_291c);
            core_script_cpp_trimString_FUN_00521110(local_1e2c);
            iVar6 = core_script_cpp_getActor_FUN_00521290
                              (local_291c,g_CHeroClassInfo.name_hash,&g_CHeroClassInfo);
            if ((iVar6 == 0) ||
               (iVar15 = core_script_cpp_getActor_FUN_00521290
                                   (local_1e2c,g_CDemonActorClassInfo.name_hash,
                                    &g_CDemonActorClassInfo), iVar15 == 0)) goto joined_r0x0052419d;
            if (_DAT_01e650f8 == 0) {
              core_inv_cpp_FUN_004dadb0(iVar6 + 0x2437c,iVar15,0,0);
            }
          }
          else {
            iVar6 = _strnicmp(pcVar18,"addLightFilter",0xe);
            if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
              local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 0xe);
              local_64 = -1;
              sscanf(local_1ec,"( %[^,], %[^,], %f )%n");
              if (local_64 < 5) {
                FUN_005b7790(&DAT_01e65100,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_1ec = local_1ec + local_64;
              core_set_cpp_CDemonSet_addLightFilter_FUN_00534770
                        (g_CDemonSetPtr,local_e14,&local_1f8,&local_200);
              if (local_1f8 == (C3DSLight *)0x0) {
                FUN_005b7790
                          (&DAT_01e65100,"Light \"%s\" does not exist",local_e14);
                return -1;
              }
              iVar6 = engine_dosio_cpp_getFileSize_FUN_00460aa0(&DAT_005e352f,local_770);
              if (iVar6 < 1) {
                FUN_005b7790(&DAT_01e65100,"Can't open filter \"%s\"",local_770);
                return -1;
              }
              if (_DAT_01e650f8 == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_0053bbc0(local_1f8,local_770,local_158,0);
              }
            }
            else {
              iVar6 = _strnicmp(pcVar18,"allowEnemyAttack",0x10);
              if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)) {
                local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 0x10);
                pcVar18 = core_script_cpp_parseConditionExpr_FUN_00521250(&local_1ec,local_70c);
                if (pcVar18 != (char *)0x0) {
LAB_00523d13:
                  pcVar20 = &DAT_01e65100;
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
                if (_DAT_01e650f8 == 0) {
                  iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                    (0x01C38BC0,local_70c);
                  *(int *)&g_CGamePtr->field_0x24c = iVar6;
                }
              }
              else {
                iVar6 = _strnicmp
                                  (pcVar18,"allowHeroControls",0x11);
                if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)) {
                  local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 0x11);
                  pcVar18 = core_script_cpp_parseConditionExpr_FUN_00521250(&local_1ec,local_edc);
                  if (pcVar18 != (char *)0x0) goto LAB_00523d13;
                  if (_DAT_01e650f8 == 0) {
                    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                      (0x01C38BC0,local_edc);
                    _DAT_01e65904 = (uint)(iVar6 == 0);
                    *(uint *)&g_CGamePtr->field_0x254 = _DAT_01e65904;
                  }
                }
                else {
                  iVar6 = _strnicmp
                                    (pcVar18,"allowHeroDamage",0xf);
                  if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0xf] + 1)] & 0xe0) == 0)) {
                    local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 0xf);
                    pcVar18 = core_script_cpp_parseConditionExpr_FUN_00521250(&local_1ec,local_5e0);
                    if (pcVar18 != (char *)0x0) goto LAB_00523d13;
                    if (_DAT_01e650f8 == 0) {
                      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                        (0x01C38BC0,local_5e0);
                      *(int *)&g_CGamePtr->field_0x248 = iVar6;
                    }
                  }
                  else {
                    iVar6 = _strnicmp
                                      (pcVar18,"attachActorToPlatform",0x15);
                    if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0x15] + 1)] & 0xe0) == 0))
                    {
                      local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 0x15);
                      local_1fc = -1;
                      sscanf(local_1ec,"(%[^,], %[^)])%n");
                      if (local_1fc < 2) {
                        FUN_005b7790
                                  (&DAT_01e65100,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_1ec = local_1ec + local_1fc;
                      core_script_cpp_trimString_FUN_00521110(local_133c);
                      core_script_cpp_trimString_FUN_00521110(local_3664);
                      pCVar9 = (CPlatform *)
                               core_script_cpp_getActor_FUN_00521290
                                         (local_3664,g_CPlatformClassInfo.name_hash,
                                          &g_CPlatformClassInfo);
                      if ((pCVar9 == (CPlatform *)0x0) ||
                         (pCVar12 = (CDemonActor *)
                                    core_script_cpp_getActor_FUN_00521290
                                              (local_133c,g_CDemonActorClassInfo.name_hash,
                                               &g_CDemonActorClassInfo),
                         pCVar12 == (CDemonActor *)0x0)) goto joined_r0x0052419d;
                      if (_DAT_01e650f8 == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_00519a60(pCVar9,pCVar12);
                      }
                    }
                    else {
                      iVar6 = _strnicmp
                                        (pcVar18,"beginFadeIn",0xb);
                      if ((iVar6 == 0) && (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] & 0xe0) == 0))
                      {
                        local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 0xb);
                        if (_DAT_01e650f8 == 0) {
                          core_game_cpp_FUN_004bb240(g_CGamePtr);
                        }
                      }
                      else {
                        iVar6 = _strnicmp
                                          (pcVar18,"beginFadeOut",0xc);
                        if ((iVar6 == 0) &&
                           (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                          local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 0xc);
                          if (_DAT_01e650f8 == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004bb280(g_CGamePtr);
                          }
                        }
                        else {
                          iVar6 = _strnicmp
                                            (pcVar18,"breakPoint",10);
                          if ((iVar6 == 0) &&
                             (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) {
                            local_1ec = core_script_cpp_skipWhitespace_FUN_00521180(pcVar18 + 10);
                            if (_DAT_01e650f8 == 0) {
                              FUN_005b7790
                                        (local_c84,"Script breakpoint reached at line %d",local_204);
                              core_game_cpp_CGame_displayMessage_FUN_004b31a0
                                        (g_CGamePtr,local_c84,5.0);
                              *(uint *)&param_1->field_0x1c = 2;
                            }
                          }
                          else {
                            iVar6 = _strnicmp
                                              (pcVar18,"cancelCameraHold",0x10);
                            if ((iVar6 == 0) &&
                               (((&DAT_0061ed94)[(byte)(pcVar18[0x10] + 1)] & 0xe0) == 0)) {
                              local_1ec = core_script_cpp_skipWhitespace_FUN_00521180
                                                    (pcVar18 + 0x10);
                              if (_DAT_01e650f8 == 0) {
                                core_setdir_cpp_FUN_00539840(g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar6 = _strnicmp
                                                (pcVar18,"cancelWalkTo",0xc);
                              if ((iVar6 == 0) &&
                                 (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] & 0xe0) == 0)) {
                                local_1ec = core_script_cpp_skipWhitespace_FUN_00521180
                                                      (pcVar18 + 0xc);
                                pcVar18 = core_script_cpp_parseArgument_FUN_005211a0
                                                    (&local_1ec,local_1a44,200);
                                if (pcVar18 != (char *)0x0) {
                                  pcVar20 = &DAT_01e65100;
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
                                iVar6 = _stricmp(local_1a44,&DAT_005e363d)
                                ;
                                if (iVar6 == 0) {
                                  if (_DAT_01e650f8 == 0) {
                                    iVar15 = 0;
                                    for (iVar6 = 0; iVar6 < *(int *)&g_CDemonSetPtr->field_0x14d164;
                                        iVar6 = iVar6 + 1) {
                                      iVar14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                                         (*(uint *)
                                                           (&g_CDemonSetPtr->field_0x14d168 + iVar15
                                                           ),g_CCharacterClassInfo.name_hash);
                                      if (iVar14 != 0) {
                                        (**(code **)(*(int *)(iVar14 + 0x2b0) + 0x138))
                                                  (iVar14,0,0,0);
                                      }
                                      iVar15 = iVar15 + 4;
                                    }
                                  }
                                }
                                else {
                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                    (local_1a44,g_CCharacterClassInfo.name_hash,
                                                     &g_CCharacterClassInfo);
                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                  if (_DAT_01e650f8 == 0) {
                                    (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x138))(iVar6,0,0,0);
                                  }
                                }
                              }
                              else {
                                iVar6 = _strnicmp
                                                  (pcVar18,"chainToMission",0xe);
                                if ((iVar6 == 0) &&
                                   (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)) {
                                  local_1ec = core_script_cpp_skipWhitespace_FUN_00521180
                                                        (pcVar18 + 0xe);
                                  pcVar18 = core_script_cpp_parseArgument_FUN_005211a0
                                                      (&local_1ec,local_3a4c,200);
                                  if (pcVar18 != (char *)0x0) {
LAB_00524455:
                                    pcVar20 = &DAT_01e65100;
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
                                  core_script_cpp_trimString_FUN_00521110(local_3a4c);
                                  uVar16 = _DAT_01e650f8;
                                  if (_DAT_01e650f8 == 0) {
                                    core_mission_cpp_FUN_004fccd0(0x01D182F0,local_3a4c);
                                    *(uint *)param_1 = 1;
                                    local_210 = uVar16;
                                  }
                                }
                                else {
                                  iVar6 = _strnicmp
                                                    (pcVar18,"changeSetFilename",0x11);
                                  if ((iVar6 == 0) &&
                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x11] + 1)] & 0xe0) == 0)) {
                                    local_1ec = core_script_cpp_skipWhitespace_FUN_00521180
                                                          (pcVar18 + 0x11);
                                    local_1f0 = -1;
                                    sscanf(local_1ec,"(%d , %[^)])%n");
                                    if (local_1f0 < 2) {
                                      FUN_005b7790
                                                (&DAT_01e65100,"Error parsing changeSetFilename command parms");
                                      return -1;
                                    }
                                    local_1ec = local_1ec + local_1f0;
                                    core_script_cpp_trimString_FUN_00521110(local_4034);
                                    if ((local_1f4 < 0) || (*(int *)(0x01D182F0 + 4) <= local_1f4)
                                       ) {
                                      FUN_005b7790
                                                (&DAT_01e65100,"Invalid set index");
                                      return -1;
                                    }
                                    engine_dosio_cpp_FUN_00461070
                                              (local_4034,(char *)0x0,(char *)0x0,(char *)0x0,
                                               local_4134);
                                    if (local_4134[0] == '\0') {
                                      pcVar20 = &DAT_005e36b1;
                                      iVar6 = -1;
                                      pcVar18 = local_4034;
                                      do {
                                        pcVar19 = pcVar18;
                                        if (iVar6 == 0) break;
                                        iVar6 = iVar6 + -1;
                                        pcVar19 = pcVar18 + (uint)bVar21 * -2 + 1;
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
                                    iVar6 = engine_dosio_cpp_getFileSize_FUN_00460aa0
                                                      ("models",local_4034);
                                    if (iVar6 < 1) {
                                      FUN_005b7790
                                                (&DAT_01e65100,"File models\\%s doesn't exist",
                                                 local_4034);
                                      return -1;
                                    }
                                    if (_DAT_01e650f8 == 0) {
                                      core_mission_cpp_FUN_004fc5a0
                                                (0x01D182F0,local_1f4,local_4034);
                                    }
                                  }
                                  else {
                                    iVar6 = _strnicmp
                                                      (pcVar18,"dbSay",5);
                                    if ((iVar6 == 0) &&
                                       (((&DAT_0061ed94)[(byte)(pcVar18[5] + 1)] & 0xe0) == 0)) {
                                      local_1ec = core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 5);
                                      local_1e8 = (char *)0xffffffff;
                                      sscanf(local_1ec,"(%[^)])%n");
                                      if ((int)local_1e8 < 3) {
                                        FUN_005b7790
                                                  (&DAT_01e65100,"Error parsing dbSay arguments"
                                                  );
                                        return -1;
                                      }
                                      core_script_cpp_trimString_FUN_00521110(local_644);
                                      local_1ec = local_1ec + (int)local_1e8;
                                      iVar6 = core_script_cpp_FUN_00529f90(param_1,local_644);
                                      if (iVar6 < 0) {
                                        local_108 = local_3984;
                                        local_18 = &DAT_005e3708;
                                        FUN_005b7790
                                                  (local_3984,"[Can't find %s in database]",
                                                   local_644);
                                        shape_edittool_cpp_CStrList_add_FUN_00480e70
                                                  ((CStrList *)&g_ScriptPickList,local_3984);
                                      }
                                      else {
                                        iVar6 = iVar6 * 0x226 + *(int *)&param_1->field_0x24;
                                        local_18 = (byte *)(iVar6 + 0x78);
                                        local_108 = (char *)(iVar6 + 0x96);
                                        pcVar20 = local_644;
                                        pcVar18 = (char *)(iVar6 + 0x3c);
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
                                      if (*(float *)&param_1->field_0x4c < 0.0) {
                                        local_14 = core_script_cpp_FUN_00529750
                                                             (param_1,local_18,local_644,local_108);
                                        *(uint *)&param_1->field_0x4c = local_14;
                                        if (*(float *)&param_1->field_0x4c < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((_DAT_01e650f8 == 0) &&
                                         (local_210 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00529910
                                                            (param_1,*(float *)&param_1->field_0x4c,
                                                             param_2), 0 < (int)local_210)) {
                                        core_script_cpp_FUN_00529990
                                                  (param_1,*(CDemonActor **)&param_1->field_0x4);
                                      }
                                    }
                                    else {
                                      iVar6 = _strnicmp
                                                        (pcVar18,"dbStartSay",10);
                                      if ((iVar6 == 0) &&
                                         (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] & 0xe0) == 0)) {
                                        local_1ec = core_script_cpp_skipWhitespace_FUN_00521180
                                                              (pcVar18 + 10);
                                        local_1e4 = -1;
                                        sscanf(local_1ec,"(%[^)])%n");
                                        if (local_1e4 < 3) {
                                          FUN_005b7790
                                                    (&DAT_01e65100,
                                                     "Error parsing dbSay arguments");
                                          return -1;
                                        }
                                        core_script_cpp_trimString_FUN_00521110(local_a90);
                                        local_1ec = local_1ec + local_1e4;
                                        iVar6 = core_script_cpp_FUN_00529f90(param_1,local_a90);
                                        if (iVar6 < 0) {
                                          local_1dc = local_2d04;
                                          local_1e0 = &DAT_005e3759;
                                          FUN_005b7790
                                                    (local_2d04,"[Can't find %s in database]",
                                                     local_a90);
                                          shape_edittool_cpp_CStrList_add_FUN_00480e70
                                                    ((CStrList *)&g_ScriptPickList,local_2d04);
                                        }
                                        else {
                                          iVar6 = iVar6 * 0x226 + *(int *)&param_1->field_0x24;
                                          local_1e0 = (byte *)(iVar6 + 0x78);
                                          local_1dc = (char *)(iVar6 + 0x96);
                                          pcVar20 = local_a90;
                                          pcVar18 = (char *)(iVar6 + 0x3c);
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
                                        local_14 = core_script_cpp_FUN_00529750
                                                             (param_1,local_1e0,local_a90,local_1dc)
                                        ;
                                        *(uint *)&param_1->field_0x4c = local_14;
                                        fVar1 = *(float *)&param_1->field_0x4c;
joined_r0x00528f4d:
                                        if (fVar1 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar6 = _strnicmp
                                                          (pcVar18,"dbTimedDisplay",0xe);
                                        if ((iVar6 == 0) &&
                                           (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] & 0xe0) == 0)
                                           ) {
                                          local_1ec = core_script_cpp_skipWhitespace_FUN_00521180
                                                                (pcVar18 + 0xe);
                                          local_1d8 = -1;
                                          sscanf(local_1ec,"(%[^,], %f)%n");
                                          if (local_1d8 < 3) {
                                            FUN_005b7790
                                                      (&DAT_01e65100,
                                                       "Error parsing dbTimedDisplay arguments");
                                            return -1;
                                          }
                                          core_script_cpp_trimString_FUN_00521110(local_db0);
                                          local_1ec = local_1ec + local_1d8;
                                          iVar6 = core_script_cpp_FUN_00529f90(param_1,local_db0);
                                          if (iVar6 < 0) {
                                            local_1c8 = local_23a4;
                                            FUN_005b7790
                                                      (local_23a4,
                                                       "[Can't find %s in database]",local_db0
                                                      );
                                          }
                                          else {
                                            iVar6 = iVar6 * 0x226 + *(int *)&param_1->field_0x24;
                                            local_1c8 = (char *)(iVar6 + 0x96);
                                            pcVar20 = local_db0;
                                            pcVar18 = (char *)(iVar6 + 0x3c);
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
                                          if (_DAT_01e650f8 == 0) {
                                            pcVar18 = &param_1->field_0x50;
                                            pcVar20 = local_1c8;
                                            do {
                                              cVar3 = *pcVar20;
                                              *pcVar18 = cVar3;
                                              if (cVar3 == '\0') break;
                                              cVar3 = pcVar20[1];
                                              pcVar20 = pcVar20 + 2;
                                              pcVar18[1] = cVar3;
                                              pcVar18 = pcVar18 + 2;
                                            } while (cVar3 != '\0');
                                            local_210 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00529910
                                                            (param_1,local_194,param_2);
                                            if (0 < (int)local_210) {
                                              param_1->field_0x50 = 0;
                                            }
                                          }
                                        }
                                        else {
                                          iVar6 = _strnicmp
                                                            (pcVar18,"debug",5);
                                          if ((iVar6 == 0) &&
                                             (((&DAT_0061ed94)[(byte)(pcVar18[5] + 1)] & 0xe0) == 0)
                                             ) {
                                            local_1ec = core_script_cpp_skipWhitespace_FUN_00521180
                                                                  (pcVar18 + 5);
                                            pcVar18 = core_script_cpp_parseArgument_FUN_005211a0
                                                                (&local_1ec,local_4490,300);
                                            if (pcVar18 != (char *)0x0) goto LAB_00524455;
                                            if (_DAT_01e650f8 == 0) {
                                              shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                                                        (g_CEditorToolsPtr,
                                                         "Script debug message at line %d:\n%s");
                                            }
                                          }
                                          else {
                                            iVar6 = _strnicmp
                                                              (pcVar18,"dismember",9);
                                            if ((iVar6 == 0) &&
                                               (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] & 0xe0) ==
                                                0)) {
                                              local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 9);
                                              local_1d4 = -1;
                                              sscanf
                                                        (local_1ec,"(%[^,], %[^,)]%n");
                                              if (local_1d4 < 5) {
                                                FUN_005b7790
                                                          (&DAT_01e65100,
                                                           "Error parsing dismember command parms");
                                                return -1;
                                              }
                                              local_1ec = local_1ec + local_1d4;
                                              core_script_cpp_trimString_FUN_00521110(local_29e4);
                                              core_script_cpp_trimString_FUN_00521110(local_340c);
                                              local_1d0 = (CCharacter *)
                                                          core_script_cpp_getActor_FUN_00521290
                                                                    (local_29e4,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                              if (local_1d0 == (CCharacter *)0x0)
                                              goto joined_r0x0052419d;
                                              iVar6 = core_script_cpp_FUN_00521500
                                                                (local_1d0,local_340c,local_10e4);
                                              if (iVar6 == 0) {
                                                return -1;
                                              }
                                              core_actor_cpp_CVector3f_ctor_FUN_0040d340(&local_27c)
                                              ;
                                              initial_velocity = (CVector3f *)0x0;
                                              if (*local_1ec == ',') {
                                                local_1d4 = -1;
                                                sscanf
                                                          (local_1ec,",%f ,%f ,%f ,%f %n");
                                                if (local_1d4 < 5) {
                                                  FUN_005b7790
                                                            (&DAT_01e65100,
                                                             "Error parsing dismember command parms");
                                                  return -1;
                                                }
                                                local_1ec = local_1ec + local_1d4;
                                                if (0.0 < local_4dbc) {
                                                  fVar1 = local_4dbc * _DAT_005e4d83 * _DAT_005e4d87
                                                  ;
                                                  local_14 = core_actor_cpp_FUN_0040cf60
                                                                       (-fVar1,fVar1);
                                                  local_14 = core_actor_cpp_FUN_0040cf60
                                                                       (-fVar1,fVar1,0,local_14);
                                                  core_charactr_cpp_FUN_0042bef0(local_14);
                                                  local_21c._0_4_ = local_228._0_4_;
                                                  *(uint *)
                                                   ((int)&local_21c + (uint)bVar21 * -8 + 4) =
                                                       *(uint *)
                                                        ((int)&local_228 + (uint)bVar21 * -8 + 4);
                                                  *(uint *)
                                                   ((int)&local_21c +
                                                   (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                                                       *(uint *)
                                                        ((int)&local_228 +
                                                        (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
                                                  core_dirmat_cpp_FUN_00449280(local_2a4,&local_21c)
                                                  ;
                                                  core_dirmat_cpp_FUN_00449530(local_2a4,&local_27c)
                                                  ;
                                                  local_234[0] = local_240;
                                                  auStack_26c[(uint)bVar21 * -2 + 0xf] =
                                                       auStack_26c[(uint)bVar21 * -2 + 0xc];
                                                  auStack_26c
                                                  [(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x10] =
                                                       auStack_26c
                                                       [(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd]
                                                  ;
                                                  core_actor_cpp_FUN_0040d350
                                                            (&local_27c,auStack_26c + 0xe);
                                                }
                                                initial_velocity = &local_27c;
                                              }
                                              if (*local_1ec != ')') {
                                                FUN_005b7790
                                                          (&DAT_01e65100,
                                                           "Error parsing dismember command parms near '%s'",
                                                           local_1ec);
                                                return -1;
                                              }
                                              local_1ec = local_1ec + 1;
                                              if (_DAT_01e650f8 == 0) {
                                                iVar6 = 0;
                                                local_1cc = core_bodypart_cpp_FUN_004154f0
                                                                      ((CVector3f *)
                                                                       &local_1d0->field_0x20,
                                                                       (UOrientationVector *)
                                                                       &local_1d0->field_0x30,
                                                                       initial_velocity,
                                                                       (CDemonActor *)local_1d0,0,0,
                                                                       *(EBloodType *)
                                                                        &local_1d0->field_0x280c);
                                                iVar15 = 0;
                                                do {
                                                  if (*(int *)((int)local_10e4 + iVar15) != 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                                                            (local_1d0,local_1cc,iVar6,0);
                                                  }
                                                  iVar6 = iVar6 + 1;
                                                  iVar15 = iVar15 + 4;
                                                } while (iVar6 < 0x1e);
                                                core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700
                                                          (local_1cc);
                                              }
                                            }
                                            else {
                                              iVar6 = _strnicmp
                                                                (pcVar18,"display",7);
                                              if ((iVar6 == 0) &&
                                                 (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 7);
                                                pcVar18 = core_script_cpp_parseArgument_FUN_005211a0
                                                                    (&local_1ec,&param_1->field_0x50
                                                                     ,0x400);
                                                if (pcVar18 != (char *)0x0) {
                                                  FUN_005b7790
                                                            (&DAT_01e65100,
                                                             "Error parsing message text on display statament: %s",
                                                             pcVar18);
                                                  return -1;
                                                }
                                              }
                                              else {
                                                iVar6 = _strnicmp
                                                                  (pcVar18,&DAT_005e38e7,4);
                                                if ((iVar6 == 0) &&
                                                   (((&DAT_0061ed94)[(byte)(pcVar18[4] + 1)] & 0xe0)
                                                    == 0)) {
                                                  local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 4);
                                                  iVar6 = core_script_cpp_FUN_00529a10
                                                                    (param_1,*(uint *)
                                                                              &param_1->field_0x44,1
                                                                    );
                                                  if (iVar6 < 0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Can't skip next command after else statement on line %d",
                                                               local_204);
                                                    return -1;
                                                  }
                                                  *(int *)&param_1->field_0x44 = iVar6;
                                                }
                                                else {
                                                  iVar6 = _strnicmp
                                                                    (pcVar18,"enableCamera"
                                                                     ,0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  local_88 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_88 < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing enableCamera parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_88;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_22dc);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2214);
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0
                                                            (g_CDemonSetPtr,local_22dc);
                                                  if (iVar6 < 0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Camera \"%s\" does not exist.",
                                                               local_22dc);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    iVar15 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,local_2214);
                                                  core_set_cpp_CDemonSet_setCameraEnabled_FUN_00534700
                                                            (g_CDemonSetPtr,iVar6,iVar15);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                                            (0x01C38BC0,local_2214);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e65100;
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
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x11);
                                                  local_1c0 = -1;
                                                  sscanf
                                                            (local_1ec,"(%d , %[^)])%n");
                                                  if (local_1c0 < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing enableCameraGroup parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_1c0;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_3e34);
                                                  if (_DAT_01e650f8 == 0) {
                                                    iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,local_3e34);
                                                  core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_00534720
                                                            (g_CDemonSetPtr,local_1c4,iVar6);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                                            (0x01C38BC0,local_3e34);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00525147:
                                                    pcVar20 = &DAT_01e65100;
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
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xf);
                                                  local_1bc = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_1bc < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing enableHealthBar parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_1bc;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2b74);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_3ca4);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_2b74,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  iVar15 = _stricmp
                                                                     (local_3ca4,"false");
                                                  uVar7 = 0;
                                                  if (iVar15 != 0) {
                                                    iVar15 = _stricmp
                                                                       (local_3ca4,&DAT_005e3a11);
                                                    if (iVar15 == 0) {
                                                      uVar7 = 1;
                                                    }
                                                    else {
                                                      iVar15 = _stricmp
                                                                         (local_3ca4,
                                                                          "always");
                                                      if (iVar15 != 0) {
                                                        FUN_005b7790
                                                                  (&DAT_01e65100,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'",local_3ca4);
                                                  return -1;
                                                  }
                                                  uVar7 = 2;
                                                  }
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(uint *)(iVar6 + 0x25b0) = uVar7;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,&DAT_005e3a3a,3);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 3);
                                                  if (_DAT_01e650f8 == 0) {
                                                    local_210 = _DAT_01e650f8;
                                                    *(uint *)param_1 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"fadeIn",6);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 6);
                                                  if (_DAT_01e650f8 == 0) {
                                                    local_210 = _DAT_01e650f8;
                                                    if (0.0 <= *(float *)&param_1->field_0x48) {
                                                      iVar6 = core_game_cpp_FUN_004bb4e0(g_CGamePtr)
                                                      ;
                                                      if (iVar6 != 0) {
                                                        local_210 = 1;
                                                        *(uint *)&g_CGamePtr->field_0x248 = 1;
                                                      }
                                                    }
                                                    else {
                                                      core_game_cpp_FUN_004bb240(g_CGamePtr);
                                                      *(uint *)&param_1->field_0x48 =
                                                           0x3f800000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"fadeOut",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 7);
                                                  uVar16 = _DAT_01e650f8;
                                                  pCVar4 = g_CGamePtr;
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(uint *)&g_CGamePtr->field_0x248 = 0;
                                                    local_210 = uVar16;
                                                    if (0.0 <= *(float *)&param_1->field_0x48) {
                                                      iVar6 = core_game_cpp_FUN_004bb4e0(pCVar4);
                                                      if (iVar6 != 0) {
                                                        local_210 = 1;
                                                      }
                                                    }
                                                    else {
                                                      core_game_cpp_CGame_beginFadeOut_FUN_004bb280
                                                                (pCVar4);
                                                      *(uint *)&param_1->field_0x48 =
                                                           0x3f800000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"gesture",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 7);
                                                  local_1b8 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_1b8 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing gesture command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_1b8;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_1ef4);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2aac);
                                                  pCVar8 = (CCharacter *)
                                                           core_script_cpp_getActor_FUN_00521290
                                                                     (local_1ef4,
                                                                      g_CCharacterClassInfo.
                                                                      name_hash,
                                                                      &g_CCharacterClassInfo);
                                                  if (pCVar8 == (CCharacter *)0x0)
                                                  goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    uVar16 = core_charactr_cpp_FUN_004291b0
                                                                       (pCVar8,local_2aac);
                                                  }
                                                  else {
                                                    iVar6 = 0;
                                                    pcVar18 = local_2aac;
                                                    pCVar11 = core_motion_cpp_FUN_00503860
                                                                        ((CMotionController *)
                                                                         &pCVar8->field_0x2b4);
                                                    iVar6 = core_motion_cpp_FUN_00502f10
                                                                      (pCVar11,pcVar18,iVar6);
                                                    uVar16 = (uint)(-1 < iVar6);
                                                  }
                                                  if (uVar16 == 0) {
                                                    uVar7 = 
                                                  core_bugs_cpp_getDeformableModelName_FUN_004220f0
                                                            (&pCVar8->field_0x2b4);
                                                  FUN_005b7790
                                                            (&DAT_01e65100,
                                                             "Gesture name %s is not valid for actor %s, model %s",
                                                             local_2aac,local_1ef4,uVar7);
                                                  return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"getIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 9);
                                                  local_1b4 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^,)] )%n");
                                                  if (local_1b4 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing getIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_1b4;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_214c);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2534);
                                                  if (_DAT_01e650f8 == 0) {
                                                    engine_ini_cpp_FUN_004d8910
                                                              (&local_4dac,
                                                               "system\\nocturne.ini",
                                                               &DAT_005e3b01);
                                                    local_1b0 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00491510
                                                            (0x01C38BC0,local_2534);
                                                  engine_ini_cpp_FUN_004d8b20
                                                            (&local_4dac,local_214c,&local_1b0);
                                                  core_event_cpp_CEventList_setCounter_FUN_00491400
                                                            (0x01C38BC0,local_2534,local_1b0);
                                                  engine_ini_cpp_CIniFile_dtor_FUN_004d8940
                                                            (&local_4dac,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xf);
                                                  local_60 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_60 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing getTriggerActor command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_60;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_246c);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_3d6c);
                                                  iVar6 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00520fd0
                                                            (local_246c);
                                                  if (iVar6 == 0) {
                                                    return -1;
                                                  }
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_3d6c,
                                                                     g_CTriggerClassInfo.name_hash,
                                                                     &g_CTriggerClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00491680
                                                            (0x01C38BC0,local_246c,
                                                             *(CDemonActor **)(iVar6 + 0x45c));
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"gosub",5);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 5);
                                                  iVar6 = core_script_cpp_FUN_005299b0
                                                                    (param_1,local_1ec);
                                                  if (iVar6 < 0) {
                                                    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_204,local_1ec));
                                                    pcVar18 = "Undefined label %s used in gosub statement on line %d";
LAB_005224bf:
                                                    FUN_005b7790
                                                              (&DAT_01e65100,pcVar18,dVar2);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    if (7 < *(int *)&param_1->field_0x458) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Call stack overflow detected on script line %d."
                                                                 ,local_204);
                                                      return -1;
                                                    }
                                                    *(uint *)
                                                     (&param_1->field_0x45c +
                                                     *(int *)&param_1->field_0x458 * 4) =
                                                         *(uint *)&param_1->field_0x44;
                                                    *(int *)&param_1->field_0x44 = iVar6;
                                                    *(int *)&param_1->field_0x458 =
                                                         *(int *)&param_1->field_0x458 + 1;
                                                    local_1ec = &DAT_005e3bd3;
                                                  }
                                                  else {
                                                    local_1ec = &DAT_005e3bd3;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,&DAT_005e3bd4,4);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 4);
                                                  iVar6 = core_script_cpp_FUN_005299b0
                                                                    (param_1,local_1ec);
                                                  if (iVar6 < 0) {
                                                    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_204,local_1ec));
                                                    pcVar18 = "Undefined label %s used in goto statement on line %d";
                                                    goto LAB_005224bf;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(int *)&param_1->field_0x44 = iVar6;
                                                    local_1ec = &DAT_005e3c0e;
                                                  }
                                                  else {
                                                    local_1ec = &DAT_005e3c0e;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,&DAT_005e3c0f,4);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 4);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_4364,300);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00525147;
                                                  if (_DAT_01e650f8 == 0) {
                                                    shape_edittool_cpp_FUN_0047be40
                                                              (g_CEditorToolsPtr,
                                                               "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                               local_204,local_4364);
                                                    *(uint *)param_1 = 1;
                                                    local_210 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xd);
                                                  local_50 = 0xffffffff;
                                                  sscanf
                                                            (local_1ec,"(%[^,)]%n");
                                                  if ((int)local_50 < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing holsterWeapon command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_50;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2c3c);
                                                  local_1ac = core_script_cpp_getActor_FUN_00521290
                                                                        (local_2c3c,
                                                                         g_CHeroClassInfo.name_hash,
                                                                         &g_CHeroClassInfo);
                                                  if (local_1ac == 0) goto joined_r0x0052419d;
                                                  local_1a8 = 1;
                                                  if (*local_1ec == ',') {
                                                    local_1ec = local_1ec + 1;
                                                    uVar16 = 0xffffffff;
                                                    pcVar18 = local_1ec;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar21 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    local_50 = ~uVar16 - 2;
                                                    if ((int)local_50 < 1) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    pcVar18 = local_1ec;
                                                    pcVar20 = acStack_1596 + 2;
                                                    for (uVar17 = local_50 >> 2; uVar17 != 0;
                                                        uVar17 = uVar17 - 1) {
                                                      *(uint *)pcVar20 =
                                                           *(uint *)pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar21 * -8 + 4;
                                                      pcVar20 = pcVar20 + (uint)bVar21 * -8 + 4;
                                                    }
                                                    for (uVar17 = local_50 & 3; uVar17 != 0;
                                                        uVar17 = uVar17 - 1) {
                                                      *pcVar20 = *pcVar18;
                                                      pcVar18 = pcVar18 + (uint)bVar21 * -2 + 1;
                                                      pcVar20 = pcVar20 + (uint)bVar21 * -2 + 1;
                                                    }
                                                    local_1ec = local_1ec + local_50;
                                                    acStack_1596[~uVar16] = '\0';
                                                    if (_DAT_01e650f8 == 0) {
                                                      local_1a8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,acStack_1596 + 2);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                                            (0x01C38BC0,acStack_1596 + 2);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00525afd;
                                                  }
                                                  }
                                                  if (*local_1ec != ')') {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Missing closing ')' in holsterWeapon command");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + 1;
                                                  if (_DAT_01e650f8 == 0) {
                                                    (**(code **)(*(int *)(local_1ac + 0x2b0) + 0x150
                                                                ))(local_1ac,local_1a8 == 0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,&DAT_005e3cdd,4);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 4);
                                                  local_208 = *(int *)&param_1->field_0x44;
                                                  local_210 = 0;
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,&DAT_005e3ce2,2);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[2] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 2);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00521250
                                                            (&local_1ec,local_c20);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00525afd;
                                                  if ((_DAT_01e650f8 == 0) &&
                                                     (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,local_c20), iVar6 == 0)) {
                                                    iVar6 = core_script_cpp_FUN_00529a10
                                                                      (param_1,*(uint *)
                                                                                &param_1->field_0x44
                                                                       ,0);
                                                    if (iVar6 < 0) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Can't skip next command after if statement on line %d",
                                                                 local_204);
                                                      return -1;
                                                    }
                                                    iVar15 = _strnicmp
                                                                       (*(char **)(*(int *)&param_1
                                                  ->field_0x30 + 4 + iVar6 * 8),&DAT_005e3d1b,4);
                                                  if (iVar15 == 0) {
                                                    iVar6 = iVar6 + 1;
                                                  }
                                                  *(int *)&param_1->field_0x44 = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "finishedAct",0xb);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xb);
                                                  local_1a4 = -1;
                                                  sscanf
                                                            (local_1ec," ( )%n");
                                                  uVar16 = _DAT_01e650f8;
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_1a4 < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing finishedAct command");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_1a4;
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(uint *)param_1 = 1;
                                                    local_210 = uVar16;
                                                    *(uint *)&pCVar4->field_0x278 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"letterbox",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 9);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_ce8,100);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00525afd:
                                                    pcVar20 = &DAT_01e65100;
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
                                                  iVar6 = _stricmp
                                                                    (local_ce8,"false");
                                                  if (iVar6 == 0) {
                                                    iVar15 = 0;
                                                  }
                                                  iVar6 = _stricmp
                                                                    (local_ce8,&DAT_005e3d65);
                                                  if (iVar6 == 0) {
                                                    iVar15 = 1;
                                                  }
                                                  iVar6 = _stricmp
                                                                    (local_ce8,"bottom");
                                                  pCVar4 = g_CGamePtr;
                                                  if (iVar6 == 0) {
                                                    iVar15 = 2;
                                                  }
                                                  else if (iVar15 < 0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Invalid letterBox mode: %s",
                                                               local_ce8);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(int *)&g_CGamePtr->field_0x244 = iVar15;
                                                    *(uint *)&pCVar4->field_0x248 =
                                                         (uint)(iVar15 == 0);
                                                    *(uint *)&pCVar4->field_0x24c =
                                                         (uint)(*(int *)&pCVar4->field_0x244 == 0);
                                                    *(int *)&pCVar4->field_0x254 =
                                                         *(int *)&pCVar4->field_0x244;
                                                    if (*(int *)&pCVar4->field_0x244 != 0) {
                                                      *(uint *)&g_CFieldNotesPtr->field_0x40 =
                                                           0;
                                                    }
                                                    pCVar4 = g_CGamePtr;
                                                    _DAT_01e65904 = 1;
                                                    *(uint *)&param_1->field_0x454 =
                                                         0xffffffff;
                                                    pCVar5 = g_CDemonSetPtr;
                                                    if ((*(int *)&pCVar4->field_0x25c != 0) &&
                                                       (*(int *)&pCVar4->field_0x244 != 0)) {
                                                      *(uint *)&pCVar4->field_0x25c = 0;
                                                      iVar6 = unkafter_mimic_cpp_FUN_00492630
                                                                        (pCVar5);
                                                      core_setdir_cpp_FUN_00538d10
                                                                (g_CDemonSetPtr,
                                                                 *(uint *)
                                                                  &g_CScriptPtr->field_0xc,1);
                                                      pCVar5 = g_CDemonSetPtr;
                                                      *(uint *)&g_CScriptPtr->field_0x10 = 0;
                                                      iVar15 = unkafter_mimic_cpp_FUN_00492630
                                                                         (pCVar5);
                                                      if (iVar6 == iVar15) {
                                                                                                                
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                                                            (g_CDemonSetPtr,iVar15);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "loadFieldNotes",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xe);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_4238,0x104);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00525afd;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_fldnotes_cpp_FUN_004a41b0
                                                              (g_CFieldNotesPtr,local_4238,0);
                                                  }
                                                  else if ((*(int *)(0x01D182F0 + 0x1008) != 0) ||
                                                          (*(char *)g_CFieldNotesPtr == '\0')) {
                                                    iVar6 = core_fldnotes_cpp_FUN_004a41b0
                                                                      (g_CFieldNotesPtr,local_4238,
                                                                       &DAT_01e65100);
joined_r0x00527108:
                                                    if (iVar6 == 0) {
                                                      return -1;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xe);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00521250
                                                            (&local_1ec,local_af4);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00525afd;
                                                  if (_DAT_01e650f8 == 0) {
                                                    iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,local_af4);
                                                  *(int *)&param_1->field_0x14 = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"lookAt",6);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 6);
                                                  local_1a0 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,)]%n");
                                                  if (local_1a0 < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing lookAt command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_1a0;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_3024);
                                                  pCVar8 = (CCharacter *)
                                                           core_script_cpp_getActor_FUN_00521290
                                                                     (local_3024,
                                                                      g_CCharacterClassInfo.
                                                                      name_hash,
                                                                      &g_CCharacterClassInfo);
                                                  if (pCVar8 == (CCharacter *)0x0) {
joined_r0x0052419d:
                                                    if (_DAT_01e6590c == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_00522414;
                                                  }
                                                  pCVar12 = (CDemonActor *)0x0;
                                                  if (*local_1ec == ',') {
                                                    local_1a0 = -1;
                                                    sscanf
                                                              (local_1ec,", %[^)]%n");
                                                    if (local_1a0 < 3) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Error parsing lookAt command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_1ec = local_1ec + local_1a0;
                                                    core_script_cpp_trimString_FUN_00521110
                                                              (local_1fbc);
                                                    pCVar12 = (CDemonActor *)
                                                              core_script_cpp_getActor_FUN_00521290
                                                                        (local_1fbc,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo);
                                                    if (pCVar12 == (CDemonActor *)0x0)
                                                    goto joined_r0x0052419d;
                                                  }
                                                  if (*local_1ec != ')') {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Missing closing ')' in lookAt command");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + 1;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_charactr_cpp_FUN_00429c60(pCVar8,pCVar12);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "monsterVision",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xd);
                                                  local_19c = 0xffffffff;
                                                  local_198 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %d )%n");
                                                  if (local_198 < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing monsterVision command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_198;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2854);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_2854,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(int *)&param_1->field_0x18 = iVar6;
                                                    local_19c = (uint)(*(int *)&g_CGamePtr->
                                                                                field_0x260 == 0);
                                                    (**(code **)(*(int *)&g_CGamePtr->field_0xb1c +
                                                                4))(g_CGamePtr,local_19c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "movePlatform",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  local_190 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %f , %f )%n");
                                                  if (local_190 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing movePlatform command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_190;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2084);
                                                  pCVar9 = (CPlatform *)
                                                           core_script_cpp_getActor_FUN_00521290
                                                                     (local_2084,
                                                                      g_CPlatformClassInfo.name_hash
                                                                      ,&g_CPlatformClassInfo);
                                                  if (pCVar9 == (CPlatform *)0x0)
                                                  goto joined_r0x0052419d;
                                                  if ((local_4db0 < 0.0) || (1.0 < local_4db0)) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  dVar2 = (double)local_4dc0;
                                                  if (dVar2 <= 0.0) {
                                                    pcVar18 = "Invalid movement rate %f";
                                                    goto LAB_005224bf;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_platfrm_cpp_FUN_00518ff0
                                                              (pCVar9,local_4db0,local_4dc0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"openDoor",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 8);
                                                  local_18c = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_18c < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing openDoor command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_18c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2f5c);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2e94);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_2f5c,
                                                                     g_CDoorClassInfo.name_hash,
                                                                     &g_CDoorClassInfo);
                                                  if ((iVar6 == 0) ||
                                                     (iVar15 = core_script_cpp_getActor_FUN_00521290
                                                                         (local_2e94,
                                                                          g_CCharacterClassInfo.
                                                                          name_hash,
                                                                          &g_CCharacterClassInfo),
                                                     iVar15 == 0)) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    local_210 = _DAT_01e650f8;
                                                    if (0.0 <= *(float *)&param_1->field_0x48) {
                                                      iVar6 = (**(code **)(*(int *)(iVar15 + 0x2b0)
                                                                          + 300))(iVar15);
                                                      if (iVar6 != 0) {
                                                        local_20c = 1;
                                                      }
                                                    }
                                                    else {
                                                      (**(code **)(*(int *)(iVar15 + 0x2b0) + 0x124)
                                                      )(iVar15,iVar6);
                                                      *(uint *)&param_1->field_0x48 =
                                                           0x3f800000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "pressButton",0xb);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xb);
                                                  local_188 = -1;
                                                  sscanf
                                                            (local_1ec,"( %[^,], %[^)])%n");
                                                  if (local_188 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing pressButton() command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_188;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_106c);
                                                  core_script_cpp_trimString_FUN_00521110(local_e78)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_106c,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  piVar10 = core_script_cpp_FUN_00521410
                                                                      ((SPlayerActionState *)
                                                                       (iVar6 + 0x10a68),local_e78);
                                                  uVar16 = _DAT_01e650f8;
                                                  if (piVar10 == (int *)0x0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Invalid button name: %s",
                                                               local_e78);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    if (_DAT_01e65904 != 0) {
                                                      core_game_cpp_FUN_004b8250(g_CGamePtr);
                                                      _DAT_01e65904 = uVar16;
                                                    }
                                                    *piVar10 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"raise",5);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 5);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_f40,100);
                                                  if (pcVar18 != (char *)0x0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing event expression on raise statament: %s",
                                                               pcVar18);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_004894f0
                                                            (0x01C38BC0,local_f40);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_0048e3e0
                                                            (0x01C38BC0,local_f40);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e65100;
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
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "releaseButton",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xd);
                                                  local_184 = -1;
                                                  sscanf
                                                            (local_1ec,"( %[^,], %[^)])%n");
                                                  if (local_184 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing releaseButton() command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_184;
                                                  core_script_cpp_trimString_FUN_00521110(local_89c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00521110(local_bbc)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_89c,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  piVar10 = core_script_cpp_FUN_00521410
                                                                      ((SPlayerActionState *)
                                                                       (iVar6 + 0x10a68),local_bbc);
                                                  if (piVar10 == (int *)0x0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Invalid button name: %s",
                                                               local_bbc);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    if (_DAT_01e65904 != 0) {
                                                      core_game_cpp_FUN_004b8250(g_CGamePtr);
                                                      _DAT_01e65904 = 0;
                                                    }
                                                    *piVar10 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x1b] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x1b);
                                                  local_180 = -1;
                                                  sscanf
                                                            (local_1ec," ( %[^)])%n");
                                                  if (local_180 < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing removeAllItemsFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_180;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_18b4);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_18b4,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004da900
                                                              ((CInventory *)(iVar6 + 0x2437c));
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x17] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x17);
                                                  local_17c = -1;
                                                  sscanf
                                                            (local_1ec," ( %[^,], %[^,)]%n");
                                                  if (local_17c < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_17c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_34d4);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_38bc);
                                                  local_178 = core_script_cpp_getActor_FUN_00521290
                                                                        (local_34d4,
                                                                         g_CHeroClassInfo.name_hash,
                                                                         &g_CHeroClassInfo);
                                                  if (local_178 == 0) goto joined_r0x0052419d;
                                                  iVar6 = 1;
                                                  if (*local_1ec == ',') {
                                                    local_17c = -1;
                                                    sscanf
                                                              (local_1ec,", %[^)]%n");
                                                    if (local_17c < 1) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Error parsing removeItemFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_1ec = local_1ec + local_17c;
                                                    if (_DAT_01e650f8 == 0) {
                                                      iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,local_1bd4);
                                                  }
                                                  else {
                                                    pcVar18 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                                            (0x01C38BC0,local_1bd4);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e65100;
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
                                                  if (*local_1ec != ')') {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + 1;
                                                  if (((_DAT_01e650f8 == 0) &&
                                                      (pCVar12 = core_inv_cpp_FUN_004db830
                                                                           ((CInventory *)
                                                                            (*(int *)(_DAT_01cedef4
                                                                                      * 4 + 
                                                  0x1cedee4) + 0x2437c),local_38bc),
                                                  pCVar12 != (CDemonActor *)0x0)) &&
                                                  (core_inv_cpp_FUN_004db8e0
                                                             (local_178 + 0x2437c,pCVar12,iVar6),
                                                  iVar6 == 0)) {
                                                    core_mimic_cpp_copyQuaternion_FUN_00492610
                                                              (&pCVar12->field_0x20,local_178 + 0x20
                                                              );
                                                                                                        
                                                  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                                                            (0x01D182F0,pCVar12);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"removeKeys"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 10);
                                                  local_170 = -1;
                                                  sscanf
                                                            (local_1ec," (%d )%n");
                                                  if (local_170 < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_170;
                                                  if (*(int *)g_CNetGamePtr != 0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_hero_cpp_FUN_004d0070
                                                              (*(CHero **)
                                                                (_DAT_01cedef4 * 4 + 0x1cedee4),
                                                               local_174);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"return",6);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 6);
                                                  if (_DAT_01e650f8 == 0) {
                                                    iVar6 = *(int *)&param_1->field_0x458;
                                                    if (iVar6 < 1) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Return without gosub detected on script line %d."
                                                                 ,local_204);
                                                      return -1;
                                                    }
                                                    *(int *)&param_1->field_0x458 = iVar6 + -1;
                                                    *(uint *)&param_1->field_0x44 =
                                                         *(uint *)
                                                          (&param_1->field_0x458 + iVar6 * 4);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "rollCredits",0xb);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xb);
                                                  local_16c = -1;
                                                  sscanf
                                                            (local_1ec," ( )%n");
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_16c < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_16c;
                                                  if (_DAT_01e650f8 == 0) {
                                                    local_210 = _DAT_01e650f8;
                                                    *(uint *)param_1 = 1;
                                                    *(uint *)&pCVar4->field_0x278 = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,&DAT_005e4248,3);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 3);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_49a4,500);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00526d4a:
                                                    pcVar20 = &DAT_01e65100;
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
                                                  local_168 = -1;
                                                  sscanf
                                                            (local_49a4,"%[^,], %[^,], %n");
                                                  if (local_168 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_197c);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_31b4);
                                                  if (*(float *)&param_1->field_0x4c < 0.0) {
                                                    pcVar18 = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (local_49a4 + local_168);
                                                  local_14 = core_script_cpp_FUN_00529750
                                                                       (param_1,local_197c,
                                                                        local_31b4,pcVar18);
                                                  *(uint *)&param_1->field_0x4c = local_14;
                                                  if (*(float *)&param_1->field_0x4c < 0.0) {
                                                    return -1;
                                                  }
                                                  }
                                                  if ((_DAT_01e650f8 == 0) &&
                                                     (local_210 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00529910
                                                            (param_1,*(float *)&param_1->field_0x4c,
                                                             param_2), 0 < (int)local_210)) {
                                                    core_script_cpp_FUN_00529990
                                                              (param_1,*(CDemonActor **)
                                                                        &param_1->field_0x4);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "selectWeapon",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  local_164 = -1;
                                                  sscanf
                                                            (local_1ec," (%[^,], %[^)])%n");
                                                  if (local_164 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing selectWeapon parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00521110(local_d4c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00521110(local_838)
                                                  ;
                                                  local_1ec = local_1ec + local_164;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_d4c,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    iVar6 = iVar6 + 0x2437c;
                                                    local_20 = _DAT_01e650f8;
                                                    pCVar12 = (CDemonActor *)
                                                              unkafter_event_cpp_FUN_0045e1b0(iVar6)
                                                    ;
                                                    local_15c = pCVar12;
                                                    if (pCVar12 != (CDemonActor *)0x0) {
                                                      do {
                                                        if (pCVar12 == (CDemonActor *)0x0) {
                                                          _DAT_01d046a0 = "..\\core\\script.cpp"
                                                          ;
                                                          _DAT_01d046a4 = 0xbae;
                                                          core_main_c_FUN_004e4500
                                                                    (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar15 = core_actor_cpp_FUN_0040c840
                                                                     (pCVar12,local_838);
                                                  if (iVar15 != 0) goto LAB_005223fb;
                                                  core_inv_cpp_FUN_004db9d0(iVar6,0,5,1);
                                                  pCVar12 = (CDemonActor *)
                                                            unkafter_event_cpp_FUN_0045e1b0(iVar6);
                                                  } while (pCVar12 != local_15c);
                                                  }
                                                  if (local_20 == 0) {
                                                    engine_console_cpp_FUN_00436710
                                                              (g_CConsolePtr,
                                                               "%s can't selectWeapon(%s)\n",
                                                               local_d4c,local_838);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setActorVariable",0x10);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x10);
                                                  local_154 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_154 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setActorVariable command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_154;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_165c);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_1404);
                                                  iVar6 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00520fd0
                                                            (local_165c);
                                                  if (iVar6 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar12 = (CDemonActor *)
                                                            core_script_cpp_getActor_FUN_00521290
                                                                      (local_1404,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (_DAT_01e650f8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00491680
                                                            (0x01C38BC0,local_165c,pCVar12);
                                                  }
                                                  else {
                                                    iVar6 = _DAT_01e6590c;
                                                    if (pCVar12 == (CDemonActor *)0x0)
                                                    goto joined_r0x00527108;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xf);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_fa4,100);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00526d4a;
                                                  if (_DAT_01e650f8 == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_0055adc0
                                                            (0x0264B290,local_fa4);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xe);
                                                  local_14c = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %d)%n");
                                                  if (local_14c < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setCameragroup parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_14c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_14cc);
                                                  iVar6 = 0;
                                                  local_148 = 0;
                                                  for (iVar15 = 0; iVar15 < *(int *)g_CDemonSetPtr;
                                                      iVar15 = iVar15 + 1) {
                                                    iVar14 = 
                                                  shape_edittool_cpp_wildcardStringMatch_FUN_00485840
                                                            (local_14cc,
                                                             &g_CDemonSetPtr->field_0x4 + iVar6,0);
                                                  if ((iVar14 != 0) &&
                                                     (local_148 = 1, _DAT_01e650f8 == 0)) {
                                                    *(uint *)
                                                     (&g_CDemonSetPtr->field_0x150 + iVar6) =
                                                         local_150;
                                                  }
                                                  iVar6 = iVar6 + 0x1a4;
                                                  }
                                                  if (local_148 == 0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "No cameras found matching \"%s\"",
                                                               local_14cc);
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setCharacterModel",0x11);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x11);
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^,], %[^)])%n");
                                                  if (local_144 < 4) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setCharacterModel parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_144;
                                                  core_script_cpp_trimString_FUN_00521110(local_548)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00521110(local_3a8)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00521110(local_514)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_548,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x148))
                                                              (iVar6,local_3a8,local_514);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setAIState"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 10);
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_140 < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setAIState parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_140;
                                                  core_script_cpp_trimString_FUN_00521110(local_30c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00521110(local_444)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_30c,
                                                                     g_CBasicEnemyClassInfo.
                                                                     name_hash,
                                                                     &g_CBasicEnemyClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    unkafter_basicene_cpp_FUN_0059e7a0
                                                              (iVar6,local_444);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setAnimation",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_13c < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setAnimation parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_13c;
                                                  core_script_cpp_trimString_FUN_00521110(local_57c)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_57c,
                                                                     g_CBasicEnemyClassInfo.
                                                                     name_hash,
                                                                     &g_CBasicEnemyClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    pcVar18 = local_3dc;
                                                    uVar16 = _DAT_01e650f8;
                                                    pCVar11 = core_motion_cpp_FUN_00503860
                                                                        ((CMotionController *)
                                                                         (iVar6 + 0x2b4));
                                                    iVar15 = core_motion_cpp_FUN_00502fa0
                                                                       (pCVar11,pcVar18,uVar16);
                                                    unkafter_basicene_cpp_FUN_0059e7c0(iVar6,iVar15)
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"startPS",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 7);
                                                  sscanf
                                                            (local_1ec,"(%[^,], %i, %i)%n");
                                                  if (local_130 < 4) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing startPS");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_130;
                                                  core_script_cpp_trimString_FUN_00521110(local_340)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_340,
                                                                     g_CDemonActorClassInfo.
                                                                     name_hash,
                                                                     &g_CDemonActorClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_actor_cpp_FUN_0040ce40
                                                              (iVar6,local_138,local_134);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"stopPS",6);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 6);
                                                  sscanf
                                                            (local_1ec,"(%[^,], %i, %i)%n");
                                                  if (local_124 < 4) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing stopPS");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_124;
                                                  core_script_cpp_trimString_FUN_00521110(local_4ac)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_4ac,
                                                                     g_CDemonActorClassInfo.
                                                                     name_hash,
                                                                     &g_CDemonActorClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_actor_cpp_FUN_0040ce70
                                                              (iVar6,local_12c,local_128);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setPSFade",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 9);
                                                  sscanf
                                                            (local_1ec,"(%[^,], %i, %f, %f, %f)%n");
                                                  if (local_110 < 6) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setPSFade");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_110;
                                                  core_script_cpp_trimString_FUN_00521110(local_410)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_410,
                                                                     g_CDemonActorClassInfo.
                                                                     name_hash,
                                                                     &g_CDemonActorClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_actor_cpp_FUN_0040cea0
                                                              (iVar6,local_120,local_11c,local_118,
                                                               local_114);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "resetInitialPos",0xf);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xf);
                                                  sscanf
                                                            (local_1ec,"(%[^)])%n");
                                                  if (local_10c < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing resetInitialPos parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_10c;
                                                  core_script_cpp_trimString_FUN_00521110(local_374)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_374,
                                                                     g_CBasicEnemyClassInfo.
                                                                     name_hash,
                                                                     &g_CBasicEnemyClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    unkafter_basicene_cpp_FUN_005a0240(iVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setFade",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 7);
                                                  local_104 = 0;
                                                  local_100 = 0x3f800000;
                                                  local_fc = 0x3f800000;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %f, %f, %f)%n");
                                                  if (local_f8 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setFade parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_f8;
                                                  core_script_cpp_trimString_FUN_00521110(local_2d8)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_2d8,
                                                                     g_CBasicEnemyClassInfo.
                                                                     name_hash,
                                                                     &g_CBasicEnemyClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    unkafter_basicene_cpp_FUN_005a01a0
                                                              (iVar6,local_104,local_100,local_fc);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"startFade",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 9);
                                                  sscanf
                                                            (local_1ec,"(%[^)])%n");
                                                  if (local_f4 < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing startFade parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_f4;
                                                  core_script_cpp_trimString_FUN_00521110(local_4e0)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_4e0,
                                                                     g_CBasicEnemyClassInfo.
                                                                     name_hash,
                                                                     &g_CBasicEnemyClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    unkafter_basicene_cpp_FUN_0059f570(iVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setAlphaFade",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  local_f0 = 0;
                                                  local_e4 = 0;
                                                  local_e0 = 0;
                                                  local_dc = 0;
                                                  local_ec = 0x3f800000;
                                                  local_e8 = 0x3f800000;
                                                  sscanf
                                                            (local_1ec,"(%f, %f, %f, %f, %f, %f)%n");
                                                  if (local_d8 < 7) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setAlphaFade parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_d8;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_game_cpp_FUN_004bb500
                                                              (g_CGamePtr,local_f0,local_ec,local_e8
                                                               ,local_e4,local_e0,local_dc,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "startAlphaFade",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xe);
                                                  sscanf
                                                            (local_1ec,&DAT_005e4649);
                                                  if (local_d4 < 1) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing startAlphaFade parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_d4;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_game_cpp_FUN_004bb550(g_CGamePtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "stopAlphaFade",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xd);
                                                  sscanf
                                                            (local_1ec,&DAT_005e467f);
                                                  if (local_d0 < 1) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing stopAlphFade parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_d0;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_game_cpp_FUN_004bb580(g_CGamePtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setInventoryIndex",0x11);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x11);
                                                  local_c8 = -1;
                                                  sscanf
                                                            (local_1ec,"(%d)%n");
                                                  if (local_c8 < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setInventoryIndex parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_c8;
                                                  if (_DAT_01e650f8 == 0) {
                                                    iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
                                                    (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x16c))
                                                              (iVar6,local_cc);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setPhantomEyes",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xe);
                                                  local_c4 = 0;
                                                  local_c0 = 0x3f800000;
                                                  local_bc = 0x3f800000;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %d, %f, %f, %f, %f, %f, %f)%n");
                                                  if (local_a8 < 8) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setPhantomEyes parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_a8;
                                                  core_script_cpp_trimString_FUN_00521110(local_478)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_478,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_charactr_cpp_FUN_0042b550
                                                              (iVar6,local_ac,local_c4,local_c0,
                                                               local_bc,local_b8,local_b0,local_b0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"selectItem"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 10);
                                                  local_a4 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_a4 < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "ERror parsing selectItem parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_a4;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_359c);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_1d64);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_359c,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    this_ptr = (CInventory *)(iVar6 + 0x2437c);
                                                    pCVar12 = core_inv_cpp_FUN_004db830
                                                                        (this_ptr,local_1d64);
                                                    do {
                                                      if (pCVar12 == (CDemonActor *)0x0) break;
                                                      core_inv_cpp_FUN_004dbb50(this_ptr,1);
                                                      pCVar13 = (CDemonActor *)
                                                                unkafter_script_cpp_FUN_0052a6a0
                                                                          (this_ptr);
                                                    } while (pCVar13 != pCVar12);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x12);
                                                  local_9c = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %f)%n");
                                                  if (local_9c < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setCharacterHealth parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_9c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_2dcc);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_2dcc,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(float *)(iVar6 + 0x25a8) =
                                                         *(float *)(iVar6 + 0x25ac) * local_a0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setEyes",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 7);
                                                  local_8c = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %d, %d, %f)%n");
                                                  if (local_8c < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setEyes parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_8c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_278c);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_278c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_charactr_cpp_FUN_00424b50
                                                              (iVar6,0,local_98,local_90);
                                                    core_charactr_cpp_FUN_00424b50
                                                              (iVar6,1,local_94,local_90);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setSwitchmap",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_17ec,200);
                                                  if (pcVar18 != (char *)0x0) {
LAB_005281fe:
                                                    pcVar20 = &DAT_01e65100;
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
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_17ec);
                                                  if (_DAT_01e650f8 == 0) {
                                                    unkafter_mission_cpp_FUN_004fd460
                                                              (0x01D182F0,local_17ec);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setFieldNotesImageSuffix",0x18);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x18] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x18);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_3f34,0x100);
                                                  if (pcVar18 != (char *)0x0) goto LAB_005281fe;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_fldnotes_cpp_FUN_004a56c0
                                                              (g_CFieldNotesPtr,local_3f34);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setFocusActor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xd);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_9c8,100);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e65100;
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
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_9c8,
                                                                     g_CDemonActorClassInfo.
                                                                     name_hash,
                                                                     &g_CDemonActorClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (iVar6 != *(int *)&param_1->field_0xc) {
                                                    *(uint *)&param_1->field_0x10 = 1;
                                                    *(int *)&param_1->field_0xc = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setHeroTask",0xb);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xb);
                                                  local_84 = -1;
                                                  sscanf
                                                            (local_1ec," (%[^,], %[^)])%n");
                                                  if (local_84 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setHeroTask parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00521110(local_6a8)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00521110(local_a2c)
                                                  ;
                                                  local_1ec = local_1ec + local_84;
                                                  this_ptr_00 = (CHero *)
                                                  core_script_cpp_getActor_FUN_00521290
                                                            (local_6a8,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (this_ptr_00 == (CHero *)0x0)
                                                  goto joined_r0x0052419d;
                                                  iVar15 = _stricmp
                                                                     (local_a2c,"stand");
                                                  iVar6 = 0;
                                                  if (iVar15 != 0) {
                                                    iVar6 = _stricmp
                                                                      (local_a2c,"follow");
                                                    if (iVar6 == 0) {
                                                      iVar6 = 1;
                                                    }
                                                    else {
                                                      iVar6 = _stricmp
                                                                        (local_a2c,&DAT_005e487e);
                                                      if (iVar6 == 0) {
                                                        iVar6 = 2;
                                                      }
                                                      else {
                                                        iVar6 = _stricmp
                                                                          (local_a2c,
                                                                           "guard");
                                                        if (iVar6 == 0) {
                                                          iVar6 = 3;
                                                        }
                                                        else {
                                                          iVar6 = _stricmp
                                                                            (local_a2c,
                                                                             "suspend");
                                                          if (iVar6 != 0) {
                                                            FUN_005b7790
                                                                      (&DAT_01e65100,
                                                                       "Invalid Task: %s",
                                                                       local_a2c);
                                                            return -1;
                                                          }
                                                          iVar6 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_hero_cpp_FUN_004d0090(this_ptr_00,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 9);
                                                  local_7c = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %d )%n");
                                                  if (local_7c < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_7c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_372c);
                                                  if (_DAT_01e650f8 == 0) {
                                                    engine_ini_cpp_FUN_004d8910
                                                              (&local_4ba8,
                                                               "system\\nocturne.ini",
                                                               &DAT_005e48e1);
                                                    engine_ini_cpp_FUN_004d8b80
                                                              (&local_4ba8,local_372c,local_80);
                                                    engine_ini_cpp_CIniFile_dtor_FUN_004d8940
                                                              (&local_4ba8,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setMouth",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 8);
                                                  local_70 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %d, %f)%n");
                                                  if (local_70 < 4) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setMouth parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_70;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_30ec);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_30ec,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_charactr_cpp_FUN_00424b90
                                                              (iVar6,local_78,local_74);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0x12);
                                                  local_6c = -1;
                                                  sscanf
                                                            (local_1ec," (%n %n");
                                                  if (local_6c < 1) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setSayTimeOverride parameters.");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_6c;
                                                  local_68 = 0xbf800000;
                                                  if (*local_1ec == ')') {
                                                    local_1ec = local_1ec + 1;
                                                  }
                                                  else {
                                                    local_6c = -1;
                                                    sscanf
                                                              (local_1ec,"%f )%n");
                                                    if (local_6c < 1) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    local_1ec = local_1ec + local_6c;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(uint *)&param_1->field_0x450 = local_68;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_b58,100);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00528804:
                                                    pcVar20 = &DAT_01e65100;
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
                                                  iVar6 = core_script_cpp_FUN_005299b0
                                                                    (param_1,local_b58);
                                                  if (iVar6 < 0) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Undefined label '%s'",
                                                               local_b58);
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    *(int *)&param_1->field_0x454 = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 10);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_7d4,100);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00528804;
                                                  if (local_7d4[0] == '\0') {
                                                    *(uint *)&param_1->field_0x4 = 0;
                                                  }
                                                  else {
                                                    iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                      (local_7d4,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                    *(int *)&param_1->field_0x4 = iVar6;
                                                    if (iVar6 == 0) goto joined_r0x0052419d;
                                                  }
                                                  *(uint *)&param_1->field_0x8 =
                                                       *(uint *)&param_1->field_0x4;
                                                  if ((*(int *)&param_1->field_0x14 == 0) &&
                                                     (*(int *)&param_1->field_0x4 !=
                                                      *(int *)&param_1->field_0xc)) {
                                                    *(uint *)&param_1->field_0x10 = 1;
                                                    *(uint *)&param_1->field_0xc =
                                                         *(uint *)&param_1->field_0x4;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xd);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_1008,100);
                                                  if (pcVar18 == (char *)0x0) {
                                                    sscanf
                                                              (local_1008,&DAT_005e49e9);
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Invalid time factor %s",
                                                               local_1008);
                                                    return -1;
                                                  }
                                                  pcVar20 = &DAT_01e65100;
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
                                                  iVar6 = _strnicmp
                                                                    (pcVar18,"setVictim",9)
                                                  ;
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 9);
                                                  local_5c = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,)]%n");
                                                  if (local_5c < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setVictim command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_5c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_1274);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_1274,
                                                                     g_CEnemyClassInfo.name_hash,
                                                                     &g_CEnemyClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  iVar15 = 0;
                                                  if (*local_1ec == ',') {
                                                    local_5c = -1;
                                                    sscanf
                                                              (local_1ec,", %[^)]%n");
                                                    if (local_5c < 3) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Error parsing setVictim command parms")
                                                      ;
                                                      return -1;
                                                    }
                                                    local_1ec = local_1ec + local_5c;
                                                    core_script_cpp_trimString_FUN_00521110
                                                              (local_37f4);
                                                    iVar14 = _stricmp
                                                                       (local_37f4,
                                                                        "disable");
                                                    iVar15 = 0xFFFFFFFF;
                                                    if ((iVar14 != 0) &&
                                                       (iVar15 = 
                                                  core_script_cpp_getActor_FUN_00521290
                                                            (local_37f4,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo), iVar15 == 0))
                                                  goto joined_r0x0052419d;
                                                  }
                                                  if (*local_1ec != ')') {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Missing closing ')' in setVictim command");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + 1;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_enemy_cpp_FUN_00488850(iVar6,iVar15);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "setWalkTimeout",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xe);
                                                  local_54 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %f)%n");
                                                  if (local_54 < 3) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing setWalkTimeout parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_54;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_3344);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_3344,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x140))
                                                              (iVar6,local_58);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"snapToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 10);
                                                  local_4c = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_4c < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error snaping turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_4c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_1c9c);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_1b0c);
                                                  local_48 = (CDemonActor *)
                                                             core_script_cpp_getActor_FUN_00521290
                                                                       (local_1c9c,
                                                                        g_CDemonActorClassInfo.
                                                                        name_hash,
                                                                        &g_CDemonActorClassInfo);
                                                  if ((local_48 == (CDemonActor *)0x0) ||
                                                     (iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                        (local_1b0c,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo),
                                                     iVar6 == 0)) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_bodypart_cpp_FUN_00417b60
                                                              (iVar6 + 0x20,&local_48->field_0x20);
                                                    local_24c[0] = local_270;
                                                    auStack_26c[(uint)bVar21 * -2 + 9] =
                                                         auStack_26c[(uint)bVar21 * -2];
                                                    auStack_26c
                                                    [(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10] =
                                                         auStack_26c
                                                         [(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1]
                                                    ;
                                                    core_vecdir_cpp_FUN_005838f0(auStack_26c + 8);
                                                    local_258 = auStack_26c[2];
                                                    auStack_26c[(uint)bVar21 * -2 + 6] =
                                                         auStack_26c[(uint)bVar21 * -2 + 3];
                                                    auStack_26c
                                                    [(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
                                                         auStack_26c
                                                         [(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4]
                                                    ;
                                                    *(uint *)&local_48->field_0x34 = local_254
                                                    ;
                                                                                                        
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
                                                            (local_48);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"startSay",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 8);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_47b0,500);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e65100;
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
                                                            (local_47b0,"%[^,], %[^,], %n");
                                                  if (local_44 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_26c4);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_3b14);
                                                  pcVar18 = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (local_47b0 + local_44);
                                                  local_14 = core_script_cpp_FUN_00529750
                                                                       (param_1,local_26c4,
                                                                        local_3b14,pcVar18);
                                                  *(uint *)&param_1->field_0x4c = local_14;
                                                  fVar1 = *(float *)&param_1->field_0x4c;
                                                  goto joined_r0x00528f4d;
                                                  }
                                                  iVar6 = _strnicmp
                                                                    (pcVar18,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_327c,200);
                                                  if (pcVar18 != (char *)0x0) {
                                                    pcVar20 = &DAT_01e65100;
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
                                                  pcVar18 = local_327c;
                                                  do {
                                                    pcVar20 = pcVar18;
                                                    if (*pcVar18 == ',') goto LAB_00528fd3;
                                                    if (*pcVar18 == '\0') break;
                                                    pcVar20 = pcVar18 + 1;
                                                    if (*pcVar20 == ',') goto LAB_00528fd3;
                                                    pcVar18 = pcVar18 + 2;
                                                  } while (*pcVar20 != '\0');
                                                  pcVar20 = (char *)0x0;
LAB_00528fd3:
                                                  pcVar19 = &DAT_005e4b70;
                                                  local_40 = -1;
                                                  local_1c = (uint)(pcVar20 != (char *)0x0);
                                                  iVar6 = -1;
                                                  pcVar18 = local_327c;
                                                  do {
                                                    pcVar20 = pcVar18;
                                                    if (iVar6 == 0) break;
                                                    iVar6 = iVar6 + -1;
                                                    pcVar20 = pcVar18 + (uint)bVar21 * -2 + 1;
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
                                                            (local_327c,&DAT_005e4b72);
                                                  if (local_40 < 1) {
                                                    pcVar18 = "Error parsing out camera name";
                                                    pcVar20 = &DAT_01e65100;
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
                                                  core_script_cpp_trimString_FUN_00521110(local_964)
                                                  ;
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0
                                                            (g_CDemonSetPtr,local_964);
                                                  if ((local_1c != 0) &&
                                                     (sscanf
                                                                (local_327c + local_40,&DAT_005e4b99
                                                                ), _DAT_005e4d93 < 10000000000.0)) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Invalid hold time value");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    core_setdir_cpp_FUN_00539820
                                                              (g_CDemonSetPtr,iVar6,1e+10);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,
                                                  "timedDisplay",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(pcVar18[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 0xc);
                                                  pcVar18 = 
                                                  core_script_cpp_parseArgument_FUN_005211a0
                                                            (&local_1ec,local_45bc,300);
                                                  if (pcVar18 != (char *)0x0) {
LAB_00529169:
                                                    pcVar20 = &DAT_01e65100;
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
                                                            (local_45bc,"%f,%n");
                                                  if (local_3c < 2) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing time value");
                                                    return -1;
                                                  }
                                                  if (_DAT_01e650f8 == 0) {
                                                    pcVar20 = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (local_45bc + local_3c);
                                                  pcVar18 = &param_1->field_0x50;
                                                  do {
                                                    cVar3 = *pcVar20;
                                                    *pcVar18 = cVar3;
                                                    if (cVar3 == '\0') break;
                                                    cVar3 = pcVar20[1];
                                                    pcVar20 = pcVar20 + 2;
                                                    pcVar18[1] = cVar3;
                                                    pcVar18 = pcVar18 + 2;
                                                  } while (cVar3 != '\0');
                                                  local_210 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00529910
                                                            (param_1,local_38,param_2);
                                                  if (0 < (int)local_210) {
                                                    param_1->field_0x50 = 0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"turnToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 10);
                                                  local_34 = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^)])%n");
                                                  if (local_34 < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_34;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_11ac);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_1724);
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_11ac,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if ((iVar6 == 0) ||
                                                     (iVar15 = core_script_cpp_getActor_FUN_00521290
                                                                         (local_1724,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo),
                                                     iVar15 == 0)) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x13c))
                                                              (iVar6,iVar15);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,&DAT_005e4c23,4);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 4);
                                                  local_30 = -1;
                                                  sscanf
                                                            (local_1ec,"(%f)%n");
                                                  if (local_30 < 1) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing time value on wait statament");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_30;
                                                  if (_DAT_01e650f8 == 0) {
                                                    local_210 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00529910
                                                            (param_1,local_2c,param_2);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"waitFor",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 7);
                                                  pcVar18 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00521250
                                                            (&local_1ec,local_900);
                                                  if (pcVar18 != (char *)0x0) goto LAB_00529169;
                                                  if ((_DAT_01e650f8 == 0) &&
                                                     (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,local_900), iVar6 == 0)) {
                                                    local_210 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar18,"walkTo",6);
                                                    dVar2 = __BITCAST_DOUBLE(CONCAT44(pcVar18,local_204));
                                                    if ((iVar6 != 0) ||
                                                       (((&DAT_0061ed94)[(byte)(pcVar18[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      pcVar18 = "Unknown command on line %d: %s";
                                                      goto LAB_005224bf;
                                                    }
                                                    local_1ec = 
                                                  core_script_cpp_skipWhitespace_FUN_00521180
                                                            (pcVar18 + 6);
                                                  local_20c = -1;
                                                  sscanf
                                                            (local_1ec,"(%[^,], %[^,)] %n");
                                                  if (local_20c < 5) {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Error parsing walkTo command parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + local_20c;
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_25fc);
                                                  core_script_cpp_trimString_FUN_00521110
                                                            (local_3bdc);
                                                  local_28 = 0;
                                                  if (*local_1ec == ',') {
                                                    local_20c = -1;
                                                    sscanf
                                                              (local_1ec,",%f %n");
                                                    if (local_20c < 1) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_1ec = local_1ec + local_20c;
                                                  }
                                                  local_24 = 0x501502f9;
                                                  if (*local_1ec == ',') {
                                                    local_20c = -1;
                                                    sscanf
                                                              (local_1ec,",%f %n");
                                                    if (local_20c < 1) {
                                                      FUN_005b7790
                                                                (&DAT_01e65100,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_1ec = local_1ec + local_20c;
                                                  }
                                                  if (*local_1ec != ')') {
                                                    FUN_005b7790
                                                              (&DAT_01e65100,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_1ec = local_1ec + 1;
                                                  iVar6 = core_script_cpp_getActor_FUN_00521290
                                                                    (local_25fc,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if ((iVar6 == 0) ||
                                                     (iVar15 = core_script_cpp_getActor_FUN_00521290
                                                                         (local_3bdc,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo),
                                                     iVar15 == 0)) goto joined_r0x0052419d;
                                                  if (_DAT_01e650f8 == 0) {
                                                    (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x138))
                                                              (iVar6,iVar15,local_28,local_24);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_005223fb:
  if ((_DAT_01e650f8 != 2) && (*local_1e8 != '\0')) {
    FUN_005b7790
              (&DAT_01e65100,"Extra characters \"%s\" on line %d",local_1e8,local_200);
    return -1;
  }
LAB_00522414:
  if (local_20c == 1) {
    *(uint *)&param_1->field_0x4c = 0xbf800000;
    uVar16 = _DAT_01e650f8;
    *(uint *)&param_1->field_0x48 = 0xbf800000;
    if ((uVar16 == 0) && (*(int *)&param_1->field_0x2c <= *(int *)&param_1->field_0x44)) {
      FUN_005b7790(&DAT_01e65100,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_20c) {
    *(uint *)&param_1->field_0x44 = local_204;
    return local_20c;
  }
  return local_20c;
}
