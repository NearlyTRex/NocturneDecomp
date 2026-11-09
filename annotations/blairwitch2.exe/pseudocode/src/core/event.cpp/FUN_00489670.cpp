// Name: core_event.cpp_FUN_00489670
// Address: 00489670
// Address Range: [[00489670, 0048e2a8]]
// Convention: unknown
// Signature: int core_event_cpp_FUN_00489670(CEventList *param_1,CEventList *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_event_cpp_FUN_00489670(CEventList *param_1,CEventList *param_2)

{
  byte *this_ptr;
  CEventList CVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  CLever *pCVar7;
  int iVar8;
  uint uVar9;
  CLever *pCVar10;
  CMotionList *pCVar11;
  EWeatherType type;
  uint uVar12;
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
  char local_29b4 [255];
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
  byte local_12c4 [199];
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
  byte local_25c [48];
  char local_22c [32];
  char local_20c [32];
  char local_1ec [32];
  char local_1cc [32];
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  CVector3f local_19c;
  byte local_190 [12];
  byte local_184 [12];
  float local_178;
  float local_174;
  float local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_154;
  uint uStack_150;
  CEventList *local_14c;
  uint local_148;
  CEventList *local_144;
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
  uint local_110;
  int local_10c;
  int local_108;
  CLever *local_104;
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
  int local_d4;
  int local_d0;
  int local_cc;
  byte *local_c8;
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
  
  bVar22 = 0;
  DAT_01c3dd10 = 0;
  if (((param_2 != (CEventList *)0x0) && (*param_2 != (CEventList)0x0)) &&
     (iVar4 = _stricmp((char *)param_2,&DAT_005d2ff9), iVar4 != 0)) {
    if (*param_2 == (CEventList)0x2e) {
      param_2 = param_2 + 1;
    }
    local_148 = (uint)(_DAT_01c3dd0c == 0);
    local_144 = (CEventList *)&DAT_005d2ffe;
    pCVar18 = param_2;
    do {
      pCVar17 = pCVar18;
      if (*pCVar18 == (CEventList)0x28) goto LAB_004896f7;
      if (*pCVar18 == (CEventList)0x0) break;
      pCVar17 = pCVar18 + 1;
      if (*pCVar17 == (CEventList)0x28) goto LAB_004896f7;
      pCVar18 = pCVar18 + 2;
    } while (*pCVar17 != (CEventList)0x0);
    pCVar17 = (CEventList *)0x0;
LAB_004896f7:
    if (pCVar17 == (CEventList *)0x0) {
      iVar4 = 0;
      if (0 < *(int *)param_1) {
        pCVar18 = param_1 + 4;
        do {
          iVar5 = _stricmp((char *)pCVar18,(char *)param_2);
          if (iVar5 == 0) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          pCVar18 = pCVar18 + 0x20;
        } while (iVar4 < *(int *)param_1);
      }
      uVar12 = 0xffffffff;
      pCVar18 = param_2;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        CVar1 = *pCVar18;
        pCVar18 = pCVar18 + (uint)bVar22 * -2 + 1;
      } while (CVar1 != (CEventList)0x0);
      if (0x1f < ~uVar12 - 1) {
        iVar4 = core_event_cpp_formatEventError_FUN_00488ba0("Event name %s is too long");
        return iVar4;
      }
      if (99 < *(int *)param_1) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0x26b;
        core_main_c_FUN_004e4500();
      }
      pCVar17 = param_1 + *(int *)param_1 * 0x20 + 4;
      local_14 = 0;
      pCVar18 = pCVar17;
      do {
        CVar1 = *param_2;
        *pCVar18 = CVar1;
        local_14c = pCVar17;
        if (CVar1 == (CEventList)0x0) break;
        CVar1 = param_2[1];
        param_2 = param_2 + 2;
        pCVar18[1] = CVar1;
        pCVar18 = pCVar18 + 2;
      } while (CVar1 != (CEventList)0x0);
      do {
        uVar12 = local_14;
        uVar13 = 0xffffffff;
        pCVar18 = local_14c;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          CVar1 = *pCVar18;
          pCVar18 = pCVar18 + (uint)bVar22 * -2 + 1;
        } while (CVar1 != (CEventList)0x0);
        if (~uVar13 - 1 <= local_14) {
          if (local_148 == 0) {
            return 1;
          }
          *(int *)param_1 = *(int *)param_1 + 1;
          return 1;
        }
        iVar4 = toupper((uint)(byte)*pCVar17);
        *pCVar17 = SUB41(iVar4,0);
        iVar4 = core_event_cpp_isValidIdentifierChar_FUN_00491c70((uint)(byte)*pCVar17);
        if (iVar4 == 0) {
          iVar4 = core_event_cpp_formatEventError_FUN_00488ba0("Event name %s is not valid");
          return iVar4;
        }
        local_14 = uVar12 + 1;
        pCVar17 = pCVar17 + 1;
      } while( true );
    }
    iVar4 = _strnicmp((char *)param_2,"activateGadget",0xe);
    if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
      local_144 = param_2 + 0xe;
      while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
        local_144 = local_144 + 1;
      }
      local_140 = -1;
      sscanf((char *)local_144,"(%[^,], %[^,], %n");
      if (local_140 < 3) {
        iVar4 = core_event_cpp_formatEventError_FUN_00488ba0("Error parsing activateGadget command");
        return iVar4;
      }
      local_144 = local_144 + local_140;
      uVar12 = 0xffffffff;
      pcVar6 = local_21b5 + 1;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
      } while (cVar2 != '\0');
      SVar14 = ~uVar12 - 1;
      if (0 < (int)SVar14) {
        pcVar6 = local_21b5 + ~uVar12;
        do {
          if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar14 = SVar14 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar14);
      }
      (local_21b5 + 1)[SVar14] = '\0';
      while (((&DAT_0061ed94)[(byte)(local_21b5[1] + 1)] & 2) != 0) {
        memmove(local_21b5 + 1,local_21b5 + 2,SVar14);
        SVar14 = SVar14 - 1;
      }
      uVar12 = 0xffffffff;
      pcVar6 = local_25b5 + 1;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
      } while (cVar2 != '\0');
      SVar14 = ~uVar12 - 1;
      if (0 < (int)SVar14) {
        pcVar6 = local_25b5 + ~uVar12;
        do {
          if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar14 = SVar14 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar14);
      }
      (local_25b5 + 1)[SVar14] = '\0';
      while (((&DAT_0061ed94)[(byte)(local_25b5[1] + 1)] & 2) != 0) {
        memmove(local_25b5 + 1,local_25b5 + 2,SVar14);
        SVar14 = SVar14 - 1;
      }
      pcVar6 = (char *)core_event_cpp_FUN_00488fc0(&local_144,local_20b5 + 1,0x100);
      if (pcVar6 != (char *)0x0) goto LAB_00489a3d;
      uVar12 = 0xffffffff;
      pcVar6 = local_20b5 + 1;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
      } while (cVar2 != '\0');
      SVar14 = ~uVar12 - 1;
      if (0 < (int)SVar14) {
        pcVar6 = local_20b5 + ~uVar12;
        do {
          if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar14 = SVar14 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar14);
      }
      (local_20b5 + 1)[SVar14] = '\0';
      while (((&DAT_0061ed94)[(byte)(local_20b5[1] + 1)] & 2) != 0) {
        memmove(local_20b5 + 1,local_20b5 + 2,SVar14);
        SVar14 = SVar14 - 1;
      }
      pCVar7 = (CLever *)
               core_event_cpp_resolveActorByName_FUN_00488d00
                         (local_21b5 + 1,g_CHeroClassInfo.name_hash);
      if (pCVar7 == (CLever *)0x0) {
        return 0;
      }
      if (pCVar7 == 0x0FFFFFFF) {
        local_148 = 0;
      }
      piVar15 = (int *)0x0;
      iVar4 = _stricmp(local_25b5 + 1,"compass");
      if (iVar4 == 0) {
        piVar15 = (int *)&pCVar7[0x3d].field_0x3d4;
      }
      iVar4 = _stricmp(local_25b5 + 1,&DAT_005d30a4);
      if (iVar4 == 0) {
        piVar15 = (int *)&pCVar7[0x3d].field_0x3d8;
      }
      if (piVar15 == (int *)0x0) {
        iVar4 = core_event_cpp_formatEventError_FUN_00488ba0("Invalid gadget type: %s");
        return iVar4;
      }
      if (_DAT_01c3dd0c == 0) {
        if (local_148 != 0) {
          iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(param_1,local_20b5 + 1);
          *piVar15 = iVar4;
        }
      }
      else {
        pcVar6 = core_event_cpp_CEventList_validateCondition_FUN_0048e3a0(param_1,local_20b5 + 1);
        if (pcVar6 != (char *)0x0) {
          return 0;
        }
      }
    }
    else {
      iVar4 = _strnicmp((char *)param_2,"activatePuzzle",0xe);
      if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
        local_144 = param_2 + 0xe;
        while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
          local_144 = local_144 + 1;
        }
        local_13c = -1;
        sscanf((char *)local_144,"(%[^)])%n");
        if (local_13c < 3) {
          iVar4 = core_event_cpp_formatEventError_FUN_00488ba0("Error parsing activatePuzzle command");
          return iVar4;
        }
        local_144 = local_144 + local_13c;
        uVar12 = 0xffffffff;
        pcVar6 = local_26b5 + 1;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
        } while (cVar2 != '\0');
        SVar14 = ~uVar12 - 1;
        if (0 < (int)SVar14) {
          pcVar6 = local_26b5 + ~uVar12;
          do {
            if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
            SVar14 = SVar14 - 1;
            pcVar6 = pcVar6 + -1;
          } while (0 < (int)SVar14);
        }
        (local_26b5 + 1)[SVar14] = '\0';
        while (((&DAT_0061ed94)[(byte)(local_26b5[1] + 1)] & 2) != 0) {
          memmove(local_26b5 + 1,local_26b5 + 2,SVar14);
          SVar14 = SVar14 - 1;
        }
        iVar5 = 0;
        iVar4 = 0;
        if (0 < _DAT_026677b4) {
          iVar16 = 0;
          do {
            pcVar6 = (char *)(**(code **)(**(int **)(iVar16 + 0x26677b8) + 4))();
            iVar8 = _stricmp(local_26b5 + 1,pcVar6);
            if (iVar8 == 0) {
              iVar4 = *(int *)(iVar16 + 0x26677b8);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar16 = iVar16 + 4;
          } while (iVar5 < _DAT_026677b4);
        }
        if (iVar4 == 0) {
          iVar4 = core_event_cpp_formatEventError_FUN_00488ba0("No such puzzle '%s'");
          return iVar4;
        }
        if (local_148 != 0) {
          if (_DAT_026677e0 != 0) {
            unkaddr_0059aa80_cpp_FUN_0059ab70(_DAT_026677e0);
          }
          unkaddr_0059aa80_cpp_FUN_0059ab70(iVar4);
        }
      }
      else {
        iVar4 = _strnicmp
                          ((char *)param_2,"addFieldNotesTask",0x11);
        if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)((char)param_2[0x11] + 1)] & 0xe0) == 0)) {
          local_144 = param_2 + 0x11;
          while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
            local_144 = local_144 + 1;
          }
          local_138 = -1;
          sscanf((char *)local_144,"(%[^)])%n");
          if (local_138 < 3) {
            iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                              ("Error parsing addFieldNotesTask command");
            return iVar4;
          }
          local_144 = local_144 + local_138;
          uVar12 = 0xffffffff;
          pcVar6 = local_23b5 + 1;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
          } while (cVar2 != '\0');
          SVar14 = ~uVar12 - 1;
          if (0 < (int)SVar14) {
            pcVar6 = local_23b5 + ~uVar12;
            do {
              if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
              SVar14 = SVar14 - 1;
              pcVar6 = pcVar6 + -1;
            } while (0 < (int)SVar14);
          }
          (local_23b5 + 1)[SVar14] = '\0';
          while (((&DAT_0061ed94)[(byte)(local_23b5[1] + 1)] & 2) != 0) {
            memmove(local_23b5 + 1,local_23b5 + 2,SVar14);
            SVar14 = SVar14 - 1;
          }
          if (_DAT_01c3dd0c != 0) {
            uVar9 = core_fldnotes_cpp_FUN_004a5430(g_CFieldNotesPtr);
            switch(uVar9) {
            default:
              iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                ("Field notes entry '%s' is not a task");
              return iVar4;
            case 2:
            case 3:
            case 4:
              goto switchD_00489e7e_caseD_2;
            case 0xffffffff:
              iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                ("Field notes entry '%s' not found");
              return iVar4;
            }
          }
          core_fldnotes_cpp_FUN_004a5310(g_CFieldNotesPtr);
        }
        else {
          iVar4 = _strnicmp
                            ((char *)param_2,"advanceLightFilter",0x12);
          if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)((char)param_2[0x12] + 1)] & 0xe0) == 0)) {
            local_144 = param_2 + 0x12;
            while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
              local_144 = local_144 + 1;
            }
            pcVar6 = (char *)core_event_cpp_FUN_00488fc0(&local_144,local_d4c,200);
            if (pcVar6 != (char *)0x0) goto LAB_00489a3d;
            core_set_cpp_CDemonSet_addLightFilter_FUN_00534770
                      (g_CDemonSetPtr,local_d4c,&local_5c,&local_134);
            if (local_5c == (C3DSLight *)0x0) {
              iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                ("SpotLight %s doesn't exist.");
              return iVar4;
            }
            if (local_148 != 0) {
              if (local_134 == (CDemonLight *)0x0) {
                _DAT_01d046a0 = "..\\core\\event.cpp";
                _DAT_01d046a4 = 0x31c;
                core_main_c_FUN_004e4500("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
              }
              core_setutil_cpp_C3DSLight_advanceFilter_FUN_0053ba90(local_5c);
            }
          }
          else {
            iVar4 = _strnicmp
                              ((char *)param_2,"beginCarryItem",0xe);
            if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
              local_144 = param_2 + 0xe;
              while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                local_144 = local_144 + 1;
              }
              local_12c = -1;
              sscanf((char *)local_144,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n");
              if (local_12c < 0) {
                iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                  ("Error parsing beginCarryItem() parms");
                return iVar4;
              }
              local_144 = local_144 + local_12c;
              uVar12 = 0xffffffff;
              pcVar6 = local_c85 + 1;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
              } while (cVar2 != '\0');
              SVar14 = ~uVar12 - 1;
              if (0 < (int)SVar14) {
                pcVar6 = local_c85 + ~uVar12;
                do {
                  if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                  SVar14 = SVar14 - 1;
                  pcVar6 = pcVar6 + -1;
                } while (0 < (int)SVar14);
              }
              (local_c85 + 1)[SVar14] = '\0';
              while (((&DAT_0061ed94)[(byte)(local_c85[1] + 1)] & 2) != 0) {
                memmove(local_c85 + 1,local_c85 + 2,SVar14);
                SVar14 = SVar14 - 1;
              }
              uVar12 = 0xffffffff;
              pcVar6 = local_106d + 1;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
              } while (cVar2 != '\0');
              SVar14 = ~uVar12 - 1;
              if (0 < (int)SVar14) {
                pcVar6 = local_106d + ~uVar12;
                do {
                  if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                  SVar14 = SVar14 - 1;
                  pcVar6 = pcVar6 + -1;
                } while (0 < (int)SVar14);
              }
              (local_106d + 1)[SVar14] = '\0';
              while (((&DAT_0061ed94)[(byte)(local_106d[1] + 1)] & 2) != 0) {
                memmove(local_106d + 1,local_106d + 2,SVar14);
                SVar14 = SVar14 - 1;
              }
              if ((local_130 < 0) || (1 < local_130)) {
                iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                  ("Invalid hand index: %d");
                return iVar4;
              }
              pCVar7 = (CLever *)
                       core_event_cpp_resolveActorByName_FUN_00488d00
                                 (local_106d + 1,g_CCharacterClassInfo.name_hash);
              if (pCVar7 == (CLever *)0x0) {
                return 0;
              }
              if (pCVar7 == 0x0FFFFFFF) {
                local_148 = 0;
              }
              else if (*(int *)(&pCVar7[4].field_0x58 + local_130 * 0x78) < 0) {
                iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                  ("%s doesn't have hand %d");
                return iVar4;
              }
              pCVar10 = (CLever *)
                        core_event_cpp_resolveActorByName_FUN_00488d00
                                  (local_c85 + 1,g_CDemonActorClassInfo.name_hash);
              if (pCVar10 == (CLever *)0x0) {
                return 0;
              }
              if ((pCVar10 != 0x0FFFFFFF) && (local_148 != 0)) {
                core_xform_cpp_FUN_00591c10(local_25c,local_190);
                core_charactr_cpp_FUN_00428b10(pCVar7,local_130,pCVar10,0);
              }
            }
            else {
              iVar4 = _strnicmp
                                ((char *)param_2,"completeFieldNotesTask",0x16);
              if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)((char)param_2[0x16] + 1)] & 0xe0) == 0))
              {
                local_144 = param_2 + 0x16;
                while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                  local_144 = local_144 + 1;
                }
                local_128 = -1;
                sscanf((char *)local_144,"(%[^)])%n");
                if (local_128 < 3) {
                  iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                    ("Error parsing completeFieldNotesTask command");
                  return iVar4;
                }
                local_144 = local_144 + local_128;
                uVar12 = 0xffffffff;
                pcVar6 = local_22b5 + 1;
                do {
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  cVar2 = *pcVar6;
                  pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                } while (cVar2 != '\0');
                SVar14 = ~uVar12 - 1;
                if (0 < (int)SVar14) {
                  pcVar6 = local_22b5 + ~uVar12;
                  do {
                    if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                    SVar14 = SVar14 - 1;
                    pcVar6 = pcVar6 + -1;
                  } while (0 < (int)SVar14);
                }
                (local_22b5 + 1)[SVar14] = '\0';
                while (((&DAT_0061ed94)[(byte)(local_22b5[1] + 1)] & 2) != 0) {
                  memmove(local_22b5 + 1,local_22b5 + 2,SVar14);
                  SVar14 = SVar14 - 1;
                }
                if (_DAT_01c3dd0c != 0) {
                  uVar9 = core_fldnotes_cpp_FUN_004a5430(g_CFieldNotesPtr);
                  switch(uVar9) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Field notes entry '%s' is not a task");
                    return iVar4;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_00489e7e_caseD_2;
                  default:
                    iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Field notes entry '%s' not found");
                    return iVar4;
                  }
                }
                core_fldnotes_cpp_FUN_004a55b0(g_CFieldNotesPtr);
              }
              else {
                iVar4 = _strnicmp
                                  ((char *)param_2,"createExplosion",0xf);
                if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)((char)param_2[0xf] + 1)] & 0xe0) == 0))
                {
                  local_144 = param_2 + 0xf;
                  while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                    local_144 = local_144 + 1;
                  }
                  local_124 = -1;
                  sscanf((char *)local_144,"( %f , %n");
                  if (local_124 < 0) {
                    iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Error parsing createExplosion() parms");
                    return iVar4;
                  }
                  local_144 = local_144 + local_124;
                  local_124 = -1;
                  sscanf((char *)local_144,"%f , %f , %f %n");
                  if ((local_124 < 0) &&
                     (sscanf((char *)local_144," %[^,)] %n"),
                     -1 < local_124)) {
                    uVar12 = 0xffffffff;
                    pcVar6 = local_4b5 + 1;
                    do {
                      if (uVar12 == 0) break;
                      uVar12 = uVar12 - 1;
                      cVar2 = *pcVar6;
                      pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                    } while (cVar2 != '\0');
                    SVar14 = ~uVar12 - 1;
                    if (0 < (int)SVar14) {
                      pcVar6 = local_4b5 + ~uVar12;
                      do {
                        if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                        SVar14 = SVar14 - 1;
                        pcVar6 = pcVar6 + -1;
                      } while (0 < (int)SVar14);
                    }
                    (local_4b5 + 1)[SVar14] = '\0';
                    while (((&DAT_0061ed94)[(byte)(local_4b5[1] + 1)] & 2) != 0) {
                      memmove(local_4b5 + 1,local_4b5 + 2,SVar14);
                      SVar14 = SVar14 - 1;
                    }
                    pCVar7 = (CLever *)
                             core_event_cpp_resolveActorByName_FUN_00488d00
                                       (local_4b5 + 1,g_CDemonActorClassInfo.name_hash);
                    if (pCVar7 == (CLever *)0x0) {
                      return 0;
                    }
                    if (pCVar7 == 0x0FFFFFFF) {
                      local_148 = 0;
                    }
                    else if (&local_19c != (CVector3f *)&pCVar7->field_0x20) {
                      local_19c._0_4_ = *(uint *)&pCVar7->field_0x20;
                      local_19c._4_4_ = *(uint *)&pCVar7->field_0x24;
                      local_19c._8_4_ = *(uint *)&pCVar7->field_0x28;
                    }
                  }
                  if (local_124 < 0) {
                    iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Error parsing createExplosion() parms");
                    return iVar4;
                  }
                  local_144 = local_144 + local_124;
                  while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                    local_144 = local_144 + 1;
                  }
                  local_120 = 4.0;
                  if (*local_144 == (CEventList)0x2c) {
                    local_124 = -1;
                    sscanf((char *)local_144,", %f %n");
                    if (local_124 < 0) {
                      iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                        ("Error parsing createExplosion() parms");
                      return iVar4;
                    }
                    local_144 = local_144 + local_124;
                    while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                      local_144 = local_144 + 1;
                    }
                  }
                  if (*local_144 != (CEventList)0x29) {
                    iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                      ("Error parsing createExplosion() parms, expected matching ')'");
                    return iVar4;
                  }
                  local_144 = local_144 + 1;
                  if (local_148 != 0) {
                    core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360
                              (0x01C3DEB4,&local_19c,local_40,1500.0,local_120);
                  }
                }
                else {
                  iVar4 = _strnicmp
                                    ((char *)param_2,"deleteActor",0xb);
                  if ((iVar4 == 0) &&
                     (((&DAT_0061ed94)[(byte)((char)param_2[0xb] + 1)] & 0xe0) == 0)) {
                    local_144 = param_2 + 0xb;
                    while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                      local_144 = local_144 + 1;
                    }
                    pcVar6 = (char *)core_event_cpp_FUN_00488fc0(&local_144,local_12c4,200);
                    if (pcVar6 != (char *)0x0) goto LAB_00489a3d;
                    pCVar7 = (CLever *)
                             core_event_cpp_resolveActorByName_FUN_00488d00
                                       (local_12c4,g_CDemonActorClassInfo.name_hash);
                    if (pCVar7 == (CLever *)0x0) {
                      if (_DAT_01c3dd0c != 0) {
                        return 0;
                      }
                      local_148 = 0;
                    }
                    if ((pCVar7 != 0x0FFFFFFF) && (local_148 != 0)) {
                      *(uint *)&pCVar7->field_0x70 = 2;
                      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar7);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x430) = 0;
                        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(iVar4 + 0x458));
                      }
                      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar7);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x310) = 0;
                        *(byte *)(iVar4 + 0x378) = 0;
                        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(iVar4 + 0x3dc));
                      }
                    }
                  }
                  else {
                    iVar4 = _strnicmp
                                      ((char *)param_2,"displayBitmap",0xd);
                    if ((iVar4 == 0) &&
                       (((&DAT_0061ed94)[(byte)((char)param_2[0xd] + 1)] & 0xe0) == 0)) {
                      local_144 = param_2 + 0xd;
                      while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                        local_144 = local_144 + 1;
                      }
                      local_114 = -1;
                      sscanf((char *)local_144,"( %[^ ,] , %d , %d%n");
                      if (local_114 < 0) {
                        iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                          ("Error parsing displayBitmap() parms");
                        return iVar4;
                      }
                      local_144 = local_144 + local_114;
                      while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                        local_144 = local_144 + 1;
                      }
                      local_110 = 0;
                      pCVar18 = local_144;
                      if (*local_144 == (CEventList)0x2c) {
                        local_114 = -1;
                        sscanf((char *)local_144,", %f %n");
                        if (local_114 < 1) {
                          FUN_005b7790
                                    (&DAT_01c3dd10,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pCVar18 = local_144 + local_114;
                        while (((&DAT_0061ed94)[(byte)((char)*pCVar18 + 1)] & 2) != 0) {
                          pCVar18 = pCVar18 + 1;
                        }
                      }
                      do {
                        local_144 = pCVar18;
                        pCVar18 = local_144 + 1;
                      } while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0);
                      if (*local_144 != (CEventList)0x29) {
                        FUN_005b7790
                                  (&DAT_01c3dd10,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_144 = local_144 + 1;
                      iVar4 = engine_dosio_cpp_getFileSize_FUN_00460aa0(&DAT_005d34ef,local_1fb4);
                      if (iVar4 < 0) {
                        iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                          ("Bitmap doesn't exist");
                        return iVar4;
                      }
                      if (iVar4 != local_11c * local_118) {
                        iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                          ("Bitmap file size does not match specified dimensions");
                        return iVar4;
                      }
                      if (local_148 != 0) {
                        core_game_cpp_FUN_004bcb50(g_CGamePtr,local_1fb4,local_11c,local_118);
                      }
                    }
                    else {
                      iVar4 = _strnicmp
                                        ((char *)param_2,"displayFieldNotes",0x11);
                      if ((iVar4 == 0) &&
                         (((&DAT_0061ed94)[(byte)((char)param_2[0x11] + 1)] & 0xe0) == 0)) {
                        local_144 = param_2 + 0x11;
                        while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                          local_144 = local_144 + 1;
                        }
                        local_10c = -1;
                        sscanf((char *)local_144,"(%[^)])%n");
                        if (local_10c < 5) {
                          FUN_005b7790
                                    (&DAT_01c3dd10,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_144 = local_144 + local_10c;
                        uVar12 = 0xffffffff;
                        pcVar6 = local_1b5d + 1;
                        do {
                          if (uVar12 == 0) break;
                          uVar12 = uVar12 - 1;
                          cVar2 = *pcVar6;
                          pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                        } while (cVar2 != '\0');
                        SVar14 = ~uVar12 - 1;
                        if (0 < (int)SVar14) {
                          pcVar6 = local_1b5d + ~uVar12;
                          do {
                            if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                            SVar14 = SVar14 - 1;
                            pcVar6 = pcVar6 + -1;
                          } while (0 < (int)SVar14);
                        }
                        (local_1b5d + 1)[SVar14] = '\0';
                        while (((&DAT_0061ed94)[(byte)(local_1b5d[1] + 1)] & 2) != 0) {
                          memmove(local_1b5d + 1,local_1b5d + 2,SVar14);
                          SVar14 = SVar14 - 1;
                        }
                        if (local_148 == 0) {
                          pcVar6 = core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                             (param_1,local_1b5d + 1);
                          if (pcVar6 != (char *)0x0) {
                            return 0;
                          }
                        }
                        else {
                          iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                            (0x01C38BC0,local_1b5d + 1);
                          *(int *)&g_CFieldNotesPtr->field_0x40 = iVar4;
                        }
                      }
                      else {
                        iVar4 = _strnicmp
                                          ((char *)param_2,"dropItem",8);
                        if ((iVar4 == 0) &&
                           (((&DAT_0061ed94)[(byte)((char)param_2[8] + 1)] & 0xe0) == 0)) {
                          local_144 = param_2 + 8;
                          while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                            local_144 = local_144 + 1;
                          }
                          local_108 = -1;
                          sscanf((char *)local_144,"( %[^,],%n");
                          if (local_108 < 0) {
                            iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                              ("Error parsing dropItem() parms");
                            return iVar4;
                          }
                          local_144 = local_144 + local_108;
                          uVar12 = 0xffffffff;
                          pcVar6 = local_11fd + 1;
                          do {
                            if (uVar12 == 0) break;
                            uVar12 = uVar12 - 1;
                            cVar2 = *pcVar6;
                            pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                          } while (cVar2 != '\0');
                          SVar14 = ~uVar12 - 1;
                          if (0 < (int)SVar14) {
                            pcVar6 = local_11fd + ~uVar12;
                            do {
                              if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                              SVar14 = SVar14 - 1;
                              pcVar6 = pcVar6 + -1;
                            } while (0 < (int)SVar14);
                          }
                          (local_11fd + 1)[SVar14] = '\0';
                          while (((&DAT_0061ed94)[(byte)(local_11fd[1] + 1)] & 2) != 0) {
                            memmove(local_11fd + 1,local_11fd + 2,SVar14);
                            SVar14 = SVar14 - 1;
                          }
                          local_104 = (CLever *)
                                      core_event_cpp_resolveActorByName_FUN_00488d00
                                                (local_11fd + 1,g_CCharacterClassInfo.name_hash);
                          if (local_104 == (CLever *)0x0) {
                            return 0;
                          }
                          if (local_104 == 0x0FFFFFFF) {
                            local_148 = 0;
                          }
                          local_108 = -1;
                          local_100 = -1;
                          sscanf((char *)local_144,"%d )%n");
                          if (local_108 < 1) {
                            sscanf((char *)local_144,"%[^)])%n");
                            if (local_108 < 0) {
                              iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                ("Error parsing dropItem() parms");
                              return iVar4;
                            }
                            uVar12 = 0xffffffff;
                            pcVar6 = local_645 + 1;
                            do {
                              if (uVar12 == 0) break;
                              uVar12 = uVar12 - 1;
                              cVar2 = *pcVar6;
                              pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                            } while (cVar2 != '\0');
                            SVar14 = ~uVar12 - 1;
                            if (0 < (int)SVar14) {
                              pcVar6 = local_645 + ~uVar12;
                              do {
                                if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                SVar14 = SVar14 - 1;
                                pcVar6 = pcVar6 + -1;
                              } while (0 < (int)SVar14);
                            }
                            (local_645 + 1)[SVar14] = '\0';
                            while (((&DAT_0061ed94)[(byte)(local_645[1] + 1)] & 2) != 0) {
                              memmove(local_645 + 1,local_645 + 2,SVar14);
                              SVar14 = SVar14 - 1;
                            }
                            local_100 = -1;
                            iVar4 = local_100;
                            if (local_104 != 0x0FFFFFFF) {
                              iVar5 = 0;
                              pCVar7 = local_104;
                              do {
                                if ((*(char **)&pCVar7[4].field_0x60 != (char *)0x0) &&
                                   (iVar16 = _stricmp
                                                       (*(char **)&pCVar7[4].field_0x60,
                                                        local_645 + 1), iVar4 = iVar5, iVar16 == 0))
                                break;
                                iVar5 = iVar5 + 1;
                                pCVar7 = (CLever *)&pCVar7->field_0x78;
                                iVar4 = local_100;
                              } while (iVar5 < 2);
                            }
                          }
                          else if ((local_100 < 0) || (iVar4 = local_100, 1 < local_100)) {
                            iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                              ("Invalid hand index: %d");
                            return iVar4;
                          }
                          local_100 = iVar4;
                          local_144 = local_144 + local_108;
                          if ((local_104 != 0x0FFFFFFF) &&
                             (*(int *)(&local_104[4].field_0x58 + local_100 * 0x78) < 0)) {
                            iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                              ("%s doesn't have hand %d");
                            return iVar4;
                          }
                          if ((local_148 != 0) && (-1 < local_100)) {
                            (**(code **)(*(int *)&local_104->field_0x2b0 + 0x130))
                                      (local_104,local_100);
                          }
                        }
                        else {
                          iVar4 = _strnicmp
                                            ((char *)param_2,"enableFieldNotesEntry",0x15);
                          if ((iVar4 == 0) &&
                             (((&DAT_0061ed94)[(byte)((char)param_2[0x15] + 1)] & 0xe0) == 0)) {
                            local_144 = param_2 + 0x15;
                            while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                              local_144 = local_144 + 1;
                            }
                            local_fc = -1;
                            sscanf((char *)local_144,"(%[^)])%n");
                            if (local_fc < 3) {
                              iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                ("Error parsing enableFieldNotesEntry command");
                              return iVar4;
                            }
                            local_144 = local_144 + local_fc;
                            uVar12 = 0xffffffff;
                            pcVar6 = local_1eb5 + 1;
                            do {
                              if (uVar12 == 0) break;
                              uVar12 = uVar12 - 1;
                              cVar2 = *pcVar6;
                              pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                            } while (cVar2 != '\0');
                            SVar14 = ~uVar12 - 1;
                            if (0 < (int)SVar14) {
                              pcVar6 = local_1eb5 + ~uVar12;
                              do {
                                if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                SVar14 = SVar14 - 1;
                                pcVar6 = pcVar6 + -1;
                              } while (0 < (int)SVar14);
                            }
                            (local_1eb5 + 1)[SVar14] = '\0';
                            while (((&DAT_0061ed94)[(byte)(local_1eb5[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_1eb5 + 1,local_1eb5 + 2,SVar14);
                              SVar14 = SVar14 - 1;
                            }
                            if (_DAT_01c3dd0c != 0) {
                              uVar9 = core_fldnotes_cpp_FUN_004a5430(g_CFieldNotesPtr);
                              switch(uVar9) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_00489e7e_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                  ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                return iVar4;
                              default:
                                iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                  ("Field notes entry '%s' not found");
                                return iVar4;
                              }
                            }
                            core_fldnotes_cpp_FUN_004a5310(g_CFieldNotesPtr);
                          }
                          else {
                            iVar4 = _strnicmp
                                              ((char *)param_2,"enableFieldNotesAnnotation",
                                               0x1a);
                            if ((iVar4 == 0) &&
                               (((&DAT_0061ed94)[(byte)((char)param_2[0x1a] + 1)] & 0xe0) == 0)) {
                              local_144 = param_2 + 0x1a;
                              while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                                local_144 = local_144 + 1;
                              }
                              local_f8 = -1;
                              sscanf((char *)local_144,"(%[^,], %[^)])%n");
                              if (local_f8 < 4) {
                                iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                  ("Error parsing enableFieldNotesAnnotation command");
                                return iVar4;
                              }
                              local_144 = local_144 + local_f8;
                              uVar12 = 0xffffffff;
                              pcVar6 = local_29b4;
                              do {
                                if (uVar12 == 0) break;
                                uVar12 = uVar12 - 1;
                                cVar2 = *pcVar6;
                                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar14 = ~uVar12 - 1;
                              if (0 < (int)SVar14) {
                                pcVar6 = local_29b4 + (~uVar12 - 1);
                                do {
                                  if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                  SVar14 = SVar14 - 1;
                                  pcVar6 = pcVar6 + -1;
                                } while (0 < (int)SVar14);
                              }
                              local_29b4[SVar14] = '\0';
                              while (((&DAT_0061ed94)[(byte)(local_29b4[0] + 1)] & 2) != 0) {
                                memmove(local_29b4,local_29b4 + 1,SVar14);
                                SVar14 = SVar14 - 1;
                              }
                              uVar12 = 0xffffffff;
                              pcVar6 = local_28b5 + 1;
                              do {
                                if (uVar12 == 0) break;
                                uVar12 = uVar12 - 1;
                                cVar2 = *pcVar6;
                                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar14 = ~uVar12 - 1;
                              if (0 < (int)SVar14) {
                                pcVar6 = local_28b5 + ~uVar12;
                                do {
                                  if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                  SVar14 = SVar14 - 1;
                                  pcVar6 = pcVar6 + -1;
                                } while (0 < (int)SVar14);
                              }
                              (local_28b5 + 1)[SVar14] = '\0';
                              while (((&DAT_0061ed94)[(byte)(local_28b5[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_28b5 + 1,local_28b5 + 2,SVar14);
                                SVar14 = SVar14 - 1;
                              }
                              if (_DAT_01c3dd0c != 0) {
                                uVar9 = core_fldnotes_cpp_FUN_004a5430(g_CFieldNotesPtr);
                                switch(uVar9) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_00489e7e_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                    ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                  return iVar4;
                                default:
                                  iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                    ("Field notes entry '%s' not found");
                                  return iVar4;
                                }
                              }
                              iVar4 = core_fldnotes_cpp_FUN_004a5200
                                                (g_CFieldNotesPtr,local_28b5 + 1,local_29b4);
                              if (iVar4 == 0) {
                                iVar4 = core_event_cpp_formatEventError_FUN_00488ba0(local_27b4);
                                return iVar4;
                              }
                            }
                            else {
                              iVar4 = _strnicmp
                                                ((char *)param_2,"fadeAmbientSound",0x10);
                              if ((iVar4 == 0) &&
                                 (((&DAT_0061ed94)[(byte)((char)param_2[0x10] + 1)] & 0xe0) == 0)) {
                                local_144 = param_2 + 0x10;
                                while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                                  local_144 = local_144 + 1;
                                }
                                local_ec = -1;
                                sscanf((char *)local_144,"(%f, %f )%n");
                                if (local_ec < 0) {
                                  FUN_005b7790
                                            (&DAT_01c3dd10,"Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_144 = local_144 + local_ec;
                                if (local_148 != 0) {
                                  core_sound_cpp_CSound_setVolumeFade_FUN_0055b1b0
                                            (0x0264B290,local_f4,local_f0);
                                }
                              }
                              else {
                                iVar4 = _strnicmp
                                                  ((char *)param_2,"fadeSfx",7);
                                if ((iVar4 == 0) &&
                                   (((&DAT_0061ed94)[(byte)((char)param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_144 = param_2 + 7;
                                  while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
                                    local_144 = local_144 + 1;
                                  }
                                  local_e0 = -1;
                                  sscanf
                                            ((char *)local_144,"(%[^,], %f, %f )%n");
                                  if (local_e0 < 0) {
                                    FUN_005b7790
                                              (&DAT_01c3dd10,"Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_144 = local_144 + local_e0;
                                  uVar12 = 0xffffffff;
                                  pcVar6 = local_138d + 1;
                                  do {
                                    if (uVar12 == 0) break;
                                    uVar12 = uVar12 - 1;
                                    cVar2 = *pcVar6;
                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                  } while (cVar2 != '\0');
                                  SVar14 = ~uVar12 - 1;
                                  if (0 < (int)SVar14) {
                                    pcVar6 = local_138d + ~uVar12;
                                    do {
                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                      SVar14 = SVar14 - 1;
                                      pcVar6 = pcVar6 + -1;
                                    } while (0 < (int)SVar14);
                                  }
                                  (local_138d + 1)[SVar14] = '\0';
                                  while (((&DAT_0061ed94)[(byte)(local_138d[1] + 1)] & 2) != 0) {
                                    memmove
                                              (local_138d + 1,local_138d + 2,SVar14);
                                    SVar14 = SVar14 - 1;
                                  }
                                  if (local_148 != 0) {
                                    uVar12 = core_event_cpp_CEventList_getSfxHandle_FUN_00491920
                                                       (param_1,local_138d + 1);
                                    if (local_e4 <= 0.0) {
                                      sound_sndmain_cpp_FUN_00550f20(uVar12);
                                    }
                                    else {
                                      sound_sndmain_cpp_FUN_00551080(uVar12,local_e8,local_e4,0);
                                    }
                                  }
                                }
                                else {
                                  iVar4 = _strnicmp
                                                    ((char *)param_2,"flagOn",6);
                                  if ((iVar4 == 0) &&
                                     (((&DAT_0061ed94)[(byte)((char)param_2[6] + 1)] & 0xe0) == 0))
                                  {
                                    local_144 = param_2 + 6;
                                    while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0)
                                    {
                                      local_144 = local_144 + 1;
                                    }
                                    pcVar6 = (char *)core_event_cpp_FUN_00488fc0
                                                               (&local_144,local_1cc,0x20);
                                    if (pcVar6 != (char *)0x0) {
LAB_00489a3d:
                                      pcVar20 = &DAT_01c3dd10;
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
                                    if (local_148 != 0) {
                                      core_event_cpp_FUN_00490f80(param_1,local_1cc,1);
                                    }
                                  }
                                  else {
                                    iVar4 = _strnicmp
                                                      ((char *)param_2,"flagOff",7);
                                    if ((iVar4 == 0) &&
                                       (((&DAT_0061ed94)[(byte)((char)param_2[7] + 1)] & 0xe0) == 0)
                                       ) {
                                      local_144 = param_2 + 7;
                                      while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) !=
                                             0) {
                                        local_144 = local_144 + 1;
                                      }
                                      pcVar6 = (char *)core_event_cpp_FUN_00488fc0
                                                                 (&local_144,local_22c,0x20);
                                      if (pcVar6 != (char *)0x0) goto LAB_00489a3d;
                                      if (local_148 != 0) {
                                        core_event_cpp_FUN_00490f80(param_1,local_22c,0);
                                      }
                                    }
                                    else {
                                      iVar4 = _strnicmp
                                                        ((char *)param_2,"gameFlagOn",10);
                                      if ((iVar4 == 0) &&
                                         (((&DAT_0061ed94)[(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                          0)) {
                                        local_144 = param_2 + 10;
                                        while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2)
                                               != 0) {
                                          local_144 = local_144 + 1;
                                        }
                                        pcVar6 = (char *)core_event_cpp_FUN_00488fc0
                                                                   (&local_144,local_20c,0x20);
                                        if (pcVar6 != (char *)0x0) goto LAB_00489a3d;
                                        if (local_148 != 0) {
                                          core_event_cpp_FUN_00491110(param_1,local_20c,1);
                                        }
                                      }
                                      else {
                                        iVar4 = _strnicmp
                                                          ((char *)param_2,"gameFlagOff",
                                                           0xb);
                                        if ((iVar4 == 0) &&
                                           (((&DAT_0061ed94)[(byte)((char)param_2[0xb] + 1)] & 0xe0)
                                            == 0)) {
                                          local_144 = param_2 + 0xb;
                                          while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2)
                                                 != 0) {
                                            local_144 = local_144 + 1;
                                          }
                                          pcVar6 = (char *)core_event_cpp_FUN_00488fc0
                                                                     (&local_144,local_1ec,0x20);
                                          if (pcVar6 != (char *)0x0) goto LAB_00489a3d;
                                          if (local_148 != 0) {
                                            core_event_cpp_FUN_00491110(param_1,local_1ec,0);
                                          }
                                        }
                                        else {
                                          iVar4 = _strnicmp
                                                            ((char *)param_2,
                                                             "hurtCharacter",0xd);
                                          if ((iVar4 == 0) &&
                                             (((&DAT_0061ed94)[(byte)((char)param_2[0xd] + 1)] &
                                              0xe0) == 0)) {
                                            local_144 = param_2 + 0xd;
                                            while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] &
                                                   2) != 0) {
                                              local_144 = local_144 + 1;
                                            }
                                            local_dc = -1;
                                            sscanf
                                                      ((char *)local_144," ( %[^,], %[^,],%f)%n");
                                            if (local_dc < 2) {
                                              iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                                ("Syntax error in killHero() parms"
                                                                );
                                              return iVar4;
                                            }
                                            uVar12 = 0xffffffff;
                                            pcVar6 = local_1135 + 1;
                                            do {
                                              if (uVar12 == 0) break;
                                              uVar12 = uVar12 - 1;
                                              cVar2 = *pcVar6;
                                              pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                            } while (cVar2 != '\0');
                                            SVar14 = ~uVar12 - 1;
                                            if (0 < (int)SVar14) {
                                              pcVar6 = local_1135 + ~uVar12;
                                              do {
                                                if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) ==
                                                    0) break;
                                                SVar14 = SVar14 - 1;
                                                pcVar6 = pcVar6 + -1;
                                              } while (0 < (int)SVar14);
                                            }
                                            (local_1135 + 1)[SVar14] = '\0';
                                            while (((&DAT_0061ed94)[(byte)(local_1135[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_1135 + 1,local_1135 + 2,SVar14);
                                              SVar14 = SVar14 - 1;
                                            }
                                            uVar12 = 0xffffffff;
                                            pcVar6 = local_389 + 1;
                                            do {
                                              if (uVar12 == 0) break;
                                              uVar12 = uVar12 - 1;
                                              cVar2 = *pcVar6;
                                              pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                            } while (cVar2 != '\0');
                                            SVar14 = ~uVar12 - 1;
                                            if (0 < (int)SVar14) {
                                              pcVar6 = local_389 + ~uVar12;
                                              do {
                                                if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2) ==
                                                    0) break;
                                                SVar14 = SVar14 - 1;
                                                pcVar6 = pcVar6 + -1;
                                              } while (0 < (int)SVar14);
                                            }
                                            (local_389 + 1)[SVar14] = '\0';
                                            while (((&DAT_0061ed94)[(byte)(local_389[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_389 + 1,local_389 + 2,SVar14);
                                              SVar14 = SVar14 - 1;
                                            }
                                            local_144 = local_144 + local_dc;
                                            while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] &
                                                   2) != 0) {
                                              local_144 = local_144 + 1;
                                            }
                                            pCVar7 = (CLever *)
                                                     core_event_cpp_resolveActorByName_FUN_00488d00
                                                               (local_1135 + 1,
                                                                g_CCharacterClassInfo.name_hash);
                                            if (pCVar7 == (CLever *)0x0) {
                                              return 0;
                                            }
                                            if (pCVar7 == 0x0FFFFFFF) {
                                              local_148 = 0;
                                            }
                                            iVar4 = core_event_cpp_parseDamageType_FUN_00489270
                                                              (local_389 + 1,&local_d4);
                                            if (iVar4 == 0) {
                                              iVar4 = core_event_cpp_formatEventError_FUN_00488ba0
                                                                ("Unknown damage type \"%s\" in hurtCharacter command."
                                                                );
                                              return iVar4;
                                            }
                                            if (local_148 != 0) {
                                              (**(code **)(*(int *)&pCVar7->field_0x2b0 + 0xe0))
                                                        (pCVar7,local_d4);
                                            }
                                          }
                                          else {
                                            iVar4 = _strnicmp
                                                              ((char *)param_2,"incCounter"
                                                               ,10);
                                            if ((iVar4 == 0) &&
                                               (((&DAT_0061ed94)[(byte)((char)param_2[10] + 1)] &
                                                0xe0) == 0)) {
                                              local_144 = param_2 + 10;
                                              while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)]
                                                     & 2) != 0) {
                                                local_144 = local_144 + 1;
                                              }
                                              local_d0 = -1;
                                              sscanf
                                                        ((char *)local_144,"( %[^ )] )%n");
                                              if (local_d0 < 5) {
                                                FUN_005b7790
                                                          (&DAT_01c3dd10,
                                                           "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_144 = local_144 + local_d0;
                                              uVar12 = 0xffffffff;
                                              pcVar6 = local_965 + 1;
                                              do {
                                                if (uVar12 == 0) break;
                                                uVar12 = uVar12 - 1;
                                                cVar2 = *pcVar6;
                                                pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                              } while (cVar2 != '\0');
                                              SVar14 = ~uVar12 - 1;
                                              if (0 < (int)SVar14) {
                                                pcVar6 = local_965 + ~uVar12;
                                                do {
                                                  if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2)
                                                      == 0) break;
                                                  SVar14 = SVar14 - 1;
                                                  pcVar6 = pcVar6 + -1;
                                                } while (0 < (int)SVar14);
                                              }
                                              (local_965 + 1)[SVar14] = '\0';
                                              while (((&DAT_0061ed94)[(byte)(local_965[1] + 1)] & 2)
                                                     != 0) {
                                                memmove
                                                          (local_965 + 1,local_965 + 2,SVar14);
                                                SVar14 = SVar14 - 1;
                                              }
                                              if (local_148 != 0) {
                                                iVar4 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_00491510
                                                            (param_1,local_965 + 1);
                                                core_event_cpp_CEventList_setCounter_FUN_00491400
                                                          (param_1,local_965 + 1,iVar4 + 1);
                                              }
                                            }
                                            else {
                                              iVar4 = _strnicmp
                                                                ((char *)param_2,
                                                                 "killCharacter",0xd);
                                              if ((iVar4 == 0) &&
                                                 (((&DAT_0061ed94)[(byte)((char)param_2[0xd] + 1)] &
                                                  0xe0) == 0)) {
                                                local_144 = param_2 + 0xd;
                                                while (((&DAT_0061ed94)
                                                        [(byte)((char)*local_144 + 1)] & 2) != 0) {
                                                  local_144 = local_144 + 1;
                                                }
                                                local_c8 = local_184;
                                                local_c4 = 0.0;
                                                local_cc = -1;
                                                sscanf
                                                          ((char *)local_144," ( %[^,], %[^,], %f , %f , %f , %f)%n");
                                                local_c4 = local_c4 * _DAT_005d437f;
                                                if (local_cc < 0) {
                                                  local_c4 = -1.0;
                                                  sscanf
                                                            ((char *)local_144," ( %[^,], %[^,], %f , %f , %f )%n");
                                                }
                                                if (local_cc < 0) {
                                                  local_c8 = (byte *)0x0;
                                                  sscanf
                                                            ((char *)local_144," ( %[^,], %[^)])%n");
                                                }
                                                if (local_cc < 0) {
                                                  iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Syntax error in killCharacter() parms");
                                                  return iVar4;
                                                }
                                                uVar12 = 0xffffffff;
                                                pcVar6 = local_1ced + 1;
                                                do {
                                                  if (uVar12 == 0) break;
                                                  uVar12 = uVar12 - 1;
                                                  cVar2 = *pcVar6;
                                                  pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                } while (cVar2 != '\0');
                                                SVar14 = ~uVar12 - 1;
                                                if (0 < (int)SVar14) {
                                                  pcVar6 = local_1ced + ~uVar12;
                                                  do {
                                                    if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2
                                                        ) == 0) break;
                                                    SVar14 = SVar14 - 1;
                                                    pcVar6 = pcVar6 + -1;
                                                  } while (0 < (int)SVar14);
                                                }
                                                (local_1ced + 1)[SVar14] = '\0';
                                                while (((&DAT_0061ed94)[(byte)(local_1ced[1] + 1)] &
                                                       2) != 0) {
                                                  memmove
                                                            (local_1ced + 1,local_1ced + 2,SVar14);
                                                  SVar14 = SVar14 - 1;
                                                }
                                                uVar12 = 0xffffffff;
                                                pcVar6 = local_325 + 1;
                                                do {
                                                  if (uVar12 == 0) break;
                                                  uVar12 = uVar12 - 1;
                                                  cVar2 = *pcVar6;
                                                  pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                } while (cVar2 != '\0');
                                                SVar14 = ~uVar12 - 1;
                                                if (0 < (int)SVar14) {
                                                  pcVar6 = local_325 + ~uVar12;
                                                  do {
                                                    if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] & 2
                                                        ) == 0) break;
                                                    SVar14 = SVar14 - 1;
                                                    pcVar6 = pcVar6 + -1;
                                                  } while (0 < (int)SVar14);
                                                }
                                                (local_325 + 1)[SVar14] = '\0';
                                                while (((&DAT_0061ed94)[(byte)(local_325[1] + 1)] &
                                                       2) != 0) {
                                                  memmove
                                                            (local_325 + 1,local_325 + 2,SVar14);
                                                  SVar14 = SVar14 - 1;
                                                }
                                                local_144 = local_144 + local_cc;
                                                while (((&DAT_0061ed94)
                                                        [(byte)((char)*local_144 + 1)] & 2) != 0) {
                                                  local_144 = local_144 + 1;
                                                }
                                                pCVar7 = (CLever *)
                                                                                                                  
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_1ced + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                if (pCVar7 == (CLever *)0x0) {
                                                  return 0;
                                                }
                                                if (pCVar7 == 0x0FFFFFFF) {
                                                  local_148 = 0;
                                                }
                                                iVar4 = core_event_cpp_parseDeathType_FUN_004890e0
                                                                  (local_325 + 1,&local_c0);
                                                if (iVar4 == 0) {
                                                  iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Unknown death type \"%s\" in killCharacter command.");
                                                  return iVar4;
                                                }
                                                if (local_148 != 0) {
                                                  (**(code **)(*(int *)&pCVar7->field_0x2b0 + 0xe4))
                                                            (pCVar7,local_c0,local_c8);
                                                }
                                              }
                                              else {
                                                iVar4 = _strnicmp
                                                                  ((char *)param_2,
                                                                   "killHero",8);
                                                if ((iVar4 == 0) &&
                                                   (((&DAT_0061ed94)[(byte)((char)param_2[8] + 1)] &
                                                    0xe0) == 0)) {
                                                  local_144 = param_2 + 8;
                                                  while (((&DAT_0061ed94)
                                                          [(byte)((char)*local_144 + 1)] & 2) != 0)
                                                  {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  if (*(int *)g_CNetGamePtr != 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Can't use killHero command in multi-player");
                                                  return iVar4;
                                                  }
                                                  local_b8 = -1;
                                                  sscanf
                                                            ((char *)local_144," ( %[^)])%n");
                                                  if (local_b8 < 2) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Syntax error in killHero() parms");
                                                  return iVar4;
                                                  }
                                                  local_144 = local_144 + local_b8;
                                                  while (((&DAT_0061ed94)
                                                          [(byte)((char)*local_144 + 1)] & 2) != 0)
                                                  {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  iVar4 = core_event_cpp_parseDeathType_FUN_004890e0
                                                                    (local_3ec,&local_b4);
                                                  if (iVar4 == 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Unknown death type \"%s\" in killHero command.");
                                                  return iVar4;
                                                  }
                                                  if ((local_148 != 0) &&
                                                     (iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4
                                                                      ), iVar4 != 0)) {
                                                    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xe4))
                                                              (iVar4,local_b4,0);
                                                  }
                                                }
                                                else {
                                                  iVar4 = _strnicmp
                                                                    ((char *)param_2,
                                                                     "killSfx",7);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)((char)param_2[7] + 1)]
                                                      & 0xe0) == 0)) {
                                                    local_144 = param_2 + 7;
                                                    while (((&DAT_0061ed94)
                                                            [(byte)((char)*local_144 + 1)] & 2) != 0
                                                          ) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_ac = -1;
                                                    sscanf
                                                              ((char *)local_144,"(%[^,)]%n");
                                                    if (local_ac < 3) {
                                                      FUN_005b7790
                                                                (&DAT_01c3dd10,
                                                                 "Error parsing killSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_144 = local_144 + local_ac;
                                                    uVar12 = 0xffffffff;
                                                    pcVar6 = local_70d + 1;
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar6;
                                                      pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar14 = ~uVar12 - 1;
                                                    if (0 < (int)SVar14) {
                                                      pcVar6 = local_70d + ~uVar12;
                                                      do {
                                                        if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)]
                                                            & 2) == 0) break;
                                                        SVar14 = SVar14 - 1;
                                                        pcVar6 = pcVar6 + -1;
                                                      } while (0 < (int)SVar14);
                                                    }
                                                    (local_70d + 1)[SVar14] = '\0';
                                                    while (((&DAT_0061ed94)
                                                            [(byte)(local_70d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                (local_70d + 1,local_70d + 2,SVar14)
                                                      ;
                                                      SVar14 = SVar14 - 1;
                                                    }
                                                    local_a8 = 0.0;
                                                    pCVar18 = local_144;
                                                    if (*local_144 == (CEventList)0x2c) {
                                                      local_ac = -1;
                                                      sscanf
                                                                ((char *)local_144,",%f%n");
                                                      if (local_ac < 3) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  pCVar18 = local_144 + local_ac;
                                                  }
                                                  do {
                                                    local_144 = pCVar18;
                                                    pCVar18 = local_144 + 1;
                                                  } while (((&DAT_0061ed94)
                                                            [(byte)((char)*local_144 + 1)] & 2) != 0
                                                          );
                                                  if (*local_144 != (CEventList)0x29) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Can't find matching ) in killSfx command");
                                                    return 0;
                                                  }
                                                  local_144 = pCVar18;
                                                  if (local_148 != 0) {
                                                    uVar12 = 
                                                  core_event_cpp_CEventList_getSfxHandle_FUN_00491920
                                                            (param_1,local_70d + 1);
                                                  if (local_a8 <= 0.0) {
                                                    sound_sndmain_cpp_killSfx_FUN_00551050(uVar12);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90
                                                            (param_1);
                                                  }
                                                  else {
                                                    sound_sndmain_cpp_FUN_00551080
                                                              (uVar12,0.0,local_a8,1);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90
                                                            (param_1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "lightning",9);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[9] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_144 = param_2 + 9;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_a4 = -1;
                                                      sscanf
                                                                ((char *)local_144,"( )%n");
                                                      if (local_a4 < 2) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_a4;
                                                  if (local_148 != 0) {
                                                    core_weather_cpp_FUN_0058aa30
                                                              (0x02661F80,0.1,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "playSfx",7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[7] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_144 = param_2 + 7;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_a0 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,)]%n");
                                                      if (local_a0 < 3) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_a0;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_bbd + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_bbd + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_bbd + 1)[SVar14] = '\0';
                                                  while (pCVar18 = local_144,
                                                        ((&DAT_0061ed94)[(byte)(local_bbd[1] + 1)] &
                                                        2) != 0) {
                                                    memmove
                                                              (local_bbd + 1,local_bbd + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  puVar19 = &DAT_00614288;
                                                  puVar21 = (uint *)((int)local_57d + 1);
                                                  for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1)
                                                  {
                                                    *puVar21 = *puVar19;
                                                    puVar19 = puVar19 + (uint)bVar22 * -2 + 1;
                                                    puVar21 = puVar21 + (uint)bVar22 * -2 + 1;
                                                  }
                                                  pCVar17 = local_144;
                                                  if (*pCVar18 == (CEventList)0x2c) {
                                                    local_a0 = -1;
                                                    sscanf
                                                              ((char *)local_144,",%[^)]%n");
                                                    if (local_a0 < 3) {
                                                      FUN_005b7790
                                                                (&DAT_01c3dd10,
                                                                 "Error parsing playSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_144 = local_144 + local_a0;
                                                    uVar12 = 0xffffffff;
                                                    pcVar6 = (char *)((int)local_57d + 1);
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar6;
                                                      pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar14 = ~uVar12 - 1;
                                                    if (0 < (int)SVar14) {
                                                      pcVar6 = local_57d + ~uVar12;
                                                      do {
                                                        if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)]
                                                            & 2) == 0) break;
                                                        SVar14 = SVar14 - 1;
                                                        pcVar6 = pcVar6 + -1;
                                                      } while (0 < (int)SVar14);
                                                    }
                                                    *(byte *)((int)local_57d + 1U + SVar14) =
                                                         0;
                                                    while (((&DAT_0061ed94)
                                                            [(byte)(local_57d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                ((void *)((int)local_57d + 1U),
                                                                 local_57d + 2,SVar14);
                                                      SVar14 = SVar14 - 1;
                                                    }
                                                    uVar12 = 0xffffffff;
                                                    pcVar6 = (char *)((int)local_57d + 1);
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar6;
                                                      pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    pCVar17 = local_144;
                                                    if (0x13 < ~uVar12 - 1) {
                                                      FUN_005b7790
                                                                (&DAT_01c3dd10,
                                                                 "handle name %s is too long, max %d chars"
                                                                 ,(int)local_57d + 1,0x13);
                                                      return 0;
                                                    }
                                                  }
                                                  do {
                                                    local_144 = pCVar17;
                                                    pCVar17 = local_144 + 1;
                                                  } while (((&DAT_0061ed94)
                                                            [(byte)((char)*local_144 + 1)] & 2) != 0
                                                          );
                                                  if (*local_144 != (CEventList)0x29) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Can't find matching ) in playSfx command");
                                                    return 0;
                                                  }
                                                  local_144 = pCVar17;
                                                  if (local_148 != 0) {
                                                    iVar4 = _strnicmp
                                                                      (local_bbd + 1,&DAT_005d3b76,3
                                                                      );
                                                    if (iVar4 == 0) {
                                                      iVar4 = sound_sndmain_cpp_FUN_005512a0(1);
                                                      if (iVar4 != 0) {
                                                        sound_sndmain_cpp_FUN_00550450();
                                                                                                                
                                                  sound_sndmain_cpp_setNextSfxChannel_FUN_00550310
                                                            (1);
                                                  uVar12 = 
                                                  core_sound_cpp_CSound_playSound_FUN_0055ae30
                                                            (0x0264B290,param_1,local_bbd + 1);
                                                  sound_sndmain_cpp_FUN_005504d0();
                                                  if (local_57d[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_00491960
                                                            (param_1,(char *)((int)local_57d + 1),
                                                             uVar12);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar12 = 
                                                  core_sound_cpp_CSound_playSound_FUN_0055ae30
                                                            (0x0264B290,param_1,local_bbd + 1);
                                                  if (local_57d[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_00491960
                                                            (param_1,(char *)((int)local_57d + 1),
                                                             uVar12);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "resetGore",9);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[9] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_144 = param_2 + 9;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_9c = -1;
                                                      sscanf
                                                                ((char *)local_144,"( )%n");
                                                      if (local_9c < 2) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_9c;
                                                  if (local_148 != 0) {
                                                    core_gore_cpp_CGore_reset_FUN_004c93f0
                                                              (g_CGorePtr);
                                                    core_fire_cpp_CFireEffect_init_FUN_0049c190
                                                              (0x01C3DEB4);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setActorBool",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 0xc;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_98 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^,], %[^)])%n");
                                                      if (local_98 < 3) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setActorBool parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_98;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_7d5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_7d5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_7d5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_7d5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_7d5 + 1,local_7d5 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_af5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_af5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_af5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_af5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_af5 + 1,local_af5 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1a95 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1a95 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1a95 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1a95[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1a95 + 1,local_1a95 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  iVar5 = 0;
                                                  local_94 = 0;
                                                  iVar4 = local_94;
                                                  if (0 < 0x00000002) {
                                                    iVar16 = 0;
                                                    do {
                                                      if (*(int *)((int)&DAT_006141f4 + iVar16) == 0
                                                         ) {
                                                        iVar8 = _stricmp
                                                                          ("spectralFlag" +
                                                                           iVar16,local_af5 + 1);
                                                        iVar4 = (int)&DAT_006141f4 + iVar16;
                                                        if (iVar8 == 0) break;
                                                      }
                                                      iVar5 = iVar5 + 1;
                                                      iVar16 = iVar16 + 0x48;
                                                      iVar4 = local_94;
                                                    } while (iVar5 < 0x00000002);
                                                  }
                                                  local_94 = iVar4;
                                                  if (local_94 == 0) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "%s is not a valid boolean actor variable name",
                                                               local_af5 + 1);
                                                    return 0;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_7d5 + 1,
                                                             *(uint *)(local_94 + 0x44));
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == 0x0FFFFFFF) || (local_148 == 0))
                                                  {
                                                    pcVar6 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                                            (param_1,local_1a95 + 1);
                                                  if (pcVar6 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,local_1a95 + 1);
                                                  *(int *)(&pCVar7->field_0x0 +
                                                          *(int *)(local_94 + 0x40)) = iVar4;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setCameraAmbient",
                                                                       0x10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0x10] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = param_2 + 0x10;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_8c = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %f)%n");
                                                      if (local_8c < 3) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setCameraAmbient parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_8c;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_151d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_151d + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_151d + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_151d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_151d + 1,local_151d + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  iVar4 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0
                                                            (g_CDemonSetPtr,local_151d + 1);
                                                  if (iVar4 < 0) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Camera \"%s\" does not exist.",
                                                               local_151d + 1);
                                                    return 0;
                                                  }
                                                  if ((local_90 < 0.0) ||
                                                     (0x42c80000 < (int)local_90)) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Ambient value %g is out of range (1..100)",
                                                               (double)local_90);
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                    core_set_cpp_FUN_00534640
                                                              (g_CDemonSetPtr,iVar4,
                                                               local_90 * (float)_DAT_005d4383);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setCounter",10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 10;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_88 = -1;
                                                      sscanf
                                                                ((char *)local_144,"( %[^,)]%n");
                                                      if (local_88 < 5) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_88;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1775 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1775 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1775 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1775[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1775 + 1,local_1775 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  local_84 = 0;
                                                  if (*local_144 == (CEventList)0x2c) {
                                                    local_88 = -1;
                                                    sscanf
                                                              ((char *)local_144,",%d%n");
                                                    if (local_88 < 1) {
                                                      FUN_005b7790
                                                                (&DAT_01c3dd10,
                                                                 "Error parsing setCounter value argument"
                                                                );
                                                      return 0;
                                                    }
                                                    local_144 = local_144 + local_88;
                                                    while (((&DAT_0061ed94)
                                                            [(byte)((char)*local_144 + 1)] & 2) != 0
                                                          ) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                  }
                                                  if (*local_144 != (CEventList)0x29) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Error parsing setCounter arguments");
                                                    return 0;
                                                  }
                                                  local_144 = local_144 + 1;
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setCounter_FUN_00491400
                                                            (param_1,local_1775 + 1,local_84);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setDoorState",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 0xc;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_80 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^)])%n");
                                                      if (local_80 < 5) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setDoorState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_80;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1905 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1905 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1905 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1905[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1905 + 1,local_1905 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_183d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_183d + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_183d + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_183d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_183d + 1,local_183d + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_1905 + 1,
                                                             g_CDoorClassInfo.name_hash);
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_148 = 0;
                                                  }
                                                  iVar4 = _stricmp
                                                                    (local_183d + 1,&DAT_005d3d79);
                                                  if ((((iVar4 != 0) &&
                                                       (iVar4 = _stricmp
                                                                          (local_183d + 1,
                                                                           "closed"),
                                                       iVar4 != 0)) &&
                                                      (iVar4 = _stricmp
                                                                         (local_183d + 1,
                                                                          "opening"),
                                                      iVar4 != 0)) &&
                                                     (iVar4 = _stricmp
                                                                        (local_183d + 1,
                                                                         "closing"),
                                                     iVar4 != 0)) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Invalid door state '%s'",
                                                               local_183d + 1);
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                    core_door_cpp_FUN_0045efe0(pCVar7);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setGroupAmbient",
                                                                       0xf);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0xf] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 0xf;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_74 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%d, %f)%n")
                                                      ;
                                                      if (local_74 < 3) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setGroupAmbient parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_74;
                                                  if ((local_78 < 0.0) ||
                                                     (0x42c80000 < (int)local_78)) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Ambient value %g is out of range (1..100)",
                                                               (double)local_78);
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_005346c0
                                                            (g_CDemonSetPtr,local_7c,
                                                             local_78 * (float)_DAT_005d4383);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                                                                                              
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)
                                                       [(byte)((char)param_2[0x13] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_144 = param_2 + 0x13;
                                                    while (((&DAT_0061ed94)
                                                            [(byte)((char)*local_144 + 1)] & 2) != 0
                                                          ) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_70 = -1;
                                                    sscanf
                                                              ((char *)local_144,"( %[^ ,] , %d )%n");
                                                    if (local_70 < 0) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Error parsing setLightFilterFrame parms");
                                                  return iVar4;
                                                  }
                                                  local_144 = local_144 + local_70;
                                                  core_set_cpp_CDemonSet_addLightFilter_FUN_00534770
                                                            (g_CDemonSetPtr,local_19cc,&local_68,
                                                             &local_64);
                                                  if (local_68 == (C3DSLight *)0x0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("SpotLight %s doesn't exist.");
                                                  return iVar4;
                                                  }
                                                  if ((local_6c < 0) ||
                                                     (*(int *)&local_68->field_0x11ec <= local_6c))
                                                  {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Invalid filter frame, %s has %d filters");
                                                  return iVar4;
                                                  }
                                                  if (local_148 != 0) {
                                                    if (local_64 == (CDemonLight *)0x0) {
                                                      _DAT_01d046a0 = "..\\core\\event.cpp";
                                                      _DAT_01d046a4 = 0x718;
                                                      core_main_c_FUN_004e4500
                                                                ("Can't find CDemonLight for light %s in setLightFilterFrame meta-command"
                                                                );
                                                    }
                                                                                                        
                                                  core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0053bb20
                                                            (local_68,local_6c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setLeverState",0xd)
                                                    ;
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0xd] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 0xd;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_60 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^)])%n");
                                                      if (local_60 < 5) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setLeverState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_60;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_a2d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_a2d + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_a2d + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_a2d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_a2d + 1,local_a2d + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_89d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_89d + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_89d + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_89d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_89d + 1,local_89d + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_a2d + 1,
                                                             g_CLeverClassInfo.name_hash);
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if ((pCVar7 == 0x0FFFFFFF) || (local_148 == 0))
                                                  {
                                                    pcVar6 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_0048e3a0
                                                            (param_1,local_89d + 1);
                                                  if (pcVar6 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                                            (0x01C38BC0,local_89d + 1);
                                                  if (iVar4 == 0) {
                                                    uStack_150 = 0;
                                                  }
                                                  else {
                                                    uStack_150 = 0x3ff00000;
                                                  }
                                                  local_154 = 0;
                                                  core_lever_cpp_FUN_004e1f70
                                                            (pCVar7,(float)(double)((ulonglong)
                                                                                    uStack_150 <<
                                                                                   0x20));
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setModelState",0xd)
                                                    ;
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0xd] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 0xd;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_58 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^)])%n");
                                                      if (local_58 < 5) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setModelState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_58;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1db5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1db5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1db5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1db5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1db5 + 1,local_1db5 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1455 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1455 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1455 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1455[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1455 + 1,local_1455 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_1db5 + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar6 = local_1455 + 1;
                                                    iVar4 = 0;
                                                    pCVar11 = core_motion_cpp_FUN_00503860
                                                                        ((CMotionController *)
                                                                         &pCVar7->field_0x2b4);
                                                    iVar4 = core_motion_cpp_FUN_00502fa0
                                                                      (pCVar11,pcVar6,iVar4);
                                                    if (iVar4 < 0) {
                                                      FUN_005b7790
                                                                (&DAT_01c3dd10,
                                                                 "Model %s does not have state %s"
                                                                 ,&pCVar7[3].field_0x8c4,
                                                                 local_1455 + 1);
                                                      return 0;
                                                    }
                                                    if (local_148 != 0) {
                                                                                                            
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                                            ((CMotionController *)
                                                             &pCVar7->field_0x2b4,iVar4,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setSunlight",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 0xb;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_50 = -1;
                                                      sscanf
                                                                ((char *)local_144,
                                                                 "(%f , %f , %f , %f )%n");
                                                      if (local_50 < 5) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
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
                                                    fVar3 = 1.0 / local_4c;
                                                    local_178 = local_178 * fVar3;
                                                    local_174 = local_174 * fVar3;
                                                    local_170 = local_170 * fVar3;
                                                  }
                                                  if (local_148 != 0) {
                                                    core_set_cpp_FUN_00534680
                                                              (g_CDemonSetPtr,local_178,local_174,
                                                               local_170);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setTimer",8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[8] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_144 = param_2 + 8;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_bc = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %f)%n");
                                                      if (local_bc < 3) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_bc;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_fa5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_fa5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_fa5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_fa5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_fa5 + 1,local_fa5 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_fa5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  if (0x1f < ~uVar12 - 1) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Timer name \"%s\" is too long, (max %d chars)",
                                                               local_fa5 + 1,0x1f);
                                                    return 0;
                                                  }
                                                  if (local_44 < 0.0) {
                                                    FUN_005b7790
                                                              (&DAT_01c3dd10,
                                                               "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_00491280
                                                            (param_1,local_fa5 + 1,local_44);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setWeather",10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 10;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_3c = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^)])%n");
                                                      if (local_3c < 3) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_3c;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1c25 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_1c25 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_1c25 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1c25[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1c25 + 1,local_1c25 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  iVar4 = _stricmp
                                                                    (local_1c25 + 1,&DAT_005d40ba);
                                                  type = WEATHER_TYPE_NONE;
                                                  if (iVar4 != 0) {
                                                    iVar4 = _stricmp
                                                                      (local_1c25 + 1,&DAT_005d40bf)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      type = WEATHER_TYPE_RAIN;
                                                    }
                                                    else {
                                                      iVar4 = _stricmp
                                                                        (local_1c25 + 1,
                                                                         &DAT_005d40c4);
                                                      if (iVar4 != 0) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                   "Invalid weather type: %s"
                                                                   ,local_1c25 + 1);
                                                        return 0;
                                                      }
                                                      type = WEATHER_TYPE_SNOW;
                                                    }
                                                  }
                                                  if (local_148 != 0) {
                                                                                                        
                                                  core_weather_cpp_CWeather_setWeatherType_FUN_0058b470
                                                            (0x02661F80,type);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_144 = param_2 + 0xb;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_2c = -1;
                                                      sscanf
                                                                ((char *)local_144,
                                                                 "( %f, %f, %f, %f )%n");
                                                      if (local_2c < 5) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
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
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0x11] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_144 = param_2 + 0x11;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*local_144 + 1)] & 2) !=
                                                             0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_28 = -1;
                                                      sscanf
                                                                ((char *)local_144,"(%[^,], %[^)])%n");
                                                      if (local_28 < 5) {
                                                        FUN_005b7790
                                                                  (&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_28;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_edd + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_edd + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_edd + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_edd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_edd + 1,local_edd + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_e15 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_e15 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_e15 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_e15[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_e15 + 1,local_e15 + 2,SVar14);
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_edd + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 != 0x0FFFFFFF) {
                                                    pcVar6 = local_e15 + 1;
                                                    iVar4 = 0;
                                                    this_ptr = &pCVar7->field_0x2b4;
                                                    pCVar11 = core_motion_cpp_FUN_00503860
                                                                        ((CMotionController *)
                                                                         this_ptr);
                                                    iVar4 = core_motion_cpp_FUN_00502f10
                                                                      (pCVar11,pcVar6,iVar4);
                                                    if (iVar4 < 0) {
                                                      FUN_005b7790
                                                                (&DAT_01c3dd10,
                                                                 "Model %s does not have motion %s"
                                                                 ,&pCVar7[3].field_0x8c4,
                                                                 local_e15 + 1);
                                                      return 0;
                                                    }
                                                    if (local_148 != 0) {
                                                                                                            
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
                                                            ((CMotionController *)this_ptr,iVar4,0.0
                                                            );
                                                  iVar5 = 1;
                                                  iVar4 = core_motion_cpp_FUN_005035c0(this_ptr);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                                            ((CMotionController *)this_ptr,
                                                             *(int *)(iVar4 + 0x24),iVar5);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "switchCamera",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      param_2 = param_2 + 0xc;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)((char)*param_2 + 1)] & 2) != 0
                                                            ) {
                                                        param_2 = param_2 + 1;
                                                      }
                                                      local_24 = -1;
                                                      puVar19 = &DAT_00614350;
                                                      pcVar6 = local_2c0;
                                                      for (iVar4 = 0x19; iVar4 != 0;
                                                          iVar4 = iVar4 + -1) {
                                                        *(uint *)pcVar6 = *puVar19;
                                                        puVar19 = puVar19 + (uint)bVar22 * -2 + 1;
                                                        pcVar6 = pcVar6 + ((uint)bVar22 * -2 + 1) *
                                                                          4;
                                                      }
                                                      local_144 = param_2;
                                                      sscanf
                                                                ((char *)param_2," ( %[^ ,)]%n");
                                                      if (local_24 < 2) {
                                                        iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar4;
                                                  }
                                                  local_144 = local_144 + local_24;
                                                  while (((&DAT_0061ed94)
                                                          [(byte)((char)*local_144 + 1)] & 2) != 0)
                                                  {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  iVar4 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0
                                                            (g_CDemonSetPtr,local_2c0);
                                                  if (iVar4 < 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Camera \"%s\" doesn't exist");
                                                  return iVar4;
                                                  }
                                                  local_20 = 3.0;
                                                  if (*local_144 == (CEventList)0x2c) {
                                                    local_24 = -1;
                                                    sscanf
                                                              ((char *)local_144,",%f%n");
                                                    if (local_24 < 2) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar4;
                                                  }
                                                  local_144 = local_144 + local_24;
                                                  while (((&DAT_0061ed94)
                                                          [(byte)((char)*local_144 + 1)] & 2) != 0)
                                                  {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  }
                                                  if (*local_144 != (CEventList)0x29) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Missing ')' in switchCamera() statement");
                                                  return iVar4;
                                                  }
                                                  local_144 = local_144 + 1;
                                                  if (local_148 != 0) {
                                                    core_setdir_cpp_FUN_00539820
                                                              (g_CDemonSetPtr,iVar4,local_20);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                                                                                              
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)
                                                       [(byte)((char)param_2[0x15] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_144 = param_2 + 0x15;
                                                    while (((&DAT_0061ed94)
                                                            [(byte)((char)*local_144 + 1)] & 2) != 0
                                                          ) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_1c = -1;
                                                    sscanf
                                                              ((char *)local_144,"(%[^)])%n");
                                                    if (local_1c < 3) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Error parsing turnToFieldNotesEntry command");
                                                  return iVar4;
                                                  }
                                                  local_144 = local_144 + local_1c;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_24b5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_24b5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_24b5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_24b5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_24b5 + 1,local_24b5 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  if (_DAT_01c3dd0c != 0) {
                                                    uVar9 = core_fldnotes_cpp_FUN_004a5430
                                                                      (g_CFieldNotesPtr);
                                                    switch(uVar9) {
                                                    case 0:
                                                    case 1:
                                                    case 2:
                                                    case 3:
                                                    case 4:
                                                    case 5:
                                                    case 6:
                                                      goto switchD_00489e7e_caseD_2;
                                                    default:
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Field notes entry '%s' not found");
                                                  return iVar4;
                                                  }
                                                  }
                                                  core_fldnotes_cpp_FUN_004a5490(g_CFieldNotesPtr);
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "warpTo",6);
                                                    if ((iVar4 != 0) ||
                                                       (((&DAT_0061ed94)
                                                         [(byte)((char)param_2[6] + 1)] & 0xe0) != 0
                                                       )) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Unknown meta-function starting at %s");
                                                  return iVar4;
                                                  }
                                                  local_144 = param_2 + 6;
                                                  while (((&DAT_0061ed94)
                                                          [(byte)((char)*local_144 + 1)] & 2) != 0)
                                                  {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            ((char *)local_144,"(%[^,], %[^)])%n");
                                                  if (local_18 < 5) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar4;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_16ad + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_16ad + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_16ad + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_16ad[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_16ad + 1,local_16ad + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_15e5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar14 = ~uVar12 - 1;
                                                  if (0 < (int)SVar14) {
                                                    pcVar6 = local_15e5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar14 = SVar14 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar14);
                                                  }
                                                  (local_15e5 + 1)[SVar14] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_15e5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_15e5 + 1,local_15e5 + 2,SVar14)
                                                    ;
                                                    SVar14 = SVar14 - 1;
                                                  }
                                                  local_144 = local_144 + local_18;
                                                  while (((&DAT_0061ed94)
                                                          [(byte)((char)*local_144 + 1)] & 2) != 0)
                                                  {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  pCVar7 = (CLever *)
                                                                                                                      
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_16ad + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (pCVar7 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar7 == 0x0FFFFFFF) {
                                                    local_148 = 0;
                                                  }
                                                  else if (local_148 != 0) {
                                                    local_1a0 = *(int *)&pCVar7->field_0x2c;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_15e5 + 1,"%f,%f,%f,%f,%f,%f%n"
                                                            );
                                                  if (local_18 < 0) {
                                                    if ((local_148 != 0) &&
                                                       (&local_16c !=
                                                        (uint *)&pCVar7->field_0x30)) {
                                                      local_16c = *(uint *)&pCVar7->field_0x30
                                                      ;
                                                      local_168 = *(uint *)&pCVar7->field_0x34
                                                      ;
                                                      local_164 = *(uint *)&pCVar7->field_0x38
                                                      ;
                                                    }
                                                    sscanf
                                                              (local_15e5 + 1,"%f,%f,%f,%f%n");
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_148 != 0) &&
                                                       (&local_16c !=
                                                        (uint *)&pCVar7->field_0x30)) {
                                                      local_16c = *(uint *)&pCVar7->field_0x30
                                                      ;
                                                      local_168 = *(uint *)&pCVar7->field_0x34
                                                      ;
                                                      local_164 = *(uint *)&pCVar7->field_0x38
                                                      ;
                                                    }
                                                    sscanf
                                                              (local_15e5 + 1,"%f,%f,%f%n");
                                                  }
                                                  if (local_18 < 0) {
                                                    pCVar10 = (CLever *)
                                                                                                                            
                                                  core_event_cpp_resolveActorByName_FUN_00488d00
                                                            (local_15e5 + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (pCVar10 == (CLever *)0x0) {
                                                    return 0;
                                                  }
                                                  if (pCVar10 == 0x0FFFFFFF) {
                                                    local_148 = 0;
                                                  }
                                                  else {
                                                    local_1ac = *(uint *)&pCVar10->field_0x20;
                                                    local_1a8 = *(uint *)&pCVar10->field_0x24;
                                                    local_1a4 = *(uint *)&pCVar10->field_0x28;
                                                    local_1a0 = *(int *)&pCVar10->field_0x2c;
                                                    if (&local_16c !=
                                                        (uint *)&pCVar10->field_0x30) {
                                                      local_16c = *(uint *)
                                                                   &pCVar10->field_0x30;
                                                      local_168 = *(uint *)
                                                                   &pCVar10->field_0x34;
                                                      local_164 = *(uint *)
                                                                   &pCVar10->field_0x38;
                                                    }
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_15e5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar22 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  local_18 = ~uVar12 - 1;
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_15e5[local_18 + 1] != '\0')) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_00488ba0
                                                            ("Error parsing warpTo command parms");
                                                  return iVar4;
                                                  }
                                                  if (local_148 != 0) {
                                                    if (local_1a0 != *(int *)&pCVar7->field_0x2c) {
                                                      (**(code **)(*(int *)&pCVar7->field_0x2b0 + 8)
                                                      )();
                                                    }
                                                    iVar4 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                                                            (pCVar7);
                                                  if (iVar4 != 0) {
                                                    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xf8))();
                                                    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x100))()
                                                    ;
                                                  }
                                                  *(int *)&pCVar7->field_0x2c = local_1a0;
                                                  (**(code **)(*(int *)&pCVar7->field_0x2b0 + 0x70))
                                                            (pCVar7,&local_1ac);
                                                  if (pCVar7 == *(CLever **)
                                                                 (_DAT_01cedef4 * 4 + 0x1cedee4)) {
                                                    core_mission_cpp_FUN_004fc780
                                                              (0x01D182F0,(CLocation *)&local_1ac)
                                                    ;
                                                  }
                                                  if (pCVar7 == *(CLever **)&g_CScriptPtr->field_0xc
                                                     ) {
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
switchD_00489e7e_caseD_2:
    while (((&DAT_0061ed94)[(byte)((char)*local_144 + 1)] & 2) != 0) {
      local_144 = local_144 + 1;
    }
    if (*local_144 != (CEventList)0x0) {
      iVar4 = core_event_cpp_formatEventError_FUN_00488ba0("Extra characters found");
      return iVar4;
    }
  }
  return 1;
}
