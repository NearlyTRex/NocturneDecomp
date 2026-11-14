// Name: core_event.cpp_FUN_004a1d00
// Address: 004a1d00
// Address Range: [[004a1d00, 004a6b9a]]
// Convention: unknown
// Signature: int core_event_cpp_FUN_004a1d00(CEventList *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_event_cpp_FUN_004a1d00(CEventList *param_1,char *param_2)

{
  CLocation *pCVar1;
  byte *pbVar2;
  CDeformableModelInstance *this_ptr;
  char cVar3;
  float fVar4;
  CDemonMission *this_ptr_00;
  int iVar5;
  int iVar6;
  CCharacter *pCVar7;
  int iVar8;
  CCharacter *pCVar9;
  CDemonActor *pCVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  CMotionList *pCVar14;
  EWeatherType type;
  SMotion *pSVar15;
  uint uVar16;
  SIZE_T SVar17;
  byte *puVar18;
  char *pcVar19;
  char *pcVar20;
  char (*str1) [32];
  uint *puVar21;
  UOrientationVector *pUVar22;
  CPuzzle *puzzle;
  byte bVar23;
  uint in_stack_ffffd574;
  char local_298d [256];
  char local_288d [257];
  char local_278c [256];
  char local_268c [255];
  char local_258d [256];
  char local_248d [256];
  char local_238d [256];
  char local_228d [256];
  char local_218d [256];
  char local_208d [256];
  char local_1f8d [256];
  char local_1e8d [201];
  char local_1dc4 [199];
  char local_1cfd [200];
  char local_1c35 [200];
  char local_1b6d [200];
  char local_1aa5 [200];
  char local_19dd [200];
  char local_1915 [200];
  char local_184d [200];
  char local_1785 [200];
  char local_16bd [200];
  char local_15f5 [200];
  char local_152d [200];
  char local_1465 [200];
  char local_139d [200];
  char local_12d5 [200];
  char local_120d [200];
  char local_1145 [200];
  char local_107d [201];
  char local_fb4 [199];
  char local_eed [200];
  char local_e25 [200];
  char local_d5d [200];
  char local_c95 [200];
  char local_bcd [200];
  char local_b05 [200];
  char local_a3d [2];
  uint local_a3b [49];
  char local_975 [200];
  char local_8ad [200];
  char local_7e5 [201];
  char local_71c [199];
  char local_655 [200];
  char local_58d [200];
  char local_4c5 [200];
  char local_3fd [100];
  char local_399 [101];
  char local_334 [100];
  char local_2d0 [100];
  CMatrix3x4f local_26c;
  byte local_23c [32];
  byte local_21c [32];
  byte local_1fc [32];
  byte local_1dc [32];
  CLocation local_1bc;
  CVector3f local_1ac;
  CVector3f local_1a0;
  CVector3f local_194;
  float local_188;
  float local_184;
  float local_180;
  CVector3f local_17c;
  CVector3f local_170;
  uint local_164;
  uint uStack_160;
  uint local_15c;
  byte *local_158;
  _FILE *local_154;
  int local_150;
  char *local_14c;
  int local_148;
  int local_144;
  CDemonLight *local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  float local_12c;
  int local_128;
  int local_124;
  int local_120;
  uint local_11c;
  int local_118;
  int local_114;
  CCharacter *local_110;
  int local_10c;
  int local_108;
  int local_104;
  float local_100;
  float local_fc;
  int local_f8;
  float local_f4;
  float local_f0;
  int local_ec;
  int local_e8;
  float local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  CVector3f *local_d0;
  float local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  float local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  int local_98;
  int local_94;
  char *local_90;
  int local_8c;
  int local_88;
  int local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  C3DSLight *local_70;
  CDemonLight *local_6c;
  int local_68;
  C3DSLight *local_64;
  int local_60;
  uint local_5c;
  int local_58;
  float local_54;
  float local_4c;
  int local_48;
  float local_44;
  int local_40;
  float local_3c;
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
  DAT_01c56ed0 = 0;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar5 = _stricmp(param_2,&DAT_005dcd92), iVar5 != 0)) {
    if (*param_2 == '.') {
      param_2 = param_2 + 1;
    }
    local_15c = (uint)(_DAT_01c56ecc == 0);
    local_158 = &DAT_005dcd97;
    pcVar20 = param_2;
    do {
      pcVar19 = pcVar20;
      if (*pcVar20 == '(') goto LAB_004a1d87;
      if (*pcVar20 == '\0') break;
      pcVar19 = pcVar20 + 1;
      if (*pcVar19 == '(') goto LAB_004a1d87;
      pcVar20 = pcVar20 + 2;
    } while (*pcVar19 != '\0');
    pcVar19 = (char *)0x0;
LAB_004a1d87:
    if (pcVar19 == (char *)0x0) {
      iVar5 = 0;
      if (0 < (param_1->events).count) {
        str1 = (param_1->events).names;
        do {
          iVar6 = _stricmp(*str1,param_2);
          if (iVar6 == 0) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          str1 = str1 + 1;
        } while (iVar5 < (param_1->events).count);
      }
      uVar16 = 0xffffffff;
      pcVar20 = param_2;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        cVar3 = *pcVar20;
        pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
      } while (cVar3 != '\0');
      if (0x1f < ~uVar16 - 1) {
        iVar5 = core_event_cpp_formatEventError_FUN_004a1210("Event name %s is too long");
        return iVar5;
      }
      if (99 < (param_1->events).count) {
        local_154 = _fopen("events.txt",&DAT_005dcdb2);
        if (local_154 != (_FILE *)0x0) {
          iVar5 = 0;
          if (0 < (param_1->events).count) {
            do {
              FUN_005c03c0(local_154,&DAT_005dcdc0);
              iVar5 = iVar5 + 1;
            } while (iVar5 < (param_1->events).count);
          }
          _fclose();
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0x286;
        core_main_c_FUN_005030e0();
      }
      pcVar19 = (param_1->events).names[(param_1->events).count];
      pcVar20 = pcVar19;
      do {
        cVar3 = *param_2;
        *pcVar20 = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = param_2[1];
        param_2 = param_2 + 2;
        pcVar20[1] = cVar3;
        pcVar20 = pcVar20 + 2;
      } while (cVar3 != '\0');
      local_14 = 0;
      local_90 = pcVar19;
      do {
        uVar16 = 0xffffffff;
        pcVar20 = local_90;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          cVar3 = *pcVar20;
          pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
        } while (cVar3 != '\0');
        if (~uVar16 - 1 <= local_14) {
          if (local_15c == 0) {
            return 1;
          }
          (param_1->events).count = (param_1->events).count + 1;
          return 1;
        }
        iVar5 = toupper((uint)(byte)*pcVar19);
        *pcVar19 = (byte)iVar5;
        iVar5 = core_event_cpp_isValidIdentifierChar_FUN_004aa5e0((uint)(byte)*pcVar19);
        if (iVar5 == 0) {
          iVar5 = core_event_cpp_formatEventError_FUN_004a1210("Event name %s is not valid");
          return iVar5;
        }
        local_14 = local_14 + 1;
        pcVar19 = pcVar19 + 1;
      } while( true );
    }
    iVar5 = _strnicmp(param_2,"activateGadget",0xe);
    if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
      local_158 = (byte *)(param_2 + 0xe);
      while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
        local_158 = local_158 + 1;
      }
      local_150 = -1;
      sscanf((char *)local_158,"(%[^,], %[^,], %n");
      if (local_150 < 3) {
        iVar5 = core_event_cpp_formatEventError_FUN_004a1210("Error parsing activateGadget command");
        return iVar5;
      }
      local_158 = local_158 + local_150;
      uVar16 = 0xffffffff;
      pcVar20 = local_238d + 1;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        cVar3 = *pcVar20;
        pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
      } while (cVar3 != '\0');
      SVar17 = ~uVar16 - 1;
      if (0 < (int)SVar17) {
        pcVar20 = local_238d + ~uVar16;
        do {
          if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
          SVar17 = SVar17 - 1;
          pcVar20 = pcVar20 + -1;
        } while (0 < (int)SVar17);
      }
      (local_238d + 1)[SVar17] = '\0';
      while (((&DAT_00626114)[(byte)(local_238d[1] + 1)] & 2) != 0) {
        memmove(local_238d + 1,local_238d + 2,SVar17);
        SVar17 = SVar17 - 1;
      }
      local_14c = local_248d + 1;
      uVar16 = 0xffffffff;
      pcVar20 = local_248d + 1;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        cVar3 = *pcVar20;
        pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
      } while (cVar3 != '\0');
      SVar17 = ~uVar16 - 1;
      if (0 < (int)SVar17) {
        pcVar20 = local_248d + ~uVar16;
        do {
          if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
          SVar17 = SVar17 - 1;
          pcVar20 = pcVar20 + -1;
        } while (0 < (int)SVar17);
      }
      (local_248d + 1)[SVar17] = '\0';
      while (((&DAT_00626114)[(byte)(*local_14c + 1)] & 2) != 0) {
        memmove(local_14c,local_248d + 2,SVar17);
        SVar17 = SVar17 - 1;
      }
      pcVar20 = (char *)core_event_cpp_extractParenArg_FUN_004a1630
                                  (&local_158,&stack0xffffd574,0x100);
      if (pcVar20 != (char *)0x0) goto LAB_004a2140;
      uVar16 = 0xffffffff;
      pcVar20 = &stack0xffffd574;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        cVar3 = *pcVar20;
        pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
      } while (cVar3 != '\0');
      SVar17 = ~uVar16 - 1;
      if (0 < (int)SVar17) {
        puVar18 = &stack0xffffd573 + ~uVar16;
        do {
          if (((&DAT_00626114)[(byte)(puVar18[-1] + 1)] & 2) == 0) break;
          SVar17 = SVar17 - 1;
          puVar18 = puVar18 + -1;
        } while (0 < (int)SVar17);
      }
      (&stack0xffffd574)[SVar17] = 0;
      while (((&DAT_00626114)[(byte)((char)in_stack_ffffd574 + 1)] & 2) != 0) {
        memmove(&stack0xffffd574,&stack0xffffd575,SVar17);
        SVar17 = SVar17 - 1;
      }
      pCVar7 = (CCharacter *)
               core_event_cpp_resolveActorByName_FUN_004a1370
                         (local_238d + 1,g_CHeroClassInfo.name_hash,g_CHeroClassInfo.class_name);
      if (pCVar7 == (CCharacter *)0x0) {
        return 0;
      }
      if (pCVar7 == 0x0FFFFFFF) {
        local_15c = (uint)pCVar7 ^ (uint)0x0FFFFFFF;
      }
      pcVar20 = (char *)0x0;
      iVar5 = _stricmp(local_248d + 1,"compass");
      if (iVar5 == 0) {
        pcVar20 = pCVar7[2].flames[0x18].on_event + 0x5c;
      }
      iVar5 = _stricmp(local_248d + 1,&DAT_005dce62);
      if (iVar5 == 0) {
        pcVar20 = pCVar7[2].flames[0x18].on_event + 0x60;
      }
      if (pcVar20 == (char *)0x0) {
        iVar5 = core_event_cpp_formatEventError_FUN_004a1210("Invalid gadget type: %s");
        return iVar5;
      }
      if (_DAT_01c56ecc == 0) {
        if (local_15c != 0) {
          iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(param_1,&stack0xffffd574)
          ;
          *(int *)pcVar20 = iVar5;
        }
      }
      else {
        pcVar20 = core_event_cpp_CEventList_validateCondition_FUN_004a6c90(param_1,&stack0xffffd574)
        ;
        if (pcVar20 != (char *)0x0) {
          return 0;
        }
      }
    }
    else {
      iVar5 = _strnicmp(param_2,"activatePuzzle",0xe);
      if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
        local_158 = (byte *)(param_2 + 0xe);
        while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
          local_158 = local_158 + 1;
        }
        local_148 = -1;
        sscanf((char *)local_158,"(%[^)])%n");
        if (local_148 < 3) {
          iVar5 = core_event_cpp_formatEventError_FUN_004a1210("Error parsing activatePuzzle command");
          return iVar5;
        }
        local_158 = local_158 + local_148;
        uVar16 = 0xffffffff;
        pcVar20 = local_1f8d + 1;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          cVar3 = *pcVar20;
          pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
        } while (cVar3 != '\0');
        SVar17 = ~uVar16 - 1;
        if (0 < (int)SVar17) {
          pcVar20 = local_1f8d + ~uVar16;
          do {
            if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
            SVar17 = SVar17 - 1;
            pcVar20 = pcVar20 + -1;
          } while (0 < (int)SVar17);
        }
        (local_1f8d + 1)[SVar17] = '\0';
        while (((&DAT_00626114)[(byte)(local_1f8d[1] + 1)] & 2) != 0) {
          memmove(local_1f8d + 1,local_1f8d + 2,SVar17);
          SVar17 = SVar17 - 1;
        }
        iVar5 = 0;
        puzzle = (CPuzzle *)0x0;
        if (0 < DAT_007c394c) {
          iVar6 = 0;
          do {
            pcVar20 = (char *)(**(code **)(**(int **)((int)&DAT_007c3950 + iVar6) + 4))();
            iVar8 = _stricmp(local_1f8d + 1,pcVar20);
            if (iVar8 == 0) {
              puzzle = *(CPuzzle **)((int)&DAT_007c3950 + iVar6);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar5 < DAT_007c394c);
        }
        if (puzzle == (CPuzzle *)0x0) {
          iVar5 = core_event_cpp_formatEventError_FUN_004a1210("No such puzzle '%s'");
          return iVar5;
        }
        if (local_15c != 0) {
          if (DAT_007c3978 != (CPuzzle *)0x0) {
            core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(DAT_007c3978,0);
          }
          core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(puzzle,1);
        }
      }
      else {
        iVar5 = _strnicmp(param_2,"addFieldNotesTask",0x11);
        if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)) {
          local_158 = (byte *)(param_2 + 0x11);
          while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
            local_158 = local_158 + 1;
          }
          local_144 = -1;
          sscanf((char *)local_158,"(%[^)])%n");
          if (local_144 < 3) {
            iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                              ("Error parsing addFieldNotesTask command");
            return iVar5;
          }
          local_158 = local_158 + local_144;
          uVar16 = 0xffffffff;
          pcVar20 = local_228d + 1;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar3 = *pcVar20;
            pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
          } while (cVar3 != '\0');
          SVar17 = ~uVar16 - 1;
          if (0 < (int)SVar17) {
            pcVar20 = local_228d + ~uVar16;
            do {
              if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
              SVar17 = SVar17 - 1;
              pcVar20 = pcVar20 + -1;
            } while (0 < (int)SVar17);
          }
          (local_228d + 1)[SVar17] = '\0';
          while (((&DAT_00626114)[(byte)(local_228d[1] + 1)] & 2) != 0) {
            memmove(local_228d + 1,local_228d + 2,SVar17);
            SVar17 = SVar17 - 1;
          }
          if (_DAT_01c56ecc != 0) {
            iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004bde20
                              (g_CFieldNotesPtr,local_228d + 1);
            switch(iVar5) {
            default:
              iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                ("Field notes entry '%s' is not a task");
              return iVar5;
            case 2:
            case 3:
            case 4:
              goto switchD_004a2582_caseD_2;
            case -1:
              iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                ("Field notes entry '%s' not found");
              return iVar5;
            }
          }
          core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004bdd00(g_CFieldNotesPtr,local_228d + 1);
        }
        else {
          iVar5 = _strnicmp(param_2,"advanceLightFilter",0x12);
          if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0x12] + 1)] & 0xe0) == 0)) {
            local_158 = (byte *)(param_2 + 0x12);
            while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
              local_158 = local_158 + 1;
            }
            pcVar20 = (char *)core_event_cpp_extractParenArg_FUN_004a1630(&local_158,local_fb4,200);
            if (pcVar20 != (char *)0x0) goto LAB_004a2140;
            core_set_cpp_CDemonSet_addLightFilter_FUN_00555a20
                      (g_CDemonSetPtr,local_fb4,&local_64,&local_140);
            if (local_64 == (C3DSLight *)0x0) {
              iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                ("SpotLight %s doesn't exist.");
              return iVar5;
            }
            if (local_15c != 0) {
              if (local_140 == (CDemonLight *)0x0) {
                _DAT_01d1d400 = "..\\core\\event.cpp";
                _DAT_01d1d404 = 0x337;
                core_main_c_FUN_005030e0("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
              }
              core_setutil_cpp_C3DSLight_advanceFilter_FUN_0055d360(local_64,local_140);
            }
          }
          else {
            iVar5 = _strnicmp(param_2,"beginCarryItem",0xe);
            if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
              local_158 = (byte *)(param_2 + 0xe);
              while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                local_158 = local_158 + 1;
              }
              local_138 = -1;
              sscanf((char *)local_158,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n");
              if (local_138 < 0) {
                iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                  ("Error parsing beginCarryItem() parms");
                return iVar5;
              }
              local_158 = local_158 + local_138;
              uVar16 = 0xffffffff;
              pcVar20 = local_1cfd + 1;
              do {
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                cVar3 = *pcVar20;
                pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
              } while (cVar3 != '\0');
              SVar17 = ~uVar16 - 1;
              if (0 < (int)SVar17) {
                pcVar20 = local_1cfd + ~uVar16;
                do {
                  if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                  SVar17 = SVar17 - 1;
                  pcVar20 = pcVar20 + -1;
                } while (0 < (int)SVar17);
              }
              (local_1cfd + 1)[SVar17] = '\0';
              while (((&DAT_00626114)[(byte)(local_1cfd[1] + 1)] & 2) != 0) {
                memmove(local_1cfd + 1,local_1cfd + 2,SVar17);
                SVar17 = SVar17 - 1;
              }
              uVar16 = 0xffffffff;
              pcVar20 = local_15f5 + 1;
              do {
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                cVar3 = *pcVar20;
                pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
              } while (cVar3 != '\0');
              SVar17 = ~uVar16 - 1;
              if (0 < (int)SVar17) {
                pcVar20 = local_15f5 + ~uVar16;
                do {
                  if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                  SVar17 = SVar17 - 1;
                  pcVar20 = pcVar20 + -1;
                } while (0 < (int)SVar17);
              }
              (local_15f5 + 1)[SVar17] = '\0';
              while (((&DAT_00626114)[(byte)(local_15f5[1] + 1)] & 2) != 0) {
                memmove(local_15f5 + 1,local_15f5 + 2,SVar17);
                SVar17 = SVar17 - 1;
              }
              if ((local_13c < 0) || (1 < local_13c)) {
                iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                  ("Invalid hand index: %d");
                return iVar5;
              }
              pCVar7 = (CCharacter *)
                       core_event_cpp_resolveActorByName_FUN_004a1370
                                 (local_15f5 + 1,g_CCharacterClassInfo.name_hash,
                                  g_CCharacterClassInfo.class_name);
              if (pCVar7 == (CCharacter *)0x0) {
                return 0;
              }
              if (pCVar7 == 0x0FFFFFFF) {
                local_15c = 0;
              }
              else if (pCVar7->carry_hands[local_13c].bone_index < 0) {
                iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                  ("%s doesn't have hand %d");
                return iVar5;
              }
              pCVar9 = (CCharacter *)
                       core_event_cpp_resolveActorByName_FUN_004a1370
                                 (local_1cfd + 1,g_CDemonActorClassInfo.name_hash,
                                  g_CDemonActorClassInfo.class_name);
              if (pCVar9 == (CCharacter *)0x0) {
                return 0;
              }
              if ((pCVar9 != 0x0FFFFFFF) && (local_15c != 0)) {
                core_xform_cpp_FUN_005b5760(&local_26c,&local_194,&local_170);
                core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0
                          (pCVar7,local_13c,(int)pCVar9,0,&local_26c);
              }
            }
            else {
              iVar5 = _strnicmp
                                (param_2,"completeFieldNotesTask",0x16);
              if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0x16] + 1)] & 0xe0) == 0)) {
                local_158 = (byte *)(param_2 + 0x16);
                while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                  local_158 = local_158 + 1;
                }
                local_134 = -1;
                sscanf((char *)local_158,"(%[^)])%n");
                if (local_134 < 3) {
                  iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                    ("Error parsing completeFieldNotesTask command");
                  return iVar5;
                }
                local_158 = local_158 + local_134;
                uVar16 = 0xffffffff;
                pcVar20 = local_208d + 1;
                do {
                  if (uVar16 == 0) break;
                  uVar16 = uVar16 - 1;
                  cVar3 = *pcVar20;
                  pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                } while (cVar3 != '\0');
                SVar17 = ~uVar16 - 1;
                if (0 < (int)SVar17) {
                  pcVar20 = local_208d + ~uVar16;
                  do {
                    if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                    SVar17 = SVar17 - 1;
                    pcVar20 = pcVar20 + -1;
                  } while (0 < (int)SVar17);
                }
                (local_208d + 1)[SVar17] = '\0';
                while (((&DAT_00626114)[(byte)(local_208d[1] + 1)] & 2) != 0) {
                  memmove(local_208d + 1,local_208d + 2,SVar17);
                  SVar17 = SVar17 - 1;
                }
                if (_DAT_01c56ecc != 0) {
                  iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004bde20
                                    (g_CFieldNotesPtr,local_208d + 1);
                  switch(iVar5) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Field notes entry '%s' is not a task");
                    return iVar5;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_004a2582_caseD_2;
                  default:
                    iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Field notes entry '%s' not found");
                    return iVar5;
                  }
                }
                core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004bdfa0
                          (g_CFieldNotesPtr,local_208d + 1);
              }
              else {
                iVar5 = _strnicmp(param_2,"createExplosion",0xf);
                if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0xf] + 1)] & 0xe0) == 0)) {
                  local_158 = (byte *)(param_2 + 0xf);
                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                    local_158 = local_158 + 1;
                  }
                  local_130 = -1;
                  sscanf((char *)local_158,"( %f , %n");
                  if (local_130 < 0) {
                    iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Error parsing createExplosion() parms");
                    return iVar5;
                  }
                  local_158 = local_158 + local_130;
                  local_130 = -1;
                  sscanf((char *)local_158,"%f , %f , %f %n");
                  if ((local_130 < 0) &&
                     (sscanf((char *)local_158," %[^,)] %n"),
                     -1 < local_130)) {
                    uVar16 = 0xffffffff;
                    pcVar20 = local_eed + 1;
                    do {
                      if (uVar16 == 0) break;
                      uVar16 = uVar16 - 1;
                      cVar3 = *pcVar20;
                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                    } while (cVar3 != '\0');
                    SVar17 = ~uVar16 - 1;
                    if (0 < (int)SVar17) {
                      pcVar20 = local_eed + ~uVar16;
                      do {
                        if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                        SVar17 = SVar17 - 1;
                        pcVar20 = pcVar20 + -1;
                      } while (0 < (int)SVar17);
                    }
                    (local_eed + 1)[SVar17] = '\0';
                    while (((&DAT_00626114)[(byte)(local_eed[1] + 1)] & 2) != 0) {
                      memmove(local_eed + 1,local_eed + 2,SVar17);
                      SVar17 = SVar17 - 1;
                    }
                    pCVar7 = (CCharacter *)
                             core_event_cpp_resolveActorByName_FUN_004a1370
                                       (local_eed + 1,g_CDemonActorClassInfo.name_hash,
                                        g_CDemonActorClassInfo.class_name);
                    if (pCVar7 == (CCharacter *)0x0) {
                      return 0;
                    }
                    if (pCVar7 == 0x0FFFFFFF) {
                      local_15c = 0;
                    }
                    else {
                      pCVar1 = &(pCVar7->base).location;
                      if ((CLocation *)&local_17c != pCVar1) {
                        local_17c.x = (pCVar1->position).x;
                        local_17c.y = (pCVar7->base).location.position.y;
                        local_17c.z = (pCVar7->base).location.position.z;
                      }
                    }
                  }
                  if (local_130 < 0) {
                    iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Error parsing createExplosion() parms");
                    return iVar5;
                  }
                  local_158 = local_158 + local_130;
                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                    local_158 = local_158 + 1;
                  }
                  local_12c = 4.0;
                  if (*local_158 == 0x2c) {
                    local_130 = -1;
                    sscanf((char *)local_158,", %f %n");
                    if (local_130 < 0) {
                      iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                        ("Error parsing createExplosion() parms");
                      return iVar5;
                    }
                    local_158 = local_158 + local_130;
                    while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                      local_158 = local_158 + 1;
                    }
                  }
                  if (*local_158 != 0x29) {
                    iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Error parsing createExplosion() parms, expected matching ')'");
                    return iVar5;
                  }
                  local_158 = local_158 + 1;
                  if (local_15c != 0) {
                    core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
                              (0x01C57074,&local_17c,local_44,1500.0,local_12c);
                  }
                }
                else {
                  iVar5 = _strnicmp(param_2,"deleteActor",0xb);
                  if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)) {
                    local_158 = (byte *)(param_2 + 0xb);
                    while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                      local_158 = local_158 + 1;
                    }
                    pcVar20 = (char *)core_event_cpp_extractParenArg_FUN_004a1630
                                                (&local_158,local_1dc4,200);
                    if (pcVar20 != (char *)0x0) goto LAB_004a2140;
                    pCVar7 = (CCharacter *)
                             core_event_cpp_resolveActorByName_FUN_004a1370
                                       (local_1dc4,g_CDemonActorClassInfo.name_hash,
                                        g_CDemonActorClassInfo.class_name);
                    uVar16 = g_CBoxActorClassInfo.name_hash;
                    if (pCVar7 == (CCharacter *)0x0) {
                      if (_DAT_01c56ecc != 0) {
                        return 0;
                      }
                      local_15c = 0;
                    }
                    if ((pCVar7 != 0x0FFFFFFF) && (local_15c != 0)) {
                      (pCVar7->base).lifecycle_state = ACTOR_DESTROYED;
                      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600
                                          ((CDemonActor *)pCVar7,uVar16);
                      if (pCVar10 != (CDemonActor *)0x0) {
                        fVar4 = pCVar10[2].orient_matrix.m[1].y;
                        *(byte *)&pCVar10[2].location.position.y = 0;
                        sound_sndmain_cpp_killSfx_FUN_00573a80((uint)fVar4);
                      }
                      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600
                                          ((CDemonActor *)pCVar7,g_CChainClassInfo.name_hash);
                      if (pCVar10 != (CDemonActor *)0x0) {
                        uVar16 = pCVar10[1].dead2;
                        *(byte *)&pCVar10[1].orient_matrix.m[2].z = 0;
                        pCVar10[1].create_event[0x4c] = '\0';
                        sound_sndmain_cpp_killSfx_FUN_00573a80(uVar16);
                      }
                    }
                  }
                  else {
                    iVar5 = _strnicmp
                                      (param_2,"displayBitmap",0xd);
                    if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] & 0xe0) == 0)) {
                      local_158 = (byte *)(param_2 + 0xd);
                      while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                        local_158 = local_158 + 1;
                      }
                      local_120 = -1;
                      sscanf((char *)local_158,"( %[^ ,] , %d , %d%n");
                      if (local_120 < 0) {
                        iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                          ("Error parsing displayBitmap() parms");
                        return iVar5;
                      }
                      local_158 = local_158 + local_120;
                      while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                        local_158 = local_158 + 1;
                      }
                      local_11c = 0;
                      pbVar11 = local_158;
                      if (*local_158 == 0x2c) {
                        local_120 = -1;
                        sscanf((char *)local_158,", %f %n");
                        if (local_120 < 1) {
                          _sprintf(&DAT_01c56ed0,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pbVar11 = local_158 + local_120;
                        while (((&DAT_00626114)[(byte)(*pbVar11 + 1)] & 2) != 0) {
                          pbVar11 = pbVar11 + 1;
                        }
                      }
                      do {
                        local_158 = pbVar11;
                        pbVar11 = local_158 + 1;
                      } while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0);
                      if (*local_158 != 0x29) {
                        _sprintf(&DAT_01c56ed0,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_158 = local_158 + 1;
                      iVar5 = engine_dosio_cpp_getFileSize_FUN_00478fb0(&DAT_005dd2ad,local_268c);
                      if (iVar5 < 0) {
                        iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                          ("Bitmap doesn't exist");
                        return iVar5;
                      }
                      if (iVar5 != local_128 * local_124) {
                        iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                          ("Bitmap file size does not match specified dimensions");
                        return iVar5;
                      }
                      if (local_15c != 0) {
                        core_game_cpp_CGame_displayBitmap_FUN_004d7730
                                  (g_CGamePtr,local_268c,local_128,local_124,local_11c);
                      }
                    }
                    else {
                      iVar5 = _strnicmp
                                        (param_2,"displayFieldNotes",0x11);
                      if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)
                         ) {
                        local_158 = (byte *)(param_2 + 0x11);
                        while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                          local_158 = local_158 + 1;
                        }
                        local_118 = -1;
                        sscanf((char *)local_158,"(%[^)])%n");
                        if (local_118 < 5) {
                          _sprintf(&DAT_01c56ed0,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_158 = local_158 + local_118;
                        uVar16 = 0xffffffff;
                        pcVar20 = local_bcd + 1;
                        do {
                          if (uVar16 == 0) break;
                          uVar16 = uVar16 - 1;
                          cVar3 = *pcVar20;
                          pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                        } while (cVar3 != '\0');
                        SVar17 = ~uVar16 - 1;
                        if (0 < (int)SVar17) {
                          pcVar20 = local_bcd + ~uVar16;
                          do {
                            if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                            SVar17 = SVar17 - 1;
                            pcVar20 = pcVar20 + -1;
                          } while (0 < (int)SVar17);
                        }
                        (local_bcd + 1)[SVar17] = '\0';
                        while (((&DAT_00626114)[(byte)(local_bcd[1] + 1)] & 2) != 0) {
                          memmove(local_bcd + 1,local_bcd + 2,SVar17);
                          SVar17 = SVar17 - 1;
                        }
                        if (local_15c == 0) {
                          pcVar20 = core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                              (param_1,local_bcd + 1);
                          if (pcVar20 != (char *)0x0) {
                            return 0;
                          }
                        }
                        else {
                          iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                            (0x01C51D80,local_bcd + 1);
                          g_CFieldNotesPtr->is_displayed = iVar5;
                        }
                      }
                      else {
                        iVar5 = _strnicmp(param_2,"dropItem",8);
                        if ((iVar5 == 0) && (((&DAT_00626114)[(byte)(param_2[8] + 1)] & 0xe0) == 0))
                        {
                          local_158 = (byte *)(param_2 + 8);
                          while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                            local_158 = local_158 + 1;
                          }
                          local_114 = -1;
                          sscanf((char *)local_158,"( %[^,],%n");
                          if (local_114 < 0) {
                            iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                              ("Error parsing dropItem() parms");
                            return iVar5;
                          }
                          local_158 = local_158 + local_114;
                          uVar16 = 0xffffffff;
                          pcVar20 = local_1465 + 1;
                          do {
                            if (uVar16 == 0) break;
                            uVar16 = uVar16 - 1;
                            cVar3 = *pcVar20;
                            pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                          } while (cVar3 != '\0');
                          SVar17 = ~uVar16 - 1;
                          if (0 < (int)SVar17) {
                            pcVar20 = local_1465 + ~uVar16;
                            do {
                              if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                              SVar17 = SVar17 - 1;
                              pcVar20 = pcVar20 + -1;
                            } while (0 < (int)SVar17);
                          }
                          (local_1465 + 1)[SVar17] = '\0';
                          while (((&DAT_00626114)[(byte)(local_1465[1] + 1)] & 2) != 0) {
                            memmove(local_1465 + 1,local_1465 + 2,SVar17);
                            SVar17 = SVar17 - 1;
                          }
                          local_110 = (CCharacter *)
                                      core_event_cpp_resolveActorByName_FUN_004a1370
                                                (local_1465 + 1,g_CCharacterClassInfo.name_hash,
                                                 g_CCharacterClassInfo.class_name);
                          if (local_110 == (CCharacter *)0x0) {
                            return 0;
                          }
                          if (local_110 == 0x0FFFFFFF) {
                            local_15c = 0;
                          }
                          local_114 = -1;
                          local_10c = -1;
                          sscanf((char *)local_158,"%d )%n");
                          if (local_114 < 1) {
                            sscanf((char *)local_158,"%[^)])%n");
                            if (local_114 < 0) {
                              iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                ("Error parsing dropItem() parms");
                              return iVar5;
                            }
                            uVar16 = 0xffffffff;
                            pcVar20 = local_1785 + 1;
                            do {
                              if (uVar16 == 0) break;
                              uVar16 = uVar16 - 1;
                              cVar3 = *pcVar20;
                              pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                            } while (cVar3 != '\0');
                            SVar17 = ~uVar16 - 1;
                            if (0 < (int)SVar17) {
                              pcVar20 = local_1785 + ~uVar16;
                              do {
                                if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                                SVar17 = SVar17 - 1;
                                pcVar20 = pcVar20 + -1;
                              } while (0 < (int)SVar17);
                            }
                            (local_1785 + 1)[SVar17] = '\0';
                            while (((&DAT_00626114)[(byte)(local_1785[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_1785 + 1,local_1785 + 2,SVar17);
                              SVar17 = SVar17 - 1;
                            }
                            local_10c = -1;
                            iVar5 = local_10c;
                            if (local_110 != 0x0FFFFFFF) {
                              iVar6 = 0;
                              pCVar7 = local_110;
                              do {
                                pCVar10 = pCVar7->carry_hands[0].carry_actor;
                                if ((pCVar10 != (CDemonActor *)0x0) &&
                                   (iVar8 = _stricmp
                                                      (pCVar10->actor_name,local_1785 + 1),
                                   iVar5 = iVar6, iVar8 == 0)) break;
                                iVar6 = iVar6 + 1;
                                pCVar7 = (CCharacter *)(pCVar7->base).create_event;
                                iVar5 = local_10c;
                              } while (iVar6 < 2);
                            }
                          }
                          else if ((local_10c < 0) || (iVar5 = local_10c, 1 < local_10c)) {
                            iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                              ("Invalid hand index: %d");
                            return iVar5;
                          }
                          local_10c = iVar5;
                          local_158 = local_158 + local_114;
                          if ((local_110 != 0x0FFFFFFF) &&
                             (local_110->carry_hands[local_10c].bone_index < 0)) {
                            iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                              ("%s doesn't have hand %d");
                            return iVar5;
                          }
                          if ((local_15c != 0) && (-1 < local_10c)) {
                            (*(((local_110->base).vtable._uc)->_uc).dropCarriedObject)
                                      (local_110,local_10c,(CVector3f *)0x0);
                          }
                        }
                        else {
                          iVar5 = _strnicmp
                                            (param_2,"enableFieldNotesEntry",0x15);
                          if ((iVar5 == 0) &&
                             (((&DAT_00626114)[(byte)(param_2[0x15] + 1)] & 0xe0) == 0)) {
                            local_158 = (byte *)(param_2 + 0x15);
                            while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                              local_158 = local_158 + 1;
                            }
                            local_108 = -1;
                            sscanf((char *)local_158,"(%[^)])%n");
                            if (local_108 < 3) {
                              iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                ("Error parsing enableFieldNotesEntry command");
                              return iVar5;
                            }
                            local_158 = local_158 + local_108;
                            uVar16 = 0xffffffff;
                            pcVar20 = local_258d + 1;
                            do {
                              if (uVar16 == 0) break;
                              uVar16 = uVar16 - 1;
                              cVar3 = *pcVar20;
                              pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                            } while (cVar3 != '\0');
                            SVar17 = ~uVar16 - 1;
                            if (0 < (int)SVar17) {
                              pcVar20 = local_258d + ~uVar16;
                              do {
                                if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                                SVar17 = SVar17 - 1;
                                pcVar20 = pcVar20 + -1;
                              } while (0 < (int)SVar17);
                            }
                            (local_258d + 1)[SVar17] = '\0';
                            while (((&DAT_00626114)[(byte)(local_258d[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_258d + 1,local_258d + 2,SVar17);
                              SVar17 = SVar17 - 1;
                            }
                            if (_DAT_01c56ecc != 0) {
                              iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004bde20
                                                (g_CFieldNotesPtr,local_258d + 1);
                              switch(iVar5) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_004a2582_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                  ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                return iVar5;
                              default:
                                iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                  ("Field notes entry '%s' not found");
                                return iVar5;
                              }
                            }
                            core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004bdd00
                                      (g_CFieldNotesPtr,local_258d + 1);
                          }
                          else {
                            iVar5 = _strnicmp
                                              (param_2,"enableFieldNotesAnnotation",0x1a);
                            if ((iVar5 == 0) &&
                               (((&DAT_00626114)[(byte)(param_2[0x1a] + 1)] & 0xe0) == 0)) {
                              local_158 = (byte *)(param_2 + 0x1a);
                              while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                local_158 = local_158 + 1;
                              }
                              local_104 = -1;
                              sscanf((char *)local_158,"(%[^,], %[^)])%n");
                              if (local_104 < 4) {
                                iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                  ("Error parsing enableFieldNotesAnnotation command");
                                return iVar5;
                              }
                              local_158 = local_158 + local_104;
                              uVar16 = 0xffffffff;
                              pcVar20 = local_298d + 1;
                              do {
                                if (uVar16 == 0) break;
                                uVar16 = uVar16 - 1;
                                cVar3 = *pcVar20;
                                pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                              } while (cVar3 != '\0');
                              SVar17 = ~uVar16 - 1;
                              if (0 < (int)SVar17) {
                                pcVar20 = local_298d + ~uVar16;
                                do {
                                  if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                                  SVar17 = SVar17 - 1;
                                  pcVar20 = pcVar20 + -1;
                                } while (0 < (int)SVar17);
                              }
                              (local_298d + 1)[SVar17] = '\0';
                              while (((&DAT_00626114)[(byte)(local_298d[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_298d + 1,local_298d + 2,SVar17);
                                SVar17 = SVar17 - 1;
                              }
                              uVar16 = 0xffffffff;
                              pcVar20 = local_288d + 1;
                              do {
                                if (uVar16 == 0) break;
                                uVar16 = uVar16 - 1;
                                cVar3 = *pcVar20;
                                pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                              } while (cVar3 != '\0');
                              SVar17 = ~uVar16 - 1;
                              if (0 < (int)SVar17) {
                                pcVar20 = local_288d + ~uVar16;
                                do {
                                  if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0) break;
                                  SVar17 = SVar17 - 1;
                                  pcVar20 = pcVar20 + -1;
                                } while (0 < (int)SVar17);
                              }
                              (local_288d + 1)[SVar17] = '\0';
                              while (((&DAT_00626114)[(byte)(local_288d[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_288d + 1,local_288d + 2,SVar17);
                                SVar17 = SVar17 - 1;
                              }
                              if (_DAT_01c56ecc != 0) {
                                iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004bde20
                                                  (g_CFieldNotesPtr,local_298d + 1);
                                switch(iVar5) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_004a2582_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                    ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                  return iVar5;
                                default:
                                  iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                    ("Field notes entry '%s' not found");
                                  return iVar5;
                                }
                              }
                              iVar5 = core_fldnotes_cpp_CFieldNotes_showMapAnnotation_FUN_004bdbf0
                                                (g_CFieldNotesPtr,local_288d + 1,local_298d + 1,
                                                 local_278c);
                              if (iVar5 == 0) {
                                iVar5 = core_event_cpp_formatEventError_FUN_004a1210(local_278c);
                                return iVar5;
                              }
                            }
                            else {
                              iVar5 = _strnicmp
                                                (param_2,"fadeAmbientSound",0x10);
                              if ((iVar5 == 0) &&
                                 (((&DAT_00626114)[(byte)(param_2[0x10] + 1)] & 0xe0) == 0)) {
                                local_158 = (byte *)(param_2 + 0x10);
                                while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                  local_158 = local_158 + 1;
                                }
                                local_f8 = -1;
                                sscanf((char *)local_158,"(%f, %f )%n");
                                if (local_f8 < 0) {
                                  _sprintf(&DAT_01c56ed0,"Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_158 = local_158 + local_f8;
                                if (local_15c != 0) {
                                  core_sound_cpp_CSound_setVolumeFade_FUN_0057dc00
                                            (0x02C82A60,local_100,local_fc);
                                }
                              }
                              else {
                                iVar5 = _strnicmp
                                                  (param_2,"fadeSfx",7);
                                if ((iVar5 == 0) &&
                                   (((&DAT_00626114)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_158 = (byte *)(param_2 + 7);
                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                    local_158 = local_158 + 1;
                                  }
                                  local_ec = -1;
                                  sscanf
                                            ((char *)local_158,"(%[^,], %f, %f )%n");
                                  if (local_ec < 0) {
                                    _sprintf(&DAT_01c56ed0,"Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_158 = local_158 + local_ec;
                                  uVar16 = 0xffffffff;
                                  pcVar20 = local_8ad + 1;
                                  do {
                                    if (uVar16 == 0) break;
                                    uVar16 = uVar16 - 1;
                                    cVar3 = *pcVar20;
                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                  } while (cVar3 != '\0');
                                  SVar17 = ~uVar16 - 1;
                                  if (0 < (int)SVar17) {
                                    pcVar20 = local_8ad + ~uVar16;
                                    do {
                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                      break;
                                      SVar17 = SVar17 - 1;
                                      pcVar20 = pcVar20 + -1;
                                    } while (0 < (int)SVar17);
                                  }
                                  (local_8ad + 1)[SVar17] = '\0';
                                  while (((&DAT_00626114)[(byte)(local_8ad[1] + 1)] & 2) != 0) {
                                    memmove
                                              (local_8ad + 1,local_8ad + 2,SVar17);
                                    SVar17 = SVar17 - 1;
                                  }
                                  if (local_15c != 0) {
                                    uVar16 = core_event_cpp_CEventList_getSfxHandle_FUN_004aa290
                                                       (param_1,local_8ad + 1);
                                    if (local_f0 <= 0.0) {
                                      sound_sndmain_cpp_setSfxVolume_FUN_00573950(uVar16,local_f4);
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_00573ab0
                                                (uVar16,local_f4,local_f0,0);
                                    }
                                  }
                                }
                                else {
                                  iVar5 = _strnicmp
                                                    (param_2,"flagOn",6);
                                  if ((iVar5 == 0) &&
                                     (((&DAT_00626114)[(byte)(param_2[6] + 1)] & 0xe0) == 0)) {
                                    local_158 = (byte *)(param_2 + 6);
                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                      local_158 = local_158 + 1;
                                    }
                                    pcVar20 = (char *)core_event_cpp_extractParenArg_FUN_004a1630
                                                                (&local_158,local_1fc,0x20,1);
                                    if (pcVar20 != (char *)0x0) {
LAB_004a2140:
                                      pcVar19 = &DAT_01c56ed0;
                                      do {
                                        cVar3 = *pcVar20;
                                        *pcVar19 = cVar3;
                                        if (cVar3 == '\0') {
                                          return 0;
                                        }
                                        cVar3 = pcVar20[1];
                                        pcVar20 = pcVar20 + 2;
                                        pcVar19[1] = cVar3;
                                        pcVar19 = pcVar19 + 2;
                                      } while (cVar3 != '\0');
                                      return 0;
                                    }
                                    if (local_15c != 0) {
                                      core_event_cpp_FUN_004a9870(param_1,local_1fc,1);
                                    }
                                  }
                                  else {
                                    iVar5 = _strnicmp
                                                      (param_2,"flagOff",7);
                                    if ((iVar5 == 0) &&
                                       (((&DAT_00626114)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                      local_158 = (byte *)(param_2 + 7);
                                      while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                        local_158 = local_158 + 1;
                                      }
                                      pcVar20 = (char *)core_event_cpp_extractParenArg_FUN_004a1630
                                                                  (&local_158,local_23c,0x20,1);
                                      if (pcVar20 != (char *)0x0) goto LAB_004a2140;
                                      if (local_15c != 0) {
                                        core_event_cpp_FUN_004a9870(param_1,local_23c,0);
                                      }
                                    }
                                    else {
                                      iVar5 = _strnicmp
                                                        (param_2,"gameFlagOn",10);
                                      if ((iVar5 == 0) &&
                                         (((&DAT_00626114)[(byte)(param_2[10] + 1)] & 0xe0) == 0)) {
                                        local_158 = (byte *)(param_2 + 10);
                                        while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                          local_158 = local_158 + 1;
                                        }
                                        pcVar20 = (char *)
                                                  core_event_cpp_extractParenArg_FUN_004a1630
                                                            (&local_158,local_1dc,0x20,1);
                                        if (pcVar20 != (char *)0x0) goto LAB_004a2140;
                                        if (local_15c != 0) {
                                          core_event_cpp_FUN_004a9a60(param_1,local_1dc,1);
                                        }
                                      }
                                      else {
                                        iVar5 = _strnicmp
                                                          (param_2,"gameFlagOff",0xb);
                                        if ((iVar5 == 0) &&
                                           (((&DAT_00626114)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)
                                           ) {
                                          local_158 = (byte *)(param_2 + 0xb);
                                          while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0)
                                          {
                                            local_158 = local_158 + 1;
                                          }
                                          pcVar20 = (char *)
                                                  core_event_cpp_extractParenArg_FUN_004a1630
                                                            (&local_158,local_21c,0x20,1);
                                          if (pcVar20 != (char *)0x0) goto LAB_004a2140;
                                          if (local_15c != 0) {
                                            core_event_cpp_FUN_004a9a60(param_1,local_21c,0);
                                          }
                                        }
                                        else {
                                          iVar5 = _strnicmp
                                                            (param_2,"hurtCharacter",0xd);
                                          if ((iVar5 == 0) &&
                                             (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] & 0xe0) ==
                                              0)) {
                                            local_158 = (byte *)(param_2 + 0xd);
                                            while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) !=
                                                   0) {
                                              local_158 = local_158 + 1;
                                            }
                                            local_e8 = -1;
                                            sscanf
                                                      ((char *)local_158," ( %[^,], %[^,],%f)%n");
                                            if (local_e8 < 2) {
                                              iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                                ("Syntax error in killHero() parms"
                                                                );
                                              return iVar5;
                                            }
                                            uVar16 = 0xffffffff;
                                            pcVar20 = local_1915 + 1;
                                            do {
                                              if (uVar16 == 0) break;
                                              uVar16 = uVar16 - 1;
                                              cVar3 = *pcVar20;
                                              pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                            } while (cVar3 != '\0');
                                            SVar17 = ~uVar16 - 1;
                                            if (0 < (int)SVar17) {
                                              pcVar20 = local_1915 + ~uVar16;
                                              do {
                                                if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2)
                                                    == 0) break;
                                                SVar17 = SVar17 - 1;
                                                pcVar20 = pcVar20 + -1;
                                              } while (0 < (int)SVar17);
                                            }
                                            (local_1915 + 1)[SVar17] = '\0';
                                            while (((&DAT_00626114)[(byte)(local_1915[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_1915 + 1,local_1915 + 2,SVar17);
                                              SVar17 = SVar17 - 1;
                                            }
                                            uVar16 = 0xffffffff;
                                            pcVar20 = local_3fd + 1;
                                            do {
                                              if (uVar16 == 0) break;
                                              uVar16 = uVar16 - 1;
                                              cVar3 = *pcVar20;
                                              pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                            } while (cVar3 != '\0');
                                            SVar17 = ~uVar16 - 1;
                                            if (0 < (int)SVar17) {
                                              pcVar20 = local_3fd + ~uVar16;
                                              do {
                                                if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2)
                                                    == 0) break;
                                                SVar17 = SVar17 - 1;
                                                pcVar20 = pcVar20 + -1;
                                              } while (0 < (int)SVar17);
                                            }
                                            (local_3fd + 1)[SVar17] = '\0';
                                            while (((&DAT_00626114)[(byte)(local_3fd[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_3fd + 1,local_3fd + 2,SVar17);
                                              SVar17 = SVar17 - 1;
                                            }
                                            local_158 = local_158 + local_e8;
                                            while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) !=
                                                   0) {
                                              local_158 = local_158 + 1;
                                            }
                                            pCVar7 = (CCharacter *)
                                                     core_event_cpp_resolveActorByName_FUN_004a1370
                                                               (local_1915 + 1,
                                                                g_CCharacterClassInfo.name_hash,
                                                                g_CCharacterClassInfo.class_name);
                                            if (pCVar7 == (CCharacter *)0x0) {
                                              return 0;
                                            }
                                            if (pCVar7 == 0x0FFFFFFF) {
                                              local_15c = 0;
                                            }
                                            iVar5 = core_event_cpp_parseDamageType_FUN_004a18e0
                                                              (local_3fd + 1,&local_e0);
                                            if (iVar5 == 0) {
                                              iVar5 = core_event_cpp_formatEventError_FUN_004a1210
                                                                ("Unknown damage type \"%s\" in hurtCharacter command."
                                                                );
                                              return iVar5;
                                            }
                                            if (local_15c != 0) {
                                              (*(((pCVar7->base).vtable._uc)->_uc).applyDamage)
                                                        (pCVar7,local_e0,local_e4);
                                            }
                                          }
                                          else {
                                            iVar5 = _strnicmp
                                                              (param_2,"incCounter",10);
                                            if ((iVar5 == 0) &&
                                               (((&DAT_00626114)[(byte)(param_2[10] + 1)] & 0xe0) ==
                                                0)) {
                                              local_158 = (byte *)(param_2 + 10);
                                              while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2)
                                                     != 0) {
                                                local_158 = local_158 + 1;
                                              }
                                              local_dc = -1;
                                              sscanf
                                                        ((char *)local_158,"( %[^ )] )%n");
                                              if (local_dc < 5) {
                                                _sprintf(&DAT_01c56ed0,
                                                           "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_158 = local_158 + local_dc;
                                              uVar16 = 0xffffffff;
                                              pcVar20 = local_d5d + 1;
                                              do {
                                                if (uVar16 == 0) break;
                                                uVar16 = uVar16 - 1;
                                                cVar3 = *pcVar20;
                                                pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                              } while (cVar3 != '\0');
                                              SVar17 = ~uVar16 - 1;
                                              if (0 < (int)SVar17) {
                                                pcVar20 = local_d5d + ~uVar16;
                                                do {
                                                  if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] & 2)
                                                      == 0) break;
                                                  SVar17 = SVar17 - 1;
                                                  pcVar20 = pcVar20 + -1;
                                                } while (0 < (int)SVar17);
                                              }
                                              (local_d5d + 1)[SVar17] = '\0';
                                              while (((&DAT_00626114)[(byte)(local_d5d[1] + 1)] & 2)
                                                     != 0) {
                                                memmove
                                                          (local_d5d + 1,local_d5d + 2,SVar17);
                                                SVar17 = SVar17 - 1;
                                              }
                                              if (local_15c != 0) {
                                                iVar5 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_004a9e80
                                                            (param_1,local_d5d + 1);
                                                core_event_cpp_CEventList_setCounter_FUN_004a9d70
                                                          (param_1,local_d5d + 1,iVar5 + 1);
                                              }
                                            }
                                            else {
                                              iVar5 = _strnicmp
                                                                (param_2,"decCounter",10);
                                              if ((iVar5 == 0) &&
                                                 (((&DAT_00626114)[(byte)(param_2[10] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_158 = (byte *)(param_2 + 10);
                                                while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2)
                                                       != 0) {
                                                  local_158 = local_158 + 1;
                                                }
                                                local_d8 = -1;
                                                sscanf
                                                          ((char *)local_158,"( %[^ )] )%n");
                                                if (local_d8 < 5) {
                                                  _sprintf(&DAT_01c56ed0,
                                                             "Error parsing decCounter arguments");
                                                  return 0;
                                                }
                                                local_158 = local_158 + local_d8;
                                                uVar16 = 0xffffffff;
                                                pcVar20 = local_1c35 + 1;
                                                do {
                                                  if (uVar16 == 0) break;
                                                  uVar16 = uVar16 - 1;
                                                  cVar3 = *pcVar20;
                                                  pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                } while (cVar3 != '\0');
                                                SVar17 = ~uVar16 - 1;
                                                if (0 < (int)SVar17) {
                                                  pcVar20 = local_1c35 + ~uVar16;
                                                  do {
                                                    if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)] &
                                                        2) == 0) break;
                                                    SVar17 = SVar17 - 1;
                                                    pcVar20 = pcVar20 + -1;
                                                  } while (0 < (int)SVar17);
                                                }
                                                (local_1c35 + 1)[SVar17] = '\0';
                                                while (((&DAT_00626114)[(byte)(local_1c35[1] + 1)] &
                                                       2) != 0) {
                                                  memmove
                                                            (local_1c35 + 1,local_1c35 + 2,SVar17);
                                                  SVar17 = SVar17 - 1;
                                                }
                                                if (local_15c != 0) {
                                                  iVar5 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_004a9e80
                                                            (param_1,local_1c35 + 1);
                                                  core_event_cpp_CEventList_setCounter_FUN_004a9d70
                                                            (param_1,local_1c35 + 1,iVar5 + -1);
                                                }
                                              }
                                              else {
                                                iVar5 = _strnicmp
                                                                  (param_2,"killCharacter",
                                                                   0xd);
                                                if ((iVar5 == 0) &&
                                                   (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] &
                                                    0xe0) == 0)) {
                                                  local_158 = (byte *)(param_2 + 0xd);
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  local_d0 = &local_1a0;
                                                  local_cc = 0.0;
                                                  local_d4 = -1;
                                                  sscanf
                                                            ((char *)local_158," ( %[^,], %[^,], %f , %f , %f , %f)%n")
                                                  ;
                                                  local_cc = local_cc * _DAT_005de178;
                                                  if (local_d4 < 0) {
                                                    local_cc = -1.0;
                                                    sscanf
                                                              ((char *)local_158," ( %[^,], %[^,], %f , %f , %f )%n")
                                                    ;
                                                  }
                                                  if (local_d4 < 0) {
                                                    local_d0 = (CVector3f *)0x0;
                                                    sscanf
                                                              ((char *)local_158," ( %[^,], %[^)])%n");
                                                  }
                                                  if (local_d4 < 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Syntax error in killCharacter() parms");
                                                  return iVar5;
                                                  }
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_4c5 + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_4c5 + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_4c5 + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_4c5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_4c5 + 1,local_4c5 + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_399 + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_399 + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_399 + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_399[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_399 + 1,local_399 + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  local_158 = local_158 + local_d4;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  pCVar7 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_4c5 + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_15c = 0;
                                                  }
                                                  iVar5 = core_event_cpp_parseDeathType_FUN_004a1750
                                                                    (local_399 + 1,&local_c8);
                                                  if (iVar5 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Unknown death type \"%s\" in killCharacter command.");
                                                  return iVar5;
                                                  }
                                                  if (local_15c != 0) {
                                                    (*(((pCVar7->base).vtable._uc)->_uc).kill)
                                                              (pCVar7,local_c8,local_d0,local_cc);
                                                  }
                                                }
                                                else {
                                                  iVar5 = _strnicmp
                                                                    (param_2,"killHero",8);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[8] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 8);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    if (g_CNetGamePtr->connection_type !=
                                                        CONNECTION_NONE) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Can't use killHero command in multi-player");
                                                  return iVar5;
                                                  }
                                                  local_c4 = -1;
                                                  sscanf
                                                            ((char *)local_158," ( %[^)])%n");
                                                  if (local_c4 < 2) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Syntax error in killHero() parms");
                                                  return iVar5;
                                                  }
                                                  local_158 = local_158 + local_c4;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  iVar5 = core_event_cpp_parseDeathType_FUN_004a1750
                                                                    (local_334,&local_c0);
                                                  if (iVar5 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Unknown death type \"%s\" in killHero command.");
                                                  return iVar5;
                                                  }
                                                  if ((local_15c != 0) &&
                                                     (iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4
                                                                      ), iVar5 != 0)) {
                                                    (**(code **)(*(int *)(iVar5 + 0x154) + 0xdc))
                                                              (iVar5,local_c0,0,0xbf800000);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"killSfx",7)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = (byte *)(param_2 + 7);
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_bc = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,)]%n");
                                                      if (local_bc < 3) {
                                                        _sprintf(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_bc;
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_19dd + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_19dd + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_19dd + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_19dd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_19dd + 1,local_19dd + 2,SVar17)
                                                    ;
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  local_b8 = 0.0;
                                                  pbVar11 = local_158;
                                                  if (*local_158 == 0x2c) {
                                                    local_bc = -1;
                                                    sscanf
                                                              ((char *)local_158,",%f%n");
                                                    if (local_bc < 3) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing killSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    pbVar11 = local_158 + local_bc;
                                                  }
                                                  do {
                                                    local_158 = pbVar11;
                                                    pbVar11 = local_158 + 1;
                                                  } while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0);
                                                  if (*local_158 != 0x29) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Can't find matching ) in killSfx command");
                                                    return 0;
                                                  }
                                                  local_158 = pbVar11;
                                                  if (local_15c != 0) {
                                                    uVar16 = 
                                                  core_event_cpp_CEventList_getSfxHandle_FUN_004aa290
                                                            (param_1,local_19dd + 1);
                                                  if (local_b8 <= 0.0) {
                                                    sound_sndmain_cpp_killSfx_FUN_00573a80(uVar16);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400
                                                            (param_1);
                                                  }
                                                  else {
                                                    sound_sndmain_cpp_setSfxFade_FUN_00573ab0
                                                              (uVar16,0.0,local_b8,1);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400
                                                            (param_1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"lightning",
                                                                       9);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = (byte *)(param_2 + 9);
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_b4 = -1;
                                                      sscanf
                                                                ((char *)local_158,"( )%n");
                                                      if (local_b4 < 2) {
                                                        _sprintf(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_b4;
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_weather_cpp_CWeather_createLightningStrike_FUN_005ae580
                                                            (0x02C997C0,0.1,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"playSfx",7)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = (byte *)(param_2 + 7);
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_b0 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,)]%n");
                                                      if (local_b0 < 3) {
                                                        _sprintf(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_b0;
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_7e5 + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_7e5 + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_7e5 + 1)[SVar17] = '\0';
                                                  while (pbVar11 = local_158,
                                                        ((&DAT_00626114)[(byte)(local_7e5[1] + 1)] &
                                                        2) != 0) {
                                                    memmove
                                                              (local_7e5 + 1,local_7e5 + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  puVar21 = &DAT_0061b568;
                                                  pcVar20 = local_a3d + 1;
                                                  for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1)
                                                  {
                                                    *(uint *)pcVar20 = *puVar21;
                                                    puVar21 = puVar21 + (uint)bVar23 * -2 + 1;
                                                    pcVar20 = (char *)((int)pcVar20 +
                                                                      ((uint)bVar23 * -2 + 1) * 4);
                                                  }
                                                  pbVar2 = local_158;
                                                  if (*pbVar11 == 0x2c) {
                                                    local_b0 = -1;
                                                    sscanf
                                                              ((char *)local_158,",%[^)]%n");
                                                    if (local_b0 < 3) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing playSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_b0;
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_a3d + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_a3d + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_a3d + 1)[SVar17] = 0;
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_a3d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_a3d + 1,local_a3d + 2,SVar17)
                                                      ;
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_a3d + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    pbVar2 = local_158;
                                                    if (0x13 < ~uVar16 - 1) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "handle name %s is too long, max %d chars"
                                                                );
                                                      return 0;
                                                    }
                                                  }
                                                  do {
                                                    local_158 = pbVar2;
                                                    pbVar2 = local_158 + 1;
                                                  } while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0);
                                                  if (*local_158 != 0x29) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Can't find matching ) in playSfx command");
                                                    return 0;
                                                  }
                                                  local_158 = pbVar2;
                                                  if (local_15c != 0) {
                                                    iVar5 = _strnicmp
                                                                      (local_7e5 + 1,&DAT_005dd96f,3
                                                                      );
                                                    if (iVar5 == 0) {
                                                      iVar5 = 
                                                  sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0
                                                            (1);
                                                  if (iVar5 != 0) {
                                                    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
                                                    sound_sndmain_cpp_setNextSfxChannel_FUN_00572980
                                                              (1);
                                                    uVar16 = 
                                                  core_sound_cpp_CSound_playSound_FUN_0057d880
                                                            (0x02C82A60,param_1,local_7e5 + 1);
                                                  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
                                                  if (local_a3d[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_004aa2d0
                                                            (param_1,local_a3d + 1,uVar16);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar16 = 
                                                  core_sound_cpp_CSound_playSound_FUN_0057d880
                                                            (0x02C82A60,param_1,local_7e5 + 1);
                                                  if (local_a3d[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_004aa2d0
                                                            (param_1,local_a3d + 1,uVar16);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"resetGore",
                                                                       9);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = (byte *)(param_2 + 9);
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_ac = -1;
                                                      sscanf
                                                                ((char *)local_158,"( )%n");
                                                      if (local_ac < 2) {
                                                        _sprintf(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_ac;
                                                  if (local_15c != 0) {
                                                    core_gore_cpp_CGore_reset_FUN_004e5c00
                                                              (g_CGorePtr);
                                                    core_fire_cpp_CFireEffect_init_FUN_004b4b30
                                                              (0x01C57074);
                                                    local_a8 = 0x01D2C900->current_set_index;
                                                    for (iVar5 = 0; this_ptr_00 = 0x01D2C900,
                                                        iVar5 < 0x01D2C900->num_sets;
                                                        iVar5 = iVar5 + 1) {
                                                      0x01D2C900->current_set_index = iVar5;
                                                                                                            
                                                  core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420
                                                            (this_ptr_00);
                                                  iVar6 = 0;
                                                  for (iVar8 = 0;
                                                      iVar8 < g_CDemonSetPtr->actor_count;
                                                      iVar8 = iVar8 + 1) {
                                                    pCVar10 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c600
                                                            (*(CDemonActor **)
                                                              ((int)g_CDemonSetPtr->actors + iVar6),
                                                             g_CBodyPartClassInfo.name_hash);
                                                  if ((pCVar10 != (CDemonActor *)0x0) &&
                                                     (pCVar10->lifecycle_state == ACTOR_CREATED)) {
                                                    pCVar10->lifecycle_state = ACTOR_DESTROYED;
                                                  }
                                                  iVar6 = iVar6 + 4;
                                                  }
                                                  }
                                                  0x01D2C900->current_set_index = local_a8;
                                                  core_mission_cpp_FUN_0051b7b0();
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setActorBool",0xc);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0xc);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_a4 = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%[^,], %[^,], %[^)])%n");
                                                    if (local_a4 < 3) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing setActorBool parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_a4;
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_58d + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_58d + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_58d + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_58d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_58d + 1,local_58d + 2,SVar17)
                                                      ;
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_e25 + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_e25 + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_e25 + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_e25[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_e25 + 1,local_e25 + 2,SVar17)
                                                      ;
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_139d + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_139d + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_139d + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_139d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_139d + 1,local_139d + 2,
                                                                 SVar17);
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    iVar6 = 0;
                                                    local_a0 = 0;
                                                    iVar5 = local_a0;
                                                    if (0 < 0x00000002) {
                                                      iVar8 = 0;
                                                      do {
                                                        if (*(int *)((int)&DAT_0061b4d4 + iVar8) ==
                                                            0) {
                                                          iVar12 = 
                                                  _stricmp
                                                            ("spectralFlag" + iVar8,
                                                             local_e25 + 1);
                                                  iVar5 = (int)&DAT_0061b4d4 + iVar8;
                                                  if (iVar12 == 0) break;
                                                  }
                                                  iVar6 = iVar6 + 1;
                                                  iVar8 = iVar8 + 0x48;
                                                  iVar5 = local_a0;
                                                  } while (iVar6 < 0x00000002);
                                                  }
                                                  local_a0 = iVar5;
                                                  if (local_a0 == 0) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "%s is not a valid boolean actor variable name");
                                                    return 0;
                                                  }
                                                  pCVar7 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_58d + 1,
                                                             *(uint *)(local_a0 + 0x44),
                                                             (char *)(local_a0 + 0x22));
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == 0x0FFFFFFF) || (local_15c == 0))
                                                  {
                                                    pcVar20 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (param_1,local_139d + 1);
                                                  if (pcVar20 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_139d + 1);
                                                  *(int *)((pCVar7->base).actor_name +
                                                          *(int *)(local_a0 + 0x40)) = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setCameraAmbient",0x10);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0x10);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_98 = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%[^,], %f)%n");
                                                    if (local_98 < 3) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing setCameraAmbient parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_98;
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_b05 + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_b05 + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_b05 + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_b05[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_b05 + 1,local_b05 + 2,SVar17)
                                                      ;
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0
                                                            (g_CDemonSetPtr,local_b05 + 1);
                                                  if (iVar5 < 0) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Camera \"%s\" does not exist.");
                                                    return 0;
                                                  }
                                                  if ((local_9c < 0.0) ||
                                                     (0x42c80000 < (int)local_9c)) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Ambient value %g is out of range (1..100)");
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0
                                                            (g_CDemonSetPtr,iVar5,
                                                             local_9c * (float)_DAT_005de17c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"setCounter"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = (byte *)(param_2 + 10);
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_94 = -1;
                                                      sscanf
                                                                ((char *)local_158,"( %[^,)]%n");
                                                      if (local_94 < 5) {
                                                        _sprintf(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_94;
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_107d + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_107d + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_107d + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_107d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_107d + 1,local_107d + 2,SVar17)
                                                    ;
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  local_8c = 0;
                                                  if (*local_158 == 0x2c) {
                                                    local_94 = -1;
                                                    sscanf
                                                              ((char *)local_158,",%d%n");
                                                    if (local_94 < 1) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing setCounter value argument"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_94;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                  }
                                                  if (*local_158 != 0x29) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Error parsing setCounter arguments");
                                                    return 0;
                                                  }
                                                  local_158 = local_158 + 1;
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setCounter_FUN_004a9d70
                                                            (param_1,local_107d + 1,local_8c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setDoorState",0xc);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0xc);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_88 = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%[^,], %[^)])%n");
                                                    if (local_88 < 5) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing setDoorState command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_88;
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_120d + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_120d + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_120d + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_120d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_120d + 1,local_120d + 2,
                                                                 SVar17);
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_1145 + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_1145 + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_1145 + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_1145[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1145 + 1,local_1145 + 2,
                                                                 SVar17);
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    pCVar7 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_120d + 1,
                                                             g_CDoorClassInfo.name_hash,
                                                             g_CDoorClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_15c = (uint)pCVar7 ^ (uint)0x0FFFFFFF;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_1145 + 1,&DAT_005ddb72);
                                                  if (iVar5 == 0) {
                                                    uVar13 = 2;
                                                  }
                                                  else {
                                                    iVar5 = _stricmp
                                                                      (local_1145 + 1,
                                                                       "closed");
                                                    uVar13 = 0;
                                                    if (iVar5 != 0) {
                                                      iVar5 = _stricmp
                                                                        (local_1145 + 1,
                                                                         "opening");
                                                      if (iVar5 == 0) {
                                                        uVar13 = 1;
                                                      }
                                                      else {
                                                        iVar5 = _stricmp
                                                                          (local_1145 + 1,
                                                                           "closing");
                                                        if (iVar5 != 0) {
                                                          _sprintf(&DAT_01c56ed0,
                                                                     "Invalid door state '%s'"
                                                                    );
                                                          return 0;
                                                        }
                                                        uVar13 = 3;
                                                      }
                                                    }
                                                  }
                                                  if (local_15c != 0) {
                                                    core_door_cpp_FUN_004774f0(pCVar7,uVar13);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setGroupAmbient",0xf);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0xf);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_7c = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%d, %f)%n");
                                                    if (local_7c < 3) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing setGroupAmbient parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_7c;
                                                    if ((local_80 < 0.0) ||
                                                       (0x42c80000 < (int)local_80)) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Ambient value %g is out of range (1..100)"
                                                                );
                                                      return 0;
                                                    }
                                                    if (local_15c != 0) {
                                                                                                            
                                                  core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00555970
                                                            (g_CDemonSetPtr,local_84,
                                                             local_80 * (float)_DAT_005de17c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0x13] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0x13);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_78 = -1;
                                                    sscanf
                                                              ((char *)local_158,"( %[^ ,] , %d )%n");
                                                    if (local_78 < 0) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Error parsing setLightFilterFrame parms");
                                                  return iVar5;
                                                  }
                                                  local_158 = local_158 + local_78;
                                                  core_set_cpp_CDemonSet_addLightFilter_FUN_00555a20
                                                            (g_CDemonSetPtr,local_71c,&local_70,
                                                             &local_6c);
                                                  if (local_70 == (C3DSLight *)0x0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("SpotLight %s doesn't exist.");
                                                  return iVar5;
                                                  }
                                                  if ((local_74 < 0) ||
                                                     (local_70->filter_count <= local_74)) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Invalid filter frame, %s has %d filters");
                                                  return iVar5;
                                                  }
                                                  if (local_15c != 0) {
                                                    if (local_6c == (CDemonLight *)0x0) {
                                                      _DAT_01d1d400 = "..\\core\\event.cpp";
                                                      _DAT_01d1d404 = 0x75a;
                                                      core_main_c_FUN_005030e0
                                                                ("Can't find CDemonLight for light %s in setLightFilterFrame meta-command"
                                                                );
                                                    }
                                                                                                        
                                                  core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0055d3f0
                                                            (local_70,local_74,local_6c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setLeverState",0xd);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0xd);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_68 = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%[^,], %[^)])%n");
                                                    if (local_68 < 5) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing setLeverState command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_68;
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_1b6d + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_1b6d + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_1b6d + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_1b6d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1b6d + 1,local_1b6d + 2,
                                                                 SVar17);
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_12d5 + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_12d5 + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_12d5 + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_12d5[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_12d5 + 1,local_12d5 + 2,
                                                                 SVar17);
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    pCVar7 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_1b6d + 1,
                                                             g_CLeverClassInfo.name_hash,
                                                             g_CLeverClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == 0x0FFFFFFF) || (local_15c == 0))
                                                  {
                                                    pcVar20 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (param_1,local_12d5 + 1);
                                                  if (pcVar20 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_12d5 + 1);
                                                  if (iVar5 == 0) {
                                                    uStack_160 = 0;
                                                  }
                                                  else {
                                                    uStack_160 = 0x3ff00000;
                                                  }
                                                  local_164 = 0;
                                                  core_lever_cpp_FUN_004ff3f0
                                                            (pCVar7,(float)(double)((ulonglong)
                                                                                    uStack_160 <<
                                                                                   0x20));
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setModelState",0xd);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0xd);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_60 = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%[^,], %[^)])%n");
                                                    if (local_60 < 5) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing setModelState command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_60;
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_655 + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_655 + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_655 + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_655[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_655 + 1,local_655 + 2,SVar17)
                                                      ;
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_975 + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_975 + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_975 + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_975[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_975 + 1,local_975 + 2,SVar17)
                                                      ;
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    pCVar7 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_655 + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar20 = local_975 + 1;
                                                    iVar5 = 0;
                                                    pCVar14 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                                                            (&(pCVar7->model).base);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_00524150
                                                            (pCVar14,pcVar20,iVar5);
                                                  if (iVar5 < 0) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Model %s does not have state %s");
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                                            (&(pCVar7->model).base,iVar5,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setSunlight",0xb);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0xb);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_58 = -1;
                                                    sscanf
                                                              ((char *)local_158,
                                                               "(%f , %f , %f , %f )%n");
                                                    if (local_58 < 5) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing setSunlight command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_54 = SQRT(local_180 * local_180 +
                                                                    local_188 * local_188 +
                                                                    local_184 * local_184);
                                                    local_158 = local_158 + local_58;
                                                    if (local_54 <= 0.0) {
                                                      local_184 = 0.0;
                                                      local_188 = 0.0;
                                                      local_180 = 0.0;
                                                    }
                                                    else {
                                                      fVar4 = 1.0 / local_54;
                                                      local_188 = local_188 * fVar4;
                                                      local_184 = local_184 * fVar4;
                                                      local_180 = local_180 * fVar4;
                                                    }
                                                    if (local_15c != 0) {
                                                      core_set_cpp_FUN_00555930
                                                                (g_CDemonSetPtr,local_188,local_184,
                                                                 local_180,local_5c);
                                                    }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"setTimer",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = (byte *)(param_2 + 8);
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_48 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,], %f)%n");
                                                      if (local_48 < 3) {
                                                        _sprintf(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_48;
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_16bd + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_16bd + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_16bd + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_16bd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_16bd + 1,local_16bd + 2,SVar17)
                                                    ;
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_16bd + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  if (0x1f < ~uVar16 - 1) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Timer name \"%s\" is too long, (max %d chars)");
                                                    return 0;
                                                  }
                                                  if (local_4c < 0.0) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_004a9bf0
                                                            (param_1,local_16bd + 1,local_4c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"setWeather"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = (byte *)(param_2 + 10);
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_40 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^)])%n");
                                                      if (local_40 < 3) {
                                                        _sprintf(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_40;
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_184d + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_184d + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_184d + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_184d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_184d + 1,local_184d + 2,SVar17)
                                                    ;
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_184d + 1,&DAT_005ddeb3);
                                                  type = WEATHER_TYPE_NONE;
                                                  if (iVar5 != 0) {
                                                    iVar5 = _stricmp
                                                                      (local_184d + 1,&DAT_005ddeb8)
                                                    ;
                                                    if (iVar5 == 0) {
                                                      type = WEATHER_TYPE_RAIN;
                                                    }
                                                    else {
                                                      iVar5 = _stricmp
                                                                        (local_184d + 1,
                                                                         &DAT_005ddebd);
                                                      if (iVar5 != 0) {
                                                        _sprintf(&DAT_01c56ed0,
                                                                   "Invalid weather type: %s"
                                                                  );
                                                        return 0;
                                                      }
                                                      type = WEATHER_TYPE_SNOW;
                                                    }
                                                  }
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0
                                                            (0x02C997C0,type);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "shakeScreen",0xb);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0xb);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_2c = -1;
                                                    sscanf
                                                              ((char *)local_158,
                                                               "( %f, %f, %f, %f )%n");
                                                    if (local_2c < 5) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing shakeScreen command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_2c;
                                                    if (local_15c != 0) {
                                                                                                            
                                                  core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0
                                                            (g_CDemonSetPtr,local_3c,local_38,
                                                             local_34,local_30);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "slamModelToMotion",0x11);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0x11);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_28 = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%[^,], %[^)])%n");
                                                    if (local_28 < 5) {
                                                      _sprintf(&DAT_01c56ed0,
                                                                 "Error parsing slamModelToMotion command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_28;
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_1e8d + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_1e8d + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_1e8d + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_1e8d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1e8d + 1,local_1e8d + 2,
                                                                 SVar17);
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    uVar16 = 0xffffffff;
                                                    pcVar20 = local_1aa5 + 1;
                                                    do {
                                                      if (uVar16 == 0) break;
                                                      uVar16 = uVar16 - 1;
                                                      cVar3 = *pcVar20;
                                                      pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar17 = ~uVar16 - 1;
                                                    if (0 < (int)SVar17) {
                                                      pcVar20 = local_1aa5 + ~uVar16;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar20[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar17 = SVar17 - 1;
                                                        pcVar20 = pcVar20 + -1;
                                                      } while (0 < (int)SVar17);
                                                    }
                                                    (local_1aa5 + 1)[SVar17] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_1aa5[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1aa5 + 1,local_1aa5 + 2,
                                                                 SVar17);
                                                      SVar17 = SVar17 - 1;
                                                    }
                                                    pCVar7 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_1e8d + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar20 = local_1aa5 + 1;
                                                    iVar5 = 0;
                                                    this_ptr = &pCVar7->model;
                                                    pCVar14 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                                                            (&this_ptr->base);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                                                            (pCVar14,pcVar20,iVar5);
                                                  if (iVar5 < 0) {
                                                    _sprintf(&DAT_01c56ed0,
                                                               "Model %s does not have motion %s");
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
                                                            (&this_ptr->base,iVar5,0.0);
                                                  iVar5 = 1;
                                                  pSVar15 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                                            (&this_ptr->base);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                                            (&this_ptr->base,pSVar15->state_index,
                                                             iVar5);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "switchCamera",0xc);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    pbVar11 = (byte *)(param_2 + 0xc);
                                                    while (((&DAT_00626114)[(byte)(*pbVar11 + 1)] &
                                                           2) != 0) {
                                                      pbVar11 = pbVar11 + 1;
                                                    }
                                                    local_24 = -1;
                                                    puVar21 = &DAT_0061b630;
                                                    pcVar20 = local_2d0;
                                                    for (iVar5 = 0x19; iVar5 != 0;
                                                        iVar5 = iVar5 + -1) {
                                                      *(uint *)pcVar20 = *puVar21;
                                                      puVar21 = puVar21 + (uint)bVar23 * -2 + 1;
                                                      pcVar20 = pcVar20 + ((uint)bVar23 * -2 + 1) *
                                                                          4;
                                                    }
                                                    local_158 = pbVar11;
                                                    sscanf
                                                              ((char *)pbVar11," ( %[^ ,)]%n");
                                                    if (local_24 < 2) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar5;
                                                  }
                                                  local_158 = local_158 + local_24;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0
                                                            (g_CDemonSetPtr,local_2d0);
                                                  if (iVar5 < 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Camera \"%s\" doesn't exist");
                                                  return iVar5;
                                                  }
                                                  local_20 = 3.0;
                                                  if (*local_158 == 0x2c) {
                                                    local_24 = -1;
                                                    sscanf
                                                              ((char *)local_158,",%f%n");
                                                    if (local_24 < 2) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar5;
                                                  }
                                                  local_158 = local_158 + local_24;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  }
                                                  if (*local_158 != 0x29) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Missing ')' in switchCamera() statement");
                                                  return iVar5;
                                                  }
                                                  local_158 = local_158 + 1;
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_0055b1e0
                                                            (g_CDemonSetPtr,iVar5,local_20);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0x15] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = (byte *)(param_2 + 0x15);
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_1c = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%[^)])%n");
                                                    if (local_1c < 3) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Error parsing turnToFieldNotesEntry command");
                                                  return iVar5;
                                                  }
                                                  local_158 = local_158 + local_1c;
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_218d + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_218d + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_218d + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_218d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_218d + 1,local_218d + 2,SVar17)
                                                    ;
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  if (_DAT_01c56ecc != 0) {
                                                    iVar5 = 
                                                  core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004bde20
                                                            (g_CFieldNotesPtr,local_218d + 1);
                                                  switch(iVar5) {
                                                  case 0:
                                                  case 1:
                                                  case 2:
                                                  case 3:
                                                  case 4:
                                                  case 5:
                                                  case 6:
                                                    goto switchD_004a2582_caseD_2;
                                                  default:
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Field notes entry '%s' not found");
                                                  return iVar5;
                                                  }
                                                  }
                                                  core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004bde80
                                                            (g_CFieldNotesPtr,local_218d + 1);
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"warpTo",6);
                                                    if ((iVar5 != 0) ||
                                                       (((&DAT_00626114)[(byte)(param_2[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Unknown meta-function starting at %s");
                                                  return iVar5;
                                                  }
                                                  local_158 = (byte *)(param_2 + 6);
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            ((char *)local_158,"(%[^,], %[^)])%n");
                                                  if (local_18 < 5) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Error parsing warpTo command parms");
                                                  return iVar5;
                                                  }
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_152d + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_152d + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_152d + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_152d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_152d + 1,local_152d + 2,SVar17)
                                                    ;
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_c95 + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar17 = ~uVar16 - 1;
                                                  if (0 < (int)SVar17) {
                                                    pcVar20 = local_c95 + ~uVar16;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar20[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar17 = SVar17 - 1;
                                                      pcVar20 = pcVar20 + -1;
                                                    } while (0 < (int)SVar17);
                                                  }
                                                  (local_c95 + 1)[SVar17] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_c95[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_c95 + 1,local_c95 + 2,SVar17);
                                                    SVar17 = SVar17 - 1;
                                                  }
                                                  local_158 = local_158 + local_18;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  pCVar7 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_152d + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_15c = 0;
                                                  }
                                                  else if (local_15c != 0) {
                                                    local_1bc.area_id =
                                                         (pCVar7->base).location.area_id;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_c95 + 1,"%f,%f,%f,%f,%f,%f%n")
                                                  ;
                                                  if (local_18 < 0) {
                                                    if ((local_15c != 0) &&
                                                       (pUVar22 = &(pCVar7->base).orient,
                                                       &local_1ac != (CVector3f *)pUVar22)) {
                                                      local_1ac.x = (pUVar22->vec).x;
                                                      local_1ac.y = (pCVar7->base).orient.vec.y;
                                                      local_1ac.z = (pCVar7->base).orient.vec.z;
                                                    }
                                                    sscanf
                                                              (local_c95 + 1,"%f,%f,%f,%f%n");
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_15c != 0) &&
                                                       (pUVar22 = &(pCVar7->base).orient,
                                                       &local_1ac != (CVector3f *)pUVar22)) {
                                                      local_1ac.x = (pUVar22->vec).x;
                                                      local_1ac.y = (pCVar7->base).orient.vec.y;
                                                      local_1ac.z = (pCVar7->base).orient.vec.z;
                                                    }
                                                    sscanf
                                                              (local_c95 + 1,"%f,%f,%f%n");
                                                  }
                                                  if (local_18 < 0) {
                                                    pCVar9 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_c95 + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar9 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar9 == 0x0FFFFFFF) {
                                                    local_15c = 0;
                                                  }
                                                  else {
                                                    local_1bc.position.x =
                                                         (pCVar9->base).location.position.x;
                                                    local_1bc.position.y =
                                                         (pCVar9->base).location.position.y;
                                                    local_1bc.position.z =
                                                         (pCVar9->base).location.position.z;
                                                    pUVar22 = &(pCVar9->base).orient;
                                                    local_1bc.area_id =
                                                         (pCVar9->base).location.area_id;
                                                    if (&local_1ac != (CVector3f *)pUVar22) {
                                                      local_1ac.x = (pUVar22->vec).x;
                                                      local_1ac.y = (pCVar9->base).orient.vec.y;
                                                      local_1ac.z = (pCVar9->base).orient.vec.z;
                                                    }
                                                  }
                                                  uVar16 = 0xffffffff;
                                                  pcVar20 = local_c95 + 1;
                                                  do {
                                                    if (uVar16 == 0) break;
                                                    uVar16 = uVar16 - 1;
                                                    cVar3 = *pcVar20;
                                                    pcVar20 = pcVar20 + (uint)bVar23 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  local_18 = ~uVar16 - 1;
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_c95[local_18 + 1] != '\0')) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Error parsing warpTo command parms");
                                                  return iVar5;
                                                  }
                                                  if (local_15c != 0) {
                                                    if (local_1bc.area_id !=
                                                        (pCVar7->base).location.area_id) {
                                                      (*((pCVar7->base).vtable._ub)->setup)
                                                                ((CDemonActor *)pCVar7);
                                                    }
                                                    pCVar9 = (CCharacter *)
                                                                                                                          
                                                  core_actor_cpp_castToClassHash_FUN_0040c600
                                                            ((CDemonActor *)pCVar7,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar9 != (CCharacter *)0x0) {
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseFromGrab)(pCVar9);
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseVictim)(pCVar9);
                                                  }
                                                  (pCVar7->base).location.area_id =
                                                       local_1bc.area_id;
                                                  (*((pCVar7->base).vtable._ub)->
                                                    setPositionAndOrientation)
                                                            ((CDemonActor *)pCVar7,
                                                             &local_1bc.position,&local_1ac);
                                                  if (pCVar7 == *(CCharacter **)
                                                                 (_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
                                                                                                        
                                                  core_mission_cpp_CDemonMission_setTeleportTarget_FUN_0051b700
                                                            (0x01D2C900,&local_1bc);
                                                  }
                                                  if (pCVar7 == (CCharacter *)
                                                                g_CScriptPtr->focus_actor) {
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
    }
switchD_004a2582_caseD_2:
    while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
      local_158 = local_158 + 1;
    }
    if (*local_158 != 0) {
      iVar5 = core_event_cpp_formatEventError_FUN_004a1210("Extra characters found");
      return iVar5;
    }
  }
  return 1;
}
