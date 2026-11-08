// Name: FUN_0041f360
// Address: 0041f360
// Address Range: [[0041f360, 0041f8dd]]
// Convention: unknown
// Signature: void FUN_0041f360(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f360(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  float afStackY_10c8 [986];
  float fVar8;
  byte auStack_14c [4];
  float fStack_148;
  int iStack_118;
  int iStack_114;
  float afStack_110 [6];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [4];
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float afStack_b0 [3];
  float afStack_a4 [3];
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
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  double dStack_2c;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  if (*(char *)(param_1 + 0x664) != '\0') {
    iVar2 = FUN_00491aa0(0x01C6E360,param_1 + 0x664);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0xfc) = 1;
      *(uint *)(param_1 + 0xf8) = 0;
      *(uint *)(param_1 + 0x6dc) = *(uint *)(param_1 + 0x6e0);
    }
  }
  iVar2 = FUN_004625a0(param_1 + 0x158);
  iVar1 = *(int *)(iVar2 + 0x100);
  fVar8 = *(float *)(param_1 + 0x30c) + *(float *)(param_1 + 0x310);
  *(float *)(param_1 + 0x310) = fVar8;
  dStack_2c = (double)FUN_005a3600((double)fVar8);
  fVar7 = (float10)dStack_2c;
  FUN_005a3120();
  iVar2 = (int)ROUND(fVar7);
  fStack_24 = *(float *)(param_1 + 0x310) - (float)iVar2;
  if (iVar2 < 0) {
    iStack_20 = iVar1 - -iVar2 % iVar1;
  }
  else {
    iStack_20 = iVar2 % iVar1;
  }
  iStack_1c = iStack_20;
  fStack_18 = (float)iVar1;
  *(float *)(param_1 + 0x310) = (float)iStack_20 + fStack_24;
  if ((float)iVar1 <= *(float *)(param_1 + 0x310)) {
    *(uint *)(param_1 + 0x310) = 0;
  }
  fStack_c8 = *(float *)(param_1 + 0x300) * param_2;
  fStack_c4 = *(float *)(param_1 + 0x304) * param_2;
  fStack_c0 = *(float *)(param_1 + 0x308) * param_2;
  fStack_8c = fStack_c8;
  afStack_dc[(uint)bVar6 * -2 + 0x15] = afStack_dc[(uint)bVar6 * -2 + 6];
  afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
       afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  fStack_74 = fStack_8c * _DAT_005b74f1;
  fStack_70 = fStack_88 * _DAT_005b74f1;
  fStack_6c = fStack_84 * _DAT_005b74f1;
  fStack_80 = fStack_8c * _DAT_005b74f1;
  afStack_dc[(uint)bVar6 * -2 + 0x18] = afStack_dc[(uint)bVar6 * -2 + 0x1b];
  afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
       afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_80;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_7c;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + fStack_78;
  fStack_18 = (float)FUN_0040cfa0(*(uint *)(param_1 + 0x30));
  *(float *)(param_1 + 0x30) = fStack_18;
  fStack_18 = (float)FUN_0040cfa0(*(uint *)(param_1 + 0x38));
  *(float *)(param_1 + 0x38) = fStack_18;
  fStack_18 = (float)FUN_0040cfa0(*(uint *)(param_1 + 0x34));
  *(float *)(param_1 + 0x34) = fStack_18;
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0x2fc));
    if (iVar2 == 0) {
      FUN_00555fd0();
      fStack_18 = (float)FUN_0040ce40(0,0x3f800000,2);
      FUN_00555f60((double)fStack_18);
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x2d4);
      *(uint *)(param_1 + 0x2fc) = uVar3;
      FUN_00556050();
    }
  }
  if ((*(int *)(param_1 + 0x318) == 0) && (0.0 < *(float *)(param_1 + 0x390))) {
    iVar2 = param_1 + 0x394;
    pfVar4 = (float *)(param_1 + 0x24 + (uint)bVar6 * -8);
    afStack_b0[0] = *(float *)(param_1 + 0x20);
    afStack_dc[(uint)bVar6 * -2 + 0xc] = *pfVar4;
    fVar8 = param_2;
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] = pfVar4[(uint)bVar6 * -2 + 1];
    FUN_0041b410(iVar2,fVar8);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x3a0)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x3a0);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x3a4);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x3a8);
    }
    FUN_004088f0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    pfVar4 = afStack_110;
    pfVar5 = &fStack_f8;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    }
    fStack_38 = fStack_f8 + fStack_ec;
    fStack_34 = fStack_f4 + fStack_e8;
    fStack_30 = fStack_f0 + fStack_e4;
    fStack_bc = fStack_f8 + fStack_ec;
    afStack_dc[(uint)bVar6 * -2 + 9] = afStack_dc[(uint)bVar6 * -2 + 0x2a];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
    pfVar4 = afStack_dc + 0xe;
    fStack_68 = fStack_bc * _DAT_005b74f5;
    fStack_64 = fStack_b8 * _DAT_005b74f5;
    fStack_60 = fStack_b4 * _DAT_005b74f5;
    fStack_50 = fStack_bc * _DAT_005b74f5;
    afStack_dc[(uint)bVar6 * -2 + 0x24] = afStack_dc[(uint)bVar6 * -2 + 0x1e];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
    fStack_98 = -fStack_50;
    fStack_94 = -fStack_4c;
    fStack_90 = -fStack_48;
    afStack_a4[0] = -fStack_50;
    afStack_dc[(uint)bVar6 * -2 + 0xf] = afStack_dc[(uint)bVar6 * -2 + 0x12];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    FUN_00408b00(param_1,pfVar4);
    fStack_e0 = fStack_5c;
    afStack_dc[(uint)bVar6 * -2] = afStack_dc[(uint)bVar6 * -2 + 0x21];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
    fStack_44 = *(float *)(param_1 + 0x394) + fStack_e0;
    fStack_40 = *(float *)(param_1 + 0x398) + afStack_dc[0];
    fStack_3c = *(float *)(param_1 + 0x39c) + afStack_dc[1];
    afStack_dc[2] = fStack_44;
    afStack_dc[(uint)bVar6 * -2 + 3] = afStack_dc[(uint)bVar6 * -2 + 0x27];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
    *(float *)(param_1 + 0x20) = afStack_dc[2];
    *(float *)(param_1 + 0x24) = afStack_dc[3];
    *(uint *)(param_1 + 0x28) = uStack_cc;
    fVar8 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                 *(float *)(param_1 + 0x3d4) * *(float *)(param_1 + 0x3d4) +
                 *(float *)(param_1 + 0x3d8) * *(float *)(param_1 + 0x3d8));
    if ((float)_DAT_005b74f9 < fVar8) {
      FUN_0042abb0(auStack_14c,fVar8);
      fStack_148 = fVar8 * *(float *)(param_1 + 0x390) * _DAT_005b7501;
      iStack_118 = param_1;
      iStack_114 = param_1;
      FUN_0053ed10(0x01ED78C8,afStack_dc + 0xb,(float *)(param_1 + 0x20),auStack_14c);
    }
  }
  if (0.0 < *(float *)(param_1 + 0x6dc)) {
    *(float *)(param_1 + 0x6dc) = *(float *)(param_1 + 0x6dc) - param_2;
  }
  if (0.0 <= *(float *)(param_1 + 0x6dc)) {
    return;
  }
  *(uint *)(param_1 + 0x6dc) = 0;
  return;
}
