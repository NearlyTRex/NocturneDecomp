// Name: FUN_00538d10
// Address: 00538d10
// Address Range: [[00538d10, 0053981d]]
// Convention: unknown
// Signature: undefined4 FUN_00538d10(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00538d10(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  byte *puVar5;
  byte *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  float10 fVar16;
  float afStackY_1104 [948];
  float fStack_220;
  float fStack_21c;
  int aiStack_218 [24];
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  float afStack_1ac [6];
  float local_194 [6];
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  float local_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  uint auStack_14c [6];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float afStack_ec [3];
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  int iStack_6c;
  uint local_5c;
  uint local_58;
  uint local_54;
  float fStack_4c;
  float fStack_48;
  int *piStack_44;
  float fStack_40;
  int iStack_3c;
  int *piStack_38;
  float *pfStack_34;
  int iStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  int *piStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar15 = 0;
  local_54 = 0;
  if (param_2 == 0) {
    if (param_1[0x56bae] < 0) {
      FUN_0052ddf0(param_1,0);
    }
    return 1;
  }
  if (param_1[0x56bae] < 0) {
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_00538d7f;
  if (0.0 < (float)param_1[0x56bb2]) {
    fVar1 = (float)param_1[0x56bb2] - *(float *)(0x01CB6900 + 0x284);
    param_1[0x56bb2] = (int)fVar1;
    if (0.0 < fVar1) {
      if ((-1 < param_1[0x56bb1]) && (param_1[0x56bb1] != param_1[0x56bae])) {
        FUN_0052ddf0(param_1,param_1[0x56bb1]);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_00538d7f:
  uVar4 = DAT_0060b280;
  param_1[0x56bb2] = 0;
  local_5c = _DAT_01c37788;
  _DAT_01c37788 = 0;
  local_58 = FUN_0046b960(uVar4);
  FUN_0046b940(DAT_0060b280,0);
  (**(code **)(*(int *)(param_2 + 0x2b0) + 0x24))(param_2);
  pfVar10 = local_194;
  pfVar11 = &local_164;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + (uint)bVar15 * -2 + 1;
    pfVar11 = pfVar11 + (uint)bVar15 * -2 + 1;
  }
  piStack_38 = aiStack_218;
  iStack_24 = 0;
  do {
    FUN_0041a600(&local_164,iStack_24);
    fStack_98 = fStack_f8;
    afStack_118[(uint)bVar15 * -2 + 0x21] = afStack_118[(uint)bVar15 * -2 + 9];
    afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x22] =
         afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    *piStack_38 = (int)ROUND(fStack_98 * _DAT_005fb33c);
    piStack_38[1] = (int)ROUND(fStack_94 * _DAT_005fb33c);
    piStack_38[2] = (int)ROUND(fStack_90 * _DAT_005fb33c);
    iStack_24 = iStack_24 + 1;
    piStack_38 = piStack_38 + 3;
  } while (iStack_24 < 8);
  fStack_b0 = local_164 + fStack_158;
  fStack_ac = fStack_160 + fStack_154;
  fStack_a8 = fStack_15c + fStack_150;
  fStack_104 = local_164 + fStack_158;
  afStack_118[(uint)bVar15 * -2 + 6] = afStack_118[(uint)bVar15 * -2 + 0x1b];
  afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
       afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
  fStack_bc = fStack_104 * _DAT_005e5ff5;
  fStack_b8 = fStack_100 * _DAT_005e5ff5;
  fStack_b4 = fStack_fc * _DAT_005e5ff5;
  fStack_a4 = fStack_104 * _DAT_005e5ff5;
  afStack_118[(uint)bVar15 * -2 + 0x1e] = afStack_118[(uint)bVar15 * -2 + 0x18];
  afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f] =
       afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
  iStack_1b8 = (int)ROUND(fStack_a4 * _DAT_005fb33c);
  iStack_1b4 = (int)ROUND(fStack_a0 * _DAT_005fb33c);
  iStack_1b0 = (int)ROUND(fStack_9c * _DAT_005fb33c);
  puVar5 = &DAT_0061b97c;
  do {
    iVar8 = *(int *)(puVar5 + 0x18);
    puVar6 = puVar5 + 0x48;
    *(int *)(puVar5 + 0x14) =
         *(int *)(puVar5 + 0xc) * aiStack_218[iVar8 * 3 + 1] +
         *(int *)(puVar5 + 8) * aiStack_218[iVar8 * 3] +
         *(int *)(puVar5 + 0x10) * aiStack_218[iVar8 * 3 + 2];
    puVar5 = puVar6;
  } while (puVar6 != &DAT_0061bb2c);
  if (param_3 == 0) {
    fStack_18 = (float)(*param_1 * 10);
    fVar16 = (float10)(int)fStack_18 * (float10)*(float *)(0x01CB6900 + 0x284);
    FUN_005b7ff0();
    iStack_6c = (int)ROUND(fVar16);
    if (iStack_6c < 3) {
      iStack_6c = 3;
    }
    if (*param_1 < iStack_6c) {
      iStack_6c = *param_1;
    }
    fVar1 = (float)param_1[0x56bb0] - *(float *)(0x01CB6900 + 0x284);
    param_1[0x56bb0] = (int)fVar1;
    if (fVar1 <= 0.0) {
      param_1[0x56baf] = -1;
      param_1[0x56bb0] = 0;
    }
  }
  else {
    iStack_6c = *param_1;
    param_1[0x56baf] = -1;
    _DAT_02093938 = 0;
    param_1[0x56bb0] = 0;
  }
  (**(code **)(*(int *)(param_2 + 0x2b0) + 0x24))(param_2);
  pfVar10 = afStack_1ac;
  pfVar11 = &fStack_134;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + (uint)bVar15 * -2 + 1;
    pfVar11 = pfVar11 + (uint)bVar15 * -2 + 1;
  }
  fStack_18 = (float)FUN_0041b6b0(&fStack_134);
  fVar1 = fStack_18 * (float)_DAT_005e5ffd;
  pfVar10 = afStack_118 + 0xe;
  pfVar11 = (float *)(param_2 + 0x24 + (uint)bVar15 * -8);
  fStack_e0 = *(float *)(param_2 + 0x20);
  afStack_118[(uint)bVar15 * -2 + 0xf] = *pfVar11;
  afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] = pfVar11[(uint)bVar15 * -2 + 1];
  fStack_dc = fStack_dc + _DAT_005e6005;
  fStack_48 = fVar1 + 1.0;
  iVar8 = FUN_0053a760(param_1,pfVar10);
  fStack_8c = fStack_134 + fStack_128;
  fStack_88 = fStack_130 + fStack_124;
  fStack_84 = fStack_12c + fStack_120;
  afStack_118[2] = fStack_134 + fStack_128;
  afStack_118[(uint)bVar15 * -2 + 3] = afStack_118[(uint)bVar15 * -2 + 0x24];
  afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
       afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25];
  iStack_3c = iVar8;
  pfVar10 = afStack_118 + 0xb;
  fStack_d4 = afStack_118[2] * _DAT_005e5ff5;
  fStack_d0 = afStack_118[3] * _DAT_005e5ff5;
  fStack_cc = fStack_108 * _DAT_005e5ff5;
  afStack_ec[0] = afStack_118[2] * _DAT_005e5ff5;
  afStack_118[(uint)bVar15 * -2 + 0xc] = afStack_118[(uint)bVar15 * -2 + 0x12];
  afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
       afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
  FUN_00408d70(param_2,pfVar10);
  fStack_11c = fStack_c8;
  afStack_118[(uint)bVar15 * -2] = afStack_118[(uint)bVar15 * -2 + 0x15];
  afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
  if (afStack_118 + 0xe != &fStack_11c) {
    fStack_e0 = fStack_11c;
    fStack_dc = afStack_118[0];
    uStack_d8 = afStack_118[1];
  }
  if (iStack_3c != _DAT_0209393c) {
    iStack_6c = *param_1;
    param_3 = 1;
    param_1[0x56baf] = -1;
    _DAT_02093938 = 0;
    param_1[0x56bb0] = 0;
  }
  iVar8 = DAT_006141bc;
  _DAT_0209393c = iStack_3c;
  _DAT_020b1520 = (uint)(iStack_3c == -1);
  if (_DAT_020b0258 != 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x67;
    FUN_004e4500("saveZBufferTable - already saved!");
  }
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      iVar7 = iVar12 + 4;
      *(uint *)(&DAT_020b0258 + iVar12) = *(uint *)(&DAT_01c2b64c + iVar12);
      iVar12 = iVar7;
    } while (iVar7 < iVar8 * 4);
  }
  fStack_4c = _DAT_005fb358 * _DAT_005fb358;
  _DAT_020a2794 = 0;
  pfStack_34 = (float *)(param_2 + 0x20);
  iStack_30 = 0;
  for (iStack_2c = 0; iStack_2c < *(int *)(0x01E661B8 + 0x14d164); iStack_2c = iStack_2c + 1) {
    iVar8 = *(int *)(0x01E661B8 + iStack_30 + 0x14d168);
    iVar12 = (**(code **)(*(int *)(iVar8 + 0x2b0) + 0x50))(iVar8);
    if (((iVar12 != 0) && (iVar8 != param_2)) &&
       (fVar1 = *(float *)(iVar8 + 0x20) - *pfStack_34,
       fVar3 = *(float *)(iVar8 + 0x24) - pfStack_34[1],
       fVar2 = *(float *)(iVar8 + 0x28) - pfStack_34[2],
       fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fStack_4c)) {
      *(int *)(&DAT_020a2798 + _DAT_020a2794 * 4) = iVar8;
      (**(code **)(*(int *)(iVar8 + 0x2b0) + 0x24))(iVar8);
      puVar13 = auStack_14c;
      puVar14 = &uStack_17c;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
        puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
      }
      iVar8 = _DAT_020a2794 * 0x18;
      if ((uint *)(iVar8 + 0x20a46d8) != &uStack_17c) {
        *(uint *)(iVar8 + 0x20a46d8) = uStack_17c;
        *(uint *)(iVar8 + 0x20a46dc) = uStack_178;
        *(uint *)(iVar8 + 0x20a46e0) = uStack_174;
      }
      if ((uint *)(iVar8 + 0x20a46e4) != &uStack_170) {
        *(uint *)(iVar8 + 0x20a46e4) = uStack_170;
        *(uint *)(iVar8 + 0x20a46e8) = uStack_16c;
        *(uint *)(iVar8 + 0x20a46ec) = uStack_168;
      }
      _DAT_020a2794 = _DAT_020a2794 + 1;
    }
    iStack_30 = iStack_30 + 4;
  }
  pfStack_28 = (float *)(param_2 + 0x20);
  fStack_40 = _DAT_005fb354 * _DAT_005fb354;
  piStack_44 = param_1 + 1;
  while ((iVar12 = _DAT_02093938, iVar8 = DAT_006141bc, 0 < iStack_6c && (_DAT_02093938 < *param_1))
        ) {
    if (iStack_3c == param_1[_DAT_02093938 * 0x69 + 0x68]) {
      piVar9 = piStack_44 + _DAT_02093938 * 0x69;
      piStack_20 = aiStack_218;
      if (piVar9[0x68] == 0) {
        fVar1 = 0.0;
      }
      else if (((float)piVar9[0x42] - pfStack_28[2]) * ((float)piVar9[0x42] - pfStack_28[2]) +
               ((float)piVar9[0x41] - pfStack_28[1]) * ((float)piVar9[0x41] - pfStack_28[1]) +
               ((float)piVar9[0x40] - *pfStack_28) * ((float)piVar9[0x40] - *pfStack_28) <=
               fStack_40) {
        iVar8 = FUN_0053ae20(piVar9,pfStack_28,fStack_48);
        fVar1 = 0.0;
        if (iVar8 != 0) {
          iVar8 = iVar12 * 0xf0 + 0x2093d34;
          if (piVar9[0x50] == 0) {
            fStack_1c = (float)FUN_005386e0(iVar8,param_2,aiStack_218,&DAT_0061b97c,1);
            fVar1 = fStack_1c;
            fStack_18 = fStack_1c;
          }
          else {
            fStack_1c = 0.0;
            do {
              fStack_18 = (float)FUN_005386e0(iVar8,param_2,piStack_20,&DAT_0061b97c,0);
              fStack_1c = fStack_18 + fStack_1c;
              iVar8 = iVar8 + 0x28;
              fVar1 = fStack_1c;
            } while (iVar8 != iVar12 * 0xf0 + 0x2093e24);
          }
        }
      }
      else {
        fStack_78 = 0.0;
        fVar1 = fStack_78;
      }
      fStack_78 = fVar1;
      fStack_220 = fStack_78;
    }
    else {
      fStack_220 = -99999.9;
    }
    if ((param_3 == 0) && (0.0 < fStack_220)) {
      if (_DAT_02093938 == param_1[0x56bae]) {
        fStack_220 = fStack_220 * (float)_DAT_005e600d;
      }
      if (_DAT_02093938 == param_1[0x56baf]) {
        fStack_220 = fStack_220 * (float)_DAT_005e6015;
      }
    }
    iStack_6c = iStack_6c + -1;
    *(float *)(&DAT_0209394c + _DAT_02093938 * 4) = fStack_220;
    _DAT_02093938 = _DAT_02093938 + 1;
  }
  if (_DAT_020b0258 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x70;
    FUN_004e4500("saveZBufferTable - not saved!");
  }
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      iVar7 = iVar12 + 4;
      *(uint *)(&DAT_01c2b64c + iVar12) = *(uint *)(&DAT_020b0258 + iVar12);
      iVar12 = iVar7;
    } while (iVar7 < iVar8 * 4);
  }
  _DAT_020b0258 = 0;
  FUN_0046b940(DAT_0060b280,local_58);
  _DAT_01c37788 = local_5c;
  if (*param_1 <= _DAT_02093938) {
    iVar8 = -1;
    fStack_21c = -1.0;
    iVar12 = 0;
    if (0 < *param_1) {
      iVar7 = 0;
      do {
        if (fStack_21c < *(float *)(&DAT_0209394c + iVar7)) {
          fStack_21c = *(float *)(&DAT_0209394c + iVar7);
          iVar8 = iVar12;
        }
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar12 < *param_1);
    }
    if (-1 < iVar8) {
      if ((param_1[0x56bae] < 0) || (1 < param_3 || iVar8 != param_1[0x56bae] && 0.0 < fStack_21c))
      {
        param_1[0x56b97] = _DAT_020b1520;
        FUN_0052ddf0(param_1,iVar8);
        local_54 = 1;
      }
    }
    _DAT_02093938 = 0;
  }
  return local_54;
}
