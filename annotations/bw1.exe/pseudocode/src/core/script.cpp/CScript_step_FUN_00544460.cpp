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

int __cdecl core_script_cpp_CScript_step_FUN_00544460(CScript *this_ptr,float *time_remaining)

{
  float *inventory_ptr;
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
  CVector3f local_1e4;
  CVector3f local_1d8;
  float local_1cc;
  float local_1c8 [2];
  CVector3f local_1c0;
  CVector3f local_1b4;
  CVector3f local_1a8;
  CVector3f local_19c;
  CVector3f local_190;
  CVector3f local_184;
  float local_178;
  int local_174;
  int local_170;
  C3DSLight *local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  char *local_158;
  char *local_154;
  int local_150;
  float local_14c;
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
  _FILE *local_104;
  uint local_100;
  CEnemy *local_fc;
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
  CDemonActor *local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  CWeapon *local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  float local_70;
  int local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  float local_58;
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
  float local_1c;
  uint local_18;
  float local_14;
  
  bVar17 = 0;
  if ((this_ptr->next_cmd < 0) || (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
    g_CHAR_PTR_01d1d400 = "..\\core\\script.cpp";
    g_INT_01d1d404 = 0x47b;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar14 = "(no error message provided)";
  pcVar16 = g_CHAR_ARRAY_01e810b0;
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
  local_168 = this_ptr->parsed_lines[this_ptr->next_cmd].line_number;
  local_30 = (char *)this_ptr->next_cmd;
  local_164 = 1;
  this_ptr->next_cmd = (int)(local_30 + 1);
  cVar2 = *pcVar14;
  if ((cVar2 == '{') || (cVar2 == '}')) {
    local_34 = &g_CHAR_005ee486;
  }
  else if (cVar2 == ':') {
    local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 1);
    if (g_INT_01e810a8 != 0) {
      cVar2 = *local_34;
      for (pcVar14 = local_34;
          (cVar2 != '\0' &&
          (((g_UCHAR_ARRAY_00626114[(byte)(*pcVar14 + 1)] & 0xe0) != 0 || (*pcVar14 == '_'))));
          pcVar14 = pcVar14 + 1) {
        cVar2 = pcVar14[1];
      }
      if (*pcVar14 != '\0') {
        pcVar14 = "Invalid label \"%s\" on line";
        goto LAB_005445cf;
      }
      pcVar14 = (char *)core_script_cpp_CScript_findLabelIndex_FUN_0054acc0(this_ptr,local_34);
      if ((int)pcVar14 < 0) {
        g_CHAR_PTR_01d1d400 = "..\\core\\script.cpp";
        g_INT_01d1d404 = 0x4ad;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Internal script error checking for duplicate label.");
      }
      if (pcVar14 != local_30) {
        _sprintf(g_CHAR_ARRAY_01e810b0,"Duplicate label %s on lines %d and %d");
        return -1;
      }
    }
    local_34 = &g_CHAR_005ee50f;
  }
  else {
    iVar5 = _strnicmp(pcVar14,"syntaxCheckOn",0xd);
    if ((iVar5 == 0) && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
      if (g_INT_01e810a8 != 0) {
        g_INT_01e810a8 = 1;
      }
      local_34 = &g_CHAR_005ee51e;
    }
    else {
      iVar5 = _strnicmp(pcVar14,"syntaxCheckOff",0xe);
      if ((iVar5 == 0) && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
        if (g_INT_01e810a8 != 0) {
          g_INT_01e810a8 = 2;
        }
        local_34 = &g_CHAR_005ee52e;
      }
      else if (g_INT_01e810a8 != 2) {
        iVar5 = _strnicmp(pcVar14,"activateGadget",0xe);
        if (((((((iVar5 == 0) && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0))
               || ((iVar5 = _strnicmp
                                      (pcVar14,"activatePuzzle",0xe), iVar5 == 0 &&
                   ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)))) ||
              ((iVar5 = _strnicmp
                                  (pcVar14,"addFieldNotesTask",0x11), iVar5 == 0 &&
               ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0)))) ||
             ((((iVar5 = _strnicmp
                                   (pcVar14,"advanceLightFilter",0x12), iVar5 == 0 &&
                ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x12] + 1)] & 0xe0) == 0)) ||
               ((((iVar5 = _strnicmp
                                     (pcVar14,"beginCarryItem",0xe), iVar5 == 0 &&
                  ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) ||
                 ((iVar5 = _strnicmp
                                     (pcVar14,"completeFieldNotesTask",0x16), iVar5 == 0 &&
                  ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x16] + 1)] & 0xe0) == 0)))) ||
                ((iVar5 = _strnicmp
                                    (pcVar14,"createExplosion",0xf), iVar5 == 0 &&
                 ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)))))) ||
              ((iVar5 = _strnicmp(pcVar14,"deleteActor",0xb),
               iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0))))))
            || (((((((iVar5 = _strnicmp
                                        (pcVar14,"displayBitmap",0xd), iVar5 == 0 &&
                     ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) ||
                    ((iVar5 = _strnicmp
                                        (pcVar14,"displayFieldNotes",0x11), iVar5 == 0 &&
                     ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0)))) ||
                   ((((iVar5 = _strnicmp(pcVar14,"dropItem",8),
                      iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[8] + 1)] & 0xe0) == 0))
                     || ((iVar5 = _strnicmp
                                            (pcVar14,"hurtCharacter",0xd), iVar5 == 0 &&
                         ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)))) ||
                    ((((iVar5 = _strnicmp
                                          (pcVar14,"incCounter",10), iVar5 == 0 &&
                       ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) ||
                      ((iVar5 = _strnicmp
                                          (pcVar14,"decCounter",10), iVar5 == 0 &&
                       ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[10] + 1)] & 0xe0) == 0)))) ||
                     ((iVar5 = _strnicmp
                                         (pcVar14,"enableFieldNotesEntry",0x15), iVar5 == 0
                      && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x15] + 1)] & 0xe0) == 0)))))))) ||
                  ((iVar5 = _strnicmp
                                      (pcVar14,"enableFieldNotesAnnotation",0x1a), iVar5 == 0
                   && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x1a] + 1)] & 0xe0) == 0)))) ||
                 ((((iVar5 = _strnicmp(pcVar14,"fadeSfx",7),
                    iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) ||
                   ((iVar5 = _strnicmp
                                       (pcVar14,"fadeAmbientSound",0x10), iVar5 == 0 &&
                    ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0)))) ||
                  (((((iVar5 = _strnicmp(pcVar14,"flagOn",6),
                      iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[6] + 1)] & 0xe0) == 0))
                     || ((iVar5 = _strnicmp(pcVar14,"flagOff",7),
                         iVar5 == 0 &&
                         ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[7] + 1)] & 0xe0) == 0)))) ||
                    (((((iVar5 = _strnicmp
                                           (pcVar14,"gameFlagOn",10), iVar5 == 0 &&
                        ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) ||
                       ((iVar5 = _strnicmp
                                           (pcVar14,"gameFlagOff",0xb), iVar5 == 0 &&
                        ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)))) ||
                      ((iVar5 = _strnicmp
                                          (pcVar14,"killCharacter",0xd), iVar5 == 0 &&
                       ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)))) ||
                     ((iVar5 = _strnicmp(pcVar14,"killHero",8),
                      iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[8] + 1)] & 0xe0) == 0)))
                     ))) || (((((((iVar5 = _strnicmp
                                                     (pcVar14,"killSfx",7), iVar5 == 0 &&
                                  ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) ||
                                 ((iVar5 = _strnicmp
                                                     (pcVar14,"lightning",9), iVar5 == 0 &&
                                  ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[9] + 1)] & 0xe0) == 0))))
                                || ((iVar5 = _strnicmp
                                                       (pcVar14,"playSfx",7), iVar5 == 0 &&
                                    ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[7] + 1)] & 0xe0) == 0)))
                                ) || ((iVar5 = _strnicmp
                                                         (pcVar14,"resetGore",9),
                                      iVar5 == 0 &&
                                      ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[9] + 1)] & 0xe0) == 0)
                                      ))) ||
                              (((iVar5 = _strnicmp
                                                   (pcVar14,"setActorBool",0xc), iVar5 == 0
                                && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0))
                               || ((iVar5 = _strnicmp
                                                      (pcVar14,"setCameraAmbient",0x10),
                                   iVar5 == 0 &&
                                   ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0)
                                   ))))) ||
                             ((iVar5 = _strnicmp
                                                 (pcVar14,"setCounter",10), iVar5 == 0 &&
                              ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[10] + 1)] & 0xe0) == 0))))))))
                 )) || ((iVar5 = _strnicmp
                                           (pcVar14,"setDoorState",0xc), iVar5 == 0 &&
                        ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)))))) ||
           ((((((iVar5 = _strnicmp(pcVar14,"setGroupAmbient",0xf)
                , iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) ||
               ((iVar5 = _strnicmp
                                   (pcVar14,"setLightFilterFrame",0x13), iVar5 == 0 &&
                ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x13] + 1)] & 0xe0) == 0)))) ||
              (((iVar5 = _strnicmp(pcVar14,"setLeverState",0xd),
                iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) ||
               ((iVar5 = _strnicmp(pcVar14,"setModelState",0xd),
                iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0))))))
             || (((((iVar5 = _strnicmp(pcVar14,"setSunlight",0xb)
                    , iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)
                    ) || ((iVar5 = _strnicmp
                                             (pcVar14,"setTimer",8), iVar5 == 0 &&
                          ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[8] + 1)] & 0xe0) == 0)))) ||
                  ((iVar5 = _strnicmp(pcVar14,"setWeather",10),
                   iVar5 == 0 && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[10] + 1)] & 0xe0) == 0))))
                 || ((iVar5 = _strnicmp
                                        (pcVar14,"shakeScreen",0xb), iVar5 == 0 &&
                     ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)))))) ||
            ((((iVar5 = _strnicmp
                                  (pcVar14,"slamModelToMotion",0x11), iVar5 == 0 &&
               ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0)) ||
              ((iVar5 = _strnicmp
                                  (pcVar14,"turnToFieldNotesEntry",0x15), iVar5 == 0 &&
               ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x15] + 1)] & 0xe0) == 0)))) ||
             ((iVar5 = _strnicmp(pcVar14,"warpTo",6), iVar5 == 0
              && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[6] + 1)] & 0xe0) == 0)))))))) {
          if (g_INT_01e810a8 == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                      (g_CEventList_PTR_0061b4d0,pcVar14);
          }
          else {
            pcVar14 = core_event_cpp_CEventList_validateCommands_FUN_004a6cd0
                                (g_CEventList_PTR_0061b4d0,pcVar14);
            if (pcVar14 != (char *)0x0) goto LAB_00545bc9;
          }
          local_34 = &g_CHAR_005ee77d;
        }
        else {
          iVar5 = _strnicmp(pcVar14,"addItemToInventory",0x12);
          if ((iVar5 == 0) && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x12] + 1)] & 0xe0) == 0)) {
            local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0x12);
            local_174 = -1;
            sscanf(local_34," ( %[^,], %[^)])%n");
            if (local_174 < 3) {
              _sprintf(g_CHAR_ARRAY_01e810b0,"Error parsing addItemToInventory command parms");
              return -1;
            }
            local_34 = local_34 + local_174;
            core_script_cpp_trimString_FUN_00543240(local_14cc);
            core_script_cpp_trimString_FUN_00543240(local_1404);
            pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                (local_14cc,g_CHeroClassInfo.name_hash,&g_CHeroClassInfo);
            if ((pCVar11 == (CDemonActor *)0x0) ||
               (item_actor = core_script_cpp_getActor_FUN_005433c0
                                       (local_1404,g_CDemonActorClassInfo.name_hash,
                                        &g_CDemonActorClassInfo), item_actor == (CDemonActor *)0x0))
            goto joined_r0x00546052;
            if (g_INT_01e810a8 == 0) {
              core_inv_cpp_CInventory_addItem_FUN_004f7690
                        ((CInventory *)&pCVar11[0x179].orient_matrix.m[1].z,item_actor,0);
            }
          }
          else {
            iVar5 = _strnicmp(pcVar14,"addLightFilter",0xe);
            if ((iVar5 == 0) && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
              local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0xe);
              local_170 = -1;
              sscanf(local_34,"( %[^,], %[^,], %f )%n");
              if (local_170 < 5) {
                _sprintf(g_CHAR_ARRAY_01e810b0,"Error parsing addLightFilter command parms");
                return -1;
              }
              local_34 = local_34 + local_170;
              core_set_cpp_CDemonSet_addLightFilter_FUN_00555a20
                        (g_CDemonSetPtr,local_bd0,&local_16c,&local_11c);
              if (local_16c == (C3DSLight *)0x0) {
                _sprintf(g_CHAR_ARRAY_01e810b0,"Light \"%s\" does not exist");
                return -1;
              }
              iVar5 = engine_dosio_cpp_getFileSize_FUN_00478fb0("art",local_6bc);
              if (iVar5 < 1) {
                _sprintf(g_CHAR_ARRAY_01e810b0,"Can't open filter \"%s\"");
                return -1;
              }
              if (g_INT_01e810a8 == 0) {
                core_setutil_cpp_C3DSLight_addFilter_FUN_0055d490(local_16c,local_6bc,local_14c,0);
              }
            }
            else {
              iVar5 = _strnicmp(pcVar14,"allowEnemyAttack",0x10);
              if ((iVar5 == 0) && ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0))
              {
                local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0x10);
                pcVar14 = core_script_cpp_parseConditionExpr_FUN_00543380(&local_34,local_b6c);
                if (pcVar14 != (char *)0x0) {
LAB_00545bc9:
                  pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                if (g_INT_01e810a8 == 0) {
                  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                    (g_CEventList_PTR_0061b4d0,local_b6c);
                  g_CGamePtr->allow_enemy_attack_flag = iVar5;
                }
              }
              else {
                iVar5 = _strnicmp
                                  (pcVar14,"allowHeroControls",0x11);
                if ((iVar5 == 0) &&
                   ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0)) {
                  local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0x11);
                  pcVar14 = core_script_cpp_parseConditionExpr_FUN_00543380(&local_34,local_338);
                  if (pcVar14 != (char *)0x0) goto LAB_00545bc9;
                  if (g_INT_01e810a8 == 0) {
                    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                      (g_CEventList_PTR_0061b4d0,local_338);
                    g_INT_01e818b4 = (int)(iVar5 == 0);
                    g_CGamePtr->hero_controls_blocked = g_INT_01e818b4;
                  }
                }
                else {
                  iVar5 = _strnicmp
                                    (pcVar14,"allowHeroDamage",0xf);
                  if ((iVar5 == 0) &&
                     ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) {
                    local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0xf);
                    pcVar14 = core_script_cpp_parseConditionExpr_FUN_00543380(&local_34,local_cfc);
                    if (pcVar14 != (char *)0x0) goto LAB_00545bc9;
                    if (g_INT_01e810a8 == 0) {
                      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                        (g_CEventList_PTR_0061b4d0,local_cfc);
                      g_CGamePtr->allow_damage_flag = iVar5;
                    }
                  }
                  else {
                    iVar5 = _strnicmp
                                      (pcVar14,"attachActorToPlatform",0x15);
                    if ((iVar5 == 0) &&
                       ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x15] + 1)] & 0xe0) == 0)) {
                      local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0x15);
                      local_138 = -1;
                      sscanf(local_34,"(%[^,], %[^)])%n");
                      if (local_138 < 2) {
                        _sprintf(g_CHAR_ARRAY_01e810b0,"Error parsing attachActorToPlatform command parms");
                        return -1;
                      }
                      local_34 = local_34 + local_138;
                      core_script_cpp_trimString_FUN_00543240(local_29e4);
                      core_script_cpp_trimString_FUN_00543240(local_30ec);
                      pCVar6 = (CPlatform *)
                               core_script_cpp_getActor_FUN_005433c0
                                         (local_30ec,g_CPlatformClassInfo.name_hash,
                                          &g_CPlatformClassInfo);
                      if ((pCVar6 == (CPlatform *)0x0) ||
                         (pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                              (local_29e4,g_CDemonActorClassInfo.name_hash,
                                               &g_CDemonActorClassInfo),
                         pCVar11 == (CDemonActor *)0x0)) goto joined_r0x00546052;
                      if (g_INT_01e810a8 == 0) {
                        core_platfrm_cpp_CPlatform_attachActor_FUN_0053adb0(pCVar6,pCVar11);
                      }
                    }
                    else {
                      iVar5 = _strnicmp
                                        (pcVar14,"beginFadeIn",0xb);
                      if ((iVar5 == 0) &&
                         ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                        local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0xb);
                        if (g_INT_01e810a8 == 0) {
                          core_game_cpp_CGame_beginFadeIn_FUN_004d6030(g_CGamePtr);
                        }
                      }
                      else {
                        iVar5 = _strnicmp
                                          (pcVar14,"beginFadeOut",0xc);
                        if ((iVar5 == 0) &&
                           ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                          local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0xc);
                          if (g_INT_01e810a8 == 0) {
                            core_game_cpp_CGame_beginFadeOut_FUN_004d6070(g_CGamePtr);
                          }
                        }
                        else {
                          iVar5 = _strnicmp
                                            (pcVar14,"breakPoint",10);
                          if ((iVar5 == 0) &&
                             ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                            local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 10);
                            if (g_INT_01e810a8 == 0) {
                              _sprintf(local_720,"Script breakpoint reached at line %d");
                              core_game_cpp_CGame_displayMessage_FUN_004cc190
                                        (g_CGamePtr,local_720,5.0);
                              this_ptr->script_state = 2;
                            }
                          }
                          else {
                            iVar5 = _strnicmp
                                              (pcVar14,"cancelCameraHold",0x10);
                            if ((iVar5 == 0) &&
                               ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0)) {
                              local_34 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar14 + 0x10)
                              ;
                              if (g_INT_01e810a8 == 0) {
                                core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200
                                          (g_CDemonSetPtr);
                              }
                            }
                            else {
                              iVar5 = _strnicmp
                                                (pcVar14,"cancelWalkTo",0xc);
                              if ((iVar5 == 0) &&
                                 ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                     (pcVar14 + 0xc);
                                pcVar14 = core_script_cpp_parseArgument_FUN_005432d0
                                                    (&local_34,local_101c,200);
                                if (pcVar14 != (char *)0x0) {
                                  pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  (local_101c,"all");
                                if (iVar5 == 0) {
                                  if (g_INT_01e810a8 == 0) {
                                    iVar5 = 0;
                                    for (iVar9 = 0; iVar9 < g_CDemonSetPtr->actor_count;
                                        iVar9 = iVar9 + 1) {
                                      pCVar10 = (CCharacter *)
                                                core_actor_cpp_castToClassHash_FUN_0040c600
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
                                            core_script_cpp_getActor_FUN_005433c0
                                                      (local_101c,g_CCharacterClassInfo.name_hash,
                                                       &g_CCharacterClassInfo);
                                  if (pCVar10 == (CCharacter *)0x0) goto joined_r0x00546052;
                                  if (g_INT_01e810a8 == 0) {
                                    (*(((pCVar10->base).vtable._uc)->_uc).setWalkTarget)
                                              (pCVar10,(CDemonActor *)0x0,0.0,0.0);
                                  }
                                }
                              }
                              else {
                                iVar5 = _strnicmp
                                                  (pcVar14,"chainToMission",0xe);
                                if ((iVar5 == 0) &&
                                   ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0))
                                {
                                  local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                       (pcVar14 + 0xe);
                                  pcVar14 = core_script_cpp_parseArgument_FUN_005432d0
                                                      (&local_34,local_246c,200);
                                  if (pcVar14 != (char *)0x0) {
LAB_0054630a:
                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                  core_script_cpp_trimString_FUN_00543240(local_246c);
                                  iVar5 = g_INT_01e810a8;
                                  if (g_INT_01e810a8 == 0) {
                                    core_mission_cpp_CDemonMission_setMissionName_FUN_0051bc90
                                              (g_CDemonMission_PTR_0061f650,local_246c);
                                    this_ptr->mission_ended = 1;
                                    local_164 = iVar5;
                                  }
                                }
                                else {
                                  iVar5 = _strnicmp
                                                    (pcVar14,"changeSetFilename",0x11);
                                  if ((iVar5 == 0) &&
                                     ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0x11] + 1)] & 0xe0) ==
                                      0)) {
                                    local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                         (pcVar14 + 0x11);
                                    local_f4 = -1;
                                    sscanf(local_34,"(%d , %[^)])%n");
                                    if (local_f4 < 2) {
                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                 "Error parsing changeSetFilename command parms");
                                      return -1;
                                    }
                                    local_34 = local_34 + local_f4;
                                    core_script_cpp_trimString_FUN_00543240(local_3bac);
                                    if ((local_160 < 0) ||
                                       (g_CDemonMission_PTR_0061f650->num_sets <= local_160)) {
                                      _sprintf(g_CHAR_ARRAY_01e810b0,"Invalid set index")
                                      ;
                                      return -1;
                                    }
                                    engine_dosio_cpp_splitPath_FUN_00479580
                                              (local_3bac,(char *)0x0,(char *)0x0,(char *)0x0,
                                               local_3cac);
                                    if (local_3cac[0] == '\0') {
                                      pcVar16 = g_CHAR_ARRAY_005ee9c0;
                                      iVar5 = -1;
                                      pcVar14 = local_3bac;
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
                                    iVar5 = engine_dosio_cpp_getFileSize_FUN_00478fb0
                                                      (g_CHAR_ARRAY_005ee9c0 + 5,local_3bac);
                                    if (iVar5 < 1) {
                                      _sprintf(g_CHAR_ARRAY_01e810b0,g_CHAR_ARRAY_005ee9c0 + 0xc);
                                      return -1;
                                    }
                                    if (g_INT_01e810a8 == 0) {
                                      core_mission_cpp_CDemonMission_changeSetName_FUN_0051b500
                                                (g_CDemonMission_PTR_0061f650,local_160,local_3bac);
                                    }
                                  }
                                  else {
                                    iVar5 = _strnicmp
                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0 + 0x29,5);
                                    if ((iVar5 == 0) &&
                                       ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[5] + 1)] & 0xe0) == 0
                                       )) {
                                      local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                           (pcVar14 + 5);
                                      local_15c = -1;
                                      sscanf
                                                (local_34,g_CHAR_ARRAY_005ee9c0 + 0x2f);
                                      if (local_15c < 3) {
                                        _sprintf(g_CHAR_ARRAY_01e810b0,
                                                   g_CHAR_ARRAY_005ee9c0 + 0x39);
                                        return -1;
                                      }
                                      core_script_cpp_trimString_FUN_00543240(local_39c);
                                      local_34 = local_34 + local_15c;
                                      iVar5 = core_script_cpp_CScript_findDialogEntry_FUN_0054b2a0
                                                        (this_ptr,local_39c);
                                      if (iVar5 < 0) {
                                        local_154 = local_38bc;
                                        local_158 = g_CHAR_ARRAY_005ee9c0 + 0x57;
                                        _sprintf(local_38bc,g_CHAR_ARRAY_005ee9c0 + 0x59);
                                        shape_edittool_cpp_CStrList_add_FUN_004994d0
                                                  (&g_ScriptPickList.base,local_38bc);
                                      }
                                      else {
                                        pSVar3 = this_ptr->dialog_entries;
                                        local_158 = pSVar3[iVar5].speaker;
                                        local_154 = pSVar3[iVar5].text;
                                        pcVar16 = local_39c;
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
                                                  core_script_cpp_CScript_startDialogLine_FUN_0054aa60
                                                            (this_ptr,local_158,local_39c,local_154)
                                        ;
                                        this_ptr->dialog_wav_time = local_14;
                                        if (this_ptr->dialog_wav_time < 0.0) {
                                          return -1;
                                        }
                                      }
                                      if ((g_INT_01e810a8 == 0) &&
                                         (local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < local_164)) {
                                        core_script_cpp_CScript_setSpeaker_FUN_0054aca0
                                                  (this_ptr,this_ptr->who_is_speaking);
                                      }
                                    }
                                    else {
                                      iVar5 = _strnicmp
                                                        (pcVar14,g_CHAR_ARRAY_005ee9c0 + 0x75,10);
                                      if ((iVar5 == 0) &&
                                         ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[10] + 1)] & 0xe0)
                                          == 0)) {
                                        local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                             (pcVar14 + 10);
                                        local_150 = -1;
                                        sscanf
                                                  (local_34,g_CHAR_ARRAY_005ee9c0 + 0x80);
                                        if (local_150 < 3) {
                                          _sprintf(g_CHAR_ARRAY_01e810b0,
                                                     g_CHAR_ARRAY_005ee9c0 + 0x8a);
                                          return -1;
                                        }
                                        core_script_cpp_trimString_FUN_00543240(local_b08);
                                        local_34 = local_34 + local_150;
                                        iVar5 = core_script_cpp_CScript_findDialogEntry_FUN_0054b2a0
                                                          (this_ptr,local_b08);
                                        if (iVar5 < 0) {
                                          local_144 = local_3024;
                                          local_148 = g_CHAR_ARRAY_005ee9c0 + 0xa8;
                                          _sprintf(local_3024,g_CHAR_ARRAY_005ee9c0 + 0xaa);
                                          shape_edittool_cpp_CStrList_add_FUN_004994d0
                                                    (&g_ScriptPickList.base,local_3024);
                                        }
                                        else {
                                          pSVar3 = this_ptr->dialog_entries;
                                          local_148 = pSVar3[iVar5].speaker;
                                          local_144 = pSVar3[iVar5].text;
                                          pcVar16 = local_b08;
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
                                                  core_script_cpp_CScript_startDialogLine_FUN_0054aa60
                                                            (this_ptr,local_148,local_b08,local_144)
                                        ;
                                        this_ptr->dialog_wav_time = local_14;
                                        fVar1 = this_ptr->dialog_wav_time;
joined_r0x0054a269:
                                        if (fVar1 < 0.0) {
                                          return -1;
                                        }
                                      }
                                      else {
                                        iVar5 = _strnicmp
                                                          (pcVar14,g_CHAR_ARRAY_005ee9c0 + 0xc6,0xe)
                                        ;
                                        if ((iVar5 == 0) &&
                                           ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[0xe] + 1)] & 0xe0
                                            ) == 0)) {
                                          local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                               (pcVar14 + 0xe);
                                          local_140 = -1;
                                          sscanf
                                                    (local_34,g_CHAR_ARRAY_005ee9c0 + 0xd5);
                                          if (local_140 < 3) {
                                            _sprintf(g_CHAR_ARRAY_01e810b0,
                                                       g_CHAR_ARRAY_005ee9c0 + 0xe3);
                                            return -1;
                                          }
                                          core_script_cpp_trimString_FUN_00543240(local_52c);
                                          local_34 = local_34 + local_140;
                                          iVar5 = core_script_cpp_CScript_findDialogEntry_FUN_0054b2a0
                                                            (this_ptr,local_52c);
                                          if (iVar5 < 0) {
                                            local_118 = local_10e4;
                                            _sprintf(local_10e4,g_CHAR_ARRAY_005ee9c0 + 0x10a);
                                          }
                                          else {
                                            local_118 = this_ptr->dialog_entries[iVar5].text;
                                            pcVar16 = local_52c;
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
                                          if (g_INT_01e810a8 == 0) {
                                            pcVar14 = this_ptr->current_message;
                                            pcVar16 = local_118;
                                            do {
                                              cVar2 = *pcVar16;
                                              *pcVar14 = cVar2;
                                              if (cVar2 == '\0') break;
                                              cVar2 = pcVar16[1];
                                              pcVar16 = pcVar16 + 2;
                                              pcVar14[1] = cVar2;
                                              pcVar14 = pcVar14 + 2;
                                            } while (cVar2 != '\0');
                                            local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,local_13c,time_remaining);
                                            if (0 < local_164) {
                                              this_ptr->current_message[0] = '\0';
                                            }
                                          }
                                        }
                                        else {
                                          iVar5 = _strnicmp
                                                            (pcVar14,g_CHAR_ARRAY_005ee9c0 + 0x126,5
                                                            );
                                          if ((iVar5 == 0) &&
                                             ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[5] + 1)] & 0xe0
                                              ) == 0)) {
                                            local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                                 (pcVar14 + 5);
                                            pcVar14 = core_script_cpp_parseArgument_FUN_005432d0
                                                                (&local_34,local_3edc,300);
                                            if (pcVar14 != (char *)0x0) goto LAB_0054630a;
                                            if (g_INT_01e810a8 == 0) {
                                              shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                                                        (g_CEditorToolsPtr,
                                                         g_CHAR_ARRAY_005ee9c0 + 300);
                                            }
                                          }
                                          else {
                                            iVar5 = _strnicmp
                                                              (pcVar14,g_CHAR_ARRAY_005ee9c0 + 0x150
                                                               ,9);
                                            if ((iVar5 == 0) &&
                                               ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[9] + 1)] &
                                                0xe0) == 0)) {
                                              local_34 = core_script_cpp_skipWhitespace_FUN_005432b0
                                                                   (pcVar14 + 9);
                                              local_134 = -1;
                                              sscanf
                                                        (local_34,g_CHAR_ARRAY_005ee9c0 + 0x15a);
                                              if (local_134 < 5) {
                                                _sprintf(g_CHAR_ARRAY_01e810b0,
                                                           g_CHAR_ARRAY_005ee9c0 + 0x16b);
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
                                              iVar5 = core_script_cpp_parseBodyPartMask_FUN_00543610
                                                                (local_130,local_1bd4,local_39ac);
                                              if (iVar5 == 0) {
                                                return -1;
                                              }
                                              core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&local_19c)
                                              ;
                                              initial_velocity = (CVector3f *)0x0;
                                              if (*local_34 == ',') {
                                                local_134 = -1;
                                                sscanf
                                                          (local_34,g_CHAR_ARRAY_005ee9c0 + 0x191);
                                                if (local_134 < 5) {
                                                  _sprintf(g_CHAR_ARRAY_01e810b0,
                                                             g_CHAR_ARRAY_005ee9c0 + 0x1a4);
                                                  return -1;
                                                }
                                                local_34 = local_34 + local_134;
                                                if (0.0 < local_492c) {
                                                  fVar1 = local_492c * 3.141593f *
                                                          0.005555556f;
                                                  z = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                                                            (-fVar1,fVar1);
                                                  y = 0.0;
                                                  local_14 = z;
                                                  local_14 = 
                                                  core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                                                            (-fVar1,fVar1);
                                                  core_doc_cpp_makeVector_FUN_00476620
                                                            (local_14,y,z,&local_1c0);
                                                  local_1a8.x = local_1c0.x;
                                                  *(uint *)
                                                   ((int)&local_1a8 + (uint)bVar17 * -8 + 4) =
                                                       *(uint *)
                                                        ((int)&local_1c0 + (uint)bVar17 * -8 + 4);
                                                  *(uint *)
                                                   ((int)&local_1a8 +
                                                   (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                                                       *(uint *)
                                                        ((int)&local_1c0 +
                                                        (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
                                                  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                                                            (&local_20c,&local_1a8);
                                                  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
                                                            (&local_20c,&local_19c,&local_1d8);
                                                  local_1b4.x = local_1d8.x;
                                                  *(uint *)
                                                   ((int)&local_1b4 + (uint)bVar17 * -8 + 4) =
                                                       *(uint *)
                                                        ((int)&local_1d8 + (uint)bVar17 * -8 + 4);
                                                  *(uint *)
                                                   ((int)&local_1b4 +
                                                   (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                                                       *(uint *)
                                                        ((int)&local_1d8 +
                                                        (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
                                                  core_actor_cpp_copyVector_FUN_0040cff0
                                                            (&local_19c,&local_1b4);
                                                }
                                                initial_velocity = &local_19c;
                                              }
                                              if (*local_34 != ')') {
                                                _sprintf(g_CHAR_ARRAY_01e810b0,
                                                           g_CHAR_ARRAY_005ee9c0 + 0x1ca);
                                                return -1;
                                              }
                                              local_34 = local_34 + 1;
                                              if (g_INT_01e810a8 == 0) {
                                                iVar5 = 0;
                                                local_12c = 
                                                  core_bodypart_cpp_createBodyPart_FUN_00418940
                                                            (&(local_130->base).location.position,
                                                             &(local_130->base).orient,
                                                             initial_velocity,&local_130->base,0,0,
                                                             local_130->blood_type);
                                                iVar9 = 0;
                                                do {
                                                  if (*(int *)((int)local_39ac + iVar9) != 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                                                            (local_130,local_12c,iVar5,0);
                                                  }
                                                  iVar5 = iVar5 + 1;
                                                  iVar9 = iVar9 + 4;
                                                } while (iVar5 < 0x3c);
                                                core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90
                                                          (local_12c);
                                              }
                                            }
                                            else {
                                              iVar5 = _strnicmp
                                                                (pcVar14,g_CHAR_ARRAY_005ee9c0 +
                                                                         0x1fa,7);
                                              if ((iVar5 == 0) &&
                                                 ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[7] + 1)] &
                                                  0xe0) == 0)) {
                                                local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 7);
                                                pcVar14 = core_script_cpp_parseArgument_FUN_005432d0
                                                                    (&local_34,
                                                                     this_ptr->current_message,0x400
                                                                    );
                                                if (pcVar14 != (char *)0x0) {
                                                  _sprintf(g_CHAR_ARRAY_01e810b0,
                                                             g_CHAR_ARRAY_005ee9c0 + 0x202);
                                                  return -1;
                                                }
                                              }
                                              else {
                                                iVar5 = _strnicmp
                                                                  (pcVar14,g_CHAR_ARRAY_005ee9c0 +
                                                                           0x236,4);
                                                if ((iVar5 == 0) &&
                                                   ((g_UCHAR_ARRAY_00626114[(byte)(pcVar14[4] + 1)]
                                                    & 0xe0) == 0)) {
                                                  local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 4);
                                                  iVar5 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_0054ad20
                                                            (this_ptr,this_ptr->next_cmd,1);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x23b);
                                                    return -1;
                                                  }
                                                  this_ptr->next_cmd = iVar5;
                                                }
                                                else {
                                                  iVar5 = _strnicmp
                                                                    (pcVar14,g_CHAR_ARRAY_005ee9c0 +
                                                                             0x273,0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xc);
                                                  local_128 = -1;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x280)
                                                  ;
                                                  if (local_128 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x291);
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_128;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_25fc);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2534);
                                                  iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0
                                                            (g_CDemonSetPtr,local_25fc);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x2b2);
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    iVar9 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (g_CEventList_PTR_0061b4d0,local_2534);
                                                  core_set_cpp_CDemonSet_setCameraEnabled_FUN_005559b0
                                                            (g_CDemonSetPtr,iVar5,iVar9);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (g_CEventList_PTR_0061b4d0,local_2534);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x2ce,0x11);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[0x11] + 1)] & 0xe0) == 0))
                                                    {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0x11);
                                                  local_124 = -1;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x2e0)
                                                  ;
                                                  if (local_124 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x2ef);
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_124;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_3344);
                                                  if (g_INT_01e810a8 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (g_CEventList_PTR_0061b4d0,local_3344);
                                                  core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_005559d0
                                                            (g_CDemonSetPtr,local_60,iVar5);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (g_CEventList_PTR_0061b4d0,local_3344);
                                                  if (pcVar14 != (char *)0x0) {
LAB_00546ffc:
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x315,0xf);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xf);
                                                  local_120 = -1;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x325)
                                                  ;
                                                  if (local_120 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x336);
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_120;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2dcc);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_372c);
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_2dcc,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  iVar9 = _stricmp
                                                                    (local_372c,
                                                                     g_CHAR_ARRAY_005ee9c0 + 0x35a);
                                                  iVar5 = 0;
                                                  if (iVar9 != 0) {
                                                    iVar5 = _stricmp
                                                                      (local_372c,
                                                                       g_CHAR_ARRAY_005ee9c0 + 0x360
                                                                      );
                                                    if (iVar5 == 0) {
                                                      iVar5 = 1;
                                                    }
                                                    else {
                                                      iVar5 = _stricmp
                                                                        (local_372c,
                                                                         g_CHAR_ARRAY_005ee9c0 +
                                                                         0x365);
                                                      if (iVar5 != 0) {
                                                        _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                   g_CHAR_ARRAY_005ee9c0 + 0x36c);
                                                        return -1;
                                                      }
                                                      iVar5 = 2;
                                                    }
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    pCVar11[0x1b].is_renderable = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x389,3);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[3] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 3);
                                                  if (g_INT_01e810a8 == 0) {
                                                    local_164 = g_INT_01e810a8;
                                                    this_ptr->mission_ended = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x38d,6);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[6] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 6);
                                                  if (g_INT_01e810a8 == 0) {
                                                    local_164 = g_INT_01e810a8;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar12 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004d62e0
                                                            (g_CGamePtr);
                                                  if (uVar12 != 0) {
                                                    local_164 = 1;
                                                    g_CGamePtr->allow_damage_flag = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeIn_FUN_004d6030
                                                              (g_CGamePtr);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x394,7);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 7);
                                                  iVar5 = g_INT_01e810a8;
                                                  pCVar4 = g_CGamePtr;
                                                  if (g_INT_01e810a8 == 0) {
                                                    g_CGamePtr->allow_damage_flag = 0;
                                                    local_164 = iVar5;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      uVar12 = 
                                                  core_game_cpp_CGame_fadeIn_FUN_004d62e0(pCVar4);
                                                  if (uVar12 != 0) {
                                                    local_164 = 1;
                                                  }
                                                  }
                                                  else {
                                                    core_game_cpp_CGame_beginFadeOut_FUN_004d6070
                                                              (pCVar4);
                                                    this_ptr->cmd_timer = 1.0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x39c,7);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 7);
                                                  local_48 = -1;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x3a4)
                                                  ;
                                                  if (local_48 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x3b5);
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
                                                              (local_34,g_CHAR_ARRAY_005ee9c0 +
                                                                        0x3d9);
                                                    if (local_48 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                 g_CHAR_ARRAY_005ee9c0 + 0x3e1);
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_48;
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x402);
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
                                                  if (g_INT_01e810a8 == 0) {
                                                    uVar12 = 
                                                  core_charactr_cpp_CCharacter_initGesture_FUN_00432c70
                                                            (pCVar10,local_dc4);
                                                  pCVar10->gesture_looping = local_114;
                                                  }
                                                  else {
                                                    iVar5 = 0;
                                                    pcVar14 = local_dc4;
                                                    this_ptr_00 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                                                            (&(pCVar10->model).base);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                                                            (this_ptr_00,pcVar14,iVar5);
                                                  uVar12 = (uint)(-1 < iVar5);
                                                  }
                                                  if (uVar12 == 0) {
                                                                                                        
                                                  core_bugs_cpp_getDeformableModelName_FUN_00428120
                                                            (&pCVar10->model);
                                                  _sprintf(g_CHAR_ARRAY_01e810b0,
                                                             g_CHAR_ARRAY_005ee9c0 + 0x43a);
                                                  return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x46e,9);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 9);
                                                  local_110 = -1;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x478)
                                                  ;
                                                  if (local_110 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x48b);
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_110;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_327c);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1d64);
                                                  if (g_INT_01e810a8 == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004f4b00
                                                              (&local_4924,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x4b6,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x4b1);
                                                    local_10c = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_004a9e80
                                                            (g_CEventList_PTR_0061b4d0,local_1d64);
                                                  engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10
                                                            (&local_4924,local_327c,&local_10c);
                                                  core_event_cpp_CEventList_setCounter_FUN_004a9d70
                                                            (g_CEventList_PTR_0061b4d0,local_1d64,
                                                             local_10c);
                                                  engine_ini_cpp_CIniFile_dtor_FUN_004f4b30
                                                            (&local_4924,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x4ca,0xf);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xf);
                                                  local_108 = -1;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x4da)
                                                  ;
                                                  if (local_108 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x4eb);
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_108;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1ef4);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_340c);
                                                  iVar5 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00543100
                                                            (local_1ef4);
                                                  if (iVar5 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_340c,
                                                                       g_CTriggerClassInfo.name_hash
                                                                       ,&g_CTriggerClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004a9ff0
                                                            (g_CEventList_PTR_0061b4d0,local_1ef4,
                                                             (CDemonActor *)
                                                             pCVar11[2].orient_matrix.m[1].z);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x517,5);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[5] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 5);
                                                  iVar5 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_0054acc0
                                                            (this_ptr,local_34);
                                                  if (iVar5 < 0) {
                                                    pcVar14 = g_CHAR_ARRAY_005ee9c0 + 0x51d;
LAB_005445cf:
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,pcVar14);
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    if (7 < this_ptr->call_stack_count) {
                                                      local_104 = _fopen(g_CHAR_ARRAY_005ee9c0 +
                                                                             0x556,
                                                  g_CHAR_ARRAY_005ee9c0 + 0x553);
                                                  _fprintf(local_104,g_CHAR_ARRAY_005ee9c0 + 0x560
                                                            );
                                                  iVar5 = this_ptr->call_stack_count;
                                                  while (iVar5 = iVar5 + -1, -1 < iVar5) {
                                                    _fprintf(local_104,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x56d);
                                                  }
                                                  _fclose(local_104);
                                                  _sprintf(g_CHAR_ARRAY_01e810b0,
                                                             g_CHAR_ARRAY_005ee9c0 + 0x57a);
                                                  return -1;
                                                  }
                                                  this_ptr->call_stack[this_ptr->call_stack_count] =
                                                       this_ptr->next_cmd;
                                                  this_ptr->next_cmd = iVar5;
                                                  this_ptr->call_stack_count =
                                                       this_ptr->call_stack_count + 1;
                                                  local_34 = g_CHAR_ARRAY_005ee9c0 + 0x5c8;
                                                  }
                                                  else {
                                                    local_34 = g_CHAR_ARRAY_005ee9c0 + 0x5c8;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x5c9,4);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 4);
                                                  iVar5 = 
                                                  core_script_cpp_CScript_findLabelIndex_FUN_0054acc0
                                                            (this_ptr,local_34);
                                                  if (iVar5 < 0) {
                                                    pcVar14 = g_CHAR_ARRAY_005ee9c0 + 0x5ce;
                                                    goto LAB_005445cf;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    this_ptr->next_cmd = iVar5;
                                                    local_34 = g_CHAR_ARRAY_005ee9c0 + 0x603;
                                                  }
                                                  else {
                                                    local_34 = g_CHAR_ARRAY_005ee9c0 + 0x603;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x604,4);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 4);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_4134,300);
                                                  if (pcVar14 != (char *)0x0) goto LAB_00546ffc;
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                                                            (g_CEditorToolsPtr,
                                                             g_CHAR_ARRAY_005ee9c0 + 0x609);
                                                  this_ptr->mission_ended = 1;
                                                  local_164 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x639,0xd);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xd);
                                                  local_100 = 0xffffffff;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x647)
                                                  ;
                                                  if ((int)local_100 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x651);
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_100;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_197c);
                                                  local_fc = (CEnemy *)
                                                             core_script_cpp_getActor_FUN_005433c0
                                                                       (local_197c,
                                                                        g_CHeroClassInfo.name_hash,
                                                                        &g_CHeroClassInfo);
                                                  if (local_fc == (CEnemy *)0x0)
                                                  goto joined_r0x00546052;
                                                  local_f8 = 1;
                                                  if (*local_34 == ',') {
                                                    local_34 = local_34 + 1;
                                                    uVar12 = 0xffffffff;
                                                    pcVar14 = local_34;
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar14;
                                                      pcVar14 = pcVar14 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    local_100 = ~uVar12 - 2;
                                                    if ((int)local_100 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                 g_CHAR_ARRAY_005ee9c0 + 0x67b);
                                                      return -1;
                                                    }
                                                    pcVar14 = local_34;
                                                    pcVar16 = acStack_23a6 + 2;
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
                                                    local_34 = local_34 + local_100;
                                                    acStack_23a6[~uVar12] = '\0';
                                                    if (g_INT_01e810a8 == 0) {
                                                      local_f8 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (g_CEventList_PTR_0061b4d0,
                                                             acStack_23a6 + 2);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (g_CEventList_PTR_0061b4d0,
                                                             acStack_23a6 + 2);
                                                  if (pcVar14 != (char *)0x0) goto LAB_00547aee;
                                                  }
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x6a5);
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  if (g_INT_01e810a8 == 0) {
                                                    (*(((local_fc->base).base.vtable._ue)->_ue).
                                                      updateVictim)(local_fc,SUB14(local_f8 == 0,0))
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x6d2,4);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 4);
                                                  local_30 = (char *)this_ptr->next_cmd;
                                                  local_164 = 0;
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x6d7,2);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[2] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 2);
                                                  pcVar14 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00543380
                                                            (&local_34,local_590);
                                                  if (pcVar14 != (char *)0x0) goto LAB_00547aee;
                                                  if ((g_INT_01e810a8 == 0) &&
                                                     (iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (g_CEventList_PTR_0061b4d0,local_590),
                                                  iVar5 == 0)) {
                                                    iVar5 = 
                                                  core_script_cpp_CScript_skipCommands_FUN_0054ad20
                                                            (this_ptr,this_ptr->next_cmd,0);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x6da);
                                                    return -1;
                                                  }
                                                  iVar9 = _strnicmp
                                                                    (this_ptr->parsed_lines[iVar5].
                                                                     text,g_CHAR_ARRAY_005ee9c0 +
                                                                          0x710,4);
                                                  if (iVar9 == 0) {
                                                    iVar5 = iVar5 + 1;
                                                  }
                                                  this_ptr->next_cmd = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x715,0xb);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xb);
                                                  local_f0 = -1;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x721)
                                                  ;
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_f0 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x728);
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_f0;
                                                  if (g_INT_01e810a8 == 0) {
                                                    local_164 = g_INT_01e810a8;
                                                    this_ptr->mission_ended = 1;
                                                    pCVar4->act_completion_state = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x74a,9);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 9);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_658,100);
                                                  if (pcVar14 != (char *)0x0) {
LAB_00547aee:
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                                    (local_658,
                                                                     g_CHAR_ARRAY_005ee9c0 + 0x754);
                                                  if (iVar5 == 0) {
                                                    iVar9 = 0;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_658,
                                                                     g_CHAR_ARRAY_005ee9c0 + 0x75a);
                                                  if (iVar5 == 0) {
                                                    iVar9 = 1;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_658,
                                                                     g_CHAR_ARRAY_005ee9c0 + 0x75f);
                                                  pCVar4 = g_CGamePtr;
                                                  if (iVar5 == 0) {
                                                    iVar9 = 2;
                                                  }
                                                  else if (iVar9 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x766);
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
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
                                                    g_INT_01e818b4 = 1;
                                                    if ((pCVar4->goggles_active != 0) &&
                                                       (pCVar4->letterbox_mode != 0)) {
                                                      (*(((g_CHero_PTR_ARRAY_01d06aa4
                                                           [g_INT_01d06ab4]->base).base.vtable._uh)
                                                        ->_uh).toggleGoggles)
                                                                (g_CHero_PTR_ARRAY_01d06aa4
                                                                 [g_INT_01d06ab4]);
                                                      (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
                                                      iVar5 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_004aafe0
                                                            (g_CDemonSetPtr);
                                                  core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_00559f80
                                                            (g_CDemonSetPtr,
                                                             g_CScriptPtr->focus_actor,1);
                                                  set_ptr = g_CDemonSetPtr;
                                                  g_CScriptPtr->focus_actor_changed = 0;
                                                  iVar9 = 
                                                  core_event_cpp_getSelectedCameraIndex_FUN_004aafe0
                                                            (set_ptr);
                                                  if (iVar5 == iVar9) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
                                                            (g_CDemonSetPtr,iVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x781,0xe);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xe);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_3db0,0x104);
                                                  if (pcVar14 != (char *)0x0) goto LAB_00547aee;
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0
                                                            (g_CFieldNotesPtr,local_3db0,(char *)0x0
                                                            );
                                                  }
                                                  else if ((g_CDemonMission_PTR_0061f650->
                                                            is_in_editor != 0) ||
                                                          (g_CFieldNotesPtr->file_name[0] == '\0'))
                                                  {
                                                    iVar5 = 
                                                  core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0
                                                            (g_CFieldNotesPtr,local_3db0,
                                                             g_CHAR_ARRAY_01e810b0);
joined_r0x00549128:
                                                  if (iVar5 == 0) {
                                                    return -1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x790,0xe);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xe);
                                                  pcVar14 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00543380
                                                            (&local_34,local_914);
                                                  if (pcVar14 != (char *)0x0) goto LAB_00547aee;
                                                  if (g_INT_01e810a8 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (g_CEventList_PTR_0061b4d0,local_914);
                                                  this_ptr->focus_actor_locked = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,g_CHAR_ARRAY_005ee9c0
                                                                               + 0x79f,6);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[6] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 6);
                                                  local_ec = -1;
                                                  sscanf
                                                            (local_34,g_CHAR_ARRAY_005ee9c0 + 0x7a6)
                                                  ;
                                                  if (local_ec < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               g_CHAR_ARRAY_005ee9c0 + 0x7b0);
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
                                                    if (g_INT_01e818bc == 0) {
                                                      return -1;
                                                    }
                                                    goto LAB_00544524;
                                                  }
                                                  pCVar11 = (CDemonActor *)0x0;
                                                  if (*local_34 == ',') {
                                                    local_ec = -1;
                                                    sscanf
                                                              (local_34,g_CHAR_ARRAY_005ee9c0 +
                                                                        0x7d3);
                                                    if (local_ec < 3) {
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                 g_CHAR_ARRAY_005ee9c0 + 0x7dd);
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_ec;
                                                    core_script_cpp_trimString_FUN_00543240
                                                              (local_2b74);
                                                    pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                        (local_2b74,
                                                                         g_CDemonActorClassInfo.
                                                                         name_hash,
                                                                         &g_CDemonActorClassInfo);
                                                    if (pCVar11 == (CDemonActor *)0x0)
                                                    goto joined_r0x00546052;
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Missing closing ')' in lookAt command");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00433c50
                                                            (pCVar10,pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "monsterVision",0xd);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xd);
                                                  local_78 = 0xffffffff;
                                                  local_e8 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d )%n");
                                                  if (local_e8 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
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
                                                  if (g_INT_01e810a8 == 0) {
                                                    this_ptr->monster_vision_actor = pCVar10;
                                                    local_78 = (uint)(g_CGamePtr->
                                                                      special_view_active == 0);
                                                    (**(code **)((int)g_CGamePtr->vtable + 4))
                                                              (g_CGamePtr,local_78);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "movePlatform",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xc);
                                                  local_e4 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %f , %f )%n");
                                                  if (local_e4 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing movePlatform command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_e4;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1fbc);
                                                  pCVar6 = (CPlatform *)
                                                           core_script_cpp_getActor_FUN_005433c0
                                                                     (local_1fbc,
                                                                      g_CPlatformClassInfo.name_hash
                                                                      ,&g_CPlatformClassInfo);
                                                  if (pCVar6 == (CPlatform *)0x0)
                                                  goto joined_r0x00546052;
                                                  if ((local_4938 < 0.0) || (1.0 < local_4938)) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Paramater must be in range 0.0 .. 1.0");
                                                    return -1;
                                                  }
                                                  if (local_4928 <= 0.0) {
                                                    pcVar14 = "Invalid movement rate %f";
                                                    goto LAB_005445cf;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_platfrm_cpp_CPlatform_startMovement_FUN_0053a340
                                                            (pCVar6,local_4938,local_4928);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"openDoor",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 8);
                                                  local_e0 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_e0 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing openDoor command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_e0;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2aac);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2c3c);
                                                  door_target = (CDoor *)
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_2aac,g_CDoorClassInfo.name_hash,
                                                             &g_CDoorClassInfo);
                                                  if ((door_target == (CDoor *)0x0) ||
                                                     (pCVar10 = (CCharacter *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_2c3c,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar10 == (CCharacter *)0x0))
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                    local_164 = g_INT_01e810a8;
                                                    if (0.0 <= this_ptr->cmd_timer) {
                                                      iVar5 = (*(((pCVar10->base).vtable._uc)->_uc).
                                                                hasDoorTarget)(pCVar10);
                                                      if (iVar5 != 0) {
                                                        local_160 = 1;
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
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xb);
                                                  local_dc = -1;
                                                  sscanf
                                                            (local_34,"( %[^,], %[^)])%n");
                                                  if (local_dc < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing pressButton() command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_dc;
                                                  core_script_cpp_trimString_FUN_00543240(local_aa4)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240(local_a40)
                                                  ;
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_aa4,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  piVar7 = 
                                                  core_script_cpp_getActionState_FUN_00543540
                                                            ((SPlayerActionState *)
                                                             &pCVar11[0x90].orient_matrix.m[2].y,
                                                             local_a40);
                                                  iVar5 = g_INT_01e810a8;
                                                  if (piVar7 == (int *)0x0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Invalid button name: %s");
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    if (g_INT_01e818b4 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0
                                                            (g_CGamePtr);
                                                  g_INT_01e818b4 = iVar5;
                                                  }
                                                  *piVar7 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"raise",5);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[5] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 5);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_400,100);
                                                  if (pcVar14 != (char *)0x0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing event expression on raise statament: %s");
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                                                            (g_CEventList_PTR_0061b4d0,local_400);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCommands_FUN_004a6cd0
                                                            (g_CEventList_PTR_0061b4d0,local_400);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xd);
                                                  local_d8 = -1;
                                                  sscanf
                                                            (local_34,"( %[^,], %[^)])%n");
                                                  if (local_d8 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing releaseButton() command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_d8;
                                                  core_script_cpp_trimString_FUN_00543240(local_464)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240(local_8b0)
                                                  ;
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_464,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  piVar7 = 
                                                  core_script_cpp_getActionState_FUN_00543540
                                                            ((SPlayerActionState *)
                                                             &pCVar11[0x90].orient_matrix.m[2].y,
                                                             local_8b0);
                                                  if (piVar7 == (int *)0x0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Invalid button name: %s");
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    if (g_INT_01e818b4 != 0) {
                                                                                                            
                                                  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0
                                                            (g_CGamePtr);
                                                  g_INT_01e818b4 = 0;
                                                  }
                                                  *piVar7 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0x1b] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0x1b);
                                                  local_d4 = -1;
                                                  sscanf
                                                            (local_34," ( %[^)])%n");
                                                  if (local_d4 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing removeAllItemsFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_d4;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_22dc);
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_22dc,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                    core_inv_cpp_CInventory_initialize_FUN_004f7050
                                                              ((CInventory *)
                                                               &pCVar11[0x179].orient_matrix.m[1].z)
                                                    ;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0x17] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0x17);
                                                  local_d0 = -1;
                                                  sscanf
                                                            (local_34," ( %[^,], %[^,)]%n");
                                                  if (local_d0 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
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
                                                  if (local_cc == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  iVar5 = 1;
                                                  if (*local_34 == ',') {
                                                    local_d0 = -1;
                                                    sscanf
                                                              (local_34,", %[^)]%n");
                                                    if (local_d0 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                 "Error parsing removeItemFromInventory command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_d0;
                                                    if (g_INT_01e810a8 == 0) {
                                                      iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (g_CEventList_PTR_0061b4d0,local_2d04);
                                                  }
                                                  else {
                                                    pcVar14 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (g_CEventList_PTR_0061b4d0,local_2d04);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  if (*local_34 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing removeItemFromInventory command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  if (((g_INT_01e810a8 == 0) &&
                                                      (pCVar11 = 
                                                  core_inv_cpp_CInventory_findItemByName_FUN_004f8c40
                                                            (&g_CHero_PTR_ARRAY_01d06aa4
                                                              [g_INT_01d06ab4]->inventory,local_26c4
                                                            ), pCVar11 != (CDemonActor *)0x0)) &&
                                                  (core_inv_cpp_CInventory_removeItem_FUN_004f8d00
                                                             ((CInventory *)
                                                              &local_cc[0x179].orient_matrix.m[1].z,
                                                              pCVar11,iVar5), iVar5 == 0)) {
                                                    core_event_cpp_copyQuaternion_FUN_004aafc0
                                                              ((CQuaternion4f *)&pCVar11->location,
                                                               (CQuaternion4f *)&local_cc->location)
                                                    ;
                                                                                                        
                                                  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                                                            (g_CDemonMission_PTR_0061f650,pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"removeKeys"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 10);
                                                  local_c4 = -1;
                                                  sscanf
                                                            (local_34," (%d )%n");
                                                  if (local_c4 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing removeKeys() command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_c4;
                                                  if (g_CNetGamePtr->connection_type !=
                                                      CONNECTION_NONE) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Can't use removeKeys command in multi-player");
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_hero_cpp_CHero_removeMatchingKeys_FUN_004ec300
                                                            (g_CHero_PTR_ARRAY_01d06aa4
                                                             [g_INT_01d06ab4],local_c8);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"return",6);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[6] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 6);
                                                  if (g_INT_01e810a8 == 0) {
                                                    iVar5 = this_ptr->call_stack_count;
                                                    if (iVar5 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
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
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xb);
                                                  local_c0 = -1;
                                                  sscanf
                                                            (local_34," ( )%n");
                                                  pCVar4 = g_CGamePtr;
                                                  if (local_c0 < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing rollCredits command");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_c0;
                                                  if (g_INT_01e810a8 == 0) {
                                                    local_164 = g_INT_01e810a8;
                                                    this_ptr->mission_ended = 1;
                                                    pCVar4->act_completion_state = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"say",3);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[3] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 3);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_4328,500);
                                                  if (pcVar14 != (char *)0x0) {
LAB_00548d6a:
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  local_bc = -1;
                                                  sscanf
                                                            (local_4328,"%[^,], %[^,], %n");
                                                  if (local_bc < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_34d4);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_37f4);
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    pcVar14 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (local_4328 + local_bc);
                                                  local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_0054aa60
                                                            (this_ptr,local_34d4,local_37f4,pcVar14)
                                                  ;
                                                  this_ptr->dialog_wav_time = local_14;
                                                  if (this_ptr->dialog_wav_time < 0.0) {
                                                    return -1;
                                                  }
                                                  }
                                                  if ((g_INT_01e810a8 == 0) &&
                                                     (local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,this_ptr->dialog_wav_time,
                                                             time_remaining), 0 < local_164)) {
                                                    core_script_cpp_CScript_setSpeaker_FUN_0054aca0
                                                              (this_ptr,this_ptr->who_is_speaking);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "selectWeapon",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xc);
                                                  local_b8 = -1;
                                                  sscanf
                                                            (local_34," (%[^,], %[^)])%n");
                                                  if (local_b8 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing selectWeapon parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240(local_978)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240(local_784)
                                                  ;
                                                  local_34 = local_34 + local_b8;
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_978,
                                                                       g_CHeroClassInfo.name_hash,
                                                                       &g_CHeroClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                    inventory_ptr =
                                                         &pCVar11[0x179].orient_matrix.m[1].z;
                                                    local_b4 = g_INT_01e810a8;
                                                    actor_ptr = 
                                                  core_doc_cpp_getSelectedWeapon_FUN_004766f0
                                                            ((CInventory *)inventory_ptr);
                                                  local_b0 = actor_ptr;
                                                  if (actor_ptr != (CWeapon *)0x0) {
                                                    do {
                                                      if (actor_ptr == (CWeapon *)0x0) {
                                                        g_CHAR_PTR_01d1d400 =
                                                             "..\\core\\script.cpp";
                                                        g_INT_01d1d404 = 0xbc9;
                                                        core_main_c_displayErrorAndQuit_FUN_005030e0
                                                                  (
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                                                                    (&actor_ptr->base,local_784);
                                                  if (iVar5 != 0) goto LAB_0054450b;
                                                  core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0
                                                            ((CInventory *)inventory_ptr,
                                                             (CDemonActor *)0x0,5,1);
                                                  actor_ptr = 
                                                  core_doc_cpp_getSelectedWeapon_FUN_004766f0
                                                            ((CInventory *)inventory_ptr);
                                                  } while (actor_ptr != local_b0);
                                                  }
                                                  if (local_b4 == 0) {
                                                    engine_console_cpp_CConsole_printf_FUN_00445430
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
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0x10] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0x10);
                                                  local_ac = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_ac < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setActorVariable command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_ac;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_291c);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1e2c);
                                                  iVar5 = 
                                                  core_script_cpp_validateActorVariableName_FUN_00543100
                                                            (local_291c);
                                                  if (iVar5 == 0) {
                                                    return -1;
                                                  }
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_1e2c,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setActorVariable_FUN_004a9ff0
                                                            (g_CEventList_PTR_0061b4d0,local_291c,
                                                             pCVar11);
                                                  }
                                                  else {
                                                    iVar5 = g_INT_01e818bc;
                                                    if (pCVar11 == (CDemonActor *)0x0)
                                                    goto joined_r0x00549128;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xf] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xf);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_c98,100);
                                                  if (pcVar14 != (char *)0x0) goto LAB_00548d6a;
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_sound_cpp_CSound_playAmbientSound_FUN_0057d810
                                                            (g_CSound_PTR_006236b8,local_c98);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xe);
                                                  local_a4 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d)%n");
                                                  if (local_a4 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setCameragroup parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_a4;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1c9c);
                                                  iVar5 = 0;
                                                  local_a0 = 0;
                                                  for (iVar9 = 0;
                                                      iVar9 < g_CDemonSetPtr->camera_count;
                                                      iVar9 = iVar9 + 1) {
                                                    iVar8 = 
                                                  shape_edittool_cpp_wildcardStringMatch_FUN_0049dea0
                                                            (local_1c9c,
                                                             g_CDemonSetPtr->cameras[0].name + iVar5
                                                             ,0);
                                                  if ((iVar8 != 0) &&
                                                     (local_a0 = 1, g_INT_01e810a8 == 0)) {
                                                    *(uint *)
                                                     ((int)(&g_CDemonSetPtr->cameras[0].
                                                             rotation_matrix + 1) + iVar5 + 0x10) =
                                                         local_a8;
                                                  }
                                                  iVar5 = iVar5 + 0x1a4;
                                                  }
                                                  if (local_a0 == 0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "No cameras found matching \"%s\"");
                                                    return -1;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0x12);
                                                  local_98 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %f)%n");
                                                  if (local_98 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setCharacterHealth parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_98;
                                                  core_script_cpp_trimString_FUN_00543240(local_e8c)
                                                  ;
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_e8c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                    pCVar11[0x1b].platform_orientation_delta.y =
                                                         pCVar11[0x1b].platform_orientation_delta.z
                                                         * local_9c;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"setEyes",7)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 7);
                                                  local_88 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d, %d, %f)%n");
                                                  if (local_88 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setEyes parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_88;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_214c);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_214c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setEyeFrame_FUN_0042e8e0
                                                            (pCVar10,0,local_94,local_8c);
                                                  core_charactr_cpp_CCharacter_setEyeFrame_FUN_0042e8e0
                                                            (pCVar10,1,local_90,local_8c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setSwitchmap",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xc);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_2e94,200);
                                                  if (pcVar14 != (char *)0x0) {
LAB_005494ec:
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2e94);
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_mission_cpp_CDemonMission_setVersionControlDirectory_FUN_0051c420
                                                            (g_CDemonMission_PTR_0061f650,local_2e94
                                                            );
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setFieldNotesImageSuffix",0x18);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0x18] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0x18);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_3aac,0x100);
                                                  if (pcVar14 != (char *)0x0) goto LAB_005494ec;
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_fldnotes_cpp_CFieldNotes_setImageSuffix_FUN_004be0b0
                                                            (g_CFieldNotesPtr,local_3aac);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setFocusActor",0xd);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xd);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_5f4,100);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                      (local_5f4,
                                                                       g_CDemonActorClassInfo.
                                                                       name_hash,
                                                                       &g_CDemonActorClassInfo);
                                                  if (pCVar11 == (CDemonActor *)0x0)
                                                  goto joined_r0x00546052;
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
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xb] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xb);
                                                  local_84 = -1;
                                                  sscanf
                                                            (local_34," (%[^,], %[^)])%n");
                                                  if (local_84 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setHeroTask parameters.");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240(local_84c)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240(local_2d4)
                                                  ;
                                                  local_34 = local_34 + local_84;
                                                  this_ptr_01 = (CHero *)
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_84c,g_CHeroClassInfo.name_hash,
                                                             &g_CHeroClassInfo);
                                                  if (this_ptr_01 == (CHero *)0x0)
                                                  goto joined_r0x00546052;
                                                  iVar9 = _stricmp
                                                                    (local_2d4,"stand");
                                                  iVar5 = 0;
                                                  if (iVar9 != 0) {
                                                    iVar5 = _stricmp
                                                                      (local_2d4,"follow");
                                                    if (iVar5 == 0) {
                                                      iVar5 = 1;
                                                    }
                                                    else {
                                                      iVar5 = _stricmp
                                                                        (local_2d4,"kill");
                                                      if (iVar5 == 0) {
                                                        iVar5 = 2;
                                                      }
                                                      else {
                                                        iVar5 = _stricmp
                                                                          (local_2d4,
                                                                           "guard");
                                                        if (iVar5 == 0) {
                                                          iVar5 = 3;
                                                        }
                                                        else {
                                                          iVar5 = _stricmp
                                                                            (local_2d4,
                                                                             "suspend");
                                                          if (iVar5 != 0) {
                                                            _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                       "Invalid Task: %s");
                                                            return -1;
                                                          }
                                                          iVar5 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    core_hero_cpp_CHero_setAiTask_FUN_004ec320
                                                              (this_ptr_01,iVar5);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"setIniInt",
                                                                       9);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 9);
                                                  local_7c = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d )%n");
                                                  if (local_7c < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setIniInt command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_7c;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_165c);
                                                  if (g_INT_01e810a8 == 0) {
                                                    engine_ini_cpp_CIniFile_ctor_FUN_004f4b00
                                                              (&local_4720,
                                                               "system\\nocturne.ini",
                                                               "Game");
                                                    engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                                                              (&local_4720,local_165c,local_80);
                                                    engine_ini_cpp_CIniFile_dtor_FUN_004f4b30
                                                              (&local_4720,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"setMouth",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 8);
                                                  local_6c = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %d, %f)%n");
                                                  if (local_6c < 4) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setMouth parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_6c;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_3664);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_3664,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_charactr_cpp_CCharacter_setMouthFrame_FUN_0042e920
                                                            (pCVar10,local_74,local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0x12] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0x12);
                                                  local_68 = -1;
                                                  sscanf
                                                            (local_34," (%n %n");
                                                  if (local_68 < 1) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
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
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                 "Error parsing setSayTimeOverride parameters."
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_68;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    this_ptr->message_duration = local_64;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xc);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_c34,100);
                                                  if (pcVar14 != (char *)0x0) {
LAB_00549af2:
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  core_script_cpp_CScript_findLabelIndex_FUN_0054acc0
                                                            (this_ptr,local_c34);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Undefined label '%s'");
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    this_ptr->saved_cmd_index = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"setSpeaker"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 10);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_4c8,100);
                                                  if (pcVar14 != (char *)0x0) goto LAB_00549af2;
                                                  if (local_4c8[0] == '\0') {
                                                    this_ptr->who_is_speaking = (CDemonActor *)0x0;
                                                  }
                                                  else {
                                                    pCVar11 = core_script_cpp_getActor_FUN_005433c0
                                                                        (local_4c8,
                                                                         g_CCharacterClassInfo.
                                                                         name_hash,
                                                                         &g_CCharacterClassInfo);
                                                    this_ptr->who_is_speaking = pCVar11;
                                                    if (pCVar11 == (CDemonActor *)0x0)
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
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xd] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xd);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_7e8,100);
                                                  if (pcVar14 == (char *)0x0) {
                                                    sscanf
                                                              (local_7e8,"%f");
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Invalid time factor %s");
                                                    return -1;
                                                  }
                                                  pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[9] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 9);
                                                  local_5c = -1;
                                                  sscanf
                                                            (local_34,"(%[^,)]%n");
                                                  if (local_5c < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setVictim command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_5c;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2f5c);
                                                  this_ptr_02 = (CEnemy *)
                                                                                                                                
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_2f5c,g_CEnemyClassInfo.name_hash,
                                                             &g_CEnemyClassInfo);
                                                  if (this_ptr_02 == (CEnemy *)0x0)
                                                  goto joined_r0x00546052;
                                                  pCVar11 = (CDemonActor *)0x0;
                                                  if (*local_34 == ',') {
                                                    local_5c = -1;
                                                    sscanf
                                                              (local_34,", %[^)]%n");
                                                    if (local_5c < 3) {
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                 "Error parsing setVictim command parms")
                                                      ;
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_5c;
                                                    core_script_cpp_trimString_FUN_00543240
                                                              (local_1594);
                                                    iVar5 = _stricmp
                                                                      (local_1594,"disable"
                                                                      );
                                                    pCVar11 = g_CDemonActor_PTR_00604e00;
                                                    if ((iVar5 != 0) &&
                                                       (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_1594,
                                                             g_CCharacterClassInfo.name_hash,
                                                             &g_CCharacterClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x00546052;
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Missing closing ')' in setVictim command");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  if (g_INT_01e810a8 == 0) {
                                                    core_enemy_cpp_CEnemy_setVictim_FUN_004a0ee0
                                                              (this_ptr_02,pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "setWalkTimeout",0xe);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xe] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xe);
                                                  local_54 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %f)%n");
                                                  if (local_54 < 3) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing setWalkTimeout parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_54;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_359c);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_359c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if (pCVar10 == (CCharacter *)0x0)
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                    (*(((pCVar10->base).vtable._uc)->_uc).
                                                      setWalkTimeout)(pCVar10,local_58);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"snapToFace"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 10);
                                                  local_50 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_50 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error snaping turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_50;
                                                  core_script_cpp_trimString_FUN_00543240(local_f54)
                                                  ;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1274);
                                                  local_4c = core_script_cpp_getActor_FUN_005433c0
                                                                       (local_f54,
                                                                        g_CDemonActorClassInfo.
                                                                        name_hash,
                                                                        &g_CDemonActorClassInfo);
                                                  if ((local_4c == (CDemonActor *)0x0) ||
                                                     (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_1274,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                    core_bodypart_cpp_subtractVector_FUN_0041afe0
                                                              (&(pCVar11->location).position,
                                                               &(local_4c->location).position,
                                                               &local_1e4);
                                                    local_190.x = local_1e4.x;
                                                    *(uint *)
                                                     ((int)&local_190 + (uint)bVar17 * -8 + 4) =
                                                         *(uint *)
                                                          ((int)&local_1e4 + (uint)bVar17 * -8 + 4);
                                                    *(uint *)
                                                     ((int)&local_190 +
                                                     (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                                                         *(uint *)
                                                          ((int)&local_1e4 +
                                                          (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8)
                                                    ;
                                                                                                        
                                                  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                                                            (&local_190,&local_184);
                                                  local_1cc = local_184.x;
                                                  local_1c8[(uint)bVar17 * -2] =
                                                       *(float *)((int)&local_184 +
                                                                 (uint)bVar17 * -8 + 4);
                                                  local_1c8[(uint)bVar17 * -2 +
                                                            (uint)bVar17 * -2 + 1] =
                                                       *(float *)((int)&local_184 +
                                                                 (uint)bVar17 * -8 +
                                                                 (uint)bVar17 * -8 + 8);
                                                  (local_4c->orient).vec.y = local_1c8[0];
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
                                                            (local_4c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"startSay",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[8] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 8);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_451c,500);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  local_44 = -1;
                                                  sscanf
                                                            (local_451c,"%[^,], %[^,], %n");
                                                  if (local_44 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing speaker and wav arguments");
                                                    return -1;
                                                  }
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_11ac);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_1724);
                                                  pcVar14 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (local_451c + local_44);
                                                  local_14 = 
                                                  core_script_cpp_CScript_startDialogLine_FUN_0054aa60
                                                            (this_ptr,local_11ac,local_1724,pcVar14)
                                                  ;
                                                  this_ptr->dialog_wav_time = local_14;
                                                  fVar1 = this_ptr->dialog_wav_time;
                                                  goto joined_r0x0054a269;
                                                  }
                                                  iVar5 = _strnicmp
                                                                    (pcVar14,"switchCamera"
                                                                     ,0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xc);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_31b4,200);
                                                  if (pcVar14 != (char *)0x0) {
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  pcVar14 = local_31b4;
                                                  do {
                                                    pcVar16 = pcVar14;
                                                    if (*pcVar14 == ',') goto LAB_0054a2ef;
                                                    if (*pcVar14 == '\0') break;
                                                    pcVar16 = pcVar14 + 1;
                                                    if (*pcVar16 == ',') goto LAB_0054a2ef;
                                                    pcVar14 = pcVar14 + 2;
                                                  } while (*pcVar16 != '\0');
                                                  pcVar16 = (char *)0x0;
LAB_0054a2ef:
                                                  local_40 = -1;
                                                  pcVar15 = &DAT_005efb91;
                                                  local_18 = (uint)(pcVar16 != (char *)0x0);
                                                  iVar5 = -1;
                                                  pcVar14 = local_31b4;
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
                                                            (local_31b4,"%[^,],%n");
                                                  if (local_40 < 1) {
                                                    pcVar14 = "Error parsing out camera name";
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  core_script_cpp_trimString_FUN_00543240(local_270)
                                                  ;
                                                  iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0
                                                            (g_CDemonSetPtr,local_270);
                                                  if ((local_18 != 0) &&
                                                     (sscanf
                                                                (local_31b4 + local_40,"%f")
                                                     , 99999 < 10000000000.0)) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Invalid hold time value");
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_0055b1e0
                                                            (g_CDemonSetPtr,iVar5,1e+10);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,
                                                  "timedDisplay",0xc);
                                                  if ((iVar5 == 0) &&
                                                     ((g_UCHAR_ARRAY_00626114
                                                       [(byte)(pcVar14[0xc] + 1)] & 0xe0) == 0)) {
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 0xc);
                                                  pcVar14 = 
                                                  core_script_cpp_parseArgument_FUN_005432d0
                                                            (&local_34,local_4008,300);
                                                  if (pcVar14 != (char *)0x0) {
LAB_0054a484:
                                                    pcVar16 = g_CHAR_ARRAY_01e810b0;
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
                                                  local_3c = -1;
                                                  sscanf
                                                            (local_4008,"%f,%n");
                                                  if (local_3c < 2) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing time value");
                                                    return -1;
                                                  }
                                                  if (g_INT_01e810a8 == 0) {
                                                    pcVar14 = this_ptr->current_message;
                                                    pcVar16 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (local_4008 + local_3c);
                                                  do {
                                                    cVar2 = *pcVar16;
                                                    *pcVar14 = cVar2;
                                                    if (cVar2 == '\0') break;
                                                    cVar2 = pcVar16[1];
                                                    pcVar16 = pcVar16 + 2;
                                                    pcVar14[1] = cVar2;
                                                    pcVar14 = pcVar14 + 2;
                                                  } while (cVar2 != '\0');
                                                  local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,local_38,time_remaining);
                                                  if (0 < local_164) {
                                                    this_ptr->current_message[0] = '\0';
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"turnToFace"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[10] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 10);
                                                  local_2c = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^)])%n");
                                                  if (local_2c < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing turnToFace command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_2c;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_133c);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2854);
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_133c,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if ((pCVar10 == (CCharacter *)0x0) ||
                                                     (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_2854,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                    (*(((pCVar10->base).vtable._uc)->_uc).
                                                      setWalkTargetImmediate)(pCVar10,pCVar11);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"wait",4);
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[4] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 4);
                                                  local_28 = -1;
                                                  sscanf
                                                            (local_34,"(%f)%n");
                                                  if (local_28 < 1) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing time value on wait statament");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_28;
                                                  if (g_INT_01e810a8 == 0) {
                                                    local_164 = 
                                                  core_script_cpp_CScript_processTimer_FUN_0054ac20
                                                            (this_ptr,local_24,time_remaining);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"waitFor",7)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[7] + 1)] & 0xe0) == 0)) {
                                                      local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 7);
                                                  pcVar14 = 
                                                  core_script_cpp_parseConditionExpr_FUN_00543380
                                                            (&local_34,local_9dc);
                                                  if (pcVar14 != (char *)0x0) goto LAB_0054a484;
                                                  if ((g_INT_01e810a8 == 0) &&
                                                     (iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (g_CEventList_PTR_0061b4d0,local_9dc),
                                                  iVar5 == 0)) {
                                                    local_164 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (pcVar14,"walkTo",6);
                                                    if ((iVar5 != 0) ||
                                                       ((g_UCHAR_ARRAY_00626114
                                                         [(byte)(pcVar14[6] + 1)] & 0xe0) != 0)) {
                                                      pcVar14 = "Unknown command on line %d: %s";
                                                      goto LAB_005445cf;
                                                    }
                                                    local_34 = 
                                                  core_script_cpp_skipWhitespace_FUN_005432b0
                                                            (pcVar14 + 6);
                                                  local_20 = -1;
                                                  sscanf
                                                            (local_34,"(%[^,], %[^,)] %n");
                                                  if (local_20 < 5) {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Error parsing walkTo command parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + local_20;
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2214);
                                                  core_script_cpp_trimString_FUN_00543240
                                                            (local_2084);
                                                  local_1c = 0.0;
                                                  if (*local_34 == ',') {
                                                    local_20 = -1;
                                                    sscanf
                                                              (local_34,",%f %n");
                                                    if (local_20 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_20;
                                                  }
                                                  local_178 = 1e+10;
                                                  if (*local_34 == ',') {
                                                    local_20 = -1;
                                                    sscanf
                                                              (local_34,",%f %n");
                                                    if (local_20 < 1) {
                                                      _sprintf(g_CHAR_ARRAY_01e810b0,
                                                                 "Error parsing walkTo command parms"
                                                                );
                                                      return -1;
                                                    }
                                                    local_34 = local_34 + local_20;
                                                  }
                                                  if (*local_34 != ')') {
                                                    _sprintf(g_CHAR_ARRAY_01e810b0,
                                                               "Missing closing parenthesis on walkTo parms");
                                                    return -1;
                                                  }
                                                  local_34 = local_34 + 1;
                                                  pCVar10 = (CCharacter *)
                                                            core_script_cpp_getActor_FUN_005433c0
                                                                      (local_2214,
                                                                       g_CCharacterClassInfo.
                                                                       name_hash,
                                                                       &g_CCharacterClassInfo);
                                                  if ((pCVar10 == (CCharacter *)0x0) ||
                                                     (pCVar11 = 
                                                  core_script_cpp_getActor_FUN_005433c0
                                                            (local_2084,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             &g_CDemonActorClassInfo),
                                                  pCVar11 == (CDemonActor *)0x0))
                                                  goto joined_r0x00546052;
                                                  if (g_INT_01e810a8 == 0) {
                                                    (*(((pCVar10->base).vtable._uc)->_uc).
                                                      setWalkTarget)(pCVar10,pCVar11,local_1c,
                                                                     local_178);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  if ((g_INT_01e810a8 != 2) && (*local_30 != '\0')) {
    _sprintf(g_CHAR_ARRAY_01e810b0,"Extra characters \"%s\" on line %d");
    return -1;
  }
LAB_00544524:
  if (local_160 == 1) {
    this_ptr->dialog_wav_time = -1.0;
    iVar5 = g_INT_01e810a8;
    this_ptr->cmd_timer = -1.0;
    if ((iVar5 == 0) && (this_ptr->parsed_line_count <= this_ptr->next_cmd)) {
      _sprintf(g_CHAR_ARRAY_01e810b0,"Overrun past the end of the script.");
      return -1;
    }
  }
  else if (-1 < local_160) {
    this_ptr->next_cmd = local_2c;
    return local_160;
  }
  return local_160;
}
