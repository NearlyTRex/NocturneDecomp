// Name: FUN_00489670
// Address: 00489670
// Address Range: [[00489670, 0048e2a8]]
// Convention: unknown
// Signature: undefined4 FUN_00489670(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00489670(int *param_1,char *param_2)

{
  char cVar1;
  float fVar2;
  byte uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  uint *puVar16;
  byte bVar17;
  char local_29b4 [255];
  char local_28b5 [257];
  byte local_27b4 [255];
  char local_26b5 [256];
  char local_25b5 [256];
  char local_24b5 [256];
  char local_23b5 [256];
  char local_22b5 [256];
  char local_21b5 [256];
  char local_20b5 [257];
  byte local_1fb4 [255];
  char local_1eb5 [256];
  char local_1db5 [200];
  char local_1ced [200];
  char local_1c25 [200];
  char local_1b5d [200];
  char local_1a95 [201];
  byte local_19cc [199];
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
  byte local_d4c [199];
  char local_c85 [200];
  char local_bbd [200];
  char local_af5 [200];
  char local_a2d [200];
  char local_965 [200];
  char local_89d [200];
  char local_7d5 [200];
  char local_70d [200];
  char local_645 [200];
  char local_57d [200];
  char local_4b5 [201];
  byte local_3ec [99];
  char local_389 [100];
  char local_325 [101];
  uint local_2c0 [25];
  byte local_25c [48];
  byte local_22c [32];
  byte local_20c [32];
  byte local_1ec [32];
  byte local_1cc [32];
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  byte local_190 [4];
  byte local_18c [4];
  byte local_188 [4];
  byte local_184 [4];
  byte local_180 [4];
  byte local_17c [4];
  float local_178;
  float local_174;
  float local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  byte local_160 [4];
  byte local_15c [4];
  byte local_158 [4];
  uint local_154;
  uint uStack_150;
  int *local_14c;
  uint local_148;
  char *local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  int local_ec;
  uint local_e8;
  float local_e4;
  int local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  byte *local_c8;
  float local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
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
  uint local_84;
  int local_80;
  uint local_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  float local_4c;
  float local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar17 = 0;
  DAT_01c3dd10 = 0;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar4 = FUN_005b8130(param_2,&DAT_005d2ff9), iVar4 != 0)) {
    if (*param_2 == '.') {
      param_2 = param_2 + 1;
    }
    local_148 = (uint)(_DAT_01c3dd0c == 0);
    local_144 = &DAT_005d2ffe;
    pcVar13 = param_2;
    do {
      pcVar12 = pcVar13;
      if (*pcVar13 == '(') goto LAB_004896f7;
      if (*pcVar13 == '\0') break;
      pcVar12 = pcVar13 + 1;
      if (*pcVar12 == '(') goto LAB_004896f7;
      pcVar13 = pcVar13 + 2;
    } while (*pcVar12 != '\0');
    pcVar12 = (char *)0x0;
LAB_004896f7:
    if (pcVar12 == (char *)0x0) {
      iVar4 = 0;
      if (0 < *param_1) {
        piVar15 = param_1 + 1;
        do {
          iVar5 = FUN_005b8130(piVar15,param_2);
          if (iVar5 == 0) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          piVar15 = piVar15 + 8;
        } while (iVar4 < *param_1);
      }
      uVar8 = 0xffffffff;
      pcVar13 = param_2;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar8 - 1) {
        uVar6 = FUN_00488ba0("Event name %s is too long",param_2);
        return uVar6;
      }
      if (99 < *param_1) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0x26b;
        FUN_004e4500();
      }
      piVar14 = param_1 + *param_1 * 8 + 1;
      local_14 = 0;
      pcVar13 = param_2;
      piVar15 = piVar14;
      do {
        cVar1 = *pcVar13;
        *(char *)piVar15 = cVar1;
        local_14c = piVar14;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        *(char *)((int)piVar15 + 1) = cVar1;
        piVar15 = (int *)((int)piVar15 + 2);
      } while (cVar1 != '\0');
      do {
        uVar8 = local_14;
        uVar9 = 0xffffffff;
        piVar15 = local_14c;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          iVar4 = *piVar15;
          piVar15 = (int *)((int)piVar15 + (uint)bVar17 * -2 + 1);
        } while ((char)iVar4 != '\0');
        if (~uVar9 - 1 <= local_14) {
          if (local_148 == 0) {
            return 1;
          }
          *param_1 = *param_1 + 1;
          return 1;
        }
        uVar3 = FUN_005b8e40();
        *(byte *)piVar14 = uVar3;
        iVar4 = FUN_00491c70();
        if (iVar4 == 0) {
          uVar6 = FUN_00488ba0("Event name %s is not valid",param_2);
          return uVar6;
        }
        local_14 = uVar8 + 1;
        piVar14 = (int *)((int)piVar14 + 1);
      } while( true );
    }
    iVar4 = FUN_005b8da0(param_2,"activateGadget",0xe);
    if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
      local_144 = param_2 + 0xe;
      while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
        local_144 = local_144 + 1;
      }
      local_140 = -1;
      FUN_005ba8cc(local_144,"(%[^,], %[^,], %n",local_21b5 + 1,local_25b5 + 1,&local_140);
      if (local_140 < 3) {
        uVar6 = FUN_00488ba0();
        return uVar6;
      }
      local_144 = local_144 + local_140;
      uVar8 = 0xffffffff;
      pcVar13 = local_21b5 + 1;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      if (0 < iVar4) {
        pcVar13 = local_21b5 + ~uVar8;
        do {
          if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      (local_21b5 + 1)[iVar4] = '\0';
      while (((&DAT_0061ed94)[(byte)(local_21b5[1] + 1)] & 2) != 0) {
        FUN_005ba1f0(local_21b5 + 1);
      }
      uVar8 = 0xffffffff;
      pcVar13 = local_25b5 + 1;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      if (0 < iVar4) {
        pcVar13 = local_25b5 + ~uVar8;
        do {
          if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      (local_25b5 + 1)[iVar4] = '\0';
      while (((&DAT_0061ed94)[(byte)(local_25b5[1] + 1)] & 2) != 0) {
        FUN_005ba1f0(local_25b5 + 1);
      }
      pcVar13 = (char *)FUN_00488fc0(&local_144,local_20b5 + 1,0x100,0);
      if (pcVar13 != (char *)0x0) goto LAB_00489a3d;
      uVar8 = 0xffffffff;
      pcVar13 = local_20b5 + 1;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar8 - 1;
      if (0 < iVar4) {
        pcVar13 = local_20b5 + ~uVar8;
        do {
          if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      (local_20b5 + 1)[iVar4] = '\0';
      while (((&DAT_0061ed94)[(byte)(local_20b5[1] + 1)] & 2) != 0) {
        FUN_005ba1f0(local_20b5 + 1);
      }
      iVar4 = FUN_00488d00(local_21b5 + 1,_DAT_01cedf50,0x1cedf18);
      if (iVar4 == 0) {
        return 0;
      }
      if (iVar4 == 0x0FFFFFFF) {
        local_148 = 0;
      }
      puVar10 = (uint *)0x0;
      iVar5 = FUN_005b8130(local_25b5 + 1,"compass");
      if (iVar5 == 0) {
        puVar10 = (uint *)(iVar4 + 0x24384);
      }
      iVar5 = FUN_005b8130(local_25b5 + 1,&DAT_005d30a4);
      if (iVar5 == 0) {
        puVar10 = (uint *)(iVar4 + 0x24388);
      }
      if (puVar10 == (uint *)0x0) {
        uVar6 = FUN_00488ba0("Invalid gadget type: %s",local_25b5 + 1);
        return uVar6;
      }
      if (_DAT_01c3dd0c == 0) {
        if (local_148 != 0) {
          uVar6 = FUN_0048e340(param_1,local_20b5 + 1);
          *puVar10 = uVar6;
        }
      }
      else {
        iVar4 = FUN_0048e3a0(param_1,local_20b5 + 1);
        if (iVar4 != 0) {
          return 0;
        }
      }
    }
    else {
      iVar4 = FUN_005b8da0(param_2,"activatePuzzle",0xe);
      if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
        local_144 = param_2 + 0xe;
        while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
          local_144 = local_144 + 1;
        }
        local_13c = -1;
        FUN_005ba8cc(local_144,"(%[^)])%n",local_26b5 + 1,&local_13c);
        if (local_13c < 3) {
          uVar6 = FUN_00488ba0();
          return uVar6;
        }
        local_144 = local_144 + local_13c;
        uVar8 = 0xffffffff;
        pcVar13 = local_26b5 + 1;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar8 - 1;
        if (0 < iVar4) {
          pcVar13 = local_26b5 + ~uVar8;
          do {
            if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar13 + -1;
          } while (0 < iVar4);
        }
        (local_26b5 + 1)[iVar4] = '\0';
        while (((&DAT_0061ed94)[(byte)(local_26b5[1] + 1)] & 2) != 0) {
          FUN_005ba1f0(local_26b5 + 1);
        }
        iVar5 = 0;
        iVar4 = 0;
        if (0 < _DAT_026677b4) {
          iVar11 = 0;
          do {
            uVar6 = (**(code **)(**(int **)(iVar11 + 0x26677b8) + 4))();
            iVar7 = FUN_005b8130(local_26b5 + 1,uVar6);
            if (iVar7 == 0) {
              iVar4 = *(int *)(iVar11 + 0x26677b8);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar5 < _DAT_026677b4);
        }
        if (iVar4 == 0) {
          uVar6 = FUN_00488ba0("No such puzzle '%s'",local_26b5 + 1);
          return uVar6;
        }
        if (local_148 != 0) {
          if (_DAT_026677e0 != 0) {
            FUN_0059ab70(_DAT_026677e0,0);
          }
          FUN_0059ab70(iVar4,1);
        }
      }
      else {
        iVar4 = FUN_005b8da0(param_2,"addFieldNotesTask",0x11);
        if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)) {
          local_144 = param_2 + 0x11;
          while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
            local_144 = local_144 + 1;
          }
          local_138 = -1;
          FUN_005ba8cc(local_144,"(%[^)])%n",local_23b5 + 1,&local_138);
          if (local_138 < 3) {
            uVar6 = FUN_00488ba0();
            return uVar6;
          }
          local_144 = local_144 + local_138;
          uVar8 = 0xffffffff;
          pcVar13 = local_23b5 + 1;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
          } while (cVar1 != '\0');
          iVar4 = ~uVar8 - 1;
          if (0 < iVar4) {
            pcVar13 = local_23b5 + ~uVar8;
            do {
              if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
              iVar4 = iVar4 + -1;
              pcVar13 = pcVar13 + -1;
            } while (0 < iVar4);
          }
          (local_23b5 + 1)[iVar4] = '\0';
          while (((&DAT_0061ed94)[(byte)(local_23b5[1] + 1)] & 2) != 0) {
            FUN_005ba1f0(local_23b5 + 1);
          }
          if (_DAT_01c3dd0c != 0) {
            uVar6 = FUN_004a5430(0x01CAF56C,local_23b5 + 1);
            switch(uVar6) {
            default:
              uVar6 = FUN_00488ba0("Field notes entry '%s' is not a task",local_23b5 + 1);
              return uVar6;
            case 2:
            case 3:
            case 4:
              goto switchD_00489e7e_caseD_2;
            case 0xffffffff:
              uVar6 = FUN_00488ba0("Field notes entry '%s' not found",local_23b5 + 1);
              return uVar6;
            }
          }
          FUN_004a5310(0x01CAF56C,local_23b5 + 1);
        }
        else {
          iVar4 = FUN_005b8da0(param_2,"advanceLightFilter",0x12);
          if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0x12] + 1)] & 0xe0) == 0)) {
            local_144 = param_2 + 0x12;
            while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
              local_144 = local_144 + 1;
            }
            pcVar13 = (char *)FUN_00488fc0(&local_144,local_d4c,200,1);
            if (pcVar13 != (char *)0x0) goto LAB_00489a3d;
            FUN_00534770(0x01E661B8,local_d4c,&local_5c,&local_134);
            if (local_5c == 0) {
              uVar6 = FUN_00488ba0("SpotLight %s doesn't exist.",local_d4c);
              return uVar6;
            }
            if (local_148 != 0) {
              if (local_134 == 0) {
                _DAT_01d046a0 = "..\\core\\event.cpp";
                _DAT_01d046a4 = 0x31c;
                FUN_004e4500("Can't find CDemonLight for light %s in advanceLightFilter meta-command",local_d4c);
              }
              FUN_0053ba90(local_5c,local_134);
            }
          }
          else {
            iVar4 = FUN_005b8da0(param_2,"beginCarryItem",0xe);
            if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
              local_144 = param_2 + 0xe;
              while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                local_144 = local_144 + 1;
              }
              local_12c = -1;
              FUN_005ba8cc(local_144,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n",local_106d + 1,local_c85 + 1,
                           &local_130,local_190,local_18c,local_188,local_160,local_158,local_15c,
                           &local_12c);
              if (local_12c < 0) {
                uVar6 = FUN_00488ba0();
                return uVar6;
              }
              local_144 = local_144 + local_12c;
              uVar8 = 0xffffffff;
              pcVar13 = local_c85 + 1;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
              } while (cVar1 != '\0');
              iVar4 = ~uVar8 - 1;
              if (0 < iVar4) {
                pcVar13 = local_c85 + ~uVar8;
                do {
                  if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                  iVar4 = iVar4 + -1;
                  pcVar13 = pcVar13 + -1;
                } while (0 < iVar4);
              }
              (local_c85 + 1)[iVar4] = '\0';
              while (((&DAT_0061ed94)[(byte)(local_c85[1] + 1)] & 2) != 0) {
                FUN_005ba1f0(local_c85 + 1);
              }
              uVar8 = 0xffffffff;
              pcVar13 = local_106d + 1;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
              } while (cVar1 != '\0');
              iVar4 = ~uVar8 - 1;
              if (0 < iVar4) {
                pcVar13 = local_106d + ~uVar8;
                do {
                  if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                  iVar4 = iVar4 + -1;
                  pcVar13 = pcVar13 + -1;
                } while (0 < iVar4);
              }
              (local_106d + 1)[iVar4] = '\0';
              while (((&DAT_0061ed94)[(byte)(local_106d[1] + 1)] & 2) != 0) {
                FUN_005ba1f0(local_106d + 1);
              }
              if ((local_130 < 0) || (1 < local_130)) {
                uVar6 = FUN_00488ba0("Invalid hand index: %d",local_130);
                return uVar6;
              }
              iVar4 = FUN_00488d00(local_106d + 1,DAT_007bdc94,&DAT_007bdc5c);
              if (iVar4 == 0) {
                return 0;
              }
              if (iVar4 == 0x0FFFFFFF) {
                local_148 = 0;
              }
              else if (*(int *)(iVar4 + 0x2618 + local_130 * 0x78) < 0) {
                uVar6 = FUN_00488ba0("%s doesn't have hand %d",iVar4,local_130);
                return uVar6;
              }
              iVar5 = FUN_00488d00(local_c85 + 1,DAT_007bc030,&DAT_007bbff8);
              if (iVar5 == 0) {
                return 0;
              }
              if ((iVar5 != 0x0FFFFFFF) && (local_148 != 0)) {
                FUN_00591c10(local_25c,local_190,local_160);
                FUN_00428b10(iVar4,local_130,iVar5,0,local_25c);
              }
            }
            else {
              iVar4 = FUN_005b8da0(param_2,"completeFieldNotesTask",0x16);
              if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0x16] + 1)] & 0xe0) == 0)) {
                local_144 = param_2 + 0x16;
                while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                  local_144 = local_144 + 1;
                }
                local_128 = -1;
                FUN_005ba8cc(local_144,"(%[^)])%n",local_22b5 + 1,&local_128);
                if (local_128 < 3) {
                  uVar6 = FUN_00488ba0();
                  return uVar6;
                }
                local_144 = local_144 + local_128;
                uVar8 = 0xffffffff;
                pcVar13 = local_22b5 + 1;
                do {
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                } while (cVar1 != '\0');
                iVar4 = ~uVar8 - 1;
                if (0 < iVar4) {
                  pcVar13 = local_22b5 + ~uVar8;
                  do {
                    if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                    iVar4 = iVar4 + -1;
                    pcVar13 = pcVar13 + -1;
                  } while (0 < iVar4);
                }
                (local_22b5 + 1)[iVar4] = '\0';
                while (((&DAT_0061ed94)[(byte)(local_22b5[1] + 1)] & 2) != 0) {
                  FUN_005ba1f0(local_22b5 + 1);
                }
                if (_DAT_01c3dd0c != 0) {
                  uVar6 = FUN_004a5430(0x01CAF56C,local_22b5 + 1);
                  switch(uVar6) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    uVar6 = FUN_00488ba0("Field notes entry '%s' is not a task",local_22b5 + 1);
                    return uVar6;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_00489e7e_caseD_2;
                  default:
                    uVar6 = FUN_00488ba0("Field notes entry '%s' not found",local_22b5 + 1);
                    return uVar6;
                  }
                }
                FUN_004a55b0(0x01CAF56C,local_22b5 + 1);
              }
              else {
                iVar4 = FUN_005b8da0(param_2,"createExplosion",0xf);
                if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0xf] + 1)] & 0xe0) == 0)) {
                  local_144 = param_2 + 0xf;
                  while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                    local_144 = local_144 + 1;
                  }
                  local_124 = -1;
                  FUN_005ba8cc(local_144,"( %f , %n",&local_40,&local_124);
                  if (local_124 < 0) {
                    uVar6 = FUN_00488ba0();
                    return uVar6;
                  }
                  local_144 = local_144 + local_124;
                  local_124 = -1;
                  FUN_005ba8cc(local_144,"%f , %f , %f %n",&local_19c,&local_198,&local_194,
                               &local_124);
                  if ((local_124 < 0) &&
                     (FUN_005ba8cc(local_144," %[^,)] %n",local_4b5 + 1,&local_124), -1 < local_124)
                     ) {
                    uVar8 = 0xffffffff;
                    pcVar13 = local_4b5 + 1;
                    do {
                      if (uVar8 == 0) break;
                      uVar8 = uVar8 - 1;
                      cVar1 = *pcVar13;
                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                    } while (cVar1 != '\0');
                    iVar4 = ~uVar8 - 1;
                    if (0 < iVar4) {
                      pcVar13 = local_4b5 + ~uVar8;
                      do {
                        if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                        iVar4 = iVar4 + -1;
                        pcVar13 = pcVar13 + -1;
                      } while (0 < iVar4);
                    }
                    (local_4b5 + 1)[iVar4] = '\0';
                    while (((&DAT_0061ed94)[(byte)(local_4b5[1] + 1)] & 2) != 0) {
                      FUN_005ba1f0(local_4b5 + 1);
                    }
                    iVar4 = FUN_00488d00(local_4b5 + 1,DAT_007bc030,&DAT_007bbff8);
                    if (iVar4 == 0) {
                      return 0;
                    }
                    if (iVar4 == 0x0FFFFFFF) {
                      local_148 = 0;
                    }
                    else if (&local_19c != (uint *)(iVar4 + 0x20)) {
                      local_19c = *(uint *)(iVar4 + 0x20);
                      local_198 = *(uint *)(iVar4 + 0x24);
                      local_194 = *(uint *)(iVar4 + 0x28);
                    }
                  }
                  if (local_124 < 0) {
                    uVar6 = FUN_00488ba0();
                    return uVar6;
                  }
                  local_144 = local_144 + local_124;
                  while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                    local_144 = local_144 + 1;
                  }
                  local_120 = 0x40800000;
                  if (*local_144 == ',') {
                    local_124 = -1;
                    FUN_005ba8cc(local_144,", %f %n",&local_120,&local_124);
                    if (local_124 < 0) {
                      uVar6 = FUN_00488ba0();
                      return uVar6;
                    }
                    local_144 = local_144 + local_124;
                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                      local_144 = local_144 + 1;
                    }
                  }
                  if (*local_144 != ')') {
                    uVar6 = FUN_00488ba0();
                    return uVar6;
                  }
                  local_144 = local_144 + 1;
                  if (local_148 != 0) {
                    FUN_0049e360(0x01C3DEB4,&local_19c,local_40,0x44bb8000,local_120);
                  }
                }
                else {
                  iVar4 = FUN_005b8da0(param_2,"deleteActor",0xb);
                  if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)) {
                    local_144 = param_2 + 0xb;
                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                      local_144 = local_144 + 1;
                    }
                    pcVar13 = (char *)FUN_00488fc0(&local_144,local_12c4,200,1);
                    if (pcVar13 != (char *)0x0) goto LAB_00489a3d;
                    iVar4 = FUN_00488d00(local_12c4,DAT_007bc030,&DAT_007bbff8);
                    uVar6 = DAT_007bc9e8;
                    if (iVar4 == 0) {
                      if (_DAT_01c3dd0c != 0) {
                        return 0;
                      }
                      local_148 = 0;
                    }
                    if ((iVar4 != 0x0FFFFFFF) && (local_148 != 0)) {
                      *(uint *)(iVar4 + 0x70) = 2;
                      iVar5 = FUN_0040c8f0(iVar4,uVar6);
                      if (iVar5 != 0) {
                        *(byte *)(iVar5 + 0x430) = 0;
                        FUN_00551050();
                      }
                      iVar4 = FUN_0040c8f0(iVar4,_DAT_0267a388);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x310) = 0;
                        *(byte *)(iVar4 + 0x378) = 0;
                        FUN_00551050();
                      }
                    }
                  }
                  else {
                    iVar4 = FUN_005b8da0(param_2,"displayBitmap",0xd);
                    if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0xd] + 1)] & 0xe0) == 0)) {
                      local_144 = param_2 + 0xd;
                      while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                        local_144 = local_144 + 1;
                      }
                      local_114 = -1;
                      FUN_005ba8cc(local_144,"( %[^ ,] , %d , %d%n",local_1fb4,&local_11c,&local_118,
                                   &local_114);
                      if (local_114 < 0) {
                        uVar6 = FUN_00488ba0();
                        return uVar6;
                      }
                      local_144 = local_144 + local_114;
                      while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                        local_144 = local_144 + 1;
                      }
                      local_110 = 0;
                      pcVar13 = local_144;
                      if (*local_144 == ',') {
                        local_114 = -1;
                        FUN_005ba8cc(local_144,", %f %n",&local_110,&local_114);
                        if (local_114 < 1) {
                          FUN_005b7790(&DAT_01c3dd10,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pcVar13 = local_144 + local_114;
                        while (((&DAT_0061ed94)[(byte)(*pcVar13 + 1)] & 2) != 0) {
                          pcVar13 = pcVar13 + 1;
                        }
                      }
                      do {
                        local_144 = pcVar13;
                        pcVar13 = local_144 + 1;
                      } while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0);
                      if (*local_144 != ')') {
                        FUN_005b7790(&DAT_01c3dd10,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_144 = local_144 + 1;
                      iVar4 = FUN_00460aa0(&DAT_005d34ef,local_1fb4);
                      if (iVar4 < 0) {
                        uVar6 = FUN_00488ba0();
                        return uVar6;
                      }
                      if (iVar4 != local_11c * local_118) {
                        uVar6 = FUN_00488ba0();
                        return uVar6;
                      }
                      if (local_148 != 0) {
                        FUN_004bcb50(0x01CB6900,local_1fb4,local_11c,local_118,local_110);
                      }
                    }
                    else {
                      iVar4 = FUN_005b8da0(param_2,"displayFieldNotes",0x11);
                      if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)
                         ) {
                        local_144 = param_2 + 0x11;
                        while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                          local_144 = local_144 + 1;
                        }
                        local_10c = -1;
                        FUN_005ba8cc(local_144,"(%[^)])%n",local_1b5d + 1,&local_10c);
                        if (local_10c < 5) {
                          FUN_005b7790(&DAT_01c3dd10,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_144 = local_144 + local_10c;
                        uVar8 = 0xffffffff;
                        pcVar13 = local_1b5d + 1;
                        do {
                          if (uVar8 == 0) break;
                          uVar8 = uVar8 - 1;
                          cVar1 = *pcVar13;
                          pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                        } while (cVar1 != '\0');
                        iVar4 = ~uVar8 - 1;
                        if (0 < iVar4) {
                          pcVar13 = local_1b5d + ~uVar8;
                          do {
                            if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                            iVar4 = iVar4 + -1;
                            pcVar13 = pcVar13 + -1;
                          } while (0 < iVar4);
                        }
                        (local_1b5d + 1)[iVar4] = '\0';
                        while (((&DAT_0061ed94)[(byte)(local_1b5d[1] + 1)] & 2) != 0) {
                          FUN_005ba1f0(local_1b5d + 1);
                        }
                        if (local_148 == 0) {
                          iVar4 = FUN_0048e3a0(param_1,local_1b5d + 1);
                          if (iVar4 != 0) {
                            return 0;
                          }
                        }
                        else {
                          uVar6 = FUN_0048e340(0x01C38BC0,local_1b5d + 1);
                          *(uint *)(0x01CAF56C + 0x40) = uVar6;
                        }
                      }
                      else {
                        iVar4 = FUN_005b8da0(param_2,"dropItem",8);
                        if ((iVar4 == 0) && (((&DAT_0061ed94)[(byte)(param_2[8] + 1)] & 0xe0) == 0))
                        {
                          local_144 = param_2 + 8;
                          while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                            local_144 = local_144 + 1;
                          }
                          local_108 = -1;
                          FUN_005ba8cc(local_144,"( %[^,],%n",local_11fd + 1,&local_108);
                          if (local_108 < 0) {
                            uVar6 = FUN_00488ba0();
                            return uVar6;
                          }
                          local_144 = local_144 + local_108;
                          uVar8 = 0xffffffff;
                          pcVar13 = local_11fd + 1;
                          do {
                            if (uVar8 == 0) break;
                            uVar8 = uVar8 - 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                          } while (cVar1 != '\0');
                          iVar4 = ~uVar8 - 1;
                          if (0 < iVar4) {
                            pcVar13 = local_11fd + ~uVar8;
                            do {
                              if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                              iVar4 = iVar4 + -1;
                              pcVar13 = pcVar13 + -1;
                            } while (0 < iVar4);
                          }
                          (local_11fd + 1)[iVar4] = '\0';
                          while (((&DAT_0061ed94)[(byte)(local_11fd[1] + 1)] & 2) != 0) {
                            FUN_005ba1f0(local_11fd + 1);
                          }
                          local_104 = FUN_00488d00(local_11fd + 1,DAT_007bdc94,&DAT_007bdc5c);
                          if (local_104 == 0) {
                            return 0;
                          }
                          if (local_104 == 0x0FFFFFFF) {
                            local_148 = 0;
                          }
                          local_108 = -1;
                          local_100 = -1;
                          FUN_005ba8cc(local_144,"%d )%n",&local_100,&local_108);
                          if (local_108 < 1) {
                            FUN_005ba8cc(local_144,"%[^)])%n",local_645 + 1,&local_108);
                            if (local_108 < 0) {
                              uVar6 = FUN_00488ba0();
                              return uVar6;
                            }
                            uVar8 = 0xffffffff;
                            pcVar13 = local_645 + 1;
                            do {
                              if (uVar8 == 0) break;
                              uVar8 = uVar8 - 1;
                              cVar1 = *pcVar13;
                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                            } while (cVar1 != '\0');
                            iVar4 = ~uVar8 - 1;
                            if (0 < iVar4) {
                              pcVar13 = local_645 + ~uVar8;
                              do {
                                if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                iVar4 = iVar4 + -1;
                                pcVar13 = pcVar13 + -1;
                              } while (0 < iVar4);
                            }
                            (local_645 + 1)[iVar4] = '\0';
                            while (((&DAT_0061ed94)[(byte)(local_645[1] + 1)] & 2) != 0) {
                              FUN_005ba1f0(local_645 + 1);
                            }
                            local_100 = -1;
                            iVar4 = local_100;
                            if (local_104 != 0x0FFFFFFF) {
                              iVar11 = 0;
                              iVar5 = local_104;
                              do {
                                if ((*(int *)(iVar5 + 0x2620) != 0) &&
                                   (iVar7 = FUN_005b8130(*(int *)(iVar5 + 0x2620),local_645 + 1),
                                   iVar4 = iVar11, iVar7 == 0)) break;
                                iVar11 = iVar11 + 1;
                                iVar5 = iVar5 + 0x78;
                                iVar4 = local_100;
                              } while (iVar11 < 2);
                            }
                          }
                          else if ((local_100 < 0) || (iVar4 = local_100, 1 < local_100)) {
                            uVar6 = FUN_00488ba0("Invalid hand index: %d",local_100);
                            return uVar6;
                          }
                          local_100 = iVar4;
                          local_144 = local_144 + local_108;
                          if ((local_104 != 0x0FFFFFFF) &&
                             (*(int *)(local_100 * 0x78 + local_104 + 0x2618) < 0)) {
                            uVar6 = FUN_00488ba0("%s doesn't have hand %d",local_104,
                                                 local_100);
                            return uVar6;
                          }
                          if ((local_148 != 0) && (-1 < local_100)) {
                            (**(code **)(*(int *)(local_104 + 0x2b0) + 0x130))
                                      (local_104,local_100,0);
                          }
                        }
                        else {
                          iVar4 = FUN_005b8da0(param_2,"enableFieldNotesEntry",0x15);
                          if ((iVar4 == 0) &&
                             (((&DAT_0061ed94)[(byte)(param_2[0x15] + 1)] & 0xe0) == 0)) {
                            local_144 = param_2 + 0x15;
                            while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                              local_144 = local_144 + 1;
                            }
                            local_fc = -1;
                            FUN_005ba8cc(local_144,"(%[^)])%n",local_1eb5 + 1,&local_fc);
                            if (local_fc < 3) {
                              uVar6 = FUN_00488ba0();
                              return uVar6;
                            }
                            local_144 = local_144 + local_fc;
                            uVar8 = 0xffffffff;
                            pcVar13 = local_1eb5 + 1;
                            do {
                              if (uVar8 == 0) break;
                              uVar8 = uVar8 - 1;
                              cVar1 = *pcVar13;
                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                            } while (cVar1 != '\0');
                            iVar4 = ~uVar8 - 1;
                            if (0 < iVar4) {
                              pcVar13 = local_1eb5 + ~uVar8;
                              do {
                                if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                iVar4 = iVar4 + -1;
                                pcVar13 = pcVar13 + -1;
                              } while (0 < iVar4);
                            }
                            (local_1eb5 + 1)[iVar4] = '\0';
                            while (((&DAT_0061ed94)[(byte)(local_1eb5[1] + 1)] & 2) != 0) {
                              FUN_005ba1f0(local_1eb5 + 1);
                            }
                            if (_DAT_01c3dd0c != 0) {
                              uVar6 = FUN_004a5430(0x01CAF56C,local_1eb5 + 1);
                              switch(uVar6) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_00489e7e_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                uVar6 = FUN_00488ba0("Field notes entry '%s' is a task (use addFieldNotesTask for this)",
                                                     local_1eb5 + 1);
                                return uVar6;
                              default:
                                uVar6 = FUN_00488ba0("Field notes entry '%s' not found",
                                                     local_1eb5 + 1);
                                return uVar6;
                              }
                            }
                            FUN_004a5310(0x01CAF56C,local_1eb5 + 1);
                          }
                          else {
                            iVar4 = FUN_005b8da0(param_2,"enableFieldNotesAnnotation",0x1a);
                            if ((iVar4 == 0) &&
                               (((&DAT_0061ed94)[(byte)(param_2[0x1a] + 1)] & 0xe0) == 0)) {
                              local_144 = param_2 + 0x1a;
                              while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                                local_144 = local_144 + 1;
                              }
                              local_f8 = -1;
                              FUN_005ba8cc(local_144,"(%[^,], %[^)])%n",local_28b5 + 1,local_29b4,
                                           &local_f8);
                              if (local_f8 < 4) {
                                uVar6 = FUN_00488ba0();
                                return uVar6;
                              }
                              local_144 = local_144 + local_f8;
                              uVar8 = 0xffffffff;
                              pcVar13 = local_29b4;
                              do {
                                if (uVar8 == 0) break;
                                uVar8 = uVar8 - 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                              } while (cVar1 != '\0');
                              iVar4 = ~uVar8 - 1;
                              if (0 < iVar4) {
                                pcVar13 = local_29b4 + (~uVar8 - 1);
                                do {
                                  if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                  iVar4 = iVar4 + -1;
                                  pcVar13 = pcVar13 + -1;
                                } while (0 < iVar4);
                              }
                              local_29b4[iVar4] = '\0';
                              while (((&DAT_0061ed94)[(byte)(local_29b4[0] + 1)] & 2) != 0) {
                                FUN_005ba1f0(local_29b4);
                              }
                              uVar8 = 0xffffffff;
                              pcVar13 = local_28b5 + 1;
                              do {
                                if (uVar8 == 0) break;
                                uVar8 = uVar8 - 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                              } while (cVar1 != '\0');
                              iVar4 = ~uVar8 - 1;
                              if (0 < iVar4) {
                                pcVar13 = local_28b5 + ~uVar8;
                                do {
                                  if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                  iVar4 = iVar4 + -1;
                                  pcVar13 = pcVar13 + -1;
                                } while (0 < iVar4);
                              }
                              (local_28b5 + 1)[iVar4] = '\0';
                              while (((&DAT_0061ed94)[(byte)(local_28b5[1] + 1)] & 2) != 0) {
                                FUN_005ba1f0(local_28b5 + 1);
                              }
                              if (_DAT_01c3dd0c != 0) {
                                uVar6 = FUN_004a5430(0x01CAF56C,local_29b4);
                                switch(uVar6) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_00489e7e_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  uVar6 = FUN_00488ba0("Field notes entry '%s' is a task (use addFieldNotesTask for this)",
                                                       local_29b4);
                                  return uVar6;
                                default:
                                  uVar6 = FUN_00488ba0("Field notes entry '%s' not found",local_29b4
                                                      );
                                  return uVar6;
                                }
                              }
                              iVar4 = FUN_004a5200(0x01CAF56C,local_28b5 + 1,local_29b4,local_27b4
                                                  );
                              if (iVar4 == 0) {
                                uVar6 = FUN_00488ba0();
                                return uVar6;
                              }
                            }
                            else {
                              iVar4 = FUN_005b8da0(param_2,"fadeAmbientSound",0x10);
                              if ((iVar4 == 0) &&
                                 (((&DAT_0061ed94)[(byte)(param_2[0x10] + 1)] & 0xe0) == 0)) {
                                local_144 = param_2 + 0x10;
                                while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                                  local_144 = local_144 + 1;
                                }
                                local_ec = -1;
                                FUN_005ba8cc(local_144,"(%f, %f )%n",&local_f4,&local_f0,
                                             &local_ec);
                                if (local_ec < 0) {
                                  FUN_005b7790(&DAT_01c3dd10,"Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_144 = local_144 + local_ec;
                                if (local_148 != 0) {
                                  FUN_0055b1b0(0x0264B290,local_f4,local_f0);
                                }
                              }
                              else {
                                iVar4 = FUN_005b8da0(param_2,"fadeSfx",7);
                                if ((iVar4 == 0) &&
                                   (((&DAT_0061ed94)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_144 = param_2 + 7;
                                  while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                                    local_144 = local_144 + 1;
                                  }
                                  local_e0 = -1;
                                  FUN_005ba8cc(local_144,"(%[^,], %f, %f )%n",local_138d + 1,&local_e8,
                                               &local_e4,&local_e0);
                                  if (local_e0 < 0) {
                                    FUN_005b7790(&DAT_01c3dd10,"Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_144 = local_144 + local_e0;
                                  uVar8 = 0xffffffff;
                                  pcVar13 = local_138d + 1;
                                  do {
                                    if (uVar8 == 0) break;
                                    uVar8 = uVar8 - 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  iVar4 = ~uVar8 - 1;
                                  if (0 < iVar4) {
                                    pcVar13 = local_138d + ~uVar8;
                                    do {
                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                      break;
                                      iVar4 = iVar4 + -1;
                                      pcVar13 = pcVar13 + -1;
                                    } while (0 < iVar4);
                                  }
                                  (local_138d + 1)[iVar4] = '\0';
                                  while (((&DAT_0061ed94)[(byte)(local_138d[1] + 1)] & 2) != 0) {
                                    FUN_005ba1f0(local_138d + 1);
                                  }
                                  if (local_148 != 0) {
                                    uVar6 = FUN_00491920(param_1,local_138d + 1);
                                    if (local_e4 <= 0.0) {
                                      FUN_00550f20(uVar6,local_e8);
                                    }
                                    else {
                                      FUN_00551080(uVar6,local_e8,local_e4,0);
                                    }
                                  }
                                }
                                else {
                                  iVar4 = FUN_005b8da0(param_2,"flagOn",6);
                                  if ((iVar4 == 0) &&
                                     (((&DAT_0061ed94)[(byte)(param_2[6] + 1)] & 0xe0) == 0)) {
                                    local_144 = param_2 + 6;
                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                                      local_144 = local_144 + 1;
                                    }
                                    pcVar13 = (char *)FUN_00488fc0(&local_144,local_1cc,0x20,1);
                                    if (pcVar13 != (char *)0x0) {
LAB_00489a3d:
                                      pcVar12 = &DAT_01c3dd10;
                                      do {
                                        cVar1 = *pcVar13;
                                        *pcVar12 = cVar1;
                                        if (cVar1 == '\0') {
                                          return 0;
                                        }
                                        cVar1 = pcVar13[1];
                                        pcVar13 = pcVar13 + 2;
                                        pcVar12[1] = cVar1;
                                        pcVar12 = pcVar12 + 2;
                                      } while (cVar1 != '\0');
                                      return 0;
                                    }
                                    if (local_148 != 0) {
                                      FUN_00490f80(param_1,local_1cc,1);
                                    }
                                  }
                                  else {
                                    iVar4 = FUN_005b8da0(param_2,"flagOff",7);
                                    if ((iVar4 == 0) &&
                                       (((&DAT_0061ed94)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                      local_144 = param_2 + 7;
                                      while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                                        local_144 = local_144 + 1;
                                      }
                                      pcVar13 = (char *)FUN_00488fc0(&local_144,local_22c,0x20,1);
                                      if (pcVar13 != (char *)0x0) goto LAB_00489a3d;
                                      if (local_148 != 0) {
                                        FUN_00490f80(param_1,local_22c,0);
                                      }
                                    }
                                    else {
                                      iVar4 = FUN_005b8da0(param_2,"gameFlagOn",10);
                                      if ((iVar4 == 0) &&
                                         (((&DAT_0061ed94)[(byte)(param_2[10] + 1)] & 0xe0) == 0)) {
                                        local_144 = param_2 + 10;
                                        while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
                                          local_144 = local_144 + 1;
                                        }
                                        pcVar13 = (char *)FUN_00488fc0(&local_144,local_20c,0x20,1);
                                        if (pcVar13 != (char *)0x0) goto LAB_00489a3d;
                                        if (local_148 != 0) {
                                          FUN_00491110(param_1,local_20c,1);
                                        }
                                      }
                                      else {
                                        iVar4 = FUN_005b8da0(param_2,"gameFlagOff",0xb);
                                        if ((iVar4 == 0) &&
                                           (((&DAT_0061ed94)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)
                                           ) {
                                          local_144 = param_2 + 0xb;
                                          while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0)
                                          {
                                            local_144 = local_144 + 1;
                                          }
                                          pcVar13 = (char *)FUN_00488fc0(&local_144,local_1ec,0x20,1
                                                                        );
                                          if (pcVar13 != (char *)0x0) goto LAB_00489a3d;
                                          if (local_148 != 0) {
                                            FUN_00491110(param_1,local_1ec,0);
                                          }
                                        }
                                        else {
                                          iVar4 = FUN_005b8da0(param_2,"hurtCharacter",0xd)
                                          ;
                                          if ((iVar4 == 0) &&
                                             (((&DAT_0061ed94)[(byte)(param_2[0xd] + 1)] & 0xe0) ==
                                              0)) {
                                            local_144 = param_2 + 0xd;
                                            while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) !=
                                                   0) {
                                              local_144 = local_144 + 1;
                                            }
                                            local_dc = -1;
                                            FUN_005ba8cc(local_144," ( %[^,], %[^,],%f)%n",local_1135 + 1,
                                                         local_389 + 1,&local_d8,&local_dc);
                                            if (local_dc < 2) {
                                              uVar6 = FUN_00488ba0();
                                              return uVar6;
                                            }
                                            uVar8 = 0xffffffff;
                                            pcVar13 = local_1135 + 1;
                                            do {
                                              if (uVar8 == 0) break;
                                              uVar8 = uVar8 - 1;
                                              cVar1 = *pcVar13;
                                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                            } while (cVar1 != '\0');
                                            iVar4 = ~uVar8 - 1;
                                            if (0 < iVar4) {
                                              pcVar13 = local_1135 + ~uVar8;
                                              do {
                                                if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2)
                                                    == 0) break;
                                                iVar4 = iVar4 + -1;
                                                pcVar13 = pcVar13 + -1;
                                              } while (0 < iVar4);
                                            }
                                            (local_1135 + 1)[iVar4] = '\0';
                                            while (((&DAT_0061ed94)[(byte)(local_1135[1] + 1)] & 2)
                                                   != 0) {
                                              FUN_005ba1f0(local_1135 + 1);
                                            }
                                            uVar8 = 0xffffffff;
                                            pcVar13 = local_389 + 1;
                                            do {
                                              if (uVar8 == 0) break;
                                              uVar8 = uVar8 - 1;
                                              cVar1 = *pcVar13;
                                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                            } while (cVar1 != '\0');
                                            iVar4 = ~uVar8 - 1;
                                            if (0 < iVar4) {
                                              pcVar13 = local_389 + ~uVar8;
                                              do {
                                                if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2)
                                                    == 0) break;
                                                iVar4 = iVar4 + -1;
                                                pcVar13 = pcVar13 + -1;
                                              } while (0 < iVar4);
                                            }
                                            (local_389 + 1)[iVar4] = '\0';
                                            while (((&DAT_0061ed94)[(byte)(local_389[1] + 1)] & 2)
                                                   != 0) {
                                              FUN_005ba1f0(local_389 + 1);
                                            }
                                            local_144 = local_144 + local_dc;
                                            while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) !=
                                                   0) {
                                              local_144 = local_144 + 1;
                                            }
                                            iVar4 = FUN_00488d00(local_1135 + 1,DAT_007bdc94,
                                                                 &DAT_007bdc5c);
                                            if (iVar4 == 0) {
                                              return 0;
                                            }
                                            if (iVar4 == 0x0FFFFFFF) {
                                              local_148 = 0;
                                            }
                                            iVar5 = FUN_00489270(local_389 + 1,&local_d4);
                                            if (iVar5 == 0) {
                                              uVar6 = FUN_00488ba0(
                                                  "Unknown damage type \"%s\" in hurtCharacter command.",local_389 + 1)
                                              ;
                                              return uVar6;
                                            }
                                            if (local_148 != 0) {
                                              (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xe0))
                                                        (iVar4,local_d4,local_d8);
                                            }
                                          }
                                          else {
                                            iVar4 = FUN_005b8da0(param_2,"incCounter",10);
                                            if ((iVar4 == 0) &&
                                               (((&DAT_0061ed94)[(byte)(param_2[10] + 1)] & 0xe0) ==
                                                0)) {
                                              local_144 = param_2 + 10;
                                              while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2)
                                                     != 0) {
                                                local_144 = local_144 + 1;
                                              }
                                              local_d0 = -1;
                                              FUN_005ba8cc(local_144,"( %[^ )] )%n",local_965 + 1,
                                                           &local_d0);
                                              if (local_d0 < 5) {
                                                FUN_005b7790(&DAT_01c3dd10,
                                                             "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_144 = local_144 + local_d0;
                                              uVar8 = 0xffffffff;
                                              pcVar13 = local_965 + 1;
                                              do {
                                                if (uVar8 == 0) break;
                                                uVar8 = uVar8 - 1;
                                                cVar1 = *pcVar13;
                                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                              } while (cVar1 != '\0');
                                              iVar4 = ~uVar8 - 1;
                                              if (0 < iVar4) {
                                                pcVar13 = local_965 + ~uVar8;
                                                do {
                                                  if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] & 2)
                                                      == 0) break;
                                                  iVar4 = iVar4 + -1;
                                                  pcVar13 = pcVar13 + -1;
                                                } while (0 < iVar4);
                                              }
                                              (local_965 + 1)[iVar4] = '\0';
                                              while (((&DAT_0061ed94)[(byte)(local_965[1] + 1)] & 2)
                                                     != 0) {
                                                FUN_005ba1f0(local_965 + 1);
                                              }
                                              if (local_148 != 0) {
                                                iVar4 = FUN_00491510(param_1,local_965 + 1);
                                                FUN_00491400(param_1,local_965 + 1,iVar4 + 1);
                                              }
                                            }
                                            else {
                                              iVar4 = FUN_005b8da0(param_2,"killCharacter",
                                                                   0xd);
                                              if ((iVar4 == 0) &&
                                                 (((&DAT_0061ed94)[(byte)(param_2[0xd] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_144 = param_2 + 0xd;
                                                while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2)
                                                       != 0) {
                                                  local_144 = local_144 + 1;
                                                }
                                                local_c8 = local_184;
                                                local_c4 = 0.0;
                                                local_cc = -1;
                                                FUN_005ba8cc(local_144," ( %[^,], %[^,], %f , %f , %f , %f)%n",
                                                             local_1ced + 1,local_325 + 1,local_184,
                                                             local_180,local_17c,&local_c4,&local_cc
                                                            );
                                                local_c4 = local_c4 * _DAT_005d437f;
                                                if (local_cc < 0) {
                                                  local_c4 = -1.0;
                                                  FUN_005ba8cc(local_144," ( %[^,], %[^,], %f , %f , %f )%n",
                                                               local_1ced + 1,local_325 + 1,
                                                               local_184,local_180,local_17c,
                                                               &local_cc);
                                                }
                                                if (local_cc < 0) {
                                                  local_c8 = (byte *)0x0;
                                                  FUN_005ba8cc(local_144," ( %[^,], %[^)])%n",local_1ced + 1
                                                               ,local_325 + 1,&local_cc);
                                                }
                                                if (local_cc < 0) {
                                                  uVar6 = FUN_00488ba0();
                                                  return uVar6;
                                                }
                                                uVar8 = 0xffffffff;
                                                pcVar13 = local_1ced + 1;
                                                do {
                                                  if (uVar8 == 0) break;
                                                  uVar8 = uVar8 - 1;
                                                  cVar1 = *pcVar13;
                                                  pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                } while (cVar1 != '\0');
                                                iVar4 = ~uVar8 - 1;
                                                if (0 < iVar4) {
                                                  pcVar13 = local_1ced + ~uVar8;
                                                  do {
                                                    if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] &
                                                        2) == 0) break;
                                                    iVar4 = iVar4 + -1;
                                                    pcVar13 = pcVar13 + -1;
                                                  } while (0 < iVar4);
                                                }
                                                (local_1ced + 1)[iVar4] = '\0';
                                                while (((&DAT_0061ed94)[(byte)(local_1ced[1] + 1)] &
                                                       2) != 0) {
                                                  FUN_005ba1f0(local_1ced + 1);
                                                }
                                                uVar8 = 0xffffffff;
                                                pcVar13 = local_325 + 1;
                                                do {
                                                  if (uVar8 == 0) break;
                                                  uVar8 = uVar8 - 1;
                                                  cVar1 = *pcVar13;
                                                  pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                } while (cVar1 != '\0');
                                                iVar4 = ~uVar8 - 1;
                                                if (0 < iVar4) {
                                                  pcVar13 = local_325 + ~uVar8;
                                                  do {
                                                    if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)] &
                                                        2) == 0) break;
                                                    iVar4 = iVar4 + -1;
                                                    pcVar13 = pcVar13 + -1;
                                                  } while (0 < iVar4);
                                                }
                                                (local_325 + 1)[iVar4] = '\0';
                                                while (((&DAT_0061ed94)[(byte)(local_325[1] + 1)] &
                                                       2) != 0) {
                                                  FUN_005ba1f0(local_325 + 1);
                                                }
                                                local_144 = local_144 + local_cc;
                                                while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2)
                                                       != 0) {
                                                  local_144 = local_144 + 1;
                                                }
                                                iVar4 = FUN_00488d00(local_1ced + 1,DAT_007bdc94,
                                                                     &DAT_007bdc5c);
                                                if (iVar4 == 0) {
                                                  return 0;
                                                }
                                                if (iVar4 == 0x0FFFFFFF) {
                                                  local_148 = 0;
                                                }
                                                iVar5 = FUN_004890e0(local_325 + 1,&local_c0);
                                                if (iVar5 == 0) {
                                                  uVar6 = FUN_00488ba0(
                                                  "Unknown death type \"%s\" in killCharacter command.",local_325 + 1);
                                                  return uVar6;
                                                }
                                                if (local_148 != 0) {
                                                  (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xe4))
                                                            (iVar4,local_c0,local_c8,local_c4);
                                                }
                                              }
                                              else {
                                                iVar4 = FUN_005b8da0(param_2,"killHero",8);
                                                if ((iVar4 == 0) &&
                                                   (((&DAT_0061ed94)[(byte)(param_2[8] + 1)] & 0xe0)
                                                    == 0)) {
                                                  local_144 = param_2 + 8;
                                                  while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] &
                                                         2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  if (*0x01D34CB0 != 0) {
                                                    uVar6 = FUN_00488ba0();
                                                    return uVar6;
                                                  }
                                                  local_b8 = -1;
                                                  FUN_005ba8cc(local_144," ( %[^)])%n",local_3ec,
                                                               &local_b8);
                                                  if (local_b8 < 2) {
                                                    uVar6 = FUN_00488ba0();
                                                    return uVar6;
                                                  }
                                                  local_144 = local_144 + local_b8;
                                                  while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] &
                                                         2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  iVar4 = FUN_004890e0(local_3ec,&local_b4);
                                                  if (iVar4 == 0) {
                                                    uVar6 = FUN_00488ba0(
                                                  "Unknown death type \"%s\" in killHero command.",local_3ec);
                                                  return uVar6;
                                                  }
                                                  if ((local_148 != 0) &&
                                                     (iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4
                                                                      ), iVar4 != 0)) {
                                                    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xe4))
                                                              (iVar4,local_b4,0,0xbf800000);
                                                  }
                                                }
                                                else {
                                                  iVar4 = FUN_005b8da0(param_2,"killSfx",7)
                                                  ;
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[7] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 7;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_ac = -1;
                                                    FUN_005ba8cc(local_144,"(%[^,)]%n",
                                                                 local_70d + 1,&local_ac);
                                                    if (local_ac < 3) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_ac;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_70d + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_70d + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_70d + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_70d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_70d + 1);
                                                  }
                                                  local_a8 = 0.0;
                                                  pcVar13 = local_144;
                                                  if (*local_144 == ',') {
                                                    local_ac = -1;
                                                    FUN_005ba8cc(local_144,",%f%n",&local_a8,
                                                                 &local_ac);
                                                    if (local_ac < 3) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  pcVar13 = local_144 + local_ac;
                                                  }
                                                  do {
                                                    local_144 = pcVar13;
                                                    pcVar13 = local_144 + 1;
                                                  } while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0);
                                                  if (*local_144 != ')') {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "Can't find matching ) in killSfx command"
                                                                );
                                                    return 0;
                                                  }
                                                  local_144 = pcVar13;
                                                  if (local_148 != 0) {
                                                    uVar6 = FUN_00491920(param_1,local_70d + 1);
                                                    if (local_a8 <= 0.0) {
                                                      FUN_00551050();
                                                      FUN_00491a90();
                                                    }
                                                    else {
                                                      FUN_00551080(uVar6,0,local_a8,1);
                                                      FUN_00491a90();
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "lightning",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 9;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_a4 = -1;
                                                    FUN_005ba8cc(local_144,"( )%n",&local_a4);
                                                    if (local_a4 < 2) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_a4;
                                                  if (local_148 != 0) {
                                                    FUN_0058aa30(0x02661F80,0x3dcccccd,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,"playSfx",
                                                                         7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_144 = param_2 + 7;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_a0 = -1;
                                                      FUN_005ba8cc(local_144,"(%[^,)]%n",
                                                                   local_bbd + 1,&local_a0);
                                                      if (local_a0 < 3) {
                                                        FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                          
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_a0;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_bbd + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_bbd + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_bbd + 1)[iVar4] = '\0';
                                                  while (pcVar13 = local_144,
                                                        ((&DAT_0061ed94)[(byte)(local_bbd[1] + 1)] &
                                                        2) != 0) {
                                                    FUN_005ba1f0(local_bbd + 1);
                                                  }
                                                  puVar10 = &DAT_00614288;
                                                  puVar16 = (uint *)((int)local_57d + 1);
                                                  for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1)
                                                  {
                                                    *puVar16 = *puVar10;
                                                    puVar10 = puVar10 + (uint)bVar17 * -2 + 1;
                                                    puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
                                                  }
                                                  pcVar12 = local_144;
                                                  if (*pcVar13 == ',') {
                                                    local_a0 = -1;
                                                    FUN_005ba8cc(local_144,",%[^)]%n",
                                                                 (int)local_57d + 1,&local_a0);
                                                    if (local_a0 < 3) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_a0;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = (char *)((int)local_57d + 1);
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_57d + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  *(byte *)((int)local_57d + 1U + iVar4) = 0;
                                                  while (((&DAT_0061ed94)[(byte)(local_57d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0((int)local_57d + 1U);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = (char *)((int)local_57d + 1);
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  pcVar12 = local_144;
                                                  if (0x13 < ~uVar8 - 1) {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "handle name %s is too long, max %d chars"
                                                                 ,(int)local_57d + 1,0x13);
                                                    return 0;
                                                  }
                                                  }
                                                  do {
                                                    local_144 = pcVar12;
                                                    pcVar12 = local_144 + 1;
                                                  } while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0);
                                                  if (*local_144 != ')') {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "Can't find matching ) in playSfx command"
                                                                );
                                                    return 0;
                                                  }
                                                  local_144 = pcVar12;
                                                  if (local_148 != 0) {
                                                    iVar4 = FUN_005b8da0(local_bbd + 1,&DAT_005d3b76
                                                                         ,3);
                                                    if (iVar4 == 0) {
                                                      iVar4 = FUN_005512a0();
                                                      if (iVar4 != 0) {
                                                        FUN_00550450();
                                                        FUN_00550310();
                                                        uVar6 = FUN_0055ae30(0x0264B290,param_1,
                                                                             local_bbd + 1);
                                                        FUN_005504d0();
                                                        if (local_57d[1] != '\0') {
                                                          FUN_00491960(param_1,(int)local_57d + 1,
                                                                       uVar6);
                                                        }
                                                      }
                                                    }
                                                    else {
                                                      uVar6 = FUN_0055ae30(0x0264B290,param_1,
                                                                           local_bbd + 1);
                                                      if (local_57d[1] != '\0') {
                                                        FUN_00491960(param_1,(int)local_57d + 1,
                                                                     uVar6);
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "resetGore",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 9;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_9c = -1;
                                                    FUN_005ba8cc(local_144,"( )%n",&local_9c);
                                                    if (local_9c < 2) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_9c;
                                                  if (local_148 != 0) {
                                                    FUN_004c93f0();
                                                    FUN_0049c190();
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setActorBool",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0xc;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_98 = -1;
                                                    FUN_005ba8cc(local_144,"(%[^,], %[^,], %[^)])%n",
                                                                 local_7d5 + 1,local_af5 + 1,
                                                                 local_1a95 + 1,&local_98);
                                                    if (local_98 < 3) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setActorBool parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_98;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_7d5 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_7d5 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_7d5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_7d5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_7d5 + 1);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_af5 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_af5 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_af5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_af5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_af5 + 1);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_1a95 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1a95 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1a95 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1a95[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_1a95 + 1);
                                                  }
                                                  iVar5 = 0;
                                                  local_94 = 0;
                                                  iVar4 = local_94;
                                                  if (0 < 0x00000002) {
                                                    iVar11 = 0;
                                                    do {
                                                      if (*(int *)((int)&DAT_006141f4 + iVar11) == 0
                                                         ) {
                                                        iVar7 = FUN_005b8130("spectralFlag"
                                                                             + iVar11,local_af5 + 1)
                                                        ;
                                                        iVar4 = (int)&DAT_006141f4 + iVar11;
                                                        if (iVar7 == 0) break;
                                                      }
                                                      iVar5 = iVar5 + 1;
                                                      iVar11 = iVar11 + 0x48;
                                                      iVar4 = local_94;
                                                    } while (iVar5 < 0x00000002);
                                                  }
                                                  local_94 = iVar4;
                                                  if (local_94 == 0) {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "%s is not a valid boolean actor variable name"
                                                                 ,local_af5 + 1);
                                                    return 0;
                                                  }
                                                  iVar4 = FUN_00488d00(local_7d5 + 1,
                                                                       *(uint *)
                                                                        (local_94 + 0x44),
                                                                       local_94 + 0x22);
                                                  if (iVar4 == 0) {
                                                    return 0;
                                                  }
                                                  if ((iVar4 == 0x0FFFFFFF) || (local_148 == 0)) {
                                                    iVar4 = FUN_0048e3a0(param_1,local_1a95 + 1);
                                                    if (iVar4 != 0) {
                                                      return 0;
                                                    }
                                                  }
                                                  else {
                                                    uVar6 = FUN_0048e340(0x01C38BC0,local_1a95 + 1
                                                                        );
                                                    *(uint *)
                                                     (*(int *)(local_94 + 0x40) + iVar4) = uVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setCameraAmbient",0x10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0x10;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_8c = -1;
                                                    FUN_005ba8cc(local_144,"(%[^,], %f)%n",
                                                                 local_151d + 1,&local_90,&local_8c)
                                                    ;
                                                    if (local_8c < 3) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setCameraAmbient parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_8c;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_151d + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_151d + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_151d + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_151d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_151d + 1);
                                                  }
                                                  iVar4 = FUN_0052e8c0(0x01E661B8,local_151d + 1);
                                                  if (iVar4 < 0) {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "Camera \"%s\" does not exist.",
                                                                 local_151d + 1);
                                                    return 0;
                                                  }
                                                  if ((local_90 < 0.0) ||
                                                     (0x42c80000 < (int)local_90)) {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "Ambient value %g is out of range (1..100)"
                                                                 ,(double)local_90);
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                    FUN_00534640(0x01E661B8,iVar4,
                                                                 local_90 * (float)_DAT_005d4383);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setCounter",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 10;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_88 = -1;
                                                    FUN_005ba8cc(local_144,"( %[^,)]%n",
                                                                 local_1775 + 1,&local_88);
                                                    if (local_88 < 5) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_88;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_1775 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1775 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1775 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1775[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_1775 + 1);
                                                  }
                                                  local_84 = 0;
                                                  if (*local_144 == ',') {
                                                    local_88 = -1;
                                                    FUN_005ba8cc(local_144,",%d%n",&local_84,
                                                                 &local_88);
                                                    if (local_88 < 1) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setCounter value argument");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_88;
                                                  while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] &
                                                         2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  }
                                                  if (*local_144 != ')') {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "Error parsing setCounter arguments"
                                                                );
                                                    return 0;
                                                  }
                                                  local_144 = local_144 + 1;
                                                  if (local_148 != 0) {
                                                    FUN_00491400(param_1,local_1775 + 1,local_84);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setDoorState",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0xc;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_80 = -1;
                                                    FUN_005ba8cc(local_144,"(%[^,], %[^)])%n",
                                                                 local_1905 + 1,local_183d + 1,
                                                                 &local_80);
                                                    if (local_80 < 5) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setDoorState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_80;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_1905 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1905 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1905 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1905[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_1905 + 1);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_183d + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_183d + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_183d + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_183d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_183d + 1);
                                                  }
                                                  iVar4 = FUN_00488d00(local_1905 + 1,_DAT_01b4d36c,
                                                                       0x1b4d334);
                                                  if (iVar4 == 0) {
                                                    return 0;
                                                  }
                                                  if (iVar4 == 0x0FFFFFFF) {
                                                    local_148 = 0;
                                                  }
                                                  iVar5 = FUN_005b8130(local_183d + 1,&DAT_005d3d79)
                                                  ;
                                                  if (iVar5 == 0) {
                                                    uVar6 = 2;
                                                  }
                                                  else {
                                                    iVar5 = FUN_005b8130(local_183d + 1,
                                                                         "closed");
                                                    uVar6 = 0;
                                                    if (iVar5 != 0) {
                                                      iVar5 = FUN_005b8130(local_183d + 1,
                                                                           "opening");
                                                      if (iVar5 == 0) {
                                                        uVar6 = 1;
                                                      }
                                                      else {
                                                        iVar5 = FUN_005b8130(local_183d + 1,
                                                                             "closing");
                                                        if (iVar5 != 0) {
                                                          FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                              
                                                  "Invalid door state '%s'",local_183d + 1);
                                                  return 0;
                                                  }
                                                  uVar6 = 3;
                                                  }
                                                  }
                                                  }
                                                  if (local_148 != 0) {
                                                    FUN_0045efe0(iVar4,uVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setGroupAmbient",0xf);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0xf;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_74 = -1;
                                                    FUN_005ba8cc(local_144,"(%d, %f)%n",
                                                                 &local_7c,&local_78,&local_74);
                                                    if (local_74 < 3) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setGroupAmbient parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_74;
                                                  if ((local_78 < 0.0) ||
                                                     (0x42c80000 < (int)local_78)) {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "Ambient value %g is out of range (1..100)"
                                                                 ,(double)local_78);
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                    FUN_005346c0(0x01E661B8,local_7c,
                                                                 local_78 * (float)_DAT_005d4383);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0x13] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0x13;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_70 = -1;
                                                    FUN_005ba8cc(local_144,"( %[^ ,] , %d )%n",local_19cc
                                                                 ,&local_6c,&local_70);
                                                    if (local_70 < 0) {
                                                      uVar6 = FUN_00488ba0();
                                                      return uVar6;
                                                    }
                                                    local_144 = local_144 + local_70;
                                                    FUN_00534770(0x01E661B8,local_19cc,&local_68,
                                                                 &local_64);
                                                    if (local_68 == 0) {
                                                      uVar6 = FUN_00488ba0(
                                                  "SpotLight %s doesn't exist.",local_19cc);
                                                  return uVar6;
                                                  }
                                                  if ((local_6c < 0) ||
                                                     (*(int *)(local_68 + 0x11ec) <= local_6c)) {
                                                    uVar6 = FUN_00488ba0(
                                                  "Invalid filter frame, %s has %d filters",local_19cc,
                                                  *(uint *)(local_68 + 0x11ec));
                                                  return uVar6;
                                                  }
                                                  if (local_148 != 0) {
                                                    if (local_64 == 0) {
                                                      _DAT_01d046a0 = "..\\core\\event.cpp";
                                                      _DAT_01d046a4 = 0x718;
                                                      FUN_004e4500(
                                                  "Can't find CDemonLight for light %s in setLightFilterFrame meta-command",local_19cc);
                                                  }
                                                  FUN_0053bb20(local_68,local_6c,local_64);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setLeverState",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0xd;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_60 = -1;
                                                    FUN_005ba8cc(local_144,"(%[^,], %[^)])%n",
                                                                 local_a2d + 1,local_89d + 1,
                                                                 &local_60);
                                                    if (local_60 < 5) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setLeverState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_60;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_a2d + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_a2d + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_a2d + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_a2d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_a2d + 1);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_89d + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_89d + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_89d + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_89d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_89d + 1);
                                                  }
                                                  iVar4 = FUN_00488d00(local_a2d + 1,_DAT_01d03500,
                                                                       0x1d034c8);
                                                  if (iVar4 == 0) {
                                                    return 0;
                                                  }
                                                  if ((iVar4 == 0x0FFFFFFF) || (local_148 == 0)) {
                                                    iVar4 = FUN_0048e3a0(param_1,local_89d + 1);
                                                    if (iVar4 != 0) {
                                                      return 0;
                                                    }
                                                  }
                                                  else {
                                                    iVar5 = FUN_0048e340(0x01C38BC0,local_89d + 1)
                                                    ;
                                                    if (iVar5 == 0) {
                                                      uStack_150 = 0;
                                                    }
                                                    else {
                                                      uStack_150 = 0x3ff00000;
                                                    }
                                                    local_154 = 0;
                                                    FUN_004e1f70(iVar4,(float)(double)((ulonglong)
                                                                                       uStack_150 <<
                                                                                      0x20));
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setModelState",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0xd;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_58 = -1;
                                                    FUN_005ba8cc(local_144,"(%[^,], %[^)])%n",
                                                                 local_1db5 + 1,local_1455 + 1,
                                                                 &local_58);
                                                    if (local_58 < 5) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setModelState command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_58;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_1db5 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1db5 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1db5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1db5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_1db5 + 1);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_1455 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1455 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1455 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1455[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_1455 + 1);
                                                  }
                                                  iVar4 = FUN_00488d00(local_1db5 + 1,DAT_007bdc94,
                                                                       &DAT_007bdc5c);
                                                  if (iVar4 == 0) {
                                                    return 0;
                                                  }
                                                  if (iVar4 != 0x0FFFFFFF) {
                                                    uVar6 = FUN_00503860(iVar4 + 0x2b4,
                                                                         local_1455 + 1,0);
                                                    iVar5 = FUN_00502fa0(uVar6);
                                                    if (iVar5 < 0) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Model %s does not have state %s",iVar4 + 0x2514
                                                  ,local_1455 + 1);
                                                  return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                    FUN_00503620(iVar4 + 0x2b4,iVar5,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setSunlight",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0xb;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_50 = -1;
                                                    FUN_005ba8cc(local_144,"(%f , %f , %f , %f )%n",
                                                                 &local_178,&local_174,&local_170,
                                                                 &local_54,&local_50);
                                                    if (local_50 < 5) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
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
                                                    fVar2 = 1.0 / local_4c;
                                                    local_178 = local_178 * fVar2;
                                                    local_174 = local_174 * fVar2;
                                                    local_170 = local_170 * fVar2;
                                                  }
                                                  if (local_148 != 0) {
                                                    FUN_00534680(0x01E661B8,local_178,local_174,
                                                                 local_170,local_54);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,"setTimer"
                                                                         ,8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_0061ed94)[(byte)(param_2[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_144 = param_2 + 8;
                                                      while (((&DAT_0061ed94)
                                                              [(byte)(*local_144 + 1)] & 2) != 0) {
                                                        local_144 = local_144 + 1;
                                                      }
                                                      local_bc = -1;
                                                      FUN_005ba8cc(local_144,"(%[^,], %f)%n",
                                                                   local_fa5 + 1,&local_44,&local_bc
                                                                  );
                                                      if (local_bc < 3) {
                                                        FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                          
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_bc;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_fa5 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_fa5 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_fa5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_fa5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_fa5 + 1);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_fa5 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  if (0x1f < ~uVar8 - 1) {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "Timer name \"%s\" is too long, (max %d chars)"
                                                                 ,local_fa5 + 1,0x1f);
                                                    return 0;
                                                  }
                                                  if (local_44 < 0.0) {
                                                    FUN_005b7790(&DAT_01c3dd10,
                                                                 "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                    FUN_00491280(param_1,local_fa5 + 1,local_44);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "setWeather",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 10;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_3c = -1;
                                                    FUN_005ba8cc(local_144,"(%[^)])%n",
                                                                 local_1c25 + 1,&local_3c);
                                                    if (local_3c < 3) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_3c;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_1c25 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1c25 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1c25 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_1c25[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_1c25 + 1);
                                                  }
                                                  iVar4 = FUN_005b8130(local_1c25 + 1,&DAT_005d40ba)
                                                  ;
                                                  uVar6 = 0;
                                                  if (iVar4 != 0) {
                                                    iVar4 = FUN_005b8130(local_1c25 + 1,
                                                                         &DAT_005d40bf);
                                                    if (iVar4 == 0) {
                                                      uVar6 = 1;
                                                    }
                                                    else {
                                                      iVar4 = FUN_005b8130(local_1c25 + 1,
                                                                           &DAT_005d40c4);
                                                      if (iVar4 != 0) {
                                                        FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                          
                                                  "Invalid weather type: %s",local_1c25 + 1);
                                                  return 0;
                                                  }
                                                  uVar6 = 2;
                                                  }
                                                  }
                                                  if (local_148 != 0) {
                                                    FUN_0058b470(0x02661F80,uVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "shakeScreen",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0xb;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_2c = -1;
                                                    FUN_005ba8cc(local_144,"( %f, %f, %f, %f )%n",
                                                                 &local_38,&local_b0,&local_34,
                                                                 &local_30,&local_2c);
                                                    if (local_2c < 5) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_2c;
                                                  if (local_148 != 0) {
                                                    FUN_00534800(0x01E661B8,local_38,local_b0,
                                                                 local_34,local_30);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "slamModelToMotion",0x11);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0x11;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_28 = -1;
                                                    FUN_005ba8cc(local_144,"(%[^,], %[^)])%n",
                                                                 local_edd + 1,local_e15 + 1,
                                                                 &local_28);
                                                    if (local_28 < 5) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_144 = local_144 + local_28;
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_edd + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_edd + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_edd + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_edd[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_edd + 1);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_e15 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_e15 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_e15 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_e15[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_e15 + 1);
                                                  }
                                                  iVar4 = FUN_00488d00(local_edd + 1,DAT_007bdc94,
                                                                       &DAT_007bdc5c);
                                                  if (iVar4 == 0) {
                                                    return 0;
                                                  }
                                                  if (iVar4 != 0x0FFFFFFF) {
                                                    iVar5 = iVar4 + 0x2b4;
                                                    uVar6 = FUN_00503860(iVar5,local_e15 + 1,0);
                                                    iVar11 = FUN_00502f10(uVar6);
                                                    if (iVar11 < 0) {
                                                      FUN_005b7790(&DAT_01c3dd10,
                                                                                                                                      
                                                  "Model %s does not have motion %s",iVar4 + 0x2514
                                                  ,local_e15 + 1);
                                                  return 0;
                                                  }
                                                  if (local_148 != 0) {
                                                    FUN_00503980(iVar5,iVar11,0);
                                                    iVar4 = FUN_005035c0(iVar5,1);
                                                    FUN_00503620(iVar5,*(uint *)(iVar4 + 0x24)
                                                                );
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "switchCamera",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    param_2 = param_2 + 0xc;
                                                    while (((&DAT_0061ed94)[(byte)(*param_2 + 1)] &
                                                           2) != 0) {
                                                      param_2 = param_2 + 1;
                                                    }
                                                    local_24 = -1;
                                                    puVar10 = &DAT_00614350;
                                                    puVar16 = local_2c0;
                                                    for (iVar4 = 0x19; iVar4 != 0;
                                                        iVar4 = iVar4 + -1) {
                                                      *puVar16 = *puVar10;
                                                      puVar10 = puVar10 + (uint)bVar17 * -2 + 1;
                                                      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
                                                    }
                                                    local_144 = param_2;
                                                    FUN_005ba8cc(param_2," ( %[^ ,)]%n",local_2c0,
                                                                 &local_24);
                                                    if (local_24 < 2) {
                                                      uVar6 = FUN_00488ba0();
                                                      return uVar6;
                                                    }
                                                    local_144 = local_144 + local_24;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    iVar4 = FUN_0052e8c0(0x01E661B8,local_2c0);
                                                    if (iVar4 < 0) {
                                                      uVar6 = FUN_00488ba0(
                                                  "Camera \"%s\" doesn't exist",local_2c0);
                                                  return uVar6;
                                                  }
                                                  local_20 = 0x40400000;
                                                  if (*local_144 == ',') {
                                                    local_24 = -1;
                                                    FUN_005ba8cc(local_144,",%f%n",&local_20,
                                                                 &local_24);
                                                    if (local_24 < 2) {
                                                      uVar6 = FUN_00488ba0();
                                                      return uVar6;
                                                    }
                                                    local_144 = local_144 + local_24;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                  }
                                                  if (*local_144 != ')') {
                                                    uVar6 = FUN_00488ba0();
                                                    return uVar6;
                                                  }
                                                  local_144 = local_144 + 1;
                                                  if (local_148 != 0) {
                                                    FUN_00539820(0x01E661B8,iVar4,local_20);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_0061ed94)[(byte)(param_2[0x15] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_144 = param_2 + 0x15;
                                                    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)]
                                                           & 2) != 0) {
                                                      local_144 = local_144 + 1;
                                                    }
                                                    local_1c = -1;
                                                    FUN_005ba8cc(local_144,"(%[^)])%n",
                                                                 local_24b5 + 1,&local_1c);
                                                    if (local_1c < 3) {
                                                      uVar6 = FUN_00488ba0();
                                                      return uVar6;
                                                    }
                                                    local_144 = local_144 + local_1c;
                                                    uVar8 = 0xffffffff;
                                                    pcVar13 = local_24b5 + 1;
                                                    do {
                                                      if (uVar8 == 0) break;
                                                      uVar8 = uVar8 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    iVar4 = ~uVar8 - 1;
                                                    if (0 < iVar4) {
                                                      pcVar13 = local_24b5 + ~uVar8;
                                                      do {
                                                        if (((&DAT_0061ed94)
                                                             [(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                                        break;
                                                        iVar4 = iVar4 + -1;
                                                        pcVar13 = pcVar13 + -1;
                                                      } while (0 < iVar4);
                                                    }
                                                    (local_24b5 + 1)[iVar4] = '\0';
                                                    while (((&DAT_0061ed94)
                                                            [(byte)(local_24b5[1] + 1)] & 2) != 0) {
                                                      FUN_005ba1f0(local_24b5 + 1);
                                                    }
                                                    if (_DAT_01c3dd0c != 0) {
                                                      uVar6 = FUN_004a5430(0x01CAF56C,
                                                                           local_24b5 + 1);
                                                      switch(uVar6) {
                                                      case 0:
                                                      case 1:
                                                      case 2:
                                                      case 3:
                                                      case 4:
                                                      case 5:
                                                      case 6:
                                                        goto switchD_00489e7e_caseD_2;
                                                      default:
                                                        uVar6 = FUN_00488ba0(
                                                  "Field notes entry '%s' not found",local_24b5 + 1)
                                                  ;
                                                  return uVar6;
                                                  }
                                                  }
                                                  FUN_004a5490(0x01CAF56C,local_24b5 + 1);
                                                  }
                                                  else {
                                                    iVar4 = FUN_005b8da0(param_2,"warpTo",6
                                                                        );
                                                    if ((iVar4 != 0) ||
                                                       (((&DAT_0061ed94)[(byte)(param_2[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      uVar6 = FUN_00488ba0(
                                                  "Unknown meta-function starting at %s",param_2);
                                                  return uVar6;
                                                  }
                                                  local_144 = param_2 + 6;
                                                  while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] &
                                                         2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  local_18 = -1;
                                                  FUN_005ba8cc(local_144,"(%[^,], %[^)])%n",local_16ad + 1
                                                               ,local_15e5 + 1,&local_18);
                                                  if (local_18 < 5) {
                                                    uVar6 = FUN_00488ba0();
                                                    return uVar6;
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_16ad + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_16ad + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_16ad + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_16ad[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_16ad + 1);
                                                  }
                                                  uVar8 = 0xffffffff;
                                                  pcVar13 = local_15e5 + 1;
                                                  do {
                                                    if (uVar8 == 0) break;
                                                    uVar8 = uVar8 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar8 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_15e5 + ~uVar8;
                                                    do {
                                                      if (((&DAT_0061ed94)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_15e5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_0061ed94)[(byte)(local_15e5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005ba1f0(local_15e5 + 1);
                                                  }
                                                  local_144 = local_144 + local_18;
                                                  while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] &
                                                         2) != 0) {
                                                    local_144 = local_144 + 1;
                                                  }
                                                  iVar4 = FUN_00488d00(local_16ad + 1,DAT_007bc030,
                                                                       &DAT_007bbff8);
                                                  if (iVar4 == 0) {
                                                    return 0;
                                                  }
                                                  if (iVar4 == 0x0FFFFFFF) {
                                                    local_148 = 0;
                                                  }
                                                  else if (local_148 != 0) {
                                                    local_1a0 = *(int *)(iVar4 + 0x2c);
                                                  }
                                                  local_18 = -1;
                                                  FUN_005ba8cc(local_15e5 + 1,
                                                               "%f,%f,%f,%f,%f,%f%n",&local_1ac,
                                                               &local_1a8,&local_1a4,&local_16c,
                                                               &local_164,&local_168,&local_18);
                                                  if (local_18 < 0) {
                                                    if ((local_148 != 0) &&
                                                       (&local_16c != (uint *)(iVar4 + 0x30)))
                                                    {
                                                      local_16c = *(uint *)(iVar4 + 0x30);
                                                      local_168 = *(uint *)(iVar4 + 0x34);
                                                      local_164 = *(uint *)(iVar4 + 0x38);
                                                    }
                                                    FUN_005ba8cc(local_15e5 + 1,"%f,%f,%f,%f%n"
                                                                 ,&local_1ac,&local_1a8,&local_1a4,
                                                                 &local_168,&local_18);
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_148 != 0) &&
                                                       (&local_16c != (uint *)(iVar4 + 0x30)))
                                                    {
                                                      local_16c = *(uint *)(iVar4 + 0x30);
                                                      local_168 = *(uint *)(iVar4 + 0x34);
                                                      local_164 = *(uint *)(iVar4 + 0x38);
                                                    }
                                                    FUN_005ba8cc(local_15e5 + 1,"%f,%f,%f%n",
                                                                 &local_1ac,&local_1a8,&local_1a4,
                                                                 &local_18);
                                                  }
                                                  if (local_18 < 0) {
                                                    iVar5 = FUN_00488d00(local_15e5 + 1,DAT_007bc030
                                                                         ,&DAT_007bbff8);
                                                    if (iVar5 == 0) {
                                                      return 0;
                                                    }
                                                    if (iVar5 == 0x0FFFFFFF) {
                                                      local_148 = 0;
                                                    }
                                                    else {
                                                      local_1ac = *(uint *)(iVar5 + 0x20);
                                                      local_1a8 = *(uint *)(iVar5 + 0x24);
                                                      local_1a4 = *(uint *)(iVar5 + 0x28);
                                                      local_1a0 = *(int *)(iVar5 + 0x2c);
                                                      if (&local_16c != (uint *)(iVar5 + 0x30)
                                                         ) {
                                                        local_16c = *(uint *)(iVar5 + 0x30);
                                                        local_168 = *(uint *)(iVar5 + 0x34);
                                                        local_164 = *(uint *)(iVar5 + 0x38);
                                                      }
                                                    }
                                                    uVar8 = 0xffffffff;
                                                    pcVar13 = local_15e5 + 1;
                                                    do {
                                                      if (uVar8 == 0) break;
                                                      uVar8 = uVar8 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    local_18 = ~uVar8 - 1;
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_15e5[local_18 + 1] != '\0')) {
                                                    uVar6 = FUN_00488ba0();
                                                    return uVar6;
                                                  }
                                                  if (local_148 != 0) {
                                                    if (local_1a0 != *(int *)(iVar4 + 0x2c)) {
                                                      (**(code **)(*(int *)(iVar4 + 0x2b0) + 8))();
                                                    }
                                                    iVar5 = FUN_0040c8f0(iVar4,DAT_007bdc94);
                                                    if (iVar5 != 0) {
                                                      (**(code **)(*(int *)(iVar5 + 0x2b0) + 0xf8))
                                                                ();
                                                      (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x100))
                                                                ();
                                                    }
                                                    *(int *)(iVar4 + 0x2c) = local_1a0;
                                                    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x70))
                                                              (iVar4,&local_1ac,&local_16c);
                                                    if (iVar4 == *(int *)(_DAT_01cedef4 * 4 +
                                                                         0x1cedee4)) {
                                                      FUN_004fc780(0x01D182F0,&local_1ac);
                                                    }
                                                    if (iVar4 == *(int *)(0x01E65CD0 + 0xc)) {
                                                      *(uint *)(0x01E65CD0 + 0x10) = 1;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
    while (((&DAT_0061ed94)[(byte)(*local_144 + 1)] & 2) != 0) {
      local_144 = local_144 + 1;
    }
    if (*local_144 != '\0') {
      uVar6 = FUN_00488ba0();
      return uVar6;
    }
  }
  return 1;
}
