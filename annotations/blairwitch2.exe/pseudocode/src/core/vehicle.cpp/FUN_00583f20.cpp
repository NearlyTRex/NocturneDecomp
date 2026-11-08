// Name: FUN_00583f20
// Address: 00583f20
// Address Range: [[00583f20, 0058485b]]
// Convention: unknown
// Signature: uint FUN_00583f20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00583f20(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_10c8 [975];
  char *pcVar12;
  float fStack_178;
  byte auStack_174 [4];
  uint uStack_170;
  uint uStack_144;
  byte auStack_138 [24];
  float fStack_120;
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [6];
  uint uStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  byte auStack_a4 [12];
  float fStack_98;
  float afStack_94 [5];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float afStack_70 [4];
  uint uStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  uint uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar11 = 0;
  iStack_18 = *(int *)(param_1 + 0x117c);
  fStack_38 = (*(float *)(param_1 + 0x1188) / *(float *)(param_1 + 0x118c)) * (float)iStack_18;
  FUN_00438c40((int *)(param_1 + 0x117c),fStack_38,afStack_94 + 5,auStack_a4);
  fVar2 = *(float *)(param_1 + 0x1188) + param_2;
  *(float *)(param_1 + 0x1188) = fVar2;
  if (*(float *)(param_1 + 0x118c) < fVar2) {
    *(float *)(param_1 + 0x1188) = *(float *)(param_1 + 0x1188) - *(float *)(param_1 + 0x118c);
  }
  iStack_18 = *(int *)(param_1 + 0x117c);
  fStack_38 = (*(float *)(param_1 + 0x1188) / *(float *)(param_1 + 0x118c)) * (float)iStack_18;
  FUN_00438c40((int *)(param_1 + 0x117c),fStack_38,(float *)(param_1 + 0x20),param_1 + 0x30);
  fStack_30 = 0.0;
  fStack_bc = *(float *)(param_1 + 0x20) - fStack_80;
  fStack_b8 = *(float *)(param_1 + 0x24) - fStack_7c;
  fStack_b4 = *(float *)(param_1 + 0x28) - fStack_78;
  pfVar9 = (float *)(param_1 + 0xa20);
  fStack_98 = fStack_bc;
  afStack_94[(uint)bVar11 * -2] = afStack_dc[(uint)bVar11 * -2 + 9];
  afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  if (param_2 <= 0.0) {
    if (pfVar9 != (float *)&DAT_0265370c) {
      *pfVar9 = _DAT_0265370c;
      *(uint *)(param_1 + 0xa24) = _DAT_02653710;
      *(uint *)(param_1 + 0xa28) = _DAT_02653714;
    }
  }
  else {
    param_2 = 1.0 / param_2;
    afStack_dc[2] = fStack_98 * param_2;
    afStack_dc[3] = afStack_94[0] * param_2;
    fStack_cc = afStack_94[1] * param_2;
    fStack_50 = fStack_98 * param_2;
    afStack_70[(uint)bVar11 * -2 + 9] = afStack_dc[(uint)bVar11 * -2 + 3];
    afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if (pfVar9 != afStack_70 + 8) {
      *pfVar9 = fStack_50;
      *(uint *)(param_1 + 0xa24) = uStack_4c;
      *(uint *)(param_1 + 0xa28) = uStack_48;
    }
    fStack_30 = SQRT(*(float *)(param_1 + 0xa28) * *(float *)(param_1 + 0xa28) +
                     *(float *)(param_1 + 0xa20) * *(float *)(param_1 + 0xa20) +
                     *(float *)(param_1 + 0xa24) * *(float *)(param_1 + 0xa24));
  }
  fStack_c8 = *(float *)(param_1 + 0xa20) * _DAT_005edd0f;
  fStack_c4 = *(float *)(param_1 + 0xa24) * _DAT_005edd0f;
  fStack_c0 = *(float *)(param_1 + 0xa28) * _DAT_005edd0f;
  afStack_70[2] = fStack_c8;
  afStack_70[(uint)bVar11 * -2 + 3] = afStack_dc[(uint)bVar11 * -2 + 6];
  afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  if ((float *)(param_1 + 0x11bc) != afStack_70 + 2) {
    *(float *)(param_1 + 0x11bc) = afStack_70[2];
    *(float *)(param_1 + 0x11c0) = afStack_70[3];
    *(uint *)(param_1 + 0x11c4) = uStack_60;
  }
  FUN_00408d30(param_1,param_1 + 0xa20);
  uStack_e0 = uStack_74;
  afStack_dc[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
  afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  if ((uint *)(param_1 + 0xa2c) != &uStack_e0) {
    *(uint *)(param_1 + 0xa2c) = uStack_e0;
    *(float *)(param_1 + 0xa30) = afStack_dc[0];
    *(float *)(param_1 + 0xa34) = afStack_dc[1];
  }
  iVar7 = 0;
  iVar8 = param_1;
  if (0 < *(int *)(param_1 + 0xa94)) {
    do {
      iVar7 = iVar7 + 1;
      *(float *)(iVar8 + 0xc28) = *(float *)(iVar8 + 0xaa4) * fStack_30 + *(float *)(iVar8 + 0xc28);
      iVar8 = iVar8 + 0x1b4;
    } while (iVar7 < *(int *)(param_1 + 0xa94));
  }
  *(uint *)(param_1 + 0x30) = 0;
  fVar2 = *(float *)(param_1 + 0x34) + _DAT_005edd17;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + _DAT_005edd13;
  *(float *)(param_1 + 0x34) = fVar2;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  iStack_20 = 0;
  iStack_24 = 0;
  pfVar9 = afStack_f8;
  pfVar10 = &fStack_110;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
  }
  for (; iStack_20 < *(int *)(0x01E661B8 + 0x14f0a8); iStack_20 = iStack_20 + 1) {
    iStack_1c = *(int *)(0x01E661B8 + iStack_24 + 0x14f0ac);
    iVar8 = FUN_0040c8f0(iStack_1c,_DAT_01d1c778);
    if ((iVar8 == 0) || (param_1 != *(int *)(iVar8 + 0x10b1c))) {
      FUN_00537fa0(auStack_138);
      iVar8 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x44))(iStack_1c,auStack_138);
      if ((iVar8 == 2) &&
         ((*(float *)(iStack_1c + 0x24) <= *(float *)(param_1 + 0x24) + fStack_100 &&
          (*(float *)(param_1 + 0x24) + fStack_10c <= *(float *)(iStack_1c + 0x24) + fStack_120))))
      {
        FUN_00408de0(param_1,iStack_1c + 0x20);
        fStack_5c = afStack_94[2];
        afStack_70[(uint)bVar11 * -2 + 6] = afStack_94[(uint)bVar11 * -2 + 3];
        afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if ((fStack_110 <= fStack_5c + fStack_11c) &&
           ((fStack_5c - fStack_11c <= fStack_104 && (fStack_108 <= fStack_54 + fStack_11c)))) {
          fStack_178 = fStack_54 - fStack_11c;
          if (fStack_178 <= fStack_fc) {
            FUN_004222d0(auStack_174);
            uStack_144 = 4;
            uStack_170 = 0x4479c000;
            (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x110))(iStack_1c,auStack_174);
          }
          else if ((fStack_178 < fStack_fc + (float)_DAT_005edd2f) &&
                  (iVar8 = FUN_00550b70(*(uint *)(param_1 + 0x11b0)), iVar8 == 0)) {
            uVar4 = FUN_00584d90(param_1,"?model-t-horn?.wav" + 1);
            *(uint *)(param_1 + 0x11b0) = uVar4;
          }
        }
      }
    }
    iStack_24 = iStack_24 + 4;
  }
  if (*(int *)(param_1 + 0x11c8) != 0) goto LAB_00584476;
  iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fStack_b0 = *(float *)(param_1 + 0x20) - *(float *)(iVar8 + 0x20);
  fStack_ac = *(float *)(param_1 + 0x24) - *(float *)(iVar8 + 0x24);
  fStack_a8 = *(float *)(param_1 + 0x28) - *(float *)(iVar8 + 0x28);
  fStack_44 = fStack_b0;
  afStack_70[(uint)bVar11 * -2 + 0xc] = afStack_dc[(uint)bVar11 * -2 + 0xc];
  afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       *(float *)(auStack_a4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -4);
  if ((SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) <=
       (float)_DAT_005edd1f) || (0x671 < *(int *)(0x01E661B8 + 0x14d164))) goto LAB_00584476;
  iVar8 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  for (iVar7 = 0; iVar7 < *(int *)(0x01E661B8 + 0x150fec); iVar7 = iVar7 + 1) {
    iVar5 = FUN_0040c8f0(*(uint *)(iVar8 + 0x150ff0 + 0x01E661B8),_DAT_01d1c778);
    if ((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0x10b1c), param_1 == iVar1)) {
      if (*(int *)(iVar5 + 0x10b20) == 0) {
        *(int *)(iVar1 + 0x11cc) = iVar5;
        iStack_28 = 1;
      }
      else {
        *(int *)(iVar1 + 0x11d0) = iVar5;
        iStack_2c = 1;
      }
    }
    iVar8 = iVar8 + 4;
  }
  if ((iStack_28 != 0) && (iStack_2c != 0)) goto LAB_00584476;
  if (iStack_28 == 0) {
    iVar8 = *(int *)(param_1 + 0x11cc);
    if (iVar8 != 0) {
      iVar8 = (**(code **)(*(int *)(iVar8 + 0x2b0) + 0x114))(iVar8);
joined_r0x005847f3:
      if (iVar8 == 0) goto LAB_00584476;
    }
  }
  else if ((iStack_2c == 0) && (iVar8 = *(int *)(param_1 + 0x11d0), iVar8 != 0)) {
    iVar8 = (**(code **)(*(int *)(iVar8 + 0x2b0) + 0x114))(iVar8);
    goto joined_r0x005847f3;
  }
  iVar7 = FUN_005b8be2(0x10bd0);
  iVar8 = 0;
  if (iVar7 != 0) {
    iVar8 = FUN_004fd810(iVar7);
  }
  iVar5 = FUN_005b8be2(0x6e0);
  iVar7 = 0;
  if (iVar5 != 0) {
    iVar7 = FUN_00575760(iVar5);
  }
  if ((iVar8 == 0) || (iVar7 == 0)) {
    _DAT_01d046a0 = "..\\core\\vehicle.cpp";
    _DAT_01d046a4 = 0x161;
    FUN_004e4500("CMobster::process - Out of memory!");
  }
  iVar5 = FUN_0040d060(0x3f000000);
  if (iVar5 == 0) {
    pcVar12 = "mobster4.dfm";
  }
  else {
    pcVar12 = "mobster3.dfm";
  }
  FUN_005478b0(iVar8 + 0x2b4,pcVar12);
  *(int *)(iVar8 + 0x10b1c) = param_1;
  if (iStack_28 == 0) {
    *(uint *)(iVar8 + 0x10b20) = 0;
    *(int *)(param_1 + 0x11cc) = iVar8;
  }
  else {
    *(uint *)(iVar8 + 0x10b20) = 1;
    *(int *)(param_1 + 0x11d0) = iVar8;
  }
  FUN_004fcda0(0x01D182F0,iVar8);
  FUN_004fcda0(0x01D182F0,iVar7);
  *(uint *)(iVar8 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar8 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar8 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar8 + 0x2c) = *(uint *)(param_1 + 0x2c);
  if ((uint *)(iVar8 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar8 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar8 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar8 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(iVar7 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar7 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar7 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar7 + 0x2c) = *(uint *)(param_1 + 0x2c);
  if ((uint *)(iVar7 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar7 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar7 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar7 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  (**(code **)(*(int *)(iVar8 + 0x2b0) + 8))(iVar8);
  (**(code **)(*(int *)(iVar7 + 0x2b0) + 8))(iVar7);
  FUN_00428b10(iVar8,1,iVar7,0,0);
  FUN_004fc200(0x01D182F0,iVar8);
  FUN_004fc200(0x01D182F0,iVar7);
LAB_00584476:
  iVar8 = FUN_00550b70(*(uint *)(param_1 + 0x11b4));
  if (iVar8 == 0) {
    uVar4 = FUN_00584d90(param_1,"ext-modelt-fast_??.wav");
    *(uint *)(param_1 + 0x11b4) = uVar4;
  }
  FUN_00550f50(*(uint *)(param_1 + 0x11b4),0x3f800000);
  fVar2 = ABS(*(float *)(param_1 + 0xa2c));
  fVar3 = (float)_DAT_005edd27;
  uVar6 = (uint)(ushort)((ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                        (ushort)(fVar2 == fVar3) << 0xe);
  if ((fVar2 >= fVar3 && (fVar2 == fVar3) == 0) &&
     (uVar6 = FUN_00550b70(*(uint *)(param_1 + 0x11b8)), uVar6 == 0)) {
    uVar6 = FUN_00584d90(param_1,"skid_??.wav");
    *(uint *)(param_1 + 0x11b8) = uVar6;
    return uVar6;
  }
  return uVar6;
}
