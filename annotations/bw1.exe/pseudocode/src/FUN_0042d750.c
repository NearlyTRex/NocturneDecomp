// Name: FUN_0042d750
// Address: 0042d750
// Address Range: [[0042d750, 0042e11c]]
// Convention: unknown
// Signature: void FUN_0042d750(int param_1,uint *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d750(int param_1,uint *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  char *pcVar12;
  int iVar13;
  byte bVar14;
  float afStackY_10d4 [1003];
  byte *puVar15;
  float local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  uint local_c8;
  float fStack_c4;
  byte local_bc [12];
  float local_b0;
  float afStack_ac [4];
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  char local_80 [4];
  float afStack_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  int local_5c;
  uint *local_58;
  uint *local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  int local_44;
  float fStack_40;
  float local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  float *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar14 = 0;
  DAT_007c6380 = 0;
  if (((((param_2[2] & 0x7fffffff) == 0) && ((*param_2 & 0x7fffffff) == 0)) &&
      ((float)param_2[1] <= 0.0)) &&
     ((*(int *)(param_1 + 0xdc) == 0 && (*(float *)(param_1 + 0x24) == *(float *)(param_1 + 0x2504))
      ))) {
    FUN_00559220(0x01E82168);
    *(uint *)(param_1 + 0x2520) = 0;
    *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
    *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
    return;
  }
  FUN_00408ac0(param_1,param_2);
  local_68 = local_b0;
  afStack_7c[(uint)bVar14 * -2 + 6] = afStack_ac[(uint)bVar14 * -2];
  afStack_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
       afStack_ac[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xdc) = 0;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + local_68;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + local_64;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + local_60;
    *(uint *)(param_1 + 0x2520) = 0;
    *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
    *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
    return;
  }
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    pcVar8 = (char *)FUN_00524770(param_1 + 0x158);
    uVar9 = 0xffffffff;
    pcVar12 = pcVar8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
    } while (cVar1 != '\0');
    iVar10 = ~uVar9 - 0xc;
    local_80[0] = "noCollision"[0];
    local_80[1] = "noCollision"[1];
    local_80[2] = "noCollision"[2];
    local_80[3] = "noCollision"[3];
    afStack_7c[(uint)bVar14 * -2] = *(float *)("noCollision" + (uint)bVar14 * -8 + 4);
    afStack_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    iVar13 = 0;
    local_20 = iVar10;
    if (-1 < iVar10) {
      do {
        iVar10 = FUN_005c1210(pcVar8,local_80,0xb);
        if (iVar10 == 0) {
          *(uint *)(param_1 + 0x2520) = 0;
          *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
          *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
          return;
        }
        iVar13 = iVar13 + 1;
        pcVar8 = pcVar8 + 1;
      } while (iVar13 <= local_20);
    }
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    local_68 = local_68 + *(float *)(param_1 + 0xe0);
    local_60 = local_60 + *(float *)(param_1 + 0xe8);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x24);
    *(uint *)(param_1 + 0xe8) = 0;
    *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe4);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0xf0) + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0x38);
    *(uint *)(param_1 + 0xf4) = 0;
    *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf4);
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xf0);
    FUN_004088b0(param_1);
  }
  local_24 = param_1 + 0x2e68;
  iVar10 = 0;
  local_54 = (uint *)(param_1 + 0x2f1c);
  local_58 = (uint *)(param_1 + 0x2e8c);
  do {
    puVar6 = (uint *)(iVar10 * 0x24 + local_24);
    puVar7 = local_54;
    do {
      puVar6[2] = 0;
      puVar6[1] = puVar6[2];
      *puVar6 = puVar6[1];
      puVar7[2] = 0;
      puVar6 = puVar6 + 3;
      puVar7[1] = puVar7[2];
      *puVar7 = puVar7[1];
      puVar7 = puVar7 + 3;
    } while (puVar6 != local_58);
    iVar10 = iVar10 + 1;
    local_54 = local_54 + 9;
    local_58 = local_58 + 9;
  } while (iVar10 < 5);
  pfVar11 = (float *)(param_1 + 0x24 + (uint)bVar14 * -8);
  local_c8 = *(uint *)(param_1 + 0x20);
  afStack_ac[(uint)bVar14 * -2 + -6] = *pfVar11;
  iVar10 = 0x01E82168;
  iVar13 = param_1;
  *(float *)(&stack0xffffff40 + (uint)bVar14 * -8 + (uint)bVar14 * -8) =
       pfVar11[(uint)bVar14 * -2 + 1];
  FUN_00559250(iVar10,iVar13);
  local_48 = (float)param_2[1];
  local_28 = (float *)(param_1 + 0x20);
  local_5c = param_1 + 0x2f1c;
  local_44 = param_1 + 0x2e68;
  local_30 = (uint *)(param_1 + 0x2e74);
  local_34 = (uint *)(param_1 + 0x2e80);
  local_2c = (uint *)(param_1 + 0x2f28);
  local_38 = (uint *)(param_1 + 0x2f34);
  local_1c = 0;
  do {
    local_3c = *(float *)(param_1 + 0x3000) * *(float *)(param_1 + 0x27b8);
    local_64 = 0.0;
    if (local_3c < *(float *)(param_1 + 0x2ffc) * *(float *)(param_1 + 0x27b8)) {
      local_3c = *(float *)(param_1 + 0x2490);
    }
    fVar2 = *(float *)(param_1 + 0x2ffc) * *(float *)(param_1 + 0x27b8);
    if (local_3c < fVar2) {
      local_3c = *(float *)(param_1 + 0x27b8) * (float)_DAT_005d590f + fVar2;
    }
    local_f8 = (float)FUN_00558450(0x01E82168,*(uint *)(param_1 + 0x20),
                                   *(uint *)(param_1 + 0x28),local_68,local_60,
                                   *(float *)(param_1 + 0x2ff0) * *(float *)(param_1 + 0x27b8),
                                   *(float *)(param_1 + 0x2ffc) * *(float *)(param_1 + 0x27b8) +
                                   *(float *)(param_1 + 0x24),*(float *)(param_1 + 0x24) + local_3c)
    ;
    pfVar11 = local_28;
    local_18 = local_f8;
    if (DAT_007c6380 == 0) {
      DAT_007c6380 = *(int *)(0x01E82168 + 0x14d144);
    }
    puVar7 = (uint *)(local_1c * 0x24 + local_44);
    if (puVar7 != (uint *)&DAT_0152c2a8) {
      *puVar7 = _DAT_0152c2a8;
      puVar7[1] = _DAT_0152c2ac;
      puVar7[2] = _DAT_0152c2b0;
    }
    if (local_30 != (uint *)&DAT_0152c2b4) {
      *local_30 = _DAT_0152c2b4;
      local_30[1] = _DAT_0152c2b8;
      local_30[2] = _DAT_0152c2bc;
    }
    if (local_34 != (uint *)&DAT_0152c2c0) {
      *local_34 = _DAT_0152c2c0;
      local_34[1] = _DAT_0152c2c4;
      local_34[2] = _DAT_0152c2c8;
    }
    iVar10 = 0x01E82168;
    if (0.0 <= local_f8) {
      if (1.0 < local_f8) {
        local_f8 = 1.0;
      }
      local_e0 = local_68 * local_f8;
      local_dc = local_64 * local_f8;
      local_d8 = local_60 * local_f8;
      local_98 = local_68 * local_f8;
      afStack_ac[(uint)bVar14 * -2 + 6] = *(float *)((int)&stack0xffffff24 + (uint)bVar14 * -8);
      afStack_ac[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           *(float *)((int)&stack0xffffff28 + (uint)bVar14 * -8 + (uint)bVar14 * -8);
      *pfVar11 = *pfVar11 + local_98;
      pfVar11[1] = pfVar11[1] + local_94;
      pfVar11[2] = pfVar11[2] + local_90;
      puVar15 = local_bc;
      puVar7 = (uint *)(iVar10 + 0x14d12c + (uint)bVar14 * -8);
      local_d4 = *(float *)(iVar10 + 0x14d128);
      *(uint *)((int)&stack0xffffff30 + (uint)bVar14 * -8) = *puVar7;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar14 * -8 + (uint)bVar14 * -8) =
           puVar7[(uint)bVar14 * -2 + 1];
      local_18 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                                  (param_1,*(uint *)(param_1 + 0x2fec),puVar15);
      bVar5 = false;
      puVar7 = (uint *)(local_1c * 0x24 + local_5c);
      *(float *)(param_1 + 0x2504) = local_18;
      if (puVar7 != (uint *)&DAT_0152c2a8) {
        *puVar7 = _DAT_0152c2a8;
        puVar7[1] = _DAT_0152c2ac;
        puVar7[2] = _DAT_0152c2b0;
      }
      if (local_2c != (uint *)&DAT_0152c2b4) {
        *local_2c = _DAT_0152c2b4;
        local_2c[1] = _DAT_0152c2b8;
        local_2c[2] = _DAT_0152c2bc;
      }
      if (local_38 != (uint *)&DAT_0152c2c0) {
        *local_38 = _DAT_0152c2c0;
        local_38[1] = _DAT_0152c2c4;
        local_38[2] = _DAT_0152c2c8;
      }
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504)) {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2504);
        fStack_c4 = *(float *)(param_1 + 0x24);
      }
      if ((float)_DAT_005d591f < local_f8) break;
      fVar2 = SQRT(fStack_cc * fStack_cc + local_d4 * local_d4);
      fStack_d0 = 0.0;
      if (0.0 < fVar2) {
        fStack_40 = 1.0 / fVar2;
        local_d4 = local_d4 * fStack_40;
        fStack_d0 = fStack_40 * 0.0;
        fStack_cc = fStack_cc * fStack_40;
      }
      fStack_4c = (float)_DAT_005d591f - local_f8;
      fVar2 = local_68 * fStack_4c;
      fVar3 = local_64 * fStack_4c;
      local_64 = fVar3;
      local_68 = fVar2;
      local_60 = local_60 * fStack_4c;
      fVar4 = fStack_cc * local_60 + local_d4 * fVar2 + fStack_d0 * fVar3;
      if (0.0 <= fVar4) break;
      fVar4 = fVar4 * (float)_DAT_005d5917;
      fStack_8c = local_d4 * fVar4;
      fStack_88 = fStack_d0 * fVar4;
      fStack_84 = fStack_cc * fVar4;
      afStack_ac[2] = local_d4 * fVar4;
      afStack_ac[(uint)bVar14 * -2 + 3] = afStack_ac[(uint)bVar14 * -2 + 9];
      afStack_ac[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           afStack_ac[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
      local_68 = fVar2 - afStack_ac[2];
      local_64 = fVar3 - afStack_ac[3];
      local_60 = local_60 - fStack_9c;
    }
    else {
      local_50 = local_f8 + (float)_DAT_005d5927;
      local_e8 = *(float *)(0x01E82168 + 0x14d12c) * local_50;
      local_e4 = *(float *)(0x01E82168 + 0x14d130) * local_50;
      afStack_7c[2] = *(float *)(0x01E82168 + 0x14d128) * local_50;
      afStack_7c[(uint)bVar14 * -2 + 3] = *(float *)((int)&stack0xffffff18 + (uint)bVar14 * -8);
      afStack_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           *(float *)((int)&stack0xffffff1c + (uint)bVar14 * -8 + (uint)bVar14 * -8);
      bVar5 = true;
      *pfVar11 = *pfVar11 - afStack_7c[2];
      pfVar11[1] = pfVar11[1] - afStack_7c[3];
      pfVar11[2] = pfVar11[2] - local_6c;
    }
    local_30 = local_30 + 9;
    local_34 = local_34 + 9;
    local_2c = local_2c + 9;
    local_38 = local_38 + 9;
    local_1c = local_1c + 1;
  } while (local_1c < 3);
  if (bVar5) {
    local_18 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                                (param_1,*(uint *)(param_1 + 0x2fec),0);
    *(float *)(param_1 + 0x2504) = local_18;
  }
  fVar2 = *(float *)(param_1 + 0x24) + local_48;
  *(float *)(param_1 + 0x24) = fVar2;
  if (*(float *)(param_1 + 0x2504) <= fVar2) {
    if ((*(int *)(param_1 + 0x2500) != 0) &&
       (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005d590f)) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2504);
      fStack_c4 = *(float *)(param_1 + 0x24);
    }
  }
  else {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2504);
  }
  *(uint *)(param_1 + 0x2520) = 0;
  *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
  *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
  iVar10 = 0x01E82168;
  *(float *)(param_1 + 0x251c) =
       (*(float *)(param_1 + 0x24) - fStack_c4) / *(float *)(0x01CCF390 + 0x294);
  FUN_00559220(iVar10);
  return;
}
