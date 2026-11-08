// Name: FUN_005a7b50
// Address: 005a7b50
// Address Range: [[005a7b50, 005a8489]]
// Convention: unknown
// Signature: uint FUN_005a7b50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a7b50(int param_1,float param_2)

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
  iStack_18 = *(int *)(param_1 + 0x1020);
  fStack_38 = (*(float *)(param_1 + 0x102c) / *(float *)(param_1 + 0x1030)) * (float)iStack_18;
  FUN_00447f00((int *)(param_1 + 0x1020),fStack_38,afStack_94 + 5,auStack_a4);
  fVar2 = *(float *)(param_1 + 0x102c) + param_2;
  *(float *)(param_1 + 0x102c) = fVar2;
  if (*(float *)(param_1 + 0x1030) < fVar2) {
    *(float *)(param_1 + 0x102c) = *(float *)(param_1 + 0x102c) - *(float *)(param_1 + 0x1030);
  }
  iStack_18 = *(int *)(param_1 + 0x1020);
  fStack_38 = (*(float *)(param_1 + 0x102c) / *(float *)(param_1 + 0x1030)) * (float)iStack_18;
  FUN_00447f00((int *)(param_1 + 0x1020),fStack_38,(float *)(param_1 + 0x20),param_1 + 0x30);
  fStack_30 = 0.0;
  fStack_bc = *(float *)(param_1 + 0x20) - fStack_80;
  fStack_b8 = *(float *)(param_1 + 0x24) - fStack_7c;
  fStack_b4 = *(float *)(param_1 + 0x28) - fStack_78;
  pfVar9 = (float *)(param_1 + 0x8c4);
  fStack_98 = fStack_bc;
  afStack_94[(uint)bVar11 * -2] = afStack_dc[(uint)bVar11 * -2 + 9];
  afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  if (param_2 <= 0.0) {
    if (pfVar9 != (float *)&DAT_02c8af28) {
      *pfVar9 = _DAT_02c8af28;
      *(uint *)(param_1 + 0x8c8) = _DAT_02c8af2c;
      *(uint *)(param_1 + 0x8cc) = _DAT_02c8af30;
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
      *(uint *)(param_1 + 0x8c8) = uStack_4c;
      *(uint *)(param_1 + 0x8cc) = uStack_48;
    }
    fStack_30 = SQRT(*(float *)(param_1 + 0x8cc) * *(float *)(param_1 + 0x8cc) +
                     *(float *)(param_1 + 0x8c4) * *(float *)(param_1 + 0x8c4) +
                     *(float *)(param_1 + 0x8c8) * *(float *)(param_1 + 0x8c8));
  }
  fStack_c8 = *(float *)(param_1 + 0x8c4) * _DAT_005f906b;
  fStack_c4 = *(float *)(param_1 + 0x8c8) * _DAT_005f906b;
  fStack_c0 = *(float *)(param_1 + 0x8cc) * _DAT_005f906b;
  afStack_70[2] = fStack_c8;
  afStack_70[(uint)bVar11 * -2 + 3] = afStack_dc[(uint)bVar11 * -2 + 6];
  afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  if ((float *)(param_1 + 0x1060) != afStack_70 + 2) {
    *(float *)(param_1 + 0x1060) = afStack_70[2];
    *(float *)(param_1 + 0x1064) = afStack_70[3];
    *(uint *)(param_1 + 0x1068) = uStack_60;
  }
  FUN_00408b00(param_1,param_1 + 0x8c4);
  uStack_e0 = uStack_74;
  afStack_dc[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
  afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  if ((uint *)(param_1 + 0x8d0) != &uStack_e0) {
    *(uint *)(param_1 + 0x8d0) = uStack_e0;
    *(float *)(param_1 + 0x8d4) = afStack_dc[0];
    *(float *)(param_1 + 0x8d8) = afStack_dc[1];
  }
  iVar7 = 0;
  iVar8 = param_1;
  if (0 < *(int *)(param_1 + 0x938)) {
    do {
      iVar7 = iVar7 + 1;
      *(float *)(iVar8 + 0xacc) = *(float *)(iVar8 + 0x948) * fStack_30 + *(float *)(iVar8 + 0xacc);
      iVar8 = iVar8 + 0x1b4;
    } while (iVar7 < *(int *)(param_1 + 0x938));
  }
  *(uint *)(param_1 + 0x30) = 0;
  fVar2 = *(float *)(param_1 + 0x34) + _DAT_005f9073;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + _DAT_005f906f;
  *(float *)(param_1 + 0x34) = fVar2;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  iStack_20 = 0;
  iStack_24 = 0;
  pfVar9 = afStack_f8;
  pfVar10 = &fStack_110;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
  }
  for (; iStack_20 < *(int *)(0x01E82168 + 0x14f0a8); iStack_20 = iStack_20 + 1) {
    iStack_1c = *(int *)(0x01E82168 + iStack_24 + 0x14f0ac);
    iVar8 = FUN_0040c600(iStack_1c,_DAT_01d33c68);
    if ((iVar8 == 0) || (param_1 != *(int *)(iVar8 + 0xc28c))) {
      FUN_005593c0(auStack_138);
      iVar8 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x3c))(iStack_1c,auStack_138);
      if ((iVar8 == 2) &&
         ((*(float *)(iStack_1c + 0x24) <= *(float *)(param_1 + 0x24) + fStack_100 &&
          (*(float *)(param_1 + 0x24) + fStack_10c <= *(float *)(iStack_1c + 0x24) + fStack_120))))
      {
        FUN_00408bb0(param_1,iStack_1c + 0x20);
        fStack_5c = afStack_94[2];
        afStack_70[(uint)bVar11 * -2 + 6] = afStack_94[(uint)bVar11 * -2 + 3];
        afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if ((fStack_110 <= fStack_5c + fStack_11c) &&
           ((fStack_5c - fStack_11c <= fStack_104 && (fStack_108 <= fStack_54 + fStack_11c)))) {
          fStack_178 = fStack_54 - fStack_11c;
          if (fStack_178 <= fStack_fc) {
            FUN_0042c010(auStack_174);
            uStack_144 = 4;
            uStack_170 = 0x4479c000;
            (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,auStack_174);
          }
          else if ((fStack_178 < fStack_fc + (float)_DAT_005f908b) &&
                  (iVar8 = FUN_005735a0(*(uint *)(param_1 + 0x1054)), iVar8 == 0)) {
            uVar4 = FUN_005a89c0(param_1,"?model-t-horn?.wav" + 1);
            *(uint *)(param_1 + 0x1054) = uVar4;
          }
        }
      }
    }
    iStack_24 = iStack_24 + 4;
  }
  if (*(int *)(param_1 + 0x106c) != 0) goto LAB_005a80a6;
  iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  fStack_b0 = *(float *)(param_1 + 0x20) - *(float *)(iVar8 + 0x20);
  fStack_ac = *(float *)(param_1 + 0x24) - *(float *)(iVar8 + 0x24);
  fStack_a8 = *(float *)(param_1 + 0x28) - *(float *)(iVar8 + 0x28);
  fStack_44 = fStack_b0;
  afStack_70[(uint)bVar11 * -2 + 0xc] = afStack_dc[(uint)bVar11 * -2 + 0xc];
  afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       *(float *)(auStack_a4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -4);
  if ((SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) <=
       (float)_DAT_005f907b) || (0x671 < *(int *)(0x01E82168 + 0x14d164))) goto LAB_005a80a6;
  iVar8 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  for (iVar7 = 0; iVar7 < *(int *)(0x01E82168 + 0x150fec); iVar7 = iVar7 + 1) {
    iVar5 = FUN_0040c600(*(uint *)(iVar8 + 0x150ff0 + 0x01E82168),_DAT_01d33c68);
    if ((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc28c), param_1 == iVar1)) {
      if (*(int *)(iVar5 + 0xc290) == 0) {
        *(int *)(iVar1 + 0x1070) = iVar5;
        iStack_28 = 1;
      }
      else {
        *(int *)(iVar1 + 0x1074) = iVar5;
        iStack_2c = 1;
      }
    }
    iVar8 = iVar8 + 4;
  }
  if ((iStack_28 != 0) && (iStack_2c != 0)) goto LAB_005a80a6;
  if (iStack_28 == 0) {
    iVar8 = *(int *)(param_1 + 0x1070);
    if (iVar8 != 0) {
      iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x10c))(iVar8);
joined_r0x005a8421:
      if (iVar8 == 0) goto LAB_005a80a6;
    }
  }
  else if ((iStack_2c == 0) && (iVar8 = *(int *)(param_1 + 0x1074), iVar8 != 0)) {
    iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x10c))(iVar8);
    goto joined_r0x005a8421;
  }
  iVar7 = FUN_005c0f32(0xc340);
  iVar8 = 0;
  if (iVar7 != 0) {
    iVar8 = FUN_0051c7d0(iVar7);
  }
  iVar5 = FUN_005c0f32(0x584);
  iVar7 = 0;
  if (iVar5 != 0) {
    iVar7 = FUN_00598380(iVar5);
  }
  if ((iVar8 == 0) || (iVar7 == 0)) {
    _DAT_01d1d400 = "..\\core\\vehicle.cpp";
    _DAT_01d1d404 = 0x161;
    FUN_005030e0("CMobster::process - Out of memory!");
  }
  iVar5 = FUN_0040cd00(0x3f000000);
  if (iVar5 == 0) {
    pcVar12 = "mobster4.dfm";
  }
  else {
    pcVar12 = "mobster3.dfm";
  }
  FUN_00569f50(iVar8 + 0x158,pcVar12);
  *(int *)(iVar8 + 0xc28c) = param_1;
  if (iStack_28 == 0) {
    *(uint *)(iVar8 + 0xc290) = 0;
    *(int *)(param_1 + 0x1070) = iVar8;
  }
  else {
    *(uint *)(iVar8 + 0xc290) = 1;
    *(int *)(param_1 + 0x1074) = iVar8;
  }
  FUN_0051bd60(0x01D2C900,iVar8);
  FUN_0051bd60(0x01D2C900,iVar7);
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
  (*(code *)**(uint **)(iVar8 + 0x154))(iVar8);
  (*(code *)**(uint **)(iVar7 + 0x154))(iVar7);
  FUN_004325b0(iVar8,1,iVar7,0,0);
  FUN_0051b160(0x01D2C900,iVar8);
  FUN_0051b160(0x01D2C900,iVar7);
LAB_005a80a6:
  iVar8 = FUN_005735a0(*(uint *)(param_1 + 0x1058));
  if (iVar8 == 0) {
    uVar4 = FUN_005a89c0(param_1,"ext-modelt-fast_??.wav");
    *(uint *)(param_1 + 0x1058) = uVar4;
  }
  FUN_00573980(*(uint *)(param_1 + 0x1058),0x3f800000);
  fVar2 = ABS(*(float *)(param_1 + 0x8d0));
  fVar3 = (float)_DAT_005f9083;
  uVar6 = (uint)(ushort)((ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                        (ushort)(fVar2 == fVar3) << 0xe);
  if ((fVar2 >= fVar3 && (fVar2 == fVar3) == 0) &&
     (uVar6 = FUN_005735a0(*(uint *)(param_1 + 0x105c)), uVar6 == 0)) {
    uVar6 = FUN_005a89c0(param_1,"skid_??.wav");
    *(uint *)(param_1 + 0x105c) = uVar6;
    return uVar6;
  }
  return uVar6;
}
