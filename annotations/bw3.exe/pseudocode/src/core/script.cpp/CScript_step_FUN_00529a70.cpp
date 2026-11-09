// Name: core_script.cpp_CScript_step_FUN_00529a70
// Address: 00529a70
// Address Range: [[00529a70, 00530143]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_step_FUN_00529a70(CScript *this_ptr,float *time_remaining)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0052f37d) */
/* WARNING: Removing unreachable block (ram,0x0052f38c) */
/* WARNING: Removing unreachable block (ram,0x0052f39a) */
/* WARNING: Removing unreachable block (ram,0x0052f3e3) */
/* WARNING: Removing unreachable block (ram,0x0052f3a4) */
/* WARNING: Removing unreachable block (ram,0x0052f3af) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_CScript_step_FUN_00529a70(CScript *this_ptr,float *time_remaining)

{
  CInventory *this_ptr_00;
  float fVar1;
  double dVar2;
  char cVar3;
  CGame *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  CVector3f *initial_velocity;
  CMotionList *this_ptr_01;
  uint uVar7;
  CCharacter *pCVar8;
  CPlatform *pCVar9;
  int *piVar10;
  int iVar11;
  CHero *this_ptr_02;
  CEnemy *this_ptr_03;
  CDemonActor *pCVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  byte bVar19;
  float local_4938;
  float local_4934;
  float local_492c;
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
  char local_197c [198];
  char acStack_18b6 [202];
  char local_17ec [200];
  char local_1724 [200];
  char local_165c [200];
  char local_1594 [200];
  char local_14cc [200];
  char local_1404 [200];
  char local_133c [200];
  char local_1274 [168];
  int aiStack_11cc [8];
  char local_11ac [4];
  int aiStack_11a8 [49];
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
  CMatrix3x3f local_20c [40];
  uint local_1e4;
  int aiStack_1e0 [5];
  int local_1cc [3];
  CVector3f local_1c0;
  uint local_1b4;
  uint auStack_1b0 [2];
  CVector3f local_1a8;
  uint local_19c;
  uint local_198 [2];
  CVector3f local_190;
  uint local_184;
  int aiStack_180 [6];
  int local_168;
  uint local_164;
  char *local_160;
  char *local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  char *local_148;
  int local_144;
  byte *local_140;
  int local_13c;
  float local_138;
  CCharacter *local_134;
  CBodyPart *local_130;
  int local_12c;
  byte *local_128;
  int local_124;
  char *local_120;
  CDemonLight *local_11c;
  int local_118;
  uint local_114;
  int local_110;
  int local_10c;
  int local_108;
  uint local_104;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  CDemonActor *local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  float local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  char *local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  CDemonActor *local_40;
  C3DSLight *local_3c;
  int local_38;
  int local_34;
  float local_30;
  int local_2c;
  int local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar19 = 0;
  if ((*(int *)&this_ptr->field_0x44 < 0) ||
     (*(int *)&this_ptr->field_0x2c <= *(int *)&this_ptr->field_0x44)) {
    _DAT_01d71de0 = "..\\core\\script.cpp";
    _DAT_01d71de4 = 0x47c;
    core_main_c_FUN_004e4330("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar16 = "(no error message provided)";
  pcVar18 = &DAT_01ed6810;
  do {
    cVar3 = *pcVar16;
    *pcVar18 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar16[1];
    pcVar16 = pcVar16 + 2;
    pcVar18[1] = cVar3;
    pcVar18 = pcVar18 + 2;
  } while (cVar3 != '\0');
  pcVar16 = *(char **)(*(int *)&this_ptr->field_0x30 + 4 + *(int *)&this_ptr->field_0x44 * 8);
  local_164 = *(uint *)(*(int *)&this_ptr->field_0x30 + *(int *)&this_ptr->field_0x44 * 8);
  aiStack_180[4] = *(int *)&this_ptr->field_0x44;
  aiStack_180[3] = 1;
  *(int *)&this_ptr->field_0x44 = aiStack_180[4] + 1;
  cVar3 = *pcVar16;
  if ((cVar3 == '{') || (cVar3 == '}')) {
    local_160 = &DAT_005ce0e7;
  }
  else if (cVar3 == ':') {
    local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 1);
    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_164,local_160));
    if (_DAT_01ed6808 != 0) {
      cVar3 = *local_160;
      for (pcVar16 = local_160;
          (cVar3 != '\0' &&
          ((((&DAT_006074b8)[(byte)(*pcVar16 + 1)] & 0xe0) != 0 || (*pcVar16 == '_'))));
          pcVar16 = pcVar16 + 1) {
        cVar3 = pcVar16[1];
      }
      if (*pcVar16 != '\0') {
        pcVar16 = "Invalid label \"%s\" on line";
        goto LAB_00529bdf;
      }
      iVar6 = core_script_cpp_FUN_005303b0(this_ptr,local_160);
      if (iVar6 < 0) {
        _DAT_01d71de0 = "..\\core\\script.cpp";
        _DAT_01d71de4 = 0x4ae;
        core_main_c_FUN_004e4330("Internal script error checking for duplicate label.");
      }
      if (iVar6 != aiStack_180[4]) {
        FUN_005a28c0
                  (&DAT_01ed6810,"Duplicate label %s on lines %d and %d",local_160,local_164,
                   *(uint *)(*(int *)&this_ptr->field_0x30 + iVar6 * 8));
        return -1;
      }
    }
    local_160 = &DAT_005ce170;
  }
  else {
    iVar6 = _strnicmp(pcVar16,"syntaxCheckOn",0xd);
    if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] & 0xe0) == 0)) {
      if (_DAT_01ed6808 != 0) {
        _DAT_01ed6808 = 1;
      }
      local_160 = &DAT_005ce17f;
    }
    else {
      iVar6 = _strnicmp(pcVar16,"syntaxCheckOff",0xe);
      if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] & 0xe0) == 0)) {
        if (_DAT_01ed6808 != 0) {
          _DAT_01ed6808 = 2;
        }
        local_160 = &DAT_005ce18f;
      }
      else if (_DAT_01ed6808 != 2) {
        iVar6 = _strnicmp(pcVar16,"activateGadget",0xe);
        if ((((((((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] & 0xe0) == 0)) ||
                ((iVar6 = _strnicmp(pcVar16,"activatePuzzle",0xe)
                 , iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] & 0xe0) == 0)))) ||
               ((iVar6 = _strnicmp
                                   (pcVar16,"addFieldNotesTask",0x11), iVar6 == 0 &&
                (((&DAT_006074b8)[(byte)(pcVar16[0x11] + 1)] & 0xe0) == 0)))) ||
              (((iVar6 = _strnicmp
                                   (pcVar16,"advanceLightFilter",0x12), iVar6 == 0 &&
                (((&DAT_006074b8)[(byte)(pcVar16[0x12] + 1)] & 0xe0) == 0)) ||
               ((((iVar6 = _strnicmp
                                     (pcVar16,"beginCarryItem",0xe), iVar6 == 0 &&
                  (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp
                                     (pcVar16,"completeFieldNotesTask",0x16), iVar6 == 0 &&
                  (((&DAT_006074b8)[(byte)(pcVar16[0x16] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp
                                    (pcVar16,"createExplosion",0xf), iVar6 == 0 &&
                 (((&DAT_006074b8)[(byte)(pcVar16[0xf] + 1)] & 0xe0) == 0)))))))) ||
             (((((iVar6 = _strnicmp(pcVar16,"deleteActor",0xb),
                 iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0)) ||
                ((((iVar6 = _strnicmp
                                      (pcVar16,"displayBitmap",0xd), iVar6 == 0 &&
                   (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] & 0xe0) == 0)) ||
                  ((iVar6 = _strnicmp
                                      (pcVar16,"displayFieldNotes",0x11), iVar6 == 0 &&
                   (((&DAT_006074b8)[(byte)(pcVar16[0x11] + 1)] & 0xe0) == 0)))) ||
                 ((((iVar6 = _strnicmp(pcVar16,"dropItem",8),
                    iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[8] + 1)] & 0xe0) == 0)) ||
                   ((iVar6 = _strnicmp
                                       (pcVar16,"hurtCharacter",0xd), iVar6 == 0 &&
                    (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] & 0xe0) == 0)))) ||
                  ((((iVar6 = _strnicmp(pcVar16,"incCounter",10),
                     iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] & 0xe0) == 0)) ||
                    ((iVar6 = _strnicmp
                                        (pcVar16,"deccCounter",0xb), iVar6 == 0 &&
                     (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0)))) ||
                   ((iVar6 = _strnicmp
                                       (pcVar16,"enableFieldNotesEntry",0x15), iVar6 == 0
                    && (((&DAT_006074b8)[(byte)(pcVar16[0x15] + 1)] & 0xe0) == 0)))))))))) ||
               ((iVar6 = _strnicmp
                                   (pcVar16,"enableFieldNotesAnnotation",0x1a), iVar6 == 0 &&
                (((&DAT_006074b8)[(byte)(pcVar16[0x1a] + 1)] & 0xe0) == 0)))) ||
              (((((iVar6 = _strnicmp(pcVar16,"fadeSfx",7),
                  iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp
                                     (pcVar16,"fadeAmbientSound",0x10), iVar6 == 0 &&
                  (((&DAT_006074b8)[(byte)(pcVar16[0x10] + 1)] & 0xe0) == 0)))) ||
                (((((iVar6 = _strnicmp(pcVar16,"flagOn",6),
                    iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[6] + 1)] & 0xe0) == 0)) ||
                   ((iVar6 = _strnicmp(pcVar16,"flagOff",7),
                    iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] & 0xe0) == 0)))) ||
                  ((((iVar6 = _strnicmp(pcVar16,"gameFlagOn",10),
                     iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] & 0xe0) == 0)) ||
                    ((iVar6 = _strnicmp
                                        (pcVar16,"gameFlagOff",0xb), iVar6 == 0 &&
                     (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0)))) ||
                   ((iVar6 = _strnicmp
                                       (pcVar16,"killCharacter",0xd), iVar6 == 0 &&
                    (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] & 0xe0) == 0)))))) ||
                 ((iVar6 = _strnicmp
                                     (pcVar16,"killAllEnemies",0xe), iVar6 == 0 &&
                  (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] & 0xe0) == 0)))))) ||
               ((((((iVar6 = _strnicmp(pcVar16,"killHero",8),
                    iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[8] + 1)] & 0xe0) == 0)) ||
                   ((iVar6 = _strnicmp(pcVar16,"killSfx",7),
                    iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] & 0xe0) == 0)))) ||
                  ((iVar6 = _strnicmp(pcVar16,"lightning",9),
                   iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[9] + 1)] & 0xe0) == 0)))) ||
                 ((iVar6 = _strnicmp(pcVar16,"playMusic",9),
                  iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[9] + 1)] & 0xe0) == 0)))) ||
                ((((iVar6 = _strnicmp(pcVar16,"playSfx",7),
                   iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] & 0xe0) == 0)) ||
                  ((iVar6 = _strnicmp(pcVar16,"resetGore",9),
                   iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[9] + 1)] & 0xe0) == 0)))) ||
                 ((iVar6 = _strnicmp(pcVar16,"restorePrye",0xb),
                  iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0))))))))))))
            || ((iVar6 = _strnicmp(pcVar16,"setActorBool",0xc),
                iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] & 0xe0) == 0)))) ||
           ((((iVar6 = _strnicmp(pcVar16,"setCameraAmbient",0x10)
              , iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0x10] + 1)] & 0xe0) == 0)) ||
             ((iVar6 = _strnicmp(pcVar16,"setCounter",10),
              iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] & 0xe0) == 0)))) ||
            (((((iVar6 = _strnicmp(pcVar16,"setDoorState",0xc),
                iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] & 0xe0) == 0)) ||
               ((iVar6 = _strnicmp(pcVar16,"setGroupAmbient",0xf)
                , iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xf] + 1)] & 0xe0) == 0)))) ||
              (((((iVar6 = _strnicmp
                                     (pcVar16,"setLightFilterFrame",0x13), iVar6 == 0 &&
                  (((&DAT_006074b8)[(byte)(pcVar16[0x13] + 1)] & 0xe0) == 0)) ||
                 ((iVar6 = _strnicmp(pcVar16,"setLeverState",0xd)
                  , iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] & 0xe0) == 0)))) ||
                ((iVar6 = _strnicmp(pcVar16,"setModelState",0xd),
                 iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] & 0xe0) == 0)))) ||
               ((iVar6 = _strnicmp(pcVar16,"setSunlight",0xb),
                iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0)))))) ||
             (((((((iVar6 = _strnicmp(pcVar16,"setTimer",8),
                   iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[8] + 1)] & 0xe0) == 0)) ||
                  ((iVar6 = _strnicmp(pcVar16,"setEndTimer",0xb),
                   iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0)))) ||
                 ((iVar6 = _strnicmp(pcVar16,"setWeather",10),
                  iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] & 0xe0) == 0)))) ||
                (((iVar6 = _strnicmp(pcVar16,"shakeScreen",0xb),
                  iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0)) ||
                 (((iVar6 = _strnicmp
                                      (pcVar16,"slamModelToMotion",0x11), iVar6 == 0 &&
                   (((&DAT_006074b8)[(byte)(pcVar16[0x11] + 1)] & 0xe0) == 0)) ||
                  ((iVar6 = _strnicmp
                                      (pcVar16,"turnToFieldNotesEntry",0x15), iVar6 == 0 &&
                   (((&DAT_006074b8)[(byte)(pcVar16[0x15] + 1)] & 0xe0) == 0)))))))) ||
               ((iVar6 = _strnicmp(pcVar16,"warpTo",6),
                iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[6] + 1)] & 0xe0) == 0)))) ||
              ((iVar6 = _strnicmp(pcVar16,"warpToMulti",0xb),
               iVar6 == 0 && (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0)))))))))) {
          if (_DAT_01ed6808 == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,pcVar16);
          }
          else {
            pcVar16 = core_event_cpp_CEventList_validateCommands_FUN_00491b40(0x01C6E360,pcVar16);
            if (pcVar16 != (char *)0x0) goto LAB_0052b2b0;
          }
          local_160 = &DAT_005ce41c;
        }
        else {
          iVar6 = _strnicmp(pcVar16,"addItemToInventory",0x12);
          if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0x12] + 1)] & 0xe0) == 0)) {
            local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 0x12);
            local_15c = (char *)0xffffffff;
            sscanf(local_160," ( %[^,], %[^)])%n");
            if ((int)local_15c < 3) {
              FUN_005a28c0(&DAT_01ed6810,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_160 = local_160 + (int)local_15c;
            core_script_cpp_trimString_FUN_00528830(local_1594);
            core_script_cpp_trimString_FUN_00528830(local_197c);
            iVar6 = core_script_cpp_getActor_FUN_005289b0
                              (local_1594,g_CHeroClassInfo.name_hash,&g_CHeroClassInfo);
            if ((iVar6 == 0) ||
               (pCVar12 = (CDemonActor *)
                          core_script_cpp_getActor_FUN_005289b0
                                    (local_197c,g_CDemonActorClassInfo.name_hash,
                                     &g_CDemonActorClassInfo), pCVar12 == (CDemonActor *)0x0))
            goto joined_r0x0052b739;
            if (_DAT_01ed6808 == 0) {
              core_inv_cpp_FUN_004da880((CInventory *)(iVar6 + 0x206e8),pCVar12,0);
            }
          }
          else {
            iVar6 = _strnicmp(pcVar16,"addLightFilter",0xe);
            if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] & 0xe0) == 0)) {
              local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 0xe);
              local_cc = -1;
              sscanf(local_160,"( %[^,], %[^,], %f )%n");
              if (local_cc < 5) {
                FUN_005a28c0(&DAT_01ed6810,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_160 = local_160 + local_cc;
              core_set_cpp_CDemonSet_addLightFilter_FUN_0053b3b0
                        (g_CDemonSetPtr,local_5f4,&local_3c,&local_11c);
              if (local_3c == (C3DSLight *)0x0) {
                FUN_005a28c0
                          (&DAT_01ed6810,"Light \"%s\" does not exist",local_5f4);
                return -1;
              }
              iVar6 = engine_dosio_cpp_getFileSize_FUN_004657f0(&DAT_005ce4dd,local_720);
              if (iVar6 < 1) {
                FUN_005a28c0(&DAT_01ed6810,"Can't open filter \"%s\"",local_720);
                return -1;
              }
              if (_DAT_01ed6808 == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_00542e50
                          (local_3c,local_720,aiStack_180[5],0);
              }
            }
            else {
              iVar6 = _strnicmp(pcVar16,"allowEnemyAttack",0x10);
              if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0x10] + 1)] & 0xe0) == 0)) {
                local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 0x10);
                pcVar16 = core_script_cpp_parseConditionExpr_FUN_00528970(&local_160,local_aa4);
                if (pcVar16 != (char *)0x0) {
LAB_0052b2b0:
                  pcVar18 = &DAT_01ed6810;
                  do {
                    cVar3 = *pcVar16;
                    *pcVar18 = cVar3;
                    if (cVar3 == '\0') {
                      return -1;
                    }
                    cVar3 = pcVar16[1];
                    pcVar16 = pcVar16 + 2;
                    pcVar18[1] = cVar3;
                    pcVar18 = pcVar18 + 2;
                  } while (cVar3 != '\0');
                  return -1;
                }
                if (_DAT_01ed6808 == 0) {
                  iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                    (0x01C6E360,local_aa4);
                  *(int *)&g_CGamePtr->field_0x254 = iVar6;
                }
              }
              else {
                iVar6 = _strnicmp
                                  (pcVar16,"allowHeroControls",0x11);
                if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0x11] + 1)] & 0xe0) == 0)) {
                  local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 0x11);
                  pcVar16 = core_script_cpp_parseConditionExpr_FUN_00528970(&local_160,local_a40);
                  if (pcVar16 != (char *)0x0) goto LAB_0052b2b0;
                  if (_DAT_01ed6808 == 0) {
                    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                      (0x01C6E360,local_a40);
                    _DAT_01ed7014 = (uint)(iVar6 == 0);
                    *(uint *)&g_CGamePtr->field_0x25c = _DAT_01ed7014;
                  }
                }
                else {
                  iVar6 = _strnicmp
                                    (pcVar16,"allowHeroDamage",0xf);
                  if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0xf] + 1)] & 0xe0) == 0)) {
                    local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 0xf);
                    pcVar16 = core_script_cpp_parseConditionExpr_FUN_00528970(&local_160,local_9dc);
                    if (pcVar16 != (char *)0x0) goto LAB_0052b2b0;
                    if (_DAT_01ed6808 == 0) {
                      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                        (0x01C6E360,local_9dc);
                      *(int *)&g_CGamePtr->field_0x250 = iVar6;
                    }
                  }
                  else {
                    iVar6 = _strnicmp
                                      (pcVar16,"attachActorToPlatform",0x15);
                    if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0x15] + 1)] & 0xe0) == 0))
                    {
                      local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 0x15);
                      local_168 = -1;
                      sscanf(local_160,"(%[^,], %[^)])%n");
                      if (local_168 < 2) {
                        FUN_005a28c0
                                  (&DAT_01ed6810,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_160 = local_160 + local_168;
                      core_script_cpp_trimString_FUN_00528830(local_31b4);
                      core_script_cpp_trimString_FUN_00528830(local_3344);
                      pCVar9 = (CPlatform *)
                               core_script_cpp_getActor_FUN_005289b0
                                         (local_3344,g_CPlatformClassInfo.name_hash,
                                          &g_CPlatformClassInfo);
                      if ((pCVar9 == (CPlatform *)0x0) ||
                         (pCVar12 = (CDemonActor *)
                                    core_script_cpp_getActor_FUN_005289b0
                                              (local_31b4,g_CDemonActorClassInfo.name_hash,
                                               &g_CDemonActorClassInfo),
                         pCVar12 == (CDemonActor *)0x0)) goto joined_r0x0052b739;
                      if (_DAT_01ed6808 == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_00512aa0(pCVar9,pCVar12);
                      }
                    }
                    else {
                      iVar6 = _strnicmp
                                        (pcVar16,"beginFadeIn",0xb);
                      if ((iVar6 == 0) && (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] & 0xe0) == 0))
                      {
                        local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 0xb);
                        if (_DAT_01ed6808 == 0) {
                          core_game_cpp_FUN_004bd620(g_CGamePtr);
                        }
                      }
                      else {
                        iVar6 = _strnicmp
                                          (pcVar16,"beginFadeOut",0xc);
                        if ((iVar6 == 0) &&
                           (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] & 0xe0) == 0)) {
                          local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 0xc);
                          if (_DAT_01ed6808 == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004bd660(g_CGamePtr);
                          }
                        }
                        else {
                          iVar6 = _strnicmp
                                            (pcVar16,"breakPoint",10);
                          if ((iVar6 == 0) &&
                             (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] & 0xe0) == 0)) {
                            local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar16 + 10);
                            if (_DAT_01ed6808 == 0) {
                              FUN_005a28c0
                                        (local_464,"Script breakpoint reached at line %d",local_164);
                              core_game_cpp_CGame_displayMessage_FUN_004b46b0
                                        (g_CGamePtr,local_464,5.0);
                              *(uint *)&this_ptr->field_0x1c = 2;
                            }
                          }
                          else {
                            iVar6 = _strnicmp
                                              (pcVar16,"cancelCameraHold",0x10);
                            if ((iVar6 == 0) &&
                               (((&DAT_006074b8)[(byte)(pcVar16[0x10] + 1)] & 0xe0) == 0)) {
                              local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                    (pcVar16 + 0x10);
                              if (_DAT_01ed6808 == 0) {
                                core_setdir_cpp_FUN_00540bc0(g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar6 = _strnicmp
                                                (pcVar16,"cancelWalkTo",0xc);
                              if ((iVar6 == 0) &&
                                 (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] & 0xe0) == 0)) {
                                local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                      (pcVar16 + 0xc);
                                pcVar16 = core_script_cpp_parseArgument_FUN_005288c0
                                                    (&local_160,local_2534,200);
                                if (pcVar16 != (char *)0x0) {
                                  pcVar18 = &DAT_01ed6810;
                                  do {
                                    cVar3 = *pcVar16;
                                    *pcVar18 = cVar3;
                                    if (cVar3 == '\0') {
                                      return -1;
                                    }
                                    cVar3 = pcVar16[1];
                                    pcVar16 = pcVar16 + 2;
                                    pcVar18[1] = cVar3;
                                    pcVar18 = pcVar18 + 2;
                                  } while (cVar3 != '\0');
                                  return -1;
                                }
                                iVar6 = _stricmp(local_2534,&DAT_005ce5eb)
                                ;
                                if (iVar6 == 0) {
                                  if (_DAT_01ed6808 == 0) {
                                    iVar6 = 0;
                                    for (iVar13 = 0;
                                        iVar13 < *(int *)&g_CDemonSetPtr->field_0x14d164;
                                        iVar13 = iVar13 + 1) {
                                      iVar11 = core_actor_cpp_castToClassHash_FUN_0040c840
                                                         (*(uint *)
                                                           (&g_CDemonSetPtr->field_0x14d168 + iVar6)
                                                          ,g_CCharacterClassInfo.name_hash);
                                      if (iVar11 != 0) {
                                        (**(code **)(*(int *)(iVar11 + 0x154) + 0x130))
                                                  (iVar11,0,0,0);
                                      }
                                      iVar6 = iVar6 + 4;
                                    }
                                  }
                                }
                                else {
                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                    (local_2534,g_CCharacterClassInfo.name_hash,
                                                     &g_CCharacterClassInfo);
                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                  if (_DAT_01ed6808 == 0) {
                                    (**(code **)(*(int *)(iVar6 + 0x154) + 0x130))(iVar6,0,0,0);
                                  }
                                }
                              }
                              else {
                                iVar6 = _strnicmp
                                                  (pcVar16,"chainToMission",0xe);
                                if ((iVar6 == 0) &&
                                   (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] & 0xe0) == 0)) {
                                  local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                        (pcVar16 + 0xe);
                                  pcVar16 = core_script_cpp_parseArgument_FUN_005288c0
                                                      (&local_160,local_38bc,200);
                                  if (pcVar16 != (char *)0x0) {
LAB_0052b9f1:
                                    pcVar18 = &DAT_01ed6810;
                                    do {
                                      cVar3 = *pcVar16;
                                      *pcVar18 = cVar3;
                                      if (cVar3 == '\0') {
                                        return -1;
                                      }
                                      cVar3 = pcVar16[1];
                                      pcVar16 = pcVar16 + 2;
                                      pcVar18[1] = cVar3;
                                      pcVar18 = pcVar18 + 2;
                                    } while (cVar3 != '\0');
                                    return -1;
                                  }
                                  core_script_cpp_trimString_FUN_00528830(local_38bc);
                                  uVar14 = _DAT_01ed6808;
                                  if (_DAT_01ed6808 == 0) {
                                    core_mission_cpp_FUN_004f7460(0x01D81080,local_38bc);
                                    *(uint *)this_ptr = 1;
                                    aiStack_180[3] = uVar14;
                                  }
                                }
                                else {
                                  iVar6 = _strnicmp
                                                    (pcVar16,"changeSetFilename",0x11);
                                  if ((iVar6 == 0) &&
                                     (((&DAT_006074b8)[(byte)(pcVar16[0x11] + 1)] & 0xe0) == 0)) {
                                    local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                          (pcVar16 + 0x11);
                                    local_150 = -1;
                                    sscanf(local_160,"(%d , %[^)])%n");
                                    if (local_150 < 2) {
                                      FUN_005a28c0
                                                (&DAT_01ed6810,"Error parsing changeSetFilename command parms");
                                      return -1;
                                    }
                                    local_160 = local_160 + local_150;
                                    core_script_cpp_trimString_FUN_00528830(local_3aac);
                                    if ((local_154 < 0) || (*(int *)(0x01D81080 + 4) <= local_154)
                                       ) {
                                      FUN_005a28c0
                                                (&DAT_01ed6810,"Invalid set index");
                                      return -1;
                                    }
                                    engine_dosio_cpp_FUN_00465e50
                                              (local_3aac,(char *)0x0,(char *)0x0,(char *)0x0,
                                               local_3cac);
                                    if (local_3cac[0] == '\0') {
                                      pcVar18 = &DAT_005ce65f;
                                      iVar6 = -1;
                                      pcVar16 = local_3aac;
                                      do {
                                        pcVar17 = pcVar16;
                                        if (iVar6 == 0) break;
                                        iVar6 = iVar6 + -1;
                                        pcVar17 = pcVar16 + (uint)bVar19 * -2 + 1;
                                        cVar3 = *pcVar16;
                                        pcVar16 = pcVar17;
                                      } while (cVar3 != '\0');
                                      pcVar17 = pcVar17 + -1;
                                      do {
                                        cVar3 = *pcVar18;
                                        *pcVar17 = cVar3;
                                        if (cVar3 == '\0') break;
                                        cVar3 = pcVar18[1];
                                        pcVar18 = pcVar18 + 2;
                                        pcVar17[1] = cVar3;
                                        pcVar17 = pcVar17 + 2;
                                      } while (cVar3 != '\0');
                                    }
                                    iVar6 = engine_dosio_cpp_getFileSize_FUN_004657f0
                                                      ("models",local_3aac);
                                    if (iVar6 < 1) {
                                      FUN_005a28c0
                                                (&DAT_01ed6810,"File models\\%s doesn't exist",
                                                 local_3aac);
                                      return -1;
                                    }
                                    if (_DAT_01ed6808 == 0) {
                                      core_mission_cpp_FUN_004f6cd0
                                                (0x01D81080,local_154,local_3aac);
                                    }
                                  }
                                  else {
                                    iVar6 = _strnicmp
                                                      (pcVar16,"dbSay",5);
                                    if ((iVar6 == 0) &&
                                       (((&DAT_006074b8)[(byte)(pcVar16[5] + 1)] & 0xe0) == 0)) {
                                      local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 5);
                                      local_14c = -1;
                                      sscanf(local_160,"(%[^)])%n");
                                      if (local_14c < 3) {
                                        FUN_005a28c0
                                                  (&DAT_01ed6810,"Error parsing dbSay arguments"
                                                  );
                                        return -1;
                                      }
                                      core_script_cpp_trimString_FUN_00528830(local_978);
                                      local_160 = local_160 + local_14c;
                                      iVar6 = core_script_cpp_FUN_00530990(this_ptr,local_978);
                                      if (iVar6 < 0) {
                                        local_148 = local_1274;
                                        local_128 = &DAT_005ce6b6;
                                        FUN_005a28c0
                                                  (local_1274,"[Can't find %s in database]",
                                                   local_978);
                                        shape_edittool_cpp_CStrList_add_FUN_00482070
                                                  ((CStrList *)&g_ScriptPickList,local_1274);
                                      }
                                      else {
                                        iVar6 = *(int *)&this_ptr->field_0x24 + iVar6 * 0x226;
                                        local_128 = (byte *)(iVar6 + 0x78);
                                        local_148 = (char *)(iVar6 + 0x96);
                                        pcVar18 = local_978;
                                        pcVar16 = (char *)(iVar6 + 0x3c);
                                        do {
                                          cVar3 = *pcVar16;
                                          *pcVar18 = cVar3;
                                          if (cVar3 == '\0') break;
                                          cVar3 = pcVar16[1];
                                          pcVar16 = pcVar16 + 2;
                                          pcVar18[1] = cVar3;
                                          pcVar18 = pcVar18 + 2;
                                        } while (cVar3 != '\0');
                                      }
                                      if (*(float *)&this_ptr->field_0x4c < 0.0) {
                                        local_14 = core_script_cpp_FUN_00530150
                                                             (this_ptr,local_128,local_978,local_148
                                                             );
                                        *(uint *)&this_ptr->field_0x4c = local_14;
                                        if (*(float *)&this_ptr->field_0x4c < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((_DAT_01ed6808 == 0) &&
                                         (aiStack_180[3] =
                                               core_script_cpp_CScript_processTimer_FUN_00530310
                                                         (this_ptr,*(float *)&this_ptr->field_0x4c,
                                                          time_remaining), 0 < aiStack_180[3])) {
                                        core_script_cpp_FUN_00530390
                                                  (this_ptr,*(CDemonActor **)&this_ptr->field_0x4);
                                      }
                                    }
                                    else {
                                      iVar6 = _strnicmp
                                                        (pcVar16,"dbStartSay",10);
                                      if ((iVar6 == 0) &&
                                         (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] & 0xe0) == 0)) {
                                        local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                              (pcVar16 + 10);
                                        local_144 = -1;
                                        sscanf(local_160,"(%[^)])%n");
                                        if (local_144 < 3) {
                                          FUN_005a28c0
                                                    (&DAT_01ed6810,
                                                     "Error parsing dbSay arguments");
                                          return -1;
                                        }
                                        core_script_cpp_trimString_FUN_00528830(local_338);
                                        local_160 = local_160 + local_144;
                                        iVar6 = core_script_cpp_FUN_00530990(this_ptr,local_338);
                                        if (iVar6 < 0) {
                                          local_120 = local_2b74;
                                          local_140 = &DAT_005ce707;
                                          FUN_005a28c0
                                                    (local_2b74,"[Can't find %s in database]",
                                                     local_338);
                                          shape_edittool_cpp_CStrList_add_FUN_00482070
                                                    ((CStrList *)&g_ScriptPickList,local_2b74);
                                        }
                                        else {
                                          iVar6 = iVar6 * 0x226 + *(int *)&this_ptr->field_0x24;
                                          local_140 = (byte *)(iVar6 + 0x78);
                                          local_120 = (char *)(iVar6 + 0x96);
                                          pcVar18 = local_338;
                                          pcVar16 = (char *)(iVar6 + 0x3c);
                                          do {
                                            cVar3 = *pcVar16;
                                            *pcVar18 = cVar3;
                                            if (cVar3 == '\0') break;
                                            cVar3 = pcVar16[1];
                                            pcVar16 = pcVar16 + 2;
                                            pcVar18[1] = cVar3;
                                            pcVar18 = pcVar18 + 2;
                                          } while (cVar3 != '\0');
                                        }
                                        local_14 = core_script_cpp_FUN_00530150
                                                             (this_ptr,local_140,local_338,local_120
                                                             );
                                        *(uint *)&this_ptr->field_0x4c = local_14;
                                        fVar1 = *(float *)&this_ptr->field_0x4c;
joined_r0x0052f950:
                                        if (fVar1 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar6 = _strnicmp
                                                          (pcVar16,"dbTimedDisplay",0xe);
                                        if ((iVar6 == 0) &&
                                           (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] & 0xe0) == 0)
                                           ) {
                                          local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                                (pcVar16 + 0xe);
                                          local_13c = -1;
                                          sscanf(local_160,"(%[^,], %f)%n");
                                          if (local_13c < 3) {
                                            FUN_005a28c0
                                                      (&DAT_01ed6810,
                                                       "Error parsing dbTimedDisplay arguments");
                                            return -1;
                                          }
                                          core_script_cpp_trimString_FUN_00528830(local_4c8);
                                          local_160 = local_160 + local_13c;
                                          iVar6 = core_script_cpp_FUN_00530990(this_ptr,local_4c8);
                                          if (iVar6 < 0) {
                                            local_7c = local_1ef4;
                                            FUN_005a28c0
                                                      (local_1ef4,
                                                       "[Can't find %s in database]",local_4c8
                                                      );
                                          }
                                          else {
                                            iVar6 = *(int *)&this_ptr->field_0x24 + iVar6 * 0x226;
                                            local_7c = (char *)(iVar6 + 0x96);
                                            pcVar18 = local_4c8;
                                            pcVar16 = (char *)(iVar6 + 0x3c);
                                            do {
                                              cVar3 = *pcVar16;
                                              *pcVar18 = cVar3;
                                              if (cVar3 == '\0') break;
                                              cVar3 = pcVar16[1];
                                              pcVar16 = pcVar16 + 2;
                                              pcVar18[1] = cVar3;
                                              pcVar18 = pcVar18 + 2;
                                            } while (cVar3 != '\0');
                                          }
                                          if (_DAT_01ed6808 == 0) {
                                            pcVar16 = &this_ptr->field_0x50;
                                            pcVar18 = local_7c;
                                            do {
                                              cVar3 = *pcVar18;
                                              *pcVar16 = cVar3;
                                              if (cVar3 == '\0') break;
                                              cVar3 = pcVar18[1];
                                              pcVar18 = pcVar18 + 2;
                                              pcVar16[1] = cVar3;
                                              pcVar16 = pcVar16 + 2;
                                            } while (cVar3 != '\0');
                                            aiStack_180[3] =
                                                 core_script_cpp_CScript_processTimer_FUN_00530310
                                                           (this_ptr,local_138,time_remaining);
                                            if (0 < aiStack_180[3]) {
                                              this_ptr->field_0x50 = 0;
                                            }
                                          }
                                        }
                                        else {
                                          iVar6 = _strnicmp
                                                            (pcVar16,"debug",5);
                                          if ((iVar6 == 0) &&
                                             (((&DAT_006074b8)[(byte)(pcVar16[5] + 1)] & 0xe0) == 0)
                                             ) {
                                            local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                                  (pcVar16 + 5);
                                            pcVar16 = core_script_cpp_parseArgument_FUN_005288c0
                                                                (&local_160,local_4134,300);
                                            if (pcVar16 != (char *)0x0) goto LAB_0052b9f1;
                                            if (_DAT_01ed6808 == 0) {
                                              shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                                                        (g_CEditorToolsPtr,
                                                         "Script debug message at line %d:\n%s");
                                            }
                                          }
                                          else {
                                            iVar6 = _strnicmp
                                                              (pcVar16,"dismember",9);
                                            if ((iVar6 == 0) &&
                                               (((&DAT_006074b8)[(byte)(pcVar16[9] + 1)] & 0xe0) ==
                                                0)) {
                                              local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 9);
                                              local_74 = -1;
                                              sscanf
                                                        (local_160,"(%[^,], %[^,)]%n");
                                              if (local_74 < 5) {
                                                FUN_005a28c0
                                                          (&DAT_01ed6810,
                                                           "Error parsing dismember command parms");
                                                return -1;
                                              }
                                              local_160 = local_160 + local_74;
                                              core_script_cpp_trimString_FUN_00528830(local_25fc);
                                              core_script_cpp_trimString_FUN_00528830(local_11ac);
                                              local_134 = (CCharacter *)
                                                          core_script_cpp_getActor_FUN_005289b0
                                                                    (local_25fc,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                              if (local_134 == (CCharacter *)0x0)
                                              goto joined_r0x0052b739;
                                              iVar6 = core_script_cpp_FUN_00528c20
                                                                (local_134,local_11ac,local_39ac);
                                              if (iVar6 == 0) {
                                                return -1;
                                              }
                                              core_actor_cpp_CVector3f_ctor_FUN_0040d220(&local_1a8)
                                              ;
                                              initial_velocity = (CVector3f *)0x0;
                                              if (*local_160 == ',') {
                                                local_74 = -1;
                                                sscanf
                                                          (local_160,",%f ,%f ,%f ,%f %n");
                                                if (local_74 < 5) {
                                                  FUN_005a28c0
                                                            (&DAT_01ed6810,
                                                             "Error parsing dismember command parms");
                                                  return -1;
                                                }
                                                local_160 = local_160 + local_74;
                                                if (0.0 < local_4938) {
                                                  fVar1 = local_4938 * _DAT_005cfa38 * _DAT_005cfa3c
                                                  ;
                                                  local_14 = core_actor_cpp_FUN_0040ce40
                                                                       (-fVar1,fVar1);
                                                  local_14 = core_actor_cpp_FUN_0040ce40
                                                                       (-fVar1,fVar1,0,local_14);
                                                  unkafter_stranger_cpp_FUN_00527200(local_14);
                                                  local_1c0._0_4_ = local_190._0_4_;
                                                  *(uint *)
                                                   ((int)&local_1c0 + (uint)bVar19 * -8 + 4) =
                                                       *(uint *)
                                                        ((int)&local_190 + (uint)bVar19 * -8 + 4);
                                                  *(uint *)
                                                   ((int)&local_1c0 +
                                                   (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
                                                       *(uint *)
                                                        ((int)&local_190 +
                                                        (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
                                                  core_dirmat_cpp_FUN_0045b550(local_20c,&local_1c0)
                                                  ;
                                                  core_dirmat_cpp_FUN_0045b800(local_20c,&local_1a8)
                                                  ;
                                                  local_184 = aiStack_1e0[2];
                                                  aiStack_180[(uint)bVar19 * -2] =
                                                       aiStack_1e0[(uint)bVar19 * -2 + 3];
                                                  aiStack_180
                                                  [(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                                                       aiStack_1e0
                                                       [(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
                                                  core_actor_cpp_FUN_0040d230(&local_1a8,&local_184)
                                                  ;
                                                }
                                                initial_velocity = &local_1a8;
                                              }
                                              if (*local_160 != ')') {
                                                FUN_005a28c0
                                                          (&DAT_01ed6810,
                                                           "Error parsing dismember command parms near '%s'",
                                                           local_160);
                                                return -1;
                                              }
                                              local_160 = local_160 + 1;
                                              if (_DAT_01ed6808 == 0) {
                                                iVar6 = 0;
                                                local_130 = core_bodypart_cpp_FUN_00414550
                                                                      ((CVector3f *)
                                                                       &local_134->field_0x20,
                                                                       (UOrientationVector *)
                                                                       &local_134->field_0x30,
                                                                       initial_velocity,
                                                                       (CDemonActor *)local_134,0,0,
                                                                       *(EBloodType *)
                                                                        &local_134->field_0x27a0);
                                                iVar13 = 0;
                                                do {
                                                  if (*(int *)((int)local_39ac + iVar13) != 0) {
                                                    core_charactr_cpp_FUN_00430590
                                                              (local_134,local_130,iVar6,1);
                                                  }
                                                  iVar6 = iVar6 + 1;
                                                  iVar13 = iVar13 + 4;
                                                } while (iVar6 < 0x3c);
                                                core_bodypart_cpp_FUN_004157c0(local_130);
                                              }
                                            }
                                            else {
                                              iVar6 = _strnicmp
                                                                (pcVar16,"display",7);
                                              if ((iVar6 == 0) &&
                                                 (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 7);
                                                pcVar16 = core_script_cpp_parseArgument_FUN_005288c0
                                                                    (&local_160,
                                                                     &this_ptr->field_0x50,0x400);
                                                if (pcVar16 != (char *)0x0) {
                                                  FUN_005a28c0
                                                            (&DAT_01ed6810,
                                                             "Error parsing message text on display statament: %s",
                                                             pcVar16);
                                                  return -1;
                                                }
                                              }
                                              else {
                                                iVar6 = _strnicmp
                                                                  (pcVar16,&DAT_005ce895,4);
                                                if ((iVar6 == 0) &&
                                                   (((&DAT_006074b8)[(byte)(pcVar16[4] + 1)] & 0xe0)
                                                    == 0)) {
                                                  local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 4);
                                                  iVar6 = core_script_cpp_FUN_00530410
                                                                    (this_ptr,*(uint *)
                                                                               &this_ptr->field_0x44
                                                                     ,1);
                                                  if (iVar6 < 0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Can't skip next command after else statement on line %d",
                                                               local_164);
                                                    return -1;
                                                  }
                                                  *(int *)&this_ptr->field_0x44 = iVar6;
                                                }
                                                else {
                                                  iVar6 = _strnicmp
                                                                    (pcVar16,"enableCamera"
                                                                     ,0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xc);
                                                  local_dc = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_dc < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing enableCamera parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_dc;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1b0c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_3664);
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_00535360
                                                            (g_CDemonSetPtr,local_1b0c);
                                                  if (iVar6 < 0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Camera \"%s\" does not exist.",
                                                               local_1b0c);
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    iVar13 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_3664);
                                                  core_set_cpp_CDemonSet_setCameraEnabled_FUN_0053b340
                                                            (g_CDemonSetPtr,iVar6,iVar13);
                                                  }
                                                  else {
                                                    pcVar16 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (0x01C6E360,local_3664);
                                                  if (pcVar16 != (char *)0x0) {
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0x11);
                                                  local_54 = -1;
                                                  sscanf
                                                            (local_160,"(%d , %[^)])%n");
                                                  if (local_54 < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing enableCameraGroup parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_54;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1a44);
                                                  if (_DAT_01ed6808 == 0) {
                                                    iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_1a44);
                                                  core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0053b360
                                                            (g_CDemonSetPtr,local_12c,iVar6);
                                                  }
                                                  else {
                                                    pcVar16 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (0x01C6E360,local_1a44);
                                                  if (pcVar16 != (char *)0x0) {
LAB_0052c6e3:
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xf);
                                                  local_124 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_124 < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing enableHealthBar parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_124;
                                                  core_script_cpp_trimString_FUN_00528830(local_e8c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_133c);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_e8c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  iVar13 = _stricmp
                                                                     (local_133c,"false");
                                                  uVar7 = 0;
                                                  if (iVar13 != 0) {
                                                    iVar13 = _stricmp
                                                                       (local_133c,&DAT_005ce9bf);
                                                    if (iVar13 == 0) {
                                                      uVar7 = 1;
                                                    }
                                                    else {
                                                      iVar13 = _stricmp
                                                                         (local_133c,
                                                                          "always");
                                                      if (iVar13 != 0) {
                                                        FUN_005a28c0
                                                                  (&DAT_01ed6810,
                                                                                                                                      
                                                  "Invalid health bar mode '%s'",local_133c);
                                                  return -1;
                                                  }
                                                  uVar7 = 2;
                                                  }
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    *(uint *)(iVar6 + 0x2540) = uVar7;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,&DAT_005ce9e8,3);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 3);
                                                  if (_DAT_01ed6808 == 0) {
                                                    aiStack_180[3] = _DAT_01ed6808;
                                                    *(uint *)this_ptr = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"fadeIn",6);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 6);
                                                  if (_DAT_01ed6808 == 0) {
                                                    aiStack_180[3] = _DAT_01ed6808;
                                                    if (0.0 <= *(float *)&this_ptr->field_0x48) {
                                                      uVar14 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004bd8d0
                                                            (g_CGamePtr);
                                                  if (uVar14 != 0) {
                                                    aiStack_180[3] = 1;
                                                    *(uint *)&g_CGamePtr->field_0x250 = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_FUN_004bd620(g_CGamePtr);
                                                    *(uint *)&this_ptr->field_0x48 =
                                                         0x3f800000;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"fadeOut",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 7);
                                                  uVar14 = _DAT_01ed6808;
                                                  pCVar4 = g_CGamePtr;
                                                  if (_DAT_01ed6808 == 0) {
                                                    *(uint *)&g_CGamePtr->field_0x250 = 0;
                                                    aiStack_180[3] = uVar14;
                                                    if (0.0 <= *(float *)&this_ptr->field_0x48) {
                                                      uVar14 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004bd8d0(pCVar4);
                                                  if (uVar14 != 0) {
                                                    aiStack_180[3] = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeOut_FUN_004bd660
                                                              (pCVar4);
                                                    *(uint *)&this_ptr->field_0x48 =
                                                         0x3f800000;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"gesture",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 7);
                                                  local_118 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^,)]%n");
                                                  if (local_118 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing gesture command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_118;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1fbc);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_10e4);
                                                  local_114 = 0;
                                                  if (*local_160 == ',') {
                                                    local_118 = -1;
                                                    sscanf
                                                              (local_160,", %d %n");
                                                    if (local_118 < 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Error parsing gesture loop parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_118;
                                                  }
                                                  if (*local_160 != ')') {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing gesture command parms - eating last paren");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  pCVar8 = (CCharacter *)
                                                           core_script_cpp_getActor_FUN_005289b0
                                                                     (local_1fbc,
                                                                      g_CCharacterClassInfo.
                                                                      name_hash,
                                                                      &g_CCharacterClassInfo);
                                                  if (pCVar8 == (CCharacter *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    uVar14 = core_charactr_cpp_FUN_00432090
                                                                       (pCVar8,local_10e4);
                                                    *(uint *)&pCVar8->field_0x275c = local_114
                                                    ;
                                                  }
                                                  else {
                                                    iVar6 = 0;
                                                    pcVar16 = local_10e4;
                                                    this_ptr_01 = core_motion_cpp_FUN_004fc310
                                                                            ((CMotionController *)
                                                                             &pCVar8->field_0x158);
                                                    iVar6 = core_motion_cpp_FUN_004fb9c0
                                                                      (this_ptr_01,pcVar16,iVar6);
                                                    uVar14 = (uint)(-1 < iVar6);
                                                  }
                                                  if (uVar14 == 0) {
                                                    uVar7 = core_bugs_cpp_FUN_004242d0
                                                                      (&pCVar8->field_0x158);
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Gesture name %s is not valid for actor %s, model %s",
                                                               local_10e4,local_1fbc,uVar7);
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"getIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 9);
                                                  local_110 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^,)] )%n");
                                                  if (local_110 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing getIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_110;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_14cc);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_291c);
                                                  if (_DAT_01ed6808 == 0) {
                                                    engine_ini_cpp_FUN_004d8a20
                                                              (&local_4720,"system\\bw3.ini"
                                                               ,&DAT_005ceb10);
                                                    local_10c = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00494d00
                                                            (0x01C6E360,local_291c);
                                                  engine_ini_cpp_FUN_004d8c30
                                                            (&local_4720,local_14cc,&local_10c);
                                                  core_event_cpp_CEventList_setCounter_FUN_00494bf0
                                                            (0x01C6E360,local_291c,local_10c);
                                                  engine_ini_cpp_CIniFile_dtor_FUN_004d8a50
                                                            (&local_4720,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xf);
                                                  local_108 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_108 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing getTriggerActor command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_108;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_372c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1c9c);
                                                  iVar6 = 
                                                  core_script_cpp_validateActorVariableName_FUN_005286f0
                                                            (local_372c);
                                                  if (iVar6 == 0) {
                                                    return -1;
                                                  }
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_1c9c,
                                                                     g_CTriggerClassInfo.name_hash,
                                                                     &g_CTriggerClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00494e70
                                                            (0x01C6E360,local_372c,
                                                             *(CDemonActor **)(iVar6 + 0x300));
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"gosub",5);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 5);
                                                  iVar6 = core_script_cpp_FUN_005303b0
                                                                    (this_ptr,local_160);
                                                  if (iVar6 < 0) {
                                                    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_164,local_160));
                                                    pcVar16 = "Undefined label %s used in gosub statement on line %d";
LAB_00529bdf:
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,pcVar16,dVar2);
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    if (7 < *(int *)&this_ptr->field_0x458) {
                                                      local_104 = _fopen("stack.txt",
                                                                             &DAT_005cebad);
                                                      FUN_005a3140
                                                                (local_104,"line%6d: %s\n",
                                                                 local_164,pcVar16);
                                                      iVar6 = *(int *)&this_ptr->field_0x458 + -1;
                                                      if (-1 < iVar6) {
                                                        iVar13 = iVar6 * 4 + (int)this_ptr;
                                                        do {
                                                          piVar10 = (int *)(iVar13 + 0x45c);
                                                          iVar13 = iVar13 + -4;
                                                          iVar6 = iVar6 + -1;
                                                          FUN_005a3140
                                                                    (local_104,"line%6d: %s\n",
                                                                     *(uint *)
                                                                      (*(int *)&this_ptr->field_0x30
                                                                      + *piVar10 * 8),
                                                                     *(uint *)
                                                                      (*(int *)&this_ptr->field_0x30
                                                                       + 4 + *piVar10 * 8));
                                                        } while (-1 < iVar6);
                                                      }
                                                      _fclose(local_104);
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Call stack overflow detected on script line %d.  Check stack.txt for details."
                                                                 ,local_164);
                                                      return -1;
                                                    }
                                                    *(uint *)
                                                     (&this_ptr->field_0x45c +
                                                     *(int *)&this_ptr->field_0x458 * 4) =
                                                         *(uint *)&this_ptr->field_0x44;
                                                    *(int *)&this_ptr->field_0x44 = iVar6;
                                                    *(int *)&this_ptr->field_0x458 =
                                                         *(int *)&this_ptr->field_0x458 + 1;
                                                    local_160 = &DAT_005cec22;
                                                  }
                                                  else {
                                                    local_160 = &DAT_005cec22;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,&DAT_005cec23,4);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 4);
                                                  iVar6 = core_script_cpp_FUN_005303b0
                                                                    (this_ptr,local_160);
                                                  if (iVar6 < 0) {
                                                    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_164,local_160));
                                                    pcVar16 = "Undefined label %s used in goto statement on line %d";
                                                    goto LAB_00529bdf;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    *(int *)&this_ptr->field_0x44 = iVar6;
                                                    local_160 = &DAT_005cec5d;
                                                  }
                                                  else {
                                                    local_160 = &DAT_005cec5d;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,&DAT_005cec5e,4);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 4);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_3edc,300);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052c6e3;
                                                  if (_DAT_01ed6808 == 0) {
                                                                                                        
                                                  shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                                                            (g_CEditorToolsPtr,
                                                             "Script GTFO at line %d:\n%s\nTerminating mission.");
                                                  *(uint *)this_ptr = 1;
                                                  aiStack_180[3] = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xd);
                                                  local_100 = 0xffffffff;
                                                  sscanf
                                                            (local_160,"(%[^,)]%n");
                                                  if ((int)local_100 < 2) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing holsterWeapon command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_100;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1e2c);
                                                  local_fc = core_script_cpp_getActor_FUN_005289b0
                                                                       (local_1e2c,
                                                                        g_CHeroClassInfo.name_hash,
                                                                        &g_CHeroClassInfo);
                                                  if (local_fc == 0) goto joined_r0x0052b739;
                                                  local_f8 = 1;
                                                  if (*local_160 == ',') {
                                                    local_160 = local_160 + 1;
                                                    uVar14 = 0xffffffff;
                                                    pcVar16 = local_160;
                                                    do {
                                                      if (uVar14 == 0) break;
                                                      uVar14 = uVar14 - 1;
                                                      cVar3 = *pcVar16;
                                                      pcVar16 = pcVar16 + (uint)bVar19 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    local_100 = ~uVar14 - 2;
                                                    if ((int)local_100 < 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Error parsing holsterWeapon command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    pcVar16 = local_160;
                                                    pcVar18 = acStack_18b6 + 2;
                                                    for (uVar15 = local_100 >> 2; uVar15 != 0;
                                                        uVar15 = uVar15 - 1) {
                                                      *(uint *)pcVar18 =
                                                           *(uint *)pcVar16;
                                                      pcVar16 = pcVar16 + (uint)bVar19 * -8 + 4;
                                                      pcVar18 = pcVar18 + (uint)bVar19 * -8 + 4;
                                                    }
                                                    for (uVar15 = local_100 & 3; uVar15 != 0;
                                                        uVar15 = uVar15 - 1) {
                                                      *pcVar18 = *pcVar16;
                                                      pcVar16 = pcVar16 + (uint)bVar19 * -2 + 1;
                                                      pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
                                                    }
                                                    acStack_18b6[~uVar14] = '\0';
                                                    local_160 = local_160 + local_100;
                                                    if (_DAT_01ed6808 == 0) {
                                                      local_f8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,acStack_18b6 + 2);
                                                  }
                                                  else {
                                                    pcVar16 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (0x01C6E360,acStack_18b6 + 2);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052d1de;
                                                  }
                                                  }
                                                  if (*local_160 != ')') {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Missing closing ')' in holsterWeapon command");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  if (_DAT_01ed6808 == 0) {
                                                    (**(code **)(*(int *)(local_fc + 0x154) + 0x144)
                                                    )(local_fc,local_f8 == 0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,&DAT_005ced2c,4);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 4);
                                                  aiStack_180[4] = *(int *)&this_ptr->field_0x44;
                                                  aiStack_180[3] = 0;
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,&DAT_005ced31,2);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[2] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 2);
                                                  pcVar16 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00528970
                                                            (&local_160,local_b08);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052d1de;
                                                  if ((_DAT_01ed6808 == 0) &&
                                                     (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_b08), iVar6 == 0)) {
                                                    iVar6 = core_script_cpp_FUN_00530410
                                                                      (this_ptr,*(uint *)
                                                                                 &this_ptr->
                                                                                  field_0x44,0);
                                                    if (iVar6 < 0) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Can't skip next command after if statement on line %d",
                                                                 local_164);
                                                      return -1;
                                                    }
                                                    iVar13 = _strnicmp
                                                                       (*(char **)(*(int *)&this_ptr
                                                  ->field_0x30 + 4 + iVar6 * 8),&DAT_005ced6a,4);
                                                  if (iVar13 == 0) {
                                                    iVar6 = iVar6 + 1;
                                                  }
                                                  *(int *)&this_ptr->field_0x44 = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "finishedAct",0xb);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xb);
                                                  local_f4 = -1;
                                                  sscanf
                                                            (local_160," ( )%n");
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_f4 < 2) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing finishedAct command");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_f4;
                                                  if (_DAT_01ed6808 == 0) {
                                                    aiStack_180[3] = _DAT_01ed6808;
                                                    *(uint *)this_ptr = 1;
                                                    *(uint *)&pCVar4->field_0x284 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"letterbox",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 9);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_52c,100);
                                                  if (pcVar16 != (char *)0x0) {
LAB_0052d1de:
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  iVar13 = -1;
                                                  iVar6 = _stricmp
                                                                    (local_52c,"false");
                                                  if (iVar6 == 0) {
                                                    iVar13 = 0;
                                                  }
                                                  iVar6 = _stricmp
                                                                    (local_52c,&DAT_005cedb4);
                                                  if (iVar6 == 0) {
                                                    iVar13 = 1;
                                                  }
                                                  iVar6 = _stricmp
                                                                    (local_52c,"bottom");
                                                  pCVar4 = g_CGamePtr;
                                                  if (iVar6 == 0) {
                                                    iVar13 = 2;
                                                  }
                                                  else if (iVar13 < 0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Invalid letterBox mode: %s",
                                                               local_52c);
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    *(int *)&g_CGamePtr->field_0x24c = iVar13;
                                                    *(uint *)&pCVar4->field_0x250 =
                                                         (uint)(iVar13 == 0);
                                                    *(uint *)&pCVar4->field_0x254 =
                                                         (uint)(*(int *)&pCVar4->field_0x24c == 0);
                                                    *(int *)&pCVar4->field_0x25c =
                                                         *(int *)&pCVar4->field_0x24c;
                                                    if (*(int *)&pCVar4->field_0x24c != 0) {
                                                      *(uint *)&g_CFieldNotesPtr->field_0x40 =
                                                           0;
                                                    }
                                                    pCVar4 = g_CGamePtr;
                                                    *(uint *)&this_ptr->field_0x454 =
                                                         0xffffffff;
                                                    _DAT_01ed7014 = 1;
                                                    if ((*(int *)&pCVar4->field_0x264 != 0) &&
                                                       (*(int *)&pCVar4->field_0x24c != 0)) {
                                                      iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04
                                                                      );
                                                      (**(code **)(*(int *)(iVar6 + 0x154) + 0x150))
                                                                (iVar6);
                                                      (*(code *)**(uint **)
                                                                  &g_CGamePtr->field_0xb8c)
                                                                (g_CGamePtr,0);
                                                      iVar6 = unkafter_mimic_cpp_FUN_00495e60
                                                                        (g_CDemonSetPtr);
                                                      core_setdir_cpp_FUN_0053f940
                                                                (g_CDemonSetPtr,
                                                                 *(uint *)
                                                                  &g_CScriptPtr->field_0xc,1);
                                                      pCVar5 = g_CDemonSetPtr;
                                                      *(uint *)&g_CScriptPtr->field_0x10 = 0;
                                                      iVar13 = unkafter_mimic_cpp_FUN_00495e60
                                                                         (pCVar5);
                                                      if (iVar6 == iVar13) {
                                                                                                                
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_00534890
                                                            (g_CDemonSetPtr,iVar13);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "loadFieldNotes",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xe);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_3db0,0x104);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052d1de;
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_fldnotes_cpp_FUN_004aa810
                                                              (g_CFieldNotesPtr,local_3db0,0);
                                                  }
                                                  else if ((*(int *)(0x01D81080 + 0x1008) != 0) ||
                                                          (*(char *)g_CFieldNotesPtr == '\0')) {
                                                    iVar6 = core_fldnotes_cpp_FUN_004aa810
                                                                      (g_CFieldNotesPtr,local_3db0,
                                                                       &DAT_01ed6810);
joined_r0x0052e818:
                                                    if (iVar6 == 0) {
                                                      return -1;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xe);
                                                  pcVar16 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00528970
                                                            (&local_160,local_8b0);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052d1de;
                                                  if (_DAT_01ed6808 == 0) {
                                                    iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_8b0);
                                                  *(int *)&this_ptr->field_0x14 = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"lookAt",6);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 6);
                                                  local_f0 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,)]%n");
                                                  if (local_f0 < 2) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing lookAt command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_f0;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_37f4);
                                                  pCVar8 = (CCharacter *)
                                                           core_script_cpp_getActor_FUN_005289b0
                                                                     (local_37f4,
                                                                      g_CCharacterClassInfo.
                                                                      name_hash,
                                                                      &g_CCharacterClassInfo);
                                                  if (pCVar8 == (CCharacter *)0x0) {
joined_r0x0052b739:
                                                    if (_DAT_01ed701c == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_00529b34;
                                                  }
                                                  pCVar12 = (CDemonActor *)0x0;
                                                  if (*local_160 == ',') {
                                                    local_f0 = -1;
                                                    sscanf
                                                              (local_160,", %[^)]%n");
                                                    if (local_f0 < 3) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Error parsing lookAt command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_f0;
                                                    core_script_cpp_trimString_FUN_00528830
                                                              (local_23a4);
                                                    pCVar12 = (CDemonActor *)
                                                              core_script_cpp_getActor_FUN_005289b0
                                                                        (local_23a4,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo);
                                                    if (pCVar12 == (CDemonActor *)0x0)
                                                    goto joined_r0x0052b739;
                                                  }
                                                  if (*local_160 != ')') {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Missing closing ')' in lookAt command");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_charactr_cpp_FUN_00433120(pCVar8,pCVar12);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "monsterVision",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xd);
                                                  local_ec = 0xffffffff;
                                                  local_e8 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d )%n");
                                                  if (local_e8 < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing monsterVision command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_e8;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2e94);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_2e94,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    *(int *)&this_ptr->field_0x18 = iVar6;
                                                    local_ec = (uint)(*(int *)&g_CGamePtr->
                                                                               field_0x268 == 0);
                                                    (**(code **)(*(int *)&g_CGamePtr->field_0xb8c +
                                                                4))(g_CGamePtr,local_ec);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "movePlatform",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xc);
                                                  local_e4 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %f , %f )%n");
                                                  if (local_e4 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing movePlatform command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_e4;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_22dc);
                                                  pCVar9 = (CPlatform *)
                                                           core_script_cpp_getActor_FUN_005289b0
                                                                     (local_22dc,
                                                                      g_CPlatformClassInfo.name_hash
                                                                      ,&g_CPlatformClassInfo);
                                                  if (pCVar9 == (CPlatform *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if ((local_492c < 0.0) || (1.0 < local_492c)) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  dVar2 = (double)local_4934;
                                                  if (dVar2 <= 0.0) {
                                                    pcVar16 = "Invalid movement rate %f";
                                                    goto LAB_00529bdf;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_platfrm_cpp_FUN_00512020
                                                              (pCVar9,local_492c,local_4934);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"openDoor",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 8);
                                                  local_e0 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_e0 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing openDoor command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_e0;
                                                  core_script_cpp_trimString_FUN_00528830(local_f54)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1404);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_f54,
                                                                     g_CDoorClassInfo.name_hash,
                                                                     &g_CDoorClassInfo);
                                                  if ((iVar6 == 0) ||
                                                     (iVar13 = core_script_cpp_getActor_FUN_005289b0
                                                                         (local_1404,
                                                                          g_CCharacterClassInfo.
                                                                          name_hash,
                                                                          &g_CCharacterClassInfo),
                                                     iVar13 == 0)) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    aiStack_180[3] = _DAT_01ed6808;
                                                    if (0.0 <= *(float *)&this_ptr->field_0x48) {
                                                      iVar6 = (**(code **)(*(int *)(iVar13 + 0x154)
                                                                          + 0x124))(iVar13);
                                                      if (iVar6 != 0) {
                                                        aiStack_180[4] = 1;
                                                      }
                                                    }
                                                    else {
                                                      (**(code **)(*(int *)(iVar13 + 0x154) + 0x11c)
                                                      )(iVar13,iVar6);
                                                      *(uint *)&this_ptr->field_0x48 =
                                                           0x3f800000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "pressButton",0xb);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xb);
                                                  local_d8 = -1;
                                                  sscanf
                                                            (local_160,"( %[^,], %[^)])%n");
                                                  if (local_d8 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing pressButton() command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_d8;
                                                  core_script_cpp_trimString_FUN_00528830(local_7e8)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830(local_b6c)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_7e8,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  piVar10 = core_script_cpp_FUN_00528b30
                                                                      ((SPlayerActionState *)
                                                                       (iVar6 + 0xcdd4),local_b6c);
                                                  uVar14 = _DAT_01ed6808;
                                                  if (piVar10 == (int *)0x0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Invalid button name: %s",
                                                               local_b6c);
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    if (_DAT_01ed7014 != 0) {
                                                      core_game_cpp_FUN_004ba490(g_CGamePtr);
                                                      _DAT_01ed7014 = uVar14;
                                                    }
                                                    *piVar10 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"raise",5);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 5);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_cfc,100);
                                                  if (pcVar16 != (char *)0x0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing event expression on raise statament: %s",
                                                               pcVar16);
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_0048c150
                                                            (0x01C6E360,local_cfc);
                                                  }
                                                  else {
                                                    pcVar16 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_00491b40
                                                            (0x01C6E360,local_cfc);
                                                  if (pcVar16 != (char *)0x0) {
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "releaseButton",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xd);
                                                  local_d4 = -1;
                                                  sscanf
                                                            (local_160,"( %[^,], %[^)])%n");
                                                  if (local_d4 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing releaseButton() command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_d4;
                                                  core_script_cpp_trimString_FUN_00528830(local_c98)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830(local_c34)
                                                  ;
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_c98,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  piVar10 = core_script_cpp_FUN_00528b30
                                                                      ((SPlayerActionState *)
                                                                       (iVar6 + 0xcdd4),local_c34);
                                                  if (piVar10 == (int *)0x0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Invalid button name: %s",
                                                               local_c34);
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    if (_DAT_01ed7014 != 0) {
                                                      core_game_cpp_FUN_004ba490(g_CGamePtr);
                                                      _DAT_01ed7014 = 0;
                                                    }
                                                    *piVar10 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0x1b] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0x1b);
                                                  local_d0 = -1;
                                                  sscanf
                                                            (local_160," ( %[^)])%n");
                                                  if (local_d0 < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing removeAllItemsFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_d0;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_30ec);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_30ec,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_inv_cpp_FUN_004da4e0
                                                              ((CInventory *)(iVar6 + 0x206e8));
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0x17] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0x17);
                                                  local_c8 = -1;
                                                  sscanf
                                                            (local_160," ( %[^,], %[^,)]%n");
                                                  if (local_c8 < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_c8;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2aac);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_29e4);
                                                  local_c4 = core_script_cpp_getActor_FUN_005289b0
                                                                       (local_2aac,
                                                                        g_CHeroClassInfo.name_hash,
                                                                        &g_CHeroClassInfo);
                                                  if (local_c4 == 0) goto joined_r0x0052b739;
                                                  iVar6 = 1;
                                                  if (*local_160 == ',') {
                                                    local_c8 = -1;
                                                    sscanf
                                                              (local_160,", %[^)]%n");
                                                    if (local_c8 < 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Error parsing removeItemFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_c8;
                                                    if (_DAT_01ed6808 == 0) {
                                                      iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_165c);
                                                  }
                                                  else {
                                                    pcVar16 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (0x01C6E360,local_165c);
                                                  if (pcVar16 != (char *)0x0) {
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  if (*local_160 != ')') {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  if (((_DAT_01ed6808 == 0) &&
                                                      (pCVar12 = core_inv_cpp_FUN_004db990
                                                                           ((CInventory *)
                                                                            (*(int *)(_DAT_01d5ba14
                                                                                      * 4 + 
                                                  0x1d5ba04) + 0x206e8),local_29e4),
                                                  pCVar12 != (CDemonActor *)0x0)) &&
                                                  (core_inv_cpp_FUN_004dbaa0
                                                             ((CInventory *)(local_c4 + 0x206e8),
                                                              pCVar12,iVar6), iVar6 == 0)) {
                                                    core_mimic_cpp_copyQuaternion_FUN_00495e40
                                                              (&pCVar12->field_0x20,local_c4 + 0x20)
                                                    ;
                                                    core_mission_cpp_FUN_004f6930
                                                              (0x01D81080,pCVar12);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"removeKeys"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 10);
                                                  local_bc = -1;
                                                  sscanf
                                                            (local_160," (%d )%n");
                                                  if (local_bc < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_bc;
                                                  if (*(int *)g_CNetGamePtr != 0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_hero_cpp_FUN_004d41e0
                                                              (*(CHero **)
                                                                (_DAT_01d5ba14 * 4 + 0x1d5ba04),
                                                               local_c0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"return",6);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 6);
                                                  if (_DAT_01ed6808 == 0) {
                                                    iVar6 = *(int *)&this_ptr->field_0x458;
                                                    if (iVar6 < 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Return without gosub detected on script line %d."
                                                                 ,local_164);
                                                      return -1;
                                                    }
                                                    *(int *)&this_ptr->field_0x458 = iVar6 + -1;
                                                    *(uint *)&this_ptr->field_0x44 =
                                                         *(uint *)
                                                          (&this_ptr->field_0x458 + iVar6 * 4);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "rollCredits",0xb);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xb);
                                                  local_b8 = -1;
                                                  sscanf
                                                            (local_160," ( )%n");
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_b8 < 2) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_b8;
                                                  if (_DAT_01ed6808 == 0) {
                                                    aiStack_180[3] = _DAT_01ed6808;
                                                    *(uint *)this_ptr = 1;
                                                    *(uint *)&pCVar4->field_0x284 = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,&DAT_005cf297,3);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 3);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_451c,500);
                                                  if (pcVar16 != (char *)0x0) {
LAB_0052e45a:
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  local_b4 = -1;
                                                  sscanf
                                                            (local_451c,"%[^,], %[^,], %n");
                                                  if (local_b4 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2dcc);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1d64);
                                                  if (*(float *)&this_ptr->field_0x4c < 0.0) {
                                                    pcVar16 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (local_451c + local_b4);
                                                  local_14 = core_script_cpp_FUN_00530150
                                                                       (this_ptr,local_2dcc,
                                                                        local_1d64,pcVar16);
                                                  *(uint *)&this_ptr->field_0x4c = local_14;
                                                  if (*(float *)&this_ptr->field_0x4c < 0.0) {
                                                    return -1;
                                                  }
                                                  }
                                                  if ((_DAT_01ed6808 == 0) &&
                                                     (aiStack_180[3] =
                                                                                                                      
                                                  core_script_cpp_CScript_processTimer_FUN_00530310
                                                            (this_ptr,*(float *)&this_ptr->
                                                                                 field_0x4c,
                                                             time_remaining), 0 < aiStack_180[3])) {
                                                    core_script_cpp_FUN_00530390
                                                              (this_ptr,*(CDemonActor **)
                                                                         &this_ptr->field_0x4);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "selectWeapon",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xc);
                                                  local_b0 = -1;
                                                  sscanf
                                                            (local_160," (%[^,], %[^)])%n");
                                                  if (local_b0 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing selectWeapon parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830(local_39c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830(local_784)
                                                  ;
                                                  local_160 = local_160 + local_b0;
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_39c,
                                                                     g_CHeroClassInfo.name_hash,
                                                                     &g_CHeroClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    this_ptr_00 = (CInventory *)(iVar6 + 0x206e8);
                                                    local_ac = _DAT_01ed6808;
                                                    pCVar12 = (CDemonActor *)
                                                              core_game_cpp_FUN_004c4d50
                                                                        (this_ptr_00);
                                                    local_a8 = pCVar12;
                                                    if (pCVar12 != (CDemonActor *)0x0) {
                                                      do {
                                                        if (pCVar12 == (CDemonActor *)0x0) {
                                                          _DAT_01d71de0 = "..\\core\\script.cpp"
                                                          ;
                                                          _DAT_01d71de4 = 0xbcf;
                                                          core_main_c_FUN_004e4330
                                                                    (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar6 = core_actor_cpp_FUN_0040c790
                                                                    (pCVar12,local_784);
                                                  if (iVar6 != 0) goto LAB_00529b1b;
                                                  core_inv_cpp_FUN_004dbb40
                                                            (this_ptr_00,(CDemonActor *)0x0,5,1);
                                                  pCVar12 = (CDemonActor *)
                                                            core_game_cpp_FUN_004c4d50(this_ptr_00);
                                                  } while (pCVar12 != local_a8);
                                                  }
                                                  if (local_ac == 0) {
                                                    engine_console_cpp_FUN_00441ff0
                                                              (g_CConsolePtr,
                                                               "%s can't selectWeapon(%s)\n",
                                                               local_39c,local_784);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setActorVariable",0x10);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0x10);
                                                  local_a4 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_a4 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setActorVariable command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_a4;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2c3c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_26c4);
                                                  iVar6 = 
                                                  core_script_cpp_validateActorVariableName_FUN_005286f0
                                                            (local_2c3c);
                                                  if (iVar6 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar12 = (CDemonActor *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_26c4,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (_DAT_01ed6808 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00494e70
                                                            (0x01C6E360,local_2c3c,pCVar12);
                                                  }
                                                  else {
                                                    iVar6 = _DAT_01ed701c;
                                                    if (pCVar12 == (CDemonActor *)0x0)
                                                    goto joined_r0x0052e818;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xf);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_590,100);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052e45a;
                                                  if (_DAT_01ed6808 == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_00560940
                                                            (0x02CF5680,local_590);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xe);
                                                  local_9c = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d)%n");
                                                  if (local_9c < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setCameragroup parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_9c;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1bd4);
                                                  iVar6 = 0;
                                                  local_98 = 0;
                                                  for (iVar13 = 0; iVar13 < *(int *)g_CDemonSetPtr;
                                                      iVar13 = iVar13 + 1) {
                                                    iVar11 = 
                                                  shape_edittool_cpp_wildcardStringMatch_FUN_00486a40
                                                            (local_1bd4,
                                                             &g_CDemonSetPtr->field_0x4 + iVar6,0);
                                                  if ((iVar11 != 0) &&
                                                     (local_98 = 1, _DAT_01ed6808 == 0)) {
                                                    *(uint *)
                                                     (&g_CDemonSetPtr->field_0x150 + iVar6) =
                                                         local_a0;
                                                  }
                                                  iVar6 = iVar6 + 0x1a4;
                                                  }
                                                  if (local_98 == 0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "No cameras found matching \"%s\"",
                                                               local_1bd4);
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0x12);
                                                  local_90 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %f)%n");
                                                  if (local_90 < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setCharacterHealth parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_90;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1724);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_1724,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    *(float *)(iVar6 + 0x2538) =
                                                         *(float *)(iVar6 + 0x253c) * local_94;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"setEyes",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 7);
                                                  local_80 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d, %d, %f)%n");
                                                  if (local_80 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setEyes parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_80;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_3024);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_3024,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_charactr_cpp_FUN_0042d860
                                                              (iVar6,0,local_8c,local_84);
                                                    core_charactr_cpp_FUN_0042d860
                                                              (iVar6,1,local_88,local_84);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setSwitchmap",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xc);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_278c,200);
                                                  if (pcVar16 != (char *)0x0) {
LAB_0052ebdc:
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_278c);
                                                  if (_DAT_01ed6808 == 0) {
                                                    unkafter_mission_cpp_FUN_004f7c00
                                                              (0x01D81080,local_278c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setFieldNotesImageSuffix",0x18);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0x18] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0x18);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_3bac,0x100);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052ebdc;
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_fldnotes_cpp_FUN_004abdc0
                                                              (g_CFieldNotesPtr,local_3bac);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setFocusActor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xd);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_84c,100);
                                                  if (pcVar16 != (char *)0x0) {
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_84c,
                                                                     g_CDemonActorClassInfo.
                                                                     name_hash,
                                                                     &g_CDemonActorClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (iVar6 != *(int *)&this_ptr->field_0xc) {
                                                    *(uint *)&this_ptr->field_0x10 = 1;
                                                    *(int *)&this_ptr->field_0xc = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setHeroTask",0xb);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xb);
                                                  local_78 = -1;
                                                  sscanf
                                                            (local_160," (%[^,], %[^)])%n");
                                                  if (local_78 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setHeroTask parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830(local_658)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830(local_400)
                                                  ;
                                                  local_160 = local_160 + local_78;
                                                  this_ptr_02 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_658,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (this_ptr_02 == (CHero *)0x0)
                                                  goto joined_r0x0052b739;
                                                  iVar13 = _stricmp
                                                                     (local_400,"stand");
                                                  iVar6 = 0;
                                                  if (iVar13 != 0) {
                                                    iVar6 = _stricmp
                                                                      (local_400,"follow");
                                                    if (iVar6 == 0) {
                                                      iVar6 = 1;
                                                    }
                                                    else {
                                                      iVar6 = _stricmp
                                                                        (local_400,&DAT_005cf539);
                                                      if (iVar6 == 0) {
                                                        iVar6 = 2;
                                                      }
                                                      else {
                                                        iVar6 = _stricmp
                                                                          (local_400,
                                                                           "guard");
                                                        if (iVar6 == 0) {
                                                          iVar6 = 3;
                                                        }
                                                        else {
                                                          iVar6 = _stricmp
                                                                            (local_400,
                                                                             "suspend");
                                                          if (iVar6 != 0) {
                                                            FUN_005a28c0
                                                                      (&DAT_01ed6810,
                                                                       "Invalid Task: %s",
                                                                       local_400);
                                                            return -1;
                                                          }
                                                          iVar6 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_hero_cpp_FUN_004d4200(this_ptr_02,iVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"setIniInt",
                                                                       9);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 9);
                                                  local_6c = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d )%n");
                                                  if (local_6c < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_6c;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_340c);
                                                  if (_DAT_01ed6808 == 0) {
                                                    engine_ini_cpp_FUN_004d8a20
                                                              (&local_4924,"system\\bw3.ini"
                                                               ,&DAT_005cf59c);
                                                    engine_ini_cpp_FUN_004d8c90
                                                              (&local_4924,local_340c,local_70);
                                                    engine_ini_cpp_CIniFile_dtor_FUN_004d8a50
                                                              (&local_4924,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"setMouth",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 8);
                                                  local_60 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d, %f)%n");
                                                  if (local_60 < 4) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setMouth parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_60;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_327c);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_327c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_charactr_cpp_FUN_0042d8a0
                                                              (iVar6,local_68,local_64);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0x12);
                                                  local_5c = -1;
                                                  sscanf
                                                            (local_160," (%n %n");
                                                  if (local_5c < 1) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setSayTimeOverride parameters.");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_5c;
                                                  local_58 = 0xbf800000;
                                                  if (*local_160 == ')') {
                                                    local_160 = local_160 + 1;
                                                  }
                                                  else {
                                                    local_5c = -1;
                                                    sscanf
                                                              (local_160,"%f )%n");
                                                    if (local_5c < 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_5c;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    *(uint *)&this_ptr->field_0x450 = local_58
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xc);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_bd0,100);
                                                  if (pcVar16 != (char *)0x0) {
LAB_0052f1d9:
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  iVar6 = core_script_cpp_FUN_005303b0
                                                                    (this_ptr,local_bd0);
                                                  if (iVar6 < 0) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Undefined label '%s'",
                                                               local_bd0);
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    *(int *)&this_ptr->field_0x454 = iVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 10);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_2d4,100);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052f1d9;
                                                  if (local_2d4[0] == '\0') {
                                                    *(uint *)&this_ptr->field_0x4 = 0;
                                                  }
                                                  else {
                                                    iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_2d4,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                    *(int *)&this_ptr->field_0x4 = iVar6;
                                                    if (iVar6 == 0) goto joined_r0x0052b739;
                                                  }
                                                  *(uint *)&this_ptr->field_0x8 =
                                                       *(uint *)&this_ptr->field_0x4;
                                                  if ((*(int *)&this_ptr->field_0x14 == 0) &&
                                                     (*(int *)&this_ptr->field_0x4 !=
                                                      *(int *)&this_ptr->field_0xc)) {
                                                    *(uint *)&this_ptr->field_0x10 = 1;
                                                    *(uint *)&this_ptr->field_0xc =
                                                         *(uint *)&this_ptr->field_0x4;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xd);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_6bc,100);
                                                  if (pcVar16 == (char *)0x0) {
                                                    sscanf
                                                              (local_6bc,&DAT_005cf69f);
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Invalid time factor %s",
                                                               local_6bc);
                                                    return -1;
                                                  }
                                                  pcVar18 = &DAT_01ed6810;
                                                  do {
                                                    cVar3 = *pcVar16;
                                                    *pcVar18 = cVar3;
                                                    if (cVar3 == '\0') {
                                                      return -1;
                                                    }
                                                    cVar3 = pcVar16[1];
                                                    pcVar16 = pcVar16 + 2;
                                                    pcVar18[1] = cVar3;
                                                    pcVar18 = pcVar18 + 2;
                                                  } while (cVar3 != '\0');
                                                  return -1;
                                                  }
                                                  iVar6 = _strnicmp
                                                                    (pcVar16,"setVictim",9)
                                                  ;
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 9);
                                                  local_50 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,)]%n");
                                                  if (local_50 < 2) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setVictim command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_50;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2214);
                                                  this_ptr_03 = (CEnemy *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_2214,g_CEnemyClassInfo.name_hash,
                                                             &g_CEnemyClassInfo);
                                                  if (this_ptr_03 == (CEnemy *)0x0)
                                                  goto joined_r0x0052b739;
                                                  pCVar12 = (CDemonActor *)0x0;
                                                  if (*local_160 == ',') {
                                                    local_50 = -1;
                                                    sscanf
                                                              (local_160,", %[^)]%n");
                                                    if (local_50 < 3) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Error parsing setVictim command parms")
                                                      ;
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_50;
                                                    core_script_cpp_trimString_FUN_00528830
                                                              (local_2084);
                                                    iVar6 = _stricmp
                                                                      (local_2084,"disable"
                                                                      );
                                                    pCVar12 = 0xFFFFFFFF;
                                                    if ((iVar6 != 0) &&
                                                       (pCVar12 = (CDemonActor *)
                                                                                                                                    
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_2084,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar12 == (CDemonActor *)0x0))
                                                  goto joined_r0x0052b739;
                                                  }
                                                  if (*local_160 != ')') {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Missing closing ')' in setVictim command");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_enemy_cpp_FUN_00489b60(this_ptr_03,pCVar12)
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "setWalkTimeout",0xe);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xe);
                                                  local_48 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %f)%n");
                                                  if (local_48 < 3) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing setWalkTimeout parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_48;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_101c);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_101c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if (iVar6 == 0) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    (**(code **)(*(int *)(iVar6 + 0x154) + 0x138))
                                                              (iVar6,local_4c);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"snapToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 10);
                                                  local_44 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_44 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error snaping turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_44;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_246c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2854);
                                                  local_40 = (CDemonActor *)
                                                             core_script_cpp_getActor_FUN_005289b0
                                                                       (local_246c,
                                                                        g_CDemonActorClassInfo.
                                                                        name_hash,
                                                                        &g_CDemonActorClassInfo);
                                                  if ((local_40 == (CDemonActor *)0x0) ||
                                                     (iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                        (local_2854,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo),
                                                     iVar6 == 0)) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_bodypart_cpp_FUN_00416c10
                                                              (iVar6 + 0x20,&local_40->field_0x20);
                                                    local_1cc[0] = local_1e4;
                                                    aiStack_1e0[(uint)bVar19 * -2 + 6] =
                                                         aiStack_1e0[(uint)bVar19 * -2];
                                                    aiStack_1e0
                                                    [(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
                                                         aiStack_1e0
                                                         [(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1]
                                                    ;
                                                    core_vecdir_cpp_FUN_00576250(aiStack_1e0 + 5);
                                                    local_19c = local_1b4;
                                                    local_198[(uint)bVar19 * -2] =
                                                         auStack_1b0[(uint)bVar19 * -2];
                                                    local_198[(uint)bVar19 * -2 +
                                                              (uint)bVar19 * -2 + 1] =
                                                         auStack_1b0
                                                         [(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1]
                                                    ;
                                                    *(uint *)&local_40->field_0x34 =
                                                         local_198[0];
                                                                                                        
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
                                                            (local_40);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"startSay",8
                                                                      );
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 8);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_4328,500);
                                                  if (pcVar16 != (char *)0x0) {
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  local_38 = -1;
                                                  sscanf
                                                            (local_4328,"%[^,], %[^,], %n");
                                                  if (local_38 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_214c);
                                                  core_script_cpp_trimString_FUN_00528830(local_dc4)
                                                  ;
                                                  pcVar16 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (local_4328 + local_38);
                                                  local_14 = core_script_cpp_FUN_00530150
                                                                       (this_ptr,local_214c,
                                                                        local_dc4,pcVar16);
                                                  *(uint *)&this_ptr->field_0x4c = local_14;
                                                  fVar1 = *(float *)&this_ptr->field_0x4c;
                                                  goto joined_r0x0052f950;
                                                  }
                                                  iVar6 = _strnicmp
                                                                    (pcVar16,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xc);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_17ec,200);
                                                  if (pcVar16 != (char *)0x0) {
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  pcVar16 = local_17ec;
                                                  do {
                                                    pcVar18 = pcVar16;
                                                    if (*pcVar16 == ',') goto LAB_0052f9d6;
                                                    if (*pcVar16 == '\0') break;
                                                    pcVar18 = pcVar16 + 1;
                                                    if (*pcVar18 == ',') goto LAB_0052f9d6;
                                                    pcVar16 = pcVar16 + 2;
                                                  } while (*pcVar18 != '\0');
                                                  pcVar18 = (char *)0x0;
LAB_0052f9d6:
                                                  aiStack_180[2] = -1;
                                                  pcVar17 = &DAT_005cf826;
                                                  local_18 = (uint)(pcVar18 != (char *)0x0);
                                                  iVar6 = -1;
                                                  pcVar16 = local_17ec;
                                                  do {
                                                    pcVar18 = pcVar16;
                                                    if (iVar6 == 0) break;
                                                    iVar6 = iVar6 + -1;
                                                    pcVar18 = pcVar16 + (uint)bVar19 * -2 + 1;
                                                    cVar3 = *pcVar16;
                                                    pcVar16 = pcVar18;
                                                  } while (cVar3 != '\0');
                                                  pcVar18 = pcVar18 + -1;
                                                  do {
                                                    cVar3 = *pcVar17;
                                                    *pcVar18 = cVar3;
                                                    if (cVar3 == '\0') break;
                                                    cVar3 = pcVar17[1];
                                                    pcVar17 = pcVar17 + 2;
                                                    pcVar18[1] = cVar3;
                                                    pcVar18 = pcVar18 + 2;
                                                  } while (cVar3 != '\0');
                                                  sscanf
                                                            (local_17ec,&DAT_005cf828);
                                                  if (aiStack_180[2] < 1) {
                                                    pcVar16 = "Error parsing out camera name";
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830(local_914)
                                                  ;
                                                  iVar6 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_00535360
                                                            (g_CDemonSetPtr,local_914);
                                                  if ((local_18 != 0) &&
                                                     (sscanf
                                                                (local_17ec + aiStack_180[2],
                                                                 &DAT_005cf84f),
                                                     _DAT_005cfa48 < 10000000000.0)) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Invalid hold time value");
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    core_setdir_cpp_FUN_00540ba0
                                                              (g_CDemonSetPtr,iVar6,1e+10);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,
                                                  "timedDisplay",0xc);
                                                  if ((iVar6 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(pcVar16[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 0xc);
                                                  pcVar16 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_4008,300);
                                                  if (pcVar16 != (char *)0x0) {
LAB_0052fb6b:
                                                    pcVar18 = &DAT_01ed6810;
                                                    do {
                                                      cVar3 = *pcVar16;
                                                      *pcVar18 = cVar3;
                                                      if (cVar3 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar3 = pcVar16[1];
                                                      pcVar16 = pcVar16 + 2;
                                                      pcVar18[1] = cVar3;
                                                      pcVar18 = pcVar18 + 2;
                                                    } while (cVar3 != '\0');
                                                    return -1;
                                                  }
                                                  local_34 = -1;
                                                  sscanf
                                                            (local_4008,"%f,%n");
                                                  if (local_34 < 2) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing time value");
                                                    return -1;
                                                  }
                                                  if (_DAT_01ed6808 == 0) {
                                                    pcVar16 = &this_ptr->field_0x50;
                                                    pcVar18 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (local_4008 + local_34);
                                                  do {
                                                    cVar3 = *pcVar18;
                                                    *pcVar16 = cVar3;
                                                    if (cVar3 == '\0') break;
                                                    cVar3 = pcVar18[1];
                                                    pcVar18 = pcVar18 + 2;
                                                    pcVar16[1] = cVar3;
                                                    pcVar16 = pcVar16 + 2;
                                                  } while (cVar3 != '\0');
                                                  aiStack_180[3] =
                                                                                                              
                                                  core_script_cpp_CScript_processTimer_FUN_00530310
                                                            (this_ptr,local_30,time_remaining);
                                                  if (0 < aiStack_180[3]) {
                                                    this_ptr->field_0x50 = 0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"turnToFace"
                                                                       ,10);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 10);
                                                  local_2c = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_2c < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_2c;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2f5c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2d04);
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_2f5c,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if ((iVar6 == 0) ||
                                                     (iVar13 = core_script_cpp_getActor_FUN_005289b0
                                                                         (local_2d04,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo),
                                                     iVar13 == 0)) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    (**(code **)(*(int *)(iVar6 + 0x154) + 0x134))
                                                              (iVar6,iVar13);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,&DAT_005cf8d9,4);
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 4);
                                                  local_28 = -1;
                                                  sscanf
                                                            (local_160,"(%f)%n");
                                                  if (local_28 < 1) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing time value on wait statament");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_28;
                                                  if (_DAT_01ed6808 == 0) {
                                                    aiStack_180[3] =
                                                                                                                  
                                                  core_script_cpp_CScript_processTimer_FUN_00530310
                                                            (this_ptr,local_24,time_remaining);
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"waitFor",7)
                                                    ;
                                                    if ((iVar6 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(pcVar16[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 7);
                                                  pcVar16 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00528970
                                                            (&local_160,local_270);
                                                  if (pcVar16 != (char *)0x0) goto LAB_0052fb6b;
                                                  if ((_DAT_01ed6808 == 0) &&
                                                     (iVar6 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_270), iVar6 == 0)) {
                                                    aiStack_180[3] = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = _strnicmp
                                                                      (pcVar16,"walkTo",6);
                                                    dVar2 = __BITCAST_DOUBLE(CONCAT44(pcVar16,local_164));
                                                    if ((iVar6 != 0) ||
                                                       (((&DAT_006074b8)[(byte)(pcVar16[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      pcVar16 = "Unknown command on line %d: %s";
                                                      goto LAB_00529bdf;
                                                    }
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar16 + 6);
                                                  local_158 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^,)] %n");
                                                  if (local_158 < 5) {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Error parsing walkTo command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_158;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_34d4);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_359c);
                                                  local_20 = 0;
                                                  if (*local_160 == ',') {
                                                    local_158 = -1;
                                                    sscanf
                                                              (local_160,",%f %n");
                                                    if (local_158 < 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_158;
                                                  }
                                                  local_1c = 0x501502f9;
                                                  if (*local_160 == ',') {
                                                    local_158 = -1;
                                                    sscanf
                                                              (local_160,",%f %n");
                                                    if (local_158 < 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01ed6810,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_158;
                                                  }
                                                  if (*local_160 != ')') {
                                                    FUN_005a28c0
                                                              (&DAT_01ed6810,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  iVar6 = core_script_cpp_getActor_FUN_005289b0
                                                                    (local_34d4,
                                                                     g_CCharacterClassInfo.name_hash
                                                                     ,&g_CCharacterClassInfo);
                                                  if ((iVar6 == 0) ||
                                                     (iVar13 = core_script_cpp_getActor_FUN_005289b0
                                                                         (local_359c,
                                                                          g_CDemonActorClassInfo.
                                                                          name_hash,
                                                                          &g_CDemonActorClassInfo),
                                                     iVar13 == 0)) goto joined_r0x0052b739;
                                                  if (_DAT_01ed6808 == 0) {
                                                    (**(code **)(*(int *)(iVar6 + 0x154) + 0x130))
                                                              (iVar6,iVar13,local_20,local_1c);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00529b1b:
  if ((_DAT_01ed6808 != 2) && (*local_15c != '\0')) {
    FUN_005a28c0
              (&DAT_01ed6810,"Extra characters \"%s\" on line %d",local_15c,local_160);
    return -1;
  }
LAB_00529b34:
  if (aiStack_180[4] == 1) {
    *(uint *)&this_ptr->field_0x4c = 0xbf800000;
    uVar14 = _DAT_01ed6808;
    *(uint *)&this_ptr->field_0x48 = 0xbf800000;
    if ((uVar14 == 0) && (*(int *)&this_ptr->field_0x2c <= *(int *)&this_ptr->field_0x44)) {
      FUN_005a28c0(&DAT_01ed6810,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < aiStack_180[4]) {
    *(int *)&this_ptr->field_0x44 = aiStack_180[5];
    return aiStack_180[4];
  }
  return aiStack_180[4];
}
