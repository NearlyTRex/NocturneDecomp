// Name: FUN_004e85b0
// Address: 004e85b0
// Address Range: [[004e85b0, 004e9490]]
// Convention: unknown
// Signature: int FUN_004e85b0(int **param_1,undefined2 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e85b0(int **param_1,ushort *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int **ppiVar11;
  ushort *puVar12;
  int **ppiVar13;
  int ***pppiVar14;
  byte bVar15;
  float10 fVar16;
  int **ppiStack_60ec;
  int **ppiStack_60e8;
  int **ppiStack_60e4;
  int **ppiStack_60e0;
  int **ppiStack_60dc;
  int **ppiStack_60d8;
  int **ppiStack_60d4;
  uint local_60d0;
  uint local_60cc;
  int *local_60c8 [1152];
  byte local_4ec8 [4608];
  byte local_3cc8 [2304];
  ushort local_33c8 [1152];
  byte local_2ac8 [2304];
  byte local_21c8 [2304];
  float local_18c8 [576];
  int *local_fc8 [192];
  int *local_cc8 [192];
  int *local_9c8 [192];
  int *local_6c8 [124];
  int local_4d8 [6];
  int *local_4c0 [76];
  byte local_390 [256];
  int *local_290 [64];
  int *local_190 [32];
  int local_110;
  uint local_10c;
  int local_104;
  int local_100;
  int local_fc;
  int *local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint uStack_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  int **local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  int **local_88;
  int **local_84;
  int **local_80;
  int **local_7c;
  int **local_78;
  int local_74;
  int local_70;
  int **local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  byte *local_58;
  byte *local_54;
  int local_50;
  int local_4c;
  int **local_48;
  int local_44;
  ushort *local_40;
  int local_3c;
  int **local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int **local_1c;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  local_e0 = &local_110;
  local_b0 = (int *)0x0;
  local_d4 = 0xffffffff;
  local_d8 = 0;
  local_b4 = 0;
  ppiVar11 = param_1 + 0x14c8;
  if (param_1[0x14cf] == (int *)0x0) {
    local_a8 = 0xfff;
    local_a4 = 0x1fff;
    if (((uint)param_1[0x14cb] & 7) != 0) {
      ppiStack_60d4 = (int **)(8 - ((uint)param_1[0x14cb] & 7));
      ppiStack_60dc = (int **)0x4e867e;
      ppiStack_60d8 = ppiVar11;
      FUN_004e2ac0();
    }
    ppiStack_60d4 = (int **)0xc;
    ppiStack_60dc = (int **)0x4e8633;
    ppiStack_60d8 = ppiVar11;
    uVar2 = FUN_004e2ac0();
    while (((local_a4 & uVar2) != local_a8 && (param_1[0x14cf] == (int *)0x0))) {
      ppiStack_60d4 = (int **)0x8;
      ppiStack_60dc = (int **)0x4e865e;
      ppiStack_60d8 = ppiVar11;
      uVar3 = FUN_004e2ac0();
      uVar2 = uVar2 << 8 | uVar3;
    }
    if (param_1[0x14cf] == (int *)0x0) {
      local_b0 = param_1[0x14cb];
      ppiStack_60d4 = &local_e0;
      ppiStack_60d8 = param_1 + 0x14c8;
      ppiStack_60dc = (int **)0x4e86b9;
      FUN_004e3130();
      piVar10 = local_e0;
      local_dc = local_e0[7];
      local_d0 = (local_dc != 3) + 1;
      if (local_e0[1] == 2) {
        local_9c = local_c8;
        local_8c = *local_e0;
        local_98 = 1;
        local_94 = local_e0[3];
        local_14 = local_8c * 0xb4 + 0x3c;
        fVar16 = (float10)*(double *)(&DAT_005bbc48 + local_e0[4] * 8 + local_8c * 0x20);
        ppiStack_60d4 = (int **)0x4e87a3;
        local_a0 = &local_e0;
        iVar4 = FUN_00563a30();
        local_90 = (int)ROUND(fVar16);
        if (local_8c == 1) {
          if (((local_90 == 0x30) && (0x37 < iVar4)) || ((0x37 < iVar4 && (iVar4 < 0x51)))) {
            piVar5 = (int *)0x0;
          }
          else if ((local_90 == 0x30) || (iVar4 < 0x60)) {
            if ((local_90 == 0x20) || (0x30 < iVar4)) {
              piVar5 = (int *)0x3;
            }
            else {
              piVar5 = (int *)0x2;
            }
          }
          else {
            piVar5 = (int *)0x1;
          }
        }
        else {
          piVar5 = (int *)0x4;
        }
        if (piVar5 != local_a0[3]) {
          ppiStack_60d4 = (int **)&DAT_01cd8b28;
          ppiStack_60d8 = (int **)"MPEG Layer 2 - pick_table - can't load tables!  File: %s";
          _DAT_01cc4800 = "..\\sound\\mp3.cpp";
          _DAT_01cc4804 = 0x1a1;
          ppiStack_60dc = (int **)0x4e8803;
          FUN_004c8440();
        }
        local_c8 = local_9c;
      }
      else {
        local_c8 = 0x20;
      }
      local_cc = local_c8;
      if (piVar10[7] == 1) {
        local_88 = (int **)piVar10[1];
        ppiVar11 = (int **)piVar10[8];
        if (((((int)local_88 < 1) || (3 < (int)local_88)) || ((int)ppiVar11 < 0)) ||
           (3 < (int)ppiVar11)) {
          ppiStack_60d4 = (int **)&DAT_01cd8b28;
          ppiStack_60e0 = (int **)"js_bound bad layer/modext (%d/%d)  File: %s";
          _DAT_01cc4800 = "..\\sound\\mp3.cpp";
          _DAT_01cc4804 = 0x1b1;
          ppiStack_60e4 = (int **)0x4e885e;
          ppiStack_60dc = local_88;
          ppiStack_60d8 = ppiVar11;
          FUN_004c8440();
        }
        local_cc = *(uint *)
                    ("$CMotionController$$" + (int)ppiVar11 * 4 + (int)local_88 * 0x10 + 10
                    );
      }
      local_b8 = local_d0;
      local_ac = (*local_e0 != 0) + 1;
      ppiVar11 = param_1 + 0x14c8;
      if (local_10c < 2) {
        if (local_10c == 1) {
          ppiStack_60d4 = &local_e0;
          ppiStack_60d8 = local_290;
          local_60d0 = 0x20;
          local_60cc = 0x180;
          ppiStack_60e0 = (int **)0x4e88e7;
          ppiStack_60dc = ppiVar11;
          FUN_004e3320();
          ppiStack_60d4 = &local_e0;
          ppiStack_60d8 = local_fc8;
          ppiStack_60dc = local_290;
          ppiStack_60e4 = (int **)0x4e8908;
          ppiStack_60e0 = ppiVar11;
          FUN_004e33d0();
          local_20 = 0;
          local_84 = ppiVar11;
          do {
            ppiStack_60d4 = &local_e0;
            ppiStack_60d8 = local_290;
            ppiStack_60dc = local_cc8;
            ppiStack_60e0 = local_84;
            ppiStack_60e4 = (int **)0x4e8940;
            FUN_004e36d0();
            ppiStack_60d4 = &local_e0;
            ppiStack_60d8 = local_290;
            ppiStack_60dc = local_9c8;
            ppiStack_60e0 = local_cc8;
            ppiStack_60e4 = (int **)0x4e896a;
            FUN_004e3d30();
            local_80 = local_9c8;
            local_7c = local_fc8;
            local_5c = 0;
            do {
              iVar4 = 0;
              if (0 < local_d0) {
                piVar10 = (int *)((int)local_7c + local_5c);
                pfVar6 = (float *)((int)local_80 + local_5c);
                do {
                  iVar8 = *piVar10;
                  piVar10 = piVar10 + 0x60;
                  iVar4 = iVar4 + 1;
                  *pfVar6 = *pfVar6 * (float)*(double *)(&DAT_005bbdf0 + iVar8 * 8);
                  pfVar6 = pfVar6 + 0x60;
                } while (iVar4 < local_d0);
              }
              local_5c = local_5c + 4;
            } while (local_5c != 0x80);
            ppiVar11 = (int **)0x0;
            local_5c = 0x80;
            if (0 < local_b8) {
              ppiVar13 = local_9c8;
              ppiStack_60d4 = (int **)local_33c8;
              do {
                ppiStack_60e0 = param_1;
                puVar12 = (ushort *)((int)ppiStack_60d4 + 0x480);
                ppiStack_60e4 = (int **)0x4e8a25;
                ppiStack_60dc = ppiVar13;
                ppiStack_60d8 = ppiVar11;
                FUN_004e4070();
                ppiVar11 = (int **)((int)ppiVar11 + 1);
                ppiVar13 = ppiVar13 + 0x60;
                ppiStack_60d4 = (int **)puVar12;
              } while ((int)ppiVar11 < local_b8);
            }
            local_20 = local_20 + 1;
          } while (local_20 < 0xc);
        }
      }
      else if (local_10c < 3) {
        local_60cc = 0x480;
        ppiStack_60d4 = &local_e0;
        ppiStack_60d8 = local_290;
        local_60d0 = 8;
        ppiStack_60e0 = (int **)0x4e8c3e;
        ppiStack_60dc = ppiVar11;
        FUN_004e31f0();
        ppiStack_60d4 = &local_e0;
        ppiStack_60d8 = local_fc8;
        ppiStack_60dc = local_290;
        ppiStack_60e0 = (int **)local_390;
        ppiStack_60e8 = (int **)0x4e8c67;
        ppiStack_60e4 = ppiVar11;
        FUN_004e3460();
        local_bc = 0;
        local_78 = ppiVar11;
        do {
          ppiStack_60d4 = &local_e0;
          ppiStack_60d8 = local_290;
          ppiStack_60dc = local_cc8;
          ppiStack_60e0 = local_78;
          ppiStack_60e4 = (int **)0x4e8c9f;
          FUN_004e37d0();
          ppiStack_60d4 = &local_e0;
          ppiStack_60d8 = local_9c8;
          ppiStack_60dc = local_290;
          ppiStack_60e0 = local_cc8;
          ppiStack_60e4 = (int **)0x4e8cc7;
          FUN_004e3a60();
          ppiStack_60d4 = (int **)(local_bc >> 2);
          ppiStack_60d8 = &local_e0;
          ppiStack_60dc = local_fc8;
          ppiStack_60e0 = local_9c8;
          ppiStack_60e4 = (int **)0x4e8cf2;
          FUN_004e3e70();
          if (param_2 != (ushort *)0x0) {
            local_28 = 0;
            local_2c = 0;
            do {
              ppiVar11 = (int **)0x0;
              if (0 < local_b8) {
                ppiVar13 = (int **)((int)local_9c8 + local_2c);
                local_30 = (int)local_33c8 + local_28;
                do {
                  ppiStack_60d4 = (int **)local_30;
                  ppiStack_60e0 = param_1;
                  ppiStack_60e4 = (int **)0x4e8d6d;
                  ppiStack_60dc = ppiVar13;
                  ppiStack_60d8 = ppiVar11;
                  FUN_004e4070();
                  ppiVar11 = (int **)((int)ppiVar11 + 1);
                  ppiVar13 = ppiVar13 + 0x60;
                  local_30 = local_30 + 0x480;
                } while ((int)ppiVar11 < local_b8);
              }
              local_28 = local_28 + 0x40;
              local_2c = local_2c + 0x80;
            } while (local_28 != 0xc0);
            local_24 = 0;
            local_bc = 0;
            do {
              iVar4 = 0;
              do {
                iVar8 = 0;
                if (0 < local_b8) {
                  iVar9 = iVar4 + local_24;
                  puVar12 = param_2;
                  do {
                    param_2 = puVar12 + 1;
                    iVar8 = iVar8 + 1;
                    *puVar12 = *(ushort *)((int)local_33c8 + iVar9);
                    iVar9 = iVar9 + 0x480;
                    puVar12 = param_2;
                  } while (iVar8 < local_b8);
                }
                iVar4 = iVar4 + 2;
              } while (iVar4 != 0x40);
              local_24 = local_24 + 0x40;
            } while (local_24 != 0xc0);
          }
          local_bc = local_bc + 1;
        } while (local_bc < 0xc);
      }
      else if (local_10c == 3) {
        local_60d0 = 8;
        if (*local_e0 == 0) {
          local_60cc = 0x240;
        }
        else {
          local_60cc = 0x480;
        }
        ppiStack_60d4 = &local_e0;
        ppiStack_60d8 = (int **)local_4d8;
        ppiStack_60dc = param_1 + 0x14c8;
        ppiStack_60e0 = param_1;
        ppiStack_60e4 = (int **)0x4e8e81;
        local_6c = ppiStack_60dc;
        FUN_004e4320();
        ppiVar11 = &local_e0;
        pppiVar14 = &ppiStack_60ec;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pppiVar14 = (int **)*ppiVar11;
          ppiVar11 = ppiVar11 + (uint)bVar15 * -2 + 1;
          pppiVar14 = pppiVar14 + (uint)bVar15 * -2 + 1;
        }
        iVar4 = FUN_004e77d0();
        ppiVar11 = local_6c;
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          ppiStack_60d4 = (int **)0x8;
          ppiStack_60d8 = (int **)0x8;
          ppiStack_60dc = ppiVar11;
          ppiStack_60e0 = (int **)0x4e8eb6;
          ppiStack_60d8 = (int **)FUN_004e2ac0();
          ppiStack_60dc = param_1;
          ppiStack_60e0 = (int **)0x4e8ec4;
          FUN_004e2de0();
        }
        ppiStack_60d4 = param_1;
        ppiStack_60d8 = (int **)0x4e8ed9;
        uVar2 = FUN_004e2ce0();
        ppiStack_60d4 = param_1;
        ppiStack_60d8 = (int **)0x4e8ee7;
        uVar3 = FUN_004e2ce0();
        uVar2 = uVar2 >> 3;
        if (uVar3 % local_60d0 != 0) {
          ppiStack_60d4 = (int **)(local_60d0 - uVar3 % local_60d0);
          ppiStack_60d8 = param_1;
          uVar2 = uVar2 + 1;
          ppiStack_60dc = (int **)0x4e8f04;
          FUN_004e2cf0();
        }
        local_70 = (int)param_1[0x14d3] + (-local_4d8[0] - uVar2);
        if (0x1000 < uVar2) {
          ppiStack_60d4 = (int **)0x1000;
          ppiStack_60d8 = param_1;
          param_1[0x14d3] = param_1[0x14d3] + -0x400;
          ppiStack_60dc = (int **)0x4e8f4a;
          FUN_004e2ea0();
        }
        ppiVar11 = &local_e0;
        pppiVar14 = &ppiStack_60ec;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pppiVar14 = (int **)*ppiVar11;
          ppiVar11 = ppiVar11 + (uint)bVar15 * -2 + 1;
          pppiVar14 = pppiVar14 + (uint)bVar15 * -2 + 1;
        }
        iVar4 = FUN_004e77d0();
        param_1[0x14d3] = (int *)((int)param_1[0x14d3] + iVar4);
        if (local_70 < 0) {
          ppiStack_60d4 = (int **)(local_b4 + -1);
          ppiStack_60d8 = (int **)"Not enough main data to decode frame %d.";
          _DAT_01cc4800 = "@..\\sound\\mp3.cpp" + 1;
          _DAT_01cc4804 = 0xf90;
          ppiStack_60dc = (int **)0x4e8fdf;
          FUN_004c8440();
        }
        while (iVar4 = local_70, 0 < local_70) {
          ppiStack_60d4 = (int **)0x8;
          ppiStack_60d8 = param_1;
          ppiStack_60dc = (int **)0x4e8f9a;
          FUN_004e2cf0();
          local_70 = iVar4 + -1;
        }
        if ((param_2 != (ushort *)0x0) && (local_74 = 0, 0 < local_ac)) {
          local_38 = local_4c0;
          local_34 = 0;
          do {
            iVar4 = 0;
            if (0 < local_b8) {
              local_58 = local_4ec8;
              ppiVar11 = (int **)((int)local_4c0 + local_34);
              do {
                ppiStack_60d4 = param_1;
                ppiStack_60d8 = (int **)0x4e9054;
                local_68 = FUN_004e2ce0();
                ppiStack_60d8 = (int **)iVar4;
                if (*local_e0 == 0) {
                  ppiStack_60d4 = &local_e0;
                  ppiStack_60dc = (int **)local_74;
                  ppiStack_60e0 = (int **)local_4d8;
                  ppiStack_60e4 = local_6c8;
                  ppiStack_60e8 = param_1;
                  ppiStack_60ec = (int **)0x4e9475;
                  FUN_004e5000();
                }
                else {
                  ppiStack_60d4 = &local_e0;
                  ppiStack_60dc = (int **)local_74;
                  ppiStack_60e0 = (int **)local_4d8;
                  ppiStack_60e4 = local_6c8;
                  ppiStack_60e8 = param_1;
                  ppiStack_60ec = (int **)0x4e9098;
                  FUN_004e48a0();
                }
                ppiStack_60d4 = &local_e0;
                ppiStack_60d8 = (int **)local_68;
                ppiStack_60dc = (int **)local_74;
                ppiStack_60e4 = (int **)local_4d8;
                ppiStack_60e8 = (int **)local_3cc8;
                ppiStack_60ec = param_1;
                ppiStack_60e0 = (int **)iVar4;
                FUN_004e5200();
                ppiStack_60d4 = &local_e0;
                ppiStack_60e0 = local_6c8;
                ppiStack_60e4 = (int **)local_58;
                ppiStack_60e8 = (int **)local_3cc8;
                ppiStack_60ec = (int **)0x4e90f7;
                ppiStack_60dc = ppiVar11;
                ppiStack_60d8 = (int **)iVar4;
                FUN_004e58d0();
                iVar4 = iVar4 + 1;
                ppiVar11 = ppiVar11 + 0x28;
                local_58 = local_58 + 0x900;
              } while (iVar4 < local_b8);
            }
            ppiStack_60d4 = &local_e0;
            ppiStack_60d8 = local_38;
            ppiStack_60dc = local_6c8;
            ppiStack_60e0 = local_60c8;
            ppiStack_60e4 = (int **)local_4ec8;
            ppiStack_60e8 = (int **)0x4e914e;
            FUN_004e6160();
            local_1c = (int **)0x0;
            if (0 < local_b8) {
              local_4c = (int)local_4c0 + local_34;
              local_48 = local_60c8;
              local_40 = local_33c8;
              local_44 = local_4c;
              do {
                iVar4 = local_44;
                ppiStack_60d4 = &local_e0;
                ppiStack_60d8 = (int **)local_44;
                ppiStack_60dc = (int **)local_21c8;
                ppiStack_60e0 = local_48;
                ppiStack_60e4 = (int **)0x4e91c8;
                FUN_004e5d80();
                ppiStack_60d4 = &local_e0;
                ppiStack_60d8 = (int **)iVar4;
                ppiStack_60dc = (int **)local_2ac8;
                ppiStack_60e0 = (int **)local_21c8;
                ppiStack_60e4 = (int **)0x4e91e9;
                FUN_004e7030();
                pfVar6 = local_18c8;
                local_64 = local_4c;
                local_54 = local_2ac8;
                iVar4 = 0;
                do {
                  ppiStack_60d4 = &local_e0;
                  ppiStack_60d8 = (int **)local_64;
                  ppiStack_60dc = local_1c;
                  ppiStack_60e8 = (int **)local_54;
                  ppiStack_60ec = param_1;
                  ppiStack_60e4 = (int **)pfVar6;
                  ppiStack_60e0 = (int **)iVar4;
                  FUN_004e7720();
                  iVar4 = iVar4 + 1;
                  pfVar6 = pfVar6 + 0x12;
                  local_54 = local_54 + 0x48;
                } while (iVar4 < 0x20);
                local_50 = 0;
                local_18 = 0;
                do {
                  iVar8 = 0;
                  iVar4 = local_50;
                  do {
                    if ((local_18 % 2 != 0) && (local_14 = 2, iVar8 % 2 != 0)) {
                      *(float *)((int)local_18c8 + iVar4) = -*(float *)((int)local_18c8 + iVar4);
                    }
                    iVar8 = iVar8 + 1;
                    iVar4 = iVar4 + 0x48;
                  } while (iVar8 < 0x20);
                  local_18 = local_18 + 1;
                  local_50 = local_50 + 4;
                } while (local_18 < 0x12);
                iVar4 = 0;
                ppiStack_60d4 = (int **)local_40;
                do {
                  iVar8 = 0;
                  iVar9 = iVar4;
                  do {
                    iVar7 = iVar8 + 4;
                    puVar1 = (uint *)((int)local_18c8 + iVar9);
                    iVar9 = iVar9 + 0x48;
                    *(uint *)((int)local_190 + iVar8) = *puVar1;
                    iVar8 = iVar7;
                  } while (iVar7 != 0x80);
                  ppiStack_60d8 = local_1c;
                  ppiStack_60dc = local_190;
                  ppiStack_60e0 = param_1;
                  iVar4 = iVar4 + 4;
                  puVar12 = (ushort *)((int)ppiStack_60d4 + 0x40);
                  ppiStack_60e4 = (int **)0x4e932e;
                  FUN_004e4070();
                  ppiStack_60d4 = (int **)puVar12;
                } while (iVar4 != 0x48);
                local_1c = (int **)((int)local_1c + 1);
                local_4c = local_4c + 0xa0;
                local_48 = local_48 + 0x240;
                local_44 = local_44 + 0xa0;
                local_40 = local_40 + 0x240;
              } while ((int)local_1c < local_b8);
            }
            local_3c = 0;
            do {
              iVar4 = 0;
              do {
                iVar8 = 0;
                if (0 < local_b8) {
                  iVar9 = iVar4 + local_3c;
                  puVar12 = param_2;
                  do {
                    param_2 = puVar12 + 1;
                    iVar8 = iVar8 + 1;
                    *puVar12 = *(ushort *)((int)local_33c8 + iVar9);
                    iVar9 = iVar9 + 0x480;
                    puVar12 = param_2;
                  } while (iVar8 < local_b8);
                }
                iVar4 = iVar4 + 2;
              } while (iVar4 != 0x40);
              local_3c = local_3c + 0x40;
            } while (local_3c != 0x480);
            local_38 = local_38 + 0x12;
            local_34 = local_34 + 0x48;
            local_74 = local_74 + 1;
          } while (local_74 < local_ac);
        }
      }
      if (0 < local_104) {
        uStack_c0 = 0;
        local_c4 = local_60d0;
        fVar16 = (((float10)local_60cc /
                  (float10)*(double *)(&DAT_005bbc48 + local_100 * 8 + local_110 * 0x20)) *
                 (float10)*(int *)(&DAT_005bbc88 +
                                  local_104 * 4 + (local_10c - 1) * 0x3c + local_110 * 0xb4)) /
                 (float10)local_60d0;
        ppiStack_60d4 = (int **)0x4e8afb;
        FUN_00563a30();
        local_60 = (int)ROUND(fVar16);
        if (local_fc != 0) {
          local_60 = local_60 + 1;
        }
        local_60 = local_60 * local_60d0 - ((int)param_1[0x14cb] + (0xc - (int)local_b0));
        iVar4 = 0;
        if (0 < local_60) {
          do {
            ppiStack_60d8 = (int **)0x4e8b5d;
            ppiStack_60d4 = param_1 + 0x14c8;
            FUN_004e29d0();
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_60);
        }
      }
      return local_ac * 0x240;
    }
  }
  return 0;
}
