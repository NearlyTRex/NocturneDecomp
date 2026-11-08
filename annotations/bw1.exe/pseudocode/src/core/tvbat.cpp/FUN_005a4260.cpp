// Name: FUN_005a4260
// Address: 005a4260
// Address Range: [[005a4260, 005a4ead]]
// Convention: unknown
// Signature: void FUN_005a4260(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a4260(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_1168 [981];
  float fStack_1f0;
  byte auStack_1e4 [4];
  float fStack_1e0;
  int iStack_1b0;
  int iStack_1ac;
  byte auStack_1a8 [20];
  float fStack_194;
  float fStack_190;
  float fStack_180;
  float afStack_17c [4];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  byte auStack_12c [12];
  float fStack_120;
  float afStack_11c [4];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
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
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_44;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float *pfStack_24;
  float *pfStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  if ((*(int *)(param_1 + 0xc410) != 0) && (*(int *)(param_1 + 0xc49c) == 0)) {
    iVar5 = 0;
    for (iVar7 = 0; iVar7 < *(int *)(0x01E82168 + 0x150fec); iVar7 = iVar7 + 1) {
      iVar3 = FUN_0040c550();
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0xc49c) = *(uint *)(iVar5 + 0x150ff0 + 0x01E82168);
        break;
      }
      iVar5 = iVar5 + 4;
    }
  }
  if ((*(int *)(param_1 + 0xc410) != 0) && (iVar5 = *(int *)(param_1 + 0xc49c), iVar5 != 0)) {
    if ((uint *)(param_1 + 0xc3f0) != (uint *)(iVar5 + 0x20)) {
      *(uint *)(param_1 + 0xc3f0) = *(uint *)(iVar5 + 0x20);
      *(uint *)(param_1 + 0xc3f4) = *(uint *)(iVar5 + 0x24);
      *(uint *)(param_1 + 0xc3f8) = *(uint *)(iVar5 + 0x28);
    }
    *(float *)(param_1 + 0xc3f4) = *(float *)(param_1 + 0xc3f4) + _DAT_005f8c80;
  }
  iVar5 = *(int *)(param_1 + 0xc424);
  if (iVar5 == 2) {
    return;
  }
  if (iVar5 == 3) {
    return;
  }
  if (iVar5 == 1) {
    pfVar6 = (float *)(param_1 + 0x24 + (uint)bVar8 * -8);
    fStack_15c = *(float *)(param_1 + 0x20);
    afStack_17c[(uint)bVar8 * -2 + 9] = *pfVar6;
    afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] = pfVar6[(uint)bVar8 * -2 + 1];
    *(float *)(param_1 + 0xc41c) = param_2 * (float)_DAT_005f8cc8 + *(float *)(param_1 + 0xc41c);
    fStack_90 = *(float *)(param_1 + 0xc418) * param_2;
    uVar4 = 0;
    pfStack_24 = (float *)(param_1 + 0xc418);
    pfVar6 = (float *)(param_1 + 0x20);
    fStack_8c = *(float *)(param_1 + 0xc41c) * param_2;
    fStack_88 = *(float *)(param_1 + 0xc420) * param_2;
    fStack_108 = fStack_90;
    afStack_11c[(uint)bVar8 * -2 + 6] = afStack_d4[(uint)bVar8 * -2 + 0x12];
    afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
    *pfVar6 = *pfVar6 + fStack_108;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_104;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_100;
    *(float *)(param_1 + 0x38) =
         param_2 * *(float *)(param_1 + 0xc404) * _DAT_005f8cd0 + *(float *)(param_1 + 0x38);
    pfStack_20 = pfVar6;
    fStack_18 = (float)FUN_0048b150(&DAT_01fe5c1c,afStack_17c + 8,pfVar6,auStack_12c,uVar4);
    if ((0.0 <= fStack_18) && (fStack_18 < 1.0)) {
      afStack_d4[2] = *pfStack_20 - fStack_15c;
      afStack_d4[3] = pfStack_20[1] - fStack_158;
      fStack_c4 = pfStack_20[2] - fStack_154;
      afStack_11c[2] = *pfStack_20 - fStack_15c;
      afStack_11c[(uint)bVar8 * -2 + 3] = afStack_d4[(uint)bVar8 * -2 + 3];
      afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      fStack_144 = afStack_11c[2] * fStack_18;
      afStack_140[0] = afStack_11c[3] * fStack_18;
      afStack_140[1] = fStack_10c * fStack_18;
      fStack_d8 = afStack_11c[2] * fStack_18;
      afStack_d4[(uint)bVar8 * -2] = afStack_140[(uint)bVar8 * -2];
      afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      fVar2 = fStack_158;
      fVar1 = fStack_15c;
      fStack_6c = fStack_d8 * _DAT_005f8cd4;
      fStack_68 = afStack_d4[0] * _DAT_005f8cd4;
      fStack_64 = afStack_d4[1] * _DAT_005f8cd4;
      fStack_fc = fStack_d8 * _DAT_005f8cd4;
      afStack_11c[(uint)bVar8 * -2 + 9] = afStack_d4[(uint)bVar8 * -2 + 0x1b];
      afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
      fStack_168 = fVar1 + fStack_fc;
      fStack_164 = fVar2 + fStack_f8;
      fStack_160 = fStack_154 + fStack_f4;
      fStack_60 = fVar1 + fStack_fc;
      afStack_d4[(uint)bVar8 * -2 + 0x1e] = afStack_17c[(uint)bVar8 * -2 + 6];
      afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
           afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      *pfStack_20 = fStack_60;
      pfStack_20[1] = fStack_5c;
      pfStack_20[2] = fStack_58;
      pfStack_24[2] = 0.0;
      pfStack_24[1] = pfStack_24[2];
      *pfStack_24 = pfStack_24[1];
    }
    fStack_84 = fStack_15c - *(float *)(param_1 + 0x20);
    fStack_80 = fStack_158 - *(float *)(param_1 + 0x24);
    fStack_7c = fStack_154 - *(float *)(param_1 + 0x28);
    fStack_120 = fStack_84;
    afStack_11c[(uint)bVar8 * -2] = afStack_d4[(uint)bVar8 * -2 + 0x15];
    afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
    if (afStack_11c + 0xe != &fStack_120) {
      fStack_e4 = fStack_120;
      fStack_e0 = afStack_11c[0];
      fStack_dc = afStack_11c[1];
    }
    if ((float)_DAT_005f8cd8 <=
        SQRT(fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0)) {
      return;
    }
    *(uint *)(param_1 + 0xc424) = 2;
    return;
  }
  pfVar6 = (float *)(param_1 + 0x24 + (uint)bVar8 * -8);
  fStack_78 = *(float *)(param_1 + 0x20);
  afStack_d4[(uint)bVar8 * -2 + 0x18] = *pfVar6;
  afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] = pfVar6[(uint)bVar8 * -2 + 1];
  if (*(int *)(param_1 + 0xc410) == 0) {
    iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    *(int *)(param_1 + 0xc1e8) = iVar5;
    if (iVar5 != 0) {
      if (afStack_17c + 0xb != (float *)(iVar5 + 0x20)) {
        fStack_150 = *(float *)(iVar5 + 0x20);
        fStack_14c = *(float *)(iVar5 + 0x24);
        fStack_148 = *(float *)(iVar5 + 0x28);
      }
      fStack_18 = (float)(*(int *)(param_1 + 0x6c) % 8 + -4);
      fStack_14c = (float)(int)fStack_18 * (float)_DAT_005f8c90 +
                   *(float *)(param_1 + 0xc40c) + (float)_DAT_005f8c88 + fStack_14c;
      goto LAB_005a437b;
    }
  }
  else {
    *(uint *)(param_1 + 0xc1e8) = 0;
  }
  if (afStack_17c + 0xb != (float *)(param_1 + 0xc3f0)) {
    fStack_150 = *(float *)(param_1 + 0xc3f0);
    fStack_14c = *(float *)(param_1 + 0xc3f4);
    fStack_148 = *(float *)(param_1 + 0xc3f8);
  }
LAB_005a437b:
  fStack_b4 = *(float *)(param_1 + 0xc3f0) - *(float *)(param_1 + 0x20);
  fStack_b0 = *(float *)(param_1 + 0xc3f4) - *(float *)(param_1 + 0x24);
  fStack_ac = *(float *)(param_1 + 0xc3f8) - *(float *)(param_1 + 0x28);
  afStack_17c[2] = fStack_b4;
  afStack_17c[(uint)bVar8 * -2 + 3] = afStack_d4[(uint)bVar8 * -2 + 9];
  afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  if (afStack_11c + 0xe != afStack_17c + 2) {
    fStack_e4 = afStack_17c[2];
    fStack_e0 = afStack_17c[3];
    fStack_dc = fStack_16c;
  }
  if (((*(float *)(param_1 + 0xc3fc) <=
        SQRT(fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0)) ||
      (*(float *)(param_1 + 0xc400) <= ABS(fStack_e0))) &&
     (afStack_17c + 0xb != (float *)(param_1 + 0xc3f0))) {
    fStack_150 = *(float *)(param_1 + 0xc3f0);
    fStack_14c = *(float *)(param_1 + 0xc3f4);
    fStack_148 = *(float *)(param_1 + 0xc3f8);
  }
  if (0.0 < *(float *)(param_1 + 0xc414)) {
    fVar1 = *(float *)(param_1 + 0xc414) - param_2;
    *(float *)(param_1 + 0xc414) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0xc414) = 0;
    }
    if (*0x01D51C20 != 0) {
      _DAT_01d1d400 = "..\\core\\tvbat.cpp";
      _DAT_01d1d404 = 0x10a;
      FUN_005030e0("CTVBat::process - can't follow orders in network game!");
    }
    iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if (afStack_17c + 0xb != (float *)(iVar5 + 0x20)) {
      fStack_150 = *(float *)(iVar5 + 0x20);
      fStack_14c = *(float *)(iVar5 + 0x24);
      fStack_148 = *(float *)(iVar5 + 0x28);
    }
    fStack_14c = *(float *)(param_1 + 0xc40c) + (float)_DAT_005f8c88 + fStack_14c;
    *(uint *)(param_1 + 0xc1e8) = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  }
  afStack_140[2] = fStack_150 - *(float *)(param_1 + 0x20);
  afStack_140[3] = fStack_14c - *(float *)(param_1 + 0x24);
  fStack_130 = fStack_148 - *(float *)(param_1 + 0x28);
  fStack_9c = afStack_140[2];
  afStack_d4[(uint)bVar8 * -2 + 0xf] = afStack_140[(uint)bVar8 * -2 + 3];
  afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
       *(float *)(auStack_12c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -4);
  if (afStack_11c + 0xe != afStack_d4 + 0xe) {
    fStack_e4 = fStack_9c;
    fStack_e0 = fStack_98;
    fStack_dc = fStack_94;
  }
  FUN_005c1d69();
  fVar9 = SQRT((float10)fStack_e4 * (float10)fStack_e4 + (float10)fStack_dc * (float10)fStack_dc);
  fVar10 = (float10)fStack_e0;
  fVar1 = (float)fVar9;
  FUN_005c1d69();
  fStack_28 = (float)fVar9;
  fStack_1c = (float)-fVar10;
  if ((*(int *)(param_1 + 0xc1e8) != 0) && (*(int *)(param_1 + 0xc410) != 0)) {
    FUN_005593c0(auStack_1a8);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x3c))();
    iVar5 = *(int *)(param_1 + 0xc1e8);
    fStack_f0 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
    fStack_ec = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
    fStack_e8 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
    fStack_a8 = fStack_f0;
    afStack_d4[(uint)bVar8 * -2 + 0xc] = afStack_11c[(uint)bVar8 * -2 + 0xc];
    afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    if (afStack_11c + 0xe != afStack_d4 + 0xb) {
      fStack_e4 = fStack_a8;
      fStack_e0 = fStack_a4;
      fStack_dc = fStack_a0;
    }
    if (((fStack_194 <= fStack_e0) && (fStack_e0 <= fStack_190)) && (fVar1 < (float)_DAT_005f8c98))
    {
      FUN_0042c010(auStack_1e4);
      fStack_1e0 = 1.0;
      iStack_1b0 = param_1;
      iStack_1ac = param_1;
      (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0x108))();
      if (0.0 < fStack_1e0) {
        FUN_004e6060(0x01CD0E3C,param_1 + 0x20,0,3,0);
      }
    }
  }
  fVar9 = (float10)fsin((float10)*(float *)(param_1 + 0x30));
  fVar10 = (float10)fsin((float10)*(float *)(param_1 + 0x34));
  fVar11 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
  fVar12 = (float10)fcos((float10)*(float *)(param_1 + 0x34));
  fStack_44 = (float)-fVar9;
  fStack_30 = (float)(fVar10 * fVar11);
  fStack_2c = (float)(fVar12 * fVar11);
  fStack_28 = (float)FUN_0040cd60(fStack_28 - *(float *)(param_1 + 0x34));
  *(float *)(param_1 + 0x34) =
       fStack_28 * param_2 * *(float *)(param_1 + 0xc404) + *(float *)(param_1 + 0x34);
  fStack_18 = fStack_28;
  fStack_18 = (float)FUN_0040cd60(fStack_1c - *(float *)(param_1 + 0x30));
  fStack_1c = fStack_18;
  fVar1 = (float)_DAT_005f8ca0;
  *(float *)(param_1 + 0xc418) = *(float *)(param_1 + 0xc408) * fStack_30;
  *(float *)(param_1 + 0xc41c) = *(float *)(param_1 + 0xc408) * fStack_44;
  *(float *)(param_1 + 0xc420) = *(float *)(param_1 + 0xc408) * fStack_2c;
  *(float *)(param_1 + 0x38) = -fStack_28 * fVar1;
  *(float *)(param_1 + 0x20) =
       fStack_30 * *(float *)(param_1 + 0xc408) * param_2 + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x24) =
       fStack_44 * *(float *)(param_1 + 0xc408) * param_2 + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) =
       fStack_2c * *(float *)(param_1 + 0xc408) * param_2 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x30) =
       fStack_18 * param_2 * *(float *)(param_1 + 0xc404) + *(float *)(param_1 + 0x30);
  fStack_180 = *(float *)(param_1 + 0x20) - fStack_78;
  afStack_17c[0] = *(float *)(param_1 + 0x24) - fStack_74;
  afStack_17c[1] = *(float *)(param_1 + 0x28) - fStack_70;
  fStack_c0 = fStack_180;
  afStack_d4[(uint)bVar8 * -2 + 6] = afStack_17c[(uint)bVar8 * -2];
  afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fStack_1f0 = (fStack_bc * (float)_DAT_005f8c88) / param_2 + (float)_DAT_005f8ca8;
  if (fStack_1f0 < (float)_DAT_005f8cb0) {
    fStack_1f0 = 10.0;
  }
  if ((float)_DAT_005f8cb8 < fStack_1f0) {
    fStack_1f0 = 60.0;
  }
  *(float *)(param_1 + 0xc3ec) =
       (fStack_1f0 - *(float *)(param_1 + 0xc3ec)) * (float)_DAT_005f8cc0 +
       *(float *)(param_1 + 0xc3ec);
  *(float *)(param_1 + 0xc268) =
       param_2 * *(float *)(param_1 + 0xc3ec) * *(float *)(param_1 + 0xc3e8) +
       *(float *)(param_1 + 0xc268);
  iVar5 = FUN_00468900(param_1 + 0xc26c);
  fStack_18 = *(float *)(iVar5 + 0x100);
  if (*(float *)(param_1 + 0xc268) < (float)(int)fStack_18) {
    if (*(float *)(param_1 + 0xc268) < 0.0) {
      fStack_18 = (float)((int)fStack_18 + -1);
      *(float *)(param_1 + 0xc268) = (float)(int)fStack_18;
    }
  }
  else {
    *(uint *)(param_1 + 0xc268) = 0;
  }
  if ((*(char *)(param_1 + 0xc428) != '\0') &&
     (param_2 = *(float *)(param_1 + 0xc498) - param_2, *(float *)(param_1 + 0xc498) = param_2,
     param_2 <= 0.0)) {
    iVar5 = FUN_005735a0(*(uint *)(param_1 + 0xc494));
    if ((iVar5 == 0) &&
       (iVar5 = FUN_00574010((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                             (double)*(float *)(param_1 + 0x28),0x42480000), iVar5 != 0)) {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))();
      *(uint *)(param_1 + 0xc494) = uVar4;
    }
    uVar4 = FUN_0040cc00();
    *(uint *)(param_1 + 0xc498) = uVar4;
    return;
  }
  return;
}
