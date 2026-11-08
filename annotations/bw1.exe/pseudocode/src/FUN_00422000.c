// Name: FUN_00422000
// Address: 00422000
// Address Range: [[00422000, 004224ec]]
// Convention: unknown
// Signature: void FUN_00422000(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422000(int param_1,float param_2)

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
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [6];
  float fStack_e0;
  float afStack_dc [5];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_bc [3];
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
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
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
  iVar2 = FUN_00468900(param_1 + 0x158);
  iVar1 = *(int *)(iVar2 + 0x100);
  fVar8 = *(float *)(param_1 + 0x30c) + *(float *)(param_1 + 0x310);
  *(float *)(param_1 + 0x310) = fVar8;
  dStack_2c = (double)FUN_005c0880((double)fVar8);
  fVar7 = (float10)dStack_2c;
  FUN_005c03a0();
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
  fStack_98 = fStack_c8;
  afStack_dc[(uint)bVar6 * -2 + 0x12] = afStack_dc[(uint)bVar6 * -2 + 6];
  afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
       afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  fStack_e0 = fStack_98 * _DAT_005d4c08;
  afStack_dc[0] = fStack_94 * _DAT_005d4c08;
  afStack_dc[1] = fStack_90 * _DAT_005d4c08;
  fStack_b0 = fStack_98 * _DAT_005d4c08;
  afStack_dc[(uint)bVar6 * -2 + 0xc] = afStack_dc[(uint)bVar6 * -2];
  afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_b0;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_ac;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + fStack_a8;
  fStack_18 = (float)FUN_0040cd60(*(uint *)(param_1 + 0x30));
  *(float *)(param_1 + 0x30) = fStack_18;
  fStack_18 = (float)FUN_0040cd60(*(uint *)(param_1 + 0x38));
  *(float *)(param_1 + 0x38) = fStack_18;
  fStack_18 = (float)FUN_0040cd60(*(uint *)(param_1 + 0x34));
  *(float *)(param_1 + 0x34) = fStack_18;
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    iVar2 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0x2fc));
    if (iVar2 == 0) {
      FUN_00572ac0();
      fStack_18 = (float)FUN_0040cc00(0,0x3f800000,2);
      FUN_00572a50((double)fStack_18);
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x2d4);
      *(uint *)(param_1 + 0x2fc) = uVar3;
      FUN_00572b40();
    }
  }
  if ((*(int *)(param_1 + 0x318) == 0) && (0.0 < *(float *)(param_1 + 0x390))) {
    iVar2 = param_1 + 0x394;
    pfVar4 = (float *)(param_1 + 0x24 + (uint)bVar6 * -8);
    afStack_bc[0] = *(float *)(param_1 + 0x20);
    afStack_dc[(uint)bVar6 * -2 + 9] = *pfVar4;
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] = pfVar4[(uint)bVar6 * -2 + 1];
    FUN_0041e0d0(iVar2,param_2);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x3a0)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x3a0);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x3a4);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x3a8);
    }
    FUN_004088b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    pfVar4 = afStack_f8;
    pfVar5 = &fStack_110;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    }
    fStack_50 = fStack_110 + fStack_104;
    fStack_4c = fStack_10c + fStack_100;
    fStack_48 = fStack_108 + fStack_fc;
    fStack_5c = fStack_110 + fStack_104;
    afStack_dc[(uint)bVar6 * -2 + 0x21] = afStack_dc[(uint)bVar6 * -2 + 0x24];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
    pfVar4 = afStack_dc + 2;
    fStack_74 = fStack_5c * _DAT_005d4c0c;
    fStack_70 = fStack_58 * _DAT_005d4c0c;
    fStack_6c = fStack_54 * _DAT_005d4c0c;
    fStack_44 = fStack_5c * _DAT_005d4c0c;
    afStack_dc[(uint)bVar6 * -2 + 0x27] = afStack_dc[(uint)bVar6 * -2 + 0x1b];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
    fStack_38 = -fStack_44;
    fStack_34 = -fStack_40;
    fStack_30 = -fStack_3c;
    afStack_dc[2] = -fStack_44;
    afStack_dc[(uint)bVar6 * -2 + 3] = afStack_dc[(uint)bVar6 * -2 + 0x2a];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
    FUN_00408ac0(param_1,pfVar4);
    fStack_a4 = fStack_68;
    afStack_dc[(uint)bVar6 * -2 + 0xf] = afStack_dc[(uint)bVar6 * -2 + 0x1e];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
    fStack_8c = *(float *)(param_1 + 0x394) + fStack_a4;
    fStack_88 = *(float *)(param_1 + 0x398) + fStack_a0;
    fStack_84 = *(float *)(param_1 + 0x39c) + fStack_9c;
    fStack_80 = fStack_8c;
    afStack_dc[(uint)bVar6 * -2 + 0x18] = afStack_dc[(uint)bVar6 * -2 + 0x15];
    afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    *(float *)(param_1 + 0x20) = fStack_80;
    *(uint *)(param_1 + 0x24) = uStack_7c;
    *(uint *)(param_1 + 0x28) = uStack_78;
    fVar8 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                 *(float *)(param_1 + 0x3d4) * *(float *)(param_1 + 0x3d4) +
                 *(float *)(param_1 + 0x3d8) * *(float *)(param_1 + 0x3d8));
    if ((float)_DAT_005d4c10 < fVar8) {
      FUN_0042c010(auStack_14c,fVar8);
      fStack_148 = fVar8 * *(float *)(param_1 + 0x390) * _DAT_005d4c18;
      iStack_118 = param_1;
      iStack_114 = param_1;
      FUN_00559350(0x01E82168,afStack_dc + 8,(float *)(param_1 + 0x20),auStack_14c);
      return;
    }
  }
  return;
}
