// Name: FUN_0042c230
// Address: 0042c230
// Address Range: [[0042c230, 0042cce3]]
// Convention: unknown
// Signature: void FUN_0042c230(int param_1,uint *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c230(int param_1,uint *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  char *pcVar11;
  int iVar12;
  byte bVar13;
  float afStackY_10e4 [1003];
  float *pfVar14;
  float local_104;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  uint local_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float afStack_bc [4];
  float local_ac;
  char local_a8 [4];
  float afStack_a4 [4];
  float local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float local_80 [5];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  int local_5c;
  int local_58;
  float fStack_54;
  uint *local_50;
  uint *local_4c;
  int local_48;
  float fStack_44;
  float local_40;
  int local_3c;
  int local_38;
  float local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  float *local_20;
  float fStack_1c;
  float local_14;
  
  bVar13 = 0;
  DAT_007e2cf0 = 0;
  if (((((param_2[2] & 0x7fffffff) == 0) && ((*param_2 & 0x7fffffff) == 0)) &&
      ((float)param_2[1] <= 0.0)) &&
     ((*(int *)(param_1 + 0xdc) == 0 && (*(float *)(param_1 + 0x24) == *(float *)(param_1 + 0x2504))
      ))) {
    FUN_0053ebe0(0x01ED78C8);
    *(uint *)(param_1 + 0x2520) = 0;
    *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
    *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
    return;
  }
  FUN_00408b00(param_1,param_2);
  local_fc = local_80[2];
  *(float *)((int)&stack0xffffff08 + (uint)bVar13 * -8) = local_80[(uint)bVar13 * -2 + 3];
  *(float *)((int)&stack0xffffff0c + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
       local_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xdc) = 0;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + local_80[2];
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + local_f8;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + local_f4;
    *(uint *)(param_1 + 0x2520) = 0;
    *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
    *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
    return;
  }
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    pcVar6 = (char *)FUN_004fc070(param_1 + 0x158);
    uVar7 = 0xffffffff;
    pcVar11 = pcVar6;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    iVar8 = ~uVar7 - 0xc;
    local_a8[0] = "noCollision"[0];
    local_a8[1] = "noCollision"[1];
    local_a8[2] = "noCollision"[2];
    local_a8[3] = "noCollision"[3];
    afStack_a4[(uint)bVar13 * -2] = *(float *)("noCollision" + (uint)bVar13 * -8 + 4);
    afStack_a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    iVar12 = 0;
    local_58 = iVar8;
    if (-1 < iVar8) {
      do {
        iVar8 = FUN_005a3f90(pcVar6,local_a8,0xb);
        if (iVar8 == 0) {
          *(uint *)(param_1 + 0x2520) = 0;
          *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
          *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
          return;
        }
        iVar12 = iVar12 + 1;
        pcVar6 = pcVar6 + 1;
      } while (iVar12 <= local_58);
    }
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    local_fc = local_80[2] + *(float *)(param_1 + 0xe0);
    local_f4 = local_f4 + *(float *)(param_1 + 0xe8);
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
    FUN_004088f0(param_1);
  }
  local_5c = param_1 + 0x30d0;
  iVar8 = 0;
  local_50 = (uint *)(param_1 + 0x3184);
  local_4c = (uint *)(param_1 + 0x30f4);
  do {
    puVar5 = (uint *)(iVar8 * 0x24 + local_5c);
    puVar9 = local_50;
    do {
      puVar5[2] = 0;
      puVar5[1] = puVar5[2];
      *puVar5 = puVar5[1];
      puVar9[2] = 0;
      puVar5 = puVar5 + 3;
      puVar9[1] = puVar9[2];
      *puVar9 = puVar9[1];
      puVar9 = puVar9 + 3;
    } while (puVar5 != local_4c);
    iVar8 = iVar8 + 1;
    local_50 = local_50 + 9;
    local_4c = local_4c + 9;
  } while (iVar8 < 5);
  puVar9 = (uint *)(param_1 + 0x24 + (uint)bVar13 * -8);
  local_e4 = *(uint *)(param_1 + 0x20);
  (&stack0xffffff20)[(uint)bVar13 * 0xfffffffe] = (float)*puVar9;
  iVar8 = 0x01ED78C8;
  iVar12 = param_1;
  afStack_bc[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 0xfffffff8] =
       (float)puVar9[(uint)bVar13 * -2 + 1];
  FUN_0053ec10(iVar8,iVar12);
  local_60 = (float)param_2[1];
  local_20 = (float *)(param_1 + 0x20);
  local_3c = param_1 + 0x3184;
  local_48 = param_1 + 0x30d0;
  local_28 = (uint *)(param_1 + 0x30dc);
  local_30 = (uint *)(param_1 + 0x30e8);
  local_24 = (uint *)(param_1 + 0x3190);
  local_2c = (uint *)(param_1 + 0x319c);
  local_38 = 0;
  do {
    local_34 = *(float *)(param_1 + 0x3280) * *(float *)(param_1 + 0x27b8);
    local_f8 = 0.0;
    if (local_34 < *(float *)(param_1 + 0x327c) * *(float *)(param_1 + 0x27b8)) {
      local_34 = *(float *)(param_1 + 0x2490);
    }
    fVar2 = *(float *)(param_1 + 0x327c) * *(float *)(param_1 + 0x27b8);
    if (local_34 < fVar2) {
      local_34 = *(float *)(param_1 + 0x27b8) * (float)_DAT_005b822e + fVar2;
    }
    local_104 = (float)FUN_0053de10(0x01ED78C8,*(uint *)(param_1 + 0x20),
                                    *(uint *)(param_1 + 0x28),local_fc,local_f4,
                                    *(float *)(param_1 + 0x3270) * *(float *)(param_1 + 0x27b8),
                                    *(float *)(param_1 + 0x327c) * *(float *)(param_1 + 0x27b8) +
                                    *(float *)(param_1 + 0x24),*(float *)(param_1 + 0x24) + local_34
                                   );
    pfVar14 = local_20;
    local_14 = local_104;
    if (DAT_007e2cf0 == 0) {
      DAT_007e2cf0 = *(int *)(0x01ED78C8 + 0x14d144);
    }
    puVar9 = (uint *)(local_38 * 0x24 + local_48);
    if (puVar9 != (uint *)&DAT_01548b58) {
      *puVar9 = _DAT_01548b58;
      puVar9[1] = _DAT_01548b5c;
      puVar9[2] = _DAT_01548b60;
    }
    if (local_28 != (uint *)&DAT_01548b64) {
      *local_28 = _DAT_01548b64;
      local_28[1] = _DAT_01548b68;
      local_28[2] = _DAT_01548b6c;
    }
    if (local_30 != (uint *)&DAT_01548b70) {
      *local_30 = _DAT_01548b70;
      local_30[1] = _DAT_01548b74;
      local_30[2] = _DAT_01548b78;
    }
    iVar8 = 0x01ED78C8;
    if (0.0 <= local_104) {
      if (1.0 < local_104) {
        local_104 = 1.0;
      }
      afStack_bc[2] = local_fc * local_104;
      afStack_bc[3] = local_f8 * local_104;
      local_ac = local_f4 * local_104;
      local_6c = local_fc * local_104;
      local_80[(uint)bVar13 * -2 + 6] = afStack_bc[(uint)bVar13 * -2 + 3];
      local_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      *pfVar14 = *pfVar14 + local_6c;
      pfVar14[1] = pfVar14[1] + local_68;
      pfVar14[2] = pfVar14[2] + local_64;
      pfVar14 = &stack0xffffff10;
      pfVar10 = (float *)(iVar8 + 0x14d12c + (uint)bVar13 * -8);
      local_c0 = *(float *)(iVar8 + 0x14d128);
      afStack_bc[(uint)bVar13 * -2] = *pfVar10;
      afStack_a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + -5] = pfVar10[(uint)bVar13 * -2 + 1];
      local_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                                  (param_1,*(uint *)(param_1 + 0x326c),pfVar14);
      bVar4 = false;
      puVar9 = (uint *)(local_38 * 0x24 + local_3c);
      *(float *)(param_1 + 0x2504) = local_14;
      if (puVar9 != (uint *)&DAT_01548b58) {
        *puVar9 = _DAT_01548b58;
        puVar9[1] = _DAT_01548b5c;
        puVar9[2] = _DAT_01548b60;
      }
      if (local_24 != (uint *)&DAT_01548b64) {
        *local_24 = _DAT_01548b64;
        local_24[1] = _DAT_01548b68;
        local_24[2] = _DAT_01548b6c;
      }
      if (local_2c != (uint *)&DAT_01548b70) {
        *local_2c = _DAT_01548b70;
        local_2c[1] = _DAT_01548b74;
        local_2c[2] = _DAT_01548b78;
      }
      if (fStack_e0 < *(float *)(param_1 + 0x2504)) {
        if (afStack_a4 + 5 != &stack0xffffff10) {
          fStack_90 = local_f0;
          fStack_8c = fStack_ec;
          fStack_88 = fStack_e8;
        }
        fStack_54 = SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c);
        if (fStack_54 <= 0.0) {
          fStack_8c = 0.0;
          fStack_90 = 0.0;
          fStack_88 = 0.0;
        }
        else {
          fVar2 = 1.0 / fStack_54;
          fStack_90 = fStack_90 * fVar2;
          fStack_8c = fStack_8c * fVar2;
          fStack_88 = fStack_88 * fVar2;
        }
        if (fStack_8c < (float)_DAT_005b823e) {
          *(uint *)(param_1 + 0x20) = local_e4;
          *(float *)(param_1 + 0x24) = fStack_e0;
          *(uint *)(param_1 + 0x28) = uStack_dc;
          if (&local_c0 == &stack0xffffff10) {
            return;
          }
          return;
        }
      }
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504)) {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2504);
        fStack_e0 = *(float *)(param_1 + 0x24);
      }
      if ((float)_DAT_005b8246 < local_104) break;
      fVar2 = SQRT(afStack_bc[1] * afStack_bc[1] + local_c0 * local_c0);
      afStack_bc[0] = 0.0;
      if (0.0 < fVar2) {
        fStack_1c = 1.0 / fVar2;
        local_c0 = local_c0 * fStack_1c;
        afStack_bc[0] = fStack_1c * 0.0;
        afStack_bc[1] = afStack_bc[1] * fStack_1c;
      }
      local_104 = (float)_DAT_005b8246 - local_104;
      fStack_44 = local_104;
      fVar2 = local_f8 * local_104;
      local_f8 = fVar2;
      local_f4 = local_f4 * local_104;
      fVar3 = afStack_bc[1] * local_f4 + local_c0 * local_fc * local_104 + afStack_bc[0] * fVar2;
      if (0.0 <= fVar3) break;
      fVar3 = fVar3 * (float)_DAT_005b8236;
      fStack_d8 = local_c0 * fVar3;
      fStack_d4 = afStack_bc[0] * fVar3;
      fStack_d0 = afStack_bc[1] * fVar3;
      fStack_cc = local_c0 * fVar3;
      *(float *)(local_a8 + (uint)bVar13 * -8 + -0x20) =
           afStack_bc[(uint)bVar13 * 0xfffffffe + 0xfffffffa];
      afStack_a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + -8] =
           afStack_bc[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 0xfffffffb];
      local_fc = local_fc * local_104 - fStack_cc;
      local_f8 = fVar2 - fStack_c8;
      local_f4 = local_f4 - fStack_c4;
    }
    else {
      local_40 = local_104 + (float)_DAT_005b824e;
      afStack_a4[2] = *(float *)(0x01ED78C8 + 0x14d128) * local_40;
      afStack_a4[3] = *(float *)(0x01ED78C8 + 0x14d12c) * local_40;
      local_94 = *(float *)(0x01ED78C8 + 0x14d130) * local_40;
      local_84 = afStack_a4[2];
      local_80[(uint)bVar13 * -2] = afStack_a4[(uint)bVar13 * -2 + 3];
      local_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      bVar4 = true;
      *pfVar14 = *pfVar14 - local_84;
      pfVar14[1] = pfVar14[1] - local_80[0];
      pfVar14[2] = pfVar14[2] - local_80[1];
    }
    local_28 = local_28 + 9;
    local_30 = local_30 + 9;
    local_24 = local_24 + 9;
    local_2c = local_2c + 9;
    local_38 = local_38 + 1;
  } while (local_38 < 3);
  if (bVar4) {
    local_14 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                                (param_1,*(uint *)(param_1 + 0x326c),0);
    *(float *)(param_1 + 0x2504) = local_14;
  }
  fVar2 = *(float *)(param_1 + 0x24) + local_60;
  *(float *)(param_1 + 0x24) = fVar2;
  if (*(float *)(param_1 + 0x2504) <= fVar2) {
    if ((*(int *)(param_1 + 0x2500) != 0) &&
       (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005b822e)) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2504);
      fStack_e0 = *(float *)(param_1 + 0x24);
    }
  }
  else {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2504);
  }
  *(uint *)(param_1 + 0x2520) = 0;
  *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
  *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
  iVar8 = 0x01ED78C8;
  *(float *)(param_1 + 0x251c) =
       (*(float *)(param_1 + 0x24) - fStack_e0) / *(float *)(0x01D2130C + 0x314);
  FUN_0053ebe0(iVar8);
  return;
}
