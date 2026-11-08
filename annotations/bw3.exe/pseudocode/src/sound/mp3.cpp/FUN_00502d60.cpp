// Name: FUN_00502d60
// Address: 00502d60
// Address Range: [[00502d60, 005039a4]]
// Convention: unknown
// Signature: int FUN_00502d60(int **param_1,undefined2 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00502d60(int **param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int **ppiVar9;
  ushort *puVar10;
  int **ppiVar11;
  int iVar12;
  int ***pppiVar13;
  byte *puVar14;
  byte bVar15;
  float10 fVar16;
  int **ppiStack_60cc;
  int **ppiStack_60c8;
  int **ppiStack_60c4;
  int **ppiStack_60c0;
  int **ppiStack_60bc;
  int **ppiStack_60b8;
  int **ppiStack_60b4;
  uint local_60b0;
  uint local_60ac;
  byte local_60a8 [4608];
  int *local_4ea8 [1152];
  ushort local_3ca8 [1152];
  byte local_33a8 [2304];
  byte local_2aa8 [2304];
  float local_21a8 [576];
  byte local_18a8 [2304];
  int *local_fa8 [192];
  int *local_ca8 [192];
  int *local_9a8 [192];
  int *local_6a8 [124];
  int local_4b8 [6];
  int *local_4a0 [76];
  byte local_370 [256];
  int *local_270 [64];
  int *local_170 [32];
  int local_f0;
  uint local_ec;
  int local_e4;
  int local_e0;
  int local_dc;
  int *local_c0 [2];
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_a4;
  uint uStack_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int **local_8c;
  int **local_88;
  int **local_84;
  int **local_80;
  int local_7c;
  int local_78;
  int **local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  byte *local_5c;
  float *local_58;
  int local_54;
  ushort *local_50;
  int local_4c;
  int **local_48;
  int local_44;
  ushort *local_40;
  int **local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int **local_20;
  int local_1c;
  int local_18;
  int **local_14;
  
  bVar15 = 0;
  local_c0[0] = &local_f0;
  ppiVar9 = param_1 + 0x14c8;
  local_b4 = 0xffffffff;
  local_b8 = 0;
  local_94 = 0;
  if (param_1[0x14cf] != (int *)0x0) {
    return 0;
  }
  ppiStack_60b4 = (int **)0xc;
  ppiStack_60b8 = (int **)0xfff;
  ppiStack_60c0 = (int **)0x502dc4;
  ppiStack_60bc = ppiVar9;
  iVar2 = FUN_004fd780();
  if (iVar2 == 0) {
    return 0;
  }
  local_24 = param_1[0x14cb];
  ppiStack_60b4 = local_c0;
  ppiStack_60bc = (int **)0x503939;
  ppiStack_60b8 = ppiVar9;
  FUN_004fdc50();
  ppiStack_60b4 = local_c0;
  ppiStack_60b8 = (int **)0x503949;
  FUN_004fd150();
  local_98 = local_b0;
  local_90 = (*local_c0[0] != 0) + 1;
  if (local_ec < 2) {
    if (local_ec == 1) {
      ppiStack_60b4 = local_c0;
      ppiStack_60b8 = local_270;
      local_60ac = 0x20;
      local_60b0 = 0x180;
      ppiStack_60c0 = (int **)0x502e02;
      ppiStack_60bc = ppiVar9;
      FUN_004fde40();
      ppiStack_60b4 = local_c0;
      ppiStack_60b8 = local_ca8;
      ppiStack_60bc = local_270;
      ppiStack_60c4 = (int **)0x502e23;
      ppiStack_60c0 = ppiVar9;
      FUN_004fdef0();
      local_28 = 0;
      local_8c = ppiVar9;
      do {
        ppiStack_60b4 = local_c0;
        ppiStack_60b8 = local_270;
        ppiStack_60bc = local_fa8;
        ppiStack_60c0 = local_8c;
        ppiStack_60c4 = (int **)0x502e5b;
        FUN_004fe1f0();
        ppiStack_60b4 = local_c0;
        ppiStack_60b8 = local_270;
        ppiStack_60bc = local_9a8;
        ppiStack_60c0 = local_fa8;
        ppiStack_60c4 = (int **)0x502e85;
        FUN_004fe850();
        local_88 = local_9a8;
        local_84 = local_ca8;
        local_60 = 0;
        do {
          iVar2 = 0;
          if (0 < local_b0) {
            piVar8 = (int *)((int)local_84 + local_60);
            pfVar7 = (float *)((int)local_88 + local_60);
            do {
              iVar5 = *piVar8;
              piVar8 = piVar8 + 0x60;
              iVar2 = iVar2 + 1;
              *pfVar7 = *pfVar7 * (float)*(double *)(&DAT_00601360 + iVar5 * 8);
              pfVar7 = pfVar7 + 0x60;
            } while (iVar2 < local_b0);
          }
          local_60 = local_60 + 4;
        } while (local_60 != 0x80);
        ppiVar9 = (int **)0x0;
        local_60 = 0x80;
        if (0 < local_98) {
          ppiVar11 = local_9a8;
          ppiStack_60b4 = (int **)local_3ca8;
          do {
            ppiStack_60c0 = param_1;
            puVar10 = (ushort *)((int)ppiStack_60b4 + 0x480);
            ppiStack_60c4 = (int **)0x502f46;
            ppiStack_60bc = ppiVar11;
            ppiStack_60b8 = ppiVar9;
            FUN_004feb90();
            ppiVar9 = (int **)((int)ppiVar9 + 1);
            ppiVar11 = ppiVar11 + 0x60;
            ppiStack_60b4 = (int **)puVar10;
          } while ((int)ppiVar9 < local_98);
        }
        local_28 = local_28 + 1;
      } while (local_28 < 0xc);
    }
  }
  else if (local_ec < 3) {
    local_60b0 = 0x480;
    ppiStack_60b4 = local_c0;
    ppiStack_60b8 = local_270;
    local_60ac = 8;
    ppiStack_60c0 = (int **)0x5030d2;
    ppiStack_60bc = ppiVar9;
    FUN_004fdd10();
    ppiStack_60b4 = local_c0;
    ppiStack_60b8 = local_ca8;
    ppiStack_60bc = local_270;
    ppiStack_60c0 = (int **)local_370;
    ppiStack_60c8 = (int **)0x5030fb;
    ppiStack_60c4 = ppiVar9;
    FUN_004fdf80();
    local_9c = 0;
    local_80 = ppiVar9;
    do {
      ppiStack_60b4 = local_c0;
      ppiStack_60b8 = local_270;
      ppiStack_60bc = local_fa8;
      ppiStack_60c0 = local_80;
      ppiStack_60c4 = (int **)0x503133;
      FUN_004fe2f0();
      ppiStack_60b4 = local_c0;
      ppiStack_60b8 = local_9a8;
      ppiStack_60bc = local_270;
      ppiStack_60c0 = local_fa8;
      ppiStack_60c4 = (int **)0x50315b;
      FUN_004fe580();
      ppiStack_60b4 = (int **)(local_9c >> 2);
      ppiStack_60b8 = local_c0;
      ppiStack_60bc = local_ca8;
      ppiStack_60c0 = local_9a8;
      ppiStack_60c4 = (int **)0x503186;
      FUN_004fe990();
      if (param_2 != (ushort *)0x0) {
        local_30 = 0;
        local_34 = 0;
        do {
          ppiVar9 = (int **)0x0;
          if (0 < local_98) {
            local_14 = (int **)((int)local_9a8 + local_34);
            iVar2 = (int)local_3ca8 + local_30;
            do {
              ppiStack_60bc = local_14;
              ppiStack_60c0 = param_1;
              ppiStack_60c4 = (int **)0x503201;
              ppiStack_60b8 = ppiVar9;
              ppiStack_60b4 = (int **)iVar2;
              FUN_004feb90();
              iVar2 = iVar2 + 0x480;
              ppiVar9 = (int **)((int)ppiVar9 + 1);
              local_14 = local_14 + 0x60;
            } while ((int)ppiVar9 < local_98);
          }
          local_30 = local_30 + 0x40;
          local_34 = local_34 + 0x80;
        } while (local_30 != 0xc0);
        local_2c = 0;
        local_9c = 0;
        do {
          iVar2 = 0;
          do {
            iVar5 = 0;
            if (0 < local_98) {
              iVar12 = iVar2 + local_2c;
              puVar10 = param_2;
              do {
                param_2 = puVar10 + 1;
                iVar5 = iVar5 + 1;
                *puVar10 = *(ushort *)((int)local_3ca8 + iVar12);
                iVar12 = iVar12 + 0x480;
                puVar10 = param_2;
              } while (iVar5 < local_98);
            }
            iVar2 = iVar2 + 2;
          } while (iVar2 != 0x40);
          local_2c = local_2c + 0x40;
        } while (local_2c != 0xc0);
      }
      local_9c = local_9c + 1;
    } while (local_9c < 0xc);
  }
  else if (local_ec == 3) {
    local_60ac = 8;
    if (*local_c0[0] == 0) {
      local_60b0 = 0x240;
    }
    else {
      local_60b0 = 0x480;
    }
    ppiStack_60b4 = local_c0;
    ppiStack_60b8 = (int **)local_4b8;
    ppiStack_60bc = param_1 + 0x14c8;
    ppiStack_60c0 = param_1;
    ppiStack_60c4 = (int **)0x503315;
    local_74 = ppiStack_60bc;
    FUN_004fee40();
    ppiVar9 = local_c0;
    pppiVar13 = &ppiStack_60cc;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pppiVar13 = (int **)*ppiVar9;
      ppiVar9 = ppiVar9 + (uint)bVar15 * -2 + 1;
      pppiVar13 = pppiVar13 + (uint)bVar15 * -2 + 1;
    }
    iVar2 = FUN_00502190();
    ppiVar9 = local_74;
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      ppiStack_60b4 = (int **)0x8;
      ppiStack_60b8 = (int **)0x8;
      ppiStack_60bc = ppiVar9;
      ppiStack_60c0 = (int **)0x50334a;
      ppiStack_60b8 = (int **)FUN_004fd5e0();
      ppiStack_60bc = param_1;
      ppiStack_60c0 = (int **)0x503358;
      FUN_004fd900();
    }
    ppiStack_60b4 = param_1;
    ppiStack_60b8 = (int **)0x503369;
    uVar3 = FUN_004fd800();
    ppiStack_60b4 = param_1;
    ppiStack_60b8 = (int **)0x503377;
    uVar4 = FUN_004fd800();
    uVar3 = uVar3 >> 3;
    if (uVar4 % local_60ac != 0) {
      ppiStack_60b4 = (int **)(local_60ac - uVar4 % local_60ac);
      ppiStack_60b8 = param_1;
      uVar3 = uVar3 + 1;
      ppiStack_60bc = (int **)0x503395;
      FUN_004fd810();
    }
    local_78 = (int)param_1[0x14d3] + (-local_4b8[0] - uVar3);
    if (0x1000 < uVar3) {
      ppiStack_60b4 = (int **)0x1000;
      ppiStack_60b8 = param_1;
      param_1[0x14d3] = param_1[0x14d3] + -0x400;
      ppiStack_60bc = (int **)0x5033db;
      FUN_004fd9c0();
    }
    ppiVar9 = local_c0;
    pppiVar13 = &ppiStack_60cc;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pppiVar13 = (int **)*ppiVar9;
      ppiVar9 = ppiVar9 + (uint)bVar15 * -2 + 1;
      pppiVar13 = pppiVar13 + (uint)bVar15 * -2 + 1;
    }
    iVar2 = FUN_00502190();
    param_1[0x14d3] = (int *)((int)param_1[0x14d3] + iVar2);
    if (local_78 < 0) {
      ppiStack_60b4 = (int **)(local_94 + -1);
      ppiStack_60b8 = (int **)"Not enough main data to decode frame %d.";
      _DAT_01d71de0 = "..\\sound\\mp3.cpp";
      _DAT_01d71de4 = 0x1029;
      ppiStack_60bc = (int **)0x50346f;
      FUN_004e4330();
    }
    while (iVar2 = local_78, 0 < local_78) {
      ppiStack_60b4 = (int **)0x8;
      ppiStack_60b8 = param_1;
      ppiStack_60bc = (int **)0x50342b;
      FUN_004fd810();
      local_78 = iVar2 + -1;
    }
    if ((param_2 != (ushort *)0x0) && (local_7c = 0, 0 < local_90)) {
      local_3c = local_4a0;
      local_38 = 0;
      do {
        iVar2 = 0;
        if (0 < local_98) {
          local_5c = local_60a8;
          ppiVar9 = (int **)((int)local_4a0 + local_38);
          do {
            ppiStack_60b4 = param_1;
            ppiStack_60b8 = (int **)0x5034e1;
            local_70 = FUN_004fd800();
            ppiStack_60b8 = (int **)iVar2;
            if (*local_c0[0] == 0) {
              ppiStack_60b4 = local_c0;
              ppiStack_60bc = (int **)local_7c;
              ppiStack_60c0 = (int **)local_4b8;
              ppiStack_60c4 = local_6a8;
              ppiStack_60c8 = param_1;
              ppiStack_60cc = (int **)0x50391c;
              FUN_004ffb20();
            }
            else {
              ppiStack_60b4 = local_c0;
              ppiStack_60bc = (int **)local_7c;
              ppiStack_60c0 = (int **)local_4b8;
              ppiStack_60c4 = local_6a8;
              ppiStack_60c8 = param_1;
              ppiStack_60cc = (int **)0x503525;
              FUN_004ff3c0();
            }
            ppiStack_60b4 = local_c0;
            ppiStack_60b8 = (int **)local_70;
            ppiStack_60bc = (int **)local_7c;
            ppiStack_60c4 = (int **)local_4b8;
            ppiStack_60c8 = (int **)local_18a8;
            ppiStack_60cc = param_1;
            ppiStack_60c0 = (int **)iVar2;
            FUN_004ffd20();
            ppiStack_60b4 = local_c0;
            ppiStack_60c0 = local_6a8;
            ppiStack_60c4 = (int **)local_5c;
            ppiStack_60c8 = (int **)local_18a8;
            ppiStack_60cc = (int **)0x503584;
            ppiStack_60bc = ppiVar9;
            ppiStack_60b8 = (int **)iVar2;
            FUN_005003f0();
            iVar2 = iVar2 + 1;
            ppiVar9 = ppiVar9 + 0x28;
            local_5c = local_5c + 0x900;
          } while (iVar2 < local_98);
        }
        ppiStack_60b4 = local_c0;
        ppiStack_60b8 = local_3c;
        ppiStack_60bc = local_6a8;
        ppiStack_60c0 = local_4ea8;
        ppiStack_60c4 = (int **)local_60a8;
        ppiStack_60c8 = (int **)0x5035db;
        FUN_00500c80();
        local_20 = (int **)0x0;
        if (0 < local_98) {
          local_4c = (int)local_4a0 + local_38;
          local_48 = local_4ea8;
          local_40 = local_3ca8;
          local_44 = local_4c;
          do {
            iVar2 = local_44;
            ppiStack_60b4 = local_c0;
            ppiStack_60b8 = (int **)local_44;
            ppiStack_60bc = (int **)local_33a8;
            ppiStack_60c0 = local_48;
            ppiStack_60c4 = (int **)0x503658;
            FUN_005008a0();
            ppiStack_60b4 = local_c0;
            ppiStack_60b8 = (int **)iVar2;
            ppiStack_60bc = (int **)local_2aa8;
            ppiStack_60c0 = (int **)local_33a8;
            ppiStack_60c4 = (int **)0x503679;
            FUN_005019f0();
            puVar14 = local_2aa8;
            local_6c = local_4c;
            local_58 = local_21a8;
            iVar2 = 0;
            do {
              ppiStack_60b4 = local_c0;
              ppiStack_60b8 = (int **)local_6c;
              ppiStack_60bc = local_20;
              ppiStack_60c4 = (int **)local_58;
              ppiStack_60cc = param_1;
              ppiStack_60c8 = (int **)puVar14;
              ppiStack_60c0 = (int **)iVar2;
              FUN_005020e0();
              iVar2 = iVar2 + 1;
              puVar14 = puVar14 + 0x48;
              local_58 = local_58 + 0x12;
            } while (iVar2 < 0x20);
            local_54 = 0;
            local_1c = 0;
            do {
              iVar5 = 0;
              iVar2 = local_54;
              do {
                if ((local_1c % 2 != 0) && (local_64 = 2, iVar5 % 2 != 0)) {
                  *(float *)((int)local_21a8 + iVar2) = -*(float *)((int)local_21a8 + iVar2);
                }
                iVar5 = iVar5 + 1;
                iVar2 = iVar2 + 0x48;
              } while (iVar5 < 0x20);
              local_1c = local_1c + 1;
              local_54 = local_54 + 4;
            } while (local_1c < 0x12);
            iVar2 = 0;
            local_50 = local_40;
            do {
              puVar10 = local_50;
              iVar5 = 0;
              iVar12 = iVar2;
              do {
                iVar6 = iVar5 + 4;
                puVar1 = (uint *)((int)local_21a8 + iVar12);
                iVar12 = iVar12 + 0x48;
                *(uint *)((int)local_170 + iVar5) = *puVar1;
                iVar5 = iVar6;
              } while (iVar6 != 0x80);
              ppiStack_60b4 = (int **)local_50;
              ppiStack_60b8 = local_20;
              ppiStack_60bc = local_170;
              ppiStack_60c0 = param_1;
              ppiStack_60c4 = (int **)0x5037c7;
              FUN_004feb90();
              iVar2 = iVar2 + 4;
              local_50 = puVar10 + 0x20;
            } while (iVar2 != 0x48);
            local_20 = (int **)((int)local_20 + 1);
            local_4c = local_4c + 0xa0;
            local_48 = local_48 + 0x240;
            local_44 = local_44 + 0xa0;
            local_40 = local_40 + 0x240;
          } while ((int)local_20 < local_98);
        }
        local_18 = 0;
        do {
          iVar2 = 0;
          do {
            iVar5 = 0;
            if (0 < local_98) {
              iVar12 = iVar2 + local_18;
              puVar10 = param_2;
              do {
                param_2 = puVar10 + 1;
                iVar5 = iVar5 + 1;
                *puVar10 = *(ushort *)((int)local_3ca8 + iVar12);
                iVar12 = iVar12 + 0x480;
                puVar10 = param_2;
              } while (iVar5 < local_98);
            }
            iVar2 = iVar2 + 2;
          } while (iVar2 != 0x40);
          local_18 = local_18 + 0x40;
        } while (local_18 != 0x480);
        local_3c = local_3c + 0x12;
        local_38 = local_38 + 0x48;
        local_7c = local_7c + 1;
      } while (local_7c < local_90);
    }
  }
  if (0 < local_e4) {
    uStack_a0 = 0;
    local_a4 = local_60ac;
    fVar16 = (((float10)local_60b0 /
              (float10)*(double *)(&DAT_006011b8 + local_f0 * 0x20 + local_e0 * 8)) *
             (float10)*(int *)(&DAT_006011f8 +
                              local_e4 * 4 + (local_ec - 1) * 0x3c + local_f0 * 0xb4)) /
             (float10)local_60ac;
    ppiStack_60b4 = (int **)0x50301c;
    FUN_005a3120();
    local_68 = (int)ROUND(fVar16);
    if (local_dc != 0) {
      local_68 = local_68 + 1;
    }
    local_68 = local_68 * local_60ac - ((int)param_1[0x14cb] + (0xc - (int)local_24));
    iVar2 = 0;
    if (0 < local_68) {
      do {
        ppiStack_60b8 = (int **)0x50307f;
        ppiStack_60b4 = param_1 + 0x14c8;
        FUN_004fd4f0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_68);
    }
  }
  return local_90 * 0x240;
}
