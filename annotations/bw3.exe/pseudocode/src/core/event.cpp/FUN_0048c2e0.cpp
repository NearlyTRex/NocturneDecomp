// Name: FUN_0048c2e0
// Address: 0048c2e0
// Address Range: [[0048c2e0, 00491a06]]
// Convention: unknown
// Signature: undefined4 FUN_0048c2e0(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048c2e0(int *param_1,char *param_2)

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
  byte local_23fc [256];
  byte local_22fc [255];
  char local_21fd [200];
  char local_2135 [200];
  char local_206d [200];
  char local_1fa5 [200];
  char local_1edd [200];
  char local_1e15 [200];
  char local_1d4d [201];
  byte local_1c84 [199];
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
  char local_ce5 [200];
  char local_c1d [200];
  char local_b55 [200];
  char local_a8d [200];
  char local_9c5 [200];
  char local_8fd [200];
  char local_835 [200];
  char local_76d [200];
  char local_6a5 [200];
  char local_5dd [201];
  byte local_514 [200];
  byte local_44c [99];
  char local_3e9 [100];
  char local_385 [101];
  uint local_320 [25];
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
  byte local_1b8 [4];
  byte local_1b4 [4];
  byte local_1b0 [4];
  byte local_1ac [4];
  byte local_1a8 [4];
  byte local_1a4 [4];
  uint local_1a0;
  uint local_19c;
  uint local_198;
  byte local_194 [4];
  byte local_190 [4];
  byte local_18c [4];
  float local_188;
  float local_184;
  float local_180 [2];
  uint uStack_178;
  int *local_174;
  uint local_170;
  char *local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
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
  uint local_124;
  int local_120;
  int local_11c;
  uint local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  float local_108;
  int local_104;
  int local_100;
  uint local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  byte *local_e8;
  float local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
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
  uint local_9c;
  int local_98;
  uint local_94;
  float local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  float local_68;
  int local_64 [2];
  float local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar17 = 0;
  DAT_01c734b0 = 0;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar4 = FUN_005a3260(param_2,&DAT_005bdf86), iVar4 != 0)) {
    if (*param_2 == '.') {
      param_2 = param_2 + 1;
    }
    local_170 = (uint)(_DAT_01c734ac == 0);
    local_16c = &DAT_005bdf8b;
    pcVar13 = param_2;
    do {
      pcVar12 = pcVar13;
      if (*pcVar13 == '(') goto LAB_0048c367;
      if (*pcVar13 == '\0') break;
      pcVar12 = pcVar13 + 1;
      if (*pcVar12 == '(') goto LAB_0048c367;
      pcVar13 = pcVar13 + 2;
    } while (*pcVar12 != '\0');
    pcVar12 = (char *)0x0;
LAB_0048c367:
    if (pcVar12 == (char *)0x0) {
      if (0 < *param_1) {
        piVar15 = param_1 + 1;
        iVar4 = 0;
        do {
          iVar5 = FUN_005a3260(piVar15,param_2);
          if (iVar5 == 0) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          piVar15 = piVar15 + 8;
        } while (iVar4 < *param_1);
      }
      uVar9 = 0xffffffff;
      pcVar13 = param_2;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar9 - 1) {
        uVar6 = FUN_0048b7f0("Event name %s is too long",param_2);
        return uVar6;
      }
      if (99 < *param_1) {
        local_168 = FUN_005a43ec("events.txt",&DAT_005bdfa6);
        if (local_168 != 0) {
          iVar4 = 0;
          if (0 < *param_1) {
            piVar15 = param_1 + 1;
            do {
              FUN_005a3140(local_168,&DAT_005bdfb4,piVar15);
              iVar4 = iVar4 + 1;
              piVar15 = piVar15 + 8;
            } while (iVar4 < *param_1);
          }
          FUN_005a3a90();
        }
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0x27d;
        FUN_004e4330();
      }
      piVar14 = param_1 + *param_1 * 8 + 1;
      pcVar13 = param_2;
      piVar15 = piVar14;
      do {
        cVar1 = *pcVar13;
        *(char *)piVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        *(char *)((int)piVar15 + 1) = cVar1;
        piVar15 = (int *)((int)piVar15 + 2);
      } while (cVar1 != '\0');
      local_24 = 0;
      local_174 = piVar14;
      do {
        uVar9 = 0xffffffff;
        piVar15 = local_174;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          iVar4 = *piVar15;
          piVar15 = (int *)((int)piVar15 + (uint)bVar17 * -2 + 1);
        } while ((char)iVar4 != '\0');
        if (~uVar9 - 1 <= local_24) {
          if (local_170 == 0) {
            return 1;
          }
          *param_1 = *param_1 + 1;
          return 1;
        }
        uVar3 = FUN_005a4120();
        *(byte *)piVar14 = uVar3;
        iVar4 = FUN_00495460();
        if (iVar4 == 0) {
          uVar6 = FUN_0048b7f0("Event name %s is not valid",param_2);
          return uVar6;
        }
        local_24 = local_24 + 1;
        piVar14 = (int *)((int)piVar14 + 1);
      } while( true );
    }
    iVar4 = FUN_005a3f90(param_2,"activateGadget",0xe);
    if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
      local_16c = param_2 + 0xe;
      while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
        local_16c = local_16c + 1;
      }
      local_164 = -1;
      FUN_005a5b9c(local_16c,"(%[^,], %[^,], %n",local_26fd + 1,local_28fd + 1,&local_164);
      if (local_164 < 3) {
        uVar6 = FUN_0048b7f0();
        return uVar6;
      }
      local_16c = local_16c + local_164;
      uVar9 = 0xffffffff;
      pcVar13 = local_26fd + 1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar9 - 1;
      if (0 < iVar4) {
        pcVar13 = local_26fd + ~uVar9;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      (local_26fd + 1)[iVar4] = '\0';
      while (((&DAT_006074b8)[(byte)(local_26fd[1] + 1)] & 2) != 0) {
        FUN_005a54c0(local_26fd + 1);
      }
      uVar9 = 0xffffffff;
      pcVar13 = local_28fd + 1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar9 - 1;
      if (0 < iVar4) {
        pcVar13 = local_28fd + ~uVar9;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      (local_28fd + 1)[iVar4] = '\0';
      while (((&DAT_006074b8)[(byte)(local_28fd[1] + 1)] & 2) != 0) {
        FUN_005a54c0(local_28fd + 1);
      }
      pcVar13 = (char *)FUN_0048bc10(&local_16c,local_24fd + 1,0x100,0);
      if (pcVar13 != (char *)0x0) goto LAB_0048c717;
      uVar9 = 0xffffffff;
      pcVar13 = local_24fd + 1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar9 - 1;
      if (0 < iVar4) {
        pcVar13 = local_24fd + ~uVar9;
        do {
          if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      (local_24fd + 1)[iVar4] = '\0';
      while (((&DAT_006074b8)[(byte)(local_24fd[1] + 1)] & 2) != 0) {
        FUN_005a54c0(local_24fd + 1);
      }
      uVar9 = FUN_0048b950(local_26fd + 1,_DAT_01d5ba70,0x1d5ba38);
      if (uVar9 == 0) {
        return 0;
      }
      if (uVar9 == 0x0FFFFFFF) {
        local_170 = uVar9 ^ 0x0FFFFFFF;
      }
      puVar10 = (uint *)0x0;
      iVar4 = FUN_005a3260(local_28fd + 1,"compass");
      if (iVar4 == 0) {
        puVar10 = (uint *)(uVar9 + 0x206f0);
      }
      iVar4 = FUN_005a3260(local_28fd + 1,&DAT_005be056);
      if (iVar4 == 0) {
        puVar10 = (uint *)(uVar9 + 0x206f4);
      }
      if (puVar10 == (uint *)0x0) {
        uVar6 = FUN_0048b7f0("Invalid gadget type: %s",local_28fd + 1);
        return uVar6;
      }
      if (_DAT_01c734ac == 0) {
        if (local_170 != 0) {
          uVar6 = FUN_00491aa0(param_1,local_24fd + 1);
          *puVar10 = uVar6;
        }
      }
      else {
        iVar4 = FUN_00491b00(param_1,local_24fd + 1);
        if (iVar4 != 0) {
          return 0;
        }
      }
    }
    else {
      iVar4 = FUN_005a3f90(param_2,"activatePuzzle",0xe);
      if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
        local_16c = param_2 + 0xe;
        while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
          local_16c = local_16c + 1;
        }
        local_160 = -1;
        FUN_005a5b9c(local_16c,"(%[^)])%n",local_25fd + 1,&local_160);
        if (local_160 < 3) {
          uVar6 = FUN_0048b7f0();
          return uVar6;
        }
        local_16c = local_16c + local_160;
        uVar9 = 0xffffffff;
        pcVar13 = local_25fd + 1;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar9 - 1;
        if (0 < iVar4) {
          pcVar13 = local_25fd + ~uVar9;
          do {
            if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar13 + -1;
          } while (0 < iVar4);
        }
        (local_25fd + 1)[iVar4] = '\0';
        while (((&DAT_006074b8)[(byte)(local_25fd[1] + 1)] & 2) != 0) {
          FUN_005a54c0(local_25fd + 1);
        }
        iVar5 = 0;
        iVar4 = 0;
        if (0 < DAT_007dff88) {
          iVar11 = 0;
          do {
            uVar6 = (**(code **)(**(int **)((int)&DAT_007dff8c + iVar11) + 4))();
            iVar7 = FUN_005a3260(local_25fd + 1,uVar6);
            if (iVar7 == 0) {
              iVar4 = *(int *)((int)&DAT_007dff8c + iVar11);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar5 < DAT_007dff88);
        }
        if (iVar4 == 0) {
          uVar6 = FUN_0048b7f0("No such puzzle '%s'",local_25fd + 1);
          return uVar6;
        }
        if (local_170 != 0) {
          if (DAT_007dffb4 != 0) {
            FUN_004119a0(DAT_007dffb4,0);
          }
          FUN_004119a0(iVar4,1);
        }
      }
      else {
        iVar4 = FUN_005a3f90(param_2,"addFieldNotesTask",0x11);
        if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)) {
          local_16c = param_2 + 0x11;
          while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
            local_16c = local_16c + 1;
          }
          local_15c = -1;
          FUN_005a5b9c(local_16c,"(%[^)])%n",local_2bfd + 1,&local_15c);
          if (local_15c < 3) {
            uVar6 = FUN_0048b7f0();
            return uVar6;
          }
          local_16c = local_16c + local_15c;
          uVar9 = 0xffffffff;
          pcVar13 = local_2bfd + 1;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
          } while (cVar1 != '\0');
          iVar4 = ~uVar9 - 1;
          if (0 < iVar4) {
            pcVar13 = local_2bfd + ~uVar9;
            do {
              if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
              iVar4 = iVar4 + -1;
              pcVar13 = pcVar13 + -1;
            } while (0 < iVar4);
          }
          (local_2bfd + 1)[iVar4] = '\0';
          while (((&DAT_006074b8)[(byte)(local_2bfd[1] + 1)] & 2) != 0) {
            FUN_005a54c0(local_2bfd + 1);
          }
          if (_DAT_01c734ac != 0) {
            uVar6 = FUN_004abb30(0x01D1A05C,local_2bfd + 1);
            switch(uVar6) {
            default:
              uVar6 = FUN_0048b7f0("Field notes entry '%s' is not a task",local_2bfd + 1);
              return uVar6;
            case 2:
            case 3:
            case 4:
              goto switchD_0048cb59_caseD_2;
            case 0xffffffff:
              uVar6 = FUN_0048b7f0("Field notes entry '%s' not found",local_2bfd + 1);
              return uVar6;
            }
          }
          FUN_004aba10(0x01D1A05C,local_2bfd + 1);
        }
        else {
          iVar4 = FUN_005a3f90(param_2,"advanceLightFilter",0x12);
          if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0x12] + 1)] & 0xe0) == 0)) {
            local_16c = param_2 + 0x12;
            while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
              local_16c = local_16c + 1;
            }
            pcVar13 = (char *)FUN_0048bc10(&local_16c,local_1c84,200,1);
            if (pcVar13 != (char *)0x0) goto LAB_0048c717;
            FUN_0053b3b0(0x01ED78C8,local_1c84,&local_158,&local_154);
            if (local_158 == 0) {
              uVar6 = FUN_0048b7f0("SpotLight %s doesn't exist.",local_1c84);
              return uVar6;
            }
            if (local_170 != 0) {
              if (local_154 == 0) {
                _DAT_01d71de0 = "..\\core\\event.cpp";
                _DAT_01d71de4 = 0x32e;
                FUN_004e4330("Can't find CDemonLight for light %s in advanceLightFilter meta-command",local_1c84);
              }
              FUN_00542d20(local_158,local_154);
            }
          }
          else {
            iVar4 = FUN_005a3f90(param_2,"beginCarryItem",0xe);
            if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
              local_16c = param_2 + 0xe;
              while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                local_16c = local_16c + 1;
              }
              local_150 = -1;
              FUN_005a5b9c(local_16c,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n",local_5dd + 1,local_13ed + 1,
                           local_64,local_1ac,local_1a8,local_1a4,local_1b8,local_1b0,local_1b4,
                           &local_150);
              if (local_150 < 0) {
                uVar6 = FUN_0048b7f0();
                return uVar6;
              }
              local_16c = local_16c + local_150;
              uVar9 = 0xffffffff;
              pcVar13 = local_13ed + 1;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
              } while (cVar1 != '\0');
              iVar4 = ~uVar9 - 1;
              if (0 < iVar4) {
                pcVar13 = local_13ed + ~uVar9;
                do {
                  if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                  iVar4 = iVar4 + -1;
                  pcVar13 = pcVar13 + -1;
                } while (0 < iVar4);
              }
              (local_13ed + 1)[iVar4] = '\0';
              while (((&DAT_006074b8)[(byte)(local_13ed[1] + 1)] & 2) != 0) {
                FUN_005a54c0(local_13ed + 1);
              }
              uVar9 = 0xffffffff;
              pcVar13 = local_5dd + 1;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
              } while (cVar1 != '\0');
              iVar4 = ~uVar9 - 1;
              if (0 < iVar4) {
                pcVar13 = local_5dd + ~uVar9;
                do {
                  if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                  iVar4 = iVar4 + -1;
                  pcVar13 = pcVar13 + -1;
                } while (0 < iVar4);
              }
              (local_5dd + 1)[iVar4] = '\0';
              while (((&DAT_006074b8)[(byte)(local_5dd[1] + 1)] & 2) != 0) {
                FUN_005a54c0(local_5dd + 1);
              }
              if ((local_64[0] < 0) || (1 < local_64[0])) {
                uVar6 = FUN_0048b7f0("Invalid hand index: %d",local_64[0]);
                return uVar6;
              }
              uVar9 = FUN_0048b950(local_5dd + 1,DAT_007e2cec,&DAT_007e2cb4);
              if (uVar9 == 0) {
                return 0;
              }
              if (uVar9 == 0x0FFFFFFF) {
                local_170 = 0;
              }
              else if (*(int *)(uVar9 + 0x25a8 + local_64[0] * 0x78) < 0) {
                uVar6 = FUN_0048b7f0("%s doesn't have hand %d",uVar9,local_64[0]);
                return uVar6;
              }
              uVar8 = FUN_0048b950(local_13ed + 1,DAT_007df9b0,&DAT_007df978);
              if (uVar8 == 0) {
                return 0;
              }
              if ((uVar8 != 0x0FFFFFFF) && (local_170 != 0)) {
                FUN_00583940(local_2bc,local_1ac,local_1b8);
                FUN_004319d0(uVar9,local_64[0],uVar8,0,local_2bc);
              }
            }
            else {
              iVar4 = FUN_005a3f90(param_2,"completeFieldNotesTask",0x16);
              if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0x16] + 1)] & 0xe0) == 0)) {
                local_16c = param_2 + 0x16;
                while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                  local_16c = local_16c + 1;
                }
                local_14c = -1;
                FUN_005a5b9c(local_16c,"(%[^)])%n",local_2cfd + 1,&local_14c);
                if (local_14c < 3) {
                  uVar6 = FUN_0048b7f0();
                  return uVar6;
                }
                local_16c = local_16c + local_14c;
                uVar9 = 0xffffffff;
                pcVar13 = local_2cfd + 1;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                } while (cVar1 != '\0');
                iVar4 = ~uVar9 - 1;
                if (0 < iVar4) {
                  pcVar13 = local_2cfd + ~uVar9;
                  do {
                    if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                    iVar4 = iVar4 + -1;
                    pcVar13 = pcVar13 + -1;
                  } while (0 < iVar4);
                }
                (local_2cfd + 1)[iVar4] = '\0';
                while (((&DAT_006074b8)[(byte)(local_2cfd[1] + 1)] & 2) != 0) {
                  FUN_005a54c0(local_2cfd + 1);
                }
                if (_DAT_01c734ac != 0) {
                  uVar6 = FUN_004abb30(0x01D1A05C,local_2cfd + 1);
                  switch(uVar6) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    uVar6 = FUN_0048b7f0("Field notes entry '%s' is not a task",local_2cfd + 1);
                    return uVar6;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_0048cb59_caseD_2;
                  default:
                    uVar6 = FUN_0048b7f0("Field notes entry '%s' not found",local_2cfd + 1);
                    return uVar6;
                  }
                }
                FUN_004abcb0(0x01D1A05C,local_2cfd + 1);
              }
              else {
                iVar4 = FUN_005a3f90(param_2,"createExplosion",0xf);
                if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xf] + 1)] & 0xe0) == 0)) {
                  local_16c = param_2 + 0xf;
                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                    local_16c = local_16c + 1;
                  }
                  local_148 = -1;
                  FUN_005a5b9c(local_16c,"( %f , %n",&local_144,&local_148);
                  if (local_148 < 0) {
                    uVar6 = FUN_0048b7f0();
                    return uVar6;
                  }
                  local_16c = local_16c + local_148;
                  local_148 = -1;
                  FUN_005a5b9c(local_16c,"%f , %f , %f %n",&local_1d0,&local_1cc,&local_1c8,
                               &local_148);
                  if ((local_148 < 0) &&
                     (FUN_005a5b9c(local_16c," %[^,)] %n",local_125d + 1,&local_148), -1 < local_148
                     )) {
                    uVar9 = 0xffffffff;
                    pcVar13 = local_125d + 1;
                    do {
                      if (uVar9 == 0) break;
                      uVar9 = uVar9 - 1;
                      cVar1 = *pcVar13;
                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                    } while (cVar1 != '\0');
                    iVar4 = ~uVar9 - 1;
                    if (0 < iVar4) {
                      pcVar13 = local_125d + ~uVar9;
                      do {
                        if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                        iVar4 = iVar4 + -1;
                        pcVar13 = pcVar13 + -1;
                      } while (0 < iVar4);
                    }
                    (local_125d + 1)[iVar4] = '\0';
                    while (((&DAT_006074b8)[(byte)(local_125d[1] + 1)] & 2) != 0) {
                      FUN_005a54c0(local_125d + 1);
                    }
                    uVar9 = FUN_0048b950(local_125d + 1,DAT_007df9b0,&DAT_007df978);
                    if (uVar9 == 0) {
                      return 0;
                    }
                    if (uVar9 == 0x0FFFFFFF) {
                      local_170 = 0;
                    }
                    else if (&local_1d0 != (uint *)(uVar9 + 0x20)) {
                      local_1d0 = *(uint *)(uVar9 + 0x20);
                      local_1cc = *(uint *)(uVar9 + 0x24);
                      local_1c8 = *(uint *)(uVar9 + 0x28);
                    }
                  }
                  if (local_148 < 0) {
                    uVar6 = FUN_0048b7f0();
                    return uVar6;
                  }
                  local_16c = local_16c + local_148;
                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                    local_16c = local_16c + 1;
                  }
                  local_140 = 0x40800000;
                  if (*local_16c == ',') {
                    local_148 = -1;
                    FUN_005a5b9c(local_16c,", %f %n",&local_140,&local_148);
                    if (local_148 < 0) {
                      uVar6 = FUN_0048b7f0();
                      return uVar6;
                    }
                    local_16c = local_16c + local_148;
                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                      local_16c = local_16c + 1;
                    }
                  }
                  if (*local_16c != ')') {
                    uVar6 = FUN_0048b7f0();
                    return uVar6;
                  }
                  local_16c = local_16c + 1;
                  if (local_170 != 0) {
                    FUN_004a36e0(0x01C73654,&local_1d0,local_144,0x44bb8000,local_140,0);
                  }
                }
                else {
                  iVar4 = FUN_005a3f90(param_2,"deleteActor",0xb);
                  if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)) {
                    local_16c = param_2 + 0xb;
                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                      local_16c = local_16c + 1;
                    }
                    pcVar13 = (char *)FUN_0048bc10(&local_16c,local_1964,200,1);
                    if (pcVar13 != (char *)0x0) goto LAB_0048c717;
                    uVar9 = FUN_0048b950(local_1964,DAT_007df9b0,&DAT_007df978);
                    uVar6 = DAT_007e17b4;
                    if (uVar9 == 0) {
                      if (_DAT_01c734ac != 0) {
                        return 0;
                      }
                      local_170 = 0;
                    }
                    if ((uVar9 != 0x0FFFFFFF) && (local_170 != 0)) {
                      *(uint *)(uVar9 + 0x70) = 2;
                      iVar4 = FUN_0040c840(uVar9,uVar6);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x2d4) = 0;
                        FUN_00556be0();
                      }
                      iVar4 = FUN_0040c840(uVar9,DAT_007e2acc);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x1b4) = 0;
                        *(byte *)(iVar4 + 0x21c) = 0;
                        FUN_00556be0();
                      }
                    }
                  }
                  else {
                    iVar4 = FUN_005a3f90(param_2,"displayBitmap",0xd);
                    if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] & 0xe0) == 0)) {
                      local_16c = param_2 + 0xd;
                      while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                        local_16c = local_16c + 1;
                      }
                      local_134 = -1;
                      FUN_005a5b9c(local_16c,"( %[^ ,] , %d , %d%n",local_22fc,&local_13c,&local_138,
                                   &local_134);
                      if (local_134 < 0) {
                        uVar6 = FUN_0048b7f0();
                        return uVar6;
                      }
                      local_16c = local_16c + local_134;
                      while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                        local_16c = local_16c + 1;
                      }
                      local_130 = 0;
                      pcVar13 = local_16c;
                      if (*local_16c == ',') {
                        local_134 = -1;
                        FUN_005a5b9c(local_16c,", %f %n",&local_130,&local_134);
                        if (local_134 < 1) {
                          FUN_005a28c0(&DAT_01c734b0,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pcVar13 = local_16c + local_134;
                        while (((&DAT_006074b8)[(byte)(*pcVar13 + 1)] & 2) != 0) {
                          pcVar13 = pcVar13 + 1;
                        }
                      }
                      do {
                        local_16c = pcVar13;
                        pcVar13 = local_16c + 1;
                      } while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0);
                      if (*local_16c != ')') {
                        FUN_005a28c0(&DAT_01c734b0,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_16c = local_16c + 1;
                      iVar4 = FUN_004657f0(&DAT_005be4a1,local_22fc);
                      if (iVar4 < 0) {
                        uVar6 = FUN_0048b7f0();
                        return uVar6;
                      }
                      if (iVar4 != local_13c * local_138) {
                        uVar6 = FUN_0048b7f0();
                        return uVar6;
                      }
                      if (local_170 != 0) {
                        FUN_004beb80(0x01D2130C,local_22fc,local_13c,local_138,local_130);
                      }
                    }
                    else {
                      iVar4 = FUN_005a3f90(param_2,"displayFieldNotes",0x11);
                      if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)
                         ) {
                        local_16c = param_2 + 0x11;
                        while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                          local_16c = local_16c + 1;
                        }
                        local_12c = -1;
                        FUN_005a5b9c(local_16c,"(%[^)])%n",local_14b5 + 1,&local_12c);
                        if (local_12c < 5) {
                          FUN_005a28c0(&DAT_01c734b0,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_16c = local_16c + local_12c;
                        uVar9 = 0xffffffff;
                        pcVar13 = local_14b5 + 1;
                        do {
                          if (uVar9 == 0) break;
                          uVar9 = uVar9 - 1;
                          cVar1 = *pcVar13;
                          pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                        } while (cVar1 != '\0');
                        iVar4 = ~uVar9 - 1;
                        if (0 < iVar4) {
                          pcVar13 = local_14b5 + ~uVar9;
                          do {
                            if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                            iVar4 = iVar4 + -1;
                            pcVar13 = pcVar13 + -1;
                          } while (0 < iVar4);
                        }
                        (local_14b5 + 1)[iVar4] = '\0';
                        while (((&DAT_006074b8)[(byte)(local_14b5[1] + 1)] & 2) != 0) {
                          FUN_005a54c0(local_14b5 + 1);
                        }
                        if (local_170 == 0) {
                          iVar4 = FUN_00491b00(param_1,local_14b5 + 1);
                          if (iVar4 != 0) {
                            return 0;
                          }
                        }
                        else {
                          uVar6 = FUN_00491aa0(0x01C6E360,local_14b5 + 1);
                          *(uint *)(0x01D1A05C + 0x40) = uVar6;
                        }
                      }
                      else {
                        iVar4 = FUN_005a3f90(param_2,"dropItem",8);
                        if ((iVar4 == 0) && (((&DAT_006074b8)[(byte)(param_2[8] + 1)] & 0xe0) == 0))
                        {
                          local_16c = param_2 + 8;
                          while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                            local_16c = local_16c + 1;
                          }
                          local_128 = -1;
                          FUN_005a5b9c(local_16c,"( %[^,],%n",local_f3d + 1,&local_128);
                          if (local_128 < 0) {
                            uVar6 = FUN_0048b7f0();
                            return uVar6;
                          }
                          local_16c = local_16c + local_128;
                          uVar9 = 0xffffffff;
                          pcVar13 = local_f3d + 1;
                          do {
                            if (uVar9 == 0) break;
                            uVar9 = uVar9 - 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                          } while (cVar1 != '\0');
                          iVar4 = ~uVar9 - 1;
                          if (0 < iVar4) {
                            pcVar13 = local_f3d + ~uVar9;
                            do {
                              if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                              iVar4 = iVar4 + -1;
                              pcVar13 = pcVar13 + -1;
                            } while (0 < iVar4);
                          }
                          (local_f3d + 1)[iVar4] = '\0';
                          while (((&DAT_006074b8)[(byte)(local_f3d[1] + 1)] & 2) != 0) {
                            FUN_005a54c0(local_f3d + 1);
                          }
                          local_124 = FUN_0048b950(local_f3d + 1,DAT_007e2cec,&DAT_007e2cb4);
                          if (local_124 == 0) {
                            return 0;
                          }
                          if (local_124 == 0x0FFFFFFF) {
                            local_170 = 0;
                          }
                          local_128 = -1;
                          local_18 = -1;
                          FUN_005a5b9c(local_16c,"%d )%n",&local_18,&local_128);
                          if (local_128 < 1) {
                            FUN_005a5b9c(local_16c,"%[^)])%n",local_1005 + 1,&local_128);
                            if (local_128 < 0) {
                              uVar6 = FUN_0048b7f0();
                              return uVar6;
                            }
                            uVar9 = 0xffffffff;
                            pcVar13 = local_1005 + 1;
                            do {
                              if (uVar9 == 0) break;
                              uVar9 = uVar9 - 1;
                              cVar1 = *pcVar13;
                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                            } while (cVar1 != '\0');
                            iVar4 = ~uVar9 - 1;
                            if (0 < iVar4) {
                              pcVar13 = local_1005 + ~uVar9;
                              do {
                                if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                iVar4 = iVar4 + -1;
                                pcVar13 = pcVar13 + -1;
                              } while (0 < iVar4);
                            }
                            (local_1005 + 1)[iVar4] = '\0';
                            while (((&DAT_006074b8)[(byte)(local_1005[1] + 1)] & 2) != 0) {
                              FUN_005a54c0(local_1005 + 1);
                            }
                            local_18 = -1;
                            iVar4 = local_18;
                            if (local_124 != 0x0FFFFFFF) {
                              iVar5 = 0;
                              uVar9 = local_124;
                              do {
                                if ((*(int *)(uVar9 + 0x25b0) != 0) &&
                                   (iVar11 = FUN_005a3260(*(int *)(uVar9 + 0x25b0),local_1005 + 1),
                                   iVar4 = iVar5, iVar11 == 0)) break;
                                iVar5 = iVar5 + 1;
                                uVar9 = uVar9 + 0x78;
                                iVar4 = local_18;
                              } while (iVar5 < 2);
                            }
                          }
                          else if ((local_18 < 0) || (iVar4 = local_18, 1 < local_18)) {
                            uVar6 = FUN_0048b7f0("Invalid hand index: %d",local_18);
                            return uVar6;
                          }
                          local_18 = iVar4;
                          local_16c = local_16c + local_128;
                          if ((local_124 != 0x0FFFFFFF) &&
                             (*(int *)(local_18 * 0x78 + local_124 + 0x25a8) < 0)) {
                            uVar6 = FUN_0048b7f0("%s doesn't have hand %d",local_124,local_18
                                                );
                            return uVar6;
                          }
                          if ((local_170 != 0) && (-1 < local_18)) {
                            (**(code **)(*(int *)(local_124 + 0x154) + 0x128))(local_124,local_18,0)
                            ;
                          }
                        }
                        else {
                          iVar4 = FUN_005a3f90(param_2,"enableFieldNotesEntry",0x15);
                          if ((iVar4 == 0) &&
                             (((&DAT_006074b8)[(byte)(param_2[0x15] + 1)] & 0xe0) == 0)) {
                            local_16c = param_2 + 0x15;
                            while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                              local_16c = local_16c + 1;
                            }
                            local_120 = -1;
                            FUN_005a5b9c(local_16c,"(%[^)])%n",local_27fd + 1,&local_120);
                            if (local_120 < 3) {
                              uVar6 = FUN_0048b7f0();
                              return uVar6;
                            }
                            local_16c = local_16c + local_120;
                            uVar9 = 0xffffffff;
                            pcVar13 = local_27fd + 1;
                            do {
                              if (uVar9 == 0) break;
                              uVar9 = uVar9 - 1;
                              cVar1 = *pcVar13;
                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                            } while (cVar1 != '\0');
                            iVar4 = ~uVar9 - 1;
                            if (0 < iVar4) {
                              pcVar13 = local_27fd + ~uVar9;
                              do {
                                if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                iVar4 = iVar4 + -1;
                                pcVar13 = pcVar13 + -1;
                              } while (0 < iVar4);
                            }
                            (local_27fd + 1)[iVar4] = '\0';
                            while (((&DAT_006074b8)[(byte)(local_27fd[1] + 1)] & 2) != 0) {
                              FUN_005a54c0(local_27fd + 1);
                            }
                            if (_DAT_01c734ac != 0) {
                              uVar6 = FUN_004abb30(0x01D1A05C,local_27fd + 1);
                              switch(uVar6) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_0048cb59_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                uVar6 = FUN_0048b7f0("Field notes entry '%s' is a task (use addFieldNotesTask for this)",
                                                     local_27fd + 1);
                                return uVar6;
                              default:
                                uVar6 = FUN_0048b7f0("Field notes entry '%s' not found",
                                                     local_27fd + 1);
                                return uVar6;
                              }
                            }
                            FUN_004aba10(0x01D1A05C,local_27fd + 1);
                          }
                          else {
                            iVar4 = FUN_005a3f90(param_2,"enableFieldNotesAnnotation",0x1a);
                            if ((iVar4 == 0) &&
                               (((&DAT_006074b8)[(byte)(param_2[0x1a] + 1)] & 0xe0) == 0)) {
                              local_16c = param_2 + 0x1a;
                              while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                local_16c = local_16c + 1;
                              }
                              local_11c = -1;
                              FUN_005a5b9c(local_16c,"(%[^,], %[^)])%n",local_29fd + 1,local_2afd + 1,
                                           &local_11c);
                              if (local_11c < 4) {
                                uVar6 = FUN_0048b7f0();
                                return uVar6;
                              }
                              local_16c = local_16c + local_11c;
                              uVar9 = 0xffffffff;
                              pcVar13 = local_2afd + 1;
                              do {
                                if (uVar9 == 0) break;
                                uVar9 = uVar9 - 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                              } while (cVar1 != '\0');
                              iVar4 = ~uVar9 - 1;
                              if (0 < iVar4) {
                                pcVar13 = local_2afd + ~uVar9;
                                do {
                                  if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                  iVar4 = iVar4 + -1;
                                  pcVar13 = pcVar13 + -1;
                                } while (0 < iVar4);
                              }
                              (local_2afd + 1)[iVar4] = '\0';
                              while (((&DAT_006074b8)[(byte)(local_2afd[1] + 1)] & 2) != 0) {
                                FUN_005a54c0(local_2afd + 1);
                              }
                              uVar9 = 0xffffffff;
                              pcVar13 = local_29fd + 1;
                              do {
                                if (uVar9 == 0) break;
                                uVar9 = uVar9 - 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                              } while (cVar1 != '\0');
                              iVar4 = ~uVar9 - 1;
                              if (0 < iVar4) {
                                pcVar13 = local_29fd + ~uVar9;
                                do {
                                  if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                  iVar4 = iVar4 + -1;
                                  pcVar13 = pcVar13 + -1;
                                } while (0 < iVar4);
                              }
                              (local_29fd + 1)[iVar4] = '\0';
                              while (((&DAT_006074b8)[(byte)(local_29fd[1] + 1)] & 2) != 0) {
                                FUN_005a54c0(local_29fd + 1);
                              }
                              if (_DAT_01c734ac != 0) {
                                uVar6 = FUN_004abb30(0x01D1A05C,local_2afd + 1);
                                switch(uVar6) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_0048cb59_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  uVar6 = FUN_0048b7f0("Field notes entry '%s' is a task (use addFieldNotesTask for this)",
                                                       local_2afd + 1);
                                  return uVar6;
                                default:
                                  uVar6 = FUN_0048b7f0("Field notes entry '%s' not found",
                                                       local_2afd + 1);
                                  return uVar6;
                                }
                              }
                              iVar4 = FUN_004ab8f0(0x01D1A05C,local_29fd + 1,local_2afd + 1,
                                                   local_23fc);
                              if (iVar4 == 0) {
                                uVar6 = FUN_0048b7f0();
                                return uVar6;
                              }
                            }
                            else {
                              iVar4 = FUN_005a3f90(param_2,"fadeAmbientSound",0x10);
                              if ((iVar4 == 0) &&
                                 (((&DAT_006074b8)[(byte)(param_2[0x10] + 1)] & 0xe0) == 0)) {
                                local_16c = param_2 + 0x10;
                                while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                  local_16c = local_16c + 1;
                                }
                                local_110 = -1;
                                FUN_005a5b9c(local_16c,"(%f, %f )%n",&local_118,&local_114,
                                             &local_110);
                                if (local_110 < 0) {
                                  FUN_005a28c0(&DAT_01c734b0,"Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_16c = local_16c + local_110;
                                if (local_170 != 0) {
                                  FUN_00560d30(0x02CF5680,local_118,local_114);
                                }
                              }
                              else {
                                iVar4 = FUN_005a3f90(param_2,"fadeSfx",7);
                                if ((iVar4 == 0) &&
                                   (((&DAT_006074b8)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_16c = param_2 + 7;
                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                    local_16c = local_16c + 1;
                                  }
                                  local_104 = -1;
                                  FUN_005a5b9c(local_16c,"(%[^,], %f, %f )%n",local_1a2d + 1,&local_10c,
                                               &local_108,&local_104);
                                  if (local_104 < 0) {
                                    FUN_005a28c0(&DAT_01c734b0,"Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_16c = local_16c + local_104;
                                  uVar9 = 0xffffffff;
                                  pcVar13 = local_1a2d + 1;
                                  do {
                                    if (uVar9 == 0) break;
                                    uVar9 = uVar9 - 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  iVar4 = ~uVar9 - 1;
                                  if (0 < iVar4) {
                                    pcVar13 = local_1a2d + ~uVar9;
                                    do {
                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                      break;
                                      iVar4 = iVar4 + -1;
                                      pcVar13 = pcVar13 + -1;
                                    } while (0 < iVar4);
                                  }
                                  (local_1a2d + 1)[iVar4] = '\0';
                                  while (((&DAT_006074b8)[(byte)(local_1a2d[1] + 1)] & 2) != 0) {
                                    FUN_005a54c0(local_1a2d + 1);
                                  }
                                  if (local_170 != 0) {
                                    uVar6 = FUN_00495110(param_1,local_1a2d + 1);
                                    if (local_108 <= 0.0) {
                                      FUN_00556ab0(uVar6,local_10c);
                                    }
                                    else {
                                      FUN_00556c10(uVar6,local_10c,local_108,0);
                                    }
                                  }
                                }
                                else {
                                  iVar4 = FUN_005a3f90(param_2,"flagOn",6);
                                  if ((iVar4 == 0) &&
                                     (((&DAT_006074b8)[(byte)(param_2[6] + 1)] & 0xe0) == 0)) {
                                    local_16c = param_2 + 6;
                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                      local_16c = local_16c + 1;
                                    }
                                    pcVar13 = (char *)FUN_0048bc10(&local_16c,local_28c,0x20,1);
                                    if (pcVar13 != (char *)0x0) {
LAB_0048c717:
                                      pcVar12 = &DAT_01c734b0;
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
                                    if (local_170 != 0) {
                                      FUN_004946f0(param_1,local_28c,1);
                                    }
                                  }
                                  else {
                                    iVar4 = FUN_005a3f90(param_2,"flagOff",7);
                                    if ((iVar4 == 0) &&
                                       (((&DAT_006074b8)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                      local_16c = param_2 + 7;
                                      while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                        local_16c = local_16c + 1;
                                      }
                                      pcVar13 = (char *)FUN_0048bc10(&local_16c,local_26c,0x20,1);
                                      if (pcVar13 != (char *)0x0) goto LAB_0048c717;
                                      if (local_170 != 0) {
                                        FUN_004946f0(param_1,local_26c,0);
                                      }
                                    }
                                    else {
                                      iVar4 = FUN_005a3f90(param_2,"gameFlagOn",10);
                                      if ((iVar4 == 0) &&
                                         (((&DAT_006074b8)[(byte)(param_2[10] + 1)] & 0xe0) == 0)) {
                                        local_16c = param_2 + 10;
                                        while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0) {
                                          local_16c = local_16c + 1;
                                        }
                                        pcVar13 = (char *)FUN_0048bc10(&local_16c,local_22c,0x20,1);
                                        if (pcVar13 != (char *)0x0) goto LAB_0048c717;
                                        if (local_170 != 0) {
                                          FUN_004948e0(param_1,local_22c,1);
                                        }
                                      }
                                      else {
                                        iVar4 = FUN_005a3f90(param_2,"gameFlagOff",0xb);
                                        if ((iVar4 == 0) &&
                                           (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)
                                           ) {
                                          local_16c = param_2 + 0xb;
                                          while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) != 0)
                                          {
                                            local_16c = local_16c + 1;
                                          }
                                          pcVar13 = (char *)FUN_0048bc10(&local_16c,local_24c,0x20,1
                                                                        );
                                          if (pcVar13 != (char *)0x0) goto LAB_0048c717;
                                          if (local_170 != 0) {
                                            FUN_004948e0(param_1,local_24c,0);
                                          }
                                        }
                                        else {
                                          iVar4 = FUN_005a3f90(param_2,"hurtCharacter",0xd)
                                          ;
                                          if ((iVar4 == 0) &&
                                             (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] & 0xe0) ==
                                              0)) {
                                            local_16c = param_2 + 0xd;
                                            while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) !=
                                                   0) {
                                              local_16c = local_16c + 1;
                                            }
                                            local_100 = -1;
                                            FUN_005a5b9c(local_16c," ( %[^,], %[^,],%f)%n",local_dad + 1,
                                                         local_3e9 + 1,&local_fc,&local_100);
                                            if (local_100 < 2) {
                                              uVar6 = FUN_0048b7f0();
                                              return uVar6;
                                            }
                                            uVar9 = 0xffffffff;
                                            pcVar13 = local_dad + 1;
                                            do {
                                              if (uVar9 == 0) break;
                                              uVar9 = uVar9 - 1;
                                              cVar1 = *pcVar13;
                                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                            } while (cVar1 != '\0');
                                            iVar4 = ~uVar9 - 1;
                                            if (0 < iVar4) {
                                              pcVar13 = local_dad + ~uVar9;
                                              do {
                                                if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2)
                                                    == 0) break;
                                                iVar4 = iVar4 + -1;
                                                pcVar13 = pcVar13 + -1;
                                              } while (0 < iVar4);
                                            }
                                            (local_dad + 1)[iVar4] = '\0';
                                            while (((&DAT_006074b8)[(byte)(local_dad[1] + 1)] & 2)
                                                   != 0) {
                                              FUN_005a54c0(local_dad + 1);
                                            }
                                            uVar9 = 0xffffffff;
                                            pcVar13 = local_3e9 + 1;
                                            do {
                                              if (uVar9 == 0) break;
                                              uVar9 = uVar9 - 1;
                                              cVar1 = *pcVar13;
                                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                            } while (cVar1 != '\0');
                                            iVar4 = ~uVar9 - 1;
                                            if (0 < iVar4) {
                                              pcVar13 = local_3e9 + ~uVar9;
                                              do {
                                                if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2)
                                                    == 0) break;
                                                iVar4 = iVar4 + -1;
                                                pcVar13 = pcVar13 + -1;
                                              } while (0 < iVar4);
                                            }
                                            (local_3e9 + 1)[iVar4] = '\0';
                                            while (((&DAT_006074b8)[(byte)(local_3e9[1] + 1)] & 2)
                                                   != 0) {
                                              FUN_005a54c0(local_3e9 + 1);
                                            }
                                            local_16c = local_16c + local_100;
                                            while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2) !=
                                                   0) {
                                              local_16c = local_16c + 1;
                                            }
                                            uVar9 = FUN_0048b950(local_dad + 1,DAT_007e2cec,
                                                                 &DAT_007e2cb4);
                                            if (uVar9 == 0) {
                                              return 0;
                                            }
                                            if (uVar9 == 0x0FFFFFFF) {
                                              local_170 = 0;
                                            }
                                            iVar4 = FUN_0048bec0(local_3e9 + 1,&local_f8);
                                            if (iVar4 == 0) {
                                              uVar6 = FUN_0048b7f0(
                                                  "Unknown damage type \"%s\" in hurtCharacter command.",local_3e9 + 1)
                                              ;
                                              return uVar6;
                                            }
                                            if (local_170 != 0) {
                                              (**(code **)(*(int *)(uVar9 + 0x154) + 0xd8))
                                                        (uVar9,local_f8,local_fc);
                                            }
                                          }
                                          else {
                                            iVar4 = FUN_005a3f90(param_2,"incCounter",10);
                                            if ((iVar4 == 0) &&
                                               (((&DAT_006074b8)[(byte)(param_2[10] + 1)] & 0xe0) ==
                                                0)) {
                                              local_16c = param_2 + 10;
                                              while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2)
                                                     != 0) {
                                                local_16c = local_16c + 1;
                                              }
                                              local_f4 = -1;
                                              FUN_005a5b9c(local_16c,"( %[^ )] )%n",local_a8d + 1,
                                                           &local_f4);
                                              if (local_f4 < 5) {
                                                FUN_005a28c0(&DAT_01c734b0,
                                                             "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_16c = local_16c + local_f4;
                                              uVar9 = 0xffffffff;
                                              pcVar13 = local_a8d + 1;
                                              do {
                                                if (uVar9 == 0) break;
                                                uVar9 = uVar9 - 1;
                                                cVar1 = *pcVar13;
                                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                              } while (cVar1 != '\0');
                                              iVar4 = ~uVar9 - 1;
                                              if (0 < iVar4) {
                                                pcVar13 = local_a8d + ~uVar9;
                                                do {
                                                  if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] & 2)
                                                      == 0) break;
                                                  iVar4 = iVar4 + -1;
                                                  pcVar13 = pcVar13 + -1;
                                                } while (0 < iVar4);
                                              }
                                              (local_a8d + 1)[iVar4] = '\0';
                                              while (((&DAT_006074b8)[(byte)(local_a8d[1] + 1)] & 2)
                                                     != 0) {
                                                FUN_005a54c0(local_a8d + 1);
                                              }
                                              if (local_170 != 0) {
                                                iVar4 = FUN_00494d00(param_1,local_a8d + 1);
                                                FUN_00494bf0(param_1,local_a8d + 1,iVar4 + 1);
                                              }
                                            }
                                            else {
                                              iVar4 = FUN_005a3f90(param_2,"decCounter",10)
                                              ;
                                              if ((iVar4 == 0) &&
                                                 (((&DAT_006074b8)[(byte)(param_2[10] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_16c = param_2 + 10;
                                                while (((&DAT_006074b8)[(byte)(*local_16c + 1)] & 2)
                                                       != 0) {
                                                  local_16c = local_16c + 1;
                                                }
                                                local_f0 = -1;
                                                FUN_005a5b9c(local_16c,"( %[^ )] )%n",local_6a5 + 1,
                                                             &local_f0);
                                                if (local_f0 < 5) {
                                                  FUN_005a28c0(&DAT_01c734b0,
                                                               "Error parsing decCounter arguments");
                                                  return 0;
                                                }
                                                local_16c = local_16c + local_f0;
                                                uVar9 = 0xffffffff;
                                                pcVar13 = local_6a5 + 1;
                                                do {
                                                  if (uVar9 == 0) break;
                                                  uVar9 = uVar9 - 1;
                                                  cVar1 = *pcVar13;
                                                  pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                } while (cVar1 != '\0');
                                                iVar4 = ~uVar9 - 1;
                                                if (0 < iVar4) {
                                                  pcVar13 = local_6a5 + ~uVar9;
                                                  do {
                                                    if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)] &
                                                        2) == 0) break;
                                                    iVar4 = iVar4 + -1;
                                                    pcVar13 = pcVar13 + -1;
                                                  } while (0 < iVar4);
                                                }
                                                (local_6a5 + 1)[iVar4] = '\0';
                                                while (((&DAT_006074b8)[(byte)(local_6a5[1] + 1)] &
                                                       2) != 0) {
                                                  FUN_005a54c0(local_6a5 + 1);
                                                }
                                                if (local_170 != 0) {
                                                  iVar4 = FUN_00494d00(param_1,local_6a5 + 1);
                                                  FUN_00494bf0(param_1,local_6a5 + 1,iVar4 + -1);
                                                }
                                              }
                                              else {
                                                iVar4 = FUN_005a3f90(param_2,
                                                  "killCharacter",0xd);
                                                if ((iVar4 == 0) &&
                                                   (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] &
                                                    0xe0) == 0)) {
                                                  local_16c = param_2 + 0xd;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  local_e8 = local_194;
                                                  local_e4 = 0.0;
                                                  local_ec = -1;
                                                  FUN_005a5b9c(local_16c," ( %[^,], %[^,], %f , %f , %f , %f)%n",
                                                               local_189d + 1,local_385 + 1,
                                                               local_194,local_190,local_18c,
                                                               &local_e4,&local_ec);
                                                  local_e4 = local_e4 * _DAT_005bf4b4;
                                                  if (local_ec < 0) {
                                                    local_e4 = -1.0;
                                                    FUN_005a5b9c(local_16c," ( %[^,], %[^,], %f , %f , %f )%n",
                                                                 local_189d + 1,local_385 + 1,
                                                                 local_194,local_190,local_18c,
                                                                 &local_ec);
                                                  }
                                                  if (local_ec < 0) {
                                                    local_e8 = (byte *)0x0;
                                                    FUN_005a5b9c(local_16c," ( %[^,], %[^)])%n",
                                                                 local_189d + 1,local_385 + 1,
                                                                 &local_ec);
                                                  }
                                                  if (local_ec < 0) {
                                                    uVar6 = FUN_0048b7f0();
                                                    return uVar6;
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_189d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_189d + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_189d + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_189d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_189d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_385 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_385 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_385 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_385[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_385 + 1);
                                                  }
                                                  local_16c = local_16c + local_ec;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  uVar9 = FUN_0048b950(local_189d + 1,DAT_007e2cec,
                                                                       &DAT_007e2cb4);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  iVar4 = FUN_0048bd30(local_385 + 1,&local_e0);
                                                  if (iVar4 == 0) {
                                                    uVar6 = FUN_0048b7f0(
                                                  "Unknown death type \"%s\" in killCharacter command.",local_385 + 1);
                                                  return uVar6;
                                                  }
                                                  if (local_170 != 0) {
                                                    (**(code **)(*(int *)(uVar9 + 0x154) + 0xdc))
                                                              (uVar9,local_e0,local_e8,local_e4);
                                                  }
                                                }
                                                else {
                                                  iVar4 = FUN_005a3f90(param_2,
                                                  "killAllEnemies",0xe);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xe;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_dc = -1;
                                                    FUN_005a5b9c(local_16c,"( )%n",&local_dc);
                                                    if (local_dc < 2) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_dc;
                                                  iVar5 = 0;
                                                  iVar4 = 0;
                                                  while (iVar5 < *(int *)(0x01ED78C8 + 0x14d164))
                                                  {
                                                    iVar11 = FUN_0040c840(*(uint *)
                                                                           (iVar4 + 0x14d168 +
                                                                           0x01ED78C8),
                                                                          _DAT_01c5bc48);
                                                    if ((iVar11 == 0) ||
                                                       (iVar7 = (**(code **)(*(int *)(iVar11 + 0x154
                                                                                     ) + 0x10c))(),
                                                       iVar7 != 0)) {
                                                      iVar5 = iVar5 + 1;
                                                      iVar4 = iVar4 + 4;
                                                    }
                                                    else {
                                                      (**(code **)(*(int *)(iVar11 + 0x154) + 0xdc))
                                                                (iVar11,0);
                                                      iVar5 = iVar5 + 1;
                                                      iVar4 = iVar4 + 4;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "restorePrye",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xb;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_d8 = -1;
                                                    FUN_005a5b9c(local_16c,"( )%n",&local_d8);
                                                    if (local_d8 < 2) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
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
                                                    iVar4 = FUN_005a3f90(param_2,"killHero"
                                                                         ,8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = param_2 + 8;
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      if (*0x01DA62F0 != 0) {
                                                        uVar6 = FUN_0048b7f0();
                                                        return uVar6;
                                                      }
                                                      local_d4 = -1;
                                                      FUN_005a5b9c(local_16c," ( %[^)])%n",local_44c,
                                                                   &local_d4);
                                                      if (local_d4 < 2) {
                                                        uVar6 = FUN_0048b7f0();
                                                        return uVar6;
                                                      }
                                                      local_16c = local_16c + local_d4;
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      iVar4 = FUN_0048bd30(local_44c,&local_d0);
                                                      if (iVar4 == 0) {
                                                        uVar6 = FUN_0048b7f0(
                                                  "Unknown death type \"%s\" in killHero command.",local_44c);
                                                  return uVar6;
                                                  }
                                                  if ((local_170 != 0) &&
                                                     (iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04
                                                                      ), iVar4 != 0)) {
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xdc))
                                                              (iVar4,local_d0,0,0xbf800000);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,"killSfx",
                                                                         7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = param_2 + 7;
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_cc = -1;
                                                      FUN_005a5b9c(local_16c,"(%[^,)]%n",
                                                                   local_1195 + 1,&local_cc);
                                                      if (local_cc < 3) {
                                                        FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                          
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_cc;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1195 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1195 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1195 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1195[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_1195 + 1);
                                                  }
                                                  local_c8 = 0.0;
                                                  pcVar13 = local_16c;
                                                  if (*local_16c == ',') {
                                                    local_cc = -1;
                                                    FUN_005a5b9c(local_16c,",%f%n",&local_c8,
                                                                 &local_cc);
                                                    if (local_cc < 3) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  pcVar13 = local_16c + local_cc;
                                                  }
                                                  do {
                                                    local_16c = pcVar13;
                                                    pcVar13 = local_16c + 1;
                                                  } while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0);
                                                  if (*local_16c != ')') {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "Can't find matching ) in killSfx command"
                                                                );
                                                    return 0;
                                                  }
                                                  local_16c = pcVar13;
                                                  if (local_170 != 0) {
                                                    uVar6 = FUN_00495110(param_1,local_1195 + 1);
                                                    if (local_c8 <= 0.0) {
                                                      FUN_00556be0();
                                                      FUN_00495280();
                                                    }
                                                    else {
                                                      FUN_00556c10(uVar6,0,local_c8,1);
                                                      FUN_00495280();
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "lightning",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 9;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_c4 = -1;
                                                    FUN_005a5b9c(local_16c,"( )%n",&local_c4);
                                                    if (local_c4 < 2) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_c4;
                                                  if (local_170 != 0) {
                                                    FUN_0057c2e0(0x02D0C1A0,0x3dcccccd,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,"playSfx",
                                                                         7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = param_2 + 7;
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_c0 = -1;
                                                      FUN_005a5b9c(local_16c,"(%[^,)]%n",
                                                                   local_1fa5 + 1,&local_c0);
                                                      if (local_c0 < 3) {
                                                        FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                          
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_c0;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1fa5 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1fa5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1fa5 + 1)[iVar4] = '\0';
                                                  while (pcVar13 = local_16c,
                                                        ((&DAT_006074b8)[(byte)(local_1fa5[1] + 1)]
                                                        & 2) != 0) {
                                                    FUN_005a54c0(local_1fa5 + 1);
                                                  }
                                                  puVar10 = &DAT_005fbaf8;
                                                  puVar16 = (uint *)((int)local_ce5 + 1);
                                                  for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1)
                                                  {
                                                    *puVar16 = *puVar10;
                                                    puVar10 = puVar10 + (uint)bVar17 * -2 + 1;
                                                    puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
                                                  }
                                                  pcVar12 = local_16c;
                                                  if (*pcVar13 == ',') {
                                                    local_c0 = -1;
                                                    FUN_005a5b9c(local_16c,",%[^)]%n",
                                                                 (int)local_ce5 + 1,&local_c0);
                                                    if (local_c0 < 3) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_c0;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = (char *)((int)local_ce5 + 1);
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_ce5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  *(byte *)((int)local_ce5 + 1U + iVar4) = 0;
                                                  while (((&DAT_006074b8)[(byte)(local_ce5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0((int)local_ce5 + 1U);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = (char *)((int)local_ce5 + 1);
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  pcVar12 = local_16c;
                                                  if (0x13 < ~uVar9 - 1) {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "handle name %s is too long, max %d chars"
                                                                 ,(int)local_ce5 + 1,0x13);
                                                    return 0;
                                                  }
                                                  }
                                                  do {
                                                    local_16c = pcVar12;
                                                    pcVar12 = local_16c + 1;
                                                  } while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0);
                                                  if (*local_16c != ')') {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "Can't find matching ) in playSfx command"
                                                                );
                                                    return 0;
                                                  }
                                                  local_16c = pcVar12;
                                                  if (local_170 != 0) {
                                                    iVar4 = FUN_005a3f90(local_1fa5 + 1,
                                                                         &DAT_005bebca,2);
                                                    if (iVar4 == 0) {
                                                      iVar4 = FUN_00556e30();
                                                      if (iVar4 != 0) {
                                                        FUN_00555fd0();
                                                        FUN_00555e90();
                                                        uVar6 = FUN_005609b0(0x02CF5680,param_1,
                                                                             local_1fa5 + 1);
                                                        FUN_00556050();
                                                        if (local_ce5[1] != '\0') {
                                                          FUN_00495150(param_1,(int)local_ce5 + 1,
                                                                       uVar6);
                                                        }
                                                      }
                                                    }
                                                    else {
                                                      uVar6 = FUN_005609b0(0x02CF5680,param_1,
                                                                           local_1fa5 + 1);
                                                      if (local_ce5[1] != '\0') {
                                                        FUN_00495150(param_1,(int)local_ce5 + 1,
                                                                     uVar6);
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "playMusic",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 9;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_bc = -1;
                                                    FUN_005a5b9c(local_16c," ( %[^)])%n",
                                                                 local_b55 + 1,&local_bc);
                                                    if (local_bc < 2) {
                                                      uVar6 = FUN_0048b7f0();
                                                      return uVar6;
                                                    }
                                                    local_16c = local_16c + local_bc;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    uVar9 = 0xffffffff;
                                                    pcVar13 = local_b55 + 1;
                                                    do {
                                                      if (uVar9 == 0) break;
                                                      uVar9 = uVar9 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    iVar4 = ~uVar9 - 1;
                                                    if (0 < iVar4) {
                                                      pcVar13 = local_b55 + ~uVar9;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                                        break;
                                                        iVar4 = iVar4 + -1;
                                                        pcVar13 = pcVar13 + -1;
                                                      } while (0 < iVar4);
                                                    }
                                                    (local_b55 + 1)[iVar4] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_b55[1] + 1)] & 2) != 0) {
                                                      FUN_005a54c0(local_b55 + 1);
                                                    }
                                                    FUN_004c4a60(0x01D2130C,local_b55 + 1,0,0);
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "resetGore",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 9;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_b8 = -1;
                                                    FUN_005a5b9c(local_16c,"( )%n",&local_b8);
                                                    if (local_b8 < 2) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_b8;
                                                  if (local_170 != 0) {
                                                    FUN_004ce560();
                                                    FUN_004a1480();
                                                    local_b4 = *0x01D81080;
                                                    for (iVar4 = 0; iVar4 < 0x01D81080[1];
                                                        iVar4 = iVar4 + 1) {
                                                      *0x01D81080 = iVar4;
                                                      FUN_004f6bf0();
                                                      iVar5 = 0;
                                                      for (iVar11 = 0;
                                                          iVar11 < *(int *)(0x01ED78C8 + 0x14d164)
                                                          ; iVar11 = iVar11 + 1) {
                                                        iVar7 = FUN_0040c840(*(uint *)
                                                                              (iVar5 + 0x14d168 +
                                                                              0x01ED78C8),
                                                                             DAT_007e161c);
                                                        if ((iVar7 != 0) &&
                                                           (*(int *)(iVar7 + 0x70) == 1)) {
                                                          *(uint *)(iVar7 + 0x70) = 2;
                                                        }
                                                        iVar5 = iVar5 + 4;
                                                      }
                                                    }
                                                    *0x01D81080 = local_b4;
                                                    FUN_004f6f80();
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setActorBool",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xc;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_b0 = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^,], %[^,], %[^)])%n",
                                                                 local_9c5 + 1,local_2135 + 1,
                                                                 local_835 + 1,&local_b0);
                                                    if (local_b0 < 3) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setActorBool parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_b0;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_9c5 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_9c5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_9c5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_9c5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_9c5 + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_2135 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_2135 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_2135 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_2135[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_2135 + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_835 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_835 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_835 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_835[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_835 + 1);
                                                  }
                                                  iVar5 = 0;
                                                  local_ac = 0;
                                                  iVar4 = local_ac;
                                                  if (0 < 0x00000002) {
                                                    iVar11 = 0;
                                                    do {
                                                      if (*(int *)((int)&DAT_005fba64 + iVar11) == 0
                                                         ) {
                                                        iVar7 = FUN_005a3260("spectralFlag"
                                                                             + iVar11,local_2135 + 1
                                                                            );
                                                        iVar4 = (int)&DAT_005fba64 + iVar11;
                                                        if (iVar7 == 0) break;
                                                      }
                                                      iVar5 = iVar5 + 1;
                                                      iVar11 = iVar11 + 0x48;
                                                      iVar4 = local_ac;
                                                    } while (iVar5 < 0x00000002);
                                                  }
                                                  local_ac = iVar4;
                                                  if (local_ac == 0) {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "%s is not a valid boolean actor variable name"
                                                                 ,local_2135 + 1);
                                                    return 0;
                                                  }
                                                  uVar9 = FUN_0048b950(local_9c5 + 1,
                                                                       *(uint *)
                                                                        (local_ac + 0x44),
                                                                       local_ac + 0x22);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if ((uVar9 == 0x0FFFFFFF) || (local_170 == 0)) {
                                                    iVar4 = FUN_00491b00(param_1,local_835 + 1);
                                                    if (iVar4 != 0) {
                                                      return 0;
                                                    }
                                                  }
                                                  else {
                                                    uVar6 = FUN_00491aa0(0x01C6E360,local_835 + 1)
                                                    ;
                                                    *(uint *)
                                                     (*(int *)(local_ac + 0x40) + uVar9) = uVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setCameraAmbient",0x10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0x10;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_a4 = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^,], %f)%n",
                                                                 local_1af5 + 1,&local_a8,&local_a4)
                                                    ;
                                                    if (local_a4 < 3) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setCameraAmbient parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_a4;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1af5 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1af5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1af5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1af5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_1af5 + 1);
                                                  }
                                                  iVar4 = FUN_00535360(0x01ED78C8,local_1af5 + 1);
                                                  if (iVar4 < 0) {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "Camera \"%s\" does not exist.",
                                                                 local_1af5 + 1);
                                                    return 0;
                                                  }
                                                  if ((local_a8 < 0.0) ||
                                                     (0x42c80000 < (int)local_a8)) {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "Ambient value %g is out of range (1..100)"
                                                                 ,(double)local_a8);
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                    FUN_0053b280(0x01ED78C8,iVar4,
                                                                 local_a8 * (float)_DAT_005bf4b8);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setCounter",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 10;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_a0 = -1;
                                                    FUN_005a5b9c(local_16c,"( %[^,)]%n",
                                                                 local_e75 + 1,&local_a0);
                                                    if (local_a0 < 5) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_a0;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_e75 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_e75 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_e75 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_e75[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_e75 + 1);
                                                  }
                                                  local_9c = 0;
                                                  if (*local_16c == ',') {
                                                    local_a0 = -1;
                                                    FUN_005a5b9c(local_16c,",%d%n",&local_9c,
                                                                 &local_a0);
                                                    if (local_a0 < 1) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setCounter value argument");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_a0;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  }
                                                  if (*local_16c != ')') {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "Error parsing setCounter arguments"
                                                                );
                                                    return 0;
                                                  }
                                                  local_16c = local_16c + 1;
                                                  if (local_170 != 0) {
                                                    FUN_00494bf0(param_1,local_e75 + 1,local_9c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setDoorState",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xc;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_98 = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^,], %[^)])%n",
                                                                 local_10cd + 1,local_1edd + 1,
                                                                 &local_98);
                                                    if (local_98 < 5) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setDoorState command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_98;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_10cd + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_10cd + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_10cd + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_10cd[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_10cd + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1edd + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1edd + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1edd + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1edd[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_1edd + 1);
                                                  }
                                                  uVar9 = FUN_0048b950(local_10cd + 1,_DAT_01b85178,
                                                                       0x1b85140);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 == 0x0FFFFFFF) {
                                                    local_170 = 0;
                                                  }
                                                  iVar4 = FUN_005a3260(local_1edd + 1,&DAT_005bee04)
                                                  ;
                                                  if (iVar4 == 0) {
                                                    uVar6 = 2;
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3260(local_1edd + 1,
                                                                         "closed");
                                                    uVar6 = 0;
                                                    if (iVar4 != 0) {
                                                      iVar4 = FUN_005a3260(local_1edd + 1,
                                                                           "opening");
                                                      if (iVar4 == 0) {
                                                        uVar6 = 1;
                                                      }
                                                      else {
                                                        iVar4 = FUN_005a3260(local_1edd + 1,
                                                                             "closing");
                                                        if (iVar4 != 0) {
                                                          FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                              
                                                  "Invalid door state '%s'",local_1edd + 1);
                                                  return 0;
                                                  }
                                                  uVar6 = 3;
                                                  }
                                                  }
                                                  }
                                                  if (local_170 != 0) {
                                                    FUN_00463d30(uVar9,uVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setGroupAmbient",0xf);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xf;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_8c = -1;
                                                    FUN_005a5b9c(local_16c,"(%d, %f)%n",
                                                                 &local_94,&local_90,&local_8c);
                                                    if (local_8c < 3) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setGroupAmbient parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_8c;
                                                  if ((local_90 < 0.0) ||
                                                     (0x42c80000 < (int)local_90)) {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "Ambient value %g is out of range (1..100)"
                                                                 ,(double)local_90);
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                    FUN_0053b300(0x01ED78C8,local_94,
                                                                 local_90 * (float)_DAT_005bf4b8);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0x13] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0x13;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_88 = -1;
                                                    FUN_005a5b9c(local_16c,"( %[^ ,] , %d )%n",local_514,
                                                                 &local_84,&local_88);
                                                    if (local_88 < 0) {
                                                      uVar6 = FUN_0048b7f0();
                                                      return uVar6;
                                                    }
                                                    local_16c = local_16c + local_88;
                                                    FUN_0053b3b0(0x01ED78C8,local_514,&local_80,
                                                                 &local_7c);
                                                    if (local_80 == 0) {
                                                      uVar6 = FUN_0048b7f0(
                                                  "SpotLight %s doesn't exist.",local_514);
                                                  return uVar6;
                                                  }
                                                  if ((local_84 < 0) ||
                                                     (*(int *)(local_80 + 0x11ec) <= local_84)) {
                                                    uVar6 = FUN_0048b7f0(
                                                  "Invalid filter frame, %s has %d filters",local_514,
                                                  *(uint *)(local_80 + 0x11ec));
                                                  return uVar6;
                                                  }
                                                  if (local_170 != 0) {
                                                    if (local_7c == 0) {
                                                      _DAT_01d71de0 = "..\\core\\event.cpp";
                                                      _DAT_01d71de4 = 0x78f;
                                                      FUN_004e4330(
                                                  "Can't find CDemonLight for light %s in setLightFilterFrame meta-command",local_514);
                                                  }
                                                  FUN_00542db0(local_80,local_84,local_7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setLeverState",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xd;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_78 = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^,], %[^)])%n",
                                                                 local_170d + 1,local_1e15 + 1,
                                                                 &local_78);
                                                    if (local_78 < 5) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setLeverState command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_78;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_170d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_170d + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_170d + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_170d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_170d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1e15 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1e15 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1e15 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1e15[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_1e15 + 1);
                                                  }
                                                  uVar9 = FUN_0048b950(local_170d + 1,_DAT_01d70c34,
                                                                       0x1d70bfc);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if ((uVar9 == 0x0FFFFFFF) || (local_170 == 0)) {
                                                    iVar4 = FUN_00491b00(param_1,local_1e15 + 1);
                                                    if (iVar4 != 0) {
                                                      return 0;
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00491aa0(0x01C6E360,local_1e15 + 1
                                                                         ,1);
                                                    if (iVar4 == 0) {
                                                      uStack_178 = 0;
                                                    }
                                                    else {
                                                      uStack_178 = 0x3ff00000;
                                                    }
                                                    local_180[1] = 0.0;
                                                    FUN_004e04b0(uVar9,(float)(double)((ulonglong)
                                                                                       uStack_178 <<
                                                                                      0x20));
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setModelState",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xd;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_74 = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^,], %[^)])%n",
                                                                 local_1325 + 1,local_c1d + 1,
                                                                 &local_74);
                                                    if (local_74 < 5) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setModelState command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_74;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1325 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1325 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1325 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1325[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_1325 + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_c1d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_c1d + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_c1d + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_c1d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_c1d + 1);
                                                  }
                                                  uVar9 = FUN_0048b950(local_1325 + 1,DAT_007e2cec,
                                                                       &DAT_007e2cb4);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 != 0x0FFFFFFF) {
                                                    uVar6 = FUN_004fc310(uVar9 + 0x158,local_c1d + 1
                                                                         ,0);
                                                    iVar4 = FUN_004fba50(uVar6);
                                                    if (iVar4 < 0) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Model %s does not have state %s",uVar9 + 0x24a8
                                                  ,local_c1d + 1);
                                                  return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                    FUN_004fc0d0(uVar9 + 0x158,iVar4,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setSunlight",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xb;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_6c = -1;
                                                    FUN_005a5b9c(local_16c,"(%f , %f , %f , %f )%n",
                                                                 &local_188,&local_184,local_180,
                                                                 &local_70,&local_6c);
                                                    if (local_6c < 5) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setSunlight command parms");
                                                  return 0;
                                                  }
                                                  local_68 = SQRT(local_180[0] * local_180[0] +
                                                                  local_188 * local_188 +
                                                                  local_184 * local_184);
                                                  local_16c = local_16c + local_6c;
                                                  if (local_68 <= 0.0) {
                                                    local_184 = 0.0;
                                                    local_188 = 0.0;
                                                    local_180[0] = 0.0;
                                                  }
                                                  else {
                                                    fVar2 = 1.0 / local_68;
                                                    local_188 = local_188 * fVar2;
                                                    local_184 = local_184 * fVar2;
                                                    local_180[0] = local_180[0] * fVar2;
                                                  }
                                                  if (local_170 != 0) {
                                                    FUN_0053b2c0(0x01ED78C8,local_188,local_184,
                                                                 local_180[0],local_70);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,"setTimer"
                                                                         ,8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_006074b8)[(byte)(param_2[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_16c = param_2 + 8;
                                                      while (((&DAT_006074b8)
                                                              [(byte)(*local_16c + 1)] & 2) != 0) {
                                                        local_16c = local_16c + 1;
                                                      }
                                                      local_58 = -1;
                                                      FUN_005a5b9c(local_16c,"(%[^,], %f)%n",
                                                                   local_76d + 1,&local_5c,&local_58
                                                                  );
                                                      if (local_58 < 3) {
                                                        FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                          
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_58;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_76d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_76d + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_76d + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_76d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_76d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_76d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  if (0x1f < ~uVar9 - 1) {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "Timer name \"%s\" is too long, (max %d chars)"
                                                                 ,local_76d + 1,0x1f);
                                                    return 0;
                                                  }
                                                  if (local_5c < 0.0) {
                                                    FUN_005a28c0(&DAT_01c734b0,
                                                                 "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                    FUN_00494a70(param_1,local_76d + 1,local_5c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setEndTimer",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xb;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_50 = -1;
                                                    FUN_005a5b9c(local_16c,"(%f)%n",&local_54,
                                                                 &local_50);
                                                    if (local_50 < 2) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setEndTimer command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_50;
                                                  *(uint *)(0x01D2130C + 0x294) = local_54;
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "setWeather",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 10;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_4c = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^)])%n",
                                                                 local_1bbd + 1,&local_4c);
                                                    if (local_4c < 3) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_4c;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1bbd + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1bbd + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1bbd + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1bbd[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_1bbd + 1);
                                                  }
                                                  iVar4 = FUN_005a3260(local_1bbd + 1,&DAT_005bf180)
                                                  ;
                                                  uVar6 = 0;
                                                  if (iVar4 != 0) {
                                                    iVar4 = FUN_005a3260(local_1bbd + 1,
                                                                         &DAT_005bf185);
                                                    if (iVar4 == 0) {
                                                      uVar6 = 1;
                                                    }
                                                    else {
                                                      iVar4 = FUN_005a3260(local_1bbd + 1,
                                                                           &DAT_005bf18a);
                                                      if (iVar4 != 0) {
                                                        FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                          
                                                  "Invalid weather type: %s",local_1bbd + 1);
                                                  return 0;
                                                  }
                                                  uVar6 = 2;
                                                  }
                                                  }
                                                  if (local_170 != 0) {
                                                    FUN_0057d050(0x02D0C1A0,uVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "shakeScreen",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xb;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_38 = -1;
                                                    FUN_005a5b9c(local_16c,"( %f, %f, %f, %f )%n",
                                                                 &local_48,&local_44,&local_40,
                                                                 &local_3c,&local_38);
                                                    if (local_38 < 5) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_38;
                                                  if (local_170 != 0) {
                                                    FUN_0053b440(0x01ED78C8,local_48,local_44,
                                                                 local_40,local_3c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "slamModelToMotion",0x11);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0x11;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_34 = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^,], %[^)])%n",
                                                                 local_1d4d + 1,local_206d + 1,
                                                                 &local_34);
                                                    if (local_34 < 5) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_16c = local_16c + local_34;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1d4d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1d4d + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1d4d + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_1d4d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_1d4d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_206d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_206d + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_206d + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_206d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_206d + 1);
                                                  }
                                                  uVar9 = FUN_0048b950(local_1d4d + 1,DAT_007e2cec,
                                                                       &DAT_007e2cb4);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 != 0x0FFFFFFF) {
                                                    iVar4 = uVar9 + 0x158;
                                                    uVar6 = FUN_004fc310(iVar4,local_206d + 1,0);
                                                    iVar5 = FUN_004fb9c0(uVar6);
                                                    if (iVar5 < 0) {
                                                      FUN_005a28c0(&DAT_01c734b0,
                                                                                                                                      
                                                  "Model %s does not have motion %s",uVar9 + 0x24a8
                                                  ,local_206d + 1);
                                                  return 0;
                                                  }
                                                  if (local_170 != 0) {
                                                    FUN_004fc420(iVar4,iVar5,0);
                                                    iVar5 = FUN_004fc070(iVar4,1);
                                                    FUN_004fc0d0(iVar4,*(uint *)(iVar5 + 0x24)
                                                                );
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "switchCamera",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    param_2 = param_2 + 0xc;
                                                    while (((&DAT_006074b8)[(byte)(*param_2 + 1)] &
                                                           2) != 0) {
                                                      param_2 = param_2 + 1;
                                                    }
                                                    puVar10 = &DAT_005fbbc0;
                                                    puVar16 = local_320;
                                                    for (iVar4 = 0x19; iVar4 != 0;
                                                        iVar4 = iVar4 + -1) {
                                                      *puVar16 = *puVar10;
                                                      puVar10 = puVar10 + (uint)bVar17 * -2 + 1;
                                                      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
                                                    }
                                                    local_30 = -1;
                                                    local_16c = param_2;
                                                    FUN_005a5b9c(param_2," ( %[^ ,)]%n",local_320,
                                                                 &local_30);
                                                    if (local_30 < 2) {
                                                      uVar6 = FUN_0048b7f0();
                                                      return uVar6;
                                                    }
                                                    local_16c = local_16c + local_30;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    iVar4 = FUN_00535360(0x01ED78C8,local_320);
                                                    if (iVar4 < 0) {
                                                      uVar6 = FUN_0048b7f0(
                                                  "Camera \"%s\" doesn't exist",local_320);
                                                  return uVar6;
                                                  }
                                                  local_2c = 0x40400000;
                                                  if (*local_16c == ',') {
                                                    local_30 = -1;
                                                    FUN_005a5b9c(local_16c,",%f%n",&local_2c,
                                                                 &local_30);
                                                    if (local_30 < 2) {
                                                      uVar6 = FUN_0048b7f0();
                                                      return uVar6;
                                                    }
                                                    local_16c = local_16c + local_30;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                  }
                                                  if (*local_16c != ')') {
                                                    uVar6 = FUN_0048b7f0();
                                                    return uVar6;
                                                  }
                                                  local_16c = local_16c + 1;
                                                  if (local_170 != 0) {
                                                    FUN_00540ba0(0x01ED78C8,iVar4,local_2c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0x15] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0x15;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_28 = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^)])%n",local_2dfc,
                                                                 &local_28);
                                                    if (local_28 < 3) {
                                                      uVar6 = FUN_0048b7f0();
                                                      return uVar6;
                                                    }
                                                    local_16c = local_16c + local_28;
                                                    uVar9 = 0xffffffff;
                                                    pcVar13 = local_2dfc;
                                                    do {
                                                      if (uVar9 == 0) break;
                                                      uVar9 = uVar9 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    iVar4 = ~uVar9 - 1;
                                                    if (0 < iVar4) {
                                                      pcVar13 = local_2dfc + (~uVar9 - 1);
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                                        break;
                                                        iVar4 = iVar4 + -1;
                                                        pcVar13 = pcVar13 + -1;
                                                      } while (0 < iVar4);
                                                    }
                                                    local_2dfc[iVar4] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_2dfc[0] + 1)] & 2) != 0) {
                                                      FUN_005a54c0(local_2dfc);
                                                    }
                                                    if (_DAT_01c734ac != 0) {
                                                      uVar6 = FUN_004abb30(0x01D1A05C,local_2dfc);
                                                      switch(uVar6) {
                                                      case 0:
                                                      case 1:
                                                      case 2:
                                                      case 3:
                                                      case 4:
                                                      case 5:
                                                      case 6:
                                                        goto switchD_0048cb59_caseD_2;
                                                      default:
                                                        uVar6 = FUN_0048b7f0(
                                                  "Field notes entry '%s' not found",local_2dfc);
                                                  return uVar6;
                                                  }
                                                  }
                                                  FUN_004abb90(0x01D1A05C,local_2dfc);
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,
                                                  "warpToMulti",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_006074b8)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_16c = param_2 + 0xb;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    local_20 = -1;
                                                    FUN_005a5b9c(local_16c,"(%[^,], %[^,], %[^)])%n",
                                                                 local_1645 + 1,local_157d + 1,
                                                                 local_8fd + 1,&local_20);
                                                    if (local_20 < 5) {
                                                      uVar6 = FUN_0048b7f0();
                                                      return uVar6;
                                                    }
                                                    uVar9 = 0xffffffff;
                                                    pcVar13 = local_1645 + 1;
                                                    do {
                                                      if (uVar9 == 0) break;
                                                      uVar9 = uVar9 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    iVar4 = ~uVar9 - 1;
                                                    if (0 < iVar4) {
                                                      pcVar13 = local_1645 + ~uVar9;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                                        break;
                                                        iVar4 = iVar4 + -1;
                                                        pcVar13 = pcVar13 + -1;
                                                      } while (0 < iVar4);
                                                    }
                                                    (local_1645 + 1)[iVar4] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_1645[1] + 1)] & 2) != 0) {
                                                      FUN_005a54c0(local_1645 + 1);
                                                    }
                                                    uVar9 = 0xffffffff;
                                                    pcVar13 = local_157d + 1;
                                                    do {
                                                      if (uVar9 == 0) break;
                                                      uVar9 = uVar9 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    iVar4 = ~uVar9 - 1;
                                                    if (0 < iVar4) {
                                                      pcVar13 = local_157d + ~uVar9;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                                        break;
                                                        iVar4 = iVar4 + -1;
                                                        pcVar13 = pcVar13 + -1;
                                                      } while (0 < iVar4);
                                                    }
                                                    (local_157d + 1)[iVar4] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_157d[1] + 1)] & 2) != 0) {
                                                      FUN_005a54c0(local_157d + 1);
                                                    }
                                                    uVar9 = 0xffffffff;
                                                    pcVar13 = local_8fd + 1;
                                                    do {
                                                      if (uVar9 == 0) break;
                                                      uVar9 = uVar9 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    iVar4 = ~uVar9 - 1;
                                                    if (0 < iVar4) {
                                                      pcVar13 = local_8fd + ~uVar9;
                                                      do {
                                                        if (((&DAT_006074b8)
                                                             [(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                                        break;
                                                        iVar4 = iVar4 + -1;
                                                        pcVar13 = pcVar13 + -1;
                                                      } while (0 < iVar4);
                                                    }
                                                    (local_8fd + 1)[iVar4] = '\0';
                                                    while (((&DAT_006074b8)
                                                            [(byte)(local_8fd[1] + 1)] & 2) != 0) {
                                                      FUN_005a54c0(local_8fd + 1);
                                                    }
                                                    local_16c = local_16c + local_20;
                                                    while (((&DAT_006074b8)[(byte)(*local_16c + 1)]
                                                           & 2) != 0) {
                                                      local_16c = local_16c + 1;
                                                    }
                                                    uVar9 = FUN_0048b950(local_1645 + 1,DAT_007df9b0
                                                                         ,&DAT_007df978);
                                                    if (uVar9 == 0) {
                                                      return 0;
                                                    }
                                                    if (uVar9 == 0x0FFFFFFF) {
                                                      local_170 = 0;
                                                    }
                                                    local_1c = FUN_0048b950(local_8fd + 1,
                                                                            DAT_007df9b0,
                                                                            &DAT_007df978);
                                                    if (local_1c == 0) {
                                                      return 0;
                                                    }
                                                    if (local_1c == 0x0FFFFFFF) {
                                                      local_170 = 0;
                                                    }
                                                    else if (local_170 != 0) {
                                                      local_200 = *(int *)(uVar9 + 0x2c);
                                                    }
                                                    local_20 = -1;
                                                    uVar8 = FUN_0048b950(local_157d + 1,DAT_007df9b0
                                                                         ,&DAT_007df978);
                                                    if (uVar8 == 0) {
                                                      return 0;
                                                    }
                                                    if (uVar8 == 0x0FFFFFFF) {
                                                      local_170 = uVar8 ^ 0x0FFFFFFF;
                                                    }
                                                    else {
                                                      local_20c = *(uint *)(uVar8 + 0x20);
                                                      local_208 = *(uint *)(uVar8 + 0x24);
                                                      local_204 = *(uint *)(uVar8 + 0x28);
                                                      local_200 = *(int *)(uVar8 + 0x2c);
                                                      if (&local_1dc != (uint *)(uVar8 + 0x30)
                                                         ) {
                                                        local_1dc = *(uint *)(uVar8 + 0x30);
                                                        local_1d8 = *(uint *)(uVar8 + 0x34);
                                                        local_1d4 = *(uint *)(uVar8 + 0x38);
                                                      }
                                                    }
                                                    uVar8 = 0xffffffff;
                                                    pcVar13 = local_157d + 1;
                                                    do {
                                                      if (uVar8 == 0) break;
                                                      uVar8 = uVar8 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    local_20 = ~uVar8 - 1;
                                                    if ((local_20 < 0) ||
                                                       (local_157d[~uVar8] != '\0')) {
                                                      uVar6 = FUN_0048b7f0();
                                                      return uVar6;
                                                    }
                                                    if (local_170 != 0) {
                                                      if (local_200 != *(int *)(uVar9 + 0x2c)) {
                                                        (*(code *)**(uint **)(uVar9 + 0x154))
                                                                  ();
                                                      }
                                                      iVar4 = FUN_0040c840(uVar9,DAT_007e2cec);
                                                      if (iVar4 != 0) {
                                                        (**(code **)(*(int *)(iVar4 + 0x154) + 0xf0)
                                                        )();
                                                        (**(code **)(*(int *)(iVar4 + 0x154) + 0xf8)
                                                        )();
                                                      }
                                                      iVar4 = FUN_0040c840(local_1c,DAT_007e2cec);
                                                      if (iVar4 != 0) {
                                                        (**(code **)(*(int *)(iVar4 + 0x154) + 0xf0)
                                                        )();
                                                        (**(code **)(*(int *)(iVar4 + 0x154) + 0xf8)
                                                        )();
                                                      }
                                                      local_1fc = *(uint *)(uVar9 + 0x20);
                                                      local_1f8 = *(uint *)(uVar9 + 0x24);
                                                      local_1f4 = *(uint *)(uVar9 + 0x28);
                                                      local_1f0 = *(uint *)(uVar9 + 0x2c);
                                                      if (&local_1a0 != (uint *)(uVar9 + 0x30)
                                                         ) {
                                                        local_1a0 = *(uint *)(uVar9 + 0x30);
                                                        local_19c = *(uint *)(uVar9 + 0x34);
                                                        local_198 = *(uint *)(uVar9 + 0x38);
                                                      }
                                                      *(uint *)(local_1c + 0x2c) =
                                                           *(uint *)(uVar9 + 0x2c);
                                                      (**(code **)(*(int *)(local_1c + 0x154) + 0x68
                                                                  ))(local_1c,&local_1fc,&local_1a0)
                                                      ;
                                                      FUN_004088f0();
                                                      *(int *)(uVar9 + 0x2c) = local_200;
                                                      (**(code **)(*(int *)(uVar9 + 0x154) + 0x68))
                                                                (uVar9,&local_20c,&local_1dc);
                                                      if (uVar9 == *(uint *)(0x01ED73E0 + 0xc)) {
                                                        *(uint *)(0x01ED73E0 + 0x10) = 1;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005a3f90(param_2,"warpTo",6
                                                                        );
                                                    if ((iVar4 != 0) ||
                                                       (((&DAT_006074b8)[(byte)(param_2[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      uVar6 = FUN_0048b7f0(
                                                  "Unknown meta-function starting at %s",param_2);
                                                  return uVar6;
                                                  }
                                                  local_16c = param_2 + 6;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  local_14 = -1;
                                                  FUN_005a5b9c(local_16c,"(%[^,], %[^)])%n",local_21fd + 1
                                                               ,local_17d5 + 1,&local_14);
                                                  if (local_14 < 5) {
                                                    uVar6 = FUN_0048b7f0();
                                                    return uVar6;
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_21fd + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_21fd + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_21fd + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_21fd[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_21fd + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_17d5 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_17d5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_006074b8)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_17d5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_006074b8)[(byte)(local_17d5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005a54c0(local_17d5 + 1);
                                                  }
                                                  local_16c = local_16c + local_14;
                                                  while (((&DAT_006074b8)[(byte)(*local_16c + 1)] &
                                                         2) != 0) {
                                                    local_16c = local_16c + 1;
                                                  }
                                                  uVar9 = FUN_0048b950(local_21fd + 1,DAT_007df9b0,
                                                                       &DAT_007df978);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 == 0x0FFFFFFF) {
                                                    local_170 = uVar9 ^ 0x0FFFFFFF;
                                                  }
                                                  else if (local_170 != 0) {
                                                    local_1e0 = *(int *)(uVar9 + 0x2c);
                                                  }
                                                  local_14 = -1;
                                                  FUN_005a5b9c(local_17d5 + 1,
                                                               "%f,%f,%f,%f,%f,%f%n",&local_1ec,
                                                               &local_1e8,&local_1e4,&local_1c4,
                                                               &local_1bc,&local_1c0,&local_14);
                                                  if (local_14 < 0) {
                                                    if ((local_170 != 0) &&
                                                       (&local_1c4 != (uint *)(uVar9 + 0x30)))
                                                    {
                                                      local_1c4 = *(uint *)(uVar9 + 0x30);
                                                      local_1c0 = *(uint *)(uVar9 + 0x34);
                                                      local_1bc = *(uint *)(uVar9 + 0x38);
                                                    }
                                                    FUN_005a5b9c(local_17d5 + 1,"%f,%f,%f,%f%n"
                                                                 ,&local_1ec,&local_1e8,&local_1e4,
                                                                 &local_1c0,&local_14);
                                                  }
                                                  if (local_14 < 0) {
                                                    if ((local_170 != 0) &&
                                                       (&local_1c4 != (uint *)(uVar9 + 0x30)))
                                                    {
                                                      local_1c4 = *(uint *)(uVar9 + 0x30);
                                                      local_1c0 = *(uint *)(uVar9 + 0x34);
                                                      local_1bc = *(uint *)(uVar9 + 0x38);
                                                    }
                                                    FUN_005a5b9c(local_17d5 + 1,"%f,%f,%f%n",
                                                                 &local_1ec,&local_1e8,&local_1e4,
                                                                 &local_14);
                                                  }
                                                  if (local_14 < 0) {
                                                    uVar8 = FUN_0048b950(local_17d5 + 1,DAT_007df9b0
                                                                         ,&DAT_007df978);
                                                    if (uVar8 == 0) {
                                                      return 0;
                                                    }
                                                    if (uVar8 == 0x0FFFFFFF) {
                                                      local_170 = uVar8 ^ 0x0FFFFFFF;
                                                    }
                                                    else {
                                                      local_1ec = *(uint *)(uVar8 + 0x20);
                                                      local_1e8 = *(uint *)(uVar8 + 0x24);
                                                      local_1e4 = *(uint *)(uVar8 + 0x28);
                                                      local_1e0 = *(int *)(uVar8 + 0x2c);
                                                      if (&local_1c4 != (uint *)(uVar8 + 0x30)
                                                         ) {
                                                        local_1c4 = *(uint *)(uVar8 + 0x30);
                                                        local_1c0 = *(uint *)(uVar8 + 0x34);
                                                        local_1bc = *(uint *)(uVar8 + 0x38);
                                                      }
                                                    }
                                                    uVar8 = 0xffffffff;
                                                    pcVar13 = local_17d5 + 1;
                                                    do {
                                                      if (uVar8 == 0) break;
                                                      uVar8 = uVar8 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    local_14 = ~uVar8 - 1;
                                                  }
                                                  if ((local_14 < 0) ||
                                                     (local_17d5[local_14 + 1] != '\0')) {
                                                    uVar6 = FUN_0048b7f0();
                                                    return uVar6;
                                                  }
                                                  if (local_170 != 0) {
                                                    if (local_1e0 != *(int *)(uVar9 + 0x2c)) {
                                                      (*(code *)**(uint **)(uVar9 + 0x154))();
                                                    }
                                                    iVar4 = FUN_0040c840(uVar9,DAT_007e2cec);
                                                    if (iVar4 != 0) {
                                                      (**(code **)(*(int *)(iVar4 + 0x154) + 0xf0))
                                                                ();
                                                      (**(code **)(*(int *)(iVar4 + 0x154) + 0xf8))
                                                                ();
                                                    }
                                                    *(int *)(uVar9 + 0x2c) = local_1e0;
                                                    (**(code **)(*(int *)(uVar9 + 0x154) + 0x68))
                                                              (uVar9,&local_1ec,&local_1c4);
                                                    if (uVar9 == *(uint *)(_DAT_01d5ba14 * 4 +
                                                                          0x1d5ba04)) {
                                                      FUN_004f6ed0(0x01D81080,&local_1ec);
                                                    }
                                                    if (uVar9 == *(uint *)(0x01ED73E0 + 0xc)) {
                                                      *(uint *)(0x01ED73E0 + 0x10) = 1;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
    if (*local_16c != '\0') {
      uVar6 = FUN_0048b7f0();
      return uVar6;
    }
  }
  return 1;
}
