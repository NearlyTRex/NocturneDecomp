// Name: core_event.cpp_FUN_0048c2e0
// Address: 0048c2e0
// Address Range: [[0048c2e0, 00491a06]]
// Convention: unknown
// Signature: int core_event_cpp_FUN_0048c2e0(CEventList *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_event_cpp_FUN_0048c2e0(CEventList *param_1,char *param_2)

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
  EDeathState EVar12;
  int iVar13;
  uint uVar14;
  CMotionList *pCVar15;
  SMotion *pSVar16;
  uint uVar17;
  SIZE_T SVar18;
  byte *puVar19;
  char *pcVar20;
  char *pcVar21;
  uint *puVar22;
  UOrientationVector *pUVar23;
  char (*str1) [32];
  CPuzzle *puzzle;
  byte bVar24;
  uint in_stack_ffffd204;
  char local_2cfd [256];
  char local_2bfd [256];
  char local_2afd [256];
  char local_29fd [256];
  char local_28fd [256];
  char local_27fd [256];
  char local_26fd [256];
  char local_25fd [256];
  char local_24fd [257];
  char local_23fc [256];
  char local_22fc [255];
  char local_21fd [200];
  char local_2135 [200];
  char local_206d [200];
  char local_1fa5 [200];
  char local_1edd [200];
  char local_1e15 [200];
  char local_1d4d [201];
  char local_1c84 [199];
  char local_1bbd [200];
  char local_1af5 [200];
  char local_1a2d [201];
  char local_1964 [199];
  char local_189d [200];
  char local_17d5 [200];
  char local_170d [200];
  char local_1645 [200];
  char local_157d [200];
  char local_14b5 [200];
  char local_13ed [200];
  char local_1325 [200];
  char local_125d [200];
  char local_1195 [200];
  char local_10cd [200];
  char local_1005 [200];
  char local_f3d [200];
  char local_e75 [200];
  char local_dad [200];
  char local_ce5 [2];
  uint local_ce3 [49];
  char local_c1d [200];
  char local_b55 [200];
  char local_a8d [200];
  char local_9c5 [200];
  char local_8fd [200];
  char local_835 [200];
  char local_76d [200];
  char local_6a5 [200];
  char local_5dd [201];
  char local_514 [200];
  char local_44c [99];
  char local_3e9 [100];
  char local_385 [101];
  char local_320 [100];
  byte local_2bc [48];
  byte local_28c [32];
  byte local_26c [32];
  byte local_24c [32];
  byte local_22c [32];
  CVector3f local_20c;
  int local_200;
  CVector3f local_1fc;
  int local_1f0;
  CLocation local_1ec;
  CVector3f local_1dc;
  CVector3f local_1d0;
  CVector3f local_1c4 [2];
  byte local_1ac [12];
  CVector3f local_1a0;
  CVector3f local_194;
  float local_188;
  float local_184;
  float local_180;
  uint local_17c;
  uint uStack_178;
  char *local_174;
  uint local_170;
  byte *local_16c;
  _FILE *local_168;
  int local_164;
  int local_160;
  int local_15c;
  C3DSLight *local_158;
  CDemonLight *local_154;
  int local_150;
  int local_14c;
  int local_148;
  float local_144;
  float local_140;
  int local_13c;
  int local_138;
  int local_134;
  uint local_130;
  int local_12c;
  int local_128;
  CCharacter *local_124;
  int local_120;
  int local_11c;
  float local_118;
  float local_114;
  int local_110;
  uint local_10c;
  float local_108;
  int local_104;
  int local_100;
  float local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  CVector3f *local_e8;
  float local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
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
  C3DSLight *local_80;
  CDemonLight *local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  float local_68;
  int local_64;
  float local_5c;
  int local_58;
  float local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  int local_28;
  uint local_24;
  int local_20;
  CCharacter *local_1c;
  int local_18;
  int local_14;
  
  bVar24 = 0;
  DAT_01c734b0 = 0;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar5 = _stricmp(param_2,&DAT_005bdf86), iVar5 != 0)) {
    if (*param_2 == '.') {
      param_2 = param_2 + 1;
    }
    local_170 = (uint)(_DAT_01c734ac == 0);
    local_16c = &DAT_005bdf8b;
    pcVar21 = param_2;
    do {
      pcVar20 = pcVar21;
      if (*pcVar21 == '(') goto LAB_0048c367;
      if (*pcVar21 == '\0') break;
      pcVar20 = pcVar21 + 1;
      if (*pcVar20 == '(') goto LAB_0048c367;
      pcVar21 = pcVar21 + 2;
    } while (*pcVar20 != '\0');
    pcVar20 = (char *)0x0;
LAB_0048c367:
    if (pcVar20 == (char *)0x0) {
      if (0 < (param_1->events).count) {
        str1 = (param_1->events).names;
        iVar5 = 0;
        do {
          iVar6 = _stricmp(*str1,param_2);
          if (iVar6 == 0) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          str1 = str1 + 1;
        } while (iVar5 < (param_1->events).count);
      }
      uVar17 = 0xffffffff;
      pcVar21 = param_2;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar3 = *pcVar21;
        pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
      } while (cVar3 != '\0');
      if (0x1f < ~uVar17 - 1) {
        iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0("Event name %s is too long");
        return iVar5;
      }
      if (99 < (param_1->events).count) {
        local_168 = _fopen("events.txt",&DAT_005bdfa6);
        if (local_168 != (_FILE *)0x0) {
          iVar5 = 0;
          if (0 < (param_1->events).count) {
            do {
              FUN_005a3140(local_168,&DAT_005bdfb4);
              iVar5 = iVar5 + 1;
            } while (iVar5 < (param_1->events).count);
          }
          _fclose();
        }
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0x27d;
        core_main_c_FUN_004e4330();
      }
      pcVar20 = (param_1->events).names[(param_1->events).count];
      pcVar21 = pcVar20;
      do {
        cVar3 = *param_2;
        *pcVar21 = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = param_2[1];
        param_2 = param_2 + 2;
        pcVar21[1] = cVar3;
        pcVar21 = pcVar21 + 2;
      } while (cVar3 != '\0');
      local_24 = 0;
      local_174 = pcVar20;
      do {
        uVar17 = 0xffffffff;
        pcVar21 = local_174;
        do {
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          cVar3 = *pcVar21;
          pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
        } while (cVar3 != '\0');
        if (~uVar17 - 1 <= local_24) {
          if (local_170 == 0) {
            return 1;
          }
          (param_1->events).count = (param_1->events).count + 1;
          return 1;
        }
        iVar5 = toupper((uint)(byte)*pcVar20);
        *pcVar20 = (byte)iVar5;
        iVar5 = core_event_cpp_isValidIdentifierChar_FUN_00495460((uint)(byte)*pcVar20);
        if (iVar5 == 0) {
          iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0("Event name %s is not valid");
          return iVar5;
        }
        local_24 = local_24 + 1;
        pcVar20 = pcVar20 + 1;
      } while( true );
    }
    iVar5 = _strnicmp(param_2,"activateGadget",0xe);
    if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
      local_16c = (byte *)(param_2 + 0xe);
      while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
        local_16c = local_16c + 1;
      }
      local_164 = -1;
      sscanf((char *)local_16c,"(%[^,], %[^,], %n");
      if (local_164 < 3) {
        iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0("Error parsing activateGadget command");
        return iVar5;
      }
      local_16c = local_16c + local_164;
      uVar17 = 0xffffffff;
      pcVar21 = local_26fd + 1;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar3 = *pcVar21;
        pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
      } while (cVar3 != '\0');
      SVar18 = ~uVar17 - 1;
      if (0 < (int)SVar18) {
        pcVar21 = local_26fd + ~uVar17;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
          SVar18 = SVar18 - 1;
          pcVar21 = pcVar21 + -1;
        } while (0 < (int)SVar18);
      }
      (local_26fd + 1)[SVar18] = '\0';
      while (((&DAT_006074b8)[(byte)(local_26fd[1] + 1)] & 2) != 0) {
        memmove(local_26fd + 1,local_26fd + 2,SVar18);
        SVar18 = SVar18 - 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = local_28fd + 1;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar3 = *pcVar21;
        pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
      } while (cVar3 != '\0');
      SVar18 = ~uVar17 - 1;
      if (0 < (int)SVar18) {
        pcVar21 = local_28fd + ~uVar17;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
          SVar18 = SVar18 - 1;
          pcVar21 = pcVar21 + -1;
        } while (0 < (int)SVar18);
      }
      (local_28fd + 1)[SVar18] = '\0';
      while (((&DAT_006074b8)[(byte)(local_28fd[1] + 1)] & 2) != 0) {
        memmove(local_28fd + 1,local_28fd + 2,SVar18);
        SVar18 = SVar18 - 1;
      }
      pcVar21 = (char *)core_event_cpp_extractParenArg_FUN_0048bc10(&local_16c,local_24fd + 1,0x100)
      ;
      if (pcVar21 != (char *)0x0) goto LAB_0048c717;
      uVar17 = 0xffffffff;
      pcVar21 = local_24fd + 1;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar3 = *pcVar21;
        pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
      } while (cVar3 != '\0');
      SVar18 = ~uVar17 - 1;
      if (0 < (int)SVar18) {
        pcVar21 = local_24fd + ~uVar17;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
          SVar18 = SVar18 - 1;
          pcVar21 = pcVar21 + -1;
        } while (0 < (int)SVar18);
      }
      (local_24fd + 1)[SVar18] = '\0';
      while (((&DAT_006074b8)[(byte)(local_24fd[1] + 1)] & 2) != 0) {
        memmove(local_24fd + 1,local_24fd + 2,SVar18);
        SVar18 = SVar18 - 1;
      }
      pCVar7 = (CCharacter *)
               core_event_cpp_resolveActorByName_FUN_0048b950
                         (local_26fd + 1,g_CHeroClassInfo.name_hash,g_CHeroClassInfo.class_name);
      if (pCVar7 == (CCharacter *)0x0) {
        return 0;
      }
      if (pCVar7 == 0x0FFFFFFF) {
        local_170 = (uint)pCVar7 ^ (uint)0x0FFFFFFF;
      }
      pcVar21 = (char *)0x0;
      iVar5 = _stricmp(local_28fd + 1,"compass");
      if (iVar5 == 0) {
        pcVar21 = pCVar7[2].flames[0x13].base.create_event + 0x58;
      }
      iVar5 = _stricmp(local_28fd + 1,&DAT_005be056);
      if (iVar5 == 0) {
        pcVar21 = pCVar7[2].flames[0x13].base.create_event + 0x5c;
      }
      if (pcVar21 == (char *)0x0) {
        iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0("Invalid gadget type: %s");
        return iVar5;
      }
      if (_DAT_01c734ac == 0) {
        if (local_170 != 0) {
          iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0(param_1,local_24fd + 1);
          *(int *)pcVar21 = iVar5;
        }
      }
      else {
        pcVar21 = core_event_cpp_CEventList_validateCondition_FUN_00491b00(param_1,local_24fd + 1);
        if (pcVar21 != (char *)0x0) {
          return 0;
        }
      }
    }
    else {
      iVar5 = _strnicmp(param_2,"activatePuzzle",0xe);
      if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
        local_16c = (byte *)(param_2 + 0xe);
        while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
          local_16c = local_16c + 1;
        }
        local_160 = -1;
        sscanf((char *)local_16c,"(%[^)])%n");
        if (local_160 < 3) {
          iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0("Error parsing activatePuzzle command");
          return iVar5;
        }
        local_16c = local_16c + local_160;
        uVar17 = 0xffffffff;
        pcVar21 = local_25fd + 1;
        do {
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          cVar3 = *pcVar21;
          pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
        } while (cVar3 != '\0');
        SVar18 = ~uVar17 - 1;
        if (0 < (int)SVar18) {
          pcVar21 = local_25fd + ~uVar17;
          do {
            if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
            SVar18 = SVar18 - 1;
            pcVar21 = pcVar21 + -1;
          } while (0 < (int)SVar18);
        }
        (local_25fd + 1)[SVar18] = '\0';
        while (((&DAT_006074b8)[(byte)(local_25fd[1] + 1)] & 2) != 0) {
          memmove(local_25fd + 1,local_25fd + 2,SVar18);
          SVar18 = SVar18 - 1;
        }
        iVar5 = 0;
        puzzle = (CPuzzle *)0x0;
        if (0 < DAT_007dff88) {
          iVar6 = 0;
          do {
            pcVar21 = (char *)(**(code **)(**(int **)((int)&DAT_007dff8c + iVar6) + 4))();
            iVar8 = _stricmp(local_25fd + 1,pcVar21);
            if (iVar8 == 0) {
              puzzle = *(CPuzzle **)((int)&DAT_007dff8c + iVar6);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar5 < DAT_007dff88);
        }
        if (puzzle == (CPuzzle *)0x0) {
          iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0("No such puzzle '%s'");
          return iVar5;
        }
        if (local_170 != 0) {
          if (DAT_007dffb4 != (CPuzzle *)0x0) {
            core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(DAT_007dffb4,0);
          }
          core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(puzzle,1);
        }
      }
      else {
        iVar5 = _strnicmp(param_2,"addFieldNotesTask",0x11);
        if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)) {
          local_16c = (byte *)(param_2 + 0x11);
          while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
            local_16c = local_16c + 1;
          }
          local_15c = -1;
          sscanf((char *)local_16c,"(%[^)])%n");
          if (local_15c < 3) {
            iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                              ("Error parsing addFieldNotesTask command");
            return iVar5;
          }
          local_16c = local_16c + local_15c;
          uVar17 = 0xffffffff;
          pcVar21 = local_2bfd + 1;
          do {
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            cVar3 = *pcVar21;
            pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
          } while (cVar3 != '\0');
          SVar18 = ~uVar17 - 1;
          if (0 < (int)SVar18) {
            pcVar21 = local_2bfd + ~uVar17;
            do {
              if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
              SVar18 = SVar18 - 1;
              pcVar21 = pcVar21 + -1;
            } while (0 < (int)SVar18);
          }
          (local_2bfd + 1)[SVar18] = '\0';
          while (((&DAT_006074b8)[(byte)(local_2bfd[1] + 1)] & 2) != 0) {
            memmove(local_2bfd + 1,local_2bfd + 2,SVar18);
            SVar18 = SVar18 - 1;
          }
          if (_DAT_01c734ac != 0) {
            iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004abb30
                              (g_CFieldNotesPtr,local_2bfd + 1);
            switch(iVar5) {
            default:
              iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                ("Field notes entry '%s' is not a task");
              return iVar5;
            case 2:
            case 3:
            case 4:
              goto switchD_0048cb59_caseD_2;
            case -1:
              iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                ("Field notes entry '%s' not found");
              return iVar5;
            }
          }
          core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004aba10(g_CFieldNotesPtr,local_2bfd + 1);
        }
        else {
          iVar5 = _strnicmp(param_2,"advanceLightFilter",0x12);
          if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0x12] + 1)] & 0xe0) == 0)) {
            local_16c = (byte *)(param_2 + 0x12);
            while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
              local_16c = local_16c + 1;
            }
            pcVar21 = (char *)core_event_cpp_extractParenArg_FUN_0048bc10(&local_16c,local_1c84,200)
            ;
            if (pcVar21 != (char *)0x0) goto LAB_0048c717;
            core_set_cpp_CDemonSet_addLightFilter_FUN_0053b3b0
                      (g_CDemonSetPtr,local_1c84,&local_158,&local_154);
            if (local_158 == (C3DSLight *)0x0) {
              iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                ("SpotLight %s doesn't exist.");
              return iVar5;
            }
            if (local_170 != 0) {
              if (local_154 == (CDemonLight *)0x0) {
                _DAT_01d71de0 = "..\\core\\event.cpp";
                _DAT_01d71de4 = 0x32e;
                core_main_c_FUN_004e4330("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
              }
              core_setutil_cpp_C3DSLight_advanceFilter_FUN_00542d20(local_158,local_154);
            }
          }
          else {
            iVar5 = _strnicmp(param_2,"beginCarryItem",0xe);
            if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
              local_16c = (byte *)(param_2 + 0xe);
              while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                local_16c = local_16c + 1;
              }
              local_150 = -1;
              sscanf((char *)local_16c,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n");
              if (local_150 < 0) {
                iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                  ("Error parsing beginCarryItem() parms");
                return iVar5;
              }
              local_16c = local_16c + local_150;
              uVar17 = 0xffffffff;
              pcVar21 = local_13ed + 1;
              do {
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                cVar3 = *pcVar21;
                pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
              } while (cVar3 != '\0');
              SVar18 = ~uVar17 - 1;
              if (0 < (int)SVar18) {
                pcVar21 = local_13ed + ~uVar17;
                do {
                  if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                  SVar18 = SVar18 - 1;
                  pcVar21 = pcVar21 + -1;
                } while (0 < (int)SVar18);
              }
              (local_13ed + 1)[SVar18] = '\0';
              while (((&DAT_006074b8)[(byte)(local_13ed[1] + 1)] & 2) != 0) {
                memmove(local_13ed + 1,local_13ed + 2,SVar18);
                SVar18 = SVar18 - 1;
              }
              uVar17 = 0xffffffff;
              pcVar21 = local_5dd + 1;
              do {
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                cVar3 = *pcVar21;
                pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
              } while (cVar3 != '\0');
              SVar18 = ~uVar17 - 1;
              if (0 < (int)SVar18) {
                pcVar21 = local_5dd + ~uVar17;
                do {
                  if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                  SVar18 = SVar18 - 1;
                  pcVar21 = pcVar21 + -1;
                } while (0 < (int)SVar18);
              }
              (local_5dd + 1)[SVar18] = '\0';
              while (((&DAT_006074b8)[(byte)(local_5dd[1] + 1)] & 2) != 0) {
                memmove(local_5dd + 1,local_5dd + 2,SVar18);
                SVar18 = SVar18 - 1;
              }
              if ((local_64 < 0) || (1 < local_64)) {
                iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                  ("Invalid hand index: %d");
                return iVar5;
              }
              pCVar7 = (CCharacter *)
                       core_event_cpp_resolveActorByName_FUN_0048b950
                                 (local_5dd + 1,g_CCharacterClassInfo.name_hash,
                                  g_CCharacterClassInfo.class_name);
              if (pCVar7 == (CCharacter *)0x0) {
                return 0;
              }
              if (pCVar7 == 0x0FFFFFFF) {
                local_170 = 0;
              }
              else if (pCVar7->carry_hands[local_64].bone_index < 0) {
                iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                  ("%s doesn't have hand %d");
                return iVar5;
              }
              pCVar9 = (CCharacter *)
                       core_event_cpp_resolveActorByName_FUN_0048b950
                                 (local_13ed + 1,g_CDemonActorClassInfo.name_hash,
                                  g_CDemonActorClassInfo.class_name);
              if (pCVar9 == (CCharacter *)0x0) {
                return 0;
              }
              if ((pCVar9 != 0x0FFFFFFF) && (local_170 != 0)) {
                core_xform_cpp_FUN_00583940(local_2bc,local_1ac);
                core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                          (pCVar7,local_64,(int)pCVar9,0,local_2bc);
              }
            }
            else {
              iVar5 = _strnicmp
                                (param_2,"completeFieldNotesTask",0x16);
              if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0x16] + 1)] & 0xe0) == 0)) {
                local_16c = (byte *)(param_2 + 0x16);
                while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                  local_16c = local_16c + 1;
                }
                local_14c = -1;
                sscanf((char *)local_16c,"(%[^)])%n");
                if (local_14c < 3) {
                  iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                    ("Error parsing completeFieldNotesTask command");
                  return iVar5;
                }
                local_16c = local_16c + local_14c;
                uVar17 = 0xffffffff;
                pcVar21 = local_2cfd + 1;
                do {
                  if (uVar17 == 0) break;
                  uVar17 = uVar17 - 1;
                  cVar3 = *pcVar21;
                  pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                } while (cVar3 != '\0');
                SVar18 = ~uVar17 - 1;
                if (0 < (int)SVar18) {
                  pcVar21 = local_2cfd + ~uVar17;
                  do {
                    if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                    SVar18 = SVar18 - 1;
                    pcVar21 = pcVar21 + -1;
                  } while (0 < (int)SVar18);
                }
                (local_2cfd + 1)[SVar18] = '\0';
                while (((&DAT_006074b8)[(byte)(local_2cfd[1] + 1)] & 2) != 0) {
                  memmove(local_2cfd + 1,local_2cfd + 2,SVar18);
                  SVar18 = SVar18 - 1;
                }
                if (_DAT_01c734ac != 0) {
                  iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004abb30
                                    (g_CFieldNotesPtr,local_2cfd + 1);
                  switch(iVar5) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Field notes entry '%s' is not a task");
                    return iVar5;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_0048cb59_caseD_2;
                  default:
                    iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Field notes entry '%s' not found");
                    return iVar5;
                  }
                }
                core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004abcb0
                          (g_CFieldNotesPtr,local_2cfd + 1);
              }
              else {
                iVar5 = _strnicmp(param_2,"createExplosion",0xf);
                if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xf] + 1)] & 0xe0) == 0)) {
                  local_16c = (byte *)(param_2 + 0xf);
                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                    local_16c = local_16c + 1;
                  }
                  local_148 = -1;
                  sscanf((char *)local_16c,"( %f , %n");
                  if (local_148 < 0) {
                    iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Error parsing createExplosion() parms");
                    return iVar5;
                  }
                  local_16c = local_16c + local_148;
                  local_148 = -1;
                  sscanf((char *)local_16c,"%f , %f , %f %n");
                  if ((local_148 < 0) &&
                     (sscanf((char *)local_16c," %[^,)] %n"),
                     -1 < local_148)) {
                    uVar17 = 0xffffffff;
                    pcVar21 = local_125d + 1;
                    do {
                      if (uVar17 == 0) break;
                      uVar17 = uVar17 - 1;
                      cVar3 = *pcVar21;
                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                    } while (cVar3 != '\0');
                    SVar18 = ~uVar17 - 1;
                    if (0 < (int)SVar18) {
                      pcVar21 = local_125d + ~uVar17;
                      do {
                        if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                        SVar18 = SVar18 - 1;
                        pcVar21 = pcVar21 + -1;
                      } while (0 < (int)SVar18);
                    }
                    (local_125d + 1)[SVar18] = '\0';
                    while (((&DAT_006074b8)[(byte)(local_125d[1] + 1)] & 2) != 0) {
                      memmove(local_125d + 1,local_125d + 2,SVar18);
                      SVar18 = SVar18 - 1;
                    }
                    pCVar7 = (CCharacter *)
                             core_event_cpp_resolveActorByName_FUN_0048b950
                                       (local_125d + 1,g_CDemonActorClassInfo.name_hash,
                                        g_CDemonActorClassInfo.class_name);
                    if (pCVar7 == (CCharacter *)0x0) {
                      return 0;
                    }
                    if (pCVar7 == 0x0FFFFFFF) {
                      local_170 = 0;
                    }
                    else {
                      pCVar1 = &(pCVar7->base).location;
                      if ((CLocation *)&local_1d0 != pCVar1) {
                        local_1d0.x = (pCVar1->position).x;
                        local_1d0.y = (pCVar7->base).location.position.y;
                        local_1d0.z = (pCVar7->base).location.position.z;
                      }
                    }
                  }
                  if (local_148 < 0) {
                    iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Error parsing createExplosion() parms");
                    return iVar5;
                  }
                  local_16c = local_16c + local_148;
                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                    local_16c = local_16c + 1;
                  }
                  local_140 = 4.0;
                  if (*local_16c == 0x2c) {
                    local_148 = -1;
                    sscanf((char *)local_16c,", %f %n");
                    if (local_148 < 0) {
                      iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                        ("Error parsing createExplosion() parms");
                      return iVar5;
                    }
                    local_16c = local_16c + local_148;
                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                      local_16c = local_16c + 1;
                    }
                  }
                  if (*local_16c != 0x29) {
                    iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Error parsing createExplosion() parms, expected matching ')'");
                    return iVar5;
                  }
                  local_16c = local_16c + 1;
                  if (local_170 != 0) {
                    core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
                              (0x01C73654,&local_1d0,local_144,1500.0,local_140,0);
                  }
                }
                else {
                  iVar5 = _strnicmp(param_2,"deleteActor",0xb);
                  if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)) {
                    local_16c = (byte *)(param_2 + 0xb);
                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                      local_16c = local_16c + 1;
                    }
                    pcVar21 = (char *)core_event_cpp_extractParenArg_FUN_0048bc10
                                                (&local_16c,local_1964,200);
                    if (pcVar21 != (char *)0x0) goto LAB_0048c717;
                    pCVar7 = (CCharacter *)
                             core_event_cpp_resolveActorByName_FUN_0048b950
                                       (local_1964,g_CDemonActorClassInfo.name_hash,
                                        g_CDemonActorClassInfo.class_name);
                    uVar17 = g_CBoxActorClassInfo.name_hash;
                    if (pCVar7 == (CCharacter *)0x0) {
                      if (_DAT_01c734ac != 0) {
                        return 0;
                      }
                      local_170 = 0;
                    }
                    if ((pCVar7 != 0x0FFFFFFF) && (local_170 != 0)) {
                      (pCVar7->base).lifecycle_state = ACTOR_DESTROYED;
                      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                                          ((CDemonActor *)pCVar7,uVar17);
                      if (pCVar10 != (CDemonActor *)0x0) {
                        fVar4 = pCVar10[2].orient_matrix.m[1].y;
                        *(byte *)&pCVar10[2].location.position.y = 0;
                        sound_sndmain_cpp_killSfx_FUN_00556be0((uint)fVar4);
                      }
                      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                                          ((CDemonActor *)pCVar7,g_CChainClassInfo.name_hash);
                      if (pCVar10 != (CDemonActor *)0x0) {
                        uVar17 = pCVar10[1].dead2;
                        *(byte *)&pCVar10[1].orient_matrix.m[2].z = 0;
                        pCVar10[1].create_event[0x4c] = '\0';
                        sound_sndmain_cpp_killSfx_FUN_00556be0(uVar17);
                      }
                    }
                  }
                  else {
                    iVar5 = _strnicmp
                                      (param_2,"displayBitmap",0xd);
                    if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] & 0xe0) == 0)) {
                      local_16c = (byte *)(param_2 + 0xd);
                      while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                        local_16c = local_16c + 1;
                      }
                      local_134 = -1;
                      sscanf((char *)local_16c,"( %[^ ,] , %d , %d%n");
                      if (local_134 < 0) {
                        iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                          ("Error parsing displayBitmap() parms");
                        return iVar5;
                      }
                      local_16c = local_16c + local_134;
                      while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                        local_16c = local_16c + 1;
                      }
                      local_130 = 0;
                      pbVar11 = local_16c;
                      if (*local_16c == 0x2c) {
                        local_134 = -1;
                        sscanf((char *)local_16c,", %f %n");
                        if (local_134 < 1) {
                          _sprintf(&DAT_01c734b0,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pbVar11 = local_16c + local_134;
                        while (((&DAT_006074b8)[(byte)(*pbVar11 + 1)] & 2) != 0) {
                          pbVar11 = pbVar11 + 1;
                        }
                      }
                      do {
                        local_16c = pbVar11;
                        pbVar11 = local_16c + 1;
                      } while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0);
                      if (*local_16c != 0x29) {
                        _sprintf(&DAT_01c734b0,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_16c = local_16c + 1;
                      iVar5 = engine_dosio_cpp_getFileSize_FUN_004657f0(&DAT_005be4a1,local_22fc);
                      if (iVar5 < 0) {
                        iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                          ("Bitmap doesn't exist");
                        return iVar5;
                      }
                      if (iVar5 != local_13c * local_138) {
                        iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                          ("Bitmap file size does not match specified dimensions");
                        return iVar5;
                      }
                      if (local_170 != 0) {
                        core_game_cpp_CGame_displayBitmap_FUN_004beb80
                                  (g_CGamePtr,local_22fc,local_13c,local_138,local_130);
                      }
                    }
                    else {
                      iVar5 = _strnicmp
                                        (param_2,"displayFieldNotes",0x11);
                      if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)
                         ) {
                        local_16c = (byte *)(param_2 + 0x11);
                        while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                          local_16c = local_16c + 1;
                        }
                        local_12c = -1;
                        sscanf((char *)local_16c,"(%[^)])%n");
                        if (local_12c < 5) {
                          _sprintf(&DAT_01c734b0,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_16c = local_16c + local_12c;
                        uVar17 = 0xffffffff;
                        pcVar21 = local_14b5 + 1;
                        do {
                          if (uVar17 == 0) break;
                          uVar17 = uVar17 - 1;
                          cVar3 = *pcVar21;
                          pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                        } while (cVar3 != '\0');
                        SVar18 = ~uVar17 - 1;
                        if (0 < (int)SVar18) {
                          pcVar21 = local_14b5 + ~uVar17;
                          do {
                            if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                            SVar18 = SVar18 - 1;
                            pcVar21 = pcVar21 + -1;
                          } while (0 < (int)SVar18);
                        }
                        (local_14b5 + 1)[SVar18] = '\0';
                        while (((&DAT_006074b8)[(byte)(local_14b5[1] + 1)] & 2) != 0) {
                          memmove(local_14b5 + 1,local_14b5 + 2,SVar18);
                          SVar18 = SVar18 - 1;
                        }
                        if (local_170 == 0) {
                          pcVar21 = core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                              (param_1,local_14b5 + 1);
                          if (pcVar21 != (char *)0x0) {
                            return 0;
                          }
                        }
                        else {
                          iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                            (0x01C6E360,local_14b5 + 1);
                          g_CFieldNotesPtr->is_displayed = iVar5;
                        }
                      }
                      else {
                        iVar5 = _strnicmp(param_2,"dropItem",8);
                        if ((iVar5 == 0) && (((&DAT_006074b8)[(byte)(param_2[8] + 1)] & 0xe0) == 0))
                        {
                          local_16c = (byte *)(param_2 + 8);
                          while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                            local_16c = local_16c + 1;
                          }
                          local_128 = -1;
                          sscanf((char *)local_16c,"( %[^,],%n");
                          if (local_128 < 0) {
                            iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                              ("Error parsing dropItem() parms");
                            return iVar5;
                          }
                          local_16c = local_16c + local_128;
                          uVar17 = 0xffffffff;
                          pcVar21 = local_f3d + 1;
                          do {
                            if (uVar17 == 0) break;
                            uVar17 = uVar17 - 1;
                            cVar3 = *pcVar21;
                            pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                          } while (cVar3 != '\0');
                          SVar18 = ~uVar17 - 1;
                          if (0 < (int)SVar18) {
                            pcVar21 = local_f3d + ~uVar17;
                            do {
                              if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                              SVar18 = SVar18 - 1;
                              pcVar21 = pcVar21 + -1;
                            } while (0 < (int)SVar18);
                          }
                          (local_f3d + 1)[SVar18] = '\0';
                          while (((&DAT_006074b8)[(byte)(local_f3d[1] + 1)] & 2) != 0) {
                            memmove(local_f3d + 1,local_f3d + 2,SVar18);
                            SVar18 = SVar18 - 1;
                          }
                          local_124 = (CCharacter *)
                                      core_event_cpp_resolveActorByName_FUN_0048b950
                                                (local_f3d + 1,g_CCharacterClassInfo.name_hash,
                                                 g_CCharacterClassInfo.class_name);
                          if (local_124 == (CCharacter *)0x0) {
                            return 0;
                          }
                          if (local_124 == 0x0FFFFFFF) {
                            local_170 = 0;
                          }
                          local_128 = -1;
                          local_18 = -1;
                          sscanf((char *)local_16c,"%d )%n");
                          if (local_128 < 1) {
                            sscanf((char *)local_16c,"%[^)])%n");
                            if (local_128 < 0) {
                              iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                ("Error parsing dropItem() parms");
                              return iVar5;
                            }
                            uVar17 = 0xffffffff;
                            pcVar21 = local_1005 + 1;
                            do {
                              if (uVar17 == 0) break;
                              uVar17 = uVar17 - 1;
                              cVar3 = *pcVar21;
                              pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                            } while (cVar3 != '\0');
                            SVar18 = ~uVar17 - 1;
                            if (0 < (int)SVar18) {
                              pcVar21 = local_1005 + ~uVar17;
                              do {
                                if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                                SVar18 = SVar18 - 1;
                                pcVar21 = pcVar21 + -1;
                              } while (0 < (int)SVar18);
                            }
                            (local_1005 + 1)[SVar18] = '\0';
                            while (((&DAT_006074b8)[(byte)(local_1005[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_1005 + 1,local_1005 + 2,SVar18);
                              SVar18 = SVar18 - 1;
                            }
                            local_18 = -1;
                            iVar5 = local_18;
                            if (local_124 != 0x0FFFFFFF) {
                              iVar6 = 0;
                              pCVar7 = local_124;
                              do {
                                pCVar10 = pCVar7->carry_hands[0].carry_actor;
                                if ((pCVar10 != (CDemonActor *)0x0) &&
                                   (iVar8 = _stricmp
                                                      (pCVar10->actor_name,local_1005 + 1),
                                   iVar5 = iVar6, iVar8 == 0)) break;
                                iVar6 = iVar6 + 1;
                                pCVar7 = (CCharacter *)(pCVar7->base).create_event;
                                iVar5 = local_18;
                              } while (iVar6 < 2);
                            }
                          }
                          else if ((local_18 < 0) || (iVar5 = local_18, 1 < local_18)) {
                            iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                              ("Invalid hand index: %d");
                            return iVar5;
                          }
                          local_18 = iVar5;
                          local_16c = local_16c + local_128;
                          if ((local_124 != 0x0FFFFFFF) &&
                             (local_124->carry_hands[local_18].bone_index < 0)) {
                            iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                              ("%s doesn't have hand %d");
                            return iVar5;
                          }
                          if ((local_170 != 0) && (-1 < local_18)) {
                            (*(((local_124->base).vtable._uc)->_uc).dropCarriedObject)
                                      (local_124,local_18,(CVector3f *)0x0);
                          }
                        }
                        else {
                          iVar5 = _strnicmp
                                            (param_2,"enableFieldNotesEntry",0x15);
                          if ((iVar5 == 0) &&
                             (((&DAT_006074b8)[(byte)(param_2[0x15] + 1)] & 0xe0) == 0)) {
                            local_16c = (byte *)(param_2 + 0x15);
                            while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                              local_16c = local_16c + 1;
                            }
                            local_120 = -1;
                            sscanf((char *)local_16c,"(%[^)])%n");
                            if (local_120 < 3) {
                              iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                ("Error parsing enableFieldNotesEntry command");
                              return iVar5;
                            }
                            local_16c = local_16c + local_120;
                            uVar17 = 0xffffffff;
                            pcVar21 = local_27fd + 1;
                            do {
                              if (uVar17 == 0) break;
                              uVar17 = uVar17 - 1;
                              cVar3 = *pcVar21;
                              pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                            } while (cVar3 != '\0');
                            SVar18 = ~uVar17 - 1;
                            if (0 < (int)SVar18) {
                              pcVar21 = local_27fd + ~uVar17;
                              do {
                                if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                                SVar18 = SVar18 - 1;
                                pcVar21 = pcVar21 + -1;
                              } while (0 < (int)SVar18);
                            }
                            (local_27fd + 1)[SVar18] = '\0';
                            while (((&DAT_006074b8)[(byte)(local_27fd[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_27fd + 1,local_27fd + 2,SVar18);
                              SVar18 = SVar18 - 1;
                            }
                            if (_DAT_01c734ac != 0) {
                              iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004abb30
                                                (g_CFieldNotesPtr,local_27fd + 1);
                              switch(iVar5) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_0048cb59_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                  ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                return iVar5;
                              default:
                                iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                  ("Field notes entry '%s' not found");
                                return iVar5;
                              }
                            }
                            core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004aba10
                                      (g_CFieldNotesPtr,local_27fd + 1);
                          }
                          else {
                            iVar5 = _strnicmp
                                              (param_2,"enableFieldNotesAnnotation",0x1a);
                            if ((iVar5 == 0) &&
                               (((&DAT_006074b8)[(byte)(param_2[0x1a] + 1)] & 0xe0) == 0)) {
                              local_16c = (byte *)(param_2 + 0x1a);
                              while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                local_16c = local_16c + 1;
                              }
                              local_11c = -1;
                              sscanf((char *)local_16c,"(%[^,], %[^)])%n");
                              if (local_11c < 4) {
                                iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                  ("Error parsing enableFieldNotesAnnotation command");
                                return iVar5;
                              }
                              local_16c = local_16c + local_11c;
                              uVar17 = 0xffffffff;
                              pcVar21 = local_2afd + 1;
                              do {
                                if (uVar17 == 0) break;
                                uVar17 = uVar17 - 1;
                                cVar3 = *pcVar21;
                                pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                              } while (cVar3 != '\0');
                              SVar18 = ~uVar17 - 1;
                              if (0 < (int)SVar18) {
                                pcVar21 = local_2afd + ~uVar17;
                                do {
                                  if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                                  SVar18 = SVar18 - 1;
                                  pcVar21 = pcVar21 + -1;
                                } while (0 < (int)SVar18);
                              }
                              (local_2afd + 1)[SVar18] = '\0';
                              while (((&DAT_006074b8)[(byte)(local_2afd[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_2afd + 1,local_2afd + 2,SVar18);
                                SVar18 = SVar18 - 1;
                              }
                              uVar17 = 0xffffffff;
                              pcVar21 = local_29fd + 1;
                              do {
                                if (uVar17 == 0) break;
                                uVar17 = uVar17 - 1;
                                cVar3 = *pcVar21;
                                pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                              } while (cVar3 != '\0');
                              SVar18 = ~uVar17 - 1;
                              if (0 < (int)SVar18) {
                                pcVar21 = local_29fd + ~uVar17;
                                do {
                                  if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0) break;
                                  SVar18 = SVar18 - 1;
                                  pcVar21 = pcVar21 + -1;
                                } while (0 < (int)SVar18);
                              }
                              (local_29fd + 1)[SVar18] = '\0';
                              while (((&DAT_006074b8)[(byte)(local_29fd[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_29fd + 1,local_29fd + 2,SVar18);
                                SVar18 = SVar18 - 1;
                              }
                              if (_DAT_01c734ac != 0) {
                                iVar5 = core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004abb30
                                                  (g_CFieldNotesPtr,local_2afd + 1);
                                switch(iVar5) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_0048cb59_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                    ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                  return iVar5;
                                default:
                                  iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                    ("Field notes entry '%s' not found");
                                  return iVar5;
                                }
                              }
                              iVar5 = core_fldnotes_cpp_CFieldNotes_showMapAnnotation_FUN_004ab8f0
                                                (g_CFieldNotesPtr,local_29fd + 1,local_2afd + 1,
                                                 local_23fc);
                              if (iVar5 == 0) {
                                iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0(local_23fc);
                                return iVar5;
                              }
                            }
                            else {
                              iVar5 = _strnicmp
                                                (param_2,"fadeAmbientSound",0x10);
                              if ((iVar5 == 0) &&
                                 (((&DAT_006074b8)[(byte)(param_2[0x10] + 1)] & 0xe0) == 0)) {
                                local_16c = (byte *)(param_2 + 0x10);
                                while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                  local_16c = local_16c + 1;
                                }
                                local_110 = -1;
                                sscanf((char *)local_16c,"(%f, %f )%n");
                                if (local_110 < 0) {
                                  _sprintf(&DAT_01c734b0,"Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_16c = local_16c + local_110;
                                if (local_170 != 0) {
                                  core_sound_cpp_CSound_setVolumeFade_FUN_00560d30
                                            (0x02CF5680,local_118,local_114);
                                }
                              }
                              else {
                                iVar5 = _strnicmp
                                                  (param_2,"fadeSfx",7);
                                if ((iVar5 == 0) &&
                                   (((&DAT_006074b8)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_16c = (byte *)(param_2 + 7);
                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                    local_16c = local_16c + 1;
                                  }
                                  local_104 = -1;
                                  sscanf
                                            ((char *)local_16c,"(%[^,], %f, %f )%n");
                                  if (local_104 < 0) {
                                    _sprintf(&DAT_01c734b0,"Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_16c = local_16c + local_104;
                                  uVar17 = 0xffffffff;
                                  pcVar21 = local_1a2d + 1;
                                  do {
                                    if (uVar17 == 0) break;
                                    uVar17 = uVar17 - 1;
                                    cVar3 = *pcVar21;
                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                  } while (cVar3 != '\0');
                                  SVar18 = ~uVar17 - 1;
                                  if (0 < (int)SVar18) {
                                    pcVar21 = local_1a2d + ~uVar17;
                                    do {
                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                      break;
                                      SVar18 = SVar18 - 1;
                                      pcVar21 = pcVar21 + -1;
                                    } while (0 < (int)SVar18);
                                  }
                                  (local_1a2d + 1)[SVar18] = '\0';
                                  while (((&DAT_006074b8)[(byte)(local_1a2d[1] + 1)] & 2) != 0) {
                                    memmove
                                              (local_1a2d + 1,local_1a2d + 2,SVar18);
                                    SVar18 = SVar18 - 1;
                                  }
                                  if (local_170 != 0) {
                                    uVar17 = core_event_cpp_CEventList_getSfxHandle_FUN_00495110
                                                       (param_1,local_1a2d + 1);
                                    if (local_108 <= 0.0) {
                                      sound_sndmain_cpp_setSfxVolume_FUN_00556ab0(uVar17,local_10c);
                                    }
                                    else {
                                      sound_sndmain_cpp_setSfxFade_FUN_00556c10
                                                (uVar17,local_10c,local_108,0);
                                    }
                                  }
                                }
                                else {
                                  iVar5 = _strnicmp
                                                    (param_2,"flagOn",6);
                                  if ((iVar5 == 0) &&
                                     (((&DAT_006074b8)[(byte)(param_2[6] + 1)] & 0xe0) == 0)) {
                                    local_16c = (byte *)(param_2 + 6);
                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                      local_16c = local_16c + 1;
                                    }
                                    pcVar21 = (char *)core_event_cpp_extractParenArg_FUN_0048bc10
                                                                (&local_16c,local_28c,0x20,1);
                                    if (pcVar21 != (char *)0x0) {
LAB_0048c717:
                                      pcVar20 = &DAT_01c734b0;
                                      do {
                                        cVar3 = *pcVar21;
                                        *pcVar20 = cVar3;
                                        if (cVar3 == '\0') {
                                          return 0;
                                        }
                                        cVar3 = pcVar21[1];
                                        pcVar21 = pcVar21 + 2;
                                        pcVar20[1] = cVar3;
                                        pcVar20 = pcVar20 + 2;
                                      } while (cVar3 != '\0');
                                      return 0;
                                    }
                                    if (local_170 != 0) {
                                      core_event_cpp_FUN_004946f0(param_1,local_28c,1);
                                    }
                                  }
                                  else {
                                    iVar5 = _strnicmp
                                                      (param_2,"flagOff",7);
                                    if ((iVar5 == 0) &&
                                       (((&DAT_006074b8)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                      local_16c = (byte *)(param_2 + 7);
                                      while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                        local_16c = local_16c + 1;
                                      }
                                      pcVar21 = (char *)core_event_cpp_extractParenArg_FUN_0048bc10
                                                                  (&local_16c,local_26c,0x20,1);
                                      if (pcVar21 != (char *)0x0) goto LAB_0048c717;
                                      if (local_170 != 0) {
                                        core_event_cpp_FUN_004946f0(param_1,local_26c,0);
                                      }
                                    }
                                    else {
                                      iVar5 = _strnicmp
                                                        (param_2,"gameFlagOn",10);
                                      if ((iVar5 == 0) &&
                                         (((&DAT_006074b8)[(byte)(param_2[10] + 1)] & 0xe0) == 0)) {
                                        local_16c = (byte *)(param_2 + 10);
                                        while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                          local_16c = local_16c + 1;
                                        }
                                        pcVar21 = (char *)
                                                  core_event_cpp_extractParenArg_FUN_0048bc10
                                                            (&local_16c,local_22c,0x20,1);
                                        if (pcVar21 != (char *)0x0) goto LAB_0048c717;
                                        if (local_170 != 0) {
                                          core_event_cpp_FUN_004948e0(param_1,local_22c,1);
                                        }
                                      }
                                      else {
                                        iVar5 = _strnicmp
                                                          (param_2,"gameFlagOff",0xb);
                                        if ((iVar5 == 0) &&
                                           (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)
                                           ) {
                                          local_16c = (byte *)(param_2 + 0xb);
                                          while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0)
                                          {
                                            local_16c = local_16c + 1;
                                          }
                                          pcVar21 = (char *)
                                                  core_event_cpp_extractParenArg_FUN_0048bc10
                                                            (&local_16c,local_24c,0x20,1);
                                          if (pcVar21 != (char *)0x0) goto LAB_0048c717;
                                          if (local_170 != 0) {
                                            core_event_cpp_FUN_004948e0(param_1,local_24c,0);
                                          }
                                        }
                                        else {
                                          iVar5 = _strnicmp
                                                            (param_2,"hurtCharacter",0xd);
                                          if ((iVar5 == 0) &&
                                             (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] & 0xe0) ==
                                              0)) {
                                            local_16c = (byte *)(param_2 + 0xd);
                                            while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) !=
                                                   0) {
                                              local_16c = local_16c + 1;
                                            }
                                            local_100 = -1;
                                            sscanf
                                                      ((char *)local_16c," ( %[^,], %[^,],%f)%n");
                                            if (local_100 < 2) {
                                              iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                                ("Syntax error in killHero() parms"
                                                                );
                                              return iVar5;
                                            }
                                            uVar17 = 0xffffffff;
                                            pcVar21 = local_dad + 1;
                                            do {
                                              if (uVar17 == 0) break;
                                              uVar17 = uVar17 - 1;
                                              cVar3 = *pcVar21;
                                              pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                            } while (cVar3 != '\0');
                                            SVar18 = ~uVar17 - 1;
                                            if (0 < (int)SVar18) {
                                              pcVar21 = local_dad + ~uVar17;
                                              do {
                                                if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2)
                                                    == 0) break;
                                                SVar18 = SVar18 - 1;
                                                pcVar21 = pcVar21 + -1;
                                              } while (0 < (int)SVar18);
                                            }
                                            (local_dad + 1)[SVar18] = '\0';
                                            while (((&DAT_006074b8)[(byte)(local_dad[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_dad + 1,local_dad + 2,SVar18);
                                              SVar18 = SVar18 - 1;
                                            }
                                            uVar17 = 0xffffffff;
                                            pcVar21 = local_3e9 + 1;
                                            do {
                                              if (uVar17 == 0) break;
                                              uVar17 = uVar17 - 1;
                                              cVar3 = *pcVar21;
                                              pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                            } while (cVar3 != '\0');
                                            SVar18 = ~uVar17 - 1;
                                            if (0 < (int)SVar18) {
                                              pcVar21 = local_3e9 + ~uVar17;
                                              do {
                                                if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2)
                                                    == 0) break;
                                                SVar18 = SVar18 - 1;
                                                pcVar21 = pcVar21 + -1;
                                              } while (0 < (int)SVar18);
                                            }
                                            (local_3e9 + 1)[SVar18] = '\0';
                                            while (((&DAT_006074b8)[(byte)(local_3e9[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_3e9 + 1,local_3e9 + 2,SVar18);
                                              SVar18 = SVar18 - 1;
                                            }
                                            local_16c = local_16c + local_100;
                                            while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) !=
                                                   0) {
                                              local_16c = local_16c + 1;
                                            }
                                            pCVar7 = (CCharacter *)
                                                     core_event_cpp_resolveActorByName_FUN_0048b950
                                                               (local_dad + 1,
                                                                g_CCharacterClassInfo.name_hash,
                                                                g_CCharacterClassInfo.class_name);
                                            if (pCVar7 == (CCharacter *)0x0) {
                                              return 0;
                                            }
                                            if (pCVar7 == 0x0FFFFFFF) {
                                              local_170 = 0;
                                            }
                                            iVar5 = core_event_cpp_parseDamageType_FUN_0048bec0
                                                              (local_3e9 + 1,&local_f8);
                                            if (iVar5 == 0) {
                                              iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                                ("Unknown damage type \"%s\" in hurtCharacter command."
                                                                );
                                              return iVar5;
                                            }
                                            if (local_170 != 0) {
                                              (*(((pCVar7->base).vtable._uc)->_uc).applyDamage)
                                                        (pCVar7,local_f8,local_fc);
                                            }
                                          }
                                          else {
                                            iVar5 = _strnicmp
                                                              (param_2,"incCounter",10);
                                            if ((iVar5 == 0) &&
                                               (((&DAT_006074b8)[(byte)(param_2[10] + 1)] & 0xe0) ==
                                                0)) {
                                              local_16c = (byte *)(param_2 + 10);
                                              while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2)
                                                     != 0) {
                                                local_16c = local_16c + 1;
                                              }
                                              local_f4 = -1;
                                              sscanf
                                                        ((char *)local_16c,"( %[^ )] )%n");
                                              if (local_f4 < 5) {
                                                _sprintf(&DAT_01c734b0,
                                                           "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_16c = local_16c + local_f4;
                                              uVar17 = 0xffffffff;
                                              pcVar21 = local_a8d + 1;
                                              do {
                                                if (uVar17 == 0) break;
                                                uVar17 = uVar17 - 1;
                                                cVar3 = *pcVar21;
                                                pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                              } while (cVar3 != '\0');
                                              SVar18 = ~uVar17 - 1;
                                              if (0 < (int)SVar18) {
                                                pcVar21 = local_a8d + ~uVar17;
                                                do {
                                                  if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] & 2)
                                                      == 0) break;
                                                  SVar18 = SVar18 - 1;
                                                  pcVar21 = pcVar21 + -1;
                                                } while (0 < (int)SVar18);
                                              }
                                              (local_a8d + 1)[SVar18] = '\0';
                                              while (((&DAT_006074b8)[(byte)(local_a8d[1] + 1)] & 2)
                                                     != 0) {
                                                memmove
                                                          (local_a8d + 1,local_a8d + 2,SVar18);
                                                SVar18 = SVar18 - 1;
                                              }
                                              if (local_170 != 0) {
                                                iVar5 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00494d00
                                                            (param_1,local_a8d + 1);
                                                core_event_cpp_CEventList_setCounter_FUN_00494bf0
                                                          (param_1,local_a8d + 1,iVar5 + 1);
                                              }
                                            }
                                            else {
                                              iVar5 = _strnicmp
                                                                (param_2,"decCounter",10);
                                              if ((iVar5 == 0) &&
                                                 (((&DAT_006074b8)[(byte)(param_2[10] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_16c = (byte *)(param_2 + 10);
                                                while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2)
                                                       != 0) {
                                                  local_16c = local_16c + 1;
                                                }
                                                local_f0 = -1;
                                                sscanf
                                                          ((char *)local_16c,"( %[^ )] )%n");
                                                if (local_f0 < 5) {
                                                  _sprintf(&DAT_01c734b0,
                                                             "Error parsing decCounter arguments");
                                                  return 0;
                                                }
                                                local_16c = local_16c + local_f0;
                                                uVar17 = 0xffffffff;
                                                pcVar21 = local_6a5 + 1;
                                                do {
                                                  if (uVar17 == 0) break;
                                                  uVar17 = uVar17 - 1;
                                                  cVar3 = *pcVar21;
                                                  pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                } while (cVar3 != '\0');
                                                SVar18 = ~uVar17 - 1;
                                                if (0 < (int)SVar18) {
                                                  pcVar21 = local_6a5 + ~uVar17;
                                                  do {
                                                    if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)] &
                                                        2) == 0) break;
                                                    SVar18 = SVar18 - 1;
                                                    pcVar21 = pcVar21 + -1;
                                                  } while (0 < (int)SVar18);
                                                }
                                                (local_6a5 + 1)[SVar18] = '\0';
                                                while (((&DAT_006074b8)[(byte)(local_6a5[1] + 1)] &
                                                       2) != 0) {
                                                  memmove
                                                            (local_6a5 + 1,local_6a5 + 2,SVar18);
                                                  SVar18 = SVar18 - 1;
                                                }
                                                if (local_170 != 0) {
                                                  iVar5 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00494d00
                                                            (param_1,local_6a5 + 1);
                                                  core_event_cpp_CEventList_setCounter_FUN_00494bf0
                                                            (param_1,local_6a5 + 1,iVar5 + -1);
                                                }
                                              }
                                              else {
                                                iVar5 = _strnicmp
                                                                  (param_2,"killCharacter",
                                                                   0xd);
                                                if ((iVar5 == 0) &&
                                                   (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] &
                                                    0xe0) == 0)) {
                                                  local_16c = (byte *)(param_2 + 0xd);
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  local_e8 = &local_194;
                                                  local_e4 = 0.0;
                                                  local_ec = -1;
                                                  sscanf
                                                            ((char *)local_16c," ( %[^,], %[^,], %f , %f , %f , %f)%n")
                                                  ;
                                                  local_e4 = local_e4 * _DAT_005bf4b4;
                                                  if (local_ec < 0) {
                                                    local_e4 = -1.0;
                                                    sscanf
                                                              ((char *)local_16c," ( %[^,], %[^,], %f , %f , %f )%n")
                                                    ;
                                                  }
                                                  if (local_ec < 0) {
                                                    local_e8 = (CVector3f *)0x0;
                                                    sscanf
                                                              ((char *)local_16c," ( %[^,], %[^)])%n");
                                                  }
                                                  if (local_ec < 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in killCharacter() parms");
                                                  return iVar5;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_189d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_189d + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_189d + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_189d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_189d + 1,local_189d + 2,SVar18)
                                                    ;
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_385 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_385 + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_385 + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_385[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_385 + 1,local_385 + 2,SVar18);
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  local_16c = local_16c + local_ec;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  pCVar7 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_189d + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  iVar5 = core_event_cpp_parseDeathType_FUN_0048bd30
                                                                    (local_385 + 1,&local_e0);
                                                  if (iVar5 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Unknown death type \"%s\" in killCharacter command.");
                                                  return iVar5;
                                                  }
                                                  if (local_170 != 0) {
                                                    (*(((pCVar7->base).vtable._uc)->_uc).kill)
                                                              (pCVar7,local_e0,local_e8,local_e4);
                                                  }
                                                }
                                                else {
                                                  iVar5 = _strnicmp
                                                                    (param_2,
                                                  "killAllEnemies",0xe);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xe);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_dc = -1;
                                                    sscanf
                                                              ((char *)local_16c,"( )%n");
                                                    if (local_dc < 2) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing lightning command")
                                                      ;
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_dc;
                                                    iVar6 = 0;
                                                    iVar5 = 0;
                                                    while (iVar6 < g_CDemonSetPtr->actor_count) {
                                                      pCVar7 = (CCharacter *)
                                                                                                                              
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            (*(CDemonActor **)
                                                              ((int)g_CDemonSetPtr->actors + iVar5),
                                                             g_CEnemyClassInfo.name_hash);
                                                  if ((pCVar7 == (CCharacter *)0x0) ||
                                                     (EVar12 = (*(((pCVar7->base).vtable._uc)->_uc).
                                                                 getDeathState)(pCVar7),
                                                     EVar12 != DEATH_STATE_ALIVE)) {
                                                    iVar6 = iVar6 + 1;
                                                    iVar5 = iVar5 + 4;
                                                  }
                                                  else {
                                                    (*(((pCVar7->base).vtable._uc)->_uc).kill)
                                                              (pCVar7,0,(CVector3f *)0x0,-1.0);
                                                    iVar6 = iVar6 + 1;
                                                    iVar5 = iVar5 + 4;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "restorePrye",0xb);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xb);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_d8 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"( )%n");
                                                    if (local_d8 < 2) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing lightning command")
                                                      ;
                                                      return 0;
                                                    }
                                                    iVar5 = _DAT_01d5ba14 * 4;
                                                    local_16c = local_16c + local_d8;
                                                    if (*(int *)(iVar5 + 0x1d5ba04) != 0) {
                                                      *(uint *)
                                                       (*(int *)(iVar5 + 0x1d5ba04) + 0x2538) =
                                                           0x42c80000;
                                                      *(uint *)
                                                       (*(int *)(iVar5 + 0x1d5ba04) + 0x20b80) = 100
                                                      ;
                                                      *(uint *)
                                                       (*(int *)(iVar5 + 0x1d5ba04) + 0x20b84) =
                                                           0x32;
                                                    }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"killHero",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 8);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      if (g_CNetGamePtr->connection_type !=
                                                          CONNECTION_NONE) {
                                                        iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Can't use killHero command in multi-player");
                                                  return iVar5;
                                                  }
                                                  local_d4 = -1;
                                                  sscanf
                                                            ((char *)local_16c," ( %[^)])%n");
                                                  if (local_d4 < 2) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in killHero() parms");
                                                  return iVar5;
                                                  }
                                                  local_16c = local_16c + local_d4;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  iVar5 = core_event_cpp_parseDeathType_FUN_0048bd30
                                                                    (local_44c,&local_d0);
                                                  if (iVar5 == 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Unknown death type \"%s\" in killHero command.");
                                                  return iVar5;
                                                  }
                                                  if ((local_170 != 0) &&
                                                     (iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04
                                                                      ), iVar5 != 0)) {
                                                    (**(code **)(*(int *)(iVar5 + 0x154) + 0xdc))
                                                              (iVar5,local_d0,0,0xbf800000);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"killSfx",7)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 7);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_cc = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,)]%n");
                                                      if (local_cc < 3) {
                                                        _sprintf(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_cc;
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_1195 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_1195 + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_1195 + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1195[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1195 + 1,local_1195 + 2,SVar18)
                                                    ;
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  local_c8 = 0.0;
                                                  pbVar11 = local_16c;
                                                  if (*local_16c == 0x2c) {
                                                    local_cc = -1;
                                                    sscanf
                                                              ((char *)local_16c,",%f%n");
                                                    if (local_cc < 3) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing killSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    pbVar11 = local_16c + local_cc;
                                                  }
                                                  do {
                                                    local_16c = pbVar11;
                                                    pbVar11 = local_16c + 1;
                                                  } while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0);
                                                  if (*local_16c != 0x29) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Can't find matching ) in killSfx command");
                                                    return 0;
                                                  }
                                                  local_16c = pbVar11;
                                                  if (local_170 != 0) {
                                                    uVar17 = 
                                                  core_event_cpp_CEventList_getSfxHandle_FUN_00495110
                                                            (param_1,local_1195 + 1);
                                                  if (local_c8 <= 0.0) {
                                                    sound_sndmain_cpp_killSfx_FUN_00556be0(uVar17);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_00495280
                                                            (param_1);
                                                  }
                                                  else {
                                                    sound_sndmain_cpp_setSfxFade_FUN_00556c10
                                                              (uVar17,0.0,local_c8,1);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_00495280
                                                            (param_1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"lightning",
                                                                       9);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 9);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_c4 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"( )%n");
                                                      if (local_c4 < 2) {
                                                        _sprintf(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_c4;
                                                  if (local_170 != 0) {
                                                    core_weather_cpp_FUN_0057c2e0
                                                              (0x02D0C1A0,0x3dcccccd,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"playSfx",7)
                                                    ;
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 7);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_c0 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,)]%n");
                                                      if (local_c0 < 3) {
                                                        _sprintf(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_c0;
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_1fa5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_1fa5 + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_1fa5 + 1)[SVar18] = '\0';
                                                  while (pbVar11 = local_16c,
                                                        ((&DAT_006074b8)[(byte)(local_1fa5[1] + 1)]
                                                        & 2) != 0) {
                                                    memmove
                                                              (local_1fa5 + 1,local_1fa5 + 2,SVar18)
                                                    ;
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  puVar22 = &DAT_005fbaf8;
                                                  pcVar21 = local_ce5 + 1;
                                                  for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1)
                                                  {
                                                    *(uint *)pcVar21 = *puVar22;
                                                    puVar22 = puVar22 + (uint)bVar24 * -2 + 1;
                                                    pcVar21 = (char *)((int)pcVar21 +
                                                                      ((uint)bVar24 * -2 + 1) * 4);
                                                  }
                                                  pbVar2 = local_16c;
                                                  if (*pbVar11 == 0x2c) {
                                                    local_c0 = -1;
                                                    sscanf
                                                              ((char *)local_16c,",%[^)]%n");
                                                    if (local_c0 < 3) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing playSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_c0;
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_ce5 + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_ce5 + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_ce5 + 1)[SVar18] = 0;
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_ce5[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_ce5 + 1,local_ce5 + 2,SVar18)
                                                      ;
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_ce5 + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    pbVar2 = local_16c;
                                                    if (0x13 < ~uVar17 - 1) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "handle name %s is too long, max %d chars"
                                                                );
                                                      return 0;
                                                    }
                                                  }
                                                  do {
                                                    local_16c = pbVar2;
                                                    pbVar2 = local_16c + 1;
                                                  } while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0);
                                                  if (*local_16c != 0x29) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Can't find matching ) in playSfx command");
                                                    return 0;
                                                  }
                                                  local_16c = pbVar2;
                                                  if (local_170 != 0) {
                                                    iVar5 = _strnicmp
                                                                      (local_1fa5 + 1,&DAT_005bebca,
                                                                       2);
                                                    if (iVar5 == 0) {
                                                      iVar5 = 
                                                  sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30
                                                            (1);
                                                  if (iVar5 != 0) {
                                                    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
                                                    sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90
                                                              (1);
                                                    uVar17 = 
                                                  core_sound_cpp_CSound_playSound_FUN_005609b0
                                                            (0x02CF5680,param_1,local_1fa5 + 1);
                                                  sound_sndmain_cpp_popSfxOptions_FUN_00556050();
                                                  if (local_ce5[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_00495150
                                                            (param_1,local_ce5 + 1,uVar17);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar17 = 
                                                  core_sound_cpp_CSound_playSound_FUN_005609b0
                                                            (0x02CF5680,param_1,local_1fa5 + 1);
                                                  if (local_ce5[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_00495150
                                                            (param_1,local_ce5 + 1,uVar17);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"playMusic",
                                                                       9);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 9);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_bc = -1;
                                                      sscanf
                                                                ((char *)local_16c," ( %[^)])%n");
                                                      if (local_bc < 2) {
                                                        iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in playMusic() parms");
                                                  return iVar5;
                                                  }
                                                  local_16c = local_16c + local_bc;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_b55 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_b55 + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_b55 + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_b55[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_b55 + 1,local_b55 + 2,SVar18);
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  core_game_cpp_FUN_004c4a60
                                                            (g_CGamePtr,local_b55 + 1,0,0);
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"resetGore",
                                                                       9);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[9] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 9);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_b8 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"( )%n");
                                                      if (local_b8 < 2) {
                                                        _sprintf(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_b8;
                                                  if (local_170 != 0) {
                                                    core_gore_cpp_CGore_reset_FUN_004ce560
                                                              (g_CGorePtr);
                                                    core_fire_cpp_CFireEffect_init_FUN_004a1480
                                                              (0x01C73654);
                                                    local_b4 = 0x01D81080->current_set_index;
                                                    for (iVar5 = 0; this_ptr_00 = 0x01D81080,
                                                        iVar5 < 0x01D81080->num_sets;
                                                        iVar5 = iVar5 + 1) {
                                                      0x01D81080->current_set_index = iVar5;
                                                                                                            
                                                  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0
                                                            (this_ptr_00);
                                                  iVar6 = 0;
                                                  for (iVar8 = 0;
                                                      iVar8 < g_CDemonSetPtr->actor_count;
                                                      iVar8 = iVar8 + 1) {
                                                    pCVar10 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
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
                                                  0x01D81080->current_set_index = local_b4;
                                                  core_mission_cpp_FUN_004f6f80();
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setActorBool",0xc);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xc);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_b0 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^,], %[^,], %[^)])%n");
                                                    if (local_b0 < 3) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setActorBool parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_b0;
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_9c5 + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_9c5 + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_9c5 + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_9c5[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_9c5 + 1,local_9c5 + 2,SVar18)
                                                      ;
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_2135 + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_2135 + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_2135 + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_2135[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_2135 + 1,local_2135 + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_835 + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_835 + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_835 + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_835[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_835 + 1,local_835 + 2,SVar18)
                                                      ;
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    iVar6 = 0;
                                                    local_ac = 0;
                                                    iVar5 = local_ac;
                                                    if (0 < 0x00000002) {
                                                      iVar8 = 0;
                                                      do {
                                                        if (*(int *)((int)&DAT_005fba64 + iVar8) ==
                                                            0) {
                                                          iVar13 = 
                                                  _stricmp
                                                            ("spectralFlag" + iVar8,
                                                             local_2135 + 1);
                                                  iVar5 = (int)&DAT_005fba64 + iVar8;
                                                  if (iVar13 == 0) break;
                                                  }
                                                  iVar6 = iVar6 + 1;
                                                  iVar8 = iVar8 + 0x48;
                                                  iVar5 = local_ac;
                                                  } while (iVar6 < 0x00000002);
                                                  }
                                                  local_ac = iVar5;
                                                  if (local_ac == 0) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "%s is not a valid boolean actor variable name");
                                                    return 0;
                                                  }
                                                  pCVar7 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_9c5 + 1,
                                                             *(uint *)(local_ac + 0x44),
                                                             (char *)(local_ac + 0x22));
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == 0x0FFFFFFF) || (local_170 == 0))
                                                  {
                                                    pcVar21 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (param_1,local_835 + 1);
                                                  if (pcVar21 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_835 + 1);
                                                  *(int *)((pCVar7->base).actor_name +
                                                          *(int *)(local_ac + 0x40)) = iVar5;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setCameraAmbient",0x10);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0x10);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_a4 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^,], %f)%n");
                                                    if (local_a4 < 3) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setCameraAmbient parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_a4;
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_1af5 + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_1af5 + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_1af5 + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_1af5[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1af5 + 1,local_1af5 + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_00535360
                                                            (g_CDemonSetPtr,local_1af5 + 1);
                                                  if (iVar5 < 0) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Camera \"%s\" does not exist.");
                                                    return 0;
                                                  }
                                                  if ((local_a8 < 0.0) ||
                                                     (0x42c80000 < (int)local_a8)) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Ambient value %g is out of range (1..100)");
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280
                                                            (g_CDemonSetPtr,iVar5,
                                                             local_a8 * (float)_DAT_005bf4b8);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"setCounter"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 10);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_a0 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"( %[^,)]%n");
                                                      if (local_a0 < 5) {
                                                        _sprintf(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_a0;
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_e75 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_e75 + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_e75 + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_e75[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_e75 + 1,local_e75 + 2,SVar18);
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  local_9c = 0;
                                                  if (*local_16c == 0x2c) {
                                                    local_a0 = -1;
                                                    sscanf
                                                              ((char *)local_16c,",%d%n");
                                                    if (local_a0 < 1) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setCounter value argument"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_a0;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                  }
                                                  if (*local_16c != 0x29) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Error parsing setCounter arguments");
                                                    return 0;
                                                  }
                                                  local_16c = local_16c + 1;
                                                  if (local_170 != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setCounter_FUN_00494bf0
                                                            (param_1,local_e75 + 1,local_9c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setDoorState",0xc);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xc);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_98 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^,], %[^)])%n");
                                                    if (local_98 < 5) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setDoorState command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_98;
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_10cd + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_10cd + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_10cd + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_10cd[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_10cd + 1,local_10cd + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_1edd + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_1edd + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_1edd + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_1edd[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1edd + 1,local_1edd + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    pCVar7 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_10cd + 1,
                                                             g_CDoorClassInfo.name_hash,
                                                             g_CDoorClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_1edd + 1,&DAT_005bee04);
                                                  if (iVar5 == 0) {
                                                    uVar14 = 2;
                                                  }
                                                  else {
                                                    iVar5 = _stricmp
                                                                      (local_1edd + 1,
                                                                       "closed");
                                                    uVar14 = 0;
                                                    if (iVar5 != 0) {
                                                      iVar5 = _stricmp
                                                                        (local_1edd + 1,
                                                                         "opening");
                                                      if (iVar5 == 0) {
                                                        uVar14 = 1;
                                                      }
                                                      else {
                                                        iVar5 = _stricmp
                                                                          (local_1edd + 1,
                                                                           "closing");
                                                        if (iVar5 != 0) {
                                                          _sprintf(&DAT_01c734b0,
                                                                     "Invalid door state '%s'"
                                                                    );
                                                          return 0;
                                                        }
                                                        uVar14 = 3;
                                                      }
                                                    }
                                                  }
                                                  if (local_170 != 0) {
                                                    core_door_cpp_FUN_00463d30(pCVar7,uVar14);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setGroupAmbient",0xf);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xf);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_8c = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%d, %f)%n");
                                                    if (local_8c < 3) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setGroupAmbient parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_8c;
                                                    if ((local_90 < 0.0) ||
                                                       (0x42c80000 < (int)local_90)) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Ambient value %g is out of range (1..100)"
                                                                );
                                                      return 0;
                                                    }
                                                    if (local_170 != 0) {
                                                                                                            
                                                  core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0053b300
                                                            (g_CDemonSetPtr,local_94,
                                                             local_90 * (float)_DAT_005bf4b8);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0x13] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0x13);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_88 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"( %[^ ,] , %d )%n");
                                                    if (local_88 < 0) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing setLightFilterFrame parms");
                                                  return iVar5;
                                                  }
                                                  local_16c = local_16c + local_88;
                                                  core_set_cpp_CDemonSet_addLightFilter_FUN_0053b3b0
                                                            (g_CDemonSetPtr,local_514,&local_80,
                                                             &local_7c);
                                                  if (local_80 == (C3DSLight *)0x0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("SpotLight %s doesn't exist.");
                                                  return iVar5;
                                                  }
                                                  if ((local_84 < 0) ||
                                                     (local_80->filter_count <= local_84)) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Invalid filter frame, %s has %d filters");
                                                  return iVar5;
                                                  }
                                                  if (local_170 != 0) {
                                                    if (local_7c == (CDemonLight *)0x0) {
                                                      _DAT_01d71de0 = "..\\core\\event.cpp";
                                                      _DAT_01d71de4 = 0x78f;
                                                      core_main_c_FUN_004e4330
                                                                ("Can't find CDemonLight for light %s in setLightFilterFrame meta-command"
                                                                );
                                                    }
                                                                                                        
                                                  core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00542db0
                                                            (local_80,local_84,local_7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setLeverState",0xd);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xd);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_78 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^,], %[^)])%n");
                                                    if (local_78 < 5) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setLeverState command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_78;
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_170d + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_170d + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_170d + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_170d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_170d + 1,local_170d + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_1e15 + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_1e15 + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_1e15 + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_1e15[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1e15 + 1,local_1e15 + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    pCVar7 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_170d + 1,
                                                             g_CLeverClassInfo.name_hash,
                                                             g_CLeverClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == 0x0FFFFFFF) || (local_170 == 0))
                                                  {
                                                    pcVar21 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (param_1,local_1e15 + 1);
                                                  if (pcVar21 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_1e15 + 1);
                                                  if (iVar5 == 0) {
                                                    uStack_178 = 0;
                                                  }
                                                  else {
                                                    uStack_178 = 0x3ff00000;
                                                  }
                                                  local_17c = 0;
                                                  core_lever_cpp_FUN_004e04b0
                                                            (pCVar7,(float)(double)((ulonglong)
                                                                                    uStack_178 <<
                                                                                   0x20));
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setModelState",0xd);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xd);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_74 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^,], %[^)])%n");
                                                    if (local_74 < 5) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setModelState command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_74;
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_1325 + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_1325 + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_1325 + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_1325[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1325 + 1,local_1325 + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_c1d + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_c1d + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_c1d + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_c1d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_c1d + 1,local_c1d + 2,SVar18)
                                                      ;
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    pCVar7 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_1325 + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar21 = local_c1d + 1;
                                                    iVar5 = 0;
                                                    pCVar15 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                                            (&(pCVar7->model).base);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50
                                                            (pCVar15,pcVar21,iVar5);
                                                  if (iVar5 < 0) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Model %s does not have state %s");
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                                            (&(pCVar7->model).base,iVar5,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setSunlight",0xb);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xb);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_6c = -1;
                                                    sscanf
                                                              ((char *)local_16c,
                                                               "(%f , %f , %f , %f )%n");
                                                    if (local_6c < 5) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setSunlight command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_68 = SQRT(local_180 * local_180 +
                                                                    local_188 * local_188 +
                                                                    local_184 * local_184);
                                                    local_16c = local_16c + local_6c;
                                                    if (local_68 <= 0.0) {
                                                      local_184 = 0.0;
                                                      local_188 = 0.0;
                                                      local_180 = 0.0;
                                                    }
                                                    else {
                                                      fVar4 = 1.0 / local_68;
                                                      local_188 = local_188 * fVar4;
                                                      local_184 = local_184 * fVar4;
                                                      local_180 = local_180 * fVar4;
                                                    }
                                                    if (local_170 != 0) {
                                                      core_set_cpp_FUN_0053b2c0
                                                                (g_CDemonSetPtr,local_188,local_184,
                                                                 local_180,local_70);
                                                    }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"setTimer",8
                                                                      );
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 8);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_58 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %f)%n");
                                                      if (local_58 < 3) {
                                                        _sprintf(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_58;
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_76d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_76d + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_76d + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_76d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_76d + 1,local_76d + 2,SVar18);
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_76d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  if (0x1f < ~uVar17 - 1) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Timer name \"%s\" is too long, (max %d chars)");
                                                    return 0;
                                                  }
                                                  if (local_5c < 0.0) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_00494a70
                                                            (param_1,local_76d + 1,local_5c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "setEndTimer",0xb);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xb);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_50 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%f)%n");
                                                    if (local_50 < 2) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing setEndTimer command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_50;
                                                    g_CGamePtr->end_timer = local_54;
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"setWeather"
                                                                       ,10);
                                                    if ((iVar5 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[10] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = (byte *)(param_2 + 10);
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_4c = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^)])%n");
                                                      if (local_4c < 3) {
                                                        _sprintf(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_4c;
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_1bbd + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_1bbd + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_1bbd + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1bbd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1bbd + 1,local_1bbd + 2,SVar18)
                                                    ;
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  iVar5 = _stricmp
                                                                    (local_1bbd + 1,&DAT_005bf180);
                                                  uVar14 = 0;
                                                  if (iVar5 != 0) {
                                                    iVar5 = _stricmp
                                                                      (local_1bbd + 1,&DAT_005bf185)
                                                    ;
                                                    if (iVar5 == 0) {
                                                      uVar14 = 1;
                                                    }
                                                    else {
                                                      iVar5 = _stricmp
                                                                        (local_1bbd + 1,
                                                                         &DAT_005bf18a);
                                                      if (iVar5 != 0) {
                                                        _sprintf(&DAT_01c734b0,
                                                                   "Invalid weather type: %s"
                                                                  );
                                                        return 0;
                                                      }
                                                      uVar14 = 2;
                                                    }
                                                  }
                                                  if (local_170 != 0) {
                                                    core_weather_cpp_FUN_0057d050
                                                              (0x02D0C1A0,uVar14);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "shakeScreen",0xb);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xb);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_38 = -1;
                                                    sscanf
                                                              ((char *)local_16c,
                                                               "( %f, %f, %f, %f )%n");
                                                    if (local_38 < 5) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing shakeScreen command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_38;
                                                    if (local_170 != 0) {
                                                                                                            
                                                  core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440
                                                            (g_CDemonSetPtr,local_48,local_44,
                                                             local_40,local_3c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "slamModelToMotion",0x11);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0x11);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_34 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^,], %[^)])%n");
                                                    if (local_34 < 5) {
                                                      _sprintf(&DAT_01c734b0,
                                                                 "Error parsing slamModelToMotion command parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_34;
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_1d4d + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_1d4d + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_1d4d + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_1d4d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_1d4d + 1,local_1d4d + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    uVar17 = 0xffffffff;
                                                    pcVar21 = local_206d + 1;
                                                    do {
                                                      if (uVar17 == 0) break;
                                                      uVar17 = uVar17 - 1;
                                                      cVar3 = *pcVar21;
                                                      pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    SVar18 = ~uVar17 - 1;
                                                    if (0 < (int)SVar18) {
                                                      pcVar21 = local_206d + ~uVar17;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar21[-1] + 1)] & 2) == 0)
                                                        break;
                                                        SVar18 = SVar18 - 1;
                                                        pcVar21 = pcVar21 + -1;
                                                      } while (0 < (int)SVar18);
                                                    }
                                                    (local_206d + 1)[SVar18] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_206d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_206d + 1,local_206d + 2,
                                                                 SVar18);
                                                      SVar18 = SVar18 - 1;
                                                    }
                                                    pCVar7 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_1d4d + 1,
                                                             g_CCharacterClassInfo.name_hash,
                                                             g_CCharacterClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar21 = local_206d + 1;
                                                    iVar5 = 0;
                                                    this_ptr = &pCVar7->model;
                                                    pCVar15 = 
                                                  core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                                                            (&this_ptr->base);
                                                  iVar5 = 
                                                  core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                                                            (pCVar15,pcVar21,iVar5);
                                                  if (iVar5 < 0) {
                                                    _sprintf(&DAT_01c734b0,
                                                               "Model %s does not have motion %s");
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                                                                        
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                                                            (&this_ptr->base,iVar5,0.0);
                                                  iVar5 = 1;
                                                  pSVar16 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                                            (&this_ptr->base);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                                            (&this_ptr->base,pSVar16->state_index,
                                                             iVar5);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "switchCamera",0xc);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    pbVar11 = (byte *)(param_2 + 0xc);
                                                    while (((&DAT_006074b8)[(byte)(*pbVar11 + 1)] &
                                                           2) != 0) {
                                                      pbVar11 = pbVar11 + 1;
                                                    }
                                                    puVar22 = &DAT_005fbbc0;
                                                    pcVar21 = local_320;
                                                    for (iVar5 = 0x19; iVar5 != 0;
                                                        iVar5 = iVar5 + -1) {
                                                      *(uint *)pcVar21 = *puVar22;
                                                      puVar22 = puVar22 + (uint)bVar24 * -2 + 1;
                                                      pcVar21 = pcVar21 + ((uint)bVar24 * -2 + 1) *
                                                                          4;
                                                    }
                                                    local_30 = -1;
                                                    local_16c = pbVar11;
                                                    sscanf
                                                              ((char *)pbVar11," ( %[^ ,)]%n");
                                                    if (local_30 < 2) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar5;
                                                  }
                                                  local_16c = local_16c + local_30;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  iVar5 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_00535360
                                                            (g_CDemonSetPtr,local_320);
                                                  if (iVar5 < 0) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Camera \"%s\" doesn't exist");
                                                  return iVar5;
                                                  }
                                                  local_2c = 3.0;
                                                  if (*local_16c == 0x2c) {
                                                    local_30 = -1;
                                                    sscanf
                                                              ((char *)local_16c,",%f%n");
                                                    if (local_30 < 2) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar5;
                                                  }
                                                  local_16c = local_16c + local_30;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  }
                                                  if (*local_16c != 0x29) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Missing ')' in switchCamera() statement");
                                                  return iVar5;
                                                  }
                                                  local_16c = local_16c + 1;
                                                  if (local_170 != 0) {
                                                                                                        
                                                  core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00540ba0
                                                            (g_CDemonSetPtr,iVar5,local_2c);
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0x15] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0x15);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_28 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^)])%n");
                                                    if (local_28 < 3) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing turnToFieldNotesEntry command");
                                                  return iVar5;
                                                  }
                                                  local_16c = local_16c + local_28;
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = &stack0xffffd204;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    puVar19 = &stack0xffffd203 + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(puVar19[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      puVar19 = puVar19 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (&stack0xffffd204)[SVar18] = 0;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)in_stack_ffffd204 + 1)] & 2)
                                                         != 0) {
                                                    memmove
                                                              (&stack0xffffd204,&stack0xffffd205,
                                                               SVar18);
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  if (_DAT_01c734ac != 0) {
                                                    iVar5 = 
                                                  core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004abb30
                                                            (g_CFieldNotesPtr,&stack0xffffd204);
                                                  switch(iVar5) {
                                                  case 0:
                                                  case 1:
                                                  case 2:
                                                  case 3:
                                                  case 4:
                                                  case 5:
                                                  case 6:
                                                    goto switchD_0048cb59_caseD_2;
                                                  default:
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Field notes entry '%s' not found");
                                                  return iVar5;
                                                  }
                                                  }
                                                  core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004abb90
                                                            (g_CFieldNotesPtr,&stack0xffffd204);
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,
                                                  "warpToMulti",0xb);
                                                  if ((iVar5 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = (byte *)(param_2 + 0xb);
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_20 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^,], %[^,], %[^)])%n");
                                                    if (local_20 < 5) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing warpToMulti command parms");
                                                  return iVar5;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_1645 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_1645 + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_1645 + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1645[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1645 + 1,local_1645 + 2,SVar18)
                                                    ;
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_157d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_157d + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_157d + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_157d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_157d + 1,local_157d + 2,SVar18)
                                                    ;
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_8fd + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_8fd + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_8fd + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_8fd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_8fd + 1,local_8fd + 2,SVar18);
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  local_16c = local_16c + local_20;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  pCVar7 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_1645 + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  local_1c = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_8fd + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (local_1c == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (local_1c == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  else if (local_170 != 0) {
                                                    local_200 = (pCVar7->base).location.area_id;
                                                  }
                                                  local_20 = 0xffffffff;
                                                  pCVar9 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_157d + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar9 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar9 == 0x0FFFFFFF) {
                                                    local_170 = (uint)pCVar9 ^ (uint)0x0FFFFFFF;
                                                  }
                                                  else {
                                                    local_20c.x = (pCVar9->base).location.position.x
                                                    ;
                                                    local_20c.y = (pCVar9->base).location.position.y
                                                    ;
                                                    local_20c.z = (pCVar9->base).location.position.z
                                                    ;
                                                    pUVar23 = &(pCVar9->base).orient;
                                                    local_200 = (pCVar9->base).location.area_id;
                                                    if (&local_1dc != (CVector3f *)pUVar23) {
                                                      local_1dc.x = (pUVar23->vec).x;
                                                      local_1dc.y = (pCVar9->base).orient.vec.y;
                                                      local_1dc.z = (pCVar9->base).orient.vec.z;
                                                    }
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_157d + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  local_20 = ~uVar17 - 1;
                                                  if ((local_20 < 0) ||
                                                     (local_157d[~uVar17] != '\0')) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar5;
                                                  }
                                                  if (local_170 != 0) {
                                                    if (local_200 != (pCVar7->base).location.area_id
                                                       ) {
                                                      (*((pCVar7->base).vtable._ub)->setup)
                                                                ((CDemonActor *)pCVar7);
                                                    }
                                                    pCVar9 = (CCharacter *)
                                                                                                                          
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            ((CDemonActor *)pCVar7,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar9 != (CCharacter *)0x0) {
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseFromGrab)(pCVar9);
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseVictim)(pCVar9);
                                                  }
                                                  pCVar9 = (CCharacter *)
                                                                                                                      
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            (&local_1c->base,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar9 != (CCharacter *)0x0) {
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseFromGrab)(pCVar9);
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseVictim)(pCVar9);
                                                  }
                                                  local_1fc.x = (pCVar7->base).location.position.x;
                                                  local_1fc.y = (pCVar7->base).location.position.y;
                                                  local_1fc.z = (pCVar7->base).location.position.z;
                                                  local_1f0 = (pCVar7->base).location.area_id;
                                                  pUVar23 = &(pCVar7->base).orient;
                                                  if (&local_1a0 != (CVector3f *)pUVar23) {
                                                    local_1a0.x = (pUVar23->vec).x;
                                                    local_1a0.y = (pCVar7->base).orient.vec.y;
                                                    local_1a0.z = (pCVar7->base).orient.vec.z;
                                                  }
                                                  (local_1c->base).location.area_id =
                                                       (pCVar7->base).location.area_id;
                                                  (*((local_1c->base).vtable._ub)->
                                                    setPositionAndOrientation)
                                                            (&local_1c->base,&local_1fc,&local_1a0);
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
                                                            (&local_1c->base);
                                                  (pCVar7->base).location.area_id = local_200;
                                                  (*((pCVar7->base).vtable._ub)->
                                                    setPositionAndOrientation)
                                                            ((CDemonActor *)pCVar7,&local_20c,
                                                             &local_1dc);
                                                  if (pCVar7 == (CCharacter *)
                                                                g_CScriptPtr->focus_actor) {
                                                    g_CScriptPtr->focus_actor_changed = 1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar5 = _strnicmp
                                                                      (param_2,"warpTo",6);
                                                    if ((iVar5 != 0) ||
                                                       (((&DAT_006074b8)[(byte)(param_2[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Unknown meta-function starting at %s");
                                                  return iVar5;
                                                  }
                                                  local_16c = (byte *)(param_2 + 6);
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  local_14 = -1;
                                                  sscanf
                                                            ((char *)local_16c,"(%[^,], %[^)])%n");
                                                  if (local_14 < 5) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar5;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_21fd + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_21fd + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_21fd + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_21fd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_21fd + 1,local_21fd + 2,SVar18)
                                                    ;
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_17d5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  SVar18 = ~uVar17 - 1;
                                                  if (0 < (int)SVar18) {
                                                    pcVar21 = local_17d5 + ~uVar17;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar21[-1] + 1)]
                                                          & 2) == 0) break;
                                                      SVar18 = SVar18 - 1;
                                                      pcVar21 = pcVar21 + -1;
                                                    } while (0 < (int)SVar18);
                                                  }
                                                  (local_17d5 + 1)[SVar18] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_17d5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_17d5 + 1,local_17d5 + 2,SVar18)
                                                    ;
                                                    SVar18 = SVar18 - 1;
                                                  }
                                                  local_16c = local_16c + local_14;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  pCVar7 = (CCharacter *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_21fd + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar7 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_170 = (uint)pCVar7 ^ (uint)0x0FFFFFFF;
                                                  }
                                                  else if (local_170 != 0) {
                                                    local_1ec.area_id =
                                                         (pCVar7->base).location.area_id;
                                                  }
                                                  local_14 = -1;
                                                  sscanf
                                                            (local_17d5 + 1,"%f,%f,%f,%f,%f,%f%n"
                                                            );
                                                  if (local_14 < 0) {
                                                    if ((local_170 != 0) &&
                                                       (pUVar23 = &(pCVar7->base).orient,
                                                       local_1c4 != (CVector3f *)pUVar23)) {
                                                      local_1c4[0].x = (pUVar23->vec).x;
                                                      local_1c4[0].y = (pCVar7->base).orient.vec.y;
                                                      local_1c4[0].z = (pCVar7->base).orient.vec.z;
                                                    }
                                                    sscanf
                                                              (local_17d5 + 1,"%f,%f,%f,%f%n");
                                                  }
                                                  if (local_14 < 0) {
                                                    if ((local_170 != 0) &&
                                                       (pUVar23 = &(pCVar7->base).orient,
                                                       local_1c4 != (CVector3f *)pUVar23)) {
                                                      local_1c4[0].x = (pUVar23->vec).x;
                                                      local_1c4[0].y = (pCVar7->base).orient.vec.y;
                                                      local_1c4[0].z = (pCVar7->base).orient.vec.z;
                                                    }
                                                    sscanf
                                                              (local_17d5 + 1,"%f,%f,%f%n");
                                                  }
                                                  if (local_14 < 0) {
                                                    pCVar9 = (CCharacter *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_17d5 + 1,
                                                             g_CDemonActorClassInfo.name_hash,
                                                             g_CDemonActorClassInfo.class_name);
                                                  if (pCVar9 == (CCharacter *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar9 == 0x0FFFFFFF) {
                                                    local_170 = (uint)pCVar9 ^ (uint)0x0FFFFFFF;
                                                  }
                                                  else {
                                                    local_1ec.position.x =
                                                         (pCVar9->base).location.position.x;
                                                    local_1ec.position.y =
                                                         (pCVar9->base).location.position.y;
                                                    local_1ec.position.z =
                                                         (pCVar9->base).location.position.z;
                                                    pUVar23 = &(pCVar9->base).orient;
                                                    local_1ec.area_id =
                                                         (pCVar9->base).location.area_id;
                                                    if (local_1c4 != (CVector3f *)pUVar23) {
                                                      local_1c4[0].x = (pUVar23->vec).x;
                                                      local_1c4[0].y = (pCVar9->base).orient.vec.y;
                                                      local_1c4[0].z = (pCVar9->base).orient.vec.z;
                                                    }
                                                  }
                                                  uVar17 = 0xffffffff;
                                                  pcVar21 = local_17d5 + 1;
                                                  do {
                                                    if (uVar17 == 0) break;
                                                    uVar17 = uVar17 - 1;
                                                    cVar3 = *pcVar21;
                                                    pcVar21 = pcVar21 + (uint)bVar24 * -2 + 1;
                                                  } while (cVar3 != '\0');
                                                  local_14 = ~uVar17 - 1;
                                                  }
                                                  if ((local_14 < 0) ||
                                                     (local_17d5[local_14 + 1] != '\0')) {
                                                    iVar5 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar5;
                                                  }
                                                  if (local_170 != 0) {
                                                    if (local_1ec.area_id !=
                                                        (pCVar7->base).location.area_id) {
                                                      (*((pCVar7->base).vtable._ub)->setup)
                                                                ((CDemonActor *)pCVar7);
                                                    }
                                                    pCVar9 = (CCharacter *)
                                                                                                                          
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            ((CDemonActor *)pCVar7,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar9 != (CCharacter *)0x0) {
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseFromGrab)(pCVar9);
                                                    (*(((pCVar9->base).vtable._uc)->_uc).
                                                      releaseVictim)(pCVar9);
                                                  }
                                                  (pCVar7->base).location.area_id =
                                                       local_1ec.area_id;
                                                  (*((pCVar7->base).vtable._ub)->
                                                    setPositionAndOrientation)
                                                            ((CDemonActor *)pCVar7,
                                                             &local_1ec.position,local_1c4);
                                                  if (pCVar7 == *(CCharacter **)
                                                                 (_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
                                                                                                        
                                                  core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0
                                                            (0x01D81080,&local_1ec);
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
            }
          }
        }
      }
    }
switchD_0048cb59_caseD_2:
    while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
      local_16c = local_16c + 1;
    }
    if (*local_16c != 0) {
      iVar5 = core_event_cpp_formatEventError_FUN_0048b7f0("Extra characters found");
      return iVar5;
    }
  }
  return 1;
}
