// Name: FUN_005125a0
// Address: 005125a0
// Address Range: [[005125a0, 005135c3]]
// Convention: unknown
// Signature: undefined4 FUN_005125a0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005125a0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float *pfVar6;
  byte *puVar7;
  byte *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  byte *puVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  float10 fVar18;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  uint auStack_2e4 [48];
  int aiStack_224 [24];
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  byte auStack_1b8 [4];
  uint uStack_1b4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint auStack_190 [6];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  byte auStack_148 [24];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  byte auStack_10c [12];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  int iStack_f0;
  uint uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  byte auStack_d0 [20];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  float fStack_b0;
  int iStack_ac;
  float fStack_a8;
  int *piStack_98;
  int iStack_94;
  byte *puStack_90;
  int iStack_8c;
  int *piStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  float fStack_70;
  float fStack_6c;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  int iStack_50;
  float *pfStack_4c;
  float fStack_48;
  int iStack_38;
  uint *puStack_34;
  float *pfStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar17 = 0;
  local_bc = 0;
  if (param_2 == 0) {
    if (param_1[0x56aaf] < 0) {
      FUN_005088f0(param_1,0);
    }
    return 1;
  }
  if (param_1[0x56aaf] < 0) {
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_0051260f;
  if (0.0 < (float)param_1[0x56ab3]) {
    fVar2 = (float)param_1[0x56ab3] - *(float *)(0x01C775EC + 0x264);
    param_1[0x56ab3] = (int)fVar2;
    if (0.0 < fVar2) {
      if ((-1 < param_1[0x56ab2]) && (param_1[0x56ab2] != param_1[0x56aaf])) {
        FUN_005088f0(param_1,param_1[0x56ab2]);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_0051260f:
  piVar13 = DAT_005ae704;
  param_1[0x56ab3] = 0;
  local_b8 = _DAT_01c02594;
  _DAT_01c02594 = 0;
  local_b4 = FUN_00461090(piVar13);
  FUN_00461070(DAT_005ae704,0);
  FUN_00460e40(DAT_005ae704,0,0,0x40,0x30);
  iVar12 = 0;
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,&local_160);
  piVar13 = aiStack_224;
  do {
    pfVar6 = (float *)FUN_0041cc70(&local_160,auStack_d0,iVar12);
    iVar12 = iVar12 + 1;
    *piVar13 = (int)ROUND(*pfVar6 * _DAT_005a1a70);
    piVar13[1] = (int)ROUND(pfVar6[1] * _DAT_005a1a70);
    piVar13[2] = (int)ROUND(pfVar6[2] * _DAT_005a1a70);
    piVar13 = piVar13 + 3;
  } while (iVar12 < 8);
  fStack_130 = local_160 + fStack_154;
  fStack_100 = (local_160 + fStack_154) * _DAT_00590bd5;
  fStack_12c = fStack_15c + fStack_150;
  fStack_fc = (fStack_15c + fStack_150) * _DAT_00590bd5;
  fStack_128 = fStack_158 + fStack_14c;
  fStack_f8 = (fStack_158 + fStack_14c) * _DAT_00590bd5;
  iStack_1c4 = (int)ROUND(fStack_100 * _DAT_005a1a70);
  iStack_1c0 = (int)ROUND(fStack_fc * _DAT_005a1a70);
  iStack_1bc = (int)ROUND(fStack_f8 * _DAT_005a1a70);
  puVar7 = &DAT_005be774;
  do {
    iVar12 = *(int *)(puVar7 + 0x18);
    puVar8 = puVar7 + 0x48;
    *(int *)(puVar7 + 0x14) =
         aiStack_224[iVar12 * 3 + 1] * *(int *)(puVar7 + 0xc) +
         *(int *)(puVar7 + 8) * aiStack_224[iVar12 * 3] +
         *(int *)(puVar7 + 0x10) * aiStack_224[iVar12 * 3 + 2];
    puVar7 = puVar8;
  } while (puVar8 != &DAT_005be924);
  if (param_3 == 0) {
    fStack_18 = (float)(*param_1 * 10);
    fVar18 = (float10)(int)fStack_18 * (float10)*(float *)(0x01C775EC + 0x264);
    FUN_00563a30();
    iStack_50 = (int)ROUND(fVar18);
    if (iStack_50 < 3) {
      iStack_50 = 3;
    }
    if (*param_1 < iStack_50) {
      iStack_50 = *param_1;
    }
    fVar2 = (float)param_1[0x56ab1] - *(float *)(0x01C775EC + 0x264);
    param_1[0x56ab1] = (int)fVar2;
    if (fVar2 <= 0.0) {
      param_1[0x56ab0] = -1;
      param_1[0x56ab1] = 0;
    }
  }
  else {
    iStack_50 = *param_1;
    param_1[0x56ab0] = -1;
    _DAT_020875f4 = 0;
    param_1[0x56ab1] = 0;
  }
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,&fStack_178);
  fStack_18 = (float)FUN_0041dc70(&fStack_178);
  fStack_dc = fStack_178 + fStack_16c;
  fStack_118 = fStack_dc * _DAT_00590bd5;
  fStack_d8 = fStack_174 + fStack_168;
  fStack_d4 = fStack_170 + fStack_164;
  fStack_114 = fStack_d8 * _DAT_00590bd5;
  fStack_110 = fStack_d4 * _DAT_00590bd5;
  fStack_b0 = fStack_18 * (float)_DAT_00590bdd + 1.0;
  FUN_0040a240(param_2,auStack_10c,&fStack_118);
  iStack_ac = FUN_00514340(param_1,auStack_10c);
  _DAT_026714b0 = (uint)(iStack_ac == -1);
  iVar12 = 0;
  do {
    iVar9 = iVar12 + 4;
    *(uint *)((int)auStack_2e4 + iVar12) = *(uint *)(&DAT_01bd4260 + iVar12);
    iVar12 = iVar9;
  } while (iVar9 != 0xc0);
  iVar12 = 0;
  _DAT_026639ec = 0;
  fStack_a8 = _DAT_005a1a8c * _DAT_005a1a8c;
  for (iStack_20 = 0; iStack_20 < *(int *)(0x01E57284 + 0x14cd6c); iStack_20 = iStack_20 + 1) {
    iVar9 = *(int *)(iVar12 + 0x14cd70 + 0x01E57284);
    iVar10 = (**(code **)(*(int *)(iVar9 + 0x14c) + 0x40))(iVar9);
    if (((iVar10 != 0) && (iVar9 != param_2)) &&
       (fVar2 = *(float *)(iVar9 + 0x20) - *(float *)(param_2 + 0x20),
       fVar4 = *(float *)(iVar9 + 0x24) - *(float *)(param_2 + 0x24),
       fVar3 = *(float *)(iVar9 + 0x28) - *(float *)(param_2 + 0x28),
       fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= fStack_a8)) {
      *(int *)(&DAT_026639f0 + _DAT_026639ec * 4) = iVar9;
      puVar11 = (uint *)(**(code **)(*(int *)(iVar9 + 0x14c) + 0x14))(iVar9,auStack_148);
      iVar9 = _DAT_026639ec * 0x18;
      if ((uint *)(iVar9 + 0x2665930) != puVar11) {
        *(uint *)(iVar9 + 0x2665930) = *puVar11;
        *(uint *)(iVar9 + 0x2665934) = puVar11[1];
        *(uint *)(iVar9 + 0x2665938) = puVar11[2];
      }
      if ((uint *)(iVar9 + 0x266593c) != puVar11 + 3) {
        *(uint *)(iVar9 + 0x266593c) = puVar11[3];
        *(uint *)(iVar9 + 0x2665940) = puVar11[4];
        *(uint *)(iVar9 + 0x2665944) = puVar11[5];
      }
      _DAT_026639ec = _DAT_026639ec + 1;
    }
    iVar12 = iVar12 + 4;
  }
  pfStack_30 = (float *)(param_2 + 0x20);
  fStack_48 = _DAT_005a1a8c * _DAT_005a1a8c;
  fStack_6c = _DAT_005a1a88 * _DAT_005a1a88;
  piStack_98 = param_1 + 1;
  do {
    if ((iStack_50 < 1) || (*param_1 <= _DAT_020875f4)) {
      iVar12 = 0;
      do {
        iVar9 = iVar12 + 4;
        *(uint *)(&DAT_01bd4260 + iVar12) = *(uint *)((int)auStack_2e4 + iVar12);
        iVar12 = iVar9;
      } while (iVar9 != 0xc0);
      thunk_FUN_004ce920(DAT_005ae704);
      FUN_00461070(DAT_005ae704,local_b4);
      _DAT_01c02594 = local_b8;
      if (*param_1 <= _DAT_020875f4) {
        fStack_2ec = -1.0;
        iVar12 = -1;
        iVar9 = 0;
        if (0 < *param_1) {
          iVar10 = 0;
          do {
            if (fStack_2ec < *(float *)(&DAT_02663604 + iVar10)) {
              fStack_2ec = *(float *)(&DAT_02663604 + iVar10);
              iVar12 = iVar9;
            }
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 4;
          } while (iVar9 < *param_1);
        }
        if (-1 < iVar12) {
          if ((param_1[0x56aaf] < 0) ||
             (1 < param_3 || iVar12 != param_1[0x56aaf] && 0.0 < fStack_2ec)) {
            param_1[0x56a98] = _DAT_026714b0;
            FUN_005088f0(param_1,iVar12);
            local_bc = 1;
          }
        }
        _DAT_020875f4 = 0;
      }
      return local_bc;
    }
    if (iStack_ac == param_1[_DAT_020875f4 * 0x68 + 0x67]) {
      iStack_94 = param_2;
      puStack_90 = &DAT_005be774;
      piVar13 = piStack_98 + _DAT_020875f4 * 0x68;
      piStack_88 = piVar13;
      iStack_8c = _DAT_020875f4;
      if ((float)piVar13[0x67] == 0.0) {
        fStack_84 = (float)piVar13[0x67];
      }
      else {
        fVar2 = (float)piVar13[0x40] - *pfStack_30;
        if ((((float)piVar13[0x42] - pfStack_30[2]) * ((float)piVar13[0x42] - pfStack_30[2]) +
             ((float)piVar13[0x41] - pfStack_30[1]) * ((float)piVar13[0x41] - pfStack_30[1]) +
             fVar2 * fVar2 <= fStack_6c) &&
           (iVar12 = FUN_00514980(piVar13,pfStack_30,fStack_b0), iVar12 != 0)) {
          FUN_00460700(DAT_005ae704,piVar13 + 0x40);
          FUN_00460c00(DAT_005ae704,piVar13[0x50]);
          FUN_00460780(DAT_005ae704,piVar13 + 0x43);
          uStack_80 = 0x800000ff;
          uStack_7c = 0;
          FUN_00460a00(DAT_005ae704,pfStack_30);
          uStack_f4 = *(uint *)(param_2 + 0x30);
          uStack_ec = *(uint *)(param_2 + 0x38);
          iStack_f0 = piVar13[0x44];
          FUN_00460aa0(DAT_005ae704,&uStack_f4,0);
          piVar13 = aiStack_224;
          iVar12 = 0;
          do {
            FUN_0053075c(*DAT_005ae704 + iVar12,piVar13);
            iVar9 = iVar12 + 0x30;
            piVar13 = piVar13 + 3;
            uVar1 = *(uint *)(iVar12 + 0x10 + *DAT_005ae704);
            uStack_80 = uStack_80 & uVar1;
            uStack_7c = uStack_7c | uVar1;
            iVar12 = iVar9;
          } while (iVar9 != 0x180);
          if (((uStack_80 & 0x80000000) == 0) || ((char)uStack_80 == '\0')) {
            iVar12 = 0;
            puVar7 = puStack_90 + 0x1b0;
            iStack_78 = 0;
            puVar8 = puStack_90;
            do {
              *(byte **)((int)auStack_190 + iVar12) = puVar8;
              iVar12 = iVar12 + 4;
              iStack_78 = iStack_78 + 1;
              puVar8 = puVar8 + 0x48;
            } while (puVar8 != puVar7);
            FUN_00409f60(iStack_94);
            iStack_2c = 0;
            do {
              piVar13 = (int *)(*DAT_005ae704 + iStack_2c);
              iVar12 = piVar13[2];
              if (0 < iVar12) {
                iVar9 = iVar12 + 0x80;
                *piVar13 = (int)(((longlong)*piVar13 * (longlong)iVar9) / (longlong)iVar12);
                piVar13[1] = (int)(((longlong)piVar13[1] * (longlong)iVar9) / (longlong)piVar13[2]);
                piVar13[2] = iVar9;
                FUN_004cd260(piVar13);
              }
              iStack_2c = iStack_2c + 0x30;
            } while (iStack_2c != 0x180);
            iVar12 = 0;
            fStack_2e8 = 1.0;
            do {
              if ((*(byte *)(*DAT_005ae704 + iVar12 + 0x13) & 0x80) != 0) {
                dVar5 = _DAT_00590bed;
                if (0 < *(int *)(*DAT_005ae704 + iVar12 + 8)) {
                  dVar5 = _DAT_00590be5;
                }
                fStack_2e8 = fStack_2e8 * (float)dVar5;
              }
              iVar12 = iVar12 + 0x30;
            } while (iVar12 != 0x180);
            iStack_1c = 0;
            iStack_74 = 0;
            iStack_2c = 0x180;
            if (0 < _DAT_026639ec) {
              iStack_28 = 0;
              puStack_34 = (uint *)(&DAT_020875f8 + iStack_8c * 0x3000);
              iStack_24 = 0x2665930;
              pfStack_4c = (float *)(piStack_88 + 0x40);
              do {
                iStack_5c = *(int *)(&DAT_026639f0 + iStack_28);
                fVar2 = *(float *)(iStack_5c + 0x20) - *pfStack_4c;
                fVar4 = *(float *)(iStack_5c + 0x24) - pfStack_4c[1];
                fVar3 = *(float *)(iStack_5c + 0x28) - pfStack_4c[2];
                if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= fStack_48) {
                  FUN_00409f20(iStack_5c);
                  iVar9 = 0;
                  uStack_58 = 0x800000ff;
                  uStack_54 = 0;
                  iStack_38 = iStack_24;
                  iVar12 = 0x180;
                  do {
                    FUN_0041cc70(iStack_38,&fStack_124,iVar9);
                    iStack_e8 = (int)ROUND(fStack_124 * _DAT_005a1a70);
                    iStack_e4 = (int)ROUND(fStack_120 * _DAT_005a1a70);
                    iStack_e0 = (int)ROUND(fStack_11c * _DAT_005a1a70);
                    FUN_0053075c(*DAT_005ae704 + iVar12,&iStack_e8);
                    iVar9 = iVar9 + 1;
                    uVar1 = *(uint *)(iVar12 + 0x10 + *DAT_005ae704);
                    uStack_58 = uStack_58 & uVar1;
                    uStack_54 = uStack_54 | uVar1;
                    iVar12 = iVar12 + 0x30;
                  } while (iVar9 < 8);
                  FUN_00409f60(iStack_5c);
                  if (((uStack_58 & 0x80000000) == 0) || ((char)uStack_58 == '\0')) {
                    if (iStack_74 == 0) {
                      iStack_74 = 1;
                      puVar11 = puStack_34;
                      puVar15 = (uint *)&DAT_020845f4;
                      for (iVar12 = 0xc00; iVar12 != 0; iVar12 = iVar12 + -1) {
                        *puVar15 = *puVar11;
                        puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
                        puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
                      }
                      for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
                        *(byte *)puVar15 = *(byte *)puVar11;
                        puVar11 = (uint *)((int)puVar11 + (uint)bVar17 * -2 + 1);
                        puVar15 = (uint *)((int)puVar15 + (uint)bVar17 * -2 + 1);
                      }
                      puVar14 = &DAT_020845f4;
                      iVar12 = 0;
                      do {
                        *(byte **)(&DAT_01bd4260 + iVar12) = puVar14;
                        iVar12 = iVar12 + 4;
                        puVar14 = puVar14 + 0x100;
                      } while (iVar12 != 0xc0);
                      FUN_00460fb0(DAT_005ae704,1);
                    }
                    uStack_1b4 = 4;
                    FUN_00461050(DAT_005ae704,(uStack_54 & 0x80000000) != 0);
                    uStack_198 = 0xe;
                    uStack_1a0 = 8;
                    uStack_19c = 0xc;
                    uStack_194 = 10;
                    FUN_0045ee60(DAT_005ae704,auStack_1b8);
                    uStack_194 = 0xd;
                    uStack_1a0 = 9;
                    uStack_19c = 0xb;
                    uStack_198 = 0xf;
                    FUN_0045ee60(DAT_005ae704,auStack_1b8);
                    uStack_1a0 = 8;
                    uStack_19c = 9;
                    uStack_198 = 0xd;
                    uStack_194 = 0xc;
                    FUN_0045ee60(DAT_005ae704,auStack_1b8);
                    uStack_1a0 = 10;
                    uStack_19c = 0xe;
                    uStack_198 = 0xf;
                    uStack_194 = 0xb;
                    FUN_0045ee60(DAT_005ae704,auStack_1b8);
                    uStack_1a0 = 8;
                    uStack_198 = 0xb;
                    uStack_19c = 10;
                    uStack_194 = 9;
                    FUN_0045ee60(DAT_005ae704,auStack_1b8);
                    uStack_19c = 0xd;
                    uStack_1a0 = 0xc;
                    uStack_198 = 0xf;
                    uStack_194 = 0xe;
                    FUN_0045ee60(DAT_005ae704,auStack_1b8);
                  }
                }
                iStack_28 = iStack_28 + 4;
                iStack_24 = iStack_24 + 0x18;
                iStack_1c = iStack_1c + 1;
              } while (iStack_1c < _DAT_026639ec);
            }
            FUN_00460fb0(DAT_005ae704,0);
            if (iStack_74 == 0) {
              puVar14 = &DAT_020875f8 + iStack_8c * 0x3000;
              iVar12 = 0;
              do {
                *(byte **)(&DAT_01bd4260 + iVar12) = puVar14;
                iVar12 = iVar12 + 4;
                puVar14 = puVar14 + 0x100;
              } while (iVar12 != 0xc0);
            }
            FUN_00460fb0(DAT_005ae704,1);
            FUN_00461050(DAT_005ae704,(uStack_7c & 0x80000000) != 0);
            fStack_70 = 0.0;
            if (0 < iStack_78) {
              iVar12 = iStack_78 * 4;
              iVar9 = 0;
              do {
                iVar10 = FUN_0045f090(DAT_005ae704,*(uint *)((int)auStack_190 + iVar9));
                iVar9 = iVar9 + 4;
                fStack_70 = (float)((int)fStack_70 + iVar10);
              } while (iVar9 < iVar12);
            }
            if (*(int *)(0x01C775EC + 0x1e8) != 0) {
              puVar11 = (uint *)(iStack_8c * 0x3000 + 0x23755f8);
              iVar12 = 0;
              do {
                iVar10 = iVar12 + 4;
                puVar15 = *(uint **)(&DAT_01bd4260 + iVar12);
                puVar16 = puVar11;
                for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar16 = *puVar15;
                  puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
                  puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
                }
                for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *(byte *)puVar16 = *(byte *)puVar15;
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar17 * -2 + 1);
                  puVar16 = (uint *)((int)puVar16 + (uint)bVar17 * -2 + 1);
                }
                *(uint **)(&DAT_01bd4260 + iVar12) = puVar11;
                puVar11 = puVar11 + 0x40;
                iVar12 = iVar10;
              } while (iVar10 != 0xc0);
              iVar12 = 0;
              puVar7 = puStack_90;
              if (0 < iStack_78) {
                do {
                  FUN_0045eee0(DAT_005ae704,puVar7);
                  iVar12 = iVar12 + 1;
                  puVar7 = puVar7 + 0x48;
                } while (iVar12 < iStack_78);
              }
            }
            FUN_00461050(DAT_005ae704,1);
            FUN_00460fb0(DAT_005ae704,0);
            fStack_18 = fStack_70;
            fStack_84 = (float)(int)fStack_70 * fStack_2e8;
            goto LAB_00512d26;
          }
          FUN_00409f60(iStack_94);
        }
        fStack_84 = 0.0;
      }
LAB_00512d26:
      fStack_2f0 = fStack_84;
    }
    else {
      fStack_2f0 = -99999.9;
    }
    if ((param_3 == 0) && (0.0 < fStack_2f0)) {
      if (_DAT_020875f4 == param_1[0x56aaf]) {
        fStack_2f0 = fStack_2f0 * (float)_DAT_00590bf5;
      }
      if (_DAT_020875f4 == param_1[0x56ab0]) {
        fStack_2f0 = fStack_2f0 * (float)_DAT_00590bfd;
      }
    }
    *(float *)(&DAT_02663604 + _DAT_020875f4 * 4) = fStack_2f0;
    iStack_50 = iStack_50 + -1;
    _DAT_020875f4 = _DAT_020875f4 + 1;
  } while( true );
}
