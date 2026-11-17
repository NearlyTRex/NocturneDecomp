// Name: core_event.cpp_CEventList_executeCommand_FUN_00489670
// Address: 00489670
// Address Range: [[00489670, 0048e2a8]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommand_FUN_00489670(CEventList *this_ptr,char *command_buffer)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_event_cpp_CEventList_executeCommand_FUN_00489670(CEventList *this_ptr,char *command_buffer)

{
  byte *pbVar1;
  UOrientationVector *pUVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CDemonActor *pCVar7;
  int iVar8;
  CCharacter *pCVar9;
  CDemonActor *pCVar10;
  byte *pbVar11;
  byte *puVar12;
  int iVar13;
  CDoor *this_ptr_00;
  EDoorState state;
  CLever *this_ptr_01;
  CMotionList *pCVar14;
  EWeatherType type;
  SMotion *pSVar15;
  CHero *pCVar16;
  uint uVar17;
  uint uVar18;
  SIZE_T SVar19;
  int *piVar20;
  char *pcVar21;
  char *pcVar22;
  char (*str1) [32];
  CPuzzle *puzzle;
  byte bVar23;
  uint in_stack_ffffd64c;
  char local_28b5 [257];
  char local_27b4 [255];
  char local_26b5 [256];
  char local_25b5 [256];
  char local_24b5 [256];
  char local_23b5 [256];
  char local_22b5 [256];
  char local_21b5 [256];
  char local_20b5 [257];
  char local_1fb4 [255];
  char local_1eb5 [256];
  char local_1db5 [200];
  char local_1ced [200];
  char local_1c25 [200];
  char local_1b5d [200];
  char local_1a95 [201];
  char local_19cc [199];
  char local_1905 [200];
  char local_183d [200];
  char local_1775 [200];
  char local_16ad [200];
  char local_15e5 [200];
  char local_151d [200];
  char local_1455 [200];
  char local_138d [201];
  char local_12c4 [199];
  char local_11fd [200];
  char local_1135 [200];
  char local_106d [200];
  char local_fa5 [200];
  char local_edd [200];
  char local_e15 [201];
  char local_d4c [199];
  char local_c85 [200];
  char local_bbd [200];
  char local_af5 [200];
  char local_a2d [200];
  char local_965 [200];
  char local_89d [200];
  char local_7d5 [200];
  char local_70d [200];
  char local_645 [200];
  char local_57d [2];
  uint local_57b [49];
  char local_4b5 [201];
  char local_3ec [99];
  char local_389 [100];
  char local_325 [101];
  char local_2c0 [100];
  CMatrix3x4f local_25c;
  char local_22c [32];
  char local_20c [32];
  char local_1ec [32];
  char local_1cc [32];
  CLocation local_1ac;
  CVector3f local_19c;
  CVector3f local_190;
  CVector3f local_184;
  float local_178;
  float local_174;
  float local_170;
  CVector3f local_16c;
  CVector3f local_160;
  uint local_154;
  uint uStack_150;
  char *local_14c;
  uint local_148;
  byte *local_144;
  int local_140;
  int local_13c;
  int local_138;
  CDemonLight *local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  float local_120;
  int local_11c;
  int local_118;
  int local_114;
  float local_110;
  int local_10c;
  int local_108;
  CCharacter *local_104;
  int local_100;
  int local_fc;
  int local_f8;
  float local_f4;
  float local_f0;
  int local_ec;
  float local_e8;
  float local_e4;
  int local_e0;
  int local_dc;
  float local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  CVector3f *local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  float local_b0;
  int local_ac;
  float local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  float local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  C3DSLight *local_68;
  CDemonLight *local_64;
  int local_60;
  C3DSLight *local_5c;
  int local_58;
  float local_54;
  int local_50;
  float local_4c;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar23 = 0;
  g_EventErrorMessageBuffer[0] = '\0';
  if (((command_buffer != (char *)0x0) && (*command_buffer != '\0')) &&
     (iVar5 = _stricmp(command_buffer,"none"), iVar5 != 0)) {
    if (*command_buffer == '.') {
      command_buffer = command_buffer + 1;
    }
    local_148 = (uint)(g_EventDryRun == 0);
    local_144 = (byte *)&g_CHAR_005d2ffe;
    pcVar22 = command_buffer;
    do {
      pcVar21 = pcVar22;
      if (*pcVar22 == '(') goto LAB_004896f7;
      if (*pcVar22 == '\0') break;
      pcVar21 = pcVar22 + 1;
      if (*pcVar21 == '(') goto LAB_004896f7;
      pcVar22 = pcVar22 + 2;
    } while (*pcVar21 != '\0');
    pcVar21 = (char *)0x0;
LAB_004896f7:
    if (pcVar21 == (char *)0x0) {
      iVar5 = 0;
      if (0 < (this_ptr->events).count) {
        str1 = (this_ptr->events).names;
        do {
          iVar6 = _stricmp(*str1,command_buffer);
          if (iVar6 == 0) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          str1 = str1 + 1;
        } while (iVar5 < (this_ptr->events).count);
      }
      uVar17 = 0xffffffff;
      pcVar22 = command_buffer;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar3 = *pcVar22;
        pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
      } while (cVar3 != '\0');
      if (0x1f < ~uVar17 - 1) {
        iVar5 = core_event_cpp_formatEventError_FUN_00488ba0("Event name %s is too long");
        return iVar5;
      }
      if (99 < (this_ptr->events).count) {
        g_CHAR_PTR_01d046a0 = "..\\core\\event.cpp";
        g_INT_01d046a4 = 0x26b;
        core_main_c_displayErrorAndQuit_FUN_004e4500("Too many events");
      }
      pcVar21 = (this_ptr->events).names[(this_ptr->events).count];
      local_14 = 0;
      pcVar22 = pcVar21;
      do {
        cVar3 = *command_buffer;
        *pcVar22 = cVar3;
        local_14c = pcVar21;
        if (cVar3 == '\0') break;
        cVar3 = command_buffer[1];
        command_buffer = command_buffer + 2;
        pcVar22[1] = cVar3;
        pcVar22 = pcVar22 + 2;
      } while (cVar3 != '\0');
      do {
        uVar17 = local_14;
        uVar18 = 0xffffffff;
        pcVar22 = local_14c;
        do {
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          cVar3 = *pcVar22;
          pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
        } while (cVar3 != '\0');
        if (~uVar18 - 1 <= local_14) {
          if (local_148 == 0) {
            return 1;
          }
          (this_ptr->events).count = (this_ptr->events).count + 1;
          return 1;
        }
        iVar5 = toupper((uint)(byte)*pcVar21);
        *pcVar21 = (byte)iVar5;
        iVar5 = core_event_cpp_isValidIdentifierChar_FUN_00491c70((uint)(byte)*pcVar21);
        if (iVar5 == 0) {
          iVar5 = core_event_cpp_formatEventError_FUN_00488ba0("Event name %s is not valid");
          return iVar5;
        }
        local_14 = uVar17 + 1;
        pcVar21 = pcVar21 + 1;
      } while( true );
    }
    iVar5 = _strnicmp(command_buffer,"activateGadget",0xe);
    if ((iVar5 == 0) &&
       ((g_CharacterClassificationTable[(byte)(command_buffer[0xe] + 1)] & 0xe0) == 0)) {
      local_144 = (byte *)(command_buffer + 0xe);
      while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
        local_144 = local_144 + 1;
      }
      local_140 = -1;
      sscanf((char *)local_144,"(%[^,], %[^,], %n");
      if (local_140 < 3) {
        iVar5 = core_event_cpp_formatEventError_FUN_00488ba0("Error parsing activateGadget command");
        return iVar5;
      }
      local_144 = local_144 + local_140;
      uVar17 = 0xffffffff;
      pcVar22 = local_21b5 + 1;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar3 = *pcVar22;
        pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
      } while (cVar3 != '\0');
      SVar19 = ~uVar17 - 1;
      if (0 < (int)SVar19) {
        pcVar22 = local_21b5 + ~uVar17;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
          SVar19 = SVar19 - 1;
          pcVar22 = pcVar22 + -1;
        } while (0 < (int)SVar19);
      }
      (local_21b5 + 1)[SVar19] = '\0';
      while ((g_CharacterClassificationTable[(byte)(local_21b5[1] + 1)] & 2) != 0) {
        memmove(local_21b5 + 1,local_21b5 + 2,SVar19);
        SVar19 = SVar19 - 1;
      }
      uVar17 = 0xffffffff;
      pcVar22 = local_25b5 + 1;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar3 = *pcVar22;
        pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
      } while (cVar3 != '\0');
      SVar19 = ~uVar17 - 1;
      if (0 < (int)SVar19) {
        pcVar22 = local_25b5 + ~uVar17;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
          SVar19 = SVar19 - 1;
          pcVar22 = pcVar22 + -1;
        } while (0 < (int)SVar19);
      }
      (local_25b5 + 1)[SVar19] = '\0';
      while ((g_CharacterClassificationTable[(byte)(local_25b5[1] + 1)] & 2) != 0) {
        memmove(local_25b5 + 1,local_25b5 + 2,SVar19);
        SVar19 = SVar19 - 1;
      }
      pcVar22 = core_event_cpp_extractParenArg_FUN_00488fc0
                          ((char **)&local_144,local_20b5 + 1,0x100,0);
      if (pcVar22 != (char *)0x0) goto LAB_00489a3d;
      uVar17 = 0xffffffff;
      pcVar22 = local_20b5 + 1;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar3 = *pcVar22;
        pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
      } while (cVar3 != '\0');
      SVar19 = ~uVar17 - 1;
      if (0 < (int)SVar19) {
        pcVar22 = local_20b5 + ~uVar17;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
          SVar19 = SVar19 - 1;
          pcVar22 = pcVar22 + -1;
        } while (0 < (int)SVar19);
      }
      (local_20b5 + 1)[SVar19] = '\0';
      while ((g_CharacterClassificationTable[(byte)(local_20b5[1] + 1)] & 2) != 0) {
        memmove(local_20b5 + 1,local_20b5 + 2,SVar19);
        SVar19 = SVar19 - 1;
      }
      pCVar7 = core_event_cpp_resolveActorByName_FUN_00488d00
                         (local_21b5 + 1,g_CHeroClassInfo.name_hash,g_CHeroClassInfo.class_name);
      if (pCVar7 == (CDemonActor *)0x0) {
        return 0;
      }
      if (pCVar7 == g_ActorNameSentinel) {
        local_148 = 0;
      }
      piVar20 = (int *)0x0;
      iVar5 = _stricmp(local_25b5 + 1,"compass");
      if (iVar5 == 0) {
        piVar20 = &pCVar7[0xd6].scale.y;
      }
      iVar5 = _stricmp(local_25b5 + 1,"sps");
      if (iVar5 == 0) {
        piVar20 = &pCVar7[0xd6].scale.z;
      }
      if (piVar20 == (int *)0x0) {
        iVar5 = core_event_cpp_formatEventError_FUN_00488ba0("Invalid gadget type: %s");
        return iVar5;
      }
      if (g_EventDryRun == 0) {
        if (local_148 != 0) {
          iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(this_ptr,local_20b5 + 1);
          *piVar20 = iVar5;
        }
      }
      else {
        pcVar22 = core_event_cpp_CEventList_validateCondition_FUN_0048e3a0(this_ptr,local_20b5 + 1);
        if (pcVar22 != (char *)0x0) {
          return 0;
        }
      }
    }
    else {
      iVar5 = _strnicmp(command_buffer,"activatePuzzle",0xe);
      if ((iVar5 == 0) &&
         ((g_CharacterClassificationTable[(byte)(command_buffer[0xe] + 1)] & 0xe0) == 0)) {
        local_144 = (byte *)(command_buffer + 0xe);
        while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
          local_144 = local_144 + 1;
        }
        local_13c = -1;
        sscanf((char *)local_144,"(%[^)])%n");
        if (local_13c < 3) {
          iVar5 = core_event_cpp_formatEventError_FUN_00488ba0("Error parsing activatePuzzle command");
          return iVar5;
        }
        local_144 = local_144 + local_13c;
        uVar17 = 0xffffffff;
        pcVar22 = local_26b5 + 1;
        do {
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          cVar3 = *pcVar22;
          pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
        } while (cVar3 != '\0');
        SVar19 = ~uVar17 - 1;
        if (0 < (int)SVar19) {
          pcVar22 = local_26b5 + ~uVar17;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
            SVar19 = SVar19 - 1;
            pcVar22 = pcVar22 + -1;
          } while (0 < (int)SVar19);
        }
        (local_26b5 + 1)[SVar19] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_26b5[1] + 1)] & 2) != 0) {
          memmove(local_26b5 + 1,local_26b5 + 2,SVar19);
          SVar19 = SVar19 - 1;
        }
        iVar5 = 0;
        puzzle = (CPuzzle *)0x0;
        if (0 < g_INT_ARRAY_026677b4[0]) {
          iVar6 = 0;
          do {
            pcVar22 = (char *)(**(code **)(**(int **)(iVar6 + 0x26677b8) + 4))();
            iVar8 = _stricmp(local_26b5 + 1,pcVar22);
            if (iVar8 == 0) {
              puzzle = *(CPuzzle **)(iVar6 + 0x26677b8);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar5 < g_INT_ARRAY_026677b4[0]);
        }
        if (puzzle == (CPuzzle *)0x0) {
          iVar5 = core_event_cpp_formatEventError_FUN_00488ba0("No such puzzle '%s'");
          return iVar5;
        }
        if (local_148 != 0) {
          if (g_INT_026677e0 != 0) {
            core_bmppuzzl_cpp_activatePuzzle_FUN_0059ab70((CPuzzle *)g_INT_026677e0,0);
          }
          core_bmppuzzl_cpp_activatePuzzle_FUN_0059ab70(puzzle,1);
        }
      }
      else {
        iVar5 = _strnicmp
                          (command_buffer,"addFieldNotesTask",0x11);
        if ((iVar5 == 0) &&
           ((g_CharacterClassificationTable[(byte)(command_buffer[0x11] + 1)] & 0xe0) == 0)) {
          local_144 = (byte *)(command_buffer + 0x11);
          while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
            local_144 = local_144 + 1;
          }
          local_138 = -1;
          sscanf((char *)local_144,"(%[^)])%n");
          if (local_138 < 3) {
            iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                              ("Error parsing addFieldNotesTask command");
            return iVar5;
          }
          local_144 = local_144 + local_138;
          uVar17 = 0xffffffff;
          pcVar22 = local_23b5 + 1;
          do {
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            cVar3 = *pcVar22;
            pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
          } while (cVar3 != '\0');
          SVar19 = ~uVar17 - 1;
          if (0 < (int)SVar19) {
            pcVar22 = local_23b5 + ~uVar17;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
              SVar19 = SVar19 - 1;
              pcVar22 = pcVar22 + -1;
            } while (0 < (int)SVar19);
          }
          (local_23b5 + 1)[SVar19] = '\0';
          while ((g_CharacterClassificationTable[(byte)(local_23b5[1] + 1)] & 2) != 0) {
            memmove(local_23b5 + 1,local_23b5 + 2,SVar19);
            SVar19 = SVar19 - 1;
          }
          if (g_EventDryRun != 0) {
            iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004a5430
                              (g_CFieldNotesPtr,local_23b5 + 1);
            switch(iVar5) {
            default:
              iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                ("Field notes entry '%s' is not a task");
              return iVar5;
            case 2:
            case 3:
            case 4:
              goto switchD_00489e7e_caseD_2;
            case -1:
              iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                ("Field notes entry '%s' not found");
              return iVar5;
            }
          }
          core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004a5310(g_CFieldNotesPtr,local_23b5 + 1);
        }
        else {
          iVar5 = _strnicmp
                            (command_buffer,"advanceLightFilter",0x12);
          if ((iVar5 == 0) &&
             ((g_CharacterClassificationTable[(byte)(command_buffer[0x12] + 1)] & 0xe0) == 0)) {
            local_144 = (byte *)(command_buffer + 0x12);
            while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
              local_144 = local_144 + 1;
            }
            pcVar22 = core_event_cpp_extractParenArg_FUN_00488fc0
                                ((char **)&local_144,local_d4c,200,1);
            if (pcVar22 != (char *)0x0) goto LAB_00489a3d;
            core_set_cpp_CDemonSet_addLightFilter_FUN_00534770
                      (g_CDemonSetPtr,local_d4c,&local_5c,&local_134);
            if (local_5c == (C3DSLight *)0x0) {
              iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                ("SpotLight %s doesn't exist.");
              return iVar5;
            }
            if (local_148 != 0) {
              if (local_134 == (CDemonLight *)0x0) {
                g_CHAR_PTR_01d046a0 = "..\\core\\event.cpp";
                g_INT_01d046a4 = 0x31c;
                core_main_c_displayErrorAndQuit_FUN_004e4500("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
              }
              core_setutil_cpp_C3DSLight_advanceFilter_FUN_0053ba90(local_5c,local_134);
            }
          }
          else {
            iVar5 = _strnicmp
                              (command_buffer,"beginCarryItem",0xe);
            if ((iVar5 == 0) &&
               ((g_CharacterClassificationTable[(byte)(command_buffer[0xe] + 1)] & 0xe0) == 0)) {
              local_144 = (byte *)(command_buffer + 0xe);
              while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                local_144 = local_144 + 1;
              }
              local_12c = -1;
              sscanf((char *)local_144,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n");
              if (local_12c < 0) {
                iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                  ("Error parsing beginCarryItem() parms");
                return iVar5;
              }
              local_144 = local_144 + local_12c;
              uVar17 = 0xffffffff;
              pcVar22 = local_c85 + 1;
              do {
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                cVar3 = *pcVar22;
                pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
              } while (cVar3 != '\0');
              SVar19 = ~uVar17 - 1;
              if (0 < (int)SVar19) {
                pcVar22 = local_c85 + ~uVar17;
                do {
                  if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
                  SVar19 = SVar19 - 1;
                  pcVar22 = pcVar22 + -1;
                } while (0 < (int)SVar19);
              }
              (local_c85 + 1)[SVar19] = '\0';
              while ((g_CharacterClassificationTable[(byte)(local_c85[1] + 1)] & 2) != 0) {
                memmove(local_c85 + 1,local_c85 + 2,SVar19);
                SVar19 = SVar19 - 1;
              }
              uVar17 = 0xffffffff;
              pcVar22 = local_106d + 1;
              do {
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                cVar3 = *pcVar22;
                pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
              } while (cVar3 != '\0');
              SVar19 = ~uVar17 - 1;
              if (0 < (int)SVar19) {
                pcVar22 = local_106d + ~uVar17;
                do {
                  if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
                  SVar19 = SVar19 - 1;
                  pcVar22 = pcVar22 + -1;
                } while (0 < (int)SVar19);
              }
              (local_106d + 1)[SVar19] = '\0';
              while ((g_CharacterClassificationTable[(byte)(local_106d[1] + 1)] & 2) != 0) {
                memmove(local_106d + 1,local_106d + 2,SVar19);
                SVar19 = SVar19 - 1;
              }
              if ((local_130 < 0) || (1 < local_130)) {
                iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                  ("Invalid hand index: %d");
                return iVar5;
              }
              pCVar9 = (CCharacter *)
                       core_event_cpp_resolveActorByName_FUN_00488d00
                                 (local_106d + 1,g_CCharacterClassInfo.name_hash,
                                  g_CCharacterClassInfo.class_name);
              if (pCVar9 == (CCharacter *)0x0) {
                return 0;
              }
              if (pCVar9 == (CCharacter *)g_ActorNameSentinel) {
                local_148 = 0;
              }
              else if (pCVar9->carry_hands[local_130].bone_index < 0) {
                iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                  ("%s doesn't have hand %d");
                return iVar5;
              }
              pCVar7 = core_event_cpp_resolveActorByName_FUN_00488d00
                                 (local_c85 + 1,g_CDemonActorClassInfo.name_hash,
                                  g_CDemonActorClassInfo.class_name);
              if (pCVar7 == (CDemonActor *)0x0) {
                return 0;
              }
              if ((pCVar7 != g_ActorNameSentinel) && (local_148 != 0)) {
                core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                          (&local_25c,&local_190,&local_160);
                core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
                          (pCVar9,local_130,pCVar7,0.0,&local_25c);
              }
            }
            else {
              iVar5 = _strnicmp
                                (command_buffer,"completeFieldNotesTask",0x16);
              if ((iVar5 == 0) &&
                 ((g_CharacterClassificationTable[(byte)(command_buffer[0x16] + 1)] & 0xe0) == 0)) {
                local_144 = (byte *)(command_buffer + 0x16);
                while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                  local_144 = local_144 + 1;
                }
                local_128 = -1;
                sscanf((char *)local_144,"(%[^)])%n");
                if (local_128 < 3) {
                  iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                    ("Error parsing completeFieldNotesTask command");
                  return iVar5;
                }
                local_144 = local_144 + local_128;
                uVar17 = 0xffffffff;
                pcVar22 = local_22b5 + 1;
                do {
                  if (uVar17 == 0) break;
                  uVar17 = uVar17 - 1;
                  cVar3 = *pcVar22;
                  pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                } while (cVar3 != '\0');
                SVar19 = ~uVar17 - 1;
                if (0 < (int)SVar19) {
                  pcVar22 = local_22b5 + ~uVar17;
                  do {
                    if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
                    SVar19 = SVar19 - 1;
                    pcVar22 = pcVar22 + -1;
                  } while (0 < (int)SVar19);
                }
                (local_22b5 + 1)[SVar19] = '\0';
                while ((g_CharacterClassificationTable[(byte)(local_22b5[1] + 1)] & 2) != 0) {
                  memmove(local_22b5 + 1,local_22b5 + 2,SVar19);
                  SVar19 = SVar19 - 1;
                }
                if (g_EventDryRun != 0) {
                  iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004a5430
                                    (g_CFieldNotesPtr,local_22b5 + 1);
                  switch(iVar5) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Field notes entry '%s' is not a task");
                    return iVar5;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_00489e7e_caseD_2;
                  default:
                    iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Field notes entry '%s' not found");
                    return iVar5;
                  }
                }
                core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004a55b0
                          (g_CFieldNotesPtr,local_22b5 + 1);
              }
              else {
                iVar5 = _strnicmp
                                  (command_buffer,"createExplosion",0xf);
                if ((iVar5 == 0) &&
                   ((g_CharacterClassificationTable[(byte)(command_buffer[0xf] + 1)] & 0xe0) == 0))
                {
                  local_144 = (byte *)(command_buffer + 0xf);
                  while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                    local_144 = local_144 + 1;
                  }
                  local_124 = -1;
                  sscanf((char *)local_144,"( %f , %n");
                  if (local_124 < 0) {
                    iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Error parsing createExplosion() parms");
                    return iVar5;
                  }
                  local_144 = local_144 + local_124;
                  local_124 = -1;
                  sscanf((char *)local_144,"%f , %f , %f %n");
                  if ((local_124 < 0) &&
                     (sscanf((char *)local_144," %[^,)] %n"),
                     -1 < local_124)) {
                    uVar17 = 0xffffffff;
                    pcVar22 = local_4b5 + 1;
                    do {
                      if (uVar17 == 0) break;
                      uVar17 = uVar17 - 1;
                      cVar3 = *pcVar22;
                      pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                    } while (cVar3 != '\0');
                    SVar19 = ~uVar17 - 1;
                    if (0 < (int)SVar19) {
                      pcVar22 = local_4b5 + ~uVar17;
                      do {
                        if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0)
                        break;
                        SVar19 = SVar19 - 1;
                        pcVar22 = pcVar22 + -1;
                      } while (0 < (int)SVar19);
                    }
                    (local_4b5 + 1)[SVar19] = '\0';
                    while ((g_CharacterClassificationTable[(byte)(local_4b5[1] + 1)] & 2) != 0) {
                      memmove(local_4b5 + 1,local_4b5 + 2,SVar19);
                      SVar19 = SVar19 - 1;
                    }
                    pCVar7 = core_event_cpp_resolveActorByName_FUN_00488d00
                                       (local_4b5 + 1,g_CDemonActorClassInfo.name_hash,
                                        g_CDemonActorClassInfo.class_name);
                    if (pCVar7 == (CDemonActor *)0x0) {
                      return 0;
                    }
                    if (pCVar7 == g_ActorNameSentinel) {
                      local_148 = 0;
                    }
                    else if ((CLocation *)&local_19c != &pCVar7->location) {
                      local_19c.x = (pCVar7->location).position.x;
                      local_19c.y = (pCVar7->location).position.y;
                      local_19c.z = (pCVar7->location).position.z;
                    }
                  }
                  if (local_124 < 0) {
                    iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Error parsing createExplosion() parms");
                    return iVar5;
                  }
                  local_144 = local_144 + local_124;
                  while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                    local_144 = local_144 + 1;
                  }
                  local_120 = 4.0;
                  if (*local_144 == 0x2c) {
                    local_124 = -1;
                    sscanf((char *)local_144,", %f %n");
                    if (local_124 < 0) {
                      iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                        ("Error parsing createExplosion() parms");
                      return iVar5;
                    }
                    local_144 = local_144 + local_124;
                    while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                      local_144 = local_144 + 1;
                    }
                  }
                  if (*local_144 != 0x29) {
                    iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Error parsing createExplosion() parms, expected matching ')'");
                    return iVar5;
                  }
                  local_144 = local_144 + 1;
                  if (local_148 != 0) {
                    core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360
                              (g_CFireEffectPtr,&local_19c,local_40,1500.0,local_120);
                  }
                }
                else {
                  iVar5 = _strnicmp
                                    (command_buffer,"deleteActor",0xb);
                  if ((iVar5 == 0) &&
                     ((g_CharacterClassificationTable[(byte)(command_buffer[0xb] + 1)] & 0xe0) == 0)
                     ) {
                    local_144 = (byte *)(command_buffer + 0xb);
                    while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                      local_144 = local_144 + 1;
                    }
                    pcVar22 = core_event_cpp_extractParenArg_FUN_00488fc0
                                        ((char **)&local_144,local_12c4,200,1);
                    if (pcVar22 != (char *)0x0) goto LAB_00489a3d;
                    pCVar7 = core_event_cpp_resolveActorByName_FUN_00488d00
                                       (local_12c4,g_CDemonActorClassInfo.name_hash,
                                        g_CDemonActorClassInfo.class_name);
                    uVar17 = g_CBoxActorClassInfo.name_hash;
                    if (pCVar7 == (CDemonActor *)0x0) {
                      if (g_EventDryRun != 0) {
                        return 0;
                      }
                      local_148 = 0;
                    }
                    if ((pCVar7 != g_ActorNameSentinel) && (local_148 != 0)) {
                      pCVar7->lifecycle_state = ACTOR_DESTROYED;
                      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar7,uVar17);
                      if (pCVar10 != (CDemonActor *)0x0) {
                        fVar4 = pCVar10[1].particle_systems[1].fade_current;
                        *(byte *)&pCVar10[1].particle_systems[0].fade_end = 0;
                        sound_sndmain_cpp_killSfx_FUN_00551050((uint)fVar4);
                      }
                      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                         (pCVar7,g_CChainClassInfo.name_hash);
                      if (pCVar7 != (CDemonActor *)0x0) {
                        uVar17 = pCVar7[1].dead2;
                        *(byte *)&pCVar7[1].orient_matrix.m[2].z = 0;
                        pCVar7[1].create_event[0x4c] = '\0';
                        sound_sndmain_cpp_killSfx_FUN_00551050(uVar17);
                      }
                    }
                  }
                  else {
                    iVar5 = _strnicmp
                                      (command_buffer,"displayBitmap",0xd);
                    if ((iVar5 == 0) &&
                       ((g_CharacterClassificationTable[(byte)(command_buffer[0xd] + 1)] & 0xe0) ==
                        0)) {
                      local_144 = (byte *)(command_buffer + 0xd);
                      while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                        local_144 = local_144 + 1;
                      }
                      local_114 = -1;
                      sscanf((char *)local_144,"( %[^ ,] , %d , %d%n");
                      if (local_114 < 0) {
                        iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                          ("Error parsing displayBitmap() parms");
                        return iVar5;
                      }
                      local_144 = local_144 + local_114;
                      while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                        local_144 = local_144 + 1;
                      }
                      local_110 = 0.0;
                      pbVar11 = local_144;
                      if (*local_144 == 0x2c) {
                        local_114 = -1;
                        sscanf((char *)local_144,", %f %n");
                        if (local_114 < 1) {
                          _sprintf(g_EventErrorMessageBuffer,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pbVar11 = local_144 + local_114;
                        while ((g_CharacterClassificationTable[(byte)(*pbVar11 + 1)] & 2) != 0) {
                          pbVar11 = pbVar11 + 1;
                        }
                      }
                      do {
                        local_144 = pbVar11;
                        pbVar11 = local_144 + 1;
                      } while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0);
                      if (*local_144 != 0x29) {
                        _sprintf(g_EventErrorMessageBuffer,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_144 = local_144 + 1;
                      iVar5 = engine_dosio_cpp_getFileSize_FUN_00460aa0("art",local_1fb4);
                      if (iVar5 < 0) {
                        iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                          ("Bitmap doesn't exist");
                        return iVar5;
                      }
                      if (iVar5 != local_11c * local_118) {
                        iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                          ("Bitmap file size does not match specified dimensions");
                        return iVar5;
                      }
                      if (local_148 != 0) {
                        core_game_cpp_CGame_displayBitmap_FUN_004bcb50
                                  (g_CGamePtr,local_1fb4,local_11c,local_118,local_110);
                      }
                    }
                    else {
                      iVar5 = _strnicmp
                                        (command_buffer,"displayFieldNotes",0x11);
                      if ((iVar5 == 0) &&
                         ((g_CharacterClassificationTable[(byte)(command_buffer[0x11] + 1)] & 0xe0)
                          == 0)) {
                        local_144 = (byte *)(command_buffer + 0x11);
                        while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
                          local_144 = local_144 + 1;
                        }
                        local_10c = -1;
                        sscanf((char *)local_144,"(%[^)])%n");
                        if (local_10c < 5) {
                          _sprintf(g_EventErrorMessageBuffer,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_144 = local_144 + local_10c;
                        uVar17 = 0xffffffff;
                        pcVar22 = local_1b5d + 1;
                        do {
                          if (uVar17 == 0) break;
                          uVar17 = uVar17 - 1;
                          cVar3 = *pcVar22;
                          pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                        } while (cVar3 != '\0');
                        SVar19 = ~uVar17 - 1;
                        if (0 < (int)SVar19) {
                          pcVar22 = local_1b5d + ~uVar17;
                          do {
                            if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0)
                            break;
                            SVar19 = SVar19 - 1;
                            pcVar22 = pcVar22 + -1;
                          } while (0 < (int)SVar19);
                        }
                        (local_1b5d + 1)[SVar19] = '\0';
                        while ((g_CharacterClassificationTable[(byte)(local_1b5d[1] + 1)] & 2) != 0)
                        {
                          memmove(local_1b5d + 1,local_1b5d + 2,SVar19);
                          SVar19 = SVar19 - 1;
                        }
                        if (local_148 == 0) {
                          pcVar22 = core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                              (this_ptr,local_1b5d + 1);
                          if (pcVar22 != (char *)0x0) {
                            return 0;
                          }
                        }
                        else {
                          iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                            (g_CEventListPtr,local_1b5d + 1);
                          g_CFieldNotesPtr->is_displayed = iVar5;
                        }
                      }
                      else {
                        iVar5 = _strnicmp
                                          (command_buffer,"dropItem",8);
                        if ((iVar5 == 0) &&
                           ((g_CharacterClassificationTable[(byte)(command_buffer[8] + 1)] & 0xe0)
                            == 0)) {
                          local_144 = (byte *)(command_buffer + 8);
                          while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0)
                          {
                            local_144 = local_144 + 1;
                          }
                          local_108 = -1;
                          sscanf((char *)local_144,"( %[^,],%n");
                          if (local_108 < 0) {
                            iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                              ("Error parsing dropItem() parms");
                            return iVar5;
                          }
                          local_144 = local_144 + local_108;
                          uVar17 = 0xffffffff;
                          pcVar22 = local_11fd + 1;
                          do {
                            if (uVar17 == 0) break;
                            uVar17 = uVar17 - 1;
                            cVar3 = *pcVar22;
                            pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                          } while (cVar3 != '\0');
                          SVar19 = ~uVar17 - 1;
                          if (0 < (int)SVar19) {
                            pcVar22 = local_11fd + ~uVar17;
                            do {
                              if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) == 0
                                 ) break;
                              SVar19 = SVar19 - 1;
                              pcVar22 = pcVar22 + -1;
                            } while (0 < (int)SVar19);
                          }
                          (local_11fd + 1)[SVar19] = '\0';
                          while ((g_CharacterClassificationTable[(byte)(local_11fd[1] + 1)] & 2) !=
                                 0) {
                            memmove(local_11fd + 1,local_11fd + 2,SVar19);
                            SVar19 = SVar19 - 1;
                          }
                          local_104 = (CCharacter *)
                                      core_event_cpp_resolveActorByName_FUN_00488d00
                                                (local_11fd + 1,g_CCharacterClassInfo.name_hash,
                                                 g_CCharacterClassInfo.class_name);
                          if (local_104 == (CCharacter *)0x0) {
                            return 0;
                          }
                          if (local_104 == (CCharacter *)g_ActorNameSentinel) {
                            local_148 = 0;
                          }
                          local_108 = -1;
                          local_100 = -1;
                          sscanf((char *)local_144,"%d )%n");
                          if (local_108 < 1) {
                            sscanf((char *)local_144,"%[^)])%n");
                            if (local_108 < 0) {
                              iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                ("Error parsing dropItem() parms");
                              return iVar5;
                            }
                            uVar17 = 0xffffffff;
                            pcVar22 = local_645 + 1;
                            do {
                              if (uVar17 == 0) break;
                              uVar17 = uVar17 - 1;
                              cVar3 = *pcVar22;
                              pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                            } while (cVar3 != '\0');
                            SVar19 = ~uVar17 - 1;
                            if (0 < (int)SVar19) {
                              pcVar22 = local_645 + ~uVar17;
                              do {
                                if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) ==
                                    0) break;
                                SVar19 = SVar19 - 1;
                                pcVar22 = pcVar22 + -1;
                              } while (0 < (int)SVar19);
                            }
                            (local_645 + 1)[SVar19] = '\0';
                            while ((g_CharacterClassificationTable[(byte)(local_645[1] + 1)] & 2) !=
                                   0) {
                              memmove(local_645 + 1,local_645 + 2,SVar19);
                              SVar19 = SVar19 - 1;
                            }
                            local_100 = -1;
                            iVar5 = local_100;
                            if (local_104 != (CCharacter *)g_ActorNameSentinel) {
                              iVar6 = 0;
                              pCVar9 = local_104;
                              do {
                                pCVar7 = pCVar9->carry_hands[0].carry_actor;
                                if ((pCVar7 != (CDemonActor *)0x0) &&
                                   (iVar8 = _stricmp
                                                      (pCVar7->actor_name,local_645 + 1),
                                   iVar5 = iVar6, iVar8 == 0)) break;
                                iVar6 = iVar6 + 1;
                                pCVar9 = (CCharacter *)(pCVar9->base).create_event;
                                iVar5 = local_100;
                              } while (iVar6 < 2);
                            }
                          }
                          else if ((local_100 < 0) || (iVar5 = local_100, 1 < local_100)) {
                            iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                              ("Invalid hand index: %d");
                            return iVar5;
                          }
                          local_100 = iVar5;
                          local_144 = local_144 + local_108;
                          if ((local_104 != (CCharacter *)g_ActorNameSentinel) &&
                             (local_104->carry_hands[local_100].bone_index < 0)) {
                            iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                              ("%s doesn't have hand %d");
                            return iVar5;
                          }
                          if ((local_148 != 0) && (-1 < local_100)) {
                            (*(((local_104->base).vtable._uc)->_uc).dropCarriedObject)
                                      (local_104,local_100,(CVector3f *)0x0);
                          }
                        }
                        else {
                          iVar5 = _strnicmp
                                            (command_buffer,"enableFieldNotesEntry",0x15);
                          if ((iVar5 == 0) &&
                             ((g_CharacterClassificationTable[(byte)(command_buffer[0x15] + 1)] &
                              0xe0) == 0)) {
                            local_144 = (byte *)(command_buffer + 0x15);
                            while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0
                                  ) {
                              local_144 = local_144 + 1;
                            }
                            local_fc = -1;
                            sscanf((char *)local_144,"(%[^)])%n");
                            if (local_fc < 3) {
                              iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                ("Error parsing enableFieldNotesEntry command");
                              return iVar5;
                            }
                            local_144 = local_144 + local_fc;
                            uVar17 = 0xffffffff;
                            pcVar22 = local_1eb5 + 1;
                            do {
                              if (uVar17 == 0) break;
                              uVar17 = uVar17 - 1;
                              cVar3 = *pcVar22;
                              pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                            } while (cVar3 != '\0');
                            SVar19 = ~uVar17 - 1;
                            if (0 < (int)SVar19) {
                              pcVar22 = local_1eb5 + ~uVar17;
                              do {
                                if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2) ==
                                    0) break;
                                SVar19 = SVar19 - 1;
                                pcVar22 = pcVar22 + -1;
                              } while (0 < (int)SVar19);
                            }
                            (local_1eb5 + 1)[SVar19] = '\0';
                            while ((g_CharacterClassificationTable[(byte)(local_1eb5[1] + 1)] & 2)
                                   != 0) {
                              memmove
                                        (local_1eb5 + 1,local_1eb5 + 2,SVar19);
                              SVar19 = SVar19 - 1;
                            }
                            if (g_EventDryRun != 0) {
                              iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004a5430
                                                (g_CFieldNotesPtr,local_1eb5 + 1);
                              switch(iVar5) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_00489e7e_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                  ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                return iVar5;
                              default:
                                iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                  ("Field notes entry '%s' not found");
                                return iVar5;
                              }
                            }
                            core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004a5310
                                      (g_CFieldNotesPtr,local_1eb5 + 1);
                          }
                          else {
                            iVar5 = _strnicmp
                                              (command_buffer,"enableFieldNotesAnnotation",
                                               0x1a);
                            if ((iVar5 == 0) &&
                               ((g_CharacterClassificationTable[(byte)(command_buffer[0x1a] + 1)] &
                                0xe0) == 0)) {
                              local_144 = (byte *)(command_buffer + 0x1a);
                              while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) !=
                                     0) {
                                local_144 = local_144 + 1;
                              }
                              local_f8 = -1;
                              sscanf((char *)local_144,"(%[^,], %[^)])%n");
                              if (local_f8 < 4) {
                                iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                  ("Error parsing enableFieldNotesAnnotation command");
                                return iVar5;
                              }
                              local_144 = local_144 + local_f8;
                              uVar17 = 0xffffffff;
                              pcVar22 = &stack0xffffd64c;
                              do {
                                if (uVar17 == 0) break;
                                uVar17 = uVar17 - 1;
                                cVar3 = *pcVar22;
                                pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                              } while (cVar3 != '\0');
                              SVar19 = ~uVar17 - 1;
                              if (0 < (int)SVar19) {
                                puVar12 = &stack0xffffd64b + ~uVar17;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(puVar12[-1] + 1)] & 2)
                                      == 0) break;
                                  SVar19 = SVar19 - 1;
                                  puVar12 = puVar12 + -1;
                                } while (0 < (int)SVar19);
                              }
                              (&stack0xffffd64c)[SVar19] = 0;
                              while ((g_CharacterClassificationTable
                                      [(byte)((char)in_stack_ffffd64c + 1)] & 2) != 0) {
                                memmove
                                          (&stack0xffffd64c,&stack0xffffd64d,SVar19);
                                SVar19 = SVar19 - 1;
                              }
                              uVar17 = 0xffffffff;
                              pcVar22 = local_28b5 + 1;
                              do {
                                if (uVar17 == 0) break;
                                uVar17 = uVar17 - 1;
                                cVar3 = *pcVar22;
                                pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                              } while (cVar3 != '\0');
                              SVar19 = ~uVar17 - 1;
                              if (0 < (int)SVar19) {
                                pcVar22 = local_28b5 + ~uVar17;
                                do {
                                  if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] & 2)
                                      == 0) break;
                                  SVar19 = SVar19 - 1;
                                  pcVar22 = pcVar22 + -1;
                                } while (0 < (int)SVar19);
                              }
                              (local_28b5 + 1)[SVar19] = '\0';
                              while ((g_CharacterClassificationTable[(byte)(local_28b5[1] + 1)] & 2)
                                     != 0) {
                                memmove
                                          (local_28b5 + 1,local_28b5 + 2,SVar19);
                                SVar19 = SVar19 - 1;
                              }
                              if (g_EventDryRun != 0) {
                                iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004a5430
                                                  (g_CFieldNotesPtr,&stack0xffffd64c);
                                switch(iVar5) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_00489e7e_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                    ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                  return iVar5;
                                default:
                                  iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                    ("Field notes entry '%s' not found");
                                  return iVar5;
                                }
                              }
                              iVar5 = core_fldnotes_cpp_CFieldNotes_showMapAnnotation_FUN_004a5200
                                                (g_CFieldNotesPtr,local_28b5 + 1,&stack0xffffd64c,
                                                 local_27b4);
                              if (iVar5 == 0) {
                                iVar5 = core_event_cpp_formatEventError_FUN_00488ba0(local_27b4);
                                return iVar5;
                              }
                            }
                            else {
                              iVar5 = _strnicmp
                                                (command_buffer,"fadeAmbientSound",0x10);
                              if ((iVar5 == 0) &&
                                 ((g_CharacterClassificationTable[(byte)(command_buffer[0x10] + 1)]
                                  & 0xe0) == 0)) {
                                local_144 = (byte *)(command_buffer + 0x10);
                                while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2)
                                       != 0) {
                                  local_144 = local_144 + 1;
                                }
                                local_ec = -1;
                                sscanf((char *)local_144,"(%f, %f )%n");
                                if (local_ec < 0) {
                                  _sprintf(g_EventErrorMessageBuffer,
                                             "Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_144 = local_144 + local_ec;
                                if (local_148 != 0) {
                                  core_sound_cpp_CSound_setVolumeFade_FUN_0055b1b0
                                            (g_CSound_PTR_0061c068,local_f4,local_f0);
                                }
                              }
                              else {
                                iVar5 = _strnicmp
                                                  (command_buffer,"fadeSfx",7);
                                if ((iVar5 == 0) &&
                                   ((g_CharacterClassificationTable[(byte)(command_buffer[7] + 1)] &
                                    0xe0) == 0)) {
                                  local_144 = (byte *)(command_buffer + 7);
                                  while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2
                                         ) != 0) {
                                    local_144 = local_144 + 1;
                                  }
                                  local_e0 = -1;
                                  sscanf
                                            ((char *)local_144,"(%[^,], %f, %f )%n");
                                  if (local_e0 < 0) {
                                    _sprintf(g_EventErrorMessageBuffer,
                                               "Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_144 = local_144 + local_e0;
                                  uVar17 = 0xffffffff;
                                  pcVar22 = local_138d + 1;
                                  do {
                                    if (uVar17 == 0) break;
                                    uVar17 = uVar17 - 1;
                                    cVar3 = *pcVar22;
                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                  } while (cVar3 != '\0');
                                  SVar19 = ~uVar17 - 1;
                                  if (0 < (int)SVar19) {
                                    pcVar22 = local_138d + ~uVar17;
                                    do {
                                      if ((g_CharacterClassificationTable[(byte)(pcVar22[-1] + 1)] &
                                          2) == 0) break;
                                      SVar19 = SVar19 - 1;
                                      pcVar22 = pcVar22 + -1;
                                    } while (0 < (int)SVar19);
                                  }
                                  (local_138d + 1)[SVar19] = '\0';
                                  while ((g_CharacterClassificationTable[(byte)(local_138d[1] + 1)]
                                         & 2) != 0) {
                                    memmove
                                              (local_138d + 1,local_138d + 2,SVar19);
                                    SVar19 = SVar19 - 1;
                                  }
                                  if (local_148 != 0) {
                                    uVar17 = core_event_cpp_CEventList_getSfxHandle_FUN_00491920
                                                       (this_ptr,local_138d + 1);
                                    if (local_e4 <= 0.0) {
                                      sound_sndmain_cpp_setSfxVolume_FUN_00550f20(uVar17,local_e8);
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_00551080
                                                (uVar17,local_e8,local_e4,0);
                                    }
                                  }
                                }
                                else {
                                  iVar5 = _strnicmp
                                                    (command_buffer,"flagOn",6);
                                  if ((iVar5 == 0) &&
                                     ((g_CharacterClassificationTable[(byte)(command_buffer[6] + 1)]
                                      & 0xe0) == 0)) {
                                    local_144 = (byte *)(command_buffer + 6);
                                    while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] &
                                           2) != 0) {
                                      local_144 = local_144 + 1;
                                    }
                                    pcVar22 = core_event_cpp_extractParenArg_FUN_00488fc0
                                                        ((char **)&local_144,local_1cc,0x20,1);
                                    if (pcVar22 != (char *)0x0) {
LAB_00489a3d:
                                      pcVar21 = g_EventErrorMessageBuffer;
                                      do {
                                        cVar3 = *pcVar22;
                                        *pcVar21 = cVar3;
                                        if (cVar3 == '\0') {
                                          return 0;
                                        }
                                        cVar3 = pcVar22[1];
                                        pcVar22 = pcVar22 + 2;
                                        pcVar21[1] = cVar3;
                                        pcVar21 = pcVar21 + 2;
                                      } while (cVar3 != '\0');
                                      return 0;
                                    }
                                    if (local_148 != 0) {
                                      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                                                (this_ptr,local_1cc,1);
                                    }
                                  }
                                  else {
                                    iVar5 = _strnicmp
                                                      (command_buffer,"flagOff",7);
                                    if ((iVar5 == 0) &&
                                       ((g_CharacterClassificationTable
                                         [(byte)(command_buffer[7] + 1)] & 0xe0) == 0)) {
                                      local_144 = (byte *)(command_buffer + 7);
                                      while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)]
                                             & 2) != 0) {
                                        local_144 = local_144 + 1;
                                      }
                                      pcVar22 = core_event_cpp_extractParenArg_FUN_00488fc0
                                                          ((char **)&local_144,local_22c,0x20,1);
                                      if (pcVar22 != (char *)0x0) goto LAB_00489a3d;
                                      if (local_148 != 0) {
                                        core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                                                  (this_ptr,local_22c,0);
                                      }
                                    }
                                    else {
                                      iVar5 = _strnicmp
                                                        (command_buffer,"gameFlagOn",10);
                                      if ((iVar5 == 0) &&
                                         ((g_CharacterClassificationTable
                                           [(byte)(command_buffer[10] + 1)] & 0xe0) == 0)) {
                                        local_144 = (byte *)(command_buffer + 10);
                                        while ((g_CharacterClassificationTable
                                                [(byte)(*local_144 + 1)] & 2) != 0) {
                                          local_144 = local_144 + 1;
                                        }
                                        pcVar22 = core_event_cpp_extractParenArg_FUN_00488fc0
                                                            ((char **)&local_144,local_20c,0x20,1);
                                        if (pcVar22 != (char *)0x0) goto LAB_00489a3d;
                                        if (local_148 != 0) {
                                          core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00491110
                                                    (this_ptr,local_20c,1);
                                        }
                                      }
                                      else {
                                        iVar5 = _strnicmp
                                                          (command_buffer,"gameFlagOff",0xb
                                                          );
                                        if ((iVar5 == 0) &&
                                           ((g_CharacterClassificationTable
                                             [(byte)(command_buffer[0xb] + 1)] & 0xe0) == 0)) {
                                          local_144 = (byte *)(command_buffer + 0xb);
                                          while ((g_CharacterClassificationTable
                                                  [(byte)(*local_144 + 1)] & 2) != 0) {
                                            local_144 = local_144 + 1;
                                          }
                                          pcVar22 = core_event_cpp_extractParenArg_FUN_00488fc0
                                                              ((char **)&local_144,local_1ec,0x20,1)
                                          ;
                                          if (pcVar22 != (char *)0x0) goto LAB_00489a3d;
                                          if (local_148 != 0) {
                                            core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00491110
                                                      (this_ptr,local_1ec,0);
                                          }
                                        }
                                        else {
                                          iVar5 = _strnicmp
                                                            (command_buffer,"hurtCharacter"
                                                             ,0xd);
                                          if ((iVar5 == 0) &&
                                             ((g_CharacterClassificationTable
                                               [(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0)) {
                                            local_144 = (byte *)(command_buffer + 0xd);
                                            while ((g_CharacterClassificationTable
                                                    [(byte)(*local_144 + 1)] & 2) != 0) {
                                              local_144 = local_144 + 1;
                                            }
                                            local_dc = -1;
                                            sscanf
                                                      ((char *)local_144," ( %[^,], %[^,],%f)%n");
                                            if (local_dc < 2) {
                                              iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                                ("Syntax error in killHero() parms"
                                                                );
                                              return iVar5;
                                            }
                                            uVar17 = 0xffffffff;
                                            pcVar22 = local_1135 + 1;
                                            do {
                                              if (uVar17 == 0) break;
                                              uVar17 = uVar17 - 1;
                                              cVar3 = *pcVar22;
                                              pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                            } while (cVar3 != '\0');
                                            SVar19 = ~uVar17 - 1;
                                            if (0 < (int)SVar19) {
                                              pcVar22 = local_1135 + ~uVar17;
                                              do {
                                                if ((g_CharacterClassificationTable
                                                     [(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
                                                SVar19 = SVar19 - 1;
                                                pcVar22 = pcVar22 + -1;
                                              } while (0 < (int)SVar19);
                                            }
                                            (local_1135 + 1)[SVar19] = '\0';
                                            while ((g_CharacterClassificationTable
                                                    [(byte)(local_1135[1] + 1)] & 2) != 0) {
                                              memmove
                                                        (local_1135 + 1,local_1135 + 2,SVar19);
                                              SVar19 = SVar19 - 1;
                                            }
                                            uVar17 = 0xffffffff;
                                            pcVar22 = local_389 + 1;
                                            do {
                                              if (uVar17 == 0) break;
                                              uVar17 = uVar17 - 1;
                                              cVar3 = *pcVar22;
                                              pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                            } while (cVar3 != '\0');
                                            SVar19 = ~uVar17 - 1;
                                            if (0 < (int)SVar19) {
                                              pcVar22 = local_389 + ~uVar17;
                                              do {
                                                if ((g_CharacterClassificationTable
                                                     [(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
                                                SVar19 = SVar19 - 1;
                                                pcVar22 = pcVar22 + -1;
                                              } while (0 < (int)SVar19);
                                            }
                                            (local_389 + 1)[SVar19] = '\0';
                                            while ((g_CharacterClassificationTable
                                                    [(byte)(local_389[1] + 1)] & 2) != 0) {
                                              memmove
                                                        (local_389 + 1,local_389 + 2,SVar19);
                                              SVar19 = SVar19 - 1;
                                            }
                                            local_144 = local_144 + local_dc;
                                            while ((g_CharacterClassificationTable
                                                    [(byte)(*local_144 + 1)] & 2) != 0) {
                                              local_144 = local_144 + 1;
                                            }
                                            pCVar9 = (CCharacter *)
                                                     core_event_cpp_resolveActorByName_FUN_00488d00
                                                               (local_1135 + 1,
                                                                g_CCharacterClassInfo.name_hash,
                                                                g_CCharacterClassInfo.class_name);
                                            if (pCVar9 == (CCharacter *)0x0) {
                                              return 0;
                                            }
                                            if (pCVar9 == (CCharacter *)g_ActorNameSentinel) {
                                              local_148 = 0;
                                            }
                                            iVar5 = core_event_cpp_parseDamageType_FUN_00489270
                                                              (local_389 + 1,&local_d4);
                                            if (iVar5 == 0) {
                                              iVar5 = core_event_cpp_formatEventError_FUN_00488ba0
                                                                ("Unknown damage type \"%s\" in hurtCharacter command."
                                                                );
                                              return iVar5;
                                            }
                                            if (local_148 != 0) {
                                              (*(((pCVar9->base).vtable._uc)->_uc).applyDamage)
                                                        (pCVar9,local_d4,local_d8);
                                            }
                                          }
                                          else {
                                            iVar5 = _strnicmp
                                                              (command_buffer,"incCounter",
                                                               10);
                                            if ((iVar5 == 0) &&
                                               ((g_CharacterClassificationTable
                                                 [(byte)(command_buffer[10] + 1)] & 0xe0) == 0)) {
                                              local_144 = (byte *)(command_buffer + 10);
                                              while ((g_CharacterClassificationTable
                                                      [(byte)(*local_144 + 1)] & 2) != 0) {
                                                local_144 = local_144 + 1;
                                              }
                                              local_d0 = -1;
                                              sscanf
                                                        ((char *)local_144,"( %[^ )] )%n");
                                              if (local_d0 < 5) {
                                                _sprintf(g_EventErrorMessageBuffer,
                                                           "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_144 = local_144 + local_d0;
                                              uVar17 = 0xffffffff;
                                              pcVar22 = local_965 + 1;
                                              do {
                                                if (uVar17 == 0) break;
                                                uVar17 = uVar17 - 1;
                                                cVar3 = *pcVar22;
                                                pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                              } while (cVar3 != '\0');
                                              SVar19 = ~uVar17 - 1;
                                              if (0 < (int)SVar19) {
                                                pcVar22 = local_965 + ~uVar17;
                                                do {
                                                  if ((g_CharacterClassificationTable
                                                       [(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
                                                  SVar19 = SVar19 - 1;
                                                  pcVar22 = pcVar22 + -1;
                                                } while (0 < (int)SVar19);
                                              }
                                              (local_965 + 1)[SVar19] = '\0';
                                              while ((g_CharacterClassificationTable
                                                      [(byte)(local_965[1] + 1)] & 2) != 0) {
                                                memmove
                                                          (local_965 + 1,local_965 + 2,SVar19);
                                                SVar19 = SVar19 - 1;
                                              }
                                              if (local_148 != 0) {
                                                iVar5 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00491510
                                                            (this_ptr,local_965 + 1);
                                                core_event_cpp_CEventList_setCounter_FUN_00491400
                                                          (this_ptr,local_965 + 1,iVar5 + 1);
                                              }
                                            }
                                            else {
                                              iVar5 = _strnicmp
                                                                (command_buffer,
                                                                 "killCharacter",0xd);
                                              if ((iVar5 == 0) &&
                                                 ((g_CharacterClassificationTable
                                                   [(byte)(command_buffer[0xd] + 1)] & 0xe0) == 0))
                                              {
                                                local_144 = (byte *)(command_buffer + 0xd);
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(*local_144 + 1)] & 2) != 0) {
                                                  local_144 = local_144 + 1;
                                                }
                                                local_c8 = &local_184;
                                                local_c4 = 0.0;
                                                local_cc = -1;
                                                sscanf
                                                          ((char *)local_144," ( %[^,], %[^,], %f , %f , %f , %f)%n");
                                                local_c4 = local_c4 * 0.01745329f;
                                                if (local_cc < 0) {
                                                  local_c4 = -1.0;
                                                  sscanf
                                                            ((char *)local_144," ( %[^,], %[^,], %f , %f , %f )%n");
                                                }
                                                if (local_cc < 0) {
                                                  local_c8 = (CVector3f *)0x0;
                                                  sscanf
                                                            ((char *)local_144," ( %[^,], %[^)])%n");
                                                }
                                                if (local_cc < 0) {
                                                  iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Syntax error in killCharacter() parms");
                                                  return iVar5;
                                                }
                                                uVar17 = 0xffffffff;
                                                pcVar22 = local_1ced + 1;
                                                do {
                                                  if (uVar17 == 0) break;
                                                  uVar17 = uVar17 - 1;
                                                  cVar3 = *pcVar22;
                                                  pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                } while (cVar3 != '\0');
                                                SVar19 = ~uVar17 - 1;
                                                if (0 < (int)SVar19) {
                                                  pcVar22 = local_1ced + ~uVar17;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
                                                    SVar19 = SVar19 - 1;
                                                    pcVar22 = pcVar22 + -1;
                                                  } while (0 < (int)SVar19);
                                                }
                                                (local_1ced + 1)[SVar19] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_1ced[1] + 1)] & 2) != 0) {
                                                  memmove
                                                            (local_1ced + 1,local_1ced + 2,SVar19);
                                                  SVar19 = SVar19 - 1;
                                                }
                                                uVar17 = 0xffffffff;
                                                pcVar22 = local_325 + 1;
                                                do {
                                                  if (uVar17 == 0) break;
                                                  uVar17 = uVar17 - 1;
                                                  cVar3 = *pcVar22;
                                                  pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                } while (cVar3 != '\0');
                                                SVar19 = ~uVar17 - 1;
                                                if (0 < (int)SVar19) {
                                                  pcVar22 = local_325 + ~uVar17;
                                                  do {
                                                    if ((g_CharacterClassificationTable
                                                         [(byte)(pcVar22[-1] + 1)] & 2) == 0) break;
                                                    SVar19 = SVar19 - 1;
                                                    pcVar22 = pcVar22 + -1;
                                                  } while (0 < (int)SVar19);
                                                }
                                                (local_325 + 1)[SVar19] = '\0';
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(local_325[1] + 1)] & 2) != 0) {
                                                  memmove
                                                            (local_325 + 1,local_325 + 2,SVar19);
                                                  SVar19 = SVar19 - 1;
                                                }
                                                local_144 = local_144 + local_cc;
                                                while ((g_CharacterClassificationTable
                                                        [(byte)(*local_144 + 1)] & 2) != 0) {
                                                  local_144 = local_144 + 1;
                                                }
                                                pCVar9 = (CCharacter *)
                                                                                                                  
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_1ced + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                if (pCVar9 == (CCharacter *)0x0) {
                                                  return 0;
                                                }
                                                if (pCVar9 == (CCharacter *)g_ActorNameSentinel) {
                                                  local_148 = 0;
                                                }
                                                iVar5 = core_event_cpp_parseDeathType_FUN_004890e0
                                                                  (local_325 + 1,&local_c0);
                                                if (iVar5 == 0) {
                                                  iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Unknown death type \"%s\" in killCharacter command.");
                                                  return iVar5;
                                                }
                                                if (local_148 != 0) {
                                                  (*(((pCVar9->base).vtable._uc)->_uc).kill)
                                                            (pCVar9,local_c0,local_c8,local_c4);
                                                }
                                              }
                                              else {
                                                iVar5 = _strnicmp
                                                                  (command_buffer,
                                                                   "killHero",8);
                                                if ((iVar5 == 0) &&
                                                   ((g_CharacterClassificationTable
                                                     [(byte)(command_buffer[8] + 1)] & 0xe0) == 0))
                                                {
                                                  local_144 = (byte *)(command_buffer + 8);
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_144 + 1)] & 2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  if (g_CNetGamePtr->connection_type !=
                                                      CONNECTION_NONE) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Can't use killHero command in multi-player");
                                                  return iVar5;
                                                  }
                                                  local_b8 = -1;
                                                  sscanf
                                                            ((char *)local_144," ( %[^)])%n");
                                                  if (local_b8 < 2) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Syntax error in killHero() parms");
                                                  return iVar5;
                                                  }
                                                  local_144 = local_144 + local_b8;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_144 + 1)] & 2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  iVar5 = core_event_cpp_parseDeathType_FUN_004890e0
                                                                    (local_3ec,&local_b4);
                                                  if (iVar5 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Unknown death type \"%s\" in killHero command.");
                                                  return iVar5;
                                                  }
                                                  if ((local_148 != 0) &&
                                                     (pCVar16 = g_CHero_PTR_ARRAY_01cedee4
                                                                [g_INT_01cedef4],
                                                     pCVar16 != (CHero *)0x0)) {
                                                    (*(((pCVar16->base).base.vtable._uc)->_uc).kill)
                                                              (&pCVar16->base,local_b4,
                                                               (CVector3f *)0x0,-1.0);
                                                  }
                                                }
                                                else {
                                                  iVar5 = _strnicmp
                                                                    (command_buffer,
                                                                     "killSfx",7);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(command_buffer[7] + 1)] & 0xe0) == 0)
                                                     ) {
                                                    local_144 = (byte *)(command_buffer + 7);
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(*local_144 + 1)] & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_ac = -1;
                                                    sscanf
                                                              ((char *)local_144,"(%[^,)]%n");
                                                    if (local_ac < 3) {
                                                      _sprintf(g_EventErrorMessageBuffer,
                                                                 "Error parsing killSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_144 = local_144 + local_ac;
                                                    uVar17 = 0xffffffff;
                                                    pcVar22 = local_70d + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar22;
                                                      pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar19 = ~uVar17 - 1;
                                                    if (0 < (int)SVar19) {
                                                      pcVar22 = local_70d + ~uVar17;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar19 = SVar19 - 1;
                                                        pcVar22 = pcVar22 + -1;
                                                      } while (0 < (int)SVar19);
                                                    }
                                                    (local_70d + 1)[SVar19] = '\0';
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_70d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_70d + 1,local_70d + 2,SVar19)
                                                      ;
                                                      SVar19 = SVar19 - 1;
                                                    }
                                                    local_a8 = 0.0;
                                                    pbVar11 = local_144;
                                                    if (*local_144 == 0x2c) {
                                                      local_ac = -1;
                                                      sscanf
                                                                ((char *)local_144,",%f%n");
                                                      if (local_ac < 3) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  pbVar11 = local_144 + local_ac;
                                                  }
                                                  do {
                                                    local_144 = pbVar11;
                                                    pbVar11 = local_144 + 1;
                                                  } while ((g_CharacterClassificationTable
                                                            [(byte)(*local_144 + 1)] & 2) != 0);
                                                  if (*local_144 != 0x29) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Can't find matching ) in killSfx command");
                                                    return 0;
                                                  }
                                                  local_144 = pbVar11;
                                                  if (local_148 != 0) {
                                                    uVar17 = 
                                                  core_event_cpp_CEventList_getSfxHandle_FUN_00491920
                                                            (this_ptr,local_70d + 1);
                                                  if (local_a8 <= 0.0) {
                                                    sound_sndmain_cpp_killSfx_FUN_00551050(uVar17);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90
                                                            (this_ptr);
                                                  }
                                                  else {
                                                    sound_sndmain_cpp_setSfxFade_FUN_00551080
                                                              (uVar17,0.0,local_a8,1);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90
                                                            (this_ptr);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "lightning",9);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[9] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = (byte *)(command_buffer + 9);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_a4 = -1;
                                                      sscanf
                                                                ((char *)local_144,"( )%n");
                                                      if (local_a4 < 2) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_a4;
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_weather_cpp_CWeather_createLightningStrike_FUN_0058aa30
                                                            (g_CWeatherPtr,0.1,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "playSfx",7);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[7] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = (byte *)(command_buffer + 7);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_a0 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,)]%n");
                                                      if (local_a0 < 3) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_a0;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_bbd + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_bbd + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_bbd + 1)[SVar19] = '\0';
                                                  while (pbVar11 = local_144,
                                                        (g_CharacterClassificationTable
                                                         [(byte)(local_bbd[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_bbd + 1,local_bbd + 2,SVar19);
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  pcVar22 = g_DefaultSfxHandleName;
                                                  pcVar21 = local_57d + 1;
                                                  for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1)
                                                  {
                                                    *(uint *)pcVar21 = *(uint *)pcVar22;
                                                    pcVar22 = pcVar22 + ((uint)bVar23 * -2 + 1) * 4;
                                                    pcVar21 = (char *)((int)pcVar21 +
                                                                      ((uint)bVar23 * -2 + 1) * 4);
                                                  }
                                                  pbVar1 = local_144;
                                                  if (*pbVar11 == 0x2c) {
                                                    local_a0 = -1;
                                                    sscanf
                                                              ((char *)local_144,",%[^)]%n");
                                                    if (local_a0 < 3) {
                                                      _sprintf(g_EventErrorMessageBuffer,
                                                                 "Error parsing playSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_144 = local_144 + local_a0;
                                                    uVar17 = 0xffffffff;
                                                    pcVar22 = local_57d + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar22;
                                                      pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar19 = ~uVar17 - 1;
                                                    if (0 < (int)SVar19) {
                                                      pcVar22 = local_57d + ~uVar17;
                                                      do {
                                                        if ((g_CharacterClassificationTable
                                                             [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar19 = SVar19 - 1;
                                                        pcVar22 = pcVar22 + -1;
                                                      } while (0 < (int)SVar19);
                                                    }
                                                    (local_57d + 1)[SVar19] = 0;
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(local_57d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_57d + 1,local_57d + 2,SVar19)
                                                      ;
                                                      SVar19 = SVar19 - 1;
                                                    }
                                                    uVar17 = 0xffffffff;
                                                    pcVar22 = local_57d + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar22;
                                                      pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    pbVar1 = local_144;
                                                    if (0x13 < ~uVar17 - 1) {
                                                      _sprintf(g_EventErrorMessageBuffer,
                                                                 "handle name %s is too long, max %d chars"
                                                                );
                                                      return 0;
                                                    }
                                                  }
                                                  do {
                                                    local_144 = pbVar1;
                                                    pbVar1 = local_144 + 1;
                                                  } while ((g_CharacterClassificationTable
                                                            [(byte)(*local_144 + 1)] & 2) != 0);
                                                  if (*local_144 != 0x29) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Can't find matching ) in playSfx command");
                                                    return 0;
                                                  }
                                                  local_144 = pbVar1;
                                                  if (local_148 != 0) {
                                                    iVar5 = _strnicmp
                                                                      (local_bbd + 1,"cue",
                                                                       3);
                                                    if (iVar5 == 0) {
                                                      iVar5 = 
                                                  sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0
                                                            (1);
                                                  if (iVar5 != 0) {
                                                    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
                                                    sound_sndmain_cpp_setNextSfxChannel_FUN_00550310
                                                              (1);
                                                    uVar17 = 
                                                  core_sound_cpp_CSound_playSound_FUN_0055ae30
                                                            (g_CSound_PTR_0061c068,this_ptr,
                                                             local_bbd + 1);
                                                  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
                                                  if (local_57d[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_00491960
                                                            (this_ptr,local_57d + 1,uVar17);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar17 = 
                                                  core_sound_cpp_CSound_playSound_FUN_0055ae30
                                                            (g_CSound_PTR_0061c068,this_ptr,
                                                             local_bbd + 1);
                                                  if (local_57d[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_00491960
                                                            (this_ptr,local_57d + 1,uVar17);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "resetGore",9);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[9] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = (byte *)(command_buffer + 9);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_9c = -1;
                                                      sscanf
                                                                ((char *)local_144,"( )%n");
                                                      if (local_9c < 2) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_9c;
                                                  if (local_148 != 0) {
                                                    core_gore_cpp_CGore_reset_FUN_004c93f0
                                                              (g_CGorePtr);
                                                    core_fire_cpp_CFireEffect_init_FUN_0049c190
                                                              (g_CFireEffectPtr);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setActorBool",0xc);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xc] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0xc);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_98 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^,], %[^)])%n");
                                                      if (local_98 < 3) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setActorBool parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_98;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_7d5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_7d5 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_7d5 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_7d5[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_7d5 + 1,local_7d5 + 2,SVar19);
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_af5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_af5 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_af5 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_af5[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_af5 + 1,local_af5 + 2,SVar19);
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_1a95 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_1a95 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_1a95 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_1a95[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_1a95 + 1,local_1a95 + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  iVar6 = 0;
                                                  local_94 = 0;
                                                  iVar5 = local_94;
                                                  if (0 < g_INT_00614284) {
                                                    iVar8 = 0;
                                                    do {
                                                      if (*(int *)((int)&DAT_006141f4 + iVar8) == 0)
                                                      {
                                                        iVar13 = _stricmp
                                                                           ("spectralFlag"
                                                                            + iVar8,local_af5 + 1);
                                                        iVar5 = (int)&DAT_006141f4 + iVar8;
                                                        if (iVar13 == 0) break;
                                                      }
                                                      iVar6 = iVar6 + 1;
                                                      iVar8 = iVar8 + 0x48;
                                                      iVar5 = local_94;
                                                    } while (iVar6 < g_INT_00614284);
                                                  }
                                                  local_94 = iVar5;
                                                  if (local_94 == 0) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "%s is not a valid boolean actor variable name");
                                                    return 0;
                                                  }
                                                  pCVar7 = 
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_7d5 + 1,
                                                             *(uint *)(local_94 + 0x44),
                                                             (char *)(local_94 + 0x22));
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == g_ActorNameSentinel) ||
                                                     (local_148 == 0)) {
                                                    pcVar22 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                                            (this_ptr,local_1a95 + 1);
                                                  if (pcVar22 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (g_CEventListPtr,local_1a95 + 1);
                                                  *(int *)(pCVar7->actor_name +
                                                          *(int *)(local_94 + 0x40)) = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setCameraAmbient",
                                                                       0x10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0x10] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0x10);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_8c = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %f)%n");
                                                      if (local_8c < 3) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setCameraAmbient parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_8c;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_151d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_151d + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_151d + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_151d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_151d + 1,local_151d + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0
                                                            (g_CDemonSetPtr,local_151d + 1);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Camera \"%s\" does not exist.");
                                                    return 0;
                                                  }
                                                  if ((local_90 < 0.0) ||
                                                     (0x42c80000 < (int)local_90)) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Ambient value %g is out of range (1..100)");
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00534640
                                                            (g_CDemonSetPtr,iVar5,
                                                             local_90 * (float)0.01);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setCounter",10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = (byte *)(command_buffer + 10);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_88 = -1;
                                                      sscanf
                                                                ((char *)local_144,"( %[^,)]%n");
                                                      if (local_88 < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_88;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_1775 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_1775 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_1775 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_1775[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_1775 + 1,local_1775 + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  local_84 = 0;
                                                  if (*local_144 == 0x2c) {
                                                    local_88 = -1;
                                                    sscanf
                                                              ((char *)local_144,",%d%n");
                                                    if (local_88 < 1) {
                                                      _sprintf(g_EventErrorMessageBuffer,
                                                                 "Error parsing setCounter value argument"
                                                                );
                                                      return 0;
                                                    }
                                                    local_144 = local_144 + local_88;
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(*local_144 + 1)] & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                  }
                                                  if (*local_144 != 0x29) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Error parsing setCounter arguments");
                                                    return 0;
                                                  }
                                                  local_144 = local_144 + 1;
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setCounter_FUN_00491400
                                                            (this_ptr,local_1775 + 1,local_84);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setDoorState",0xc);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xc] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0xc);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_80 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^)])%n");
                                                      if (local_80 < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setDoorState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_80;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_1905 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_1905 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_1905 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_1905[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_1905 + 1,local_1905 + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_183d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_183d + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_183d + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_183d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_183d + 1,local_183d + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  this_ptr_00 = (CDoor *)
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_1905 + 1,
                                                             g_CDoorClassInfo.name_hash,
                                                             g_CDoorClassInfo.class_name);
                                                  if (this_ptr_00 == (CDoor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (this_ptr_00 == (CDoor *)g_ActorNameSentinel) {
                                                    local_148 = 0;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_183d + 1,"open")
                                                  ;
                                                  if (iVar5 == 0) {
                                                    state = DOOR_STATE_OPEN;
                                                  }
                                                  else {
                                                    iVar5 = _stricmp
                                                                      (local_183d + 1,
                                                                       "closed");
                                                    state = DOOR_STATE_CLOSED;
                                                    if (iVar5 != 0) {
                                                      iVar5 = _stricmp
                                                                        (local_183d + 1,
                                                                         "opening");
                                                      if (iVar5 == 0) {
                                                        state = DOOR_STATE_OPENING;
                                                      }
                                                      else {
                                                        iVar5 = _stricmp
                                                                          (local_183d + 1,
                                                                           "closing");
                                                        if (iVar5 != 0) {
                                                          _sprintf(g_EventErrorMessageBuffer,
                                                                     "Invalid door state '%s'"
                                                                    );
                                                          return 0;
                                                        }
                                                        state = DOOR_STATE_CLOSING;
                                                      }
                                                    }
                                                  }
                                                  if (local_148 != 0) {
                                                    core_door_cpp_CDoor_setState_FUN_0045efe0
                                                              (this_ptr_00,state);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setGroupAmbient",
                                                                       0xf);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xf] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0xf);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_74 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%d, %f)%n")
                                                      ;
                                                      if (local_74 < 3) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setGroupAmbient parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_74;
                                                  if ((local_78 < 0.0) ||
                                                     (0x42c80000 < (int)local_78)) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Ambient value %g is out of range (1..100)");
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_005346c0
                                                            (g_CDemonSetPtr,local_7c,
                                                             local_78 * (float)0.01);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                                                                                              
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(command_buffer[0x13] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_144 = (byte *)(command_buffer + 0x13);
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(*local_144 + 1)] & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_70 = -1;
                                                    sscanf
                                                              ((char *)local_144,"( %[^ ,] , %d )%n");
                                                    if (local_70 < 0) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Error parsing setLightFilterFrame parms");
                                                  return iVar5;
                                                  }
                                                  local_144 = local_144 + local_70;
                                                  core_set_cpp_CDemonSet_addLightFilter_FUN_00534770
                                                            (g_CDemonSetPtr,local_19cc,&local_68,
                                                             &local_64);
                                                  if (local_68 == (C3DSLight *)0x0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("SpotLight %s doesn't exist.");
                                                  return iVar5;
                                                  }
                                                  if ((local_6c < 0) ||
                                                     (local_68->filter_count <= local_6c)) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Invalid filter frame, %s has %d filters");
                                                  return iVar5;
                                                  }
                                                  if (local_148 != 0) {
                                                    if (local_64 == (CDemonLight *)0x0) {
                                                      g_CHAR_PTR_01d046a0 =
                                                           "..\\core\\event.cpp";
                                                      g_INT_01d046a4 = 0x718;
                                                      core_main_c_displayErrorAndQuit_FUN_004e4500
                                                                ("Can't find CDemonLight for light %s in setLightFilterFrame meta-command"
                                                                );
                                                    }
                                                                                                        
                                                  core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0053bb20
                                                            (local_68,local_6c,local_64);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setLeverState",0xd)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xd] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0xd);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_60 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^)])%n");
                                                      if (local_60 < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setLeverState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_60;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_a2d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_a2d + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_a2d + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_a2d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_a2d + 1,local_a2d + 2,SVar19);
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_89d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_89d + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_89d + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_89d[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_89d + 1,local_89d + 2,SVar19);
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  this_ptr_01 = (CLever *)
                                                                                                                                
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_a2d + 1,
                                                             g_CLeverClassInfo.name_hash,
                                                             g_CLeverClassInfo.class_name);
                                                  if (this_ptr_01 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((this_ptr_01 == (CLever *)g_ActorNameSentinel)
                                                     || (local_148 == 0)) {
                                                    pcVar22 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                                            (this_ptr,local_89d + 1);
                                                  if (pcVar22 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (g_CEventListPtr,local_89d + 1);
                                                  if (iVar5 == 0) {
                                                    uStack_150 = 0;
                                                  }
                                                  else {
                                                    uStack_150 = 0x3ff00000;
                                                  }
                                                  local_154 = 0;
                                                  core_lever_cpp_CLever_setState_FUN_004e1f70
                                                            (this_ptr_01,
                                                             (float)(double)((ulonglong)uStack_150
                                                                            << 0x20));
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setModelState",0xd)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xd] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0xd);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_58 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^)])%n");
                                                      if (local_58 < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setModelState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_58;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_1db5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_1db5 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_1db5 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_1db5[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_1db5 + 1,local_1db5 + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_1455 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_1455 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_1455 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_1455[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_1455 + 1,local_1455 + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  pCVar7 = 
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_1db5 + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != g_ActorNameSentinel) {
                                                    pcVar22 = local_1455 + 1;
                                                    iVar5 = 0;
                                                    pCVar14 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                                                            ((CMotionController *)(pCVar7 + 1));
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0
                                                            (pCVar14,pcVar22,iVar5);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Model %s does not have state %s");
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                                            ((CMotionController *)(pCVar7 + 1),iVar5
                                                             ,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setSunlight",0xb);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xb] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0xb);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_50 = -1;
                                                      sscanf
                                                                ((char *)local_144,
                                                                 "(%f , %f , %f , %f )%n");
                                                      if (local_50 < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setSunlight command parms");
                                                  return 0;
                                                  }
                                                  local_4c = SQRT(local_170 * local_170 +
                                                                  local_178 * local_178 +
                                                                  local_174 * local_174);
                                                  local_144 = local_144 + local_50;
                                                  if (local_4c <= 0.0) {
                                                    local_174 = 0.0;
                                                    local_178 = 0.0;
                                                    local_170 = 0.0;
                                                  }
                                                  else {
                                                    fVar4 = 1.0 / local_4c;
                                                    local_178 = local_178 * fVar4;
                                                    local_174 = local_174 * fVar4;
                                                    local_170 = local_170 * fVar4;
                                                  }
                                                  if (local_148 != 0) {
                                                    core_set_cpp_CDemonSet_setSunlight_FUN_00534680
                                                              (g_CDemonSetPtr,local_178,local_174,
                                                               local_170,local_54);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setTimer",8);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[8] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = (byte *)(command_buffer + 8);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_bc = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %f)%n");
                                                      if (local_bc < 3) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_bc;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_fa5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_fa5 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_fa5 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_fa5[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_fa5 + 1,local_fa5 + 2,SVar19);
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_fa5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  if (0x1f < ~uVar17 - 1) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Timer name \"%s\" is too long, (max %d chars)");
                                                    return 0;
                                                  }
                                                  if (local_44 < 0.0) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_00491280
                                                            (this_ptr,local_fa5 + 1,local_44);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "setWeather",10);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = (byte *)(command_buffer + 10);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_3c = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^)])%n");
                                                      if (local_3c < 3) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_3c;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_1c25 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_1c25 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_1c25 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_1c25[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_1c25 + 1,local_1c25 + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_1c25 + 1,"none")
                                                  ;
                                                  type = WEATHER_TYPE_NONE;
                                                  if (iVar5 != 0) {
                                                    iVar5 = _stricmp
                                                                      (local_1c25 + 1,
                                                                       "rain");
                                                    if (iVar5 == 0) {
                                                      type = WEATHER_TYPE_RAIN;
                                                    }
                                                    else {
                                                      iVar5 = _stricmp
                                                                        (local_1c25 + 1,
                                                                         "snow");
                                                      if (iVar5 != 0) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                   "Invalid weather type: %s"
                                                                  );
                                                        return 0;
                                                      }
                                                      type = WEATHER_TYPE_SNOW;
                                                    }
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_weather_cpp_CWeather_setWeatherType_FUN_0058b470
                                                            (g_CWeatherPtr,type);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xb] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0xb);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_2c = -1;
                                                      sscanf
                                                                ((char *)local_144,
                                                                 "( %f, %f, %f, %f )%n");
                                                      if (local_2c < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_2c;
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_initCameraShake_FUN_00534800
                                                            (g_CDemonSetPtr,local_38,local_b0,
                                                             local_34,local_30);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0x11] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = (byte *)(command_buffer + 0x11);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_28 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^)])%n");
                                                      if (local_28 < 5) {
                                                        _sprintf(g_EventErrorMessageBuffer,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_28;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_edd + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_edd + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_edd + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_edd[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_edd + 1,local_edd + 2,SVar19);
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_e15 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_e15 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_e15 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_e15[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_e15 + 1,local_e15 + 2,SVar19);
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  pCVar7 = 
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_edd + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != g_ActorNameSentinel) {
                                                    pcVar22 = local_e15 + 1;
                                                    iVar5 = 0;
                                                    pCVar7 = pCVar7 + 1;
                                                    pCVar14 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                                                            ((CMotionController *)pCVar7);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                                                            (pCVar14,pcVar22,iVar5);
                                                  if (iVar5 < 0) {
                                                    _sprintf(g_EventErrorMessageBuffer,
                                                               "Model %s does not have motion %s");
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
                                                            ((CMotionController *)pCVar7,iVar5,0.0);
                                                  iVar5 = 1;
                                                  pSVar15 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                                                            ((CMotionController *)pCVar7);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                                            ((CMotionController *)pCVar7,
                                                             pSVar15->state_index,iVar5);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "switchCamera",0xc);
                                                    if ((iVar5 == 0) &&
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[0xc] + 1)] & 0xe0)
                                                        == 0)) {
                                                      pbVar11 = (byte *)(command_buffer + 0xc);
                                                      while ((g_CharacterClassificationTable
                                                              [(byte)(*pbVar11 + 1)] & 2) != 0) {
                                                        pbVar11 = pbVar11 + 1;
                                                      }
                                                      local_24 = -1;
                                                      pcVar22 = g_DefaultCommandArg;
                                                      pcVar21 = local_2c0;
                                                      for (iVar5 = 0x19; iVar5 != 0;
                                                          iVar5 = iVar5 + -1) {
                                                        *(uint *)pcVar21 =
                                                             *(uint *)pcVar22;
                                                        pcVar22 = pcVar22 + ((uint)bVar23 * -2 + 1)
                                                                            * 4;
                                                        pcVar21 = pcVar21 + ((uint)bVar23 * -2 + 1)
                                                                            * 4;
                                                      }
                                                      local_144 = pbVar11;
                                                      sscanf
                                                                ((char *)pbVar11," ( %[^ ,)]%n");
                                                      if (local_24 < 2) {
                                                        iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar5;
                                                  }
                                                  local_144 = local_144 + local_24;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_144 + 1)] & 2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0
                                                            (g_CDemonSetPtr,local_2c0);
                                                  if (iVar5 < 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Camera \"%s\" doesn't exist");
                                                  return iVar5;
                                                  }
                                                  local_20 = 3.0;
                                                  if (*local_144 == 0x2c) {
                                                    local_24 = -1;
                                                    sscanf
                                                              ((char *)local_144,",%f%n");
                                                    if (local_24 < 2) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar5;
                                                  }
                                                  local_144 = local_144 + local_24;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_144 + 1)] & 2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  }
                                                  if (*local_144 != 0x29) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Missing ')' in switchCamera() statement");
                                                  return iVar5;
                                                  }
                                                  local_144 = local_144 + 1;
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00539820
                                                            (g_CDemonSetPtr,iVar5,local_20);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                                                                                              
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar5 == 0) &&
                                                     ((g_CharacterClassificationTable
                                                       [(byte)(command_buffer[0x15] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_144 = (byte *)(command_buffer + 0x15);
                                                    while ((g_CharacterClassificationTable
                                                            [(byte)(*local_144 + 1)] & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_1c = -1;
                                                    sscanf
                                                              ((char *)local_144,"(%[^)])%n");
                                                    if (local_1c < 3) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Error parsing turnToFieldNotesEntry command");
                                                  return iVar5;
                                                  }
                                                  local_144 = local_144 + local_1c;
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_24b5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_24b5 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_24b5 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_24b5[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_24b5 + 1,local_24b5 + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  if (g_EventDryRun != 0) {
                                                    iVar5 = 
                                                  core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004a5430
                                                            (g_CFieldNotesPtr,local_24b5 + 1);
                                                  switch(iVar5) {
                                                  case 0:
                                                  case 1:
                                                  case 2:
                                                  case 3:
                                                  case 4:
                                                  case 5:
                                                  case 6:
                                                    goto switchD_00489e7e_caseD_2;
                                                  default:
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Field notes entry '%s' not found");
                                                  return iVar5;
                                                  }
                                                  }
                                                  core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004a5490
                                                            (g_CFieldNotesPtr,local_24b5 + 1);
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (command_buffer,
                                                                       "warpTo",6);
                                                    if ((iVar5 != 0) ||
                                                       ((g_CharacterClassificationTable
                                                         [(byte)(command_buffer[6] + 1)] & 0xe0) !=
                                                        0)) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Unknown meta-function starting at %s");
                                                  return iVar5;
                                                  }
                                                  local_144 = (byte *)(command_buffer + 6);
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_144 + 1)] & 2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            ((char *)local_144,"(%[^,], %[^)])%n");
                                                  if (local_18 < 5) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar5;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_16ad + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_16ad + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_16ad + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_16ad[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_16ad + 1,local_16ad + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_15e5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar19 = ~uVar17 - 1;
                                                  if (0 < (int)SVar19) {
                                                    pcVar22 = local_15e5 + ~uVar17;
                                                    do {
                                                      if ((g_CharacterClassificationTable
                                                           [(byte)(pcVar22[-1] + 1)] & 2) == 0)
                                                      break;
                                                      SVar19 = SVar19 - 1;
                                                      pcVar22 = pcVar22 + -1;
                                                    } while (0 < (int)SVar19);
                                                  }
                                                  (local_15e5 + 1)[SVar19] = '\0';
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(local_15e5[1] + 1)] & 2) != 0) {
                                                    memmove
                                                              (local_15e5 + 1,local_15e5 + 2,SVar19)
                                                    ;
                                                    SVar19 = SVar19 - 1;
                                                  }
                                                  local_144 = local_144 + local_18;
                                                  while ((g_CharacterClassificationTable
                                                          [(byte)(*local_144 + 1)] & 2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  pCVar16 = (CHero *)
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_16ad + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar16 == (CHero *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar16 == (CHero *)g_ActorNameSentinel) {
                                                    local_148 = 0;
                                                  }
                                                  else if (local_148 != 0) {
                                                    local_1ac.area_id =
                                                         (pCVar16->base).base.location.area_id;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_15e5 + 1,"%f,%f,%f,%f,%f,%f%n"
                                                            );
                                                  if (local_18 < 0) {
                                                    if ((local_148 != 0) &&
                                                       (pUVar2 = &(pCVar16->base).base.orient,
                                                       &local_16c != (CVector3f *)pUVar2)) {
                                                      local_16c.x = (pUVar2->vec).x;
                                                      local_16c.y = (pCVar16->base).base.orient.vec.
                                                                    y;
                                                      local_16c.z = (pCVar16->base).base.orient.vec.
                                                                    z;
                                                    }
                                                    sscanf
                                                              (local_15e5 + 1,"%f,%f,%f,%f%n");
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_148 != 0) &&
                                                       (pUVar2 = &(pCVar16->base).base.orient,
                                                       &local_16c != (CVector3f *)pUVar2)) {
                                                      local_16c.x = (pUVar2->vec).x;
                                                      local_16c.y = (pCVar16->base).base.orient.vec.
                                                                    y;
                                                      local_16c.z = (pCVar16->base).base.orient.vec.
                                                                    z;
                                                    }
                                                    sscanf
                                                              (local_15e5 + 1,"%f,%f,%f%n");
                                                  }
                                                  if (local_18 < 0) {
                                                    pCVar7 = 
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_15e5 + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == g_ActorNameSentinel) {
                                                    local_148 = 0;
                                                  }
                                                  else {
                                                    local_1ac.position.x =
                                                         (pCVar7->location).position.x;
                                                    local_1ac.position.y =
                                                         (pCVar7->location).position.y;
                                                    local_1ac.position.z =
                                                         (pCVar7->location).position.z;
                                                    local_1ac.area_id = (pCVar7->location).area_id;
                                                    if (&local_16c != (CVector3f *)&pCVar7->orient)
                                                    {
                                                      local_16c.x = (pCVar7->orient).vec.x;
                                                      local_16c.y = (pCVar7->orient).vec.y;
                                                      local_16c.z = (pCVar7->orient).vec.z;
                                                    }
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar22 = local_15e5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar22;
                                                    pcVar22 = pcVar22 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  local_18 = ~uVar17 - 1;
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_15e5[local_18 + 1] != '\0')) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar5;
                                                  }
                                                  if (local_148 != 0) {
                                                    if (local_1ac.area_id !=
                                                        (pCVar16->base).base.location.area_id) {
                                                      (*((pCVar16->base).base.vtable._ub)->setup)
                                                                ((CDemonActor *)pCVar16);
                                                    }
                                                    pCVar9 = (CCharacter *)
                                                                                                                          
                                                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                                                            ((CDemonActor *)pCVar16,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar9 != (CCharacter *)0x0) {
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseFromGrab)(pCVar9);
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseVictim)(pCVar9);
                                                  }
                                                  (pCVar16->base).base.location.area_id =
                                                       local_1ac.area_id;
                                                  (*((pCVar16->base).base.vtable._ub)->
                                                    setPositionAndOrientation)
                                                            ((CDemonActor *)pCVar16,
                                                             &local_1ac.position,&local_16c);
                                                  if (pCVar16 ==
                                                      g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) {
                                                                                                        
                                                  core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004fc780
                                                            (g_CDemonMission_PTR_00618170,&local_1ac
                                                            );
                                                  }
                                                  if (pCVar16 == (CHero *)g_CScriptPtr->focus_actor)
                                                  {
                                                    g_CScriptPtr->focus_actor_changed = 1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
switchD_00489e7e_caseD_2:
    while ((g_CharacterClassificationTable[(byte)(*local_144 + 1)] & 2) != 0) {
      local_144 = local_144 + 1;
    }
    if (*local_144 != 0) {
      iVar5 = core_event_cpp_formatEventError_FUN_00488ba0("Extra characters found");
      return iVar5;
    }
  }
  return 1;
}
