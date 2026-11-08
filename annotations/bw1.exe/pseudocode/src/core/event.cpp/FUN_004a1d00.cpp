// Name: FUN_004a1d00
// Address: 004a1d00
// Address Range: [[004a1d00, 004a6b9a]]
// Convention: unknown
// Signature: undefined4 FUN_004a1d00(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a1d00(int *param_1,char *param_2)

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
  char local_2a8c [255];
  char local_298d [256];
  char local_288d [257];
  byte local_278c [256];
  byte local_268c [255];
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
  byte local_fb4 [199];
  char local_eed [200];
  char local_e25 [200];
  char local_d5d [200];
  char local_c95 [200];
  char local_bcd [200];
  char local_b05 [200];
  char local_a3d [200];
  char local_975 [200];
  char local_8ad [200];
  char local_7e5 [201];
  byte local_71c [199];
  char local_655 [200];
  char local_58d [200];
  char local_4c5 [200];
  char local_3fd [100];
  char local_399 [101];
  byte local_334 [100];
  uint local_2d0 [25];
  byte local_26c [48];
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
  byte local_1a0 [4];
  byte local_19c [4];
  byte local_198 [4];
  byte local_194 [4];
  byte local_190 [4];
  byte local_18c [4];
  float local_188;
  float local_184;
  float local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  byte local_170 [4];
  byte local_16c [4];
  byte local_168 [4];
  uint local_164;
  uint uStack_160;
  uint local_15c;
  char *local_158;
  int local_154;
  int local_150;
  char *local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  uint local_12c;
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
  uint local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  float local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  byte *local_d0;
  float local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
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
  int *local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  float local_54;
  float local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
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
  DAT_01c56ed0 = 0;
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar4 = FUN_005c04e0(param_2,&DAT_005dcd92), iVar4 != 0)) {
    if (*param_2 == '.') {
      param_2 = param_2 + 1;
    }
    local_15c = (uint)(_DAT_01c56ecc == 0);
    local_158 = &DAT_005dcd97;
    pcVar13 = param_2;
    do {
      pcVar12 = pcVar13;
      if (*pcVar13 == '(') goto LAB_004a1d87;
      if (*pcVar13 == '\0') break;
      pcVar12 = pcVar13 + 1;
      if (*pcVar12 == '(') goto LAB_004a1d87;
      pcVar13 = pcVar13 + 2;
    } while (*pcVar12 != '\0');
    pcVar12 = (char *)0x0;
LAB_004a1d87:
    if (pcVar12 == (char *)0x0) {
      iVar4 = 0;
      if (0 < *param_1) {
        piVar15 = param_1 + 1;
        do {
          iVar5 = FUN_005c04e0(piVar15,param_2);
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
        uVar6 = FUN_004a1210("Event name %s is too long",param_2);
        return uVar6;
      }
      if (99 < *param_1) {
        local_154 = FUN_005c157c("events.txt",&DAT_005dcdb2);
        if (local_154 != 0) {
          iVar4 = 0;
          if (0 < *param_1) {
            piVar15 = param_1 + 1;
            do {
              FUN_005c03c0(local_154,&DAT_005dcdc0,piVar15);
              iVar4 = iVar4 + 1;
              piVar15 = piVar15 + 8;
            } while (iVar4 < *param_1);
          }
          FUN_005c0d10();
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0x286;
        FUN_005030e0();
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
      local_14 = 0;
      local_90 = piVar14;
      do {
        uVar9 = 0xffffffff;
        piVar15 = local_90;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          iVar4 = *piVar15;
          piVar15 = (int *)((int)piVar15 + (uint)bVar17 * -2 + 1);
        } while ((char)iVar4 != '\0');
        if (~uVar9 - 1 <= local_14) {
          if (local_15c == 0) {
            return 1;
          }
          *param_1 = *param_1 + 1;
          return 1;
        }
        uVar3 = FUN_005c12b0();
        *(byte *)piVar14 = uVar3;
        iVar4 = FUN_004aa5e0();
        if (iVar4 == 0) {
          uVar6 = FUN_004a1210("Event name %s is not valid",param_2);
          return uVar6;
        }
        local_14 = local_14 + 1;
        piVar14 = (int *)((int)piVar14 + 1);
      } while( true );
    }
    iVar4 = FUN_005c1210(param_2,"activateGadget",0xe);
    if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
      local_158 = param_2 + 0xe;
      while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
        local_158 = local_158 + 1;
      }
      local_150 = -1;
      FUN_005c2cac(local_158,"(%[^,], %[^,], %n",local_238d + 1,local_248d + 1,&local_150);
      if (local_150 < 3) {
        uVar6 = FUN_004a1210();
        return uVar6;
      }
      local_158 = local_158 + local_150;
      uVar9 = 0xffffffff;
      pcVar13 = local_238d + 1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar9 - 1;
      if (0 < iVar4) {
        pcVar13 = local_238d + ~uVar9;
        do {
          if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      (local_238d + 1)[iVar4] = '\0';
      while (((&DAT_00626114)[(byte)(local_238d[1] + 1)] & 2) != 0) {
        FUN_005c25d0(local_238d + 1);
      }
      local_14c = local_248d + 1;
      uVar9 = 0xffffffff;
      pcVar13 = local_248d + 1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar9 - 1;
      if (0 < iVar4) {
        pcVar13 = local_248d + ~uVar9;
        do {
          if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      (local_248d + 1)[iVar4] = '\0';
      while (((&DAT_00626114)[(byte)(*local_14c + 1)] & 2) != 0) {
        FUN_005c25d0(local_14c);
      }
      pcVar13 = (char *)FUN_004a1630(&local_158,local_2a8c,0x100,0);
      if (pcVar13 != (char *)0x0) goto LAB_004a2140;
      uVar9 = 0xffffffff;
      pcVar13 = local_2a8c;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      } while (cVar1 != '\0');
      iVar4 = ~uVar9 - 1;
      if (0 < iVar4) {
        pcVar13 = local_2a8c + (~uVar9 - 1);
        do {
          if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar13 + -1;
        } while (0 < iVar4);
      }
      local_2a8c[iVar4] = '\0';
      while (((&DAT_00626114)[(byte)(local_2a8c[0] + 1)] & 2) != 0) {
        FUN_005c25d0(local_2a8c);
      }
      uVar9 = FUN_004a1370(local_238d + 1,_DAT_01d06b10,0x1d06ad8);
      if (uVar9 == 0) {
        return 0;
      }
      if (uVar9 == 0x0FFFFFFF) {
        local_15c = uVar9 ^ 0x0FFFFFFF;
      }
      puVar10 = (uint *)0x0;
      iVar4 = FUN_005c04e0(local_248d + 1,"compass");
      if (iVar4 == 0) {
        puVar10 = (uint *)(uVar9 + 0x1faf0);
      }
      iVar4 = FUN_005c04e0(local_248d + 1,&DAT_005dce62);
      if (iVar4 == 0) {
        puVar10 = (uint *)(uVar9 + 0x1faf4);
      }
      if (puVar10 == (uint *)0x0) {
        uVar6 = FUN_004a1210("Invalid gadget type: %s",local_248d + 1);
        return uVar6;
      }
      if (_DAT_01c56ecc == 0) {
        if (local_15c != 0) {
          uVar6 = FUN_004a6c30(param_1,local_2a8c);
          *puVar10 = uVar6;
        }
      }
      else {
        iVar4 = FUN_004a6c90(param_1,local_2a8c);
        if (iVar4 != 0) {
          return 0;
        }
      }
    }
    else {
      iVar4 = FUN_005c1210(param_2,"activatePuzzle",0xe);
      if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
        local_158 = param_2 + 0xe;
        while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
          local_158 = local_158 + 1;
        }
        local_148 = -1;
        FUN_005c2cac(local_158,"(%[^)])%n",local_1f8d + 1,&local_148);
        if (local_148 < 3) {
          uVar6 = FUN_004a1210();
          return uVar6;
        }
        local_158 = local_158 + local_148;
        uVar9 = 0xffffffff;
        pcVar13 = local_1f8d + 1;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~uVar9 - 1;
        if (0 < iVar4) {
          pcVar13 = local_1f8d + ~uVar9;
          do {
            if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar13 + -1;
          } while (0 < iVar4);
        }
        (local_1f8d + 1)[iVar4] = '\0';
        while (((&DAT_00626114)[(byte)(local_1f8d[1] + 1)] & 2) != 0) {
          FUN_005c25d0(local_1f8d + 1);
        }
        iVar5 = 0;
        iVar4 = 0;
        if (0 < DAT_007c394c) {
          iVar11 = 0;
          do {
            uVar6 = (**(code **)(**(int **)((int)&DAT_007c3950 + iVar11) + 4))();
            iVar7 = FUN_005c04e0(local_1f8d + 1,uVar6);
            if (iVar7 == 0) {
              iVar4 = *(int *)((int)&DAT_007c3950 + iVar11);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar5 < DAT_007c394c);
        }
        if (iVar4 == 0) {
          uVar6 = FUN_004a1210("No such puzzle '%s'",local_1f8d + 1);
          return uVar6;
        }
        if (local_15c != 0) {
          if (DAT_007c3978 != 0) {
            FUN_00415be0(DAT_007c3978,0);
          }
          FUN_00415be0(iVar4,1);
        }
      }
      else {
        iVar4 = FUN_005c1210(param_2,"addFieldNotesTask",0x11);
        if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)) {
          local_158 = param_2 + 0x11;
          while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
            local_158 = local_158 + 1;
          }
          local_144 = -1;
          FUN_005c2cac(local_158,"(%[^)])%n",local_228d + 1,&local_144);
          if (local_144 < 3) {
            uVar6 = FUN_004a1210();
            return uVar6;
          }
          local_158 = local_158 + local_144;
          uVar9 = 0xffffffff;
          pcVar13 = local_228d + 1;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
          } while (cVar1 != '\0');
          iVar4 = ~uVar9 - 1;
          if (0 < iVar4) {
            pcVar13 = local_228d + ~uVar9;
            do {
              if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
              iVar4 = iVar4 + -1;
              pcVar13 = pcVar13 + -1;
            } while (0 < iVar4);
          }
          (local_228d + 1)[iVar4] = '\0';
          while (((&DAT_00626114)[(byte)(local_228d[1] + 1)] & 2) != 0) {
            FUN_005c25d0(local_228d + 1);
          }
          if (_DAT_01c56ecc != 0) {
            uVar6 = FUN_004bde20(0x01CC8004,local_228d + 1);
            switch(uVar6) {
            default:
              uVar6 = FUN_004a1210("Field notes entry '%s' is not a task",local_228d + 1);
              return uVar6;
            case 2:
            case 3:
            case 4:
              goto switchD_004a2582_caseD_2;
            case 0xffffffff:
              uVar6 = FUN_004a1210("Field notes entry '%s' not found",local_228d + 1);
              return uVar6;
            }
          }
          FUN_004bdd00(0x01CC8004,local_228d + 1);
        }
        else {
          iVar4 = FUN_005c1210(param_2,"advanceLightFilter",0x12);
          if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0x12] + 1)] & 0xe0) == 0)) {
            local_158 = param_2 + 0x12;
            while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
              local_158 = local_158 + 1;
            }
            pcVar13 = (char *)FUN_004a1630(&local_158,local_fb4,200,1);
            if (pcVar13 != (char *)0x0) goto LAB_004a2140;
            FUN_00555a20(0x01E82168,local_fb4,&local_64,&local_140);
            if (local_64 == 0) {
              uVar6 = FUN_004a1210("SpotLight %s doesn't exist.",local_fb4);
              return uVar6;
            }
            if (local_15c != 0) {
              if (local_140 == 0) {
                _DAT_01d1d400 = "..\\core\\event.cpp";
                _DAT_01d1d404 = 0x337;
                FUN_005030e0("Can't find CDemonLight for light %s in advanceLightFilter meta-command",local_fb4);
              }
              FUN_0055d360(local_64,local_140);
            }
          }
          else {
            iVar4 = FUN_005c1210(param_2,"beginCarryItem",0xe);
            if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0xe] + 1)] & 0xe0) == 0)) {
              local_158 = param_2 + 0xe;
              while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                local_158 = local_158 + 1;
              }
              local_138 = -1;
              FUN_005c2cac(local_158,"( %[^,], %[^,], %d, %f , %f , %f , %f , %f , %f )%n",local_15f5 + 1,local_1cfd + 1,
                           &local_13c,local_194,local_190,local_18c,local_170,local_168,local_16c,
                           &local_138);
              if (local_138 < 0) {
                uVar6 = FUN_004a1210();
                return uVar6;
              }
              local_158 = local_158 + local_138;
              uVar9 = 0xffffffff;
              pcVar13 = local_1cfd + 1;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
              } while (cVar1 != '\0');
              iVar4 = ~uVar9 - 1;
              if (0 < iVar4) {
                pcVar13 = local_1cfd + ~uVar9;
                do {
                  if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                  iVar4 = iVar4 + -1;
                  pcVar13 = pcVar13 + -1;
                } while (0 < iVar4);
              }
              (local_1cfd + 1)[iVar4] = '\0';
              while (((&DAT_00626114)[(byte)(local_1cfd[1] + 1)] & 2) != 0) {
                FUN_005c25d0(local_1cfd + 1);
              }
              uVar9 = 0xffffffff;
              pcVar13 = local_15f5 + 1;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
              } while (cVar1 != '\0');
              iVar4 = ~uVar9 - 1;
              if (0 < iVar4) {
                pcVar13 = local_15f5 + ~uVar9;
                do {
                  if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                  iVar4 = iVar4 + -1;
                  pcVar13 = pcVar13 + -1;
                } while (0 < iVar4);
              }
              (local_15f5 + 1)[iVar4] = '\0';
              while (((&DAT_00626114)[(byte)(local_15f5[1] + 1)] & 2) != 0) {
                FUN_005c25d0(local_15f5 + 1);
              }
              if ((local_13c < 0) || (1 < local_13c)) {
                uVar6 = FUN_004a1210("Invalid hand index: %d",local_13c);
                return uVar6;
              }
              uVar9 = FUN_004a1370(local_15f5 + 1,DAT_007c637c,&DAT_007c6344);
              if (uVar9 == 0) {
                return 0;
              }
              if (uVar9 == 0x0FFFFFFF) {
                local_15c = 0;
              }
              else if (*(int *)(uVar9 + 0x25a8 + local_13c * 0x78) < 0) {
                uVar6 = FUN_004a1210("%s doesn't have hand %d",uVar9,local_13c);
                return uVar6;
              }
              uVar8 = FUN_004a1370(local_1cfd + 1,DAT_007c3030,&DAT_007c2ff8);
              if (uVar8 == 0) {
                return 0;
              }
              if ((uVar8 != 0x0FFFFFFF) && (local_15c != 0)) {
                FUN_005b5760(local_26c,local_194,local_170);
                FUN_004325b0(uVar9,local_13c,uVar8,0,local_26c);
              }
            }
            else {
              iVar4 = FUN_005c1210(param_2,"completeFieldNotesTask",0x16);
              if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0x16] + 1)] & 0xe0) == 0)) {
                local_158 = param_2 + 0x16;
                while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                  local_158 = local_158 + 1;
                }
                local_134 = -1;
                FUN_005c2cac(local_158,"(%[^)])%n",local_208d + 1,&local_134);
                if (local_134 < 3) {
                  uVar6 = FUN_004a1210();
                  return uVar6;
                }
                local_158 = local_158 + local_134;
                uVar9 = 0xffffffff;
                pcVar13 = local_208d + 1;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                } while (cVar1 != '\0');
                iVar4 = ~uVar9 - 1;
                if (0 < iVar4) {
                  pcVar13 = local_208d + ~uVar9;
                  do {
                    if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                    iVar4 = iVar4 + -1;
                    pcVar13 = pcVar13 + -1;
                  } while (0 < iVar4);
                }
                (local_208d + 1)[iVar4] = '\0';
                while (((&DAT_00626114)[(byte)(local_208d[1] + 1)] & 2) != 0) {
                  FUN_005c25d0(local_208d + 1);
                }
                if (_DAT_01c56ecc != 0) {
                  uVar6 = FUN_004bde20(0x01CC8004,local_208d + 1);
                  switch(uVar6) {
                  case 0:
                  case 1:
                  case 5:
                  case 6:
                    uVar6 = FUN_004a1210("Field notes entry '%s' is not a task",local_208d + 1);
                    return uVar6;
                  case 2:
                  case 3:
                  case 4:
                    goto switchD_004a2582_caseD_2;
                  default:
                    uVar6 = FUN_004a1210("Field notes entry '%s' not found",local_208d + 1);
                    return uVar6;
                  }
                }
                FUN_004bdfa0(0x01CC8004,local_208d + 1);
              }
              else {
                iVar4 = FUN_005c1210(param_2,"createExplosion",0xf);
                if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0xf] + 1)] & 0xe0) == 0)) {
                  local_158 = param_2 + 0xf;
                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                    local_158 = local_158 + 1;
                  }
                  local_130 = -1;
                  FUN_005c2cac(local_158,"( %f , %n",&local_44,&local_130);
                  if (local_130 < 0) {
                    uVar6 = FUN_004a1210();
                    return uVar6;
                  }
                  local_158 = local_158 + local_130;
                  local_130 = -1;
                  FUN_005c2cac(local_158,"%f , %f , %f %n",&local_17c,&local_178,&local_174,
                               &local_130);
                  if ((local_130 < 0) &&
                     (FUN_005c2cac(local_158," %[^,)] %n",local_eed + 1,&local_130), -1 < local_130)
                     ) {
                    uVar9 = 0xffffffff;
                    pcVar13 = local_eed + 1;
                    do {
                      if (uVar9 == 0) break;
                      uVar9 = uVar9 - 1;
                      cVar1 = *pcVar13;
                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                    } while (cVar1 != '\0');
                    iVar4 = ~uVar9 - 1;
                    if (0 < iVar4) {
                      pcVar13 = local_eed + ~uVar9;
                      do {
                        if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                        iVar4 = iVar4 + -1;
                        pcVar13 = pcVar13 + -1;
                      } while (0 < iVar4);
                    }
                    (local_eed + 1)[iVar4] = '\0';
                    while (((&DAT_00626114)[(byte)(local_eed[1] + 1)] & 2) != 0) {
                      FUN_005c25d0(local_eed + 1);
                    }
                    uVar9 = FUN_004a1370(local_eed + 1,DAT_007c3030,&DAT_007c2ff8);
                    if (uVar9 == 0) {
                      return 0;
                    }
                    if (uVar9 == 0x0FFFFFFF) {
                      local_15c = 0;
                    }
                    else if (&local_17c != (uint *)(uVar9 + 0x20)) {
                      local_17c = *(uint *)(uVar9 + 0x20);
                      local_178 = *(uint *)(uVar9 + 0x24);
                      local_174 = *(uint *)(uVar9 + 0x28);
                    }
                  }
                  if (local_130 < 0) {
                    uVar6 = FUN_004a1210();
                    return uVar6;
                  }
                  local_158 = local_158 + local_130;
                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                    local_158 = local_158 + 1;
                  }
                  local_12c = 0x40800000;
                  if (*local_158 == ',') {
                    local_130 = -1;
                    FUN_005c2cac(local_158,", %f %n",&local_12c,&local_130);
                    if (local_130 < 0) {
                      uVar6 = FUN_004a1210();
                      return uVar6;
                    }
                    local_158 = local_158 + local_130;
                    while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                      local_158 = local_158 + 1;
                    }
                  }
                  if (*local_158 != ')') {
                    uVar6 = FUN_004a1210();
                    return uVar6;
                  }
                  local_158 = local_158 + 1;
                  if (local_15c != 0) {
                    FUN_004b6c60(0x01C57074,&local_17c,local_44,0x44bb8000,local_12c);
                  }
                }
                else {
                  iVar4 = FUN_005c1210(param_2,"deleteActor",0xb);
                  if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)) {
                    local_158 = param_2 + 0xb;
                    while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                      local_158 = local_158 + 1;
                    }
                    pcVar13 = (char *)FUN_004a1630(&local_158,local_1dc4,200,1);
                    if (pcVar13 != (char *)0x0) goto LAB_004a2140;
                    uVar9 = FUN_004a1370(local_1dc4,DAT_007c3030,&DAT_007c2ff8);
                    uVar6 = DAT_007c5094;
                    if (uVar9 == 0) {
                      if (_DAT_01c56ecc != 0) {
                        return 0;
                      }
                      local_15c = 0;
                    }
                    if ((uVar9 != 0x0FFFFFFF) && (local_15c != 0)) {
                      *(uint *)(uVar9 + 0x70) = 2;
                      iVar4 = FUN_0040c600(uVar9,uVar6);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x2d4) = 0;
                        FUN_00573a80();
                      }
                      iVar4 = FUN_0040c600(uVar9,DAT_007c654c);
                      if (iVar4 != 0) {
                        *(byte *)(iVar4 + 0x1b4) = 0;
                        *(byte *)(iVar4 + 0x21c) = 0;
                        FUN_00573a80();
                      }
                    }
                  }
                  else {
                    iVar4 = FUN_005c1210(param_2,"displayBitmap",0xd);
                    if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] & 0xe0) == 0)) {
                      local_158 = param_2 + 0xd;
                      while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                        local_158 = local_158 + 1;
                      }
                      local_120 = -1;
                      FUN_005c2cac(local_158,"( %[^ ,] , %d , %d%n",local_268c,&local_128,&local_124,
                                   &local_120);
                      if (local_120 < 0) {
                        uVar6 = FUN_004a1210();
                        return uVar6;
                      }
                      local_158 = local_158 + local_120;
                      while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                        local_158 = local_158 + 1;
                      }
                      local_11c = 0;
                      pcVar13 = local_158;
                      if (*local_158 == ',') {
                        local_120 = -1;
                        FUN_005c2cac(local_158,", %f %n",&local_11c,&local_120);
                        if (local_120 < 1) {
                          FUN_005bfb40(&DAT_01c56ed0,"Error parsing displayBitmap time argument");
                          return 0;
                        }
                        pcVar13 = local_158 + local_120;
                        while (((&DAT_00626114)[(byte)(*pcVar13 + 1)] & 2) != 0) {
                          pcVar13 = pcVar13 + 1;
                        }
                      }
                      do {
                        local_158 = pcVar13;
                        pcVar13 = local_158 + 1;
                      } while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0);
                      if (*local_158 != ')') {
                        FUN_005bfb40(&DAT_01c56ed0,"Can't find matching ) in displayBitmap command");
                        return 0;
                      }
                      local_158 = local_158 + 1;
                      iVar4 = FUN_00478fb0(&DAT_005dd2ad,local_268c);
                      if (iVar4 < 0) {
                        uVar6 = FUN_004a1210();
                        return uVar6;
                      }
                      if (iVar4 != local_128 * local_124) {
                        uVar6 = FUN_004a1210();
                        return uVar6;
                      }
                      if (local_15c != 0) {
                        FUN_004d7730(0x01CCF390,local_268c,local_128,local_124,local_11c);
                      }
                    }
                    else {
                      iVar4 = FUN_005c1210(param_2,"displayFieldNotes",0x11);
                      if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[0x11] + 1)] & 0xe0) == 0)
                         ) {
                        local_158 = param_2 + 0x11;
                        while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                          local_158 = local_158 + 1;
                        }
                        local_118 = -1;
                        FUN_005c2cac(local_158,"(%[^)])%n",local_bcd + 1,&local_118);
                        if (local_118 < 5) {
                          FUN_005bfb40(&DAT_01c56ed0,"Error parsing displayFieldNotes command parms");
                          return 0;
                        }
                        local_158 = local_158 + local_118;
                        uVar9 = 0xffffffff;
                        pcVar13 = local_bcd + 1;
                        do {
                          if (uVar9 == 0) break;
                          uVar9 = uVar9 - 1;
                          cVar1 = *pcVar13;
                          pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                        } while (cVar1 != '\0');
                        iVar4 = ~uVar9 - 1;
                        if (0 < iVar4) {
                          pcVar13 = local_bcd + ~uVar9;
                          do {
                            if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                            iVar4 = iVar4 + -1;
                            pcVar13 = pcVar13 + -1;
                          } while (0 < iVar4);
                        }
                        (local_bcd + 1)[iVar4] = '\0';
                        while (((&DAT_00626114)[(byte)(local_bcd[1] + 1)] & 2) != 0) {
                          FUN_005c25d0(local_bcd + 1);
                        }
                        if (local_15c == 0) {
                          iVar4 = FUN_004a6c90(param_1,local_bcd + 1);
                          if (iVar4 != 0) {
                            return 0;
                          }
                        }
                        else {
                          uVar6 = FUN_004a6c30(0x01C51D80,local_bcd + 1);
                          *(uint *)(0x01CC8004 + 0x40) = uVar6;
                        }
                      }
                      else {
                        iVar4 = FUN_005c1210(param_2,"dropItem",8);
                        if ((iVar4 == 0) && (((&DAT_00626114)[(byte)(param_2[8] + 1)] & 0xe0) == 0))
                        {
                          local_158 = param_2 + 8;
                          while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                            local_158 = local_158 + 1;
                          }
                          local_114 = -1;
                          FUN_005c2cac(local_158,"( %[^,],%n",local_1465 + 1,&local_114);
                          if (local_114 < 0) {
                            uVar6 = FUN_004a1210();
                            return uVar6;
                          }
                          local_158 = local_158 + local_114;
                          uVar9 = 0xffffffff;
                          pcVar13 = local_1465 + 1;
                          do {
                            if (uVar9 == 0) break;
                            uVar9 = uVar9 - 1;
                            cVar1 = *pcVar13;
                            pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                          } while (cVar1 != '\0');
                          iVar4 = ~uVar9 - 1;
                          if (0 < iVar4) {
                            pcVar13 = local_1465 + ~uVar9;
                            do {
                              if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                              iVar4 = iVar4 + -1;
                              pcVar13 = pcVar13 + -1;
                            } while (0 < iVar4);
                          }
                          (local_1465 + 1)[iVar4] = '\0';
                          while (((&DAT_00626114)[(byte)(local_1465[1] + 1)] & 2) != 0) {
                            FUN_005c25d0(local_1465 + 1);
                          }
                          local_110 = FUN_004a1370(local_1465 + 1,DAT_007c637c,&DAT_007c6344);
                          if (local_110 == 0) {
                            return 0;
                          }
                          if (local_110 == 0x0FFFFFFF) {
                            local_15c = 0;
                          }
                          local_114 = -1;
                          local_10c = -1;
                          FUN_005c2cac(local_158,"%d )%n",&local_10c,&local_114);
                          if (local_114 < 1) {
                            FUN_005c2cac(local_158,"%[^)])%n",local_1785 + 1,&local_114);
                            if (local_114 < 0) {
                              uVar6 = FUN_004a1210();
                              return uVar6;
                            }
                            uVar9 = 0xffffffff;
                            pcVar13 = local_1785 + 1;
                            do {
                              if (uVar9 == 0) break;
                              uVar9 = uVar9 - 1;
                              cVar1 = *pcVar13;
                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                            } while (cVar1 != '\0');
                            iVar4 = ~uVar9 - 1;
                            if (0 < iVar4) {
                              pcVar13 = local_1785 + ~uVar9;
                              do {
                                if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                iVar4 = iVar4 + -1;
                                pcVar13 = pcVar13 + -1;
                              } while (0 < iVar4);
                            }
                            (local_1785 + 1)[iVar4] = '\0';
                            while (((&DAT_00626114)[(byte)(local_1785[1] + 1)] & 2) != 0) {
                              FUN_005c25d0(local_1785 + 1);
                            }
                            local_10c = -1;
                            iVar4 = local_10c;
                            if (local_110 != 0x0FFFFFFF) {
                              iVar5 = 0;
                              uVar9 = local_110;
                              do {
                                if ((*(int *)(uVar9 + 0x25b0) != 0) &&
                                   (iVar11 = FUN_005c04e0(*(int *)(uVar9 + 0x25b0),local_1785 + 1),
                                   iVar4 = iVar5, iVar11 == 0)) break;
                                iVar5 = iVar5 + 1;
                                uVar9 = uVar9 + 0x78;
                                iVar4 = local_10c;
                              } while (iVar5 < 2);
                            }
                          }
                          else if ((local_10c < 0) || (iVar4 = local_10c, 1 < local_10c)) {
                            uVar6 = FUN_004a1210("Invalid hand index: %d",local_10c);
                            return uVar6;
                          }
                          local_10c = iVar4;
                          local_158 = local_158 + local_114;
                          if ((local_110 != 0x0FFFFFFF) &&
                             (*(int *)(local_10c * 0x78 + local_110 + 0x25a8) < 0)) {
                            uVar6 = FUN_004a1210("%s doesn't have hand %d",local_110,
                                                 local_10c);
                            return uVar6;
                          }
                          if ((local_15c != 0) && (-1 < local_10c)) {
                            (**(code **)(*(int *)(local_110 + 0x154) + 0x128))
                                      (local_110,local_10c,0);
                          }
                        }
                        else {
                          iVar4 = FUN_005c1210(param_2,"enableFieldNotesEntry",0x15);
                          if ((iVar4 == 0) &&
                             (((&DAT_00626114)[(byte)(param_2[0x15] + 1)] & 0xe0) == 0)) {
                            local_158 = param_2 + 0x15;
                            while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                              local_158 = local_158 + 1;
                            }
                            local_108 = -1;
                            FUN_005c2cac(local_158,"(%[^)])%n",local_258d + 1,&local_108);
                            if (local_108 < 3) {
                              uVar6 = FUN_004a1210();
                              return uVar6;
                            }
                            local_158 = local_158 + local_108;
                            uVar9 = 0xffffffff;
                            pcVar13 = local_258d + 1;
                            do {
                              if (uVar9 == 0) break;
                              uVar9 = uVar9 - 1;
                              cVar1 = *pcVar13;
                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                            } while (cVar1 != '\0');
                            iVar4 = ~uVar9 - 1;
                            if (0 < iVar4) {
                              pcVar13 = local_258d + ~uVar9;
                              do {
                                if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                iVar4 = iVar4 + -1;
                                pcVar13 = pcVar13 + -1;
                              } while (0 < iVar4);
                            }
                            (local_258d + 1)[iVar4] = '\0';
                            while (((&DAT_00626114)[(byte)(local_258d[1] + 1)] & 2) != 0) {
                              FUN_005c25d0(local_258d + 1);
                            }
                            if (_DAT_01c56ecc != 0) {
                              uVar6 = FUN_004bde20(0x01CC8004,local_258d + 1);
                              switch(uVar6) {
                              case 0:
                              case 1:
                              case 5:
                              case 6:
                                goto switchD_004a2582_caseD_2;
                              case 2:
                              case 3:
                              case 4:
                                uVar6 = FUN_004a1210("Field notes entry '%s' is a task (use addFieldNotesTask for this)",
                                                     local_258d + 1);
                                return uVar6;
                              default:
                                uVar6 = FUN_004a1210("Field notes entry '%s' not found",
                                                     local_258d + 1);
                                return uVar6;
                              }
                            }
                            FUN_004bdd00(0x01CC8004,local_258d + 1);
                          }
                          else {
                            iVar4 = FUN_005c1210(param_2,"enableFieldNotesAnnotation",0x1a);
                            if ((iVar4 == 0) &&
                               (((&DAT_00626114)[(byte)(param_2[0x1a] + 1)] & 0xe0) == 0)) {
                              local_158 = param_2 + 0x1a;
                              while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                local_158 = local_158 + 1;
                              }
                              local_104 = -1;
                              FUN_005c2cac(local_158,"(%[^,], %[^)])%n",local_288d + 1,local_298d + 1,
                                           &local_104);
                              if (local_104 < 4) {
                                uVar6 = FUN_004a1210();
                                return uVar6;
                              }
                              local_158 = local_158 + local_104;
                              uVar9 = 0xffffffff;
                              pcVar13 = local_298d + 1;
                              do {
                                if (uVar9 == 0) break;
                                uVar9 = uVar9 - 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                              } while (cVar1 != '\0');
                              iVar4 = ~uVar9 - 1;
                              if (0 < iVar4) {
                                pcVar13 = local_298d + ~uVar9;
                                do {
                                  if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                  iVar4 = iVar4 + -1;
                                  pcVar13 = pcVar13 + -1;
                                } while (0 < iVar4);
                              }
                              (local_298d + 1)[iVar4] = '\0';
                              while (((&DAT_00626114)[(byte)(local_298d[1] + 1)] & 2) != 0) {
                                FUN_005c25d0(local_298d + 1);
                              }
                              uVar9 = 0xffffffff;
                              pcVar13 = local_288d + 1;
                              do {
                                if (uVar9 == 0) break;
                                uVar9 = uVar9 - 1;
                                cVar1 = *pcVar13;
                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                              } while (cVar1 != '\0');
                              iVar4 = ~uVar9 - 1;
                              if (0 < iVar4) {
                                pcVar13 = local_288d + ~uVar9;
                                do {
                                  if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
                                  iVar4 = iVar4 + -1;
                                  pcVar13 = pcVar13 + -1;
                                } while (0 < iVar4);
                              }
                              (local_288d + 1)[iVar4] = '\0';
                              while (((&DAT_00626114)[(byte)(local_288d[1] + 1)] & 2) != 0) {
                                FUN_005c25d0(local_288d + 1);
                              }
                              if (_DAT_01c56ecc != 0) {
                                uVar6 = FUN_004bde20(0x01CC8004,local_298d + 1);
                                switch(uVar6) {
                                case 0:
                                case 1:
                                case 5:
                                case 6:
                                  goto switchD_004a2582_caseD_2;
                                case 2:
                                case 3:
                                case 4:
                                  uVar6 = FUN_004a1210("Field notes entry '%s' is a task (use addFieldNotesTask for this)",
                                                       local_298d + 1);
                                  return uVar6;
                                default:
                                  uVar6 = FUN_004a1210("Field notes entry '%s' not found",
                                                       local_298d + 1);
                                  return uVar6;
                                }
                              }
                              iVar4 = FUN_004bdbf0(0x01CC8004,local_288d + 1,local_298d + 1,
                                                   local_278c);
                              if (iVar4 == 0) {
                                uVar6 = FUN_004a1210();
                                return uVar6;
                              }
                            }
                            else {
                              iVar4 = FUN_005c1210(param_2,"fadeAmbientSound",0x10);
                              if ((iVar4 == 0) &&
                                 (((&DAT_00626114)[(byte)(param_2[0x10] + 1)] & 0xe0) == 0)) {
                                local_158 = param_2 + 0x10;
                                while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                  local_158 = local_158 + 1;
                                }
                                local_f8 = -1;
                                FUN_005c2cac(local_158,"(%f, %f )%n",&local_100,&local_fc,
                                             &local_f8);
                                if (local_f8 < 0) {
                                  FUN_005bfb40(&DAT_01c56ed0,"Error parsing fadeAmbientSound parms");
                                  return 0;
                                }
                                local_158 = local_158 + local_f8;
                                if (local_15c != 0) {
                                  FUN_0057dc00(0x02C82A60,local_100,local_fc);
                                }
                              }
                              else {
                                iVar4 = FUN_005c1210(param_2,"fadeSfx",7);
                                if ((iVar4 == 0) &&
                                   (((&DAT_00626114)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                  local_158 = param_2 + 7;
                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                    local_158 = local_158 + 1;
                                  }
                                  local_ec = -1;
                                  FUN_005c2cac(local_158,"(%[^,], %f, %f )%n",local_8ad + 1,&local_f4,
                                               &local_f0,&local_ec);
                                  if (local_ec < 0) {
                                    FUN_005bfb40(&DAT_01c56ed0,"Error parsing fadeSfx parms");
                                    return 0;
                                  }
                                  local_158 = local_158 + local_ec;
                                  uVar9 = 0xffffffff;
                                  pcVar13 = local_8ad + 1;
                                  do {
                                    if (uVar9 == 0) break;
                                    uVar9 = uVar9 - 1;
                                    cVar1 = *pcVar13;
                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                  } while (cVar1 != '\0');
                                  iVar4 = ~uVar9 - 1;
                                  if (0 < iVar4) {
                                    pcVar13 = local_8ad + ~uVar9;
                                    do {
                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                      break;
                                      iVar4 = iVar4 + -1;
                                      pcVar13 = pcVar13 + -1;
                                    } while (0 < iVar4);
                                  }
                                  (local_8ad + 1)[iVar4] = '\0';
                                  while (((&DAT_00626114)[(byte)(local_8ad[1] + 1)] & 2) != 0) {
                                    FUN_005c25d0(local_8ad + 1);
                                  }
                                  if (local_15c != 0) {
                                    uVar6 = FUN_004aa290(param_1,local_8ad + 1);
                                    if (local_f0 <= 0.0) {
                                      FUN_00573950(uVar6,local_f4);
                                    }
                                    else {
                                      FUN_00573ab0(uVar6,local_f4,local_f0,0);
                                    }
                                  }
                                }
                                else {
                                  iVar4 = FUN_005c1210(param_2,"flagOn",6);
                                  if ((iVar4 == 0) &&
                                     (((&DAT_00626114)[(byte)(param_2[6] + 1)] & 0xe0) == 0)) {
                                    local_158 = param_2 + 6;
                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                      local_158 = local_158 + 1;
                                    }
                                    pcVar13 = (char *)FUN_004a1630(&local_158,local_1fc,0x20,1);
                                    if (pcVar13 != (char *)0x0) {
LAB_004a2140:
                                      pcVar12 = &DAT_01c56ed0;
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
                                    if (local_15c != 0) {
                                      FUN_004a9870(param_1,local_1fc,1);
                                    }
                                  }
                                  else {
                                    iVar4 = FUN_005c1210(param_2,"flagOff",7);
                                    if ((iVar4 == 0) &&
                                       (((&DAT_00626114)[(byte)(param_2[7] + 1)] & 0xe0) == 0)) {
                                      local_158 = param_2 + 7;
                                      while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                        local_158 = local_158 + 1;
                                      }
                                      pcVar13 = (char *)FUN_004a1630(&local_158,local_23c,0x20,1);
                                      if (pcVar13 != (char *)0x0) goto LAB_004a2140;
                                      if (local_15c != 0) {
                                        FUN_004a9870(param_1,local_23c,0);
                                      }
                                    }
                                    else {
                                      iVar4 = FUN_005c1210(param_2,"gameFlagOn",10);
                                      if ((iVar4 == 0) &&
                                         (((&DAT_00626114)[(byte)(param_2[10] + 1)] & 0xe0) == 0)) {
                                        local_158 = param_2 + 10;
                                        while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0) {
                                          local_158 = local_158 + 1;
                                        }
                                        pcVar13 = (char *)FUN_004a1630(&local_158,local_1dc,0x20,1);
                                        if (pcVar13 != (char *)0x0) goto LAB_004a2140;
                                        if (local_15c != 0) {
                                          FUN_004a9a60(param_1,local_1dc,1);
                                        }
                                      }
                                      else {
                                        iVar4 = FUN_005c1210(param_2,"gameFlagOff",0xb);
                                        if ((iVar4 == 0) &&
                                           (((&DAT_00626114)[(byte)(param_2[0xb] + 1)] & 0xe0) == 0)
                                           ) {
                                          local_158 = param_2 + 0xb;
                                          while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) != 0)
                                          {
                                            local_158 = local_158 + 1;
                                          }
                                          pcVar13 = (char *)FUN_004a1630(&local_158,local_21c,0x20,1
                                                                        );
                                          if (pcVar13 != (char *)0x0) goto LAB_004a2140;
                                          if (local_15c != 0) {
                                            FUN_004a9a60(param_1,local_21c,0);
                                          }
                                        }
                                        else {
                                          iVar4 = FUN_005c1210(param_2,"hurtCharacter",0xd)
                                          ;
                                          if ((iVar4 == 0) &&
                                             (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] & 0xe0) ==
                                              0)) {
                                            local_158 = param_2 + 0xd;
                                            while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) !=
                                                   0) {
                                              local_158 = local_158 + 1;
                                            }
                                            local_e8 = -1;
                                            FUN_005c2cac(local_158," ( %[^,], %[^,],%f)%n",local_1915 + 1,
                                                         local_3fd + 1,&local_e4,&local_e8);
                                            if (local_e8 < 2) {
                                              uVar6 = FUN_004a1210();
                                              return uVar6;
                                            }
                                            uVar9 = 0xffffffff;
                                            pcVar13 = local_1915 + 1;
                                            do {
                                              if (uVar9 == 0) break;
                                              uVar9 = uVar9 - 1;
                                              cVar1 = *pcVar13;
                                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                            } while (cVar1 != '\0');
                                            iVar4 = ~uVar9 - 1;
                                            if (0 < iVar4) {
                                              pcVar13 = local_1915 + ~uVar9;
                                              do {
                                                if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2)
                                                    == 0) break;
                                                iVar4 = iVar4 + -1;
                                                pcVar13 = pcVar13 + -1;
                                              } while (0 < iVar4);
                                            }
                                            (local_1915 + 1)[iVar4] = '\0';
                                            while (((&DAT_00626114)[(byte)(local_1915[1] + 1)] & 2)
                                                   != 0) {
                                              FUN_005c25d0(local_1915 + 1);
                                            }
                                            uVar9 = 0xffffffff;
                                            pcVar13 = local_3fd + 1;
                                            do {
                                              if (uVar9 == 0) break;
                                              uVar9 = uVar9 - 1;
                                              cVar1 = *pcVar13;
                                              pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                            } while (cVar1 != '\0');
                                            iVar4 = ~uVar9 - 1;
                                            if (0 < iVar4) {
                                              pcVar13 = local_3fd + ~uVar9;
                                              do {
                                                if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2)
                                                    == 0) break;
                                                iVar4 = iVar4 + -1;
                                                pcVar13 = pcVar13 + -1;
                                              } while (0 < iVar4);
                                            }
                                            (local_3fd + 1)[iVar4] = '\0';
                                            while (((&DAT_00626114)[(byte)(local_3fd[1] + 1)] & 2)
                                                   != 0) {
                                              FUN_005c25d0(local_3fd + 1);
                                            }
                                            local_158 = local_158 + local_e8;
                                            while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2) !=
                                                   0) {
                                              local_158 = local_158 + 1;
                                            }
                                            uVar9 = FUN_004a1370(local_1915 + 1,DAT_007c637c,
                                                                 &DAT_007c6344);
                                            if (uVar9 == 0) {
                                              return 0;
                                            }
                                            if (uVar9 == 0x0FFFFFFF) {
                                              local_15c = 0;
                                            }
                                            iVar4 = FUN_004a18e0(local_3fd + 1,&local_e0);
                                            if (iVar4 == 0) {
                                              uVar6 = FUN_004a1210(
                                                  "Unknown damage type \"%s\" in hurtCharacter command.",local_3fd + 1)
                                              ;
                                              return uVar6;
                                            }
                                            if (local_15c != 0) {
                                              (**(code **)(*(int *)(uVar9 + 0x154) + 0xd8))
                                                        (uVar9,local_e0,local_e4);
                                            }
                                          }
                                          else {
                                            iVar4 = FUN_005c1210(param_2,"incCounter",10);
                                            if ((iVar4 == 0) &&
                                               (((&DAT_00626114)[(byte)(param_2[10] + 1)] & 0xe0) ==
                                                0)) {
                                              local_158 = param_2 + 10;
                                              while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2)
                                                     != 0) {
                                                local_158 = local_158 + 1;
                                              }
                                              local_dc = -1;
                                              FUN_005c2cac(local_158,"( %[^ )] )%n",local_d5d + 1,
                                                           &local_dc);
                                              if (local_dc < 5) {
                                                FUN_005bfb40(&DAT_01c56ed0,
                                                             "Error parsing incCounter arguments");
                                                return 0;
                                              }
                                              local_158 = local_158 + local_dc;
                                              uVar9 = 0xffffffff;
                                              pcVar13 = local_d5d + 1;
                                              do {
                                                if (uVar9 == 0) break;
                                                uVar9 = uVar9 - 1;
                                                cVar1 = *pcVar13;
                                                pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                              } while (cVar1 != '\0');
                                              iVar4 = ~uVar9 - 1;
                                              if (0 < iVar4) {
                                                pcVar13 = local_d5d + ~uVar9;
                                                do {
                                                  if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] & 2)
                                                      == 0) break;
                                                  iVar4 = iVar4 + -1;
                                                  pcVar13 = pcVar13 + -1;
                                                } while (0 < iVar4);
                                              }
                                              (local_d5d + 1)[iVar4] = '\0';
                                              while (((&DAT_00626114)[(byte)(local_d5d[1] + 1)] & 2)
                                                     != 0) {
                                                FUN_005c25d0(local_d5d + 1);
                                              }
                                              if (local_15c != 0) {
                                                iVar4 = FUN_004a9e80(param_1,local_d5d + 1);
                                                FUN_004a9d70(param_1,local_d5d + 1,iVar4 + 1);
                                              }
                                            }
                                            else {
                                              iVar4 = FUN_005c1210(param_2,"decCounter",10)
                                              ;
                                              if ((iVar4 == 0) &&
                                                 (((&DAT_00626114)[(byte)(param_2[10] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_158 = param_2 + 10;
                                                while (((&DAT_00626114)[(byte)(*local_158 + 1)] & 2)
                                                       != 0) {
                                                  local_158 = local_158 + 1;
                                                }
                                                local_d8 = -1;
                                                FUN_005c2cac(local_158,"( %[^ )] )%n",local_1c35 + 1,
                                                             &local_d8);
                                                if (local_d8 < 5) {
                                                  FUN_005bfb40(&DAT_01c56ed0,
                                                               "Error parsing decCounter arguments");
                                                  return 0;
                                                }
                                                local_158 = local_158 + local_d8;
                                                uVar9 = 0xffffffff;
                                                pcVar13 = local_1c35 + 1;
                                                do {
                                                  if (uVar9 == 0) break;
                                                  uVar9 = uVar9 - 1;
                                                  cVar1 = *pcVar13;
                                                  pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                } while (cVar1 != '\0');
                                                iVar4 = ~uVar9 - 1;
                                                if (0 < iVar4) {
                                                  pcVar13 = local_1c35 + ~uVar9;
                                                  do {
                                                    if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)] &
                                                        2) == 0) break;
                                                    iVar4 = iVar4 + -1;
                                                    pcVar13 = pcVar13 + -1;
                                                  } while (0 < iVar4);
                                                }
                                                (local_1c35 + 1)[iVar4] = '\0';
                                                while (((&DAT_00626114)[(byte)(local_1c35[1] + 1)] &
                                                       2) != 0) {
                                                  FUN_005c25d0(local_1c35 + 1);
                                                }
                                                if (local_15c != 0) {
                                                  iVar4 = FUN_004a9e80(param_1,local_1c35 + 1);
                                                  FUN_004a9d70(param_1,local_1c35 + 1,iVar4 + -1);
                                                }
                                              }
                                              else {
                                                iVar4 = FUN_005c1210(param_2,
                                                  "killCharacter",0xd);
                                                if ((iVar4 == 0) &&
                                                   (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] &
                                                    0xe0) == 0)) {
                                                  local_158 = param_2 + 0xd;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  local_d0 = local_1a0;
                                                  local_cc = 0.0;
                                                  local_d4 = -1;
                                                  FUN_005c2cac(local_158," ( %[^,], %[^,], %f , %f , %f , %f)%n",
                                                               local_4c5 + 1,local_399 + 1,local_1a0
                                                               ,local_19c,local_198,&local_cc,
                                                               &local_d4);
                                                  local_cc = local_cc * _DAT_005de178;
                                                  if (local_d4 < 0) {
                                                    local_cc = -1.0;
                                                    FUN_005c2cac(local_158," ( %[^,], %[^,], %f , %f , %f )%n",
                                                                 local_4c5 + 1,local_399 + 1,
                                                                 local_1a0,local_19c,local_198,
                                                                 &local_d4);
                                                  }
                                                  if (local_d4 < 0) {
                                                    local_d0 = (byte *)0x0;
                                                    FUN_005c2cac(local_158," ( %[^,], %[^)])%n",
                                                                 local_4c5 + 1,local_399 + 1,
                                                                 &local_d4);
                                                  }
                                                  if (local_d4 < 0) {
                                                    uVar6 = FUN_004a1210();
                                                    return uVar6;
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_4c5 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_4c5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_4c5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_4c5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_4c5 + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_399 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_399 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_399 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_399[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_399 + 1);
                                                  }
                                                  local_158 = local_158 + local_d4;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  uVar9 = FUN_004a1370(local_4c5 + 1,DAT_007c637c,
                                                                       &DAT_007c6344);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 == 0x0FFFFFFF) {
                                                    local_15c = 0;
                                                  }
                                                  iVar4 = FUN_004a1750(local_399 + 1,&local_c8);
                                                  if (iVar4 == 0) {
                                                    uVar6 = FUN_004a1210(
                                                  "Unknown death type \"%s\" in killCharacter command.",local_399 + 1);
                                                  return uVar6;
                                                  }
                                                  if (local_15c != 0) {
                                                    (**(code **)(*(int *)(uVar9 + 0x154) + 0xdc))
                                                              (uVar9,local_c8,local_d0,local_cc);
                                                  }
                                                }
                                                else {
                                                  iVar4 = FUN_005c1210(param_2,"killHero",8
                                                                      );
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[8] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 8;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    if (*0x01D51C20 != 0) {
                                                      uVar6 = FUN_004a1210();
                                                      return uVar6;
                                                    }
                                                    local_c4 = -1;
                                                    FUN_005c2cac(local_158," ( %[^)])%n",local_334,
                                                                 &local_c4);
                                                    if (local_c4 < 2) {
                                                      uVar6 = FUN_004a1210();
                                                      return uVar6;
                                                    }
                                                    local_158 = local_158 + local_c4;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    iVar4 = FUN_004a1750(local_334,&local_c0);
                                                    if (iVar4 == 0) {
                                                      uVar6 = FUN_004a1210(
                                                  "Unknown death type \"%s\" in killHero command.",local_334);
                                                  return uVar6;
                                                  }
                                                  if ((local_15c != 0) &&
                                                     (iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4
                                                                      ), iVar4 != 0)) {
                                                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xdc))
                                                              (iVar4,local_c0,0,0xbf800000);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,"killSfx",
                                                                         7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = param_2 + 7;
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_bc = -1;
                                                      FUN_005c2cac(local_158,"(%[^,)]%n",
                                                                   local_19dd + 1,&local_bc);
                                                      if (local_bc < 3) {
                                                        FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                          
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_bc;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_19dd + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_19dd + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_19dd + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_19dd[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_19dd + 1);
                                                  }
                                                  local_b8 = 0.0;
                                                  pcVar13 = local_158;
                                                  if (*local_158 == ',') {
                                                    local_bc = -1;
                                                    FUN_005c2cac(local_158,",%f%n",&local_b8,
                                                                 &local_bc);
                                                    if (local_bc < 3) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing killSfx parms");
                                                  return 0;
                                                  }
                                                  pcVar13 = local_158 + local_bc;
                                                  }
                                                  do {
                                                    local_158 = pcVar13;
                                                    pcVar13 = local_158 + 1;
                                                  } while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0);
                                                  if (*local_158 != ')') {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "Can't find matching ) in killSfx command"
                                                                );
                                                    return 0;
                                                  }
                                                  local_158 = pcVar13;
                                                  if (local_15c != 0) {
                                                    uVar6 = FUN_004aa290(param_1,local_19dd + 1);
                                                    if (local_b8 <= 0.0) {
                                                      FUN_00573a80();
                                                      FUN_004aa400();
                                                    }
                                                    else {
                                                      FUN_00573ab0(uVar6,0,local_b8,1);
                                                      FUN_004aa400();
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "lightning",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 9;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_b4 = -1;
                                                    FUN_005c2cac(local_158,"( )%n",&local_b4);
                                                    if (local_b4 < 2) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing lightning command");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_b4;
                                                  if (local_15c != 0) {
                                                    FUN_005ae580(0x02C997C0,0x3dcccccd,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,"playSfx",
                                                                         7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = param_2 + 7;
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_b0 = -1;
                                                      FUN_005c2cac(local_158,"(%[^,)]%n",
                                                                   local_7e5 + 1,&local_b0);
                                                      if (local_b0 < 3) {
                                                        FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                          
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_b0;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_7e5 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_7e5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_7e5 + 1)[iVar4] = '\0';
                                                  while (pcVar13 = local_158,
                                                        ((&DAT_00626114)[(byte)(local_7e5[1] + 1)] &
                                                        2) != 0) {
                                                    FUN_005c25d0(local_7e5 + 1);
                                                  }
                                                  puVar10 = &DAT_0061b568;
                                                  puVar16 = (uint *)((int)local_a3d + 1);
                                                  for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1)
                                                  {
                                                    *puVar16 = *puVar10;
                                                    puVar10 = puVar10 + (uint)bVar17 * -2 + 1;
                                                    puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
                                                  }
                                                  pcVar12 = local_158;
                                                  if (*pcVar13 == ',') {
                                                    local_b0 = -1;
                                                    FUN_005c2cac(local_158,",%[^)]%n",
                                                                 (int)local_a3d + 1,&local_b0);
                                                    if (local_b0 < 3) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing playSfx parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_b0;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = (char *)((int)local_a3d + 1);
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_a3d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  *(byte *)((int)local_a3d + 1U + iVar4) = 0;
                                                  while (((&DAT_00626114)[(byte)(local_a3d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0((int)local_a3d + 1U);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = (char *)((int)local_a3d + 1);
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  pcVar12 = local_158;
                                                  if (0x13 < ~uVar9 - 1) {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "handle name %s is too long, max %d chars"
                                                                 ,(int)local_a3d + 1,0x13);
                                                    return 0;
                                                  }
                                                  }
                                                  do {
                                                    local_158 = pcVar12;
                                                    pcVar12 = local_158 + 1;
                                                  } while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0);
                                                  if (*local_158 != ')') {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "Can't find matching ) in playSfx command"
                                                                );
                                                    return 0;
                                                  }
                                                  local_158 = pcVar12;
                                                  if (local_15c != 0) {
                                                    iVar4 = FUN_005c1210(local_7e5 + 1,&DAT_005dd96f
                                                                         ,3);
                                                    if (iVar4 == 0) {
                                                      iVar4 = FUN_00573cd0();
                                                      if (iVar4 != 0) {
                                                        FUN_00572ac0();
                                                        FUN_00572980();
                                                        uVar6 = FUN_0057d880(0x02C82A60,param_1,
                                                                             local_7e5 + 1);
                                                        FUN_00572b40();
                                                        if (local_a3d[1] != '\0') {
                                                          FUN_004aa2d0(param_1,(int)local_a3d + 1,
                                                                       uVar6);
                                                        }
                                                      }
                                                    }
                                                    else {
                                                      uVar6 = FUN_0057d880(0x02C82A60,param_1,
                                                                           local_7e5 + 1);
                                                      if (local_a3d[1] != '\0') {
                                                        FUN_004aa2d0(param_1,(int)local_a3d + 1,
                                                                     uVar6);
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "resetGore",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 9;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_ac = -1;
                                                    FUN_005c2cac(local_158,"( )%n",&local_ac);
                                                    if (local_ac < 2) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing resetGore command");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_ac;
                                                  if (local_15c != 0) {
                                                    FUN_004e5c00();
                                                    FUN_004b4b30();
                                                    local_a8 = *0x01D2C900;
                                                    for (iVar4 = 0; iVar4 < 0x01D2C900[1];
                                                        iVar4 = iVar4 + 1) {
                                                      *0x01D2C900 = iVar4;
                                                      FUN_0051b420();
                                                      iVar5 = 0;
                                                      for (iVar11 = 0;
                                                          iVar11 < *(int *)(0x01E82168 + 0x14d164)
                                                          ; iVar11 = iVar11 + 1) {
                                                        iVar7 = FUN_0040c600(*(uint *)
                                                                              (iVar5 + 0x14d168 +
                                                                              0x01E82168),
                                                                             DAT_007c4fec);
                                                        if ((iVar7 != 0) &&
                                                           (*(int *)(iVar7 + 0x70) == 1)) {
                                                          *(uint *)(iVar7 + 0x70) = 2;
                                                        }
                                                        iVar5 = iVar5 + 4;
                                                      }
                                                    }
                                                    *0x01D2C900 = local_a8;
                                                    FUN_0051b7b0();
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setActorBool",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0xc;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_a4 = -1;
                                                    FUN_005c2cac(local_158,"(%[^,], %[^,], %[^)])%n",
                                                                 local_58d + 1,local_e25 + 1,
                                                                 local_139d + 1,&local_a4);
                                                    if (local_a4 < 3) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setActorBool parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_a4;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_58d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_58d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_58d + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_58d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_58d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_e25 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_e25 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_e25 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_e25[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_e25 + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_139d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_139d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_139d + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_139d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_139d + 1);
                                                  }
                                                  iVar5 = 0;
                                                  local_a0 = 0;
                                                  iVar4 = local_a0;
                                                  if (0 < 0x00000002) {
                                                    iVar11 = 0;
                                                    do {
                                                      if (*(int *)((int)&DAT_0061b4d4 + iVar11) == 0
                                                         ) {
                                                        iVar7 = FUN_005c04e0("spectralFlag"
                                                                             + iVar11,local_e25 + 1)
                                                        ;
                                                        iVar4 = (int)&DAT_0061b4d4 + iVar11;
                                                        if (iVar7 == 0) break;
                                                      }
                                                      iVar5 = iVar5 + 1;
                                                      iVar11 = iVar11 + 0x48;
                                                      iVar4 = local_a0;
                                                    } while (iVar5 < 0x00000002);
                                                  }
                                                  local_a0 = iVar4;
                                                  if (local_a0 == 0) {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "%s is not a valid boolean actor variable name"
                                                                 ,local_e25 + 1);
                                                    return 0;
                                                  }
                                                  uVar9 = FUN_004a1370(local_58d + 1,
                                                                       *(uint *)
                                                                        (local_a0 + 0x44),
                                                                       local_a0 + 0x22);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if ((uVar9 == 0x0FFFFFFF) || (local_15c == 0)) {
                                                    iVar4 = FUN_004a6c90(param_1,local_139d + 1);
                                                    if (iVar4 != 0) {
                                                      return 0;
                                                    }
                                                  }
                                                  else {
                                                    uVar6 = FUN_004a6c30(0x01C51D80,local_139d + 1
                                                                        );
                                                    *(uint *)
                                                     (*(int *)(local_a0 + 0x40) + uVar9) = uVar6;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setCameraAmbient",0x10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0x10;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_98 = -1;
                                                    FUN_005c2cac(local_158,"(%[^,], %f)%n",
                                                                 local_b05 + 1,&local_9c,&local_98);
                                                    if (local_98 < 3) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setCameraAmbient parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_98;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_b05 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_b05 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_b05 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_b05[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_b05 + 1);
                                                  }
                                                  iVar4 = FUN_0054fba0(0x01E82168,local_b05 + 1);
                                                  if (iVar4 < 0) {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "Camera \"%s\" does not exist.",
                                                                 local_b05 + 1);
                                                    return 0;
                                                  }
                                                  if ((local_9c < 0.0) ||
                                                     (0x42c80000 < (int)local_9c)) {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "Ambient value %g is out of range (1..100)"
                                                                 ,(double)local_9c);
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                    FUN_005558f0(0x01E82168,iVar4,
                                                                 local_9c * (float)_DAT_005de17c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setCounter",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 10;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_94 = -1;
                                                    FUN_005c2cac(local_158,"( %[^,)]%n",
                                                                 local_107d + 1,&local_94);
                                                    if (local_94 < 5) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setCounter arguments");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_94;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_107d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_107d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_107d + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_107d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_107d + 1);
                                                  }
                                                  local_8c = 0;
                                                  if (*local_158 == ',') {
                                                    local_94 = -1;
                                                    FUN_005c2cac(local_158,",%d%n",&local_8c,
                                                                 &local_94);
                                                    if (local_94 < 1) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setCounter value argument");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_94;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  }
                                                  if (*local_158 != ')') {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "Error parsing setCounter arguments"
                                                                );
                                                    return 0;
                                                  }
                                                  local_158 = local_158 + 1;
                                                  if (local_15c != 0) {
                                                    FUN_004a9d70(param_1,local_107d + 1,local_8c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setDoorState",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0xc;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_88 = -1;
                                                    FUN_005c2cac(local_158,"(%[^,], %[^)])%n",
                                                                 local_120d + 1,local_1145 + 1,
                                                                 &local_88);
                                                    if (local_88 < 5) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setDoorState command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_88;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_120d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_120d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_120d + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_120d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_120d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1145 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1145 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1145 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_1145[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_1145 + 1);
                                                  }
                                                  uVar9 = FUN_004a1370(local_120d + 1,_DAT_01b68928,
                                                                       0x1b688f0);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 == 0x0FFFFFFF) {
                                                    local_15c = uVar9 ^ 0x0FFFFFFF;
                                                  }
                                                  iVar4 = FUN_005c04e0(local_1145 + 1,&DAT_005ddb72)
                                                  ;
                                                  if (iVar4 == 0) {
                                                    uVar6 = 2;
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c04e0(local_1145 + 1,
                                                                         "closed");
                                                    uVar6 = 0;
                                                    if (iVar4 != 0) {
                                                      iVar4 = FUN_005c04e0(local_1145 + 1,
                                                                           "opening");
                                                      if (iVar4 == 0) {
                                                        uVar6 = 1;
                                                      }
                                                      else {
                                                        iVar4 = FUN_005c04e0(local_1145 + 1,
                                                                             "closing");
                                                        if (iVar4 != 0) {
                                                          FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                              
                                                  "Invalid door state '%s'",local_1145 + 1);
                                                  return 0;
                                                  }
                                                  uVar6 = 3;
                                                  }
                                                  }
                                                  }
                                                  if (local_15c != 0) {
                                                    FUN_004774f0(uVar9,uVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setGroupAmbient",0xf);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0xf;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_7c = -1;
                                                    FUN_005c2cac(local_158,"(%d, %f)%n",
                                                                 &local_84,&local_80,&local_7c);
                                                    if (local_7c < 3) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setGroupAmbient parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_7c;
                                                  if ((local_80 < 0.0) ||
                                                     (0x42c80000 < (int)local_80)) {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "Ambient value %g is out of range (1..100)"
                                                                 ,(double)local_80);
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                    FUN_00555970(0x01E82168,local_84,
                                                                 local_80 * (float)_DAT_005de17c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setLightFilterFrame",0x13);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0x13] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0x13;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_78 = -1;
                                                    FUN_005c2cac(local_158,"( %[^ ,] , %d )%n",local_71c,
                                                                 &local_74,&local_78);
                                                    if (local_78 < 0) {
                                                      uVar6 = FUN_004a1210();
                                                      return uVar6;
                                                    }
                                                    local_158 = local_158 + local_78;
                                                    FUN_00555a20(0x01E82168,local_71c,&local_70,
                                                                 &local_6c);
                                                    if (local_70 == 0) {
                                                      uVar6 = FUN_004a1210(
                                                  "SpotLight %s doesn't exist.",local_71c);
                                                  return uVar6;
                                                  }
                                                  if ((local_74 < 0) ||
                                                     (*(int *)(local_70 + 0x11ec) <= local_74)) {
                                                    uVar6 = FUN_004a1210(
                                                  "Invalid filter frame, %s has %d filters",local_71c,
                                                  *(uint *)(local_70 + 0x11ec));
                                                  return uVar6;
                                                  }
                                                  if (local_15c != 0) {
                                                    if (local_6c == 0) {
                                                      _DAT_01d1d400 = "..\\core\\event.cpp";
                                                      _DAT_01d1d404 = 0x75a;
                                                      FUN_005030e0(
                                                  "Can't find CDemonLight for light %s in setLightFilterFrame meta-command",local_71c);
                                                  }
                                                  FUN_0055d3f0(local_70,local_74,local_6c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setLeverState",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0xd;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_68 = -1;
                                                    FUN_005c2cac(local_158,"(%[^,], %[^)])%n",
                                                                 local_1b6d + 1,local_12d5 + 1,
                                                                 &local_68);
                                                    if (local_68 < 5) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setLeverState command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_68;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1b6d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1b6d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1b6d + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_1b6d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_1b6d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_12d5 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_12d5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_12d5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_12d5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_12d5 + 1);
                                                  }
                                                  uVar9 = FUN_004a1370(local_1b6d + 1,_DAT_01d1c21c,
                                                                       0x1d1c1e4);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if ((uVar9 == 0x0FFFFFFF) || (local_15c == 0)) {
                                                    iVar4 = FUN_004a6c90(param_1,local_12d5 + 1);
                                                    if (iVar4 != 0) {
                                                      return 0;
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_004a6c30(0x01C51D80,local_12d5 + 1
                                                                         ,1);
                                                    if (iVar4 == 0) {
                                                      uStack_160 = 0;
                                                    }
                                                    else {
                                                      uStack_160 = 0x3ff00000;
                                                    }
                                                    local_164 = 0;
                                                    FUN_004ff3f0(uVar9,(float)(double)((ulonglong)
                                                                                       uStack_160 <<
                                                                                      0x20));
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setModelState",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0xd;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_60 = -1;
                                                    FUN_005c2cac(local_158,"(%[^,], %[^)])%n",
                                                                 local_655 + 1,local_975 + 1,
                                                                 &local_60);
                                                    if (local_60 < 5) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setModelState command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_60;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_655 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_655 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_655 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_655[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_655 + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_975 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_975 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_975 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_975[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_975 + 1);
                                                  }
                                                  uVar9 = FUN_004a1370(local_655 + 1,DAT_007c637c,
                                                                       &DAT_007c6344);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 != 0x0FFFFFFF) {
                                                    uVar6 = FUN_00524a00(uVar9 + 0x158,local_975 + 1
                                                                         ,0);
                                                    iVar4 = FUN_00524150(uVar6);
                                                    if (iVar4 < 0) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Model %s does not have state %s",uVar9 + 0x24a8
                                                  ,local_975 + 1);
                                                  return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                    FUN_005247c0(uVar9 + 0x158,iVar4,1);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setSunlight",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0xb;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_58 = -1;
                                                    FUN_005c2cac(local_158,"(%f , %f , %f , %f )%n",
                                                                 &local_188,&local_184,&local_180,
                                                                 &local_5c,&local_58);
                                                    if (local_58 < 5) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
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
                                                    fVar2 = 1.0 / local_54;
                                                    local_188 = local_188 * fVar2;
                                                    local_184 = local_184 * fVar2;
                                                    local_180 = local_180 * fVar2;
                                                  }
                                                  if (local_15c != 0) {
                                                    FUN_00555930(0x01E82168,local_188,local_184,
                                                                 local_180,local_5c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,"setTimer"
                                                                         ,8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_00626114)[(byte)(param_2[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_158 = param_2 + 8;
                                                      while (((&DAT_00626114)
                                                              [(byte)(*local_158 + 1)] & 2) != 0) {
                                                        local_158 = local_158 + 1;
                                                      }
                                                      local_48 = -1;
                                                      FUN_005c2cac(local_158,"(%[^,], %f)%n",
                                                                   local_16bd + 1,&local_4c,
                                                                   &local_48);
                                                      if (local_48 < 3) {
                                                        FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                          
                                                  "Error parsing setTimer command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_48;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_16bd + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_16bd + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_16bd + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_16bd[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_16bd + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_16bd + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  if (0x1f < ~uVar9 - 1) {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "Timer name \"%s\" is too long, (max %d chars)"
                                                                 ,local_16bd + 1,0x1f);
                                                    return 0;
                                                  }
                                                  if (local_4c < 0.0) {
                                                    FUN_005bfb40(&DAT_01c56ed0,
                                                                 "Invalid timer duration");
                                                    return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                    FUN_004a9bf0(param_1,local_16bd + 1,local_4c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "setWeather",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 10;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_40 = -1;
                                                    FUN_005c2cac(local_158,"(%[^)])%n",
                                                                 local_184d + 1,&local_40);
                                                    if (local_40 < 3) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing setWeather command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_40;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_184d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_184d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_184d + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_184d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_184d + 1);
                                                  }
                                                  iVar4 = FUN_005c04e0(local_184d + 1,&DAT_005ddeb3)
                                                  ;
                                                  uVar6 = 0;
                                                  if (iVar4 != 0) {
                                                    iVar4 = FUN_005c04e0(local_184d + 1,
                                                                         &DAT_005ddeb8);
                                                    if (iVar4 == 0) {
                                                      uVar6 = 1;
                                                    }
                                                    else {
                                                      iVar4 = FUN_005c04e0(local_184d + 1,
                                                                           &DAT_005ddebd);
                                                      if (iVar4 != 0) {
                                                        FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                          
                                                  "Invalid weather type: %s",local_184d + 1);
                                                  return 0;
                                                  }
                                                  uVar6 = 2;
                                                  }
                                                  }
                                                  if (local_15c != 0) {
                                                    FUN_005aefc0(0x02C997C0,uVar6);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "shakeScreen",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0xb;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_2c = -1;
                                                    FUN_005c2cac(local_158,"( %f, %f, %f, %f )%n",
                                                                 &local_3c,&local_38,&local_34,
                                                                 &local_30,&local_2c);
                                                    if (local_2c < 5) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing shakeScreen command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_2c;
                                                  if (local_15c != 0) {
                                                    FUN_00555ab0(0x01E82168,local_3c,local_38,
                                                                 local_34,local_30);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "slamModelToMotion",0x11);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0x11;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_28 = -1;
                                                    FUN_005c2cac(local_158,"(%[^,], %[^)])%n",
                                                                 local_1e8d + 1,local_1aa5 + 1,
                                                                 &local_28);
                                                    if (local_28 < 5) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Error parsing slamModelToMotion command parms");
                                                  return 0;
                                                  }
                                                  local_158 = local_158 + local_28;
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1e8d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1e8d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1e8d + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_1e8d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_1e8d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_1aa5 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_1aa5 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_1aa5 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_1aa5[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_1aa5 + 1);
                                                  }
                                                  uVar9 = FUN_004a1370(local_1e8d + 1,DAT_007c637c,
                                                                       &DAT_007c6344);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 != 0x0FFFFFFF) {
                                                    iVar4 = uVar9 + 0x158;
                                                    uVar6 = FUN_00524a00(iVar4,local_1aa5 + 1,0);
                                                    iVar5 = FUN_005240c0(uVar6);
                                                    if (iVar5 < 0) {
                                                      FUN_005bfb40(&DAT_01c56ed0,
                                                                                                                                      
                                                  "Model %s does not have motion %s",uVar9 + 0x24a8
                                                  ,local_1aa5 + 1);
                                                  return 0;
                                                  }
                                                  if (local_15c != 0) {
                                                    FUN_00524b10(iVar4,iVar5,0);
                                                    iVar5 = FUN_00524770(iVar4,1);
                                                    FUN_005247c0(iVar4,*(uint *)(iVar5 + 0x24)
                                                                );
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "switchCamera",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    param_2 = param_2 + 0xc;
                                                    while (((&DAT_00626114)[(byte)(*param_2 + 1)] &
                                                           2) != 0) {
                                                      param_2 = param_2 + 1;
                                                    }
                                                    local_24 = -1;
                                                    puVar10 = &DAT_0061b630;
                                                    puVar16 = local_2d0;
                                                    for (iVar4 = 0x19; iVar4 != 0;
                                                        iVar4 = iVar4 + -1) {
                                                      *puVar16 = *puVar10;
                                                      puVar10 = puVar10 + (uint)bVar17 * -2 + 1;
                                                      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
                                                    }
                                                    local_158 = param_2;
                                                    FUN_005c2cac(param_2," ( %[^ ,)]%n",local_2d0,
                                                                 &local_24);
                                                    if (local_24 < 2) {
                                                      uVar6 = FUN_004a1210();
                                                      return uVar6;
                                                    }
                                                    local_158 = local_158 + local_24;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    iVar4 = FUN_0054fba0(0x01E82168,local_2d0);
                                                    if (iVar4 < 0) {
                                                      uVar6 = FUN_004a1210(
                                                  "Camera \"%s\" doesn't exist",local_2d0);
                                                  return uVar6;
                                                  }
                                                  local_20 = 0x40400000;
                                                  if (*local_158 == ',') {
                                                    local_24 = -1;
                                                    FUN_005c2cac(local_158,",%f%n",&local_20,
                                                                 &local_24);
                                                    if (local_24 < 2) {
                                                      uVar6 = FUN_004a1210();
                                                      return uVar6;
                                                    }
                                                    local_158 = local_158 + local_24;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                  }
                                                  if (*local_158 != ')') {
                                                    uVar6 = FUN_004a1210();
                                                    return uVar6;
                                                  }
                                                  local_158 = local_158 + 1;
                                                  if (local_15c != 0) {
                                                    FUN_0055b1e0(0x01E82168,iVar4,local_20);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,
                                                  "turnToFieldNotesEntry",0x15);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_00626114)[(byte)(param_2[0x15] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_158 = param_2 + 0x15;
                                                    while (((&DAT_00626114)[(byte)(*local_158 + 1)]
                                                           & 2) != 0) {
                                                      local_158 = local_158 + 1;
                                                    }
                                                    local_1c = -1;
                                                    FUN_005c2cac(local_158,"(%[^)])%n",
                                                                 local_218d + 1,&local_1c);
                                                    if (local_1c < 3) {
                                                      uVar6 = FUN_004a1210();
                                                      return uVar6;
                                                    }
                                                    local_158 = local_158 + local_1c;
                                                    uVar9 = 0xffffffff;
                                                    pcVar13 = local_218d + 1;
                                                    do {
                                                      if (uVar9 == 0) break;
                                                      uVar9 = uVar9 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    iVar4 = ~uVar9 - 1;
                                                    if (0 < iVar4) {
                                                      pcVar13 = local_218d + ~uVar9;
                                                      do {
                                                        if (((&DAT_00626114)
                                                             [(byte)(pcVar13[-1] + 1)] & 2) == 0)
                                                        break;
                                                        iVar4 = iVar4 + -1;
                                                        pcVar13 = pcVar13 + -1;
                                                      } while (0 < iVar4);
                                                    }
                                                    (local_218d + 1)[iVar4] = '\0';
                                                    while (((&DAT_00626114)
                                                            [(byte)(local_218d[1] + 1)] & 2) != 0) {
                                                      FUN_005c25d0(local_218d + 1);
                                                    }
                                                    if (_DAT_01c56ecc != 0) {
                                                      uVar6 = FUN_004bde20(0x01CC8004,
                                                                           local_218d + 1);
                                                      switch(uVar6) {
                                                      case 0:
                                                      case 1:
                                                      case 2:
                                                      case 3:
                                                      case 4:
                                                      case 5:
                                                      case 6:
                                                        goto switchD_004a2582_caseD_2;
                                                      default:
                                                        uVar6 = FUN_004a1210(
                                                  "Field notes entry '%s' not found",local_218d + 1)
                                                  ;
                                                  return uVar6;
                                                  }
                                                  }
                                                  FUN_004bde80(0x01CC8004,local_218d + 1);
                                                  }
                                                  else {
                                                    iVar4 = FUN_005c1210(param_2,"warpTo",6
                                                                        );
                                                    if ((iVar4 != 0) ||
                                                       (((&DAT_00626114)[(byte)(param_2[6] + 1)] &
                                                        0xe0) != 0)) {
                                                      uVar6 = FUN_004a1210(
                                                  "Unknown meta-function starting at %s",param_2);
                                                  return uVar6;
                                                  }
                                                  local_158 = param_2 + 6;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  local_18 = -1;
                                                  FUN_005c2cac(local_158,"(%[^,], %[^)])%n",local_152d + 1
                                                               ,local_c95 + 1,&local_18);
                                                  if (local_18 < 5) {
                                                    uVar6 = FUN_004a1210();
                                                    return uVar6;
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_152d + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_152d + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_152d + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_152d[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_152d + 1);
                                                  }
                                                  uVar9 = 0xffffffff;
                                                  pcVar13 = local_c95 + 1;
                                                  do {
                                                    if (uVar9 == 0) break;
                                                    uVar9 = uVar9 - 1;
                                                    cVar1 = *pcVar13;
                                                    pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                  } while (cVar1 != '\0');
                                                  iVar4 = ~uVar9 - 1;
                                                  if (0 < iVar4) {
                                                    pcVar13 = local_c95 + ~uVar9;
                                                    do {
                                                      if (((&DAT_00626114)[(byte)(pcVar13[-1] + 1)]
                                                          & 2) == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar13 = pcVar13 + -1;
                                                    } while (0 < iVar4);
                                                  }
                                                  (local_c95 + 1)[iVar4] = '\0';
                                                  while (((&DAT_00626114)[(byte)(local_c95[1] + 1)]
                                                         & 2) != 0) {
                                                    FUN_005c25d0(local_c95 + 1);
                                                  }
                                                  local_158 = local_158 + local_18;
                                                  while (((&DAT_00626114)[(byte)(*local_158 + 1)] &
                                                         2) != 0) {
                                                    local_158 = local_158 + 1;
                                                  }
                                                  uVar9 = FUN_004a1370(local_152d + 1,DAT_007c3030,
                                                                       &DAT_007c2ff8);
                                                  if (uVar9 == 0) {
                                                    return 0;
                                                  }
                                                  if (uVar9 == 0x0FFFFFFF) {
                                                    local_15c = 0;
                                                  }
                                                  else if (local_15c != 0) {
                                                    local_1b0 = *(int *)(uVar9 + 0x2c);
                                                  }
                                                  local_18 = -1;
                                                  FUN_005c2cac(local_c95 + 1,
                                                               "%f,%f,%f,%f,%f,%f%n",&local_1bc,
                                                               &local_1b8,&local_1b4,&local_1ac,
                                                               &local_1a4,&local_1a8,&local_18);
                                                  if (local_18 < 0) {
                                                    if ((local_15c != 0) &&
                                                       (&local_1ac != (uint *)(uVar9 + 0x30)))
                                                    {
                                                      local_1ac = *(uint *)(uVar9 + 0x30);
                                                      local_1a8 = *(uint *)(uVar9 + 0x34);
                                                      local_1a4 = *(uint *)(uVar9 + 0x38);
                                                    }
                                                    FUN_005c2cac(local_c95 + 1,"%f,%f,%f,%f%n",
                                                                 &local_1bc,&local_1b8,&local_1b4,
                                                                 &local_1a8,&local_18);
                                                  }
                                                  if (local_18 < 0) {
                                                    if ((local_15c != 0) &&
                                                       (&local_1ac != (uint *)(uVar9 + 0x30)))
                                                    {
                                                      local_1ac = *(uint *)(uVar9 + 0x30);
                                                      local_1a8 = *(uint *)(uVar9 + 0x34);
                                                      local_1a4 = *(uint *)(uVar9 + 0x38);
                                                    }
                                                    FUN_005c2cac(local_c95 + 1,"%f,%f,%f%n",
                                                                 &local_1bc,&local_1b8,&local_1b4,
                                                                 &local_18);
                                                  }
                                                  if (local_18 < 0) {
                                                    uVar8 = FUN_004a1370(local_c95 + 1,DAT_007c3030,
                                                                         &DAT_007c2ff8);
                                                    if (uVar8 == 0) {
                                                      return 0;
                                                    }
                                                    if (uVar8 == 0x0FFFFFFF) {
                                                      local_15c = 0;
                                                    }
                                                    else {
                                                      local_1bc = *(uint *)(uVar8 + 0x20);
                                                      local_1b8 = *(uint *)(uVar8 + 0x24);
                                                      local_1b4 = *(uint *)(uVar8 + 0x28);
                                                      local_1b0 = *(int *)(uVar8 + 0x2c);
                                                      if (&local_1ac != (uint *)(uVar8 + 0x30)
                                                         ) {
                                                        local_1ac = *(uint *)(uVar8 + 0x30);
                                                        local_1a8 = *(uint *)(uVar8 + 0x34);
                                                        local_1a4 = *(uint *)(uVar8 + 0x38);
                                                      }
                                                    }
                                                    uVar8 = 0xffffffff;
                                                    pcVar13 = local_c95 + 1;
                                                    do {
                                                      if (uVar8 == 0) break;
                                                      uVar8 = uVar8 - 1;
                                                      cVar1 = *pcVar13;
                                                      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
                                                    } while (cVar1 != '\0');
                                                    local_18 = ~uVar8 - 1;
                                                  }
                                                  if ((local_18 < 0) ||
                                                     (local_c95[local_18 + 1] != '\0')) {
                                                    uVar6 = FUN_004a1210();
                                                    return uVar6;
                                                  }
                                                  if (local_15c != 0) {
                                                    if (local_1b0 != *(int *)(uVar9 + 0x2c)) {
                                                      (*(code *)**(uint **)(uVar9 + 0x154))();
                                                    }
                                                    iVar4 = FUN_0040c600(uVar9,DAT_007c637c);
                                                    if (iVar4 != 0) {
                                                      (**(code **)(*(int *)(iVar4 + 0x154) + 0xf0))
                                                                ();
                                                      (**(code **)(*(int *)(iVar4 + 0x154) + 0xf8))
                                                                ();
                                                    }
                                                    *(int *)(uVar9 + 0x2c) = local_1b0;
                                                    (**(code **)(*(int *)(uVar9 + 0x154) + 0x68))
                                                              (uVar9,&local_1bc,&local_1ac);
                                                    if (uVar9 == *(uint *)(_DAT_01d06ab4 * 4 +
                                                                          0x1d06aa4)) {
                                                      FUN_0051b700(0x01D2C900,&local_1bc);
                                                    }
                                                    if (uVar9 == *(uint *)(0x01E81C80 + 0xc)) {
                                                      *(uint *)(0x01E81C80 + 0x10) = 1;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
    if (*local_158 != '\0') {
      uVar6 = FUN_004a1210();
      return uVar6;
    }
  }
  return 1;
}
