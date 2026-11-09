// Name: core_event.cpp_FUN_0048c2e0
// Address: 0048c2e0
// Address Range: [[0048c2e0, 00491a06]]
// Convention: unknown
// Signature: int core_event_cpp_FUN_0048c2e0(CEventList *param_1,CEventList *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_event_cpp_FUN_0048c2e0(CEventList *param_1,CEventList *param_2)

{
  CEventList CVar1;
  char cVar2;
  float fVar3;
  CDemonMission *this_ptr;
  int iVar4;
  int iVar5;
  char *pcVar6;
  CDemonActor *pCVar7;
  int iVar8;
  uint uVar9;
  CDemonActor *pCVar10;
  CMotionList *pCVar11;
  SMotion *pSVar12;
  uint uVar13;
  SIZE_T SVar14;
  int *piVar15;
  int iVar16;
  CEventList *pCVar17;
  CEventList *pCVar18;
  uint *puVar19;
  char *pcVar20;
  uint *puVar21;
  byte bVar22;
  char local_2dfc [255];
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
  byte local_1964 [199];
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
  uint local_20c;
  uint local_208;
  uint local_204;
  int local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  int local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  byte local_1ac [12];
  uint local_1a0;
  uint local_19c;
  uint local_198;
  byte local_194 [12];
  float local_188;
  float local_184;
  float local_180;
  uint local_17c;
  uint uStack_178;
  CEventList *local_174;
  uint local_170;
  CEventList *local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  C3DSLight *local_158;
  CDemonLight *local_154;
  int local_150;
  int local_14c;
  int local_148;
  uint local_144;
  uint local_140;
  int local_13c;
  int local_138;
  int local_134;
  uint local_130;
  int local_12c;
  int local_128;
  CDemonActor *local_124;
  int local_120;
  int local_11c;
  float local_118;
  float local_114;
  int local_110;
  uint local_10c;
  float local_108;
  int local_104;
  int local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  byte *local_e8;
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
  uint local_b4;
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
  int local_6c;
  float local_68;
  int local_64;
  float local_5c;
  int local_58;
  uint local_54;
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
  CDemonActor *local_1c;
  int local_18;
  int local_14;
  
  bVar22 = 0;
  DAT_01c734b0 = 0;
  if (((param_2 != (CEventList *)0x0) && (*param_2 != (CEventList)0x0)) &&
     (iVar4 = _stricmp((char *)param_2,&DAT_005bdf86), iVar4 != 0)) {
    if (*param_2 == (CEventList)0x2e) {
      param_2 = param_2 + 1;
    }
    local_170 = (uint)(_DAT_01c734ac == 0);
    local_16c = (CEventList *)&DAT_005bdf8b;
    pCVar18 = param_2;
    do {
      pCVar17 = pCVar18;
      if (*pCVar18 == (CEventList)0x28) goto LAB_0048c367;
      if (*pCVar18 == (CEventList)0x0) break;
      pCVar17 = pCVar18 + 1;
      if (*pCVar17 == (CEventList)0x28) goto LAB_0048c367;
      pCVar18 = pCVar18 + 2;
    } while (*pCVar17 != (CEventList)0x0);
    pCVar17 = (CEventList *)0x0;
LAB_0048c367:
    if (pCVar17 == (CEventList *)0x0) {
      if (0 < *(int *)param_1) {
        pCVar18 = param_1 + 4;
        iVar4 = 0;
        do {
          iVar5 = _stricmp((char *)pCVar18,(char *)param_2);
          if (iVar5 == 0) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          pCVar18 = pCVar18 + 0x20;
        } while (iVar4 < *(int *)param_1);
      }
      uVar13 = 0xffffffff;
      pCVar18 = param_2;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        CVar1 = *pCVar18;
        pCVar18 = pCVar18 + (uint)bVar22 * -2 + 1;
      } while (CVar1 != (CEventList)0x0);
      if (0x1f < ~uVar13 - 1) {
        iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0("Event name %s is too long");
        return iVar4;
      }
      if (99 < *(int *)param_1) {
        local_168 = _fopen("events.txt");
        if (local_168 != 0) {
          iVar4 = 0;
          if (0 < *(int *)param_1) {
            do {
              FUN_005a3140(local_168,&DAT_005bdfb4);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)param_1);
          }
          _fclose();
        }
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0x27d;
        core_main_c_FUN_004e4330();
      }
      pCVar17 = param_1 + *(int *)param_1 * 0x20 + 4;
      pCVar18 = pCVar17;
      do {
        CVar1 = *param_2;
        *pCVar18 = CVar1;
        if (CVar1 == (CEventList)0x0) break;
        CVar1 = param_2[1];
        param_2 = param_2 + 2;
        pCVar18[1] = CVar1;
        pCVar18 = pCVar18 + 2;
      } while (CVar1 != (CEventList)0x0);
      local_24 = 0;
      local_174 = pCVar17;
      do {
        uVar13 = 0xffffffff;
        pCVar18 = local_174;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          CVar1 = *pCVar18;
          pCVar18 = pCVar18 + (uint)bVar22 * -2 + 1;
        } while (CVar1 != (CEventList)0x0);
        if (~uVar13 - 1 <= local_24) {
          if (local_170 == 0) {
            return 1;
          }
          *(int *)param_1 = *(int *)param_1 + 1;
          return 1;
        }
        iVar4 = toupper((uint)(byte)*pCVar17);
        *pCVar17 = SUB41(iVar4,0);
        iVar4 = core_event_cpp_isValidIdentifierChar_FUN_00495460((uint)(byte)*pCVar17);
        if (iVar4 == 0) {
          iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0("Event name %s is not valid");
          return iVar4;
        }
        local_24 = local_24 + 1;
        pCVar17 = pCVar17 + 1;
      } while( true );
    }
    iVar4 = _strnicmp((char *)param_2,"activateGadget",0xe);
    if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
      local_16c = param_2 + 0xe;
      while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
        local_16c = local_16c + 1;
      }
      local_164 = -1;
      sscanf((char *)local_16c,"(%[^,], %[^,], %n");
      if (local_164 < 3) {
        iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0("Error parsing activateGadget command");
        return iVar4;
      }
      local_16c = local_16c + local_164;
      uVar13 = 0xffffffff;
      pcVar6 = local_26fd + 1;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
      } while (cVar2 != '\0');
      SVar14 = ~uVar13 - 1;
      if (0 < (int)SVar14) {
        pcVar6 = local_26fd + ~uVar13;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar14 = SVar14 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar14);
      }
      (local_26fd + 1)[SVar14] = '\0';
      while (((&DAT_006074b8)[(byte)(local_26fd[1] + 1)] & 2) != 0) {
        memmove(local_26fd + 1,local_26fd + 2,SVar14);
        SVar14 = SVar14 - 1;
      }
      uVar13 = 0xffffffff;
      pcVar6 = local_28fd + 1;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
      } while (cVar2 != '\0');
      SVar14 = ~uVar13 - 1;
      if (0 < (int)SVar14) {
        pcVar6 = local_28fd + ~uVar13;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar14 = SVar14 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar14);
      }
      (local_28fd + 1)[SVar14] = '\0';
      while (((&DAT_006074b8)[(byte)(local_28fd[1] + 1)] & 2) != 0) {
        memmove(local_28fd + 1,local_28fd + 2,SVar14);
        SVar14 = SVar14 - 1;
      }
      pcVar6 = (char *)core_event_cpp_FUN_0048bc10(&local_16c,local_24fd + 1,0x100);
      if (pcVar6 != (char *)0x0) goto LAB_0048c717;
      uVar13 = 0xffffffff;
      pcVar6 = local_24fd + 1;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
      } while (cVar2 != '\0');
      SVar14 = ~uVar13 - 1;
      if (0 < (int)SVar14) {
        pcVar6 = local_24fd + ~uVar13;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar14 = SVar14 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar14);
      }
      (local_24fd + 1)[SVar14] = '\0';
      while (((&DAT_006074b8)[(byte)(local_24fd[1] + 1)] & 2) != 0) {
        memmove(local_24fd + 1,local_24fd + 2,SVar14);
        SVar14 = SVar14 - 1;
      }
      pCVar7 = (CDemonActor *)
               core_event_cpp_resolveActorByName_FUN_0048b950
                         (local_26fd + 1,g_CHeroClassInfo.name_hash);
      if (pCVar7 == (CDemonActor *)0x0) {
        return 0;
      }
      if (pCVar7 == 0x0FFFFFFF) {
        local_170 = (uint)pCVar7 ^ (uint)0x0FFFFFFF;
      }
      piVar15 = (int *)0x0;
      iVar4 = _stricmp(local_28fd + 1,"compass");
      if (iVar4 == 0) {
        piVar15 = (int *)&pCVar7[0x182].field_0x40;
      }
      iVar4 = _stricmp(local_28fd + 1,&DAT_005be056);
      if (iVar4 == 0) {
        piVar15 = (int *)&pCVar7[0x182].field_0x44;
      }
      if (piVar15 == (int *)0x0) {
        iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0("Invalid gadget type: %s");
        return iVar4;
      }
      if (_DAT_01c734ac == 0) {
        if (local_170 != 0) {
          iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0(param_1,local_24fd + 1);
          *piVar15 = iVar4;
        }
      }
      else {
        pcVar6 = core_event_cpp_CEventList_validateCondition_FUN_00491b00(param_1,local_24fd + 1);
        if (pcVar6 != (char *)0x0) {
          return 0;
        }
      }
    }
    else {
      iVar4 = _strnicmp((char *)param_2,"activatePuzzle",0xe);
      if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
        local_16c = param_2 + 0xe;
        while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
          local_16c = local_16c + 1;
        }
        local_160 = -1;
        sscanf((char *)local_16c,"(%[^)])%n");
        if (local_160 < 3) {
          iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0("Error parsing activatePuzzle command");
          return iVar4;
        }
        local_16c = local_16c + local_160;
        uVar13 = 0xffffffff;
        pcVar6 = local_25fd + 1;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
        } while (cVar2 != '\0');
        SVar14 = ~uVar13 - 1;
        if (0 < (int)SVar14) {
          pcVar6 = local_25fd + ~uVar13;
          do {
            if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
            SVar14 = SVar14 - 1;
            pcVar6 = pcVar6 + -1;
          } while (0 < (int)SVar14);
        }
        (local_25fd + 1)[SVar14] = '\0';
        while (((&DAT_006074b8)[(byte)(local_25fd[1] + 1)] & 2) != 0) {
          memmove(local_25fd + 1,local_25fd + 2,SVar14);
          SVar14 = SVar14 - 1;
        }
        iVar5 = 0;
        iVar4 = 0;
        if (0 < DAT_007dff88) {
          iVar16 = 0;
          do {
            pcVar6 = (char *)(**(code **)(**(int **)((int)&DAT_007dff8c + iVar16) + 4))();
            iVar8 = _stricmp(local_25fd + 1,pcVar6);
            if (iVar8 == 0) {
              iVar4 = *(int *)((int)&DAT_007dff8c + iVar16);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar16 = iVar16 + 4;
          } while (iVar5 < DAT_007dff88);
        }
        if (iVar4 == 0) {
          iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0("No such puzzle '%s'");
          return iVar4;
        }
        if (local_170 != 0) {
          if (DAT_007dffb4 != 0) {
            unkafter_alphabit_cpp_FUN_004119a0(DAT_007dffb4);
          }
          unkafter_alphabit_cpp_FUN_004119a0(iVar4);
        }
      }
      else {
        iVar4 = _strnicmp
                          ((char *)param_2,"addFieldNotesTask",0x11);
        if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)((char)param_2[0x11] + 1)] & 0xe0) == 0)) {
          local_16c = param_2 + 0x11;
          while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
            local_16c = local_16c + 1;
          }
          local_15c = -1;
          sscanf((char *)local_16c,"(%[^)])%n");
          if (local_15c < 3) {
            iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                              ("Error parsing addFieldNotesTask command");
            return iVar4;
          }
          local_16c = local_16c + local_15c;
          uVar13 = 0xffffffff;
          pcVar6 = local_2bfd + 1;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
          } while (cVar2 != '\0');
          SVar14 = ~uVar13 - 1;
          if (0 < (int)SVar14) {
            pcVar6 = local_2bfd + ~uVar13;
            do {
              if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
              SVar14 = SVar14 - 1;
              pcVar6 = pcVar6 + -1;
            } while (0 < (int)SVar14);
          }
          (local_2bfd + 1)[SVar14] = '\0';
          while (((&DAT_006074b8)[(byte)(local_2bfd[1] + 1)] & 2) != 0) {
            memmove(local_2bfd + 1,local_2bfd + 2,SVar14);
            SVar14 = SVar14 - 1;
          }
          if (_DAT_01c734ac != 0) {
            uVar9 = core_fldnotes_cpp_FUN_004abb30(g_CFieldNotesPtr);
            switch(uVar9) {
            default:
              iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                ("Field notes entry '%s' is not a task");
              return iVar4;
            case 2:
            case 3:
            case 4:
              goto switchD_0048cb59_caseD_2;
            case 0xffffffff:
              iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                ("Field notes entry '%s' not found");
              return iVar4;
            }
          }
          core_fldnotes_cpp_FUN_004aba10(g_CFieldNotesPtr);
        }
        else {
          iVar4 = _strnicmp
                            ((char *)param_2,"advanceLightFilter",0x12);
          if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)((char)param_2[0x12] + 1)] & 0xe0) == 0)) {
            local_16c = param_2 + 0x12;
            while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
              local_16c = local_16c + 1;
            }
            pcVar6 = (char *)core_event_cpp_FUN_0048bc10(&local_16c,local_1c84,200);
            if (pcVar6 != (char *)0x0) goto LAB_0048c717;
            core_set_cpp_CDemonSet_addLightFilter_FUN_0053b3b0
                      (g_CDemonSetPtr,local_1c84,&local_158,&local_154);
            if (local_158 == (C3DSLight *)0x0) {
              iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                ("SpotLight %s doesn't exist.");
              return iVar4;
            }
            if (local_170 != 0) {
              if (local_154 == (CDemonLight *)0x0) {
                _DAT_01d71de0 = "..\\core\\event.cpp";
                _DAT_01d71de4 = 0x32e;
                core_main_c_FUN_004e4330("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
              }
              core_setutil_cpp_C3DSLight_advanceFilter_FUN_00542d20(local_158);
            }
          }
          else {
            iVar4 = _strnicmp
                              ((char *)param_2,"beginCarryItem",0xe);
            if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
              local_16c = param_2 + 0xe;
              while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                local_16c = local_16c + 1;
              }
              local_150 = -1;
              sscanf((char *)local_16c,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n");
              if (local_150 < 0) {
                iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                  ("Error parsing beginCarryItem() parms");
                return iVar4;
              }
              local_16c = local_16c + local_150;
              uVar13 = 0xffffffff;
              pcVar6 = local_13ed + 1;
              do {
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
              } while (cVar2 != '\0');
              SVar14 = ~uVar13 - 1;
              if (0 < (int)SVar14) {
                pcVar6 = local_13ed + ~uVar13;
                do {
                  if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                  SVar14 = SVar14 - 1;
                  pcVar6 = pcVar6 + -1;
                } while (0 < (int)SVar14);
              }
              (local_13ed + 1)[SVar14] = '\0';
              while (((&DAT_006074b8)[(byte)(local_13ed[1] + 1)] & 2) != 0) {
                memmove(local_13ed + 1,local_13ed + 2,SVar14);
                SVar14 = SVar14 - 1;
              }
              uVar13 = 0xffffffff;
              pcVar6 = local_5dd + 1;
              do {
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
              } while (cVar2 != '\0');
              SVar14 = ~uVar13 - 1;
              if (0 < (int)SVar14) {
                pcVar6 = local_5dd + ~uVar13;
                do {
                  if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                  SVar14 = SVar14 - 1;
                  pcVar6 = pcVar6 + -1;
                } while (0 < (int)SVar14);
              }
              (local_5dd + 1)[SVar14] = '\0';
              while (((&DAT_006074b8)[(byte)(local_5dd[1] + 1)] & 2) != 0) {
                memmove(local_5dd + 1,local_5dd + 2,SVar14);
                SVar14 = SVar14 - 1;
              }
              if ((local_64 < 0) || (1 < local_64)) {
                iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                  ("Invalid hand index: %d");
                return iVar4;
              }
              pCVar7 = (CDemonActor *)
                       core_event_cpp_resolveActorByName_FUN_0048b950
                                 (local_5dd + 1,g_CCharacterClassInfo.name_hash);
              if (pCVar7 == (CDemonActor *)0x0) {
                return 0;
              }
              if (pCVar7 == 0x0FFFFFFF) {
                local_170 = 0;
              }
              else if (*(int *)(&pCVar7[0x1c].field_0x8 + local_64 * 0x78) < 0) {
                iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                  ("%s doesn't have hand %d");
                return iVar4;
              }
              pCVar10 = (CDemonActor *)
                        core_event_cpp_resolveActorByName_FUN_0048b950
                                  (local_13ed + 1,g_CDemonActorClassInfo.name_hash);
              if (pCVar10 == (CDemonActor *)0x0) {
                return 0;
              }
              if ((pCVar10 != 0x0FFFFFFF) && (local_170 != 0)) {
                core_xform_cpp_FUN_00583940(local_2bc,local_1ac);
                core_charactr_cpp_FUN_004319d0(pCVar7,local_64,pCVar10,0);
              }
            }
            else {
              iVar4 = _strnicmp
                                ((char *)param_2,"completeFieldNotesTask",0x16);
              if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)((char)param_2[0x16] + 1)] & 0xe0) == 0))
              {
                local_16c = param_2 + 0x16;
                while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                  local_16c = local_16c + 1;
                }
                local_14c = -1;
                sscanf((char *)local_16c,"(%[^)])%n");
                if (local_14c < 3) {
                  iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                    ("Error parsing completeFieldNotesTask command");
                  return iVar4;
                }
                local_16c = local_16c + local_14c;
                uVar13 = 0xffffffff;
                pcVar6 = local_2cfd + 1;
                do {
                  if (uVar13 == 0) break;
                  uVar13 = uVar13 - 1;
                  cVar2 = *pcVar6;
                  pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                } while (cVar2 != '\0');
                SVar14 = ~uVar13 - 1;
                if (0 < (int)SVar14) {
                  pcVar6 = local_2cfd + ~uVar13;
                  do {
                    if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                    SVar14 = SVar14 - 1;
                    pcVar6 = pcVar6 + -1;
                  } while (0 < (int)SVar14);
                }
                (local_2cfd + 1)[SVar14] = '\0';
                while (((&DAT_006074b8)[(byte)(local_2cfd[1] + 1)] & 2) != 0) {
                  memmove(local_2cfd + 1,local_2cfd + 2,SVar14);
                  SVar14 = SVar14 - 1;
                }
                if (_DAT_01c734ac != 0) {
                  uVar9 = core_fldnotes_cpp_FUN_004abb30(g_CFieldNotesPtr);
                  switch(uVar9) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Field notes entry '%s' is not a task");
                    return iVar4;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_0048cb59_caseD_2;
                  default:
                    iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Field notes entry '%s' not found");
                    return iVar4;
                  }
                }
                core_fldnotes_cpp_FUN_004abcb0(g_CFieldNotesPtr);
              }
              else {
                iVar4 = _strnicmp
                                  ((char *)param_2,"createExplosion",0xf);
                if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)((char)param_2[0xf] + 1)] & 0xe0) == 0))
                {
                  local_16c = param_2 + 0xf;
                  while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                    local_16c = local_16c + 1;
                  }
                  local_148 = -1;
                  sscanf((char *)local_16c,"( %f , %n");
                  if (local_148 < 0) {
                    iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Error parsing createExplosion() parms");
                    return iVar4;
                  }
                  local_16c = local_16c + local_148;
                  local_148 = -1;
                  sscanf((char *)local_16c,"%f , %f , %f %n");
                  if ((local_148 < 0) &&
                     (sscanf((char *)local_16c," %[^,)] %n"),
                     -1 < local_148)) {
                    uVar13 = 0xffffffff;
                    pcVar6 = local_125d + 1;
                    do {
                      if (uVar13 == 0) break;
                      uVar13 = uVar13 - 1;
                      cVar2 = *pcVar6;
                      pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                    } while (cVar2 != '\0');
                    SVar14 = ~uVar13 - 1;
                    if (0 < (int)SVar14) {
                      pcVar6 = local_125d + ~uVar13;
                      do {
                        if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                        SVar14 = SVar14 - 1;
                        pcVar6 = pcVar6 + -1;
                      } while (0 < (int)SVar14);
                    }
                    (local_125d + 1)[SVar14] = '\0';
                    while (((&DAT_006074b8)[(byte)(local_125d[1] + 1)] & 2) != 0) {
                      memmove(local_125d + 1,local_125d + 2,SVar14);
                      SVar14 = SVar14 - 1;
                    }
                    pCVar7 = (CDemonActor *)
                             core_event_cpp_resolveActorByName_FUN_0048b950
                                       (local_125d + 1,g_CDemonActorClassInfo.name_hash);
                    if (pCVar7 == (CDemonActor *)0x0) {
                      return 0;
                    }
                    if (pCVar7 == 0x0FFFFFFF) {
                      local_170 = 0;
                    }
                    else if (&local_1d0 != (uint *)&pCVar7->field_0x20) {
                      local_1d0 = *(uint *)&pCVar7->field_0x20;
                      local_1cc = *(uint *)&pCVar7->field_0x24;
                      local_1c8 = *(uint *)&pCVar7->field_0x28;
                    }
                  }
                  if (local_148 < 0) {
                    iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Error parsing createExplosion() parms");
                    return iVar4;
                  }
                  local_16c = local_16c + local_148;
                  while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                    local_16c = local_16c + 1;
                  }
                  local_140 = 0x40800000;
                  if (*local_16c == (CEventList)0x2c) {
                    local_148 = -1;
                    sscanf((char *)local_16c,", %f %n");
                    if (local_148 < 0) {
                      iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                        ("Error parsing createExplosion() parms");
                      return iVar4;
                    }
                    local_16c = local_16c + local_148;
                    while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                      local_16c = local_16c + 1;
                    }
                  }
                  if (*local_16c != (CEventList)0x29) {
                    iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                      ("Error parsing createExplosion() parms, expected matching ')'");
                    return iVar4;
                  }
                  local_16c = local_16c + 1;
                  if (local_170 != 0) {
                    core_fire_cpp_FUN_004a36e0
                              (0x01C73654,&local_1d0,local_144,0x44bb8000,local_140);
                  }
                }
                else {
                  iVar4 = _strnicmp
                                    ((char *)param_2,"deleteActor",0xb);
                  if ((iVar4 == 0) &&
                     (((&DAT_006074b8)[(byte)((char)param_2[0xb] + 1)] & 0xe0) == 0)) {
                    local_16c = param_2 + 0xb;
                    while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                      local_16c = local_16c + 1;
                    }
                    pcVar6 = (char *)core_event_cpp_FUN_0048bc10(&local_16c,local_1964,200);
                    if (pcVar6 != (char *)0x0) goto LAB_0048c717;
                    pCVar7 = (CDemonActor *)
                             core_event_cpp_resolveActorByName_FUN_0048b950
                                       (local_1964,g_CDemonActorClassInfo.name_hash);
                    if (pCVar7 == (CDemonActor *)0x0) {
                      if (_DAT_01c734ac != 0) {
                        return 0;
                      }
                      local_170 = 0;
                    }
                    if ((pCVar7 != 0x0FFFFFFF) && (local_170 != 0)) {
                      *(uint *)&pCVar7->field_0x70 = 2;
                      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar7);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x2d4) = 0;
                        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(iVar4 + 0x2fc));
                      }
                      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar7);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x1b4) = 0;
                        *(byte *)(iVar4 + 0x21c) = 0;
                        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(iVar4 + 0x280));
                      }
                    }
                  }
                  else {
                    iVar4 = _strnicmp
                                      ((char *)param_2,"displayBitmap",0xd);
                    if ((iVar4 == 0) &&
                       (((&DAT_006074b8)[(byte)((char)param_2[0xd] + 1)] & 0xe0) == 0)) {
                      local_16c = param_2 + 0xd;
                      while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                        local_16c = local_16c + 1;
                      }
                      local_134 = -1;
                      sscanf((char *)local_16c,"( %[^ ,] , %d , %d%n");
                      if (local_134 < 0) {
                        iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                          ("Error parsing displayBitmap() parms");
                        return iVar4;
                      }
                      local_16c = local_16c + local_134;
                      while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                        local_16c = local_16c + 1;
                      }
                      local_130 = 0;
                      pCVar18 = local_16c;
                      if (*local_16c == (CEventList)0x2c) {
                        local_134 = -1;
                        sscanf((char *)local_16c,", %f %n");
                        if (local_134 < 1) {
                          FUN_005a28c0
                                    (&DAT_01c734b0,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pCVar18 = local_16c + local_134;
                        while (((&DAT_006074b8)[(byte)((char)*pCVar18 + 1)] & 2) != 0) {
                          pCVar18 = pCVar18 + 1;
                        }
                      }
                      do {
                        local_16c = pCVar18;
                        pCVar18 = local_16c + 1;
                      } while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0);
                      if (*local_16c != (CEventList)0x29) {
                        FUN_005a28c0
                                  (&DAT_01c734b0,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_16c = local_16c + 1;
                      iVar4 = engine_dosio_cpp_getFileSize_FUN_004657f0(&DAT_005be4a1,local_22fc);
                      if (iVar4 < 0) {
                        iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                          ("Bitmap doesn't exist");
                        return iVar4;
                      }
                      if (iVar4 != local_13c * local_138) {
                        iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                          ("Bitmap file size does not match specified dimensions");
                        return iVar4;
                      }
                      if (local_170 != 0) {
                        core_game_cpp_FUN_004beb80(g_CGamePtr,local_22fc,local_13c,local_138);
                      }
                    }
                    else {
                      iVar4 = _strnicmp
                                        ((char *)param_2,"displayFieldNotes",0x11);
                      if ((iVar4 == 0) &&
                         (((&DAT_006074b8)[(byte)((char)param_2[0x11] + 1)] & 0xe0) == 0)) {
                        local_16c = param_2 + 0x11;
                        while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                          local_16c = local_16c + 1;
                        }
                        local_12c = -1;
                        sscanf((char *)local_16c,"(%[^)])%n");
                        if (local_12c < 5) {
                          FUN_005a28c0
                                    (&DAT_01c734b0,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_16c = local_16c + local_12c;
                        uVar13 = 0xffffffff;
                        pcVar6 = local_14b5 + 1;
                        do {
                          if (uVar13 == 0) break;
                          uVar13 = uVar13 - 1;
                          cVar2 = *pcVar6;
                          pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                        } while (cVar2 != '\0');
                        SVar14 = ~uVar13 - 1;
                        if (0 < (int)SVar14) {
                          pcVar6 = local_14b5 + ~uVar13;
                          do {
                            if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                            SVar14 = SVar14 - 1;
                            pcVar6 = pcVar6 + -1;
                          } while (0 < (int)SVar14);
                        }
                        (local_14b5 + 1)[SVar14] = '\0';
                        while (((&DAT_006074b8)[(byte)(local_14b5[1] + 1)] & 2) != 0) {
                          memmove(local_14b5 + 1,local_14b5 + 2,SVar14);
                          SVar14 = SVar14 - 1;
                        }
                        if (local_170 == 0) {
                          pcVar6 = core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                             (param_1,local_14b5 + 1);
                          if (pcVar6 != (char *)0x0) {
                            return 0;
                          }
                        }
                        else {
                          iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                            (0x01C6E360,local_14b5 + 1);
                          *(int *)&g_CFieldNotesPtr->field_0x40 = iVar4;
                        }
                      }
                      else {
                        iVar4 = _strnicmp
                                          ((char *)param_2,"dropItem",8);
                        if ((iVar4 == 0) &&
                           (((&DAT_006074b8)[(byte)((char)param_2[8] + 1)] & 0xe0) == 0)) {
                          local_16c = param_2 + 8;
                          while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                            local_16c = local_16c + 1;
                          }
                          local_128 = -1;
                          sscanf((char *)local_16c,"( %[^,],%n");
                          if (local_128 < 0) {
                            iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                              ("Error parsing dropItem() parms");
                            return iVar4;
                          }
                          local_16c = local_16c + local_128;
                          uVar13 = 0xffffffff;
                          pcVar6 = local_f3d + 1;
                          do {
                            if (uVar13 == 0) break;
                            uVar13 = uVar13 - 1;
                            cVar2 = *pcVar6;
                            pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                          } while (cVar2 != '\0');
                          SVar14 = ~uVar13 - 1;
                          if (0 < (int)SVar14) {
                            pcVar6 = local_f3d + ~uVar13;
                            do {
                              if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                              SVar14 = SVar14 - 1;
                              pcVar6 = pcVar6 + -1;
                            } while (0 < (int)SVar14);
                          }
                          (local_f3d + 1)[SVar14] = '\0';
                          while (((&DAT_006074b8)[(byte)(local_f3d[1] + 1)] & 2) != 0) {
                            memmove(local_f3d + 1,local_f3d + 2,SVar14);
                            SVar14 = SVar14 - 1;
                          }
                          local_124 = (CDemonActor *)
                                      core_event_cpp_resolveActorByName_FUN_0048b950
                                                (local_f3d + 1,g_CCharacterClassInfo.name_hash);
                          if (local_124 == (CDemonActor *)0x0) {
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
                              iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                ("Error parsing dropItem() parms");
                              return iVar4;
                            }
                            uVar13 = 0xffffffff;
                            pcVar6 = local_1005 + 1;
                            do {
                              if (uVar13 == 0) break;
                              uVar13 = uVar13 - 1;
                              cVar2 = *pcVar6;
                              pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                            } while (cVar2 != '\0');
                            SVar14 = ~uVar13 - 1;
                            if (0 < (int)SVar14) {
                              pcVar6 = local_1005 + ~uVar13;
                              do {
                                if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                SVar14 = SVar14 - 1;
                                pcVar6 = pcVar6 + -1;
                              } while (0 < (int)SVar14);
                            }
                            (local_1005 + 1)[SVar14] = '\0';
                            while (((&DAT_006074b8)[(byte)(local_1005[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_1005 + 1,local_1005 + 2,SVar14);
                              SVar14 = SVar14 - 1;
                            }
                            local_18 = -1;
                            iVar4 = local_18;
                            if (local_124 != 0x0FFFFFFF) {
                              iVar5 = 0;
                              pCVar7 = local_124;
                              do {
                                if ((*(char **)&pCVar7[0x1c].field_0x10 != (char *)0x0) &&
                                   (iVar16 = _stricmp
                                                       (*(char **)&pCVar7[0x1c].field_0x10,
                                                        local_1005 + 1), iVar4 = iVar5, iVar16 == 0)
                                   ) break;
                                iVar5 = iVar5 + 1;
                                pCVar7 = (CDemonActor *)&pCVar7->field_0x78;
                                iVar4 = local_18;
                              } while (iVar5 < 2);
                            }
                          }
                          else if ((local_18 < 0) || (iVar4 = local_18, 1 < local_18)) {
                            iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                              ("Invalid hand index: %d");
                            return iVar4;
                          }
                          local_18 = iVar4;
                          local_16c = local_16c + local_128;
                          if ((local_124 != 0x0FFFFFFF) &&
                             (*(int *)(&local_124[0x1c].field_0x8 + local_18 * 0x78) < 0)) {
                            iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                              ("%s doesn't have hand %d");
                            return iVar4;
                          }
                          if ((local_170 != 0) && (-1 < local_18)) {
                            (**(code **)(*(int *)&local_124->field_0x154 + 0x128))
                                      (local_124,local_18);
                          }
                        }
                        else {
                          iVar4 = _strnicmp
                                            ((char *)param_2,"enableFieldNotesEntry",0x15);
                          if ((iVar4 == 0) &&
                             (((&DAT_006074b8)[(byte)((char)param_2[0x15] + 1)] & 0xe0) == 0)) {
                            local_16c = param_2 + 0x15;
                            while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                              local_16c = local_16c + 1;
                            }
                            local_120 = -1;
                            sscanf((char *)local_16c,"(%[^)])%n");
                            if (local_120 < 3) {
                              iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                ("Error parsing enableFieldNotesEntry command");
                              return iVar4;
                            }
                            local_16c = local_16c + local_120;
                            uVar13 = 0xffffffff;
                            pcVar6 = local_27fd + 1;
                            do {
                              if (uVar13 == 0) break;
                              uVar13 = uVar13 - 1;
                              cVar2 = *pcVar6;
                              pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                            } while (cVar2 != '\0');
                            SVar14 = ~uVar13 - 1;
                            if (0 < (int)SVar14) {
                              pcVar6 = local_27fd + ~uVar13;
                              do {
                                if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                SVar14 = SVar14 - 1;
                                pcVar6 = pcVar6 + -1;
                              } while (0 < (int)SVar14);
                            }
                            (local_27fd + 1)[SVar14] = '\0';
                            while (((&DAT_006074b8)[(byte)(local_27fd[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_27fd + 1,local_27fd + 2,SVar14);
                              SVar14 = SVar14 - 1;
                            }
                            if (_DAT_01c734ac != 0) {
                              uVar9 = core_fldnotes_cpp_FUN_004abb30(g_CFieldNotesPtr);
                              switch(uVar9) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_0048cb59_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                  ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                return iVar4;
                              default:
                                iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                  ("Field notes entry '%s' not found");
                                return iVar4;
                              }
                            }
                            core_fldnotes_cpp_FUN_004aba10(g_CFieldNotesPtr);
                          }
                          else {
                            iVar4 = _strnicmp
                                              ((char *)param_2,"enableFieldNotesAnnotation",
                                               0x1a);
                            if ((iVar4 == 0) &&
                               (((&DAT_006074b8)[(byte)((char)param_2[0x1a] + 1)] & 0xe0) == 0)) {
                              local_16c = param_2 + 0x1a;
                              while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                                local_16c = local_16c + 1;
                              }
                              local_11c = -1;
                              sscanf((char *)local_16c,"(%[^,], %[^)])%n");
                              if (local_11c < 4) {
                                iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                  ("Error parsing enableFieldNotesAnnotation command");
                                return iVar4;
                              }
                              local_16c = local_16c + local_11c;
                              uVar13 = 0xffffffff;
                              pcVar6 = local_2afd + 1;
                              do {
                                if (uVar13 == 0) break;
                                uVar13 = uVar13 - 1;
                                cVar2 = *pcVar6;
                                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar14 = ~uVar13 - 1;
                              if (0 < (int)SVar14) {
                                pcVar6 = local_2afd + ~uVar13;
                                do {
                                  if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                  SVar14 = SVar14 - 1;
                                  pcVar6 = pcVar6 + -1;
                                } while (0 < (int)SVar14);
                              }
                              (local_2afd + 1)[SVar14] = '\0';
                              while (((&DAT_006074b8)[(byte)(local_2afd[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_2afd + 1,local_2afd + 2,SVar14);
                                SVar14 = SVar14 - 1;
                              }
                              uVar13 = 0xffffffff;
                              pcVar6 = local_29fd + 1;
                              do {
                                if (uVar13 == 0) break;
                                uVar13 = uVar13 - 1;
                                cVar2 = *pcVar6;
                                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar14 = ~uVar13 - 1;
                              if (0 < (int)SVar14) {
                                pcVar6 = local_29fd + ~uVar13;
                                do {
                                  if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                  SVar14 = SVar14 - 1;
                                  pcVar6 = pcVar6 + -1;
                                } while (0 < (int)SVar14);
                              }
                              (local_29fd + 1)[SVar14] = '\0';
                              while (((&DAT_006074b8)[(byte)(local_29fd[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_29fd + 1,local_29fd + 2,SVar14);
                                SVar14 = SVar14 - 1;
                              }
                              if (_DAT_01c734ac != 0) {
                                uVar9 = core_fldnotes_cpp_FUN_004abb30(g_CFieldNotesPtr);
                                switch(uVar9) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_0048cb59_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                    ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                  return iVar4;
                                default:
                                  iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                    ("Field notes entry '%s' not found");
                                  return iVar4;
                                }
                              }
                              iVar4 = core_fldnotes_cpp_FUN_004ab8f0
                                                (g_CFieldNotesPtr,local_29fd + 1,local_2afd + 1);
                              if (iVar4 == 0) {
                                iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0(local_23fc);
                                return iVar4;
                              }
                            }
                            else {
                              iVar4 = _strnicmp
                                                ((char *)param_2,"fadeAmbientSound",0x10);
                              if ((iVar4 == 0) &&
                                 (((&DAT_006074b8)[(byte)((char)param_2[0x10] + 1)] & 0xe0) == 0)) {
                                local_16c = param_2 + 0x10;
                                while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                                  local_16c = local_16c + 1;
                                }
                                local_110 = -1;
                                sscanf((char *)local_16c,"(%f, %f )%n");
                                if (local_110 < 0) {
                                  FUN_005a28c0
                                            (&DAT_01c734b0,"Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_16c = local_16c + local_110;
                                if (local_170 != 0) {
                                  core_sound_cpp_CSound_setVolumeFade_FUN_00560d30
                                            (0x02CF5680,local_118,local_114);
                                }
                              }
                              else {
                                iVar4 = _strnicmp
                                                  ((char *)param_2,"fadeSfx",7);
                                if ((iVar4 == 0) &&
                                   (((&DAT_006074b8)[(byte)((char)param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_16c = param_2 + 7;
                                  while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
                                    local_16c = local_16c + 1;
                                  }
                                  local_104 = -1;
                                  sscanf
                                            ((char *)local_16c,"(%[^,], %f, %f )%n");
                                  if (local_104 < 0) {
                                    FUN_005a28c0
                                              (&DAT_01c734b0,"Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_16c = local_16c + local_104;
                                  uVar13 = 0xffffffff;
                                  pcVar6 = local_1a2d + 1;
                                  do {
                                    if (uVar13 == 0) break;
                                    uVar13 = uVar13 - 1;
                                    cVar2 = *pcVar6;
                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                  } while (cVar2 != '\0');
                                  SVar14 = ~uVar13 - 1;
                                  if (0 < (int)SVar14) {
                                    pcVar6 = local_1a2d + ~uVar13;
                                    do {
                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                      SVar14 = SVar14 - 1;
                                      pcVar6 = pcVar6 + -1;
                                    } while (0 < (int)SVar14);
                                  }
                                  (local_1a2d + 1)[SVar14] = '\0';
                                  while (((&DAT_006074b8)[(byte)(local_1a2d[1] + 1)] & 2) != 0) {
                                    memmove
                                              (local_1a2d + 1,local_1a2d + 2,SVar14);
                                    SVar14 = SVar14 - 1;
                                  }
                                  if (local_170 != 0) {
                                    uVar13 = core_event_cpp_CEventList_getSfxHandle_FUN_00495110
                                                       (param_1,local_1a2d + 1);
                                    if (local_108 <= 0.0) {
                                      sound_sndmain_cpp_FUN_00556ab0(uVar13);
                                    }
                                    else {
                                      sound_sndmain_cpp_FUN_00556c10(uVar13,local_10c,local_108,0);
                                    }
                                  }
                                }
                                else {
                                  iVar4 = _strnicmp
                                                    ((char *)param_2,"flagOn",6);
                                  if ((iVar4 == 0) &&
                                     (((&DAT_006074b8)[(byte)((char)param_2[6] + 1)] & 0xe0) == 0))
                                  {
                                    local_16c = param_2 + 6;
                                    while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0)
                                    {
                                      local_16c = local_16c + 1;
                                    }
                                    pcVar6 = (char *)core_event_cpp_FUN_0048bc10
                                                               (&local_16c,local_28c,0x20);
                                    if (pcVar6 != (char *)0x0) {
LAB_0048c717:
                                      pcVar20 = &DAT_01c734b0;
                                      do {
                                        cVar2 = *pcVar6;
                                        *pcVar20 = cVar2;
                                        if (cVar2 == '\0') {
                                          return 0;
                                        }
                                        cVar2 = pcVar6[1];
                                        pcVar6 = pcVar6 + 2;
                                        pcVar20[1] = cVar2;
                                        pcVar20 = pcVar20 + 2;
                                      } while (cVar2 != '\0');
                                      return 0;
                                    }
                                    if (local_170 != 0) {
                                      core_event_cpp_FUN_004946f0(param_1,local_28c);
                                    }
                                  }
                                  else {
                                    iVar4 = _strnicmp
                                                      ((char *)param_2,"flagOff",7);
                                    if ((iVar4 == 0) &&
                                       (((&DAT_006074b8)[(byte)((char)param_2[7] + 1)] & 0xe0) == 0)
                                       ) {
                                      local_16c = param_2 + 7;
                                      while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) !=
                                             0) {
                                        local_16c = local_16c + 1;
                                      }
                                      pcVar6 = (char *)core_event_cpp_FUN_0048bc10
                                                                 (&local_16c,local_26c,0x20);
                                      if (pcVar6 != (char *)0x0) goto LAB_0048c717;
                                      if (local_170 != 0) {
                                        core_event_cpp_FUN_004946f0(param_1,local_26c);
                                      }
                                    }
                                    else {
                                      iVar4 = _strnicmp
                                                        ((char *)param_2,"gameFlagOn",10);
                                      if ((iVar4 == 0) &&
                                         (((&DAT_006074b8)[(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                          0)) {
                                        local_16c = param_2 + 10;
                                        while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2)
                                               != 0) {
                                          local_16c = local_16c + 1;
                                        }
                                        pcVar6 = (char *)core_event_cpp_FUN_0048bc10
                                                                   (&local_16c,local_22c,0x20);
                                        if (pcVar6 != (char *)0x0) goto LAB_0048c717;
                                        if (local_170 != 0) {
                                          core_event_cpp_FUN_004948e0(param_1,local_22c);
                                        }
                                      }
                                      else {
                                        iVar4 = _strnicmp
                                                          ((char *)param_2,"gameFlagOff",
                                                           0xb);
                                        if ((iVar4 == 0) &&
                                           (((&DAT_006074b8)[(byte)((char)param_2[0xb] + 1)] & 0xe0)
                                            == 0)) {
                                          local_16c = param_2 + 0xb;
                                          while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2)
                                                 != 0) {
                                            local_16c = local_16c + 1;
                                          }
                                          pcVar6 = (char *)core_event_cpp_FUN_0048bc10
                                                                     (&local_16c,local_24c,0x20);
                                          if (pcVar6 != (char *)0x0) goto LAB_0048c717;
                                          if (local_170 != 0) {
                                            core_event_cpp_FUN_004948e0(param_1,local_24c);
                                          }
                                        }
                                        else {
                                          iVar4 = _strnicmp
                                                            ((char *)param_2,
                                                             "hurtCharacter",0xd);
                                          if ((iVar4 == 0) &&
                                             (((&DAT_006074b8)[(byte)((char)param_2[0xd] + 1)] &
                                              0xe0) == 0)) {
                                            local_16c = param_2 + 0xd;
                                            while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] &
                                                   2) != 0) {
                                              local_16c = local_16c + 1;
                                            }
                                            local_100 = -1;
                                            sscanf
                                                      ((char *)local_16c," ( %[^,], %[^,],%f)%n");
                                            if (local_100 < 2) {
                                              iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                                ("Syntax error in killHero() parms"
                                                                );
                                              return iVar4;
                                            }
                                            uVar13 = 0xffffffff;
                                            pcVar6 = local_dad + 1;
                                            do {
                                              if (uVar13 == 0) break;
                                              uVar13 = uVar13 - 1;
                                              cVar2 = *pcVar6;
                                              pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                            } while (cVar2 != '\0');
                                            SVar14 = ~uVar13 - 1;
                                            if (0 < (int)SVar14) {
                                              pcVar6 = local_dad + ~uVar13;
                                              do {
                                                if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) ==
                                                    0) break;
                                                SVar14 = SVar14 - 1;
                                                pcVar6 = pcVar6 + -1;
                                              } while (0 < (int)SVar14);
                                            }
                                            (local_dad + 1)[SVar14] = '\0';
                                            while (((&DAT_006074b8)[(byte)(local_dad[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_dad + 1,local_dad + 2,SVar14);
                                              SVar14 = SVar14 - 1;
                                            }
                                            uVar13 = 0xffffffff;
                                            pcVar6 = local_3e9 + 1;
                                            do {
                                              if (uVar13 == 0) break;
                                              uVar13 = uVar13 - 1;
                                              cVar2 = *pcVar6;
                                              pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                            } while (cVar2 != '\0');
                                            SVar14 = ~uVar13 - 1;
                                            if (0 < (int)SVar14) {
                                              pcVar6 = local_3e9 + ~uVar13;
                                              do {
                                                if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2) ==
                                                    0) break;
                                                SVar14 = SVar14 - 1;
                                                pcVar6 = pcVar6 + -1;
                                              } while (0 < (int)SVar14);
                                            }
                                            (local_3e9 + 1)[SVar14] = '\0';
                                            while (((&DAT_006074b8)[(byte)(local_3e9[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_3e9 + 1,local_3e9 + 2,SVar14);
                                              SVar14 = SVar14 - 1;
                                            }
                                            local_16c = local_16c + local_100;
                                            while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] &
                                                   2) != 0) {
                                              local_16c = local_16c + 1;
                                            }
                                            pCVar7 = (CDemonActor *)
                                                     core_event_cpp_resolveActorByName_FUN_0048b950
                                                               (local_dad + 1,
                                                                g_CCharacterClassInfo.name_hash);
                                            if (pCVar7 == (CDemonActor *)0x0) {
                                              return 0;
                                            }
                                            if (pCVar7 == 0x0FFFFFFF) {
                                              local_170 = 0;
                                            }
                                            iVar4 = core_event_cpp_parseDamageType_FUN_0048bec0
                                                              (local_3e9 + 1,&local_f8);
                                            if (iVar4 == 0) {
                                              iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0
                                                                ("Unknown damage type \"%s\" in hurtCharacter command."
                                                                );
                                              return iVar4;
                                            }
                                            if (local_170 != 0) {
                                              (**(code **)(*(int *)&pCVar7->field_0x154 + 0xd8))
                                                        (pCVar7,local_f8);
                                            }
                                          }
                                          else {
                                            iVar4 = _strnicmp
                                                              ((char *)param_2,"incCounter"
                                                               ,10);
                                            if ((iVar4 == 0) &&
                                               (((&DAT_006074b8)[(byte)((char)param_2[10] + 1)] &
                                                0xe0) == 0)) {
                                              local_16c = param_2 + 10;
                                              while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)]
                                                     & 2) != 0) {
                                                local_16c = local_16c + 1;
                                              }
                                              local_f4 = -1;
                                              sscanf
                                                        ((char *)local_16c,"( %[^ )] )%n");
                                              if (local_f4 < 5) {
                                                FUN_005a28c0
                                                          (&DAT_01c734b0,
                                                           "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_16c = local_16c + local_f4;
                                              uVar13 = 0xffffffff;
                                              pcVar6 = local_a8d + 1;
                                              do {
                                                if (uVar13 == 0) break;
                                                uVar13 = uVar13 - 1;
                                                cVar2 = *pcVar6;
                                                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                              } while (cVar2 != '\0');
                                              SVar14 = ~uVar13 - 1;
                                              if (0 < (int)SVar14) {
                                                pcVar6 = local_a8d + ~uVar13;
                                                do {
                                                  if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2)
                                                      == 0) break;
                                                  SVar14 = SVar14 - 1;
                                                  pcVar6 = pcVar6 + -1;
                                                } while (0 < (int)SVar14);
                                              }
                                              (local_a8d + 1)[SVar14] = '\0';
                                              while (((&DAT_006074b8)[(byte)(local_a8d[1] + 1)] & 2)
                                                     != 0) {
                                                memmove
                                                          (local_a8d + 1,local_a8d + 2,SVar14);
                                                SVar14 = SVar14 - 1;
                                              }
                                              if (local_170 != 0) {
                                                iVar4 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00494d00
                                                            (param_1,local_a8d + 1);
                                                core_event_cpp_CEventList_setCounter_FUN_00494bf0
                                                          (param_1,local_a8d + 1,iVar4 + 1);
                                              }
                                            }
                                            else {
                                              iVar4 = _strnicmp
                                                                ((char *)param_2,
                                                                 "decCounter",10);
                                              if ((iVar4 == 0) &&
                                                 (((&DAT_006074b8)[(byte)((char)param_2[10] + 1)] &
                                                  0xe0) == 0)) {
                                                local_16c = param_2 + 10;
                                                while (((&DAT_006074b8)
                                                        [(byte)((char)*local_16c + 1)] & 2) != 0) {
                                                  local_16c = local_16c + 1;
                                                }
                                                local_f0 = -1;
                                                sscanf
                                                          ((char *)local_16c,"( %[^ )] )%n");
                                                if (local_f0 < 5) {
                                                  FUN_005a28c0
                                                            (&DAT_01c734b0,
                                                             "Error parsing decCounter arguments");
                                                  return 0;
                                                }
                                                local_16c = local_16c + local_f0;
                                                uVar13 = 0xffffffff;
                                                pcVar6 = local_6a5 + 1;
                                                do {
                                                  if (uVar13 == 0) break;
                                                  uVar13 = uVar13 - 1;
                                                  cVar2 = *pcVar6;
                                                  pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                } while (cVar2 != '\0');
                                                SVar14 = ~uVar13 - 1;
                                                if (0 < (int)SVar14) {
                                                  pcVar6 = local_6a5 + ~uVar13;
                                                  do {
                                                    if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] & 2
                                                        ) == 0) break;
                                                    SVar14 = SVar14 - 1;
                                                    pcVar6 = pcVar6 + -1;
                                                  } while (0 < (int)SVar14);
                                                }
                                                (local_6a5 + 1)[SVar14] = '\0';
                                                while (((&DAT_006074b8)[(byte)(local_6a5[1] + 1)] &
                                                       2) != 0) {
                                                  memmove
                                                            (local_6a5 + 1,local_6a5 + 2,SVar14);
                                                  SVar14 = SVar14 - 1;
                                                }
                                                if (local_170 != 0) {
                                                  iVar4 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00494d00
                                                            (param_1,local_6a5 + 1);
                                                  core_event_cpp_CEventList_setCounter_FUN_00494bf0
                                                            (param_1,local_6a5 + 1,iVar4 + -1);
                                                }
                                              }
                                              else {
                                                iVar4 = _strnicmp
                                                                  ((char *)param_2,
                                                                   "killCharacter",0xd);
                                                if ((iVar4 == 0) &&
                                                   (((&DAT_006074b8)[(byte)((char)param_2[0xd] + 1)]
                                                    & 0xe0) == 0)) {
                                                  local_16c = param_2 + 0xd;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  local_e8 = local_194;
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
                                                    local_e8 = (byte *)0x0;
                                                    sscanf
                                                              ((char *)local_16c," ( %[^,], %[^)])%n");
                                                  }
                                                  if (local_ec < 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in killCharacter() parms");
                                                  return iVar4;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_189d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_189d + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_189d + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_189d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_189d + 1,local_189d + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_385 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_385 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_385 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_385[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_385 + 1,local_385 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  local_16c = local_16c + local_ec;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_189d + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  iVar4 = core_event_cpp_parseDeathType_FUN_0048bd30
                                                                    (local_385 + 1,&local_e0);
                                                  if (iVar4 == 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Unknown death type \"%s\" in killCharacter command.");
                                                  return iVar4;
                                                  }
                                                  if (local_170 != 0) {
                                                    (**(code **)(*(int *)&pCVar7->field_0x154 + 0xdc
                                                                ))(pCVar7,local_e0,local_e8);
                                                  }
                                                }
                                                else {
                                                  iVar4 = _strnicmp
                                                                    ((char *)param_2,
                                                                     "killAllEnemies",0xe);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)
                                                       [(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0
                                                     )) {
                                                    local_16c = param_2 + 0xe;
                                                    while (((&DAT_006074b8)
                                                            [(byte)((char)*local_16c + 1)] & 2) != 0
                                                          ) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_dc = -1;
                                                    sscanf
                                                              ((char *)local_16c,"( )%n");
                                                    if (local_dc < 2) {
                                                      FUN_005a28c0
                                                                (&DAT_01c734b0,
                                                                 "Error parsing lightning command")
                                                      ;
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_dc;
                                                    iVar5 = 0;
                                                    iVar4 = 0;
                                                    while (iVar5 < *(int *)&g_CDemonSetPtr->
                                                                            field_0x14d164) {
                                                      iVar16 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            (*(uint *)
                                                              (&g_CDemonSetPtr->field_0x14d168 +
                                                              iVar4));
                                                  if ((iVar16 == 0) ||
                                                     (iVar8 = (**(code **)(*(int *)(iVar16 + 0x154)
                                                                          + 0x10c))(), iVar8 != 0))
                                                  {
                                                    iVar5 = iVar5 + 1;
                                                    iVar4 = iVar4 + 4;
                                                  }
                                                  else {
                                                    (**(code **)(*(int *)(iVar16 + 0x154) + 0xdc))
                                                              (iVar16,0,0);
                                                    iVar5 = iVar5 + 1;
                                                    iVar4 = iVar4 + 4;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "restorePrye",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xb;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_d8 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"( )%n");
                                                      if (local_d8 < 2) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  iVar4 = _DAT_01d5ba14 * 4;
                                                  local_16c = local_16c + local_d8;
                                                  if (*(int *)(iVar4 + 0x1d5ba04) != 0) {
                                                    *(uint *)
                                                     (*(int *)(iVar4 + 0x1d5ba04) + 0x2538) =
                                                         0x42c80000;
                                                    *(uint *)
                                                     (*(int *)(iVar4 + 0x1d5ba04) + 0x20b80) = 100;
                                                    *(uint *)
                                                     (*(int *)(iVar4 + 0x1d5ba04) + 0x20b84) = 0x32;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "killHero",8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[8] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_16c = param_2 + 8;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      if (*(int *)g_CNetGamePtr != 0) {
                                                        iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Can't use killHero command in multi-player");
                                                  return iVar4;
                                                  }
                                                  local_d4 = -1;
                                                  sscanf
                                                            ((char *)local_16c," ( %[^)])%n");
                                                  if (local_d4 < 2) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in killHero() parms");
                                                  return iVar4;
                                                  }
                                                  local_16c = local_16c + local_d4;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  iVar4 = core_event_cpp_parseDeathType_FUN_0048bd30
                                                                    (local_44c,&local_d0);
                                                  if (iVar4 == 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Unknown death type \"%s\" in killHero command.");
                                                  return iVar4;
                                                  }
                                                  if ((local_170 != 0) &&
                                                     (iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04
                                                                      ), iVar4 != 0)) {
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xdc))
                                                              (iVar4,local_d0,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "killSfx",7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[7] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_16c = param_2 + 7;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_cc = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,)]%n");
                                                      if (local_cc < 3) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_cc;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1195 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1195 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1195 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1195[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1195 + 1,local_1195 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  local_c8 = 0.0;
                                                  pCVar18 = local_16c;
                                                  if (*local_16c == (CEventList)0x2c) {
                                                    local_cc = -1;
                                                    sscanf
                                                              ((char *)local_16c,",%f%n");
                                                    if (local_cc < 3) {
                                                      FUN_005a28c0
                                                                (&DAT_01c734b0,
                                                                 "Error parsing killSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    pCVar18 = local_16c + local_cc;
                                                  }
                                                  do {
                                                    local_16c = pCVar18;
                                                    pCVar18 = local_16c + 1;
                                                  } while (((&DAT_006074b8)
                                                            [(byte)((char)*local_16c + 1)] & 2) != 0
                                                          );
                                                  if (*local_16c != (CEventList)0x29) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Can't find matching ) in killSfx command");
                                                    return 0;
                                                  }
                                                  local_16c = pCVar18;
                                                  if (local_170 != 0) {
                                                    uVar13 = 
                                                  core_event_cpp_CEventList_getSfxHandle_FUN_00495110
                                                            (param_1,local_1195 + 1);
                                                  if (local_c8 <= 0.0) {
                                                    sound_sndmain_cpp_killSfx_FUN_00556be0(uVar13);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_00495280
                                                            (param_1);
                                                  }
                                                  else {
                                                    sound_sndmain_cpp_FUN_00556c10
                                                              (uVar13,0.0,local_c8,1);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_00495280
                                                            (param_1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "lightning",9);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[9] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_16c = param_2 + 9;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_c4 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"( )%n");
                                                      if (local_c4 < 2) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_c4;
                                                  if (local_170 != 0) {
                                                    core_weather_cpp_FUN_0057c2e0
                                                              (0x02D0C1A0,0x3dcccccd);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "playSfx",7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[7] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_16c = param_2 + 7;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_c0 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,)]%n");
                                                      if (local_c0 < 3) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_c0;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1fa5 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1fa5 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1fa5 + 1)[SVar14] = '\0';
                                                  while (pCVar18 = local_16c,
                                                        ((&DAT_006074b8)[(byte)(local_1fa5[1] + 1)]
                                                        & 2) != 0) {
                                                    memmove
                                                              (local_1fa5 + 1,local_1fa5 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  puVar19 = &DAT_005fbaf8;
                                                  puVar21 = (uint *)((int)local_ce5 + 1);
                                                  for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1)
                                                  {
                                                    *puVar21 = *puVar19;
                                                    puVar19 = puVar19 + (uint)bVar22 * -2 + 1;
                                                    puVar21 = puVar21 + (uint)bVar22 * -2 + 1;
                                                  }
                                                  pCVar17 = local_16c;
                                                  if (*pCVar18 == (CEventList)0x2c) {
                                                    local_c0 = -1;
                                                    sscanf
                                                              ((char *)local_16c,",%[^)]%n");
                                                    if (local_c0 < 3) {
                                                      FUN_005a28c0
                                                                (&DAT_01c734b0,
                                                                 "Error parsing playSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_c0;
                                                    uVar13 = 0xffffffff;
                                                    pcVar6 = (char *)((int)local_ce5 + 1);
                                                    do {
                                                      if (uVar13 == 0) break;
                                                      uVar13 = uVar13 - 1;
                                                      cVar2 = *pcVar6;
                                                      pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar14 = ~uVar13 - 1;
                                                    if (0 < (int)SVar14) {
                                                      pcVar6 = local_ce5 + ~uVar13;
                                                      do {
                                                        if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)]
                                                            & 2) == 0) break;
                                                        SVar14 = SVar14 - 1;
                                                        pcVar6 = pcVar6 + -1;
                                                      } while (0 < (int)SVar14);
                                                    }
                                                    *(byte *)((int)local_ce5 + 1U + SVar14) =
                                                         0;
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_ce5[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                ((void *)((int)local_ce5 + 1U),
                                                                 local_ce5 + 2,SVar14);
                                                      SVar14 = SVar14 - 1;
                                                    }
                                                    uVar13 = 0xffffffff;
                                                    pcVar6 = (char *)((int)local_ce5 + 1);
                                                    do {
                                                      if (uVar13 == 0) break;
                                                      uVar13 = uVar13 - 1;
                                                      cVar2 = *pcVar6;
                                                      pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    pCVar17 = local_16c;
                                                    if (0x13 < ~uVar13 - 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01c734b0,
                                                                 "handle name %s is too long, max %d chars"
                                                                 ,(int)local_ce5 + 1,0x13);
                                                      return 0;
                                                    }
                                                  }
                                                  do {
                                                    local_16c = pCVar17;
                                                    pCVar17 = local_16c + 1;
                                                  } while (((&DAT_006074b8)
                                                            [(byte)((char)*local_16c + 1)] & 2) != 0
                                                          );
                                                  if (*local_16c != (CEventList)0x29) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Can't find matching ) in playSfx command");
                                                    return 0;
                                                  }
                                                  local_16c = pCVar17;
                                                  if (local_170 != 0) {
                                                    iVar4 = _strnicmp
                                                                      (local_1fa5 + 1,&DAT_005bebca,
                                                                       2);
                                                    if (iVar4 == 0) {
                                                      iVar4 = sound_sndmain_cpp_FUN_00556e30(1);
                                                      if (iVar4 != 0) {
                                                        sound_sndmain_cpp_FUN_00555fd0();
                                                                                                                
                                                  sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90
                                                            (1);
                                                  uVar13 = 
                                                  core_sound_cpp_CSound_playSound_FUN_005609b0
                                                            (0x02CF5680,param_1,local_1fa5 + 1);
                                                  sound_sndmain_cpp_FUN_00556050();
                                                  if (local_ce5[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_00495150
                                                            (param_1,(char *)((int)local_ce5 + 1),
                                                             uVar13);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar13 = 
                                                  core_sound_cpp_CSound_playSound_FUN_005609b0
                                                            (0x02CF5680,param_1,local_1fa5 + 1);
                                                  if (local_ce5[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_00495150
                                                            (param_1,(char *)((int)local_ce5 + 1),
                                                             uVar13);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "playMusic",9);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[9] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_16c = param_2 + 9;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_bc = -1;
                                                      sscanf
                                                                ((char *)local_16c," ( %[^)])%n");
                                                      if (local_bc < 2) {
                                                        iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in playMusic() parms");
                                                  return iVar4;
                                                  }
                                                  local_16c = local_16c + local_bc;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_b55 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_b55 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_b55 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_b55[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_b55 + 1,local_b55 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  core_game_cpp_FUN_004c4a60
                                                            (g_CGamePtr,local_b55 + 1,0);
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "resetGore",9);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[9] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_16c = param_2 + 9;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_b8 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"( )%n");
                                                      if (local_b8 < 2) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_b8;
                                                  if (local_170 != 0) {
                                                    core_gore_cpp_CGore_reset_FUN_004ce560
                                                              (g_CGorePtr);
                                                    core_fire_cpp_FUN_004a1480();
                                                    local_b4 = *(uint *)0x01D81080;
                                                    for (iVar4 = 0; this_ptr = 0x01D81080,
                                                        iVar4 < *(int *)(0x01D81080 + 4);
                                                        iVar4 = iVar4 + 1) {
                                                      *(int *)0x01D81080 = iVar4;
                                                                                                            
                                                  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0
                                                            (this_ptr);
                                                  iVar5 = 0;
                                                  for (iVar16 = 0;
                                                      iVar16 < *(int *)&g_CDemonSetPtr->
                                                                        field_0x14d164;
                                                      iVar16 = iVar16 + 1) {
                                                    iVar8 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            (*(uint *)
                                                              (&g_CDemonSetPtr->field_0x14d168 +
                                                              iVar5));
                                                  if ((iVar8 != 0) && (*(int *)(iVar8 + 0x70) == 1))
                                                  {
                                                    *(uint *)(iVar8 + 0x70) = 2;
                                                  }
                                                  iVar5 = iVar5 + 4;
                                                  }
                                                  }
                                                  *(uint *)0x01D81080 = local_b4;
                                                  core_mission_cpp_FUN_004f6f80();
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setActorBool",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xc;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_b0 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %[^,], %[^)])%n");
                                                      if (local_b0 < 3) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setActorBool parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_b0;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_9c5 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_9c5 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_9c5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_9c5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_9c5 + 1,local_9c5 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_2135 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_2135 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_2135 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_2135[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_2135 + 1,local_2135 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_835 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_835 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_835 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_835[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_835 + 1,local_835 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  iVar5 = 0;
                                                  local_ac = 0;
                                                  iVar4 = local_ac;
                                                  if (0 < 0x00000002) {
                                                    iVar16 = 0;
                                                    do {
                                                      if (*(int *)((int)&DAT_005fba64 + iVar16) == 0
                                                         ) {
                                                        iVar8 = _stricmp
                                                                          ("spectralFlag" +
                                                                           iVar16,local_2135 + 1);
                                                        iVar4 = (int)&DAT_005fba64 + iVar16;
                                                        if (iVar8 == 0) break;
                                                      }
                                                      iVar5 = iVar5 + 1;
                                                      iVar16 = iVar16 + 0x48;
                                                      iVar4 = local_ac;
                                                    } while (iVar5 < 0x00000002);
                                                  }
                                                  local_ac = iVar4;
                                                  if (local_ac == 0) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "%s is not a valid boolean actor variable name",
                                                               local_2135 + 1);
                                                    return 0;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_9c5 + 1,
                                                             *(uint *)(local_ac + 0x44));
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == 0x0FFFFFFF) || (local_170 == 0))
                                                  {
                                                    pcVar6 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (param_1,local_835 + 1);
                                                  if (pcVar6 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_835 + 1);
                                                  *(int *)(&pCVar7->field_0x0 +
                                                          *(int *)(local_ac + 0x40)) = iVar4;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setCameraAmbient",
                                                                       0x10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0x10] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_16c = param_2 + 0x10;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_a4 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %f)%n");
                                                      if (local_a4 < 3) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setCameraAmbient parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_a4;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1af5 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1af5 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1af5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1af5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1af5 + 1,local_1af5 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  iVar4 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_00535360
                                                            (g_CDemonSetPtr,local_1af5 + 1);
                                                  if (iVar4 < 0) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Camera \"%s\" does not exist.",
                                                               local_1af5 + 1);
                                                    return 0;
                                                  }
                                                  if ((local_a8 < 0.0) ||
                                                     (0x42c80000 < (int)local_a8)) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Ambient value %g is out of range (1..100)",
                                                               (double)local_a8);
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                    core_set_cpp_FUN_0053b280
                                                              (g_CDemonSetPtr,iVar4,
                                                               local_a8 * (float)_DAT_005bf4b8);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setCounter",10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 10;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_a0 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"( %[^,)]%n");
                                                      if (local_a0 < 5) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_a0;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_e75 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_e75 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_e75 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_e75[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_e75 + 1,local_e75 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  local_9c = 0;
                                                  if (*local_16c == (CEventList)0x2c) {
                                                    local_a0 = -1;
                                                    sscanf
                                                              ((char *)local_16c,",%d%n");
                                                    if (local_a0 < 1) {
                                                      FUN_005a28c0
                                                                (&DAT_01c734b0,
                                                                 "Error parsing setCounter value argument"
                                                                );
                                                      return 0;
                                                    }
                                                    local_16c = local_16c + local_a0;
                                                    while (((&DAT_006074b8)
                                                            [(byte)((char)*local_16c + 1)] & 2) != 0
                                                          ) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                  }
                                                  if (*local_16c != (CEventList)0x29) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
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
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setDoorState",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xc;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_98 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %[^)])%n");
                                                      if (local_98 < 5) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setDoorState command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_98;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_10cd + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_10cd + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_10cd + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_10cd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_10cd + 1,local_10cd + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1edd + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1edd + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1edd + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1edd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1edd + 1,local_1edd + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_10cd + 1,
                                                             g_CDoorClassInfo.name_hash);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  iVar4 = _stricmp
                                                                    (local_1edd + 1,&DAT_005bee04);
                                                  if ((((iVar4 != 0) &&
                                                       (iVar4 = _stricmp
                                                                          (local_1edd + 1,
                                                                           "closed"),
                                                       iVar4 != 0)) &&
                                                      (iVar4 = _stricmp
                                                                         (local_1edd + 1,
                                                                          "opening"),
                                                      iVar4 != 0)) &&
                                                     (iVar4 = _stricmp
                                                                        (local_1edd + 1,
                                                                         "closing"),
                                                     iVar4 != 0)) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Invalid door state '%s'",
                                                               local_1edd + 1);
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                    core_door_cpp_FUN_00463d30(pCVar7);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setGroupAmbient",
                                                                       0xf);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xf] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xf;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_8c = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%d, %f)%n")
                                                      ;
                                                      if (local_8c < 3) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setGroupAmbient parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_8c;
                                                  if ((local_90 < 0.0) ||
                                                     (0x42c80000 < (int)local_90)) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Ambient value %g is out of range (1..100)",
                                                               (double)local_90);
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0053b300
                                                            (g_CDemonSetPtr,local_94,
                                                             local_90 * (float)_DAT_005bf4b8);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                                                                                              
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)
                                                       [(byte)((char)param_2[0x13] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_16c = param_2 + 0x13;
                                                    while (((&DAT_006074b8)
                                                            [(byte)((char)*local_16c + 1)] & 2) != 0
                                                          ) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_88 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"( %[^ ,] , %d )%n");
                                                    if (local_88 < 0) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing setLightFilterFrame parms");
                                                  return iVar4;
                                                  }
                                                  local_16c = local_16c + local_88;
                                                  core_set_cpp_CDemonSet_addLightFilter_FUN_0053b3b0
                                                            (g_CDemonSetPtr,local_514,&local_80,
                                                             &local_7c);
                                                  if (local_80 == (C3DSLight *)0x0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("SpotLight %s doesn't exist.");
                                                  return iVar4;
                                                  }
                                                  if ((local_84 < 0) ||
                                                     (*(int *)&local_80->field_0x11ec <= local_84))
                                                  {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Invalid filter frame, %s has %d filters");
                                                  return iVar4;
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
                                                            (local_80,local_84);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setLeverState",0xd)
                                                    ;
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xd] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xd;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_78 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %[^)])%n");
                                                      if (local_78 < 5) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setLeverState command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_78;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_170d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_170d + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_170d + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_170d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_170d + 1,local_170d + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1e15 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1e15 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1e15 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1e15[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1e15 + 1,local_1e15 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_170d + 1,
                                                             g_CLeverClassInfo.name_hash);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == 0x0FFFFFFF) || (local_170 == 0))
                                                  {
                                                    pcVar6 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_00491b00
                                                            (param_1,local_1e15 + 1);
                                                  if (pcVar6 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                                            (0x01C6E360,local_1e15 + 1);
                                                  if (iVar4 == 0) {
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
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setModelState",0xd)
                                                    ;
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xd] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xd;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_74 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %[^)])%n");
                                                      if (local_74 < 5) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setModelState command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_74;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1325 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1325 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1325 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1325[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1325 + 1,local_1325 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_c1d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_c1d + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_c1d + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_c1d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_c1d + 1,local_c1d + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_1325 + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar6 = local_c1d + 1;
                                                    iVar4 = 0;
                                                    pCVar11 = core_motion_cpp_FUN_004fc310
                                                                        ((CMotionController *)
                                                                         (pCVar7 + 1));
                                                    iVar4 = core_motion_cpp_FUN_004fba50
                                                                      (pCVar11,pcVar6,iVar4);
                                                    if (iVar4 < 0) {
                                                      FUN_005a28c0
                                                                (&DAT_01c734b0,
                                                                 "Model %s does not have state %s"
                                                                 ,&pCVar7[0x1b].field_0x60,
                                                                 local_c1d + 1);
                                                      return 0;
                                                    }
                                                    if (local_170 != 0) {
                                                                                                            
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                                            ((CMotionController *)(pCVar7 + 1),iVar4
                                                             ,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setSunlight",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xb;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_6c = -1;
                                                      sscanf
                                                                ((char *)local_16c,
                                                                 "(%f , %f , %f , %f )%n");
                                                      if (local_6c < 5) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setSunlight command parms");
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
                                                    fVar3 = 1.0 / local_68;
                                                    local_188 = local_188 * fVar3;
                                                    local_184 = local_184 * fVar3;
                                                    local_180 = local_180 * fVar3;
                                                  }
                                                  if (local_170 != 0) {
                                                    core_set_cpp_FUN_0053b2c0
                                                              (g_CDemonSetPtr,local_188,local_184,
                                                               local_180);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setTimer",8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[8] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_16c = param_2 + 8;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_58 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %f)%n");
                                                      if (local_58 < 3) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_58;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_76d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_76d + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_76d + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_76d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_76d + 1,local_76d + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_76d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  if (0x1f < ~uVar13 - 1) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Timer name \"%s\" is too long, (max %d chars)",
                                                               local_76d + 1,0x1f);
                                                    return 0;
                                                  }
                                                  if (local_5c < 0.0) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_00494a70
                                                            (param_1,local_76d + 1,local_5c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setEndTimer",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xb;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_50 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%f)%n");
                                                      if (local_50 < 2) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setEndTimer command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_50;
                                                  *(uint *)&g_CGamePtr->field_0x294 = local_54
                                                  ;
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setWeather",10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 10;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_4c = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^)])%n");
                                                      if (local_4c < 3) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_4c;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1bbd + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1bbd + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1bbd + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1bbd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1bbd + 1,local_1bbd + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  iVar4 = _stricmp
                                                                    (local_1bbd + 1,&DAT_005bf180);
                                                  if (((iVar4 != 0) &&
                                                      (iVar4 = _stricmp
                                                                         (local_1bbd + 1,
                                                                          &DAT_005bf185), iVar4 != 0
                                                      )) && (iVar4 = 
                                                  _stricmp
                                                            (local_1bbd + 1,&DAT_005bf18a),
                                                  iVar4 != 0)) {
                                                    FUN_005a28c0
                                                              (&DAT_01c734b0,
                                                               "Invalid weather type: %s",
                                                               local_1bbd + 1);
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                    core_weather_cpp_FUN_0057d050(0x02D0C1A0);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xb;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_38 = -1;
                                                      sscanf
                                                                ((char *)local_16c,
                                                                 "( %f, %f, %f, %f )%n");
                                                      if (local_38 < 5) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
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
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0x11] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_16c = param_2 + 0x11;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_34 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %[^)])%n");
                                                      if (local_34 < 5) {
                                                        FUN_005a28c0
                                                                  (&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_34;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1d4d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1d4d + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1d4d + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1d4d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1d4d + 1,local_1d4d + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_206d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_206d + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_206d + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_206d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_206d + 1,local_206d + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_1d4d + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar6 = local_206d + 1;
                                                    iVar4 = 0;
                                                    pCVar10 = pCVar7 + 1;
                                                    pCVar11 = core_motion_cpp_FUN_004fc310
                                                                        ((CMotionController *)
                                                                         pCVar10);
                                                    iVar4 = core_motion_cpp_FUN_004fb9c0
                                                                      (pCVar11,pcVar6,iVar4);
                                                    if (iVar4 < 0) {
                                                      FUN_005a28c0
                                                                (&DAT_01c734b0,
                                                                 "Model %s does not have motion %s"
                                                                 ,&pCVar7[0x1b].field_0x60,
                                                                 local_206d + 1);
                                                      return 0;
                                                    }
                                                    if (local_170 != 0) {
                                                                                                            
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                                                            ((CMotionController *)pCVar10,iVar4,0.0)
                                                  ;
                                                  iVar4 = 1;
                                                  pSVar12 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                                            ((CMotionController *)pCVar10);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                                            ((CMotionController *)pCVar10,
                                                             *(int *)(pSVar12 + 0x24),iVar4);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "switchCamera",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      param_2 = param_2 + 0xc;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*param_2 + 1)] & 2) != 0
                                                            ) {
                                                        param_2 = param_2 + 1;
                                                      }
                                                      puVar19 = &DAT_005fbbc0;
                                                      pcVar6 = local_320;
                                                      for (iVar4 = 0x19; iVar4 != 0;
                                                          iVar4 = iVar4 + -1) {
                                                        *(uint *)pcVar6 = *puVar19;
                                                        puVar19 = puVar19 + (uint)bVar22 * -2 + 1;
                                                        pcVar6 = pcVar6 + ((uint)bVar22 * -2 + 1) *
                                                                          4;
                                                      }
                                                      local_30 = -1;
                                                      local_16c = param_2;
                                                      sscanf
                                                                ((char *)param_2," ( %[^ ,)]%n");
                                                      if (local_30 < 2) {
                                                        iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar4;
                                                  }
                                                  local_16c = local_16c + local_30;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  iVar4 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_00535360
                                                            (g_CDemonSetPtr,local_320);
                                                  if (iVar4 < 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Camera \"%s\" doesn't exist");
                                                  return iVar4;
                                                  }
                                                  local_2c = 3.0;
                                                  if (*local_16c == (CEventList)0x2c) {
                                                    local_30 = -1;
                                                    sscanf
                                                              ((char *)local_16c,",%f%n");
                                                    if (local_30 < 2) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar4;
                                                  }
                                                  local_16c = local_16c + local_30;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  }
                                                  if (*local_16c != (CEventList)0x29) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Missing ')' in switchCamera() statement");
                                                  return iVar4;
                                                  }
                                                  local_16c = local_16c + 1;
                                                  if (local_170 != 0) {
                                                    core_setdir_cpp_FUN_00540ba0
                                                              (g_CDemonSetPtr,iVar4,local_2c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                                                                                              
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)
                                                       [(byte)((char)param_2[0x15] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_16c = param_2 + 0x15;
                                                    while (((&DAT_006074b8)
                                                            [(byte)((char)*local_16c + 1)] & 2) != 0
                                                          ) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_28 = -1;
                                                    sscanf
                                                              ((char *)local_16c,"(%[^)])%n");
                                                    if (local_28 < 3) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing turnToFieldNotesEntry command");
                                                  return iVar4;
                                                  }
                                                  local_16c = local_16c + local_28;
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_2dfc;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_2dfc + (~uVar13 - 1);
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  local_2dfc[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_2dfc[0] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_2dfc,local_2dfc + 1,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  if (_DAT_01c734ac != 0) {
                                                    uVar9 = core_fldnotes_cpp_FUN_004abb30
                                                                      (g_CFieldNotesPtr);
                                                    switch(uVar9) {
                                                    case 0:
                                                    case 1:
                                                    case 2:
                                                    case 3:
                                                    case 4:
                                                    case 5:
                                                    case 6:
                                                      goto switchD_0048cb59_caseD_2;
                                                    default:
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Field notes entry '%s' not found");
                                                  return iVar4;
                                                  }
                                                  }
                                                  core_fldnotes_cpp_FUN_004abb90(g_CFieldNotesPtr);
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "warpToMulti",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_16c = param_2 + 0xb;
                                                      while (((&DAT_006074b8)
                                                              [(byte)((char)*local_16c + 1)] & 2) !=
                                                             0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_20 = -1;
                                                      sscanf
                                                                ((char *)local_16c,"(%[^,], %[^,], %[^)])%n");
                                                      if (local_20 < 5) {
                                                        iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing warpToMulti command parms");
                                                  return iVar4;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_1645 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1645 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1645 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1645[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1645 + 1,local_1645 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_157d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_157d + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_157d + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_157d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_157d + 1,local_157d + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_8fd + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_8fd + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_8fd + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_8fd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_8fd + 1,local_8fd + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  local_16c = local_16c + local_20;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_1645 + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  local_1c = (CDemonActor *)
                                                                                                                          
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_8fd + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (local_1c == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (local_1c == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  else if (local_170 != 0) {
                                                    local_200 = *(int *)&pCVar7->field_0x2c;
                                                  }
                                                  local_20 = 0xffffffff;
                                                  pCVar10 = (CDemonActor *)
                                                                                                                        
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_157d + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (pCVar10 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar10 == 0x0FFFFFFF) {
                                                    local_170 = (uint)pCVar10 ^ (uint)0x0FFFFFFF;
                                                  }
                                                  else {
                                                    local_20c = *(uint *)&pCVar10->field_0x20;
                                                    local_208 = *(uint *)&pCVar10->field_0x24;
                                                    local_204 = *(uint *)&pCVar10->field_0x28;
                                                    local_200 = *(int *)&pCVar10->field_0x2c;
                                                    if (&local_1dc !=
                                                        (uint *)&pCVar10->field_0x30) {
                                                      local_1dc = *(uint *)
                                                                   &pCVar10->field_0x30;
                                                      local_1d8 = *(uint *)
                                                                   &pCVar10->field_0x34;
                                                      local_1d4 = *(uint *)
                                                                   &pCVar10->field_0x38;
                                                    }
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_157d + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  local_20 = ~uVar13 - 1;
                                                  if ((local_20 < 0) ||
                                                     (local_157d[~uVar13] != '\0')) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar4;
                                                  }
                                                  if (local_170 != 0) {
                                                    if (local_200 != *(int *)&pCVar7->field_0x2c) {
                                                      (*(code *)**(uint **)
                                                                  &pCVar7->field_0x154)();
                                                    }
                                                    iVar4 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            (pCVar7);
                                                  if (iVar4 != 0) {
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xf0))();
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xf8))();
                                                  }
                                                  iVar4 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            (local_1c);
                                                  if (iVar4 != 0) {
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xf0))();
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xf8))();
                                                  }
                                                  local_1fc = *(uint *)&pCVar7->field_0x20;
                                                  local_1f8 = *(uint *)&pCVar7->field_0x24;
                                                  local_1f4 = *(uint *)&pCVar7->field_0x28;
                                                  local_1f0 = *(uint *)&pCVar7->field_0x2c;
                                                  if (&local_1a0 !=
                                                      (uint *)&pCVar7->field_0x30) {
                                                    local_1a0 = *(uint *)&pCVar7->field_0x30;
                                                    local_19c = *(uint *)&pCVar7->field_0x34;
                                                    local_198 = *(uint *)&pCVar7->field_0x38;
                                                  }
                                                  *(uint *)&local_1c->field_0x2c =
                                                       *(uint *)&pCVar7->field_0x2c;
                                                  (**(code **)(*(int *)&local_1c->field_0x154 + 0x68
                                                              ))(local_1c,&local_1fc);
                                                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
                                                            (local_1c);
                                                  *(int *)&pCVar7->field_0x2c = local_200;
                                                  (**(code **)(*(int *)&pCVar7->field_0x154 + 0x68))
                                                            (pCVar7,&local_20c);
                                                  if (pCVar7 == *(CDemonActor **)
                                                                 &g_CScriptPtr->field_0xc) {
                                                    *(uint *)&g_CScriptPtr->field_0x10 = 1;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "warpTo",6);
                                                    if ((iVar4 != 0) ||
                                                       (((&DAT_006074b8)
                                                         [(byte)((char)param_2[6] + 1)] & 0xe0) != 0
                                                       )) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Unknown meta-function starting at %s");
                                                  return iVar4;
                                                  }
                                                  local_16c = param_2 + 6;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  local_14 = -1;
                                                  sscanf
                                                            ((char *)local_16c,"(%[^,], %[^)])%n");
                                                  if (local_14 < 5) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar4;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_21fd + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_21fd + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_21fd + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_21fd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_21fd + 1,local_21fd + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_17d5 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar13 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_17d5 + ~uVar13;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_17d5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_17d5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_17d5 + 1,local_17d5 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  local_16c = local_16c + local_14;
                                                  while (((&DAT_006074b8)
                                                          [(byte)((char)*local_16c + 1)] & 2) != 0)
                                                  {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  pCVar7 = (CDemonActor *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_21fd + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (pCVar7 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_170 = (uint)pCVar7 ^ (uint)0x0FFFFFFF;
                                                  }
                                                  else if (local_170 != 0) {
                                                    local_1e0 = *(int *)&pCVar7->field_0x2c;
                                                  }
                                                  local_14 = -1;
                                                  sscanf
                                                            (local_17d5 + 1,"%f,%f,%f,%f,%f,%f%n"
                                                            );
                                                  if (local_14 < 0) {
                                                    if ((local_170 != 0) &&
                                                       (&local_1c4 !=
                                                        (uint *)&pCVar7->field_0x30)) {
                                                      local_1c4 = *(uint *)&pCVar7->field_0x30
                                                      ;
                                                      local_1c0 = *(uint *)&pCVar7->field_0x34
                                                      ;
                                                      local_1bc = *(uint *)&pCVar7->field_0x38
                                                      ;
                                                    }
                                                    sscanf
                                                              (local_17d5 + 1,"%f,%f,%f,%f%n");
                                                  }
                                                  if (local_14 < 0) {
                                                    if ((local_170 != 0) &&
                                                       (&local_1c4 !=
                                                        (uint *)&pCVar7->field_0x30)) {
                                                      local_1c4 = *(uint *)&pCVar7->field_0x30
                                                      ;
                                                      local_1c0 = *(uint *)&pCVar7->field_0x34
                                                      ;
                                                      local_1bc = *(uint *)&pCVar7->field_0x38
                                                      ;
                                                    }
                                                    sscanf
                                                              (local_17d5 + 1,"%f,%f,%f%n");
                                                  }
                                                  if (local_14 < 0) {
                                                    pCVar10 = (CDemonActor *)
                                                                                                                            
                                                  core_event_cpp_resolveActorByName_FUN_0048b950
                                                            (local_17d5 + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (pCVar10 == (CDemonActor *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar10 == 0x0FFFFFFF) {
                                                    local_170 = (uint)pCVar10 ^ (uint)0x0FFFFFFF;
                                                  }
                                                  else {
                                                    local_1ec = *(uint *)&pCVar10->field_0x20;
                                                    local_1e8 = *(uint *)&pCVar10->field_0x24;
                                                    local_1e4 = *(uint *)&pCVar10->field_0x28;
                                                    local_1e0 = *(int *)&pCVar10->field_0x2c;
                                                    if (&local_1c4 !=
                                                        (uint *)&pCVar10->field_0x30) {
                                                      local_1c4 = *(uint *)
                                                                   &pCVar10->field_0x30;
                                                      local_1c0 = *(uint *)
                                                                   &pCVar10->field_0x34;
                                                      local_1bc = *(uint *)
                                                                   &pCVar10->field_0x38;
                                                    }
                                                  }
                                                  uVar13 = 0xffffffff;
                                                  pcVar6 = local_17d5 + 1;
                                                  do {
                                                    if (uVar13 == 0) break;
                                                    uVar13 = uVar13 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  local_14 = ~uVar13 - 1;
                                                  }
                                                  if ((local_14 < 0) ||
                                                     (local_17d5[local_14 + 1] != '\0')) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_0048b7f0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar4;
                                                  }
                                                  if (local_170 != 0) {
                                                    if (local_1e0 != *(int *)&pCVar7->field_0x2c) {
                                                      (*(code *)**(uint **)
                                                                  &pCVar7->field_0x154)();
                                                    }
                                                    iVar4 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c840
                                                            (pCVar7);
                                                  if (iVar4 != 0) {
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xf0))();
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xf8))();
                                                  }
                                                  *(int *)&pCVar7->field_0x2c = local_1e0;
                                                  (**(code **)(*(int *)&pCVar7->field_0x154 + 0x68))
                                                            (pCVar7,&local_1ec);
                                                  if (pCVar7 == *(CDemonActor **)
                                                                 (_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
                                                                                                        
                                                  core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0
                                                            (0x01D81080,(CLocation *)&local_1ec);
                                                  }
                                                  if (pCVar7 == *(CDemonActor **)
                                                                 &g_CScriptPtr->field_0xc) {
                                                    *(uint *)&g_CScriptPtr->field_0x10 = 1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
    while (((&DAT_006074b8)[(byte)((char)*local_16c + 1)] & 2) != 0) {
      local_16c = local_16c + 1;
    }
    if (*local_16c != (CEventList)0x0) {
      iVar4 = core_event_cpp_formatEventError_FUN_0048b7f0("Extra characters found");
      return iVar4;
    }
  }
  return 1;
}
