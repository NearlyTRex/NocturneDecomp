// Name: core_event.cpp_FUN_004a1d00
// Address: 004a1d00
// Address Range: [[004a1d00, 004a6b9a]]
// Convention: unknown
// Signature: int core_event_cpp_FUN_004a1d00(CEventList *param_1,CEventList *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_event_cpp_FUN_004a1d00(CEventList *param_1,CEventList *param_2)

{
  CMotionController *this_ptr;
  CEventList CVar1;
  char cVar2;
  float fVar3;
  CDemonMission *this_ptr_00;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  CMotionList *pCVar10;
  EWeatherType type;
  SMotion *pSVar11;
  uint uVar12;
  SIZE_T SVar13;
  int *piVar14;
  int iVar15;
  CEventList *pCVar16;
  CEventList *pCVar17;
  uint *puVar18;
  char *pcVar19;
  uint *puVar20;
  byte bVar21;
  char local_2a8c [255];
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
  byte local_1dc4 [199];
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
  CMatrix3x4f local_26c [48];
  byte local_23c [32];
  byte local_21c [32];
  byte local_1fc [32];
  byte local_1dc [32];
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  int local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  byte local_1a0 [12];
  CVector3f local_194;
  float local_188;
  float local_184;
  float local_180;
  CVector3f local_17c;
  CVector3f local_170;
  uint local_164;
  uint uStack_160;
  uint local_15c;
  CEventList *local_158;
  int local_154;
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
  uint local_110;
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
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  byte *local_d0;
  float local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  float local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  int local_98;
  int local_94;
  CEventList *local_90;
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
  
  bVar21 = 0;
  DAT_01c56ed0 = 0;
  if (((param_2 != (CEventList *)0x0) && (*param_2 != (CEventList)0x0)) &&
     (iVar4 = _stricmp((char *)param_2,&DAT_005dcd92), iVar4 != 0)) {
    if (*param_2 == (CEventList)0x2e) {
      param_2 = param_2 + 1;
    }
    local_15c = (uint)(_DAT_01c56ecc == 0);
    local_158 = (CEventList *)&DAT_005dcd97;
    pCVar17 = param_2;
    do {
      pCVar16 = pCVar17;
      if (*pCVar17 == (CEventList)0x28) goto LAB_004a1d87;
      if (*pCVar17 == (CEventList)0x0) break;
      pCVar16 = pCVar17 + 1;
      if (*pCVar16 == (CEventList)0x28) goto LAB_004a1d87;
      pCVar17 = pCVar17 + 2;
    } while (*pCVar16 != (CEventList)0x0);
    pCVar16 = (CEventList *)0x0;
LAB_004a1d87:
    if (pCVar16 == (CEventList *)0x0) {
      iVar4 = 0;
      if (0 < *(int *)param_1) {
        pCVar17 = param_1 + 4;
        do {
          iVar5 = _stricmp((char *)pCVar17,(char *)param_2);
          if (iVar5 == 0) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          pCVar17 = pCVar17 + 0x20;
        } while (iVar4 < *(int *)param_1);
      }
      uVar12 = 0xffffffff;
      pCVar17 = param_2;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        CVar1 = *pCVar17;
        pCVar17 = pCVar17 + (uint)bVar21 * -2 + 1;
      } while (CVar1 != (CEventList)0x0);
      if (0x1f < ~uVar12 - 1) {
        iVar4 = core_event_cpp_formatEventError_FUN_004a1210("Event name %s is too long");
        return iVar4;
      }
      if (99 < *(int *)param_1) {
        local_154 = _fopen("events.txt");
        if (local_154 != 0) {
          iVar4 = 0;
          if (0 < *(int *)param_1) {
            do {
              FUN_005c03c0(local_154,&DAT_005dcdc0);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)param_1);
          }
          _fclose();
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0x286;
        core_main_c_FUN_005030e0();
      }
      pCVar16 = param_1 + *(int *)param_1 * 0x20 + 4;
      pCVar17 = pCVar16;
      do {
        CVar1 = *param_2;
        *pCVar17 = CVar1;
        if (CVar1 == (CEventList)0x0) break;
        CVar1 = param_2[1];
        param_2 = param_2 + 2;
        pCVar17[1] = CVar1;
        pCVar17 = pCVar17 + 2;
      } while (CVar1 != (CEventList)0x0);
      local_14 = 0;
      local_90 = pCVar16;
      do {
        uVar12 = 0xffffffff;
        pCVar17 = local_90;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          CVar1 = *pCVar17;
          pCVar17 = pCVar17 + (uint)bVar21 * -2 + 1;
        } while (CVar1 != (CEventList)0x0);
        if (~uVar12 - 1 <= local_14) {
          if (local_15c == 0) {
            return 1;
          }
          *(int *)param_1 = *(int *)param_1 + 1;
          return 1;
        }
        iVar4 = toupper((uint)(byte)*pCVar16);
        *pCVar16 = SUB41(iVar4,0);
        iVar4 = core_event_cpp_isValidIdentifierChar_FUN_004aa5e0((uint)(byte)*pCVar16);
        if (iVar4 == 0) {
          iVar4 = core_event_cpp_formatEventError_FUN_004a1210("Event name %s is not valid");
          return iVar4;
        }
        local_14 = local_14 + 1;
        pCVar16 = pCVar16 + 1;
      } while( true );
    }
    iVar4 = _strnicmp((char *)param_2,"activateGadget",0xe);
    if ((iVar4 == 0) && (((&DAT_00626114)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
      local_158 = param_2 + 0xe;
      while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
        local_158 = local_158 + 1;
      }
      local_150 = -1;
      sscanf((char *)local_158,"(%[^,], %[^,], %n");
      if (local_150 < 3) {
        iVar4 = core_event_cpp_formatEventError_FUN_004a1210("Error parsing activateGadget command");
        return iVar4;
      }
      local_158 = local_158 + local_150;
      uVar12 = 0xffffffff;
      pcVar6 = local_238d + 1;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
      } while (cVar2 != '\0');
      SVar13 = ~uVar12 - 1;
      if (0 < (int)SVar13) {
        pcVar6 = local_238d + ~uVar12;
        do {
          if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar13 = SVar13 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar13);
      }
      (local_238d + 1)[SVar13] = '\0';
      while (((&DAT_00626114)[(byte)(local_238d[1] + 1)] & 2) != 0) {
        memmove(local_238d + 1,local_238d + 2,SVar13);
        SVar13 = SVar13 - 1;
      }
      local_14c = local_248d + 1;
      uVar12 = 0xffffffff;
      pcVar6 = local_248d + 1;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
      } while (cVar2 != '\0');
      SVar13 = ~uVar12 - 1;
      if (0 < (int)SVar13) {
        pcVar6 = local_248d + ~uVar12;
        do {
          if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar13 = SVar13 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar13);
      }
      (local_248d + 1)[SVar13] = '\0';
      while (((&DAT_00626114)[(byte)(*local_14c + 1)] & 2) != 0) {
        memmove(local_14c,local_248d + 2,SVar13);
        SVar13 = SVar13 - 1;
      }
      pcVar6 = (char *)core_event_cpp_FUN_004a1630(&local_158,local_2a8c,0x100);
      if (pcVar6 != (char *)0x0) goto LAB_004a2140;
      uVar12 = 0xffffffff;
      pcVar6 = local_2a8c;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
      } while (cVar2 != '\0');
      SVar13 = ~uVar12 - 1;
      if (0 < (int)SVar13) {
        pcVar6 = local_2a8c + (~uVar12 - 1);
        do {
          if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          SVar13 = SVar13 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)SVar13);
      }
      local_2a8c[SVar13] = '\0';
      while (((&DAT_00626114)[(byte)(local_2a8c[0] + 1)] & 2) != 0) {
        memmove(local_2a8c,local_2a8c + 1,SVar13);
        SVar13 = SVar13 - 1;
      }
      uVar12 = core_event_cpp_resolveActorByName_FUN_004a1370
                         (local_238d + 1,g_CHeroClassInfo.name_hash);
      if (uVar12 == 0) {
        return 0;
      }
      if (uVar12 == 0x0FFFFFFF) {
        local_15c = uVar12 ^ 0x0FFFFFFF;
      }
      piVar14 = (int *)0x0;
      iVar4 = _stricmp(local_248d + 1,"compass");
      if (iVar4 == 0) {
        piVar14 = (int *)(uVar12 + 0x1faf0);
      }
      iVar4 = _stricmp(local_248d + 1,&DAT_005dce62);
      if (iVar4 == 0) {
        piVar14 = (int *)(uVar12 + 0x1faf4);
      }
      if (piVar14 == (int *)0x0) {
        iVar4 = core_event_cpp_formatEventError_FUN_004a1210("Invalid gadget type: %s");
        return iVar4;
      }
      if (_DAT_01c56ecc == 0) {
        if (local_15c != 0) {
          iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(param_1,local_2a8c);
          *piVar14 = iVar4;
        }
      }
      else {
        pcVar6 = core_event_cpp_CEventList_validateCondition_FUN_004a6c90(param_1,local_2a8c);
        if (pcVar6 != (char *)0x0) {
          return 0;
        }
      }
    }
    else {
      iVar4 = _strnicmp((char *)param_2,"activatePuzzle",0xe);
      if ((iVar4 == 0) && (((&DAT_00626114)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
        local_158 = param_2 + 0xe;
        while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
          local_158 = local_158 + 1;
        }
        local_148 = -1;
        sscanf((char *)local_158,"(%[^)])%n");
        if (local_148 < 3) {
          iVar4 = core_event_cpp_formatEventError_FUN_004a1210("Error parsing activatePuzzle command");
          return iVar4;
        }
        local_158 = local_158 + local_148;
        uVar12 = 0xffffffff;
        pcVar6 = local_1f8d + 1;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
        } while (cVar2 != '\0');
        SVar13 = ~uVar12 - 1;
        if (0 < (int)SVar13) {
          pcVar6 = local_1f8d + ~uVar12;
          do {
            if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
            SVar13 = SVar13 - 1;
            pcVar6 = pcVar6 + -1;
          } while (0 < (int)SVar13);
        }
        (local_1f8d + 1)[SVar13] = '\0';
        while (((&DAT_00626114)[(byte)(local_1f8d[1] + 1)] & 2) != 0) {
          memmove(local_1f8d + 1,local_1f8d + 2,SVar13);
          SVar13 = SVar13 - 1;
        }
        iVar5 = 0;
        iVar4 = 0;
        if (0 < DAT_007c394c) {
          iVar15 = 0;
          do {
            pcVar6 = (char *)(**(code **)(**(int **)((int)&DAT_007c3950 + iVar15) + 4))();
            iVar7 = _stricmp(local_1f8d + 1,pcVar6);
            if (iVar7 == 0) {
              iVar4 = *(int *)((int)&DAT_007c3950 + iVar15);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar15 = iVar15 + 4;
          } while (iVar5 < DAT_007c394c);
        }
        if (iVar4 == 0) {
          iVar4 = core_event_cpp_formatEventError_FUN_004a1210("No such puzzle '%s'");
          return iVar4;
        }
        if (local_15c != 0) {
          if (DAT_007c3978 != 0) {
            unkafter_alphabit_cpp_FUN_00415be0(DAT_007c3978);
          }
          unkafter_alphabit_cpp_FUN_00415be0(iVar4);
        }
      }
      else {
        iVar4 = _strnicmp
                          ((char *)param_2,"addFieldNotesTask",0x11);
        if ((iVar4 == 0) && (((&DAT_00626114)[(byte)((char)param_2[0x11] + 1)] & 0xe0) == 0)) {
          local_158 = param_2 + 0x11;
          while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
            local_158 = local_158 + 1;
          }
          local_144 = -1;
          sscanf((char *)local_158,"(%[^)])%n");
          if (local_144 < 3) {
            iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                              ("Error parsing addFieldNotesTask command");
            return iVar4;
          }
          local_158 = local_158 + local_144;
          uVar12 = 0xffffffff;
          pcVar6 = local_228d + 1;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
          } while (cVar2 != '\0');
          SVar13 = ~uVar12 - 1;
          if (0 < (int)SVar13) {
            pcVar6 = local_228d + ~uVar12;
            do {
              if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
              SVar13 = SVar13 - 1;
              pcVar6 = pcVar6 + -1;
            } while (0 < (int)SVar13);
          }
          (local_228d + 1)[SVar13] = '\0';
          while (((&DAT_00626114)[(byte)(local_228d[1] + 1)] & 2) != 0) {
            memmove(local_228d + 1,local_228d + 2,SVar13);
            SVar13 = SVar13 - 1;
          }
          if (_DAT_01c56ecc != 0) {
            uVar8 = core_fldnotes_cpp_FUN_004bde20(g_CFieldNotesPtr);
            switch(uVar8) {
            default:
              iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                ("Field notes entry '%s' is not a task");
              return iVar4;
            case 2:
            case 3:
            case 4:
              goto switchD_004a2582_caseD_2;
            case 0xffffffff:
              iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                ("Field notes entry '%s' not found");
              return iVar4;
            }
          }
          core_fldnotes_cpp_FUN_004bdd00(g_CFieldNotesPtr);
        }
        else {
          iVar4 = _strnicmp
                            ((char *)param_2,"advanceLightFilter",0x12);
          if ((iVar4 == 0) && (((&DAT_00626114)[(byte)((char)param_2[0x12] + 1)] & 0xe0) == 0)) {
            local_158 = param_2 + 0x12;
            while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
              local_158 = local_158 + 1;
            }
            pcVar6 = (char *)core_event_cpp_FUN_004a1630(&local_158,local_fb4,200);
            if (pcVar6 != (char *)0x0) goto LAB_004a2140;
            core_set_cpp_CDemonSet_addLightFilter_FUN_00555a20
                      (g_CDemonSetPtr,local_fb4,&local_64,&local_140);
            if (local_64 == (C3DSLight *)0x0) {
              iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                ("SpotLight %s doesn't exist.");
              return iVar4;
            }
            if (local_15c != 0) {
              if (local_140 == (CDemonLight *)0x0) {
                _DAT_01d1d400 = "..\\core\\event.cpp";
                _DAT_01d1d404 = 0x337;
                core_main_c_FUN_005030e0("Can't find CDemonLight for light %s in advanceLightFilter meta-command");
              }
              core_setutil_cpp_C3DSLight_advanceFilter_FUN_0055d360(local_64);
            }
          }
          else {
            iVar4 = _strnicmp
                              ((char *)param_2,"beginCarryItem",0xe);
            if ((iVar4 == 0) && (((&DAT_00626114)[(byte)((char)param_2[0xe] + 1)] & 0xe0) == 0)) {
              local_158 = param_2 + 0xe;
              while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                local_158 = local_158 + 1;
              }
              local_138 = -1;
              sscanf((char *)local_158,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n");
              if (local_138 < 0) {
                iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                  ("Error parsing beginCarryItem() parms");
                return iVar4;
              }
              local_158 = local_158 + local_138;
              uVar12 = 0xffffffff;
              pcVar6 = local_1cfd + 1;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
              } while (cVar2 != '\0');
              SVar13 = ~uVar12 - 1;
              if (0 < (int)SVar13) {
                pcVar6 = local_1cfd + ~uVar12;
                do {
                  if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                  SVar13 = SVar13 - 1;
                  pcVar6 = pcVar6 + -1;
                } while (0 < (int)SVar13);
              }
              (local_1cfd + 1)[SVar13] = '\0';
              while (((&DAT_00626114)[(byte)(local_1cfd[1] + 1)] & 2) != 0) {
                memmove(local_1cfd + 1,local_1cfd + 2,SVar13);
                SVar13 = SVar13 - 1;
              }
              uVar12 = 0xffffffff;
              pcVar6 = local_15f5 + 1;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
              } while (cVar2 != '\0');
              SVar13 = ~uVar12 - 1;
              if (0 < (int)SVar13) {
                pcVar6 = local_15f5 + ~uVar12;
                do {
                  if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                  SVar13 = SVar13 - 1;
                  pcVar6 = pcVar6 + -1;
                } while (0 < (int)SVar13);
              }
              (local_15f5 + 1)[SVar13] = '\0';
              while (((&DAT_00626114)[(byte)(local_15f5[1] + 1)] & 2) != 0) {
                memmove(local_15f5 + 1,local_15f5 + 2,SVar13);
                SVar13 = SVar13 - 1;
              }
              if ((local_13c < 0) || (1 < local_13c)) {
                iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                  ("Invalid hand index: %d");
                return iVar4;
              }
              uVar12 = core_event_cpp_resolveActorByName_FUN_004a1370
                                 (local_15f5 + 1,g_CCharacterClassInfo.name_hash);
              if (uVar12 == 0) {
                return 0;
              }
              if (uVar12 == 0x0FFFFFFF) {
                local_15c = 0;
              }
              else if (*(int *)(uVar12 + 0x25a8 + local_13c * 0x78) < 0) {
                iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                  ("%s doesn't have hand %d");
                return iVar4;
              }
              uVar9 = core_event_cpp_resolveActorByName_FUN_004a1370
                                (local_1cfd + 1,g_CDemonActorClassInfo.name_hash);
              if (uVar9 == 0) {
                return 0;
              }
              if ((uVar9 != 0x0FFFFFFF) && (local_15c != 0)) {
                core_xform_cpp_FUN_005b5760(local_26c,&local_194,&local_170);
                core_charactr_cpp_FUN_004325b0(uVar12,local_13c,uVar9,0);
              }
            }
            else {
              iVar4 = _strnicmp
                                ((char *)param_2,"completeFieldNotesTask",0x16);
              if ((iVar4 == 0) && (((&DAT_00626114)[(byte)((char)param_2[0x16] + 1)] & 0xe0) == 0))
              {
                local_158 = param_2 + 0x16;
                while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                  local_158 = local_158 + 1;
                }
                local_134 = -1;
                sscanf((char *)local_158,"(%[^)])%n");
                if (local_134 < 3) {
                  iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                    ("Error parsing completeFieldNotesTask command");
                  return iVar4;
                }
                local_158 = local_158 + local_134;
                uVar12 = 0xffffffff;
                pcVar6 = local_208d + 1;
                do {
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  cVar2 = *pcVar6;
                  pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                } while (cVar2 != '\0');
                SVar13 = ~uVar12 - 1;
                if (0 < (int)SVar13) {
                  pcVar6 = local_208d + ~uVar12;
                  do {
                    if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                    SVar13 = SVar13 - 1;
                    pcVar6 = pcVar6 + -1;
                  } while (0 < (int)SVar13);
                }
                (local_208d + 1)[SVar13] = '\0';
                while (((&DAT_00626114)[(byte)(local_208d[1] + 1)] & 2) != 0) {
                  memmove(local_208d + 1,local_208d + 2,SVar13);
                  SVar13 = SVar13 - 1;
                }
                if (_DAT_01c56ecc != 0) {
                  uVar8 = core_fldnotes_cpp_FUN_004bde20(g_CFieldNotesPtr);
                  switch(uVar8) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Field notes entry '%s' is not a task");
                    return iVar4;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_004a2582_caseD_2;
                  default:
                    iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Field notes entry '%s' not found");
                    return iVar4;
                  }
                }
                core_fldnotes_cpp_FUN_004bdfa0(g_CFieldNotesPtr);
              }
              else {
                iVar4 = _strnicmp
                                  ((char *)param_2,"createExplosion",0xf);
                if ((iVar4 == 0) && (((&DAT_00626114)[(byte)((char)param_2[0xf] + 1)] & 0xe0) == 0))
                {
                  local_158 = param_2 + 0xf;
                  while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                    local_158 = local_158 + 1;
                  }
                  local_130 = -1;
                  sscanf((char *)local_158,"( %f , %n");
                  if (local_130 < 0) {
                    iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Error parsing createExplosion() parms");
                    return iVar4;
                  }
                  local_158 = local_158 + local_130;
                  local_130 = -1;
                  sscanf((char *)local_158,"%f , %f , %f %n");
                  if ((local_130 < 0) &&
                     (sscanf((char *)local_158," %[^,)] %n"),
                     -1 < local_130)) {
                    uVar12 = 0xffffffff;
                    pcVar6 = local_eed + 1;
                    do {
                      if (uVar12 == 0) break;
                      uVar12 = uVar12 - 1;
                      cVar2 = *pcVar6;
                      pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                    } while (cVar2 != '\0');
                    SVar13 = ~uVar12 - 1;
                    if (0 < (int)SVar13) {
                      pcVar6 = local_eed + ~uVar12;
                      do {
                        if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                        SVar13 = SVar13 - 1;
                        pcVar6 = pcVar6 + -1;
                      } while (0 < (int)SVar13);
                    }
                    (local_eed + 1)[SVar13] = '\0';
                    while (((&DAT_00626114)[(byte)(local_eed[1] + 1)] & 2) != 0) {
                      memmove(local_eed + 1,local_eed + 2,SVar13);
                      SVar13 = SVar13 - 1;
                    }
                    uVar12 = core_event_cpp_resolveActorByName_FUN_004a1370
                                       (local_eed + 1,g_CDemonActorClassInfo.name_hash);
                    if (uVar12 == 0) {
                      return 0;
                    }
                    if (uVar12 == 0x0FFFFFFF) {
                      local_15c = 0;
                    }
                    else if (&local_17c != (CVector3f *)(uVar12 + 0x20)) {
                      local_17c._0_4_ = *(uint *)(uVar12 + 0x20);
                      local_17c._4_4_ = *(uint *)(uVar12 + 0x24);
                      local_17c._8_4_ = *(uint *)(uVar12 + 0x28);
                    }
                  }
                  if (local_130 < 0) {
                    iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Error parsing createExplosion() parms");
                    return iVar4;
                  }
                  local_158 = local_158 + local_130;
                  while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                    local_158 = local_158 + 1;
                  }
                  local_12c = 4.0;
                  if (*local_158 == (CEventList)0x2c) {
                    local_130 = -1;
                    sscanf((char *)local_158,", %f %n");
                    if (local_130 < 0) {
                      iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                        ("Error parsing createExplosion() parms");
                      return iVar4;
                    }
                    local_158 = local_158 + local_130;
                    while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                      local_158 = local_158 + 1;
                    }
                  }
                  if (*local_158 != (CEventList)0x29) {
                    iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                      ("Error parsing createExplosion() parms, expected matching ')'");
                    return iVar4;
                  }
                  local_158 = local_158 + 1;
                  if (local_15c != 0) {
                    core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
                              (0x01C57074,&local_17c,local_44,1500.0,local_12c);
                  }
                }
                else {
                  iVar4 = _strnicmp
                                    ((char *)param_2,"deleteActor",0xb);
                  if ((iVar4 == 0) &&
                     (((&DAT_00626114)[(byte)((char)param_2[0xb] + 1)] & 0xe0) == 0)) {
                    local_158 = param_2 + 0xb;
                    while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                      local_158 = local_158 + 1;
                    }
                    pcVar6 = (char *)core_event_cpp_FUN_004a1630(&local_158,local_1dc4,200);
                    if (pcVar6 != (char *)0x0) goto LAB_004a2140;
                    uVar12 = core_event_cpp_resolveActorByName_FUN_004a1370
                                       (local_1dc4,g_CDemonActorClassInfo.name_hash);
                    if (uVar12 == 0) {
                      if (_DAT_01c56ecc != 0) {
                        return 0;
                      }
                      local_15c = 0;
                    }
                    if ((uVar12 != 0x0FFFFFFF) && (local_15c != 0)) {
                      *(uint *)(uVar12 + 0x70) = 2;
                      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(uVar12);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x2d4) = 0;
                        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(iVar4 + 0x2fc));
                      }
                      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(uVar12);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x1b4) = 0;
                        *(byte *)(iVar4 + 0x21c) = 0;
                        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(iVar4 + 0x280));
                      }
                    }
                  }
                  else {
                    iVar4 = _strnicmp
                                      ((char *)param_2,"displayBitmap",0xd);
                    if ((iVar4 == 0) &&
                       (((&DAT_00626114)[(byte)((char)param_2[0xd] + 1)] & 0xe0) == 0)) {
                      local_158 = param_2 + 0xd;
                      while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                        local_158 = local_158 + 1;
                      }
                      local_120 = -1;
                      sscanf((char *)local_158,"( %[^ ,] , %d , %d%n");
                      if (local_120 < 0) {
                        iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                          ("Error parsing displayBitmap() parms");
                        return iVar4;
                      }
                      local_158 = local_158 + local_120;
                      while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                        local_158 = local_158 + 1;
                      }
                      local_11c = 0;
                      pCVar17 = local_158;
                      if (*local_158 == (CEventList)0x2c) {
                        local_120 = -1;
                        sscanf((char *)local_158,", %f %n");
                        if (local_120 < 1) {
                          FUN_005bfb40
                                    (&DAT_01c56ed0,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pCVar17 = local_158 + local_120;
                        while (((&DAT_00626114)[(byte)((char)*pCVar17 + 1)] & 2) != 0) {
                          pCVar17 = pCVar17 + 1;
                        }
                      }
                      do {
                        local_158 = pCVar17;
                        pCVar17 = local_158 + 1;
                      } while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0);
                      if (*local_158 != (CEventList)0x29) {
                        FUN_005bfb40
                                  (&DAT_01c56ed0,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_158 = local_158 + 1;
                      iVar4 = engine_dosio_cpp_getFileSize_FUN_00478fb0(&DAT_005dd2ad,local_268c);
                      if (iVar4 < 0) {
                        iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                          ("Bitmap doesn't exist");
                        return iVar4;
                      }
                      if (iVar4 != local_128 * local_124) {
                        iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                          ("Bitmap file size does not match specified dimensions");
                        return iVar4;
                      }
                      if (local_15c != 0) {
                        core_game_cpp_FUN_004d7730(g_CGamePtr,local_268c,local_128,local_124);
                      }
                    }
                    else {
                      iVar4 = _strnicmp
                                        ((char *)param_2,"displayFieldNotes",0x11);
                      if ((iVar4 == 0) &&
                         (((&DAT_00626114)[(byte)((char)param_2[0x11] + 1)] & 0xe0) == 0)) {
                        local_158 = param_2 + 0x11;
                        while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                          local_158 = local_158 + 1;
                        }
                        local_118 = -1;
                        sscanf((char *)local_158,"(%[^)])%n");
                        if (local_118 < 5) {
                          FUN_005bfb40
                                    (&DAT_01c56ed0,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_158 = local_158 + local_118;
                        uVar12 = 0xffffffff;
                        pcVar6 = local_bcd + 1;
                        do {
                          if (uVar12 == 0) break;
                          uVar12 = uVar12 - 1;
                          cVar2 = *pcVar6;
                          pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                        } while (cVar2 != '\0');
                        SVar13 = ~uVar12 - 1;
                        if (0 < (int)SVar13) {
                          pcVar6 = local_bcd + ~uVar12;
                          do {
                            if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                            SVar13 = SVar13 - 1;
                            pcVar6 = pcVar6 + -1;
                          } while (0 < (int)SVar13);
                        }
                        (local_bcd + 1)[SVar13] = '\0';
                        while (((&DAT_00626114)[(byte)(local_bcd[1] + 1)] & 2) != 0) {
                          memmove(local_bcd + 1,local_bcd + 2,SVar13);
                          SVar13 = SVar13 - 1;
                        }
                        if (local_15c == 0) {
                          pcVar6 = core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                             (param_1,local_bcd + 1);
                          if (pcVar6 != (char *)0x0) {
                            return 0;
                          }
                        }
                        else {
                          iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                            (0x01C51D80,local_bcd + 1);
                          *(int *)&g_CFieldNotesPtr->field_0x40 = iVar4;
                        }
                      }
                      else {
                        iVar4 = _strnicmp
                                          ((char *)param_2,"dropItem",8);
                        if ((iVar4 == 0) &&
                           (((&DAT_00626114)[(byte)((char)param_2[8] + 1)] & 0xe0) == 0)) {
                          local_158 = param_2 + 8;
                          while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                            local_158 = local_158 + 1;
                          }
                          local_114 = -1;
                          sscanf((char *)local_158,"( %[^,],%n");
                          if (local_114 < 0) {
                            iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                              ("Error parsing dropItem() parms");
                            return iVar4;
                          }
                          local_158 = local_158 + local_114;
                          uVar12 = 0xffffffff;
                          pcVar6 = local_1465 + 1;
                          do {
                            if (uVar12 == 0) break;
                            uVar12 = uVar12 - 1;
                            cVar2 = *pcVar6;
                            pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                          } while (cVar2 != '\0');
                          SVar13 = ~uVar12 - 1;
                          if (0 < (int)SVar13) {
                            pcVar6 = local_1465 + ~uVar12;
                            do {
                              if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                              SVar13 = SVar13 - 1;
                              pcVar6 = pcVar6 + -1;
                            } while (0 < (int)SVar13);
                          }
                          (local_1465 + 1)[SVar13] = '\0';
                          while (((&DAT_00626114)[(byte)(local_1465[1] + 1)] & 2) != 0) {
                            memmove(local_1465 + 1,local_1465 + 2,SVar13);
                            SVar13 = SVar13 - 1;
                          }
                          local_110 = core_event_cpp_resolveActorByName_FUN_004a1370
                                                (local_1465 + 1,g_CCharacterClassInfo.name_hash);
                          if (local_110 == 0) {
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
                              iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                ("Error parsing dropItem() parms");
                              return iVar4;
                            }
                            uVar12 = 0xffffffff;
                            pcVar6 = local_1785 + 1;
                            do {
                              if (uVar12 == 0) break;
                              uVar12 = uVar12 - 1;
                              cVar2 = *pcVar6;
                              pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                            } while (cVar2 != '\0');
                            SVar13 = ~uVar12 - 1;
                            if (0 < (int)SVar13) {
                              pcVar6 = local_1785 + ~uVar12;
                              do {
                                if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                SVar13 = SVar13 - 1;
                                pcVar6 = pcVar6 + -1;
                              } while (0 < (int)SVar13);
                            }
                            (local_1785 + 1)[SVar13] = '\0';
                            while (((&DAT_00626114)[(byte)(local_1785[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_1785 + 1,local_1785 + 2,SVar13);
                              SVar13 = SVar13 - 1;
                            }
                            local_10c = -1;
                            iVar4 = local_10c;
                            if (local_110 != 0x0FFFFFFF) {
                              iVar5 = 0;
                              uVar12 = local_110;
                              do {
                                if ((*(char **)(uVar12 + 0x25b0) != (char *)0x0) &&
                                   (iVar15 = _stricmp
                                                       (*(char **)(uVar12 + 0x25b0),local_1785 + 1),
                                   iVar4 = iVar5, iVar15 == 0)) break;
                                iVar5 = iVar5 + 1;
                                uVar12 = uVar12 + 0x78;
                                iVar4 = local_10c;
                              } while (iVar5 < 2);
                            }
                          }
                          else if ((local_10c < 0) || (iVar4 = local_10c, 1 < local_10c)) {
                            iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                              ("Invalid hand index: %d");
                            return iVar4;
                          }
                          local_10c = iVar4;
                          local_158 = local_158 + local_114;
                          if ((local_110 != 0x0FFFFFFF) &&
                             (*(int *)(local_10c * 0x78 + local_110 + 0x25a8) < 0)) {
                            iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                              ("%s doesn't have hand %d");
                            return iVar4;
                          }
                          if ((local_15c != 0) && (-1 < local_10c)) {
                            (**(code **)(*(int *)(local_110 + 0x154) + 0x128))(local_110,local_10c);
                          }
                        }
                        else {
                          iVar4 = _strnicmp
                                            ((char *)param_2,"enableFieldNotesEntry",0x15);
                          if ((iVar4 == 0) &&
                             (((&DAT_00626114)[(byte)((char)param_2[0x15] + 1)] & 0xe0) == 0)) {
                            local_158 = param_2 + 0x15;
                            while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                              local_158 = local_158 + 1;
                            }
                            local_108 = -1;
                            sscanf((char *)local_158,"(%[^)])%n");
                            if (local_108 < 3) {
                              iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                ("Error parsing enableFieldNotesEntry command");
                              return iVar4;
                            }
                            local_158 = local_158 + local_108;
                            uVar12 = 0xffffffff;
                            pcVar6 = local_258d + 1;
                            do {
                              if (uVar12 == 0) break;
                              uVar12 = uVar12 - 1;
                              cVar2 = *pcVar6;
                              pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                            } while (cVar2 != '\0');
                            SVar13 = ~uVar12 - 1;
                            if (0 < (int)SVar13) {
                              pcVar6 = local_258d + ~uVar12;
                              do {
                                if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                SVar13 = SVar13 - 1;
                                pcVar6 = pcVar6 + -1;
                              } while (0 < (int)SVar13);
                            }
                            (local_258d + 1)[SVar13] = '\0';
                            while (((&DAT_00626114)[(byte)(local_258d[1] + 1)] & 2) != 0) {
                              memmove
                                        (local_258d + 1,local_258d + 2,SVar13);
                              SVar13 = SVar13 - 1;
                            }
                            if (_DAT_01c56ecc != 0) {
                              uVar8 = core_fldnotes_cpp_FUN_004bde20(g_CFieldNotesPtr);
                              switch(uVar8) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_004a2582_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                  ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                return iVar4;
                              default:
                                iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                  ("Field notes entry '%s' not found");
                                return iVar4;
                              }
                            }
                            core_fldnotes_cpp_FUN_004bdd00(g_CFieldNotesPtr);
                          }
                          else {
                            iVar4 = _strnicmp
                                              ((char *)param_2,"enableFieldNotesAnnotation",
                                               0x1a);
                            if ((iVar4 == 0) &&
                               (((&DAT_00626114)[(byte)((char)param_2[0x1a] + 1)] & 0xe0) == 0)) {
                              local_158 = param_2 + 0x1a;
                              while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                                local_158 = local_158 + 1;
                              }
                              local_104 = -1;
                              sscanf((char *)local_158,"(%[^,], %[^)])%n");
                              if (local_104 < 4) {
                                iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                  ("Error parsing enableFieldNotesAnnotation command");
                                return iVar4;
                              }
                              local_158 = local_158 + local_104;
                              uVar12 = 0xffffffff;
                              pcVar6 = local_298d + 1;
                              do {
                                if (uVar12 == 0) break;
                                uVar12 = uVar12 - 1;
                                cVar2 = *pcVar6;
                                pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar13 = ~uVar12 - 1;
                              if (0 < (int)SVar13) {
                                pcVar6 = local_298d + ~uVar12;
                                do {
                                  if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                  SVar13 = SVar13 - 1;
                                  pcVar6 = pcVar6 + -1;
                                } while (0 < (int)SVar13);
                              }
                              (local_298d + 1)[SVar13] = '\0';
                              while (((&DAT_00626114)[(byte)(local_298d[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_298d + 1,local_298d + 2,SVar13);
                                SVar13 = SVar13 - 1;
                              }
                              uVar12 = 0xffffffff;
                              pcVar6 = local_288d + 1;
                              do {
                                if (uVar12 == 0) break;
                                uVar12 = uVar12 - 1;
                                cVar2 = *pcVar6;
                                pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                              } while (cVar2 != '\0');
                              SVar13 = ~uVar12 - 1;
                              if (0 < (int)SVar13) {
                                pcVar6 = local_288d + ~uVar12;
                                do {
                                  if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                  SVar13 = SVar13 - 1;
                                  pcVar6 = pcVar6 + -1;
                                } while (0 < (int)SVar13);
                              }
                              (local_288d + 1)[SVar13] = '\0';
                              while (((&DAT_00626114)[(byte)(local_288d[1] + 1)] & 2) != 0) {
                                memmove
                                          (local_288d + 1,local_288d + 2,SVar13);
                                SVar13 = SVar13 - 1;
                              }
                              if (_DAT_01c56ecc != 0) {
                                uVar8 = core_fldnotes_cpp_FUN_004bde20(g_CFieldNotesPtr);
                                switch(uVar8) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_004a2582_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                    ("Field notes entry '%s' is a task (use addFieldNotesTask for this)");
                                  return iVar4;
                                default:
                                  iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                    ("Field notes entry '%s' not found");
                                  return iVar4;
                                }
                              }
                              iVar4 = core_fldnotes_cpp_FUN_004bdbf0
                                                (g_CFieldNotesPtr,local_288d + 1,local_298d + 1);
                              if (iVar4 == 0) {
                                iVar4 = core_event_cpp_formatEventError_FUN_004a1210(local_278c);
                                return iVar4;
                              }
                            }
                            else {
                              iVar4 = _strnicmp
                                                ((char *)param_2,"fadeAmbientSound",0x10);
                              if ((iVar4 == 0) &&
                                 (((&DAT_00626114)[(byte)((char)param_2[0x10] + 1)] & 0xe0) == 0)) {
                                local_158 = param_2 + 0x10;
                                while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                                  local_158 = local_158 + 1;
                                }
                                local_f8 = -1;
                                sscanf((char *)local_158,"(%f, %f )%n");
                                if (local_f8 < 0) {
                                  FUN_005bfb40
                                            (&DAT_01c56ed0,"Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_158 = local_158 + local_f8;
                                if (local_15c != 0) {
                                  core_sound_cpp_CSound_setVolumeFade_FUN_0057dc00
                                            (0x02C82A60,local_100,local_fc);
                                }
                              }
                              else {
                                iVar4 = _strnicmp
                                                  ((char *)param_2,"fadeSfx",7);
                                if ((iVar4 == 0) &&
                                   (((&DAT_00626114)[(byte)((char)param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_158 = param_2 + 7;
                                  while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
                                    local_158 = local_158 + 1;
                                  }
                                  local_ec = -1;
                                  sscanf
                                            ((char *)local_158,"(%[^,], %f, %f )%n");
                                  if (local_ec < 0) {
                                    FUN_005bfb40
                                              (&DAT_01c56ed0,"Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_158 = local_158 + local_ec;
                                  uVar12 = 0xffffffff;
                                  pcVar6 = local_8ad + 1;
                                  do {
                                    if (uVar12 == 0) break;
                                    uVar12 = uVar12 - 1;
                                    cVar2 = *pcVar6;
                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                  } while (cVar2 != '\0');
                                  SVar13 = ~uVar12 - 1;
                                  if (0 < (int)SVar13) {
                                    pcVar6 = local_8ad + ~uVar12;
                                    do {
                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
                                      SVar13 = SVar13 - 1;
                                      pcVar6 = pcVar6 + -1;
                                    } while (0 < (int)SVar13);
                                  }
                                  (local_8ad + 1)[SVar13] = '\0';
                                  while (((&DAT_00626114)[(byte)(local_8ad[1] + 1)] & 2) != 0) {
                                    memmove
                                              (local_8ad + 1,local_8ad + 2,SVar13);
                                    SVar13 = SVar13 - 1;
                                  }
                                  if (local_15c != 0) {
                                    uVar12 = core_event_cpp_CEventList_getSfxHandle_FUN_004aa290
                                                       (param_1,local_8ad + 1);
                                    if (local_f0 <= 0.0) {
                                      sound_sndmain_cpp_FUN_00573950(uVar12);
                                    }
                                    else {
                                      sound_sndmain_cpp_FUN_00573ab0(uVar12,local_f4,local_f0,0);
                                    }
                                  }
                                }
                                else {
                                  iVar4 = _strnicmp
                                                    ((char *)param_2,"flagOn",6);
                                  if ((iVar4 == 0) &&
                                     (((&DAT_00626114)[(byte)((char)param_2[6] + 1)] & 0xe0) == 0))
                                  {
                                    local_158 = param_2 + 6;
                                    while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0)
                                    {
                                      local_158 = local_158 + 1;
                                    }
                                    pcVar6 = (char *)core_event_cpp_FUN_004a1630
                                                               (&local_158,local_1fc,0x20);
                                    if (pcVar6 != (char *)0x0) {
LAB_004a2140:
                                      pcVar19 = &DAT_01c56ed0;
                                      do {
                                        cVar2 = *pcVar6;
                                        *pcVar19 = cVar2;
                                        if (cVar2 == '\0') {
                                          return 0;
                                        }
                                        cVar2 = pcVar6[1];
                                        pcVar6 = pcVar6 + 2;
                                        pcVar19[1] = cVar2;
                                        pcVar19 = pcVar19 + 2;
                                      } while (cVar2 != '\0');
                                      return 0;
                                    }
                                    if (local_15c != 0) {
                                      core_event_cpp_FUN_004a9870(param_1,local_1fc);
                                    }
                                  }
                                  else {
                                    iVar4 = _strnicmp
                                                      ((char *)param_2,"flagOff",7);
                                    if ((iVar4 == 0) &&
                                       (((&DAT_00626114)[(byte)((char)param_2[7] + 1)] & 0xe0) == 0)
                                       ) {
                                      local_158 = param_2 + 7;
                                      while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) !=
                                             0) {
                                        local_158 = local_158 + 1;
                                      }
                                      pcVar6 = (char *)core_event_cpp_FUN_004a1630
                                                                 (&local_158,local_23c,0x20);
                                      if (pcVar6 != (char *)0x0) goto LAB_004a2140;
                                      if (local_15c != 0) {
                                        core_event_cpp_FUN_004a9870(param_1,local_23c);
                                      }
                                    }
                                    else {
                                      iVar4 = _strnicmp
                                                        ((char *)param_2,"gameFlagOn",10);
                                      if ((iVar4 == 0) &&
                                         (((&DAT_00626114)[(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                          0)) {
                                        local_158 = param_2 + 10;
                                        while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2)
                                               != 0) {
                                          local_158 = local_158 + 1;
                                        }
                                        pcVar6 = (char *)core_event_cpp_FUN_004a1630
                                                                   (&local_158,local_1dc,0x20);
                                        if (pcVar6 != (char *)0x0) goto LAB_004a2140;
                                        if (local_15c != 0) {
                                          core_event_cpp_FUN_004a9a60(param_1,local_1dc);
                                        }
                                      }
                                      else {
                                        iVar4 = _strnicmp
                                                          ((char *)param_2,"gameFlagOff",
                                                           0xb);
                                        if ((iVar4 == 0) &&
                                           (((&DAT_00626114)[(byte)((char)param_2[0xb] + 1)] & 0xe0)
                                            == 0)) {
                                          local_158 = param_2 + 0xb;
                                          while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2)
                                                 != 0) {
                                            local_158 = local_158 + 1;
                                          }
                                          pcVar6 = (char *)core_event_cpp_FUN_004a1630
                                                                     (&local_158,local_21c,0x20);
                                          if (pcVar6 != (char *)0x0) goto LAB_004a2140;
                                          if (local_15c != 0) {
                                            core_event_cpp_FUN_004a9a60(param_1,local_21c);
                                          }
                                        }
                                        else {
                                          iVar4 = _strnicmp
                                                            ((char *)param_2,
                                                             "hurtCharacter",0xd);
                                          if ((iVar4 == 0) &&
                                             (((&DAT_00626114)[(byte)((char)param_2[0xd] + 1)] &
                                              0xe0) == 0)) {
                                            local_158 = param_2 + 0xd;
                                            while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] &
                                                   2) != 0) {
                                              local_158 = local_158 + 1;
                                            }
                                            local_e8 = -1;
                                            sscanf
                                                      ((char *)local_158," ( %[^,], %[^,],%f)%n");
                                            if (local_e8 < 2) {
                                              iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                                ("Syntax error in killHero() parms"
                                                                );
                                              return iVar4;
                                            }
                                            uVar12 = 0xffffffff;
                                            pcVar6 = local_1915 + 1;
                                            do {
                                              if (uVar12 == 0) break;
                                              uVar12 = uVar12 - 1;
                                              cVar2 = *pcVar6;
                                              pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                            } while (cVar2 != '\0');
                                            SVar13 = ~uVar12 - 1;
                                            if (0 < (int)SVar13) {
                                              pcVar6 = local_1915 + ~uVar12;
                                              do {
                                                if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) ==
                                                    0) break;
                                                SVar13 = SVar13 - 1;
                                                pcVar6 = pcVar6 + -1;
                                              } while (0 < (int)SVar13);
                                            }
                                            (local_1915 + 1)[SVar13] = '\0';
                                            while (((&DAT_00626114)[(byte)(local_1915[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_1915 + 1,local_1915 + 2,SVar13);
                                              SVar13 = SVar13 - 1;
                                            }
                                            uVar12 = 0xffffffff;
                                            pcVar6 = local_3fd + 1;
                                            do {
                                              if (uVar12 == 0) break;
                                              uVar12 = uVar12 - 1;
                                              cVar2 = *pcVar6;
                                              pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                            } while (cVar2 != '\0');
                                            SVar13 = ~uVar12 - 1;
                                            if (0 < (int)SVar13) {
                                              pcVar6 = local_3fd + ~uVar12;
                                              do {
                                                if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2) ==
                                                    0) break;
                                                SVar13 = SVar13 - 1;
                                                pcVar6 = pcVar6 + -1;
                                              } while (0 < (int)SVar13);
                                            }
                                            (local_3fd + 1)[SVar13] = '\0';
                                            while (((&DAT_00626114)[(byte)(local_3fd[1] + 1)] & 2)
                                                   != 0) {
                                              memmove
                                                        (local_3fd + 1,local_3fd + 2,SVar13);
                                              SVar13 = SVar13 - 1;
                                            }
                                            local_158 = local_158 + local_e8;
                                            while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] &
                                                   2) != 0) {
                                              local_158 = local_158 + 1;
                                            }
                                            uVar12 = core_event_cpp_resolveActorByName_FUN_004a1370
                                                               (local_1915 + 1,
                                                                g_CCharacterClassInfo.name_hash);
                                            if (uVar12 == 0) {
                                              return 0;
                                            }
                                            if (uVar12 == 0x0FFFFFFF) {
                                              local_15c = 0;
                                            }
                                            iVar4 = core_event_cpp_parseDamageType_FUN_004a18e0
                                                              (local_3fd + 1,&local_e0);
                                            if (iVar4 == 0) {
                                              iVar4 = core_event_cpp_formatEventError_FUN_004a1210
                                                                ("Unknown damage type \"%s\" in hurtCharacter command."
                                                                );
                                              return iVar4;
                                            }
                                            if (local_15c != 0) {
                                              (**(code **)(*(int *)(uVar12 + 0x154) + 0xd8))
                                                        (uVar12,local_e0);
                                            }
                                          }
                                          else {
                                            iVar4 = _strnicmp
                                                              ((char *)param_2,"incCounter"
                                                               ,10);
                                            if ((iVar4 == 0) &&
                                               (((&DAT_00626114)[(byte)((char)param_2[10] + 1)] &
                                                0xe0) == 0)) {
                                              local_158 = param_2 + 10;
                                              while (((&DAT_00626114)[(byte)((char)*local_158 + 1)]
                                                     & 2) != 0) {
                                                local_158 = local_158 + 1;
                                              }
                                              local_dc = -1;
                                              sscanf
                                                        ((char *)local_158,"( %[^ )] )%n");
                                              if (local_dc < 5) {
                                                FUN_005bfb40
                                                          (&DAT_01c56ed0,
                                                           "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_158 = local_158 + local_dc;
                                              uVar12 = 0xffffffff;
                                              pcVar6 = local_d5d + 1;
                                              do {
                                                if (uVar12 == 0) break;
                                                uVar12 = uVar12 - 1;
                                                cVar2 = *pcVar6;
                                                pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                              } while (cVar2 != '\0');
                                              SVar13 = ~uVar12 - 1;
                                              if (0 < (int)SVar13) {
                                                pcVar6 = local_d5d + ~uVar12;
                                                do {
                                                  if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2)
                                                      == 0) break;
                                                  SVar13 = SVar13 - 1;
                                                  pcVar6 = pcVar6 + -1;
                                                } while (0 < (int)SVar13);
                                              }
                                              (local_d5d + 1)[SVar13] = '\0';
                                              while (((&DAT_00626114)[(byte)(local_d5d[1] + 1)] & 2)
                                                     != 0) {
                                                memmove
                                                          (local_d5d + 1,local_d5d + 2,SVar13);
                                                SVar13 = SVar13 - 1;
                                              }
                                              if (local_15c != 0) {
                                                iVar4 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_004a9e80
                                                            (param_1,local_d5d + 1);
                                                core_event_cpp_CEventList_setCounter_FUN_004a9d70
                                                          (param_1,local_d5d + 1,iVar4 + 1);
                                              }
                                            }
                                            else {
                                              iVar4 = _strnicmp
                                                                ((char *)param_2,
                                                                 "decCounter",10);
                                              if ((iVar4 == 0) &&
                                                 (((&DAT_00626114)[(byte)((char)param_2[10] + 1)] &
                                                  0xe0) == 0)) {
                                                local_158 = param_2 + 10;
                                                while (((&DAT_00626114)
                                                        [(byte)((char)*local_158 + 1)] & 2) != 0) {
                                                  local_158 = local_158 + 1;
                                                }
                                                local_d8 = -1;
                                                sscanf
                                                          ((char *)local_158,"( %[^ )] )%n");
                                                if (local_d8 < 5) {
                                                  FUN_005bfb40
                                                            (&DAT_01c56ed0,
                                                             "Error parsing decCounter arguments");
                                                  return 0;
                                                }
                                                local_158 = local_158 + local_d8;
                                                uVar12 = 0xffffffff;
                                                pcVar6 = local_1c35 + 1;
                                                do {
                                                  if (uVar12 == 0) break;
                                                  uVar12 = uVar12 - 1;
                                                  cVar2 = *pcVar6;
                                                  pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                } while (cVar2 != '\0');
                                                SVar13 = ~uVar12 - 1;
                                                if (0 < (int)SVar13) {
                                                  pcVar6 = local_1c35 + ~uVar12;
                                                  do {
                                                    if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] & 2
                                                        ) == 0) break;
                                                    SVar13 = SVar13 - 1;
                                                    pcVar6 = pcVar6 + -1;
                                                  } while (0 < (int)SVar13);
                                                }
                                                (local_1c35 + 1)[SVar13] = '\0';
                                                while (((&DAT_00626114)[(byte)(local_1c35[1] + 1)] &
                                                       2) != 0) {
                                                  memmove
                                                            (local_1c35 + 1,local_1c35 + 2,SVar13);
                                                  SVar13 = SVar13 - 1;
                                                }
                                                if (local_15c != 0) {
                                                  iVar4 = 
                                                  core_event_cpp_CEventList_getCounterValue_FUN_004a9e80
                                                            (param_1,local_1c35 + 1);
                                                  core_event_cpp_CEventList_setCounter_FUN_004a9d70
                                                            (param_1,local_1c35 + 1,iVar4 + -1);
                                                }
                                              }
                                              else {
                                                iVar4 = _strnicmp
                                                                  ((char *)param_2,
                                                                   "killCharacter",0xd);
                                                if ((iVar4 == 0) &&
                                                   (((&DAT_00626114)[(byte)((char)param_2[0xd] + 1)]
                                                    & 0xe0) == 0)) {
                                                  local_158 = param_2 + 0xd;
                                                  while (((&DAT_00626114)
                                                          [(byte)((char)*local_158 + 1)] & 2) != 0)
                                                  {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  local_d0 = local_1a0;
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
                                                    local_d0 = (byte *)0x0;
                                                    sscanf
                                                              ((char *)local_158," ( %[^,], %[^)])%n");
                                                  }
                                                  if (local_d4 < 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Syntax error in killCharacter() parms");
                                                  return iVar4;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_4c5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_4c5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_4c5 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_4c5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_4c5 + 1,local_4c5 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_399 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_399 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_399 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_399[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_399 + 1,local_399 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  local_158 = local_158 + local_d4;
                                                  while (((&DAT_00626114)
                                                          [(byte)((char)*local_158 + 1)] & 2) != 0)
                                                  {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  uVar12 = 
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_4c5 + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (uVar12 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar12 == 0x0FFFFFFF) {
                                                    local_15c = 0;
                                                  }
                                                  iVar4 = core_event_cpp_parseDeathType_FUN_004a1750
                                                                    (local_399 + 1,&local_c8);
                                                  if (iVar4 == 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Unknown death type \"%s\" in killCharacter command.");
                                                  return iVar4;
                                                  }
                                                  if (local_15c != 0) {
                                                    (**(code **)(*(int *)(uVar12 + 0x154) + 0xdc))
                                                              (uVar12,local_c8,local_d0);
                                                  }
                                                }
                                                else {
                                                  iVar4 = _strnicmp
                                                                    ((char *)param_2,
                                                                     "killHero",8);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)((char)param_2[8] + 1)]
                                                      & 0xe0) == 0)) {
                                                    local_158 = param_2 + 8;
                                                    while (((&DAT_00626114)
                                                            [(byte)((char)*local_158 + 1)] & 2) != 0
                                                          ) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    if (*(int *)g_CNetGamePtr != 0) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Can't use killHero command in multi-player");
                                                  return iVar4;
                                                  }
                                                  local_c4 = -1;
                                                  sscanf
                                                            ((char *)local_158," ( %[^)])%n");
                                                  if (local_c4 < 2) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Syntax error in killHero() parms");
                                                  return iVar4;
                                                  }
                                                  local_158 = local_158 + local_c4;
                                                  while (((&DAT_00626114)
                                                          [(byte)((char)*local_158 + 1)] & 2) != 0)
                                                  {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  iVar4 = core_event_cpp_parseDeathType_FUN_004a1750
                                                                    (local_334,&local_c0);
                                                  if (iVar4 == 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Unknown death type \"%s\" in killHero command.");
                                                  return iVar4;
                                                  }
                                                  if ((local_15c != 0) &&
                                                     (iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4
                                                                      ), iVar4 != 0)) {
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xdc))
                                                              (iVar4,local_c0,0);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "killSfx",7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[7] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_158 = param_2 + 7;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_bc = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,)]%n");
                                                      if (local_bc < 3) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_bc;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_19dd + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_19dd + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_19dd + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_19dd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_19dd + 1,local_19dd + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  local_b8 = 0.0;
                                                  pCVar17 = local_158;
                                                  if (*local_158 == (CEventList)0x2c) {
                                                    local_bc = -1;
                                                    sscanf
                                                              ((char *)local_158,",%f%n");
                                                    if (local_bc < 3) {
                                                      FUN_005bfb40
                                                                (&DAT_01c56ed0,
                                                                 "Error parsing killSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    pCVar17 = local_158 + local_bc;
                                                  }
                                                  do {
                                                    local_158 = pCVar17;
                                                    pCVar17 = local_158 + 1;
                                                  } while (((&DAT_00626114)
                                                            [(byte)((char)*local_158 + 1)] & 2) != 0
                                                          );
                                                  if (*local_158 != (CEventList)0x29) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "Can't find matching ) in killSfx command");
                                                    return 0;
                                                  }
                                                  local_158 = pCVar17;
                                                  if (local_15c != 0) {
                                                    uVar12 = 
                                                  core_event_cpp_CEventList_getSfxHandle_FUN_004aa290
                                                            (param_1,local_19dd + 1);
                                                  if (local_b8 <= 0.0) {
                                                    sound_sndmain_cpp_killSfx_FUN_00573a80(uVar12);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400
                                                            (param_1);
                                                  }
                                                  else {
                                                    sound_sndmain_cpp_FUN_00573ab0
                                                              (uVar12,0.0,local_b8,1);
                                                                                                        
                                                  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400
                                                            (param_1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "lightning",9);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[9] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_158 = param_2 + 9;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_b4 = -1;
                                                      sscanf
                                                                ((char *)local_158,"( )%n");
                                                      if (local_b4 < 2) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
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
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "playSfx",7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[7] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_158 = param_2 + 7;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_b0 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,)]%n");
                                                      if (local_b0 < 3) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_b0;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_7e5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_7e5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_7e5 + 1)[SVar13] = '\0';
                                                  while (pCVar17 = local_158,
                                                        ((&DAT_00626114)[(byte)(local_7e5[1] + 1)] &
                                                        2) != 0) {
                                                    memmove
                                                              (local_7e5 + 1,local_7e5 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  puVar18 = &DAT_0061b568;
                                                  puVar20 = (uint *)((int)local_a3d + 1);
                                                  for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1)
                                                  {
                                                    *puVar20 = *puVar18;
                                                    puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
                                                    puVar20 = puVar20 + (uint)bVar21 * -2 + 1;
                                                  }
                                                  pCVar16 = local_158;
                                                  if (*pCVar17 == (CEventList)0x2c) {
                                                    local_b0 = -1;
                                                    sscanf
                                                              ((char *)local_158,",%[^)]%n");
                                                    if (local_b0 < 3) {
                                                      FUN_005bfb40
                                                                (&DAT_01c56ed0,
                                                                 "Error parsing playSfx parms"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_b0;
                                                    uVar12 = 0xffffffff;
                                                    pcVar6 = (char *)((int)local_a3d + 1);
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar6;
                                                      pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    SVar13 = ~uVar12 - 1;
                                                    if (0 < (int)SVar13) {
                                                      pcVar6 = local_a3d + ~uVar12;
                                                      do {
                                                        if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)]
                                                            & 2) == 0) break;
                                                        SVar13 = SVar13 - 1;
                                                        pcVar6 = pcVar6 + -1;
                                                      } while (0 < (int)SVar13);
                                                    }
                                                    *(byte *)((int)local_a3d + 1U + SVar13) =
                                                         0;
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_a3d[1] + 1)] & 2) != 0) {
                                                      memmove
                                                                ((void *)((int)local_a3d + 1U),
                                                                 local_a3d + 2,SVar13);
                                                      SVar13 = SVar13 - 1;
                                                    }
                                                    uVar12 = 0xffffffff;
                                                    pcVar6 = (char *)((int)local_a3d + 1);
                                                    do {
                                                      if (uVar12 == 0) break;
                                                      uVar12 = uVar12 - 1;
                                                      cVar2 = *pcVar6;
                                                      pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                    } while (cVar2 != '\0');
                                                    pCVar16 = local_158;
                                                    if (0x13 < ~uVar12 - 1) {
                                                      FUN_005bfb40
                                                                (&DAT_01c56ed0,
                                                                 "handle name %s is too long, max %d chars"
                                                                 ,(int)local_a3d + 1,0x13);
                                                      return 0;
                                                    }
                                                  }
                                                  do {
                                                    local_158 = pCVar16;
                                                    pCVar16 = local_158 + 1;
                                                  } while (((&DAT_00626114)
                                                            [(byte)((char)*local_158 + 1)] & 2) != 0
                                                          );
                                                  if (*local_158 != (CEventList)0x29) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "Can't find matching ) in playSfx command");
                                                    return 0;
                                                  }
                                                  local_158 = pCVar16;
                                                  if (local_15c != 0) {
                                                    iVar4 = _strnicmp
                                                                      (local_7e5 + 1,&DAT_005dd96f,3
                                                                      );
                                                    if (iVar4 == 0) {
                                                      iVar4 = sound_sndmain_cpp_FUN_00573cd0(1);
                                                      if (iVar4 != 0) {
                                                        sound_sndmain_cpp_FUN_00572ac0();
                                                        sound_sndmain_cpp_FUN_00572980(1);
                                                        uVar12 = 
                                                  core_sound_cpp_CSound_playSound_FUN_0057d880
                                                            (0x02C82A60,param_1,local_7e5 + 1);
                                                  sound_sndmain_cpp_FUN_00572b40();
                                                  if (local_a3d[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_004aa2d0
                                                            (param_1,(char *)((int)local_a3d + 1),
                                                             uVar12);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar12 = 
                                                  core_sound_cpp_CSound_playSound_FUN_0057d880
                                                            (0x02C82A60,param_1,local_7e5 + 1);
                                                  if (local_a3d[1] != '\0') {
                                                                                                        
                                                  core_event_cpp_CEventList_setSfxHandle_FUN_004aa2d0
                                                            (param_1,(char *)((int)local_a3d + 1),
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
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[9] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_158 = param_2 + 9;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_ac = -1;
                                                      sscanf
                                                                ((char *)local_158,"( )%n");
                                                      if (local_ac < 2) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_ac;
                                                  if (local_15c != 0) {
                                                    core_gore_cpp_CGore_reset_FUN_004e5c00
                                                              (g_CGorePtr);
                                                    core_fire_cpp_CFireEffect_init_FUN_004b4b30
                                                              (0x01C57074);
                                                    local_a8 = *(uint *)0x01D2C900;
                                                    for (iVar4 = 0; this_ptr_00 = 0x01D2C900,
                                                        iVar4 < *(int *)(0x01D2C900 + 4);
                                                        iVar4 = iVar4 + 1) {
                                                      *(int *)0x01D2C900 = iVar4;
                                                                                                            
                                                  core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420
                                                            (this_ptr_00);
                                                  iVar5 = 0;
                                                  for (iVar15 = 0;
                                                      iVar15 < *(int *)&g_CDemonSetPtr->
                                                                        field_0x14d164;
                                                      iVar15 = iVar15 + 1) {
                                                    iVar7 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c600
                                                            (*(uint *)
                                                              (&g_CDemonSetPtr->field_0x14d168 +
                                                              iVar5));
                                                  if ((iVar7 != 0) && (*(int *)(iVar7 + 0x70) == 1))
                                                  {
                                                    *(uint *)(iVar7 + 0x70) = 2;
                                                  }
                                                  iVar5 = iVar5 + 4;
                                                  }
                                                  }
                                                  *(uint *)0x01D2C900 = local_a8;
                                                  core_mission_cpp_FUN_0051b7b0();
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setActorBool",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 0xc;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_a4 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,], %[^,], %[^)])%n");
                                                      if (local_a4 < 3) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setActorBool parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_a4;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_58d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_58d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_58d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_58d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_58d + 1,local_58d + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_e25 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_e25 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_e25 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_e25[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_e25 + 1,local_e25 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_139d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_139d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_139d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_139d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_139d + 1,local_139d + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  iVar5 = 0;
                                                  local_a0 = 0;
                                                  iVar4 = local_a0;
                                                  if (0 < 0x00000002) {
                                                    iVar15 = 0;
                                                    do {
                                                      if (*(int *)((int)&DAT_0061b4d4 + iVar15) == 0
                                                         ) {
                                                        iVar7 = _stricmp
                                                                          ("spectralFlag" +
                                                                           iVar15,local_e25 + 1);
                                                        iVar4 = (int)&DAT_0061b4d4 + iVar15;
                                                        if (iVar7 == 0) break;
                                                      }
                                                      iVar5 = iVar5 + 1;
                                                      iVar15 = iVar15 + 0x48;
                                                      iVar4 = local_a0;
                                                    } while (iVar5 < 0x00000002);
                                                  }
                                                  local_a0 = iVar4;
                                                  if (local_a0 == 0) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "%s is not a valid boolean actor variable name",
                                                               local_e25 + 1);
                                                    return 0;
                                                  }
                                                  uVar12 = 
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_58d + 1,
                                                             *(uint *)(local_a0 + 0x44));
                                                  if (uVar12 == 0) {
                                                    return 0;
                                                  }
                                                  if ((uVar12 == 0x0FFFFFFF) || (local_15c == 0))
                                                  {
                                                    pcVar6 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (param_1,local_139d + 1);
                                                  if (pcVar6 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_139d + 1);
                                                  *(int *)(*(int *)(local_a0 + 0x40) + uVar12) =
                                                       iVar4;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setCameraAmbient",
                                                                       0x10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0x10] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_158 = param_2 + 0x10;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_98 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,], %f)%n");
                                                      if (local_98 < 3) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setCameraAmbient parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_98;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_b05 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_b05 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_b05 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_b05[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_b05 + 1,local_b05 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  iVar4 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0
                                                            (g_CDemonSetPtr,local_b05 + 1);
                                                  if (iVar4 < 0) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "Camera \"%s\" does not exist.",
                                                               local_b05 + 1);
                                                    return 0;
                                                  }
                                                  if ((local_9c < 0.0) ||
                                                     (0x42c80000 < (int)local_9c)) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "Ambient value %g is out of range (1..100)",
                                                               (double)local_9c);
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                    core_set_cpp_FUN_005558f0
                                                              (g_CDemonSetPtr,iVar4,
                                                               local_9c * (float)_DAT_005de17c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setCounter",10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 10;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_94 = -1;
                                                      sscanf
                                                                ((char *)local_158,"( %[^,)]%n");
                                                      if (local_94 < 5) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_94;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_107d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_107d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_107d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_107d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_107d + 1,local_107d + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  local_8c = 0;
                                                  if (*local_158 == (CEventList)0x2c) {
                                                    local_94 = -1;
                                                    sscanf
                                                              ((char *)local_158,",%d%n");
                                                    if (local_94 < 1) {
                                                      FUN_005bfb40
                                                                (&DAT_01c56ed0,
                                                                 "Error parsing setCounter value argument"
                                                                );
                                                      return 0;
                                                    }
                                                    local_158 = local_158 + local_94;
                                                    while (((&DAT_00626114)
                                                            [(byte)((char)*local_158 + 1)] & 2) != 0
                                                          ) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                  }
                                                  if (*local_158 != (CEventList)0x29) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
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
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setDoorState",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 0xc;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_88 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,], %[^)])%n");
                                                      if (local_88 < 5) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setDoorState command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_88;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_120d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_120d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_120d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_120d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_120d + 1,local_120d + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1145 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_1145 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_1145 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_1145[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1145 + 1,local_1145 + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_120d + 1,
                                                             g_CDoorClassInfo.name_hash);
                                                  if (uVar12 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar12 == 0x0FFFFFFF) {
                                                    local_15c = uVar12 ^ 0x0FFFFFFF;
                                                  }
                                                  iVar4 = _stricmp
                                                                    (local_1145 + 1,&DAT_005ddb72);
                                                  if ((((iVar4 != 0) &&
                                                       (iVar4 = _stricmp
                                                                          (local_1145 + 1,
                                                                           "closed"),
                                                       iVar4 != 0)) &&
                                                      (iVar4 = _stricmp
                                                                         (local_1145 + 1,
                                                                          "opening"),
                                                      iVar4 != 0)) &&
                                                     (iVar4 = _stricmp
                                                                        (local_1145 + 1,
                                                                         "closing"),
                                                     iVar4 != 0)) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "Invalid door state '%s'",
                                                               local_1145 + 1);
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                    core_door_cpp_FUN_004774f0(uVar12);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setGroupAmbient",
                                                                       0xf);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0xf] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 0xf;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_7c = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%d, %f)%n")
                                                      ;
                                                      if (local_7c < 3) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setGroupAmbient parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_7c;
                                                  if ((local_80 < 0.0) ||
                                                     (0x42c80000 < (int)local_80)) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "Ambient value %g is out of range (1..100)",
                                                               (double)local_80);
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00555970
                                                            (g_CDemonSetPtr,local_84,
                                                             local_80 * (float)_DAT_005de17c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                                                                                              
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)
                                                       [(byte)((char)param_2[0x13] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_158 = param_2 + 0x13;
                                                    while (((&DAT_00626114)
                                                            [(byte)((char)*local_158 + 1)] & 2) != 0
                                                          ) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_78 = -1;
                                                    sscanf
                                                              ((char *)local_158,"( %[^ ,] , %d )%n");
                                                    if (local_78 < 0) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Error parsing setLightFilterFrame parms");
                                                  return iVar4;
                                                  }
                                                  local_158 = local_158 + local_78;
                                                  core_set_cpp_CDemonSet_addLightFilter_FUN_00555a20
                                                            (g_CDemonSetPtr,local_71c,&local_70,
                                                             &local_6c);
                                                  if (local_70 == (C3DSLight *)0x0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("SpotLight %s doesn't exist.");
                                                  return iVar4;
                                                  }
                                                  if ((local_74 < 0) ||
                                                     (*(int *)&local_70->field_0x11ec <= local_74))
                                                  {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Invalid filter frame, %s has %d filters");
                                                  return iVar4;
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
                                                            (local_70,local_74);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setLeverState",0xd)
                                                    ;
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0xd] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 0xd;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_68 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,], %[^)])%n");
                                                      if (local_68 < 5) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setLeverState command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_68;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1b6d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_1b6d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_1b6d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_1b6d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1b6d + 1,local_1b6d + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_12d5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_12d5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_12d5 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_12d5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_12d5 + 1,local_12d5 + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_1b6d + 1,
                                                             g_CLeverClassInfo.name_hash);
                                                  if (uVar12 == 0) {
                                                    return 0;
                                                  }
                                                  if ((uVar12 == 0x0FFFFFFF) || (local_15c == 0))
                                                  {
                                                    pcVar6 = 
                                                  core_event_cpp_CEventList_validateCondition_FUN_004a6c90
                                                            (param_1,local_12d5 + 1);
                                                  if (pcVar6 != (char *)0x0) {
                                                    return 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = 
                                                  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                                            (0x01C51D80,local_12d5 + 1);
                                                  if (iVar4 == 0) {
                                                    uStack_160 = 0;
                                                  }
                                                  else {
                                                    uStack_160 = 0x3ff00000;
                                                  }
                                                  local_164 = 0;
                                                  core_lever_cpp_FUN_004ff3f0
                                                            (uVar12,(float)(double)((ulonglong)
                                                                                    uStack_160 <<
                                                                                   0x20));
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setModelState",0xd)
                                                    ;
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0xd] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 0xd;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_60 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,], %[^)])%n");
                                                      if (local_60 < 5) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setModelState command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_60;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_655 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_655 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_655 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_655[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_655 + 1,local_655 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_975 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_975 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_975 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_975[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_975 + 1,local_975 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_655 + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (uVar12 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar12 != 0x0FFFFFFF) {
                                                    pcVar6 = local_975 + 1;
                                                    iVar4 = 0;
                                                    pCVar10 = core_motion_cpp_FUN_00524a00
                                                                        ((CMotionController *)
                                                                         (uVar12 + 0x158));
                                                    iVar4 = core_motion_cpp_FUN_00524150
                                                                      (pCVar10,pcVar6,iVar4);
                                                    if (iVar4 < 0) {
                                                      FUN_005bfb40
                                                                (&DAT_01c56ed0,
                                                                 "Model %s does not have state %s"
                                                                 ,uVar12 + 0x24a8,local_975 + 1);
                                                      return 0;
                                                    }
                                                    if (local_15c != 0) {
                                                                                                            
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                                            ((CMotionController *)(uVar12 + 0x158),
                                                             iVar4,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setSunlight",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 0xb;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_58 = -1;
                                                      sscanf
                                                                ((char *)local_158,
                                                                 "(%f , %f , %f , %f )%n");
                                                      if (local_58 < 5) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setSunlight command parms");
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
                                                    fVar3 = 1.0 / local_54;
                                                    local_188 = local_188 * fVar3;
                                                    local_184 = local_184 * fVar3;
                                                    local_180 = local_180 * fVar3;
                                                  }
                                                  if (local_15c != 0) {
                                                    core_set_cpp_FUN_00555930
                                                              (g_CDemonSetPtr,local_188,local_184,
                                                               local_180);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setTimer",8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[8] + 1)] & 0xe0) == 0
                                                       )) {
                                                      local_158 = param_2 + 8;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_48 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,], %f)%n");
                                                      if (local_48 < 3) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_48;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_16bd + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_16bd + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_16bd + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_16bd[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_16bd + 1,local_16bd + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_16bd + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  if (0x1f < ~uVar12 - 1) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "Timer name \"%s\" is too long, (max %d chars)",
                                                               local_16bd + 1,0x1f);
                                                    return 0;
                                                  }
                                                  if (local_4c < 0.0) {
                                                    FUN_005bfb40
                                                              (&DAT_01c56ed0,
                                                               "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                                                                        
                                                  core_event_cpp_CEventList_setTimerEvent_FUN_004a9bf0
                                                            (param_1,local_16bd + 1,local_4c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "setWeather",10);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[10] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 10;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_40 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^)])%n");
                                                      if (local_40 < 3) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_40;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_184d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_184d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_184d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_184d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_184d + 1,local_184d + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  iVar4 = _stricmp
                                                                    (local_184d + 1,&DAT_005ddeb3);
                                                  type = WEATHER_TYPE_NONE;
                                                  if (iVar4 != 0) {
                                                    iVar4 = _stricmp
                                                                      (local_184d + 1,&DAT_005ddeb8)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      type = WEATHER_TYPE_RAIN;
                                                    }
                                                    else {
                                                      iVar4 = _stricmp
                                                                        (local_184d + 1,
                                                                         &DAT_005ddebd);
                                                      if (iVar4 != 0) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                   "Invalid weather type: %s"
                                                                   ,local_184d + 1);
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
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "shakeScreen",0xb);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0xb] + 1)] & 0xe0) ==
                                                        0)) {
                                                      local_158 = param_2 + 0xb;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_2c = -1;
                                                      sscanf
                                                                ((char *)local_158,
                                                                 "( %f, %f, %f, %f )%n");
                                                      if (local_2c < 5) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
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
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "slamModelToMotion",
                                                                       0x11);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0x11] + 1)] & 0xe0)
                                                        == 0)) {
                                                      local_158 = param_2 + 0x11;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*local_158 + 1)] & 2) !=
                                                             0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_28 = -1;
                                                      sscanf
                                                                ((char *)local_158,"(%[^,], %[^)])%n");
                                                      if (local_28 < 5) {
                                                        FUN_005bfb40
                                                                  (&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_28;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1e8d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_1e8d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_1e8d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_1e8d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1e8d + 1,local_1e8d + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_1aa5 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_1aa5 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_1aa5 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_1aa5[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_1aa5 + 1,local_1aa5 + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_1e8d + 1,
                                                             g_CCharacterClassInfo.name_hash);
                                                  if (uVar12 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar12 != 0x0FFFFFFF) {
                                                    pcVar6 = local_1aa5 + 1;
                                                    iVar4 = 0;
                                                    this_ptr = (CMotionController *)(uVar12 + 0x158)
                                                    ;
                                                    pCVar10 = core_motion_cpp_FUN_00524a00(this_ptr)
                                                    ;
                                                    iVar4 = core_motion_cpp_FUN_005240c0
                                                                      (pCVar10,pcVar6,iVar4);
                                                    if (iVar4 < 0) {
                                                      FUN_005bfb40
                                                                (&DAT_01c56ed0,
                                                                 "Model %s does not have motion %s"
                                                                 ,uVar12 + 0x24a8,local_1aa5 + 1);
                                                      return 0;
                                                    }
                                                    if (local_15c != 0) {
                                                                                                            
                                                  core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
                                                            (this_ptr,iVar4,0.0);
                                                  iVar4 = 1;
                                                  pSVar11 = 
                                                  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                                            (this_ptr);
                                                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                                            (this_ptr,*(int *)(pSVar11 + 0x24),iVar4
                                                            );
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "switchCamera",0xc);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[0xc] + 1)] & 0xe0) ==
                                                        0)) {
                                                      param_2 = param_2 + 0xc;
                                                      while (((&DAT_00626114)
                                                              [(byte)((char)*param_2 + 1)] & 2) != 0
                                                            ) {
                                                        param_2 = param_2 + 1;
                                                      }
                                                      local_24 = -1;
                                                      puVar18 = &DAT_0061b630;
                                                      pcVar6 = local_2d0;
                                                      for (iVar4 = 0x19; iVar4 != 0;
                                                          iVar4 = iVar4 + -1) {
                                                        *(uint *)pcVar6 = *puVar18;
                                                        puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
                                                        pcVar6 = pcVar6 + ((uint)bVar21 * -2 + 1) *
                                                                          4;
                                                      }
                                                      local_158 = param_2;
                                                      sscanf
                                                                ((char *)param_2," ( %[^ ,)]%n");
                                                      if (local_24 < 2) {
                                                        iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar4;
                                                  }
                                                  local_158 = local_158 + local_24;
                                                  while (((&DAT_00626114)
                                                          [(byte)((char)*local_158 + 1)] & 2) != 0)
                                                  {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  iVar4 = 
                                                  core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0
                                                            (g_CDemonSetPtr,local_2d0);
                                                  if (iVar4 < 0) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Camera \"%s\" doesn't exist");
                                                  return iVar4;
                                                  }
                                                  local_20 = 3.0;
                                                  if (*local_158 == (CEventList)0x2c) {
                                                    local_24 = -1;
                                                    sscanf
                                                              ((char *)local_158,",%f%n");
                                                    if (local_24 < 2) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Syntax error in switchCamera() parms");
                                                  return iVar4;
                                                  }
                                                  local_158 = local_158 + local_24;
                                                  while (((&DAT_00626114)
                                                          [(byte)((char)*local_158 + 1)] & 2) != 0)
                                                  {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  }
                                                  if (*local_158 != (CEventList)0x29) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Missing ')' in switchCamera() statement");
                                                  return iVar4;
                                                  }
                                                  local_158 = local_158 + 1;
                                                  if (local_15c != 0) {
                                                    core_setdir_cpp_FUN_0055b1e0
                                                              (g_CDemonSetPtr,iVar4,local_20);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                                                                                              
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)
                                                       [(byte)((char)param_2[0x15] + 1)] & 0xe0) ==
                                                      0)) {
                                                    local_158 = param_2 + 0x15;
                                                    while (((&DAT_00626114)
                                                            [(byte)((char)*local_158 + 1)] & 2) != 0
                                                          ) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_1c = -1;
                                                    sscanf
                                                              ((char *)local_158,"(%[^)])%n");
                                                    if (local_1c < 3) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Error parsing turnToFieldNotesEntry command");
                                                  return iVar4;
                                                  }
                                                  local_158 = local_158 + local_1c;
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_218d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_218d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_218d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_218d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_218d + 1,local_218d + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  if (_DAT_01c56ecc != 0) {
                                                    uVar8 = core_fldnotes_cpp_FUN_004bde20
                                                                      (g_CFieldNotesPtr);
                                                    switch(uVar8) {
                                                    case 0:
                                                    case 1:
                                                    case 2:
                                                    case 3:
                                                    case 4:
                                                    case 5:
                                                    case 6:
                                                      goto switchD_004a2582_caseD_2;
                                                    default:
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Field notes entry '%s' not found");
                                                  return iVar4;
                                                  }
                                                  }
                                                  core_fldnotes_cpp_FUN_004bde80(g_CFieldNotesPtr);
                                                  }
                                                  else {
                                                    iVar4 = _strnicmp
                                                                      ((char *)param_2,
                                                                       "warpTo",6);
                                                    if ((iVar4 != 0) ||
                                                       (((&DAT_00626114)
                                                         [(byte)((char)param_2[6] + 1)] & 0xe0) != 0
                                                       )) {
                                                      iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Unknown meta-function starting at %s");
                                                  return iVar4;
                                                  }
                                                  local_158 = param_2 + 6;
                                                  while (((&DAT_00626114)
                                                          [(byte)((char)*local_158 + 1)] & 2) != 0)
                                                  {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            ((char *)local_158,"(%[^,], %[^)])%n");
                                                  if (local_18 < 5) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Error parsing warpTo command parms");
                                                  return iVar4;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_152d + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_152d + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_152d + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_152d[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_152d + 1,local_152d + 2,SVar13)
                                                    ;
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  uVar12 = 0xffffffff;
                                                  pcVar6 = local_c95 + 1;
                                                  do {
                                                    if (uVar12 == 0) break;
                                                    uVar12 = uVar12 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  SVar13 = ~uVar12 - 1;
                                                  if (0 < (int)SVar13) {
                                                    pcVar6 = local_c95 + ~uVar12;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar6[-1] + 1)] &
                                                          2) == 0) break;
                                                      SVar13 = SVar13 - 1;
                                                      pcVar6 = pcVar6 + -1;
                                                    } while (0 < (int)SVar13);
                                                  }
                                                  (local_c95 + 1)[SVar13] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_c95[1] + 1)]
                                                         & 2) != 0) {
                                                    memmove
                                                              (local_c95 + 1,local_c95 + 2,SVar13);
                                                    SVar13 = SVar13 - 1;
                                                  }
                                                  local_158 = local_158 + local_18;
                                                  while (((&DAT_00626114)
                                                          [(byte)((char)*local_158 + 1)] & 2) != 0)
                                                  {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  uVar12 = 
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_152d + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (uVar12 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar12 == 0x0FFFFFFF) {
                                                    local_15c = 0;
                                                  }
                                                  else if (local_15c != 0) {
                                                    local_1b0 = *(int *)(uVar12 + 0x2c);
                                                  }
                                                  local_18 = -1;
                                                  sscanf
                                                            (local_c95 + 1,"%f,%f,%f,%f,%f,%f%n")
                                                  ;
                                                  if (local_18 < 0) {
                                                    if ((local_15c != 0) &&
                                                       (&local_1ac != (uint *)(uVar12 + 0x30))
                                                       ) {
                                                      local_1ac = *(uint *)(uVar12 + 0x30);
                                                      local_1a8 = *(uint *)(uVar12 + 0x34);
                                                      local_1a4 = *(uint *)(uVar12 + 0x38);
                                                    }
                                                    sscanf
                                                              (local_c95 + 1,"%f,%f,%f,%f%n");
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_15c != 0) &&
                                                       (&local_1ac != (uint *)(uVar12 + 0x30))
                                                       ) {
                                                      local_1ac = *(uint *)(uVar12 + 0x30);
                                                      local_1a8 = *(uint *)(uVar12 + 0x34);
                                                      local_1a4 = *(uint *)(uVar12 + 0x38);
                                                    }
                                                    sscanf
                                                              (local_c95 + 1,"%f,%f,%f%n");
                                                  }
                                                  if (local_18 < 0) {
                                                    uVar9 = 
                                                  core_event_cpp_resolveActorByName_FUN_004a1370
                                                            (local_c95 + 1,
                                                             g_CDemonActorClassInfo.name_hash);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 == 0x0FFFFFFF) {
                                                    local_15c = 0;
                                                  }
                                                  else {
                                                    local_1bc = *(uint *)(uVar9 + 0x20);
                                                    local_1b8 = *(uint *)(uVar9 + 0x24);
                                                    local_1b4 = *(uint *)(uVar9 + 0x28);
                                                    local_1b0 = *(int *)(uVar9 + 0x2c);
                                                    if (&local_1ac != (uint *)(uVar9 + 0x30))
                                                    {
                                                      local_1ac = *(uint *)(uVar9 + 0x30);
                                                      local_1a8 = *(uint *)(uVar9 + 0x34);
                                                      local_1a4 = *(uint *)(uVar9 + 0x38);
                                                    }
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar6 = local_c95 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar2 = *pcVar6;
                                                    pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
                                                  } while (cVar2 != '\0');
                                                  local_18 = ~uVar9 - 1;
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_c95[local_18 + 1] != '\0')) {
                                                    iVar4 = 
                                                  core_event_cpp_formatEventError_FUN_004a1210
                                                            ("Error parsing warpTo command parms");
                                                  return iVar4;
                                                  }
                                                  if (local_15c != 0) {
                                                    if (local_1b0 != *(int *)(uVar12 + 0x2c)) {
                                                      (*(code *)**(uint **)(uVar12 + 0x154))()
                                                      ;
                                                    }
                                                    iVar4 = 
                                                  core_actor_cpp_castToClassHash_FUN_0040c600
                                                            (uVar12);
                                                  if (iVar4 != 0) {
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xf0))();
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xf8))();
                                                  }
                                                  *(int *)(uVar12 + 0x2c) = local_1b0;
                                                  (**(code **)(*(int *)(uVar12 + 0x154) + 0x68))
                                                            (uVar12,&local_1bc);
                                                  if (uVar12 == *(uint *)(_DAT_01d06ab4 * 4 +
                                                                         0x1d06aa4)) {
                                                                                                        
                                                  core_mission_cpp_CDemonMission_setTeleportTarget_FUN_0051b700
                                                            (0x01D2C900,(CLocation *)&local_1bc);
                                                  }
                                                  if (uVar12 == *(uint *)&g_CScriptPtr->field_0xc) {
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
switchD_004a2582_caseD_2:
    while (((&DAT_00626114)[(byte)((char)*local_158 + 1)] & 2) != 0) {
      local_158 = local_158 + 1;
    }
    if (*local_158 != (CEventList)0x0) {
      iVar4 = core_event_cpp_formatEventError_FUN_004a1210("Extra characters found");
      return iVar4;
    }
  }
  return 1;
}
