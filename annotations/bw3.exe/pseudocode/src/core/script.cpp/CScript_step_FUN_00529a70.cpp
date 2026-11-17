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

int __cdecl core_script_cpp_CScript_step_FUN_00529a70(CScript *this_ptr,float *time_remaining)

{
  CInventory *inventory_ptr;
  float fVar1;
  char cVar2;
  SDialogEntry *pSVar3;
  CGame *pCVar4;
  CDemonSet *set_ptr;
  int iVar5;
  CDemonActor *item_actor;
  CVector3f *initial_velocity;
  float z;
  CMotionList *this_ptr_00;
  CPlatform *pCVar6;
  CDoor *door_target;
  int *piVar7;
  CWeapon *actor_ptr;
  int iVar8;
  CHero *this_ptr_01;
  int iVar9;
  CEnemy *this_ptr_02;
  CCharacter *pCVar10;
  CDemonActor *pCVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  byte bVar17;
  float y;
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
  uint auStack_11cc [8];
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
  CVector3f local_1e4;
  CVector3f local_1d8;
  CVector3f local_1cc;
  CVector3f local_1c0;
  CVector3f local_1b4;
  CVector3f local_1a8;
  float local_19c;
  float local_198 [2];
  CVector3f local_190;
  CVector3f local_184;
  int local_178;
  int local_174;
  int local_170;
  float local_16c;
  int local_168;
  int local_164;
  char *local_160;
  char *local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  char *local_148;
  int local_144;
  char *local_140;
  int local_13c;
  float local_138;
  CCharacter *local_134;
  CBodyPart *local_130;
  int local_12c;
  char *local_128;
  int local_124;
  char *local_120;
  CDemonLight *local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  _FILE *local_104;
  uint local_100;
  CEnemy *local_fc;
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
  CDemonActor *local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  CWeapon *local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  float local_94;
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  int local_80;
  char *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  float local_58;
  int local_54;
  int local_50;
  float local_4c;
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
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  
  bVar17 = 0;
  if ((this_ptr->next_cmd < 0) || (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
    g_CHAR_PTR_01d71de0 = "..\\core\\script.cpp";
    g_INT_01d71de4 = 0x47c;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar14 = "(no error message provided)";
  pcVar16 = g_CHAR_ARRAY_01ed6810;
  do {
    cVar2 = *pcVar14;
    *pcVar16 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    pcVar16[1] = cVar2;
    pcVar16 = pcVar16 + 2;
  } while (cVar2 != '\0');
  pcVar14 = this_ptr->parsed_lines[this_ptr->next_cmd].text;
  local_164 = this_ptr->parsed_lines[this_ptr->next_cmd].line_number;
  local_170 = this_ptr->next_cmd;
  local_174 = 1;
  this_ptr->next_cmd = local_170 + 1;
  cVar2 = *pcVar14;
  if ((cVar2 == '{') || (cVar2 == '}')) {
    local_160 = &g_CHAR_005ce0e7;
  }
  else if (cVar2 == ':') {
    local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 1);
    if (g_INT_01ed6808 != 0) {
      cVar2 = *local_160;
      for (pcVar14 = local_160;
          (cVar2 != '\0' &&
          (((g_CharacterClassificationTable[(byte)(*pcVar14 + 1)] & 0xe0) != 0 || (*pcVar14 == '_'))
          )); pcVar14 = pcVar14 + 1) {
        cVar2 = pcVar14[1];
      }
      if (*pcVar14 != '\0') {
        pcVar14 = "Invalid label \"%s\" on line";
        goto LAB_00529bdf;
      }
      iVar5 = core_script_cpp_CScript_findLabelIndex_FUN_005303b0(this_ptr,local_160);
      if (iVar5 < 0) {
        g_CHAR_PTR_01d71de0 = "..\\core\\script.cpp";
        g_INT_01d71de4 = 0x4ae;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Internal script error checking for duplicate label.");
      }
      if (iVar5 != local_170) {
        _sprintf(g_CHAR_ARRAY_01ed6810,"Duplicate label %s on lines %d and %d");
        return -1;
      }
    }
    local_160 = &g_CHAR_005ce170;
  }
  else {
    iVar5 = _strnicmp(pcVar14,"syntaxCheckOn",0xd);
    if ((iVar5 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
      if (g_INT_01ed6808 != 0) {
        g_INT_01ed6808 = 1;
      }
      local_160 = &g_CHAR_005ce17f;
    }
    else {
      iVar5 = _strnicmp(pcVar14,"syntaxCheckOff",0xe);
      if ((iVar5 == 0) && ((g_CharacterClassificationTable[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0))
      {
        if (g_INT_01ed6808 != 0) {
          g_INT_01ed6808 = 2;
        }
        local_160 = &g_CHAR_005ce18f;
      }
      else if (g_INT_01ed6808 != 2) {
        iVar5 = _strnicmp(pcVar14,"activateGadget",0xe);
        if ((((((((iVar5 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) ||
                ((iVar5 = _strnicmp(pcVar14,"activatePuzzle",0xe)
                 , iVar5 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)))) ||
               ((iVar5 = _strnicmp
                                   (pcVar14,"addFieldNotesTask",0x11), iVar5 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0)))) ||
              (((iVar5 = _strnicmp
                                   (pcVar14,"advanceLightFilter",0x12), iVar5 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar14[0x12] + 1)] & 0xe0) == 0)) ||
               ((((iVar5 = _strnicmp
                                     (pcVar14,"beginCarryItem",0xe), iVar5 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) ||
                 ((iVar5 = _strnicmp
                                     (pcVar14,"completeFieldNotesTask",0x16), iVar5 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar14[0x16] + 1)] & 0xe0) == 0)))) ||
                ((iVar5 = _strnicmp
                                    (pcVar14,"createExplosion",0xf), iVar5 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)))))))) ||
             (((((iVar5 = _strnicmp(pcVar14,"deleteActor",0xb),
                 iVar5 == 0 &&
                 ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) ||
                ((((iVar5 = _strnicmp
                                      (pcVar14,"displayBitmap",0xd), iVar5 == 0 &&
                   ((g_CharacterClassificationTable[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) ||
                  ((iVar5 = _strnicmp
                                      (pcVar14,"displayFieldNotes",0x11), iVar5 == 0 &&
                   ((g_CharacterClassificationTable[(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0)))) ||
                 ((((iVar5 = _strnicmp(pcVar14,"dropItem",8),
                    iVar5 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) ||
                   ((iVar5 = _strnicmp
                                       (pcVar14,"hurtCharacter",0xd), iVar5 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)))) ||
                  ((((iVar5 = _strnicmp(pcVar14,"incCounter",10),
                     iVar5 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) ||
                    ((iVar5 = _strnicmp
                                        (pcVar14,"deccCounter",0xb), iVar5 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)))) ||
                   ((iVar5 = _strnicmp
                                       (pcVar14,"enableFieldNotesEntry",0x15), iVar5 == 0
                    && ((g_CharacterClassificationTable[(byte)(pcVar14[0x15] + 1)] & 0xe0) == 0)))))
                  ))))) ||
               ((iVar5 = _strnicmp
                                   (pcVar14,"enableFieldNotesAnnotation",0x1a), iVar5 == 0 &&
                ((g_CharacterClassificationTable[(byte)(pcVar14[0x1a] + 1)] & 0xe0) == 0)))) ||
              (((((iVar5 = _strnicmp(pcVar14,"fadeSfx",7),
                  iVar5 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) ||
                 ((iVar5 = _strnicmp
                                     (pcVar14,"fadeAmbientSound",0x10), iVar5 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0)))) ||
                (((((iVar5 = _strnicmp(pcVar14,"flagOn",6),
                    iVar5 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar14[6] + 1)] & 0xe0) == 0)) ||
                   ((iVar5 = _strnicmp(pcVar14,"flagOff",7),
                    iVar5 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar14[7] + 1)] & 0xe0) == 0)))) ||
                  ((((iVar5 = _strnicmp(pcVar14,"gameFlagOn",10),
                     iVar5 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) ||
                    ((iVar5 = _strnicmp
                                        (pcVar14,"gameFlagOff",0xb), iVar5 == 0 &&
                     ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)))) ||
                   ((iVar5 = _strnicmp
                                       (pcVar14,"killCharacter",0xd), iVar5 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)))))) ||
                 ((iVar5 = _strnicmp
                                     (pcVar14,"killAllEnemies",0xe), iVar5 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)))))) ||
               ((((((iVar5 = _strnicmp(pcVar14,"killHero",8),
                    iVar5 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) ||
                   ((iVar5 = _strnicmp(pcVar14,"killSfx",7),
                    iVar5 == 0 &&
                    ((g_CharacterClassificationTable[(byte)(pcVar14[7] + 1)] & 0xe0) == 0)))) ||
                  ((iVar5 = _strnicmp(pcVar14,"lightning",9),
                   iVar5 == 0 &&
                   ((g_CharacterClassificationTable[(byte)(pcVar14[9] + 1)] & 0xe0) == 0)))) ||
                 ((iVar5 = _strnicmp(pcVar14,"playMusic",9),
                  iVar5 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar14[9] + 1)] & 0xe0) == 0)))) ||
                ((((iVar5 = _strnicmp(pcVar14,"playSfx",7),
                   iVar5 == 0 &&
                   ((g_CharacterClassificationTable[(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) ||
                  ((iVar5 = _strnicmp(pcVar14,"resetGore",9),
                   iVar5 == 0 &&
                   ((g_CharacterClassificationTable[(byte)(pcVar14[9] + 1)] & 0xe0) == 0)))) ||
                 ((iVar5 = _strnicmp(pcVar14,"restorePrye",0xb),
                  iVar5 == 0 &&
                  ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)))))))))))
             ) || ((iVar5 = _strnicmp(pcVar14,"setActorBool",0xc)
                   , iVar5 == 0 &&
                   ((g_CharacterClassificationTable[(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)))) ||
           ((((iVar5 = _strnicmp(pcVar14,"setCameraAmbient",0x10)
              , iVar5 == 0 &&
              ((g_CharacterClassificationTable[(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0)) ||
             ((iVar5 = _strnicmp(pcVar14,"setCounter",10),
              iVar5 == 0 && ((g_CharacterClassificationTable[(byte)(pcVar14[10] + 1)] & 0xe0) == 0))
             )) || (((((iVar5 = _strnicmp
                                          (pcVar14,"setDoorState",0xc), iVar5 == 0 &&
                       ((g_CharacterClassificationTable[(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) ||
                      ((iVar5 = _strnicmp
                                          (pcVar14,"setGroupAmbient",0xf), iVar5 == 0 &&
                       ((g_CharacterClassificationTable[(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0))))
                     || (((((iVar5 = _strnicmp
                                               (pcVar14,"setLightFilterFrame",0x13),
                            iVar5 == 0 &&
                            ((g_CharacterClassificationTable[(byte)(pcVar14[0x13] + 1)] & 0xe0) == 0
                            )) || ((iVar5 = _strnicmp
                                                      (pcVar14,"setLeverState",0xd),
                                   iVar5 == 0 &&
                                   ((g_CharacterClassificationTable[(byte)(pcVar14[0xd] + 1)] & 0xe0
                                    ) == 0)))) ||
                          ((iVar5 = _strnicmp
                                              (pcVar14,"setModelState",0xd), iVar5 == 0 &&
                           ((g_CharacterClassificationTable[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0))
                          )) || ((iVar5 = _strnicmp
                                                    (pcVar14,"setSunlight",0xb), iVar5 == 0
                                 && ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] &
                                     0xe0) == 0)))))) ||
                    (((((((iVar5 = _strnicmp
                                             (pcVar14,"setTimer",8), iVar5 == 0 &&
                          ((g_CharacterClassificationTable[(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) ||
                         ((iVar5 = _strnicmp
                                             (pcVar14,"setEndTimer",0xb), iVar5 == 0 &&
                          ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)))
                         ) || ((iVar5 = _strnicmp
                                                  (pcVar14,"setWeather",10), iVar5 == 0 &&
                               ((g_CharacterClassificationTable[(byte)(pcVar14[10] + 1)] & 0xe0) ==
                                0)))) ||
                       (((iVar5 = _strnicmp
                                            (pcVar14,"shakeScreen",0xb), iVar5 == 0 &&
                         ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0))
                        || (((iVar5 = _strnicmp
                                                (pcVar14,"slamModelToMotion",0x11),
                             iVar5 == 0 &&
                             ((g_CharacterClassificationTable[(byte)(pcVar14[0x11] + 1)] & 0xe0) ==
                              0)) || ((iVar5 = _strnicmp
                                                         (pcVar14,"turnToFieldNotesEntry",
                                                          0x15), iVar5 == 0 &&
                                      ((g_CharacterClassificationTable[(byte)(pcVar14[0x15] + 1)] &
                                       0xe0) == 0)))))))) ||
                      ((iVar5 = _strnicmp(pcVar14,"warpTo",6),
                       iVar5 == 0 &&
                       ((g_CharacterClassificationTable[(byte)(pcVar14[6] + 1)] & 0xe0) == 0)))) ||
                     ((iVar5 = _strnicmp
                                         (pcVar14,"warpToMulti",0xb), iVar5 == 0 &&
                      ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)))))))
            ))) {
          if (g_INT_01ed6808 == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_0048c150(g_CEventListPtr,pcVar14);
          }
          else {
            pcVar14 = core_event_cpp_CEventList_validateCommands_FUN_00491b40
                                (g_CEventListPtr,pcVar14);
            if (pcVar14 != (char *)0x0) goto LAB_0052b2b0;
          }
          local_160 = &g_CHAR_005ce41c;
        }
        else {
          iVar5 = _strnicmp(pcVar14,"addItemToInventory",0x12);
          if ((iVar5 == 0) &&
             ((g_CharacterClassificationTable[(byte)(pcVar14[0x12] + 1)] & 0xe0) == 0)) {
            local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 0x12);
            local_15c = (char *)0xffffffff;
            sscanf(local_160," ( %[^,], %[^)])%n");
            if ((int)local_15c < 3) {
              _sprintf(g_CHAR_ARRAY_01ed6810,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_160 = local_160 + (int)local_15c;
            core_script_cpp_trimString_FUN_00528830(local_1594);
            core_script_cpp_trimString_FUN_00528830(local_197c);
            pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                (local_1594,g_CHeroClassInfo.name_hash,&g_CHeroClassInfo);
            if ((pCVar11 == (CDemonActor *)0x0) ||
               (item_actor = core_script_cpp_getActor_FUN_005289b0
                                       (local_197c,g_CDemonActorClassInfo.name_hash,
                                        &g_CDemonActorClassInfo), item_actor == (CDemonActor *)0x0))
            goto joined_r0x0052b739;
            if (g_INT_01ed6808 == 0) {
              core_inv_cpp_CInventory_addItem_FUN_004da880
                        ((CInventory *)((int)&pCVar11[0x182].orient + 8),item_actor,0);
            }
          }
          else {
            iVar5 = _strnicmp(pcVar14,"addLightFilter",0xe);
            if ((iVar5 == 0) &&
               ((g_CharacterClassificationTable[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
              local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 0xe);
              local_cc = -1;
              sscanf(local_160,"( %[^,], %[^,], %f )%n");
              if (local_cc < 5) {
                _sprintf(g_CHAR_ARRAY_01ed6810,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_160 = local_160 + local_cc;
              core_set_cpp_CDemonSet_addLightFilter_FUN_0053b3b0
                        (g_CDemonSetPtr,local_5f4,&local_3c,&local_11c);
              if (local_3c == (C3DSLight *)0x0) {
                _sprintf(g_CHAR_ARRAY_01ed6810,"Light \"%s\" does not exist");
                return -1;
              }
              iVar5 = engine_dosio_cpp_getFileSize_FUN_004657f0("art",local_720);
              if (iVar5 < 1) {
                _sprintf(g_CHAR_ARRAY_01ed6810,"Can't open filter \"%s\"");
                return -1;
              }
              if (g_INT_01ed6808 == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_00542e50(local_3c,local_720,local_16c,0);
              }
            }
            else {
              iVar5 = _strnicmp(pcVar14,"allowEnemyAttack",0x10);
              if ((iVar5 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0)) {
                local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 0x10);
                pcVar14 = core_script_cpp_parseConditionExpr_FUN_00528970(&local_160,local_aa4);
                if (pcVar14 != (char *)0x0) {
LAB_0052b2b0:
                  pcVar16 = g_CHAR_ARRAY_01ed6810;
                  do {
                    cVar2 = *pcVar14;
                    *pcVar16 = cVar2;
                    if (cVar2 == '\0') {
                      return -1;
                    }
                    cVar2 = pcVar14[1];
                    pcVar14 = pcVar14 + 2;
                    pcVar16[1] = cVar2;
                    pcVar16 = pcVar16 + 2;
                  } while (cVar2 != '\0');
                  return -1;
                }
                if (g_INT_01ed6808 == 0) {
                  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                    (g_CEventListPtr,local_aa4);
                  g_CGamePtr->allow_enemy_attack_flag = iVar5;
                }
              }
              else {
                iVar5 = _strnicmp
                                  (pcVar14,"allowHeroControls",0x11);
                if ((iVar5 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0)) {
                  local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 0x11);
                  pcVar14 = core_script_cpp_parseConditionExpr_FUN_00528970(&local_160,local_a40);
                  if (pcVar14 != (char *)0x0) goto LAB_0052b2b0;
                  if (g_INT_01ed6808 == 0) {
                    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                      (g_CEventListPtr,local_a40);
                    g_ScriptInputFlag = (int)(iVar5 == 0);
                    g_CGamePtr->hero_controls_blocked = g_ScriptInputFlag;
                  }
                }
                else {
                  iVar5 = _strnicmp
                                    (pcVar14,"allowHeroDamage",0xf);
                  if ((iVar5 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) {
                    local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 0xf);
                    pcVar14 = core_script_cpp_parseConditionExpr_FUN_00528970(&local_160,local_9dc);
                    if (pcVar14 != (char *)0x0) goto LAB_0052b2b0;
                    if (g_INT_01ed6808 == 0) {
                      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                        (g_CEventListPtr,local_9dc);
                      g_CGamePtr->allow_damage_flag = iVar5;
                    }
                  }
                  else {
                    iVar5 = _strnicmp
                                      (pcVar14,"attachActorToPlatform",0x15);
                    if ((iVar5 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(pcVar14[0x15] + 1)] & 0xe0) == 0)) {
                      local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 0x15);
                      local_168 = -1;
                      sscanf(local_160,"(%[^,], %[^)])%n");
                      if (local_168 < 2) {
                        _sprintf(g_CHAR_ARRAY_01ed6810,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_160 = local_160 + local_168;
                      core_script_cpp_trimString_FUN_00528830(local_31b4);
                      core_script_cpp_trimString_FUN_00528830(local_3344);
                      pCVar6 = (CPlatform *)
                               core_script_cpp_getActor_FUN_005289b0
                                         (local_3344,g_CPlatformClassInfo.name_hash,
                                          &g_CPlatformClassInfo);
                      if ((pCVar6 == (CPlatform *)0x0) ||
                         (pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                              (local_31b4,g_CDemonActorClassInfo.name_hash,
                                               &g_CDemonActorClassInfo),
                         pCVar11 == (CDemonActor *)0x0)) goto joined_r0x0052b739;
                      if (g_INT_01ed6808 == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_00512aa0(pCVar6,pCVar11);
                      }
                    }
                    else {
                      iVar5 = _strnicmp
                                        (pcVar14,"beginFadeIn",0xb);
                      if ((iVar5 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                        local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 0xb);
                        if (g_INT_01ed6808 == 0) {
                          core_game_cpp_CGame_beginFadeIn_FUN_004bd620(g_CGamePtr);
                        }
                      }
                      else {
                        iVar5 = _strnicmp
                                          (pcVar14,"beginFadeOut",0xc);
                        if ((iVar5 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0))
                        {
                          local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 0xc);
                          if (g_INT_01ed6808 == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004bd660(g_CGamePtr);
                          }
                        }
                        else {
                          iVar5 = _strnicmp
                                            (pcVar14,"breakPoint",10);
                          if ((iVar5 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(pcVar14[10] + 1)] & 0xe0) == 0)
                             ) {
                            local_160 = core_script_cpp_skipWhitespace_FUN_005288a0(pcVar14 + 10);
                            if (g_INT_01ed6808 == 0) {
                              _sprintf(local_464,"Script breakpoint reached at line %d");
                              core_game_cpp_CGame_displayMessage_FUN_004b46b0
                                        (g_CGamePtr,local_464,5.0);
                              this_ptr->script_state = 2;
                            }
                          }
                          else {
                            iVar5 = _strnicmp
                                              (pcVar14,"cancelCameraHold",0x10);
                            if ((iVar5 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(pcVar14[0x10] + 1)] & 0xe0)
                                == 0)) {
                              local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                    (pcVar14 + 0x10);
                              if (g_INT_01ed6808 == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00540bc0
                                          (g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar5 = _strnicmp
                                                (pcVar14,"cancelWalkTo",0xc);
                              if ((iVar5 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(pcVar14[0xc] + 1)] & 0xe0)
                                  == 0)) {
                                local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                      (pcVar14 + 0xc);
                                pcVar14 = core_script_cpp_parseArgument_FUN_005288c0
                                                    (&local_160,local_2534,200);
                                if (pcVar14 != (char *)0x0) {
                                  pcVar16 = g_CHAR_ARRAY_01ed6810;
                                  do {
                                    cVar2 = *pcVar14;
                                    *pcVar16 = cVar2;
                                    if (cVar2 == '\0') {
                                      return -1;
                                    }
                                    cVar2 = pcVar14[1];
                                    pcVar14 = pcVar14 + 2;
                                    pcVar16[1] = cVar2;
                                    pcVar16 = pcVar16 + 2;
                                  } while (cVar2 != '\0');
                                  return -1;
                                }
                                iVar5 = _stricmp
                                                  (local_2534,"all");
                                if (iVar5 == 0) {
                                  if (g_INT_01ed6808 == 0) {
                                    iVar5 = 0;
                                    for (iVar9 = 0; iVar9 < g_CDemonSetPtr->actor_count;
                                        iVar9 = iVar9 + 1) {
                                      pCVar10 = (CCharacter *)
                                                core_actor_cpp_castToClassHash_FUN_0040c840
                                                          (*(CDemonActor **)
                                                            ((int)g_CDemonSetPtr->actors + iVar5),
                                                           g_CCharacterClassInfo.name_hash);
                                      if (pCVar10 != (CCharacter *)0x0) {
                                        (*(((pCVar10->base).vtable._uc)->_uc).setWalkTarget)
                                                  (pCVar10,(CDemonActor *)0x0,0.0,0.0);
                                      }
                                      iVar5 = iVar5 + 4;
                                    }
                                  }
                                }
                                else {
                                  pCVar10 = (CCharacter *)
                                            core_script_cpp_getActor_FUN_005289b0
                                                      (local_2534,g_CCharacterClassInfo.name_hash,
                                                       &g_CCharacterClassInfo);
                                  if (pCVar10 == (CCharacter *)0x0) goto joined_r0x0052b739;
                                  if (g_INT_01ed6808 == 0) {
                                    (*(((pCVar10->base).vtable._uc)->_uc).setWalkTarget)
                                              (pCVar10,(CDemonActor *)0x0,0.0,0.0);
                                  }
                                }
                              }
                              else {
                                iVar5 = _strnicmp
                                                  (pcVar14,"chainToMission",0xe);
                                if ((iVar5 == 0) &&
                                   ((g_CharacterClassificationTable[(byte)(pcVar14[0xe] + 1)] & 0xe0
                                    ) == 0)) {
                                  local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                        (pcVar14 + 0xe);
                                  pcVar14 = core_script_cpp_parseArgument_FUN_005288c0
                                                      (&local_160,local_38bc,200);
                                  if (pcVar14 != (char *)0x0) {
LAB_0052b9f1:
                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                    do {
                                      cVar2 = *pcVar14;
                                      *pcVar16 = cVar2;
                                      if (cVar2 == '\0') {
                                        return -1;
                                      }
                                      cVar2 = pcVar14[1];
                                      pcVar14 = pcVar14 + 2;
                                      pcVar16[1] = cVar2;
                                      pcVar16 = pcVar16 + 2;
                                    } while (cVar2 != '\0');
                                    return -1;
                                  }
                                  core_script_cpp_trimString_FUN_00528830(local_38bc);
                                  iVar5 = g_INT_01ed6808;
                                  if (g_INT_01ed6808 == 0) {
                                    core_mission_cpp_CDemonMission_setMissionName_FUN_004f7460
                                              (g_CDemonMission_PTR_00600530,local_38bc);
                                    this_ptr->mission_ended = 1;
                                    local_174 = iVar5;
                                  }
                                }
                                else {
                                  iVar5 = _strnicmp
                                                    (pcVar14,"changeSetFilename",0x11);
                                  if ((iVar5 == 0) &&
                                     ((g_CharacterClassificationTable[(byte)(pcVar14[0x11] + 1)] &
                                      0xe0) == 0)) {
                                    local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                          (pcVar14 + 0x11);
                                    local_150 = -1;
                                    sscanf(local_160,"(%d , %[^)])%n");
                                    if (local_150 < 2) {
                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                 "Error parsing changeSetFilename command parms");
                                      return -1;
                                    }
                                    local_160 = local_160 + local_150;
                                    core_script_cpp_trimString_FUN_00528830(local_3aac);
                                    if ((local_154 < 0) ||
                                       (g_CDemonMission_PTR_00600530->num_sets <= local_154)) {
                                      _sprintf(g_CHAR_ARRAY_01ed6810,"Invalid set index")
                                      ;
                                      return -1;
                                    }
                                    engine_dosio_cpp_splitPath_FUN_00465e50
                                              (local_3aac,(char *)0x0,(char *)0x0,(char *)0x0,
                                               local_3cac);
                                    if (local_3cac[0] == '\0') {
                                      pcVar16 = g_CHAR_ARRAY_005ce65f;
                                      iVar5 = -1;
                                      pcVar14 = local_3aac;
                                      do {
                                        pcVar15 = pcVar14;
                                        if (iVar5 == 0) break;
                                        iVar5 = iVar5 + -1;
                                        pcVar15 = pcVar14 + (uint)bVar17 * -2 + 1;
                                        cVar2 = *pcVar14;
                                        pcVar14 = pcVar15;
                                      } while (cVar2 != '\0');
                                      pcVar15 = pcVar15 + -1;
                                      do {
                                        cVar2 = *pcVar16;
                                        *pcVar15 = cVar2;
                                        if (cVar2 == '\0') break;
                                        cVar2 = pcVar16[1];
                                        pcVar16 = pcVar16 + 2;
                                        pcVar15[1] = cVar2;
                                        pcVar15 = pcVar15 + 2;
                                      } while (cVar2 != '\0');
                                    }
                                    iVar5 = engine_dosio_cpp_getFileSize_FUN_004657f0
                                                      (g_CHAR_ARRAY_005ce65f + 5,local_3aac);
                                    if (iVar5 < 1) {
                                      _sprintf(g_CHAR_ARRAY_01ed6810,g_CHAR_ARRAY_005ce65f + 0xc);
                                      return -1;
                                    }
                                    if (g_INT_01ed6808 == 0) {
                                      core_mission_cpp_CDemonMission_changeSetName_FUN_004f6cd0
                                                (g_CDemonMission_PTR_00600530,local_154,local_3aac);
                                    }
                                  }
                                  else {
                                    iVar5 = _strnicmp
                                                      (pcVar14,g_CHAR_ARRAY_005ce65f + 0x29,5);
                                    if ((iVar5 == 0) &&
                                       ((g_CharacterClassificationTable[(byte)(pcVar14[5] + 1)] &
                                        0xe0) == 0)) {
                                      local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 5);
                                      local_14c = -1;
                                      sscanf
                                                (local_160,g_CHAR_ARRAY_005ce65f + 0x2f);
                                      if (local_14c < 3) {
                                        _sprintf(g_CHAR_ARRAY_01ed6810,
                                                   g_CHAR_ARRAY_005ce65f + 0x39);
                                        return -1;
                                      }
                                      core_script_cpp_trimString_FUN_00528830(local_978);
                                      local_160 = local_160 + local_14c;
                                      iVar5 = core_script_cpp_CScript_findDialogEntry_FUN_00530990
                                                        (this_ptr,local_978);
                                      if (iVar5 < 0) {
                                        local_148 = local_1274;
                                        local_128 = g_CHAR_ARRAY_005ce65f + 0x57;
                                        _sprintf(local_1274,g_CHAR_ARRAY_005ce65f + 0x59);
                                        shape_edittool_cpp_CStrList_add_FUN_00482070
                                                  (&g_ScriptPickList.base,local_1274);
                                      }
                                      else {
                                        pSVar3 = this_ptr->dialog_entries;
                                        local_128 = pSVar3[iVar5].speaker;
                                        local_148 = pSVar3[iVar5].text;
                                        pcVar16 = local_978;
                                        pcVar14 = pSVar3[iVar5].sound_filename;
                                        do {
                                          cVar2 = *pcVar14;
                                          *pcVar16 = cVar2;
                                          if (cVar2 == '\0') break;
                                          cVar2 = pcVar14[1];
                                          pcVar14 = pcVar14 + 2;
                                          pcVar16[1] = cVar2;
                                          pcVar16 = pcVar16 + 2;
                                        } while (cVar2 != '\0');
                                      }
                                      if (this_ptr->dialog_wav_time < 0.0) {
                                        local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_00530150
                                                            (this_ptr,local_128,local_978,local_148)
                                        ;
                                        this_ptr->dialog_wav_time = local_14;
                                        if (this_ptr->dialog_wav_time < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((g_INT_01ed6808 == 0) &&
                                         (local_174 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00530310
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < local_174)) {
                                        core_script_cpp_CScript_setSpeaker_FUN_00530390
                                                  (this_ptr,this_ptr->who_is_speaking);
                                      }
                                    }
                                    else {
                                      iVar5 = _strnicmp
                                                        (pcVar14,g_CHAR_ARRAY_005ce65f + 0x75,10);
                                      if ((iVar5 == 0) &&
                                         ((g_CharacterClassificationTable[(byte)(pcVar14[10] + 1)] &
                                          0xe0) == 0)) {
                                        local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                              (pcVar14 + 10);
                                        local_144 = -1;
                                        sscanf
                                                  (local_160,g_CHAR_ARRAY_005ce65f + 0x80);
                                        if (local_144 < 3) {
                                          _sprintf(g_CHAR_ARRAY_01ed6810,
                                                     g_CHAR_ARRAY_005ce65f + 0x8a);
                                          return -1;
                                        }
                                        core_script_cpp_trimString_FUN_00528830(local_338);
                                        local_160 = local_160 + local_144;
                                        iVar5 = core_script_cpp_CScript_findDialogEntry_FUN_00530990
                                                          (this_ptr,local_338);
                                        if (iVar5 < 0) {
                                          local_120 = local_2b74;
                                          local_140 = g_CHAR_ARRAY_005ce65f + 0xa8;
                                          _sprintf(local_2b74,g_CHAR_ARRAY_005ce65f + 0xaa);
                                          shape_edittool_cpp_CStrList_add_FUN_00482070
                                                    (&g_ScriptPickList.base,local_2b74);
                                        }
                                        else {
                                          pSVar3 = this_ptr->dialog_entries;
                                          local_140 = pSVar3[iVar5].speaker;
                                          local_120 = pSVar3[iVar5].text;
                                          pcVar16 = local_338;
                                          pcVar14 = pSVar3[iVar5].sound_filename;
                                          do {
                                            cVar2 = *pcVar14;
                                            *pcVar16 = cVar2;
                                            if (cVar2 == '\0') break;
                                            cVar2 = pcVar14[1];
                                            pcVar14 = pcVar14 + 2;
                                            pcVar16[1] = cVar2;
                                            pcVar16 = pcVar16 + 2;
                                          } while (cVar2 != '\0');
                                        }
                                        local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_00530150
                                                            (this_ptr,local_140,local_338,local_120)
                                        ;
                                        this_ptr->dialog_wav_time = local_14;
                                        fVar1 = this_ptr->dialog_wav_time;
joined_r0x0052f950:
                                        if (fVar1 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar5 = _strnicmp
                                                          (pcVar14,g_CHAR_ARRAY_005ce65f + 0xc6,0xe)
                                        ;
                                        if ((iVar5 == 0) &&
                                           ((g_CharacterClassificationTable
                                             [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                          local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                                (pcVar14 + 0xe);
                                          local_13c = -1;
                                          sscanf
                                                    (local_160,g_CHAR_ARRAY_005ce65f + 0xd5);
                                          if (local_13c < 3) {
                                            _sprintf(g_CHAR_ARRAY_01ed6810,
                                                       g_CHAR_ARRAY_005ce65f + 0xe3);
                                            return -1;
                                          }
                                          core_script_cpp_trimString_FUN_00528830(local_4c8);
                                          local_160 = local_160 + local_13c;
                                          iVar5 = core_script_cpp_CScript_findDialogEntry_FUN_00530990
                                                            (this_ptr,local_4c8);
                                          if (iVar5 < 0) {
                                            local_7c = local_1ef4;
                                            _sprintf(local_1ef4,g_CHAR_ARRAY_005ce65f + 0x10a);
                                          }
                                          else {
                                            local_7c = this_ptr->dialog_entries[iVar5].text;
                                            pcVar16 = local_4c8;
                                            pcVar14 = this_ptr->dialog_entries[iVar5].sound_filename
                                            ;
                                            do {
                                              cVar2 = *pcVar14;
                                              *pcVar16 = cVar2;
                                              if (cVar2 == '\0') break;
                                              cVar2 = pcVar14[1];
                                              pcVar14 = pcVar14 + 2;
                                              pcVar16[1] = cVar2;
                                              pcVar16 = pcVar16 + 2;
                                            } while (cVar2 != '\0');
                                          }
                                          if (g_INT_01ed6808 == 0) {
                                            pcVar14 = this_ptr->current_message;
                                            pcVar16 = local_7c;
                                            do {
                                              cVar2 = *pcVar16;
                                              *pcVar14 = cVar2;
                                              if (cVar2 == '\0') break;
                                              cVar2 = pcVar16[1];
                                              pcVar16 = pcVar16 + 2;
                                              pcVar14[1] = cVar2;
                                              pcVar14 = pcVar14 + 2;
                                            } while (cVar2 != '\0');
                                            local_174 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00530310
                                                            (this_ptr,local_138,time_remaining);
                                            if (0 < local_174) {
                                              this_ptr->current_message[0] = '\0';
                                            }
                                          }
                                        }
                                        else {
                                          iVar5 = _strnicmp
                                                            (pcVar14,g_CHAR_ARRAY_005ce65f + 0x126,5
                                                            );
                                          if ((iVar5 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(pcVar14[5] + 1)] & 0xe0) == 0)) {
                                            local_160 = core_script_cpp_skipWhitespace_FUN_005288a0
                                                                  (pcVar14 + 5);
                                            pcVar14 = core_script_cpp_parseArgument_FUN_005288c0
                                                                (&local_160,local_4134,300);
                                            if (pcVar14 != (char *)0x0) goto LAB_0052b9f1;
                                            if (g_INT_01ed6808 == 0) {
                                              shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                                                        (g_CEditorToolsPtr,
                                                         g_CHAR_ARRAY_005ce65f + 300);
                                            }
                                          }
                                          else {
                                            iVar5 = _strnicmp
                                                              (pcVar14,g_CHAR_ARRAY_005ce65f + 0x150
                                                               ,9);
                                            if ((iVar5 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                              local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 9);
                                              local_74 = -1;
                                              sscanf
                                                        (local_160,g_CHAR_ARRAY_005ce65f + 0x15a);
                                              if (local_74 < 5) {
                                                _sprintf(g_CHAR_ARRAY_01ed6810,
                                                           g_CHAR_ARRAY_005ce65f + 0x16b);
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
                                              iVar5 = core_script_cpp_parseBodyPartMask_FUN_00528c20
                                                                (local_134,local_11ac,local_39ac);
                                              if (iVar5 == 0) {
                                                return -1;
                                              }
                                              core_actor_cpp_CVector3f_ctor_FUN_0040d220(&local_1a8)
                                              ;
                                              initial_velocity = (CVector3f *)0x0;
                                              if (*local_160 == ',') {
                                                local_74 = -1;
                                                sscanf
                                                          (local_160,g_CHAR_ARRAY_005ce65f + 0x191);
                                                if (local_74 < 5) {
                                                  _sprintf(g_CHAR_ARRAY_01ed6810,
                                                             g_CHAR_ARRAY_005ce65f + 0x1a4);
                                                  return -1;
                                                }
                                                local_160 = local_160 + local_74;
                                                if (0.0 < local_4938) {
                                                  fVar1 = local_4938 * 3.141593f *
                                                          0.005555556f;
                                                  z = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                                                            (-fVar1,fVar1);
                                                  y = 0.0;
                                                  local_14 = z;
                                                  local_14 = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                                                            (-fVar1,fVar1);
                                                  core_prye_cpp_makeVector_FUN_00527200
                                                            (local_14,y,z,&local_190);
                                                  local_1c0.x = local_190.x;
                                                  *(uint *)
                                                   ((int)&local_1c0 + (uint)bVar17 * -8 + 4) =
                                                       *(uint *)
                                                        ((int)&local_190 + (uint)bVar17 * -8 + 4);
                                                  *(uint *)
                                                   ((int)&local_1c0 +
                                                   (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                                                       *(uint *)
                                                        ((int)&local_190 +
                                                        (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
                                                  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                                                            (&local_20c,&local_1c0);
                                                  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
                                                            (&local_20c,&local_1a8,&local_1d8);
                                                  local_184.x = local_1d8.x;
                                                  *(uint *)
                                                   ((int)&local_184 + (uint)bVar17 * -8 + 4) =
                                                       *(uint *)
                                                        ((int)&local_1d8 + (uint)bVar17 * -8 + 4);
                                                  *(uint *)
                                                   ((int)&local_184 +
                                                   (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                                                       *(uint *)
                                                        ((int)&local_1d8 +
                                                        (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
                                                  core_actor_cpp_copyVector_FUN_0040d230
                                                            (&local_1a8,&local_184);
                                                }
                                                initial_velocity = &local_1a8;
                                              }
                                              if (*local_160 != ')') {
                                                _sprintf(g_CHAR_ARRAY_01ed6810,
                                                           g_CHAR_ARRAY_005ce65f + 0x1ca);
                                                return -1;
                                              }
                                              local_160 = local_160 + 1;
                                              if (g_INT_01ed6808 == 0) {
                                                iVar5 = 0;
                                                local_130 = 
                                                  core_bodypart_cpp_createBodyPart_FUN_00414550
                                                            (&(local_134->base).location.position,
                                                             &(local_134->base).orient,
                                                             initial_velocity,&local_134->base,0,0,
                                                             local_134->blood_type);
                                                iVar9 = 0;
                                                do {
                                                  if (*(int *)((int)local_39ac + iVar9) != 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                                                            (local_134,local_130,iVar5,1);
                                                  }
                                                  iVar5 = iVar5 + 1;
                                                  iVar9 = iVar9 + 4;
                                                } while (iVar5 < 0x3c);
                                                core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0
                                                          (local_130);
                                              }
                                            }
                                            else {
                                              iVar5 = _strnicmp
                                                                (pcVar14,g_CHAR_ARRAY_005ce65f +
                                                                         0x1fa,7);
                                              if ((iVar5 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 7);
                                                pcVar14 = core_script_cpp_parseArgument_FUN_005288c0
                                                                    (&local_160,
                                                                     this_ptr->current_message,0x400
                                                                    );
                                                if (pcVar14 != (char *)0x0) {
                                                  _sprintf(g_CHAR_ARRAY_01ed6810,
                                                             g_CHAR_ARRAY_005ce65f + 0x202);
                                                  return -1;
                                                }
                                              }
                                              else {
                                                iVar5 = _strnicmp
                                                                  (pcVar14,g_CHAR_ARRAY_005ce65f +
                                                                           0x236,4);
                                                if ((iVar5 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                  local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 4);
                                                  iVar5 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_00530410
                                                            (this_ptr,this_ptr->next_cmd,1);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x23b);
                                                    return -1;
                                                  }
                                                  this_ptr->next_cmd = iVar5;
                                                }
                                                else {
                                                  iVar5 = _strnicmp
                                                                    (pcVar14,g_CHAR_ARRAY_005ce65f +
                                                                             0x273,0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xc);
                                                  local_dc = -1;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x280
                                                            );
                                                  if (local_dc < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x291);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_dc;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1b0c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_3664);
                                                  iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_00535360
                                                            (g_CDemonSetPtr,local_1b0c);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x2b2);
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    iVar9 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (g_CEventListPtr,local_3664);
                                                  core_set_cpp_CDemonSet_setCameraEnabled_FUN_0053b340
                                                            (g_CDemonSetPtr,iVar5,iVar9);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (g_CEventListPtr,local_3664);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x2ce,0x11);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0))
                                                    {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0x11);
                                                  local_54 = -1;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x2e0
                                                            );
                                                  if (local_54 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x2ef);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_54;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1a44);
                                                  if (g_INT_01ed6808 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (g_CEventListPtr,local_1a44);
                                                  core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0053b360
                                                            (g_CDemonSetPtr,local_12c,iVar5);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (g_CEventListPtr,local_1a44);
                                                  if (pcVar14 != (char *)0x0) {
LAB_0052c6e3:
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x315,0xf);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xf);
                                                  local_124 = -1;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x325
                                                            );
                                                  if (local_124 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x336);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_124;
                                                  core_script_cpp_trimString_FUN_00528830(local_e8c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_133c);
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_e8c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  iVar9 = _stricmp
                                                                    (local_133c,
                                                                     g_CHAR_ARRAY_005ce65f + 0x35a);
                                                  iVar5 = 0;
                                                  if (iVar9 != 0) {
                                                    iVar5 = _stricmp
                                                                      (local_133c,
                                                                       g_CHAR_ARRAY_005ce65f + 0x360
                                                                      );
                                                    if (iVar5 == 0) {
                                                      iVar5 = 1;
                                                    }
                                                    else {
                                                      iVar5 = _stricmp
                                                                        (local_133c,
                                                                         g_CHAR_ARRAY_005ce65f +
                                                                         0x365);
                                                      if (iVar5 != 0) {
                                                        _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                   g_CHAR_ARRAY_005ce65f + 0x36c);
                                                        return -1;
                                                      }
                                                      iVar5 = 2;
                                                    }
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    pCVar11[0x1b].is_renderable = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x389,3);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[3] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 3);
                                                  if (g_INT_01ed6808 == 0) {
                                                    local_174 = g_INT_01ed6808;
                                                    this_ptr->mission_ended = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x38d,6);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[6] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 6);
                                                  if (g_INT_01ed6808 == 0) {
                                                    local_174 = g_INT_01ed6808;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar12 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004bd8d0
                                                            (g_CGamePtr);
                                                  if (uVar12 != 0) {
                                                    local_174 = 1;
                                                    g_CGamePtr->allow_damage_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeIn_FUN_004bd620
                                                              (g_CGamePtr);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x394,7);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 7);
                                                  iVar5 = g_INT_01ed6808;
                                                  pCVar4 = g_CGamePtr;
                                                  if (g_INT_01ed6808 == 0) {
                                                    g_CGamePtr->allow_damage_flag = 0;
                                                    local_174 = iVar5;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar12 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004bd8d0(pCVar4);
                                                  if (uVar12 != 0) {
                                                    local_174 = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeOut_FUN_004bd660
                                                              (pCVar4);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x39c,7);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 7);
                                                  local_118 = -1;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x3a4
                                                            );
                                                  if (local_118 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x3b5);
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
                                                              (local_160,
                                                               g_CHAR_ARRAY_005ce65f + 0x3d9);
                                                    if (local_118 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 g_CHAR_ARRAY_005ce65f + 0x3e1);
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_118;
                                                  }
                                                  if (*local_160 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x402);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_1fbc,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    uVar12 = 
                                                  core_charactr_cpp_CCharacter_initGesture_FUN_00432090
                                                            (pCVar10,local_10e4);
                                                  pCVar10->gesture_looping = local_114;
                                                  }
                                                  else {
                                                    iVar5 = 0;
                                                    pcVar14 = local_10e4;
                                                    this_ptr_00 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                                            (&(pCVar10->model).base);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                                                            (this_ptr_00,pcVar14,iVar5);
                                                  uVar12 = (uint)(-1 < iVar5);
                                                  }
                                                  if (uVar12 == 0) {
                                                                                                        
                                                  core_bugs_cpp_getDeformableModelName_FUN_004242d0
                                                            (&pCVar10->model);
                                                  _sprintf(g_CHAR_ARRAY_01ed6810,
                                                             g_CHAR_ARRAY_005ce65f + 0x43a);
                                                  return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x46e,9);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 9);
                                                  local_110 = -1;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x478
                                                            );
                                                  if (local_110 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x48b);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_110;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_14cc);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_291c);
                                                  if (g_INT_01ed6808 == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004d8a20
                                                              (&local_4720,
                                                               g_CHAR_ARRAY_005ce65f + 0x4b6,
                                                               g_CHAR_ARRAY_005ce65f + 0x4b1);
                                                    local_10c = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00494d00
                                                            (g_CEventListPtr,local_291c);
                                                  engine_ini_cpp_CIniFile_getInteger_FUN_004d8c30
                                                            (&local_4720,local_14cc,&local_10c);
                                                  core_event_cpp_CEventList_setCounter_FUN_00494bf0
                                                            (g_CEventListPtr,local_291c,local_10c);
                                                  engine_ini_cpp_CIniFile_dtor_FUN_004d8a50
                                                            (&local_4720,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x4c5,0xf);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xf);
                                                  local_108 = -1;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x4d5
                                                            );
                                                  if (local_108 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x4e6);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_108;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_372c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1c9c);
                                                  iVar5 = 
                                                  core_script_cpp_validateActorVariableName_FUN_005286f0
                                                            (local_372c);
                                                  if (iVar5 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_1c9c,
                                                                       g_CTriggerClassInfo.name_hash
                                                                       ,&g_CTriggerClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00494e70
                                                            (g_CEventListPtr,local_372c,
                                                             (CDemonActor *)
                                                             pCVar11[2].orient_matrix.m[1].z);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x512,5);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[5] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 5);
                                                  iVar5 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_005303b0
                                                            (this_ptr,local_160);
                                                  if (iVar5 < 0) {
                                                    pcVar14 = g_CHAR_ARRAY_005ce65f + 0x518;
LAB_00529bdf:
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,pcVar14);
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    if (7 < this_ptr->call_stack_count) {
                                                      local_104 = _fopen(g_CHAR_ARRAY_005ce65f +
                                                                             0x551,
                                                  g_CHAR_ARRAY_005ce65f + 0x54e);
                                                  _fprintf(local_104,g_CHAR_ARRAY_005ce65f + 0x55b
                                                            );
                                                  iVar5 = this_ptr->call_stack_count;
                                                  while (iVar5 = iVar5 + -1, -1 < iVar5) {
                                                    _fprintf(local_104,
                                                               g_CHAR_ARRAY_005ce65f + 0x568);
                                                  }
                                                  _fclose(local_104);
                                                  _sprintf(g_CHAR_ARRAY_01ed6810,
                                                             g_CHAR_ARRAY_005ce65f + 0x575);
                                                  return -1;
                                                  }
                                                  this_ptr->call_stack[this_ptr->call_stack_count] =
                                                       this_ptr->next_cmd;
                                                  this_ptr->next_cmd = iVar5;
                                                  this_ptr->call_stack_count =
                                                       this_ptr->call_stack_count + 1;
                                                  local_160 = g_CHAR_ARRAY_005ce65f + 0x5c3;
                                                  }
                                                  else {
                                                    local_160 = g_CHAR_ARRAY_005ce65f + 0x5c3;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x5c4,4);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 4);
                                                  iVar5 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_005303b0
                                                            (this_ptr,local_160);
                                                  if (iVar5 < 0) {
                                                    pcVar14 = g_CHAR_ARRAY_005ce65f + 0x5c9;
                                                    goto LAB_00529bdf;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    this_ptr->next_cmd = iVar5;
                                                    local_160 = g_CHAR_ARRAY_005ce65f + 0x5fe;
                                                  }
                                                  else {
                                                    local_160 = g_CHAR_ARRAY_005ce65f + 0x5fe;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x5ff,4);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 4);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_3edc,300);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052c6e3;
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                                                            (g_CEditorToolsPtr,
                                                             g_CHAR_ARRAY_005ce65f + 0x604);
                                                  this_ptr->mission_ended = 1;
                                                  local_174 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x634,0xd);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xd);
                                                  local_100 = 0xffffffff;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x642
                                                            );
                                                  if ((int)local_100 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x64c);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_100;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1e2c);
                                                  local_fc = (CEnemy *)
                                                             core_script_cpp_getActor_FUN_005289b0
                                                                       (local_1e2c,
                                                                        g_CHeroClassInfo.name_hash,
                                                                        &g_CHeroClassInfo);
                                                  if (local_fc == (CEnemy *)0x0)
                                                  goto joined_r0x0052b739;
                                                  local_f8 = 1;
                                                  if (*local_160 == ',') {
                                                    local_160 = local_160 + 1;
                                                    uVar12 = 0xffffffff;
                                                    pcVar14 = local_160;
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar14;
                                                      pcVar14 = pcVar14 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    local_100 = ~uVar12 - 2;
                                                    if ((int)local_100 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 g_CHAR_ARRAY_005ce65f + 0x676);
                                                      return -1;
                                                    }
                                                    pcVar14 = local_160;
                                                    pcVar16 = acStack_18b6 + 2;
                                                    for (uVar13 = local_100 >> 2; uVar13 != 0;
                                                        uVar13 = uVar13 - 1) {
                                                      *(uint *)pcVar16 =
                                                           *(uint *)pcVar14;
                                                      pcVar14 = pcVar14 + (uint)bVar17 * -8 + 4;
                                                      pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
                                                    }
                                                    for (uVar13 = local_100 & 3; uVar13 != 0;
                                                        uVar13 = uVar13 - 1) {
                                                      *pcVar16 = *pcVar14;
                                                      pcVar14 = pcVar14 + (uint)bVar17 * -2 + 1;
                                                      pcVar16 = pcVar16 + (uint)bVar17 * -2 + 1;
                                                    }
                                                    acStack_18b6[~uVar12] = '\0';
                                                    local_160 = local_160 + local_100;
                                                    if (g_INT_01ed6808 == 0) {
                                                      local_f8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (g_CEventListPtr,acStack_18b6 + 2);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (g_CEventListPtr,acStack_18b6 + 2);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052d1de;
                                                  }
                                                  }
                                                  if (*local_160 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x6a0);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  if (g_INT_01ed6808 == 0) {
                                                    (*(((local_fc->base).base.vtable._ue)->_ue).
                                                      updateVictim)(local_fc,SUB14(local_f8 == 0,0))
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x6cd,4);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 4);
                                                  local_170 = this_ptr->next_cmd;
                                                  local_174 = 0;
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x6d2,2);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[2] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 2);
                                                  pcVar14 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00528970
                                                            (&local_160,local_b08);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052d1de;
                                                  if ((g_INT_01ed6808 == 0) &&
                                                     (iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (g_CEventListPtr,local_b08), iVar5 == 0)
                                                  ) {
                                                    iVar5 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_00530410
                                                            (this_ptr,this_ptr->next_cmd,0);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x6d5);
                                                    return -1;
                                                  }
                                                  iVar9 = _strnicmp
                                                                    (this_ptr->parsed_lines[iVar5].
                                                                     text,g_CHAR_ARRAY_005ce65f +
                                                                          0x70b,4);
                                                  if (iVar9 == 0) {
                                                    iVar5 = iVar5 + 1;
                                                  }
                                                  this_ptr->next_cmd = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x710,0xb);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xb);
                                                  local_f4 = -1;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x71c
                                                            );
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_f4 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x723);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_f4;
                                                  if (g_INT_01ed6808 == 0) {
                                                    local_174 = g_INT_01ed6808;
                                                    this_ptr->mission_ended = 1;
                                                    pCVar4->act_completion_state = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x745,9);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 9);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_52c,100);
                                                  if (pcVar14 != (char *)0x0) {
LAB_0052d1de:
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  iVar9 = -1;
                                                  iVar5 = _stricmp
                                                                    (local_52c,
                                                                     g_CHAR_ARRAY_005ce65f + 0x74f);
                                                  if (iVar5 == 0) {
                                                    iVar9 = 0;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_52c,
                                                                     g_CHAR_ARRAY_005ce65f + 0x755);
                                                  if (iVar5 == 0) {
                                                    iVar9 = 1;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_52c,
                                                                     g_CHAR_ARRAY_005ce65f + 0x75a);
                                                  pCVar4 = g_CGamePtr;
                                                  if (iVar5 == 0) {
                                                    iVar9 = 2;
                                                  }
                                                  else if (iVar9 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x761);
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    g_CGamePtr->letterbox_mode = iVar9;
                                                    pCVar4->allow_damage_flag = (uint)(iVar9 == 0);
                                                    pCVar4->allow_enemy_attack_flag =
                                                         (uint)(pCVar4->letterbox_mode == 0);
                                                    pCVar4->hero_controls_blocked =
                                                         pCVar4->letterbox_mode;
                                                    if (pCVar4->letterbox_mode != 0) {
                                                      g_CFieldNotesPtr->is_displayed = 0;
                                                    }
                                                    pCVar4 = g_CGamePtr;
                                                    this_ptr->saved_cmd_index = -1;
                                                    g_ScriptInputFlag = 1;
                                                    if ((pCVar4->goggles_active != 0) &&
                                                       (pCVar4->letterbox_mode != 0)) {
                                                      (*(((g_CHero_PTR_ARRAY_01d5ba04
                                                           [g_INT_01d5ba14]->base).base.vtable._uh)
                                                        ->_uh).toggleGoggles)
                                                                (g_CHero_PTR_ARRAY_01d5ba04
                                                                 [g_INT_01d5ba14]);
                                                      (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
                                                      iVar5 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_00495e60
                                                            (g_CDemonSetPtr);
                                                  core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_0053f940
                                                            (g_CDemonSetPtr,
                                                             g_CScriptPtr->focus_actor,1);
                                                  set_ptr = g_CDemonSetPtr;
                                                  g_CScriptPtr->focus_actor_changed = 0;
                                                  iVar9 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_00495e60
                                                            (set_ptr);
                                                  if (iVar5 == iVar9) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_00534890
                                                            (g_CDemonSetPtr,iVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x77c,0xe);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xe);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_3db0,0x104);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052d1de;
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004aa810
                                                            (g_CFieldNotesPtr,local_3db0,(char *)0x0
                                                            );
                                                  }
                                                  else if ((g_CDemonMission_PTR_00600530->
                                                            is_in_editor != 0) ||
                                                          (g_CFieldNotesPtr->file_name[0] == '\0'))
                                                  {
                                                    iVar5 = 
                                                  core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004aa810
                                                            (g_CFieldNotesPtr,local_3db0,
                                                             g_CHAR_ARRAY_01ed6810);
joined_r0x0052e818:
                                                  if (iVar5 == 0) {
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x78b,0xe);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xe);
                                                  pcVar14 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00528970
                                                            (&local_160,local_8b0);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052d1de;
                                                  if (g_INT_01ed6808 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (g_CEventListPtr,local_8b0);
                                                  this_ptr->focus_actor_locked = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ce65f
                                                                               + 0x79a,6);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[6] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 6);
                                                  local_f0 = -1;
                                                  sscanf
                                                            (local_160,g_CHAR_ARRAY_005ce65f + 0x7a1
                                                            );
                                                  if (local_f0 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x7ab);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_f0;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_37f4);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_37f4,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0) {
joined_r0x0052b739:
                                                    if (g_INT_01ed701c == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_00529b34;
                                                  }
                                                  pCVar11 = (CDemonActor *)0x0;
                                                  if (*local_160 == ',') {
                                                    local_f0 = -1;
                                                    sscanf
                                                              (local_160,
                                                               g_CHAR_ARRAY_005ce65f + 0x7ce);
                                                    if (local_f0 < 3) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 g_CHAR_ARRAY_005ce65f + 0x7d8);
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_f0;
                                                    core_script_cpp_trimString_FUN_00528830
                                                              (local_23a4);
                                                    pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                        (local_23a4,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo);
                                                    if (pCVar11 == (CDemonActor *)0x0)
                                                    goto joined_r0x0052b739;
                                                  }
                                                  if (*local_160 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               g_CHAR_ARRAY_005ce65f + 0x7fb);
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00433120
                                                            (pCVar10,pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "monsterVision",0xd);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xd);
                                                  local_ec = 0xffffffff;
                                                  local_e8 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d )%n");
                                                  if (local_e8 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing monsterVision command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_e8;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2e94);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_2e94,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    this_ptr->monster_vision_actor = pCVar10;
                                                    local_ec = (uint)(g_CGamePtr->
                                                                      special_view_active == 0);
                                                    (**(code **)((int)g_CGamePtr->vtable + 4))
                                                              (g_CGamePtr,local_ec);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "movePlatform",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xc);
                                                  local_e4 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %f , %f )%n");
                                                  if (local_e4 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing movePlatform command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_e4;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_22dc);
                                                  pCVar6 = (CPlatform *)
                                                           core_script_cpp_getActor_FUN_005289b0
                                                                     (local_22dc,
                                                                      g_CPlatformClassInfo.name_hash
                                                                      ,&g_CPlatformClassInfo);
                                                  if (pCVar6 == (CPlatform *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if ((local_492c < 0.0) || (1.0 < local_492c)) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  if (local_4934 <= 0.0) {
                                                    pcVar14 = "Invalid movement rate %f";
                                                    goto LAB_00529bdf;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_platfrm_cpp_CPlatform_startMovement_FUN_00512020
                                                            (pCVar6,local_492c,local_4934);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"openDoor",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 8);
                                                  local_e0 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_e0 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing openDoor command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_e0;
                                                  core_script_cpp_trimString_FUN_00528830(local_f54)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1404);
                                                  door_target = (CDoor *)
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_f54,g_CDoorClassInfo.name_hash,
                                                             &g_CDoorClassInfo);
                                                  if ((door_target == (CDoor *)0x0) ||
                                                     (pCVar10 = (CCharacter *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_1404,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar10 == (CCharacter *)0x0))
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    local_174 = g_INT_01ed6808;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      iVar5 = (*(((pCVar10->base).vtable._uc)->_uc).
                                                                hasDoorTarget)(pCVar10);
                                                      if (iVar5 != 0) {
                                                        local_170 = 1;
                                                      }
                                                    }
                                                    else {
                                                      (*(((pCVar10->base).vtable._uc)->_uc).
                                                        setDoorTarget)(pCVar10,door_target);
                                                      this_ptr->cmd_timer = 1.0;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "pressButton",0xb);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xb);
                                                  local_d8 = -1;
                                                  sscanf
                                                            (local_160,"( %[^,], %[^)])%n");
                                                  if (local_d8 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing pressButton() command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_d8;
                                                  core_script_cpp_trimString_FUN_00528830(local_7e8)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830(local_b6c)
                                                  ;
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_7e8,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  piVar7 = 
                                                  core_script_cpp_getActionState_FUN_00528b30
                                                            ((SPlayerActionState *)
                                                             &pCVar11[0x99].orient_matrix,local_b6c)
                                                  ;
                                                  iVar5 = g_INT_01ed6808;
                                                  if (piVar7 == (int *)0x0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Invalid button name: %s");
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    if (g_ScriptInputFlag != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004ba490
                                                            (g_CGamePtr);
                                                  g_ScriptInputFlag = iVar5;
                                                  }
                                                  *piVar7 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"raise",5);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[5] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 5);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_cfc,100);
                                                  if (pcVar14 != (char *)0x0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing event expression on raise statament: %s");
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_0048c150
                                                            (g_CEventListPtr,local_cfc);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_00491b40
                                                            (g_CEventListPtr,local_cfc);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "releaseButton",0xd);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xd);
                                                  local_d4 = -1;
                                                  sscanf
                                                            (local_160,"( %[^,], %[^)])%n");
                                                  if (local_d4 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing releaseButton() command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_d4;
                                                  core_script_cpp_trimString_FUN_00528830(local_c98)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830(local_c34)
                                                  ;
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_c98,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  piVar7 = 
                                                  core_script_cpp_getActionState_FUN_00528b30
                                                            ((SPlayerActionState *)
                                                             &pCVar11[0x99].orient_matrix,local_c34)
                                                  ;
                                                  if (piVar7 == (int *)0x0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Invalid button name: %s");
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    if (g_ScriptInputFlag != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004ba490
                                                            (g_CGamePtr);
                                                  g_ScriptInputFlag = 0;
                                                  }
                                                  *piVar7 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0x1b] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0x1b);
                                                  local_d0 = -1;
                                                  sscanf
                                                            (local_160," ( %[^)])%n");
                                                  if (local_d0 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing removeAllItemsFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_d0;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_30ec);
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_30ec,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004da4e0
                                                              ((CInventory *)
                                                               ((int)&pCVar11[0x182].orient + 8));
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0x17] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0x17);
                                                  local_c8 = -1;
                                                  sscanf
                                                            (local_160," ( %[^,], %[^,)]%n");
                                                  if (local_c8 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
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
                                                  if (local_c4 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  iVar5 = 1;
                                                  if (*local_160 == ',') {
                                                    local_c8 = -1;
                                                    sscanf
                                                              (local_160,", %[^)]%n");
                                                    if (local_c8 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 "Error parsing removeItemFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_c8;
                                                    if (g_INT_01ed6808 == 0) {
                                                      iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (g_CEventListPtr,local_165c);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (g_CEventListPtr,local_165c);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  if (*local_160 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  if (((g_INT_01ed6808 == 0) &&
                                                      (pCVar11 = 
                                                  core_inv_cpp_CInventory_findItemByName_FUN_004db990
                                                            (&g_CHero_PTR_ARRAY_01d5ba04
                                                              [g_INT_01d5ba14]->inventory,local_29e4
                                                            ), pCVar11 != (CDemonActor *)0x0)) &&
                                                  (core_inv_cpp_CInventory_removeItem_FUN_004dbaa0
                                                             ((CInventory *)
                                                              ((int)&local_c4[0x182].orient + 8),
                                                              pCVar11,iVar5), iVar5 == 0)) {
                                                    core_event_cpp_copyQuaternion_FUN_00495e40
                                                              ((CQuaternion4f *)&pCVar11->location,
                                                               (CQuaternion4f *)&local_c4->location)
                                                    ;
                                                                                                        
                                                  core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                                                            (g_CDemonMission_PTR_00600530,pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"removeKeys"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 10);
                                                  local_bc = -1;
                                                  sscanf
                                                            (local_160," (%d )%n");
                                                  if (local_bc < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_bc;
                                                  if (g_CNetGamePtr->connection_type !=
                                                      CONNECTION_NONE) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_hero_cpp_CHero_removeMatchingKeys_FUN_004d41e0
                                                            (g_CHero_PTR_ARRAY_01d5ba04
                                                             [g_INT_01d5ba14],local_c0);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"return",6);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[6] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 6);
                                                  if (g_INT_01ed6808 == 0) {
                                                    iVar5 = this_ptr->call_stack_count;
                                                    if (iVar5 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 "Return without gosub detected on script line %d."
                                                                );
                                                      return -1;
                                                    }
                                                    this_ptr->call_stack_count = iVar5 + -1;
                                                    this_ptr->next_cmd =
                                                         this_ptr->call_stack[iVar5 + -1];
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "rollCredits",0xb);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xb);
                                                  local_b8 = -1;
                                                  sscanf
                                                            (local_160," ( )%n");
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_b8 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_b8;
                                                  if (g_INT_01ed6808 == 0) {
                                                    local_174 = g_INT_01ed6808;
                                                    this_ptr->mission_ended = 1;
                                                    pCVar4->act_completion_state = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"say",3);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[3] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 3);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_451c,500);
                                                  if (pcVar14 != (char *)0x0) {
LAB_0052e45a:
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_b4 = -1;
                                                  sscanf
                                                            (local_451c,"%[^,], %[^,], %n");
                                                  if (local_b4 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2dcc);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1d64);
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    pcVar14 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (local_451c + local_b4);
                                                  local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_00530150
                                                            (this_ptr,local_2dcc,local_1d64,pcVar14)
                                                  ;
                                                  this_ptr->dialog_wav_time = local_14;
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    return -1;
                                                  }
                                                  }
                                                  if ((g_INT_01ed6808 == 0) &&
                                                     (local_174 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00530310
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < local_174)) {
                                                    core_script_cpp_CScript_setSpeaker_FUN_00530390
                                                              (this_ptr,this_ptr->who_is_speaking);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "selectWeapon",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xc);
                                                  local_b0 = -1;
                                                  sscanf
                                                            (local_160," (%[^,], %[^)])%n");
                                                  if (local_b0 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing selectWeapon parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830(local_39c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830(local_784)
                                                  ;
                                                  local_160 = local_160 + local_b0;
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_39c,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    inventory_ptr =
                                                         (CInventory *)
                                                         ((int)&pCVar11[0x182].orient + 8);
                                                    local_ac = g_INT_01ed6808;
                                                    actor_ptr = 
                                                  core_game_cpp_getSelectedWeapon_FUN_004c4d50
                                                            (inventory_ptr);
                                                  local_a8 = actor_ptr;
                                                  if (actor_ptr != (CWeapon *)0x0) {
                                                    do {
                                                      if (actor_ptr == (CWeapon *)0x0) {
                                                        g_CHAR_PTR_01d71de0 =
                                                             "..\\core\\script.cpp";
                                                        g_INT_01d71de4 = 0xbcf;
                                                        core_main_c_displayErrorAndQuit_FUN_004e4330
                                                                  (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar5 = core_actor_cpp_isOfClass_FUN_0040c790
                                                                    (&actor_ptr->base,local_784);
                                                  if (iVar5 != 0) goto LAB_00529b1b;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                                                            (inventory_ptr,(CDemonActor *)0x0,5,1);
                                                  actor_ptr = 
                                                  core_game_cpp_getSelectedWeapon_FUN_004c4d50
                                                            (inventory_ptr);
                                                  } while (actor_ptr != local_a8);
                                                  }
                                                  if (local_ac == 0) {
                                                    engine_console_cpp_CConsole_printf_FUN_00441ff0
                                                              (g_CConsolePtr,
                                                               "%s can't selectWeapon(%s)\n");
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setActorVariable",0x10);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0x10);
                                                  local_a4 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_a4 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setActorVariable command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_a4;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2c3c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_26c4);
                                                  iVar5 = 
                                                  core_script_cpp_validateActorVariableName_FUN_005286f0
                                                            (local_2c3c);
                                                  if (iVar5 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_26c4,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_00494e70
                                                            (g_CEventListPtr,local_2c3c,pCVar11);
                                                  }
                                                  else {
                                                    iVar5 = g_INT_01ed701c;
                                                    if (pCVar11 == (CDemonActor *)0x0)
                                                    goto joined_r0x0052e818;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xf);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_590,100);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052e45a;
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_00560940
                                                            (g_CSound_PTR_006045f8,local_590);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xe);
                                                  local_9c = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d)%n");
                                                  if (local_9c < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setCameragroup parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_9c;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1bd4);
                                                  iVar5 = 0;
                                                  local_98 = 0;
                                                  for (iVar9 = 0;
                                                      iVar9 < g_CDemonSetPtr->camera_count;
                                                      iVar9 = iVar9 + 1) {
                                                    iVar8 = 
                                                  shape_edittool_cpp_wildcardStringMatch_FUN_00486a40
                                                            (local_1bd4,
                                                             g_CDemonSetPtr->cameras[0].name + iVar5
                                                             ,0);
                                                  if ((iVar8 != 0) &&
                                                     (local_98 = 1, g_INT_01ed6808 == 0)) {
                                                    *(uint *)
                                                     ((int)(&g_CDemonSetPtr->cameras[0].
                                                             rotation_matrix + 1) + iVar5 + 0x10) =
                                                         local_a0;
                                                  }
                                                  iVar5 = iVar5 + 0x1a4;
                                                  }
                                                  if (local_98 == 0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "No cameras found matching \"%s\"");
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0x12);
                                                  local_90 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %f)%n");
                                                  if (local_90 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setCharacterHealth parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_90;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_1724);
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_1724,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    pCVar11[0x1b].platform_orientation_delta.y =
                                                         pCVar11[0x1b].platform_orientation_delta.z
                                                         * local_94;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"setEyes",7)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 7);
                                                  local_80 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d, %d, %f)%n");
                                                  if (local_80 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setEyes parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_80;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_3024);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_3024,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setEyeFrame_FUN_0042d860
                                                            (pCVar10,0,local_8c,local_84);
                                                  core_charactr_cpp_CCharacter_setEyeFrame_FUN_0042d860
                                                            (pCVar10,1,local_88,local_84);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setSwitchmap",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xc);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_278c,200);
                                                  if (pcVar14 != (char *)0x0) {
LAB_0052ebdc:
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_278c);
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_mission_cpp_CDemonMission_setVersionControlDirectory_FUN_004f7c00
                                                            (g_CDemonMission_PTR_00600530,local_278c
                                                            );
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setFieldNotesImageSuffix",0x18);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0x18] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0x18);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_3bac,0x100);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052ebdc;
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_fldnotes_cpp_CFieldNotes_setImageSuffix_FUN_004abdc0
                                                            (g_CFieldNotesPtr,local_3bac);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setFocusActor",0xd);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xd);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_84c,100);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                      (local_84c,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (pCVar11 != this_ptr->focus_actor) {
                                                    this_ptr->focus_actor_changed = 1;
                                                    this_ptr->focus_actor = pCVar11;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setHeroTask",0xb);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xb);
                                                  local_78 = -1;
                                                  sscanf
                                                            (local_160," (%[^,], %[^)])%n");
                                                  if (local_78 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setHeroTask parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830(local_658)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00528830(local_400)
                                                  ;
                                                  local_160 = local_160 + local_78;
                                                  this_ptr_01 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_658,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (this_ptr_01 == (CHero *)0x0)
                                                  goto joined_r0x0052b739;
                                                  iVar9 = _stricmp
                                                                    (local_400,"stand");
                                                  iVar5 = 0;
                                                  if (iVar9 != 0) {
                                                    iVar5 = _stricmp
                                                                      (local_400,"follow");
                                                    if (iVar5 == 0) {
                                                      iVar5 = 1;
                                                    }
                                                    else {
                                                      iVar5 = _stricmp
                                                                        (local_400,"kill");
                                                      if (iVar5 == 0) {
                                                        iVar5 = 2;
                                                      }
                                                      else {
                                                        iVar5 = _stricmp
                                                                          (local_400,
                                                                           "guard");
                                                        if (iVar5 == 0) {
                                                          iVar5 = 3;
                                                        }
                                                        else {
                                                          iVar5 = _stricmp
                                                                            (local_400,
                                                                             "suspend");
                                                          if (iVar5 != 0) {
                                                            _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                       "Invalid Task: %s");
                                                            return -1;
                                                          }
                                                          iVar5 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    core_hero_cpp_CHero_setAiTask_FUN_004d4200
                                                              (this_ptr_01,iVar5);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"setIniInt",
                                                                       9);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 9);
                                                  local_6c = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d )%n");
                                                  if (local_6c < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_6c;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_340c);
                                                  if (g_INT_01ed6808 == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004d8a20
                                                              (&local_4924,"system\\bw3.ini"
                                                               ,"Game");
                                                    engine_ini_cpp_CIniFile_setInteger_FUN_004d8c90
                                                              (&local_4924,local_340c,local_70);
                                                    engine_ini_cpp_CIniFile_dtor_FUN_004d8a50
                                                              (&local_4924,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"setMouth",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 8);
                                                  local_60 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %d, %f)%n");
                                                  if (local_60 < 4) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setMouth parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_60;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_327c);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_327c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setMouthFrame_FUN_0042d8a0
                                                            (pCVar10,local_68,local_64);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0x12);
                                                  local_5c = -1;
                                                  sscanf
                                                            (local_160," (%n %n");
                                                  if (local_5c < 1) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setSayTimeOverride parameters.");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_5c;
                                                  local_58 = -1.0;
                                                  if (*local_160 == ')') {
                                                    local_160 = local_160 + 1;
                                                  }
                                                  else {
                                                    local_5c = -1;
                                                    sscanf
                                                              (local_160,"%f )%n");
                                                    if (local_5c < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_5c;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    this_ptr->message_duration = local_58;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xc);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_bd0,100);
                                                  if (pcVar14 != (char *)0x0) {
LAB_0052f1d9:
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  iVar5 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_005303b0
                                                            (this_ptr,local_bd0);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Undefined label '%s'");
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    this_ptr->saved_cmd_index = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 10);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_2d4,100);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052f1d9;
                                                  if (local_2d4[0] == '\0') {
                                                    this_ptr->who_is_speaking = (CDemonActor *)0x0;
                                                  }
                                                  else {
                                                    pCVar11 = core_script_cpp_getActor_FUN_005289b0
                                                                        (local_2d4,
                                                                         g_CCharacterClassInfo.
                                                                         name_hash,
                                                                         &g_CCharacterClassInfo);
                                                    this_ptr->who_is_speaking = pCVar11;
                                                    if (pCVar11 == (CDemonActor *)0x0)
                                                    goto joined_r0x0052b739;
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
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xd);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_6bc,100);
                                                  if (pcVar14 == (char *)0x0) {
                                                    sscanf
                                                              (local_6bc,"%f");
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Invalid time factor %s");
                                                    return -1;
                                                  }
                                                  pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                  do {
                                                    cVar2 = *pcVar14;
                                                    *pcVar16 = cVar2;
                                                    if (cVar2 == '\0') {
                                                      return -1;
                                                    }
                                                    cVar2 = pcVar14[1];
                                                    pcVar14 = pcVar14 + 2;
                                                    pcVar16[1] = cVar2;
                                                    pcVar16 = pcVar16 + 2;
                                                  } while (cVar2 != '\0');
                                                  return -1;
                                                  }
                                                  iVar5 = _strnicmp
                                                                    (pcVar14,"setVictim",9)
                                                  ;
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 9);
                                                  local_50 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,)]%n");
                                                  if (local_50 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setVictim command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_50;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2214);
                                                  this_ptr_02 = (CEnemy *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_2214,g_CEnemyClassInfo.name_hash,
                                                             &g_CEnemyClassInfo);
                                                  if (this_ptr_02 == (CEnemy *)0x0)
                                                  goto joined_r0x0052b739;
                                                  pCVar11 = (CDemonActor *)0x0;
                                                  if (*local_160 == ',') {
                                                    local_50 = -1;
                                                    sscanf
                                                              (local_160,", %[^)]%n");
                                                    if (local_50 < 3) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 "Error parsing setVictim command parms")
                                                      ;
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_50;
                                                    core_script_cpp_trimString_FUN_00528830
                                                              (local_2084);
                                                    iVar5 = _stricmp
                                                                      (local_2084,"disable"
                                                                      );
                                                    pCVar11 = g_ScriptSentinelActor;
                                                    if ((iVar5 != 0) &&
                                                       (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_2084,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x0052b739;
                                                  }
                                                  if (*local_160 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Missing closing ')' in setVictim command");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  if (g_INT_01ed6808 == 0) {
                                                    core_enemy_cpp_CEnemy_setVictim_FUN_00489b60
                                                              (this_ptr_02,pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setWalkTimeout",0xe);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xe);
                                                  local_48 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %f)%n");
                                                  if (local_48 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing setWalkTimeout parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_48;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_101c);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_101c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    (*(((pCVar10->base).vtable._uc)->_uc).
                                                      setWalkTimeout)(pCVar10,local_4c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"snapToFace"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 10);
                                                  local_44 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_44 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error snaping turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_44;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_246c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2854);
                                                  local_40 = core_script_cpp_getActor_FUN_005289b0
                                                                       (local_246c,
                                                                        g_CDemonActorClassInfo.
                                                                        name_hash,
                                                                        &g_CDemonActorClassInfo);
                                                  if ((local_40 == (CDemonActor *)0x0) ||
                                                     (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_2854,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    core_bodypart_cpp_subtractVector_FUN_00416c10
                                                              (&(pCVar11->location).position,
                                                               &(local_40->location).position,
                                                               &local_1e4);
                                                    local_1cc.x = local_1e4.x;
                                                    *(uint *)
                                                     ((int)&local_1cc + (uint)bVar17 * -8 + 4) =
                                                         *(uint *)
                                                          ((int)&local_1e4 + (uint)bVar17 * -8 + 4);
                                                    *(uint *)
                                                     ((int)&local_1cc +
                                                     (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                                                         *(uint *)
                                                          ((int)&local_1e4 +
                                                          (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8)
                                                    ;
                                                                                                        
                                                  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                                                            (&local_1cc,&local_1b4);
                                                  local_19c = local_1b4.x;
                                                  local_198[(uint)bVar17 * -2] =
                                                       *(float *)((int)&local_1b4 +
                                                                 (uint)bVar17 * -8 + 4);
                                                  local_198[(uint)bVar17 * -2 +
                                                            (uint)bVar17 * -2 + 1] =
                                                       *(float *)((int)&local_1b4 +
                                                                 (uint)bVar17 * -8 +
                                                                 (uint)bVar17 * -8 + 8);
                                                  (local_40->orient).vec.y = local_198[0];
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
                                                            (local_40);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"startSay",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 8);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_4328,500);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_38 = -1;
                                                  sscanf
                                                            (local_4328,"%[^,], %[^,], %n");
                                                  if (local_38 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_214c);
                                                  core_script_cpp_trimString_FUN_00528830(local_dc4)
                                                  ;
                                                  pcVar14 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (local_4328 + local_38);
                                                  local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_00530150
                                                            (this_ptr,local_214c,local_dc4,pcVar14);
                                                  this_ptr->dialog_wav_time = local_14;
                                                  fVar1 = this_ptr->dialog_wav_time;
                                                  goto joined_r0x0052f950;
                                                  }
                                                  iVar5 = _strnicmp
                                                                    (pcVar14,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xc);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_17ec,200);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  pcVar14 = local_17ec;
                                                  do {
                                                    pcVar16 = pcVar14;
                                                    if (*pcVar14 == ',') goto LAB_0052f9d6;
                                                    if (*pcVar14 == '\0') break;
                                                    pcVar16 = pcVar14 + 1;
                                                    if (*pcVar16 == ',') goto LAB_0052f9d6;
                                                    pcVar14 = pcVar14 + 2;
                                                  } while (*pcVar16 != '\0');
                                                  pcVar16 = (char *)0x0;
LAB_0052f9d6:
                                                  local_178 = -1;
                                                  pcVar15 = &DAT_005cf826;
                                                  local_18 = (uint)(pcVar16 != (char *)0x0);
                                                  iVar5 = -1;
                                                  pcVar14 = local_17ec;
                                                  do {
                                                    pcVar16 = pcVar14;
                                                    if (iVar5 == 0) break;
                                                    iVar5 = iVar5 + -1;
                                                    pcVar16 = pcVar14 + (uint)bVar17 * -2 + 1;
                                                    cVar2 = *pcVar14;
                                                    pcVar14 = pcVar16;
                                                  } while (cVar2 != '\0');
                                                  pcVar16 = pcVar16 + -1;
                                                  do {
                                                    cVar2 = *pcVar15;
                                                    *pcVar16 = cVar2;
                                                    if (cVar2 == '\0') break;
                                                    cVar2 = pcVar15[1];
                                                    pcVar15 = pcVar15 + 2;
                                                    pcVar16[1] = cVar2;
                                                    pcVar16 = pcVar16 + 2;
                                                  } while (cVar2 != '\0');
                                                  sscanf
                                                            (local_17ec,"%[^,],%n");
                                                  if (local_178 < 1) {
                                                    pcVar14 = "Error parsing out camera name";
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00528830(local_914)
                                                  ;
                                                  iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_00535360
                                                            (g_CDemonSetPtr,local_914);
                                                  if ((local_18 != 0) &&
                                                     (sscanf
                                                                (local_17ec + local_178,"%f"
                                                                ), 99999 < 10000000000.0
                                                     )) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Invalid hold time value");
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00540ba0
                                                            (g_CDemonSetPtr,iVar5,1e+10);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "timedDisplay",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 0xc);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005288c0
                                                            (&local_160,local_4008,300);
                                                  if (pcVar14 != (char *)0x0) {
LAB_0052fb6b:
                                                    pcVar16 = g_CHAR_ARRAY_01ed6810;
                                                    do {
                                                      cVar2 = *pcVar14;
                                                      *pcVar16 = cVar2;
                                                      if (cVar2 == '\0') {
                                                        return -1;
                                                      }
                                                      cVar2 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar16[1] = cVar2;
                                                      pcVar16 = pcVar16 + 2;
                                                    } while (cVar2 != '\0');
                                                    return -1;
                                                  }
                                                  local_34 = -1;
                                                  sscanf
                                                            (local_4008,"%f,%n");
                                                  if (local_34 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing time value");
                                                    return -1;
                                                  }
                                                  if (g_INT_01ed6808 == 0) {
                                                    pcVar14 = this_ptr->current_message;
                                                    pcVar16 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (local_4008 + local_34);
                                                  do {
                                                    cVar2 = *pcVar16;
                                                    *pcVar14 = cVar2;
                                                    if (cVar2 == '\0') break;
                                                    cVar2 = pcVar16[1];
                                                    pcVar16 = pcVar16 + 2;
                                                    pcVar14[1] = cVar2;
                                                    pcVar14 = pcVar14 + 2;
                                                  } while (cVar2 != '\0');
                                                  local_174 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00530310
                                                            (this_ptr,local_30,time_remaining);
                                                  if (0 < local_174) {
                                                    this_ptr->current_message[0] = '\0';
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"turnToFace"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 10);
                                                  local_2c = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^)])%n");
                                                  if (local_2c < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_2c;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2f5c);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_2d04);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_2f5c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if ((pCVar10 == (CCharacter *)0x0) ||
                                                     (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_2d04,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    (*(((pCVar10->base).vtable._uc)->_uc).
                                                      setWalkTargetImmediate)(pCVar10,pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"wait",4);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 4);
                                                  local_28 = -1;
                                                  sscanf
                                                            (local_160,"(%f)%n");
                                                  if (local_28 < 1) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing time value on wait statament");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_28;
                                                  if (g_INT_01ed6808 == 0) {
                                                    local_174 = 
                                                  core_script_cpp_CScript_processTimer_FUN_00530310
                                                            (this_ptr,local_24,time_remaining);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"waitFor",7)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                      local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 7);
                                                  pcVar14 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00528970
                                                            (&local_160,local_270);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0052fb6b;
                                                  if ((g_INT_01ed6808 == 0) &&
                                                     (iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (g_CEventListPtr,local_270), iVar5 == 0)
                                                  ) {
                                                    local_174 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"walkTo",6);
                                                    if ((iVar5 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(pcVar14[6] + 1)] & 0xe0) != 0)) {
                                                      pcVar14 = "Unknown command on line %d: %s";
                                                      goto LAB_00529bdf;
                                                    }
                                                    local_160 = 
                                                  core_script_cpp_skipWhitespace_FUN_005288a0
                                                            (pcVar14 + 6);
                                                  local_158 = -1;
                                                  sscanf
                                                            (local_160,"(%[^,], %[^,)] %n");
                                                  if (local_158 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Error parsing walkTo command parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + local_158;
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_34d4);
                                                  core_script_cpp_trimString_FUN_00528830
                                                            (local_359c);
                                                  local_20 = 0.0;
                                                  if (*local_160 == ',') {
                                                    local_158 = -1;
                                                    sscanf
                                                              (local_160,",%f %n");
                                                    if (local_158 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_158;
                                                  }
                                                  local_1c = 1e+10;
                                                  if (*local_160 == ',') {
                                                    local_158 = -1;
                                                    sscanf
                                                              (local_160,",%f %n");
                                                    if (local_158 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01ed6810,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_160 = local_160 + local_158;
                                                  }
                                                  if (*local_160 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01ed6810,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_160 = local_160 + 1;
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005289b0
                                                                      (local_34d4,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if ((pCVar10 == (CCharacter *)0x0) ||
                                                     (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005289b0
                                                            (local_359c,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x0052b739;
                                                  if (g_INT_01ed6808 == 0) {
                                                    (*(((pCVar10->base).vtable._uc)->_uc).
                                                      setWalkTarget)(pCVar10,pCVar11,local_20,
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
              }
            }
          }
        }
      }
    }
  }
LAB_00529b1b:
  if ((g_INT_01ed6808 != 2) && (*local_15c != '\0')) {
    _sprintf(g_CHAR_ARRAY_01ed6810,"Extra characters \"%s\" on line %d");
    return -1;
  }
LAB_00529b34:
  if (local_170 == 1) {
    this_ptr->dialog_wav_time = -1.0;
    iVar5 = g_INT_01ed6808;
    this_ptr->cmd_timer = -1.0;
    if ((iVar5 == 0) && (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
      _sprintf(g_CHAR_ARRAY_01ed6810,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_170) {
    this_ptr->next_cmd = (int)local_16c;
    return local_170;
  }
  return local_170;
}
