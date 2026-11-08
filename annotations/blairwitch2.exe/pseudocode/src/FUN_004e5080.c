// Name: FUN_004e5080
// Address: 004e5080
// Address Range: [[004e5080, 004e56ce]]
// Convention: unknown
// Signature: void FUN_004e5080(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5080(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_10a0 [928];
  byte *puVar12;
  byte auStack_20c [48];
  uint auStack_1dc [12];
  byte auStack_1ac [48];
  uint auStack_17c [12];
  uint auStack_14c [3];
  byte auStack_140 [12];
  byte auStack_134 [12];
  byte auStack_128 [12];
  byte auStack_11c [40];
  uint uStack_f4;
  float fStack_f0;
  float fStack_e4;
  float fStack_e0;
  uint auStack_dc [6];
  byte auStack_c4 [4];
  uint uStack_c0;
  uint uStack_b8;
  float afStack_b4 [5];
  uint uStack_a0;
  float afStack_9c [4];
  uint uStack_8c;
  float fStack_88;
  float afStack_84 [5];
  float fStack_70;
  float afStack_64 [3];
  uint uStack_58;
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float *pfStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  FUN_00408a80(param_1);
  FUN_0044fd00(param_1 + 0x2b4);
  FUN_0044fd00(param_1 + 0x430);
  FUN_0044fd00(param_1 + 0x5ac);
  FUN_0046ca00(DAT_0060b280,param_1 + 0x161c);
  iVar3 = FUN_0044fd20(param_1 + 0x2b4);
  puVar6 = (uint *)(iVar3 + 0x338);
  puVar7 = &uStack_f4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  *(uint *)(param_1 + 0x1668) = 0x414239c1;
  fVar9 = (float10)fcos((float10)_DAT_005f98bc * (float10)_DAT_005dc4ed);
  *(float *)(param_1 + 0x166c) = fStack_e4 - fStack_f0;
  *(float *)(param_1 + 0x1664) =
       (float)(((float10)*(float *)(param_1 + 0x1668) + (float10)fStack_e0) / fVar9);
  if (SQRT(*(float *)(param_1 + 0x748) * *(float *)(param_1 + 0x748) +
           *(float *)(param_1 + 0x740) * *(float *)(param_1 + 0x740) +
           *(float *)(param_1 + 0x744) * *(float *)(param_1 + 0x744)) == 0.0) {
    *(uint *)(param_1 + 0x740) = 0;
    fVar1 = (float)_DAT_005dc4f5;
    *(uint *)(param_1 + 0x748) = 0xbf8ccccd;
    *(float *)(param_1 + 0x744) = *(float *)(param_1 + 0x166c) + fVar1;
  }
  if (SQRT(*(float *)(param_1 + 0x730) * *(float *)(param_1 + 0x730) +
           *(float *)(param_1 + 0x728) * *(float *)(param_1 + 0x728) +
           *(float *)(param_1 + 0x72c) * *(float *)(param_1 + 0x72c)) == 0.0) {
    *(uint *)(param_1 + 0x72c) = 0x40400000;
    *(uint *)(param_1 + 0x730) = 0xbdcccccd;
    *(uint *)(param_1 + 0x728) = 0;
  }
  FUN_00591c10(auStack_1ac,param_1 + 0x728,param_1 + 0x734);
  iVar3 = FUN_0044fd20(param_1 + 0x430);
  iStack_38 = param_1 + 0xbfc;
  pfStack_2c = (float *)(param_1 + 0xc20);
  iStack_28 = 0;
  iStack_30 = param_1 + 0xc00;
  iStack_34 = param_1 + 0xc04;
  puVar6 = (uint *)(iVar3 + 0x338);
  puVar7 = auStack_dc;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  do {
    iVar3 = iStack_28;
    FUN_004e6240(param_1,iStack_28);
    iVar5 = iStack_38 + iVar3 * 0xb8;
    iStack_24 = iVar5;
    FUN_004e6a50(param_1,iVar3,iVar5,iStack_30,iStack_34);
    *(uint *)(iVar5 + 0x14) = 0;
    *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x14);
    *(uint *)(iVar5 + 0x20) = 0;
    *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0x10);
    *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x20);
    iStack_14 = iVar3;
    afStack_9c[3] = (float)iVar3 * _DAT_005f98bc;
    *(uint *)(iVar5 + 0xac) = 0;
    *(uint *)(iVar5 + 0xb0) = 0;
    *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x1c);
    *(uint *)(iVar5 + 0xb4) = 0;
    afStack_9c[2] = 0.0;
    uStack_8c = 0;
    FUN_00449280(auStack_11c,afStack_9c + 2);
    afStack_b4[4] = *(float *)(param_1 + 0x1668);
    afStack_b4[2] = 0.0;
    afStack_b4[3] = 0.0;
    FUN_00449530(auStack_11c,afStack_b4 + 2,afStack_9c + 2);
    pfVar4 = afStack_84 + 8;
    puVar12 = auStack_20c;
    afStack_64[0] = (float)uStack_58;
    afStack_84[(uint)bVar8 * -2 + 9] = afStack_84[(uint)bVar8 * -2 + 0xc];
    afStack_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    FUN_00591c10(puVar12,pfVar4);
    FUN_005916b0(auStack_1ac,auStack_20c);
    puVar6 = auStack_17c;
    puVar7 = auStack_1dc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    FUN_00592720(auStack_1dc);
    fStack_88 = fStack_70;
    afStack_84[(uint)bVar8 * -2] = afStack_84[(uint)bVar8 * -2 + 6];
    iVar3 = iStack_24;
    afStack_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    if (afStack_9c + 5 != pfStack_2c) {
      *pfStack_2c = fStack_88;
      pfStack_2c[1] = afStack_84[0];
      pfStack_2c[2] = afStack_84[1];
    }
    FUN_00591de0(auStack_1dc);
    fStack_4c = afStack_84[2];
    afStack_84[(uint)bVar8 * -2 + 0xf] = afStack_84[(uint)bVar8 * -2 + 3];
    afStack_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_84[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if ((float *)(iVar3 + 0x30) != afStack_84 + 0xe) {
      *(float *)(iVar3 + 0x30) = fStack_4c;
      *(uint *)(iVar3 + 0x34) = uStack_48;
      *(uint *)(iVar3 + 0x38) = uStack_44;
    }
    puVar6 = auStack_14c;
    FUN_005b7f5f(auStack_14c,4,&DAT_005f22b0);
    iStack_18 = 0;
    do {
      uStack_c0 = 0;
      FUN_00591530(auStack_c4,auStack_1dc);
      uStack_a0 = uStack_b8;
      afStack_9c[(uint)bVar8 * -2] = afStack_b4[(uint)bVar8 * -2];
      afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (puVar6 != &uStack_a0) {
        *puVar6 = uStack_a0;
        puVar6[1] = afStack_9c[0];
        puVar6[2] = afStack_9c[1];
      }
      iStack_18 = iStack_18 + 1;
      puVar6 = puVar6 + 3;
    } while (iStack_18 < 4);
    FUN_004779e0(iStack_24 + 0x3c,auStack_134,auStack_140,auStack_14c);
    pfStack_2c = pfStack_2c + 0x2e;
    FUN_004779e0(iStack_24 + 0x74,auStack_134,auStack_128,auStack_140);
    iStack_30 = iStack_30 + 0xb8;
    iStack_34 = iStack_34 + 0xb8;
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 0xc);
  fVar9 = (float10)fcos((float10)_DAT_005f98bc);
  fVar10 = (float10)fsin((float10)_DAT_005f98bc);
  fVar2 = (float)_DAT_005dc4fd;
  fVar11 = (float10)_DAT_005dc4ed;
  pfVar4 = (float *)(param_1 + 0x14a8);
  fVar1 = (float)_DAT_005dc505;
  *(float *)(param_1 + 0x14b0) = (float)(fVar9 * (float10)*(float *)(param_1 + 0x1668) * fVar11);
  *pfVar4 = (float)((float10)*(float *)(param_1 + 0x1668) * fVar10 * fVar11);
  *(float *)(param_1 + 0x14ac) =
       *(float *)(param_1 + 0x744) * fVar1 + *(float *)(param_1 + 0x72c) * fVar2;
  if ((float *)(param_1 + 0x149c) != pfVar4) {
    *(float *)(param_1 + 0x149c) = *pfVar4;
    *(uint *)(param_1 + 0x14a0) = *(uint *)(param_1 + 0x14ac);
    *(uint *)(param_1 + 0x14a4) = *(uint *)(param_1 + 0x14b0);
  }
  *(uint *)(param_1 + 0x14c4) = 0xbda4de71;
  *(uint *)(param_1 + 0x14cc) = 0;
  *(uint *)(param_1 + 0x14c8) = 0xbfc529dc;
  *(float *)(param_1 + 0x14a0) = *(float *)(param_1 + 0x14a0) + _DAT_005dc50d;
  FUN_00449280(param_1 + 0x14d0,(uint *)(param_1 + 0x14c4));
  *(uint *)(param_1 + 0x1500) = *(uint *)(param_1 + 0x14a0);
  *(uint *)(param_1 + 0x1504) = *(uint *)(param_1 + 0x14a4);
  *(uint *)(param_1 + 0x150c) = *(uint *)(param_1 + 0x14ac);
  *(uint *)(param_1 + 0x1510) = *(uint *)(param_1 + 0x14b0);
  *(uint *)(param_1 + 0x1524) = *(uint *)(param_1 + 0x14c4);
  *(uint *)(param_1 + 0x152c) = *(uint *)(param_1 + 0x14cc);
  *(float *)(param_1 + 0x14fc) = -*(float *)(param_1 + 0x149c);
  *(float *)(param_1 + 0x1508) = -*(float *)(param_1 + 0x14a8);
  *(float *)(param_1 + 0x1528) = -*(float *)(param_1 + 0x14c8);
  iVar3 = 0;
  FUN_00449280(param_1 + 0x1530,(uint *)(param_1 + 0x1524));
  do {
    FUN_004e7600(param_1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}
