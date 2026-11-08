// Name: FUN_004a6090
// Address: 004a6090
// Address Range: [[004a6090, 004a6a33]]
// Convention: unknown
// Signature: undefined4 FUN_004a6090(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a6090(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_10b4 [974];
  byte auStack_170 [4];
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  byte auStack_148 [4];
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120 [6];
  uint local_108 [6];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  uint uStack_d8;
  float fStack_d4;
  uint uStack_d0;
  int iStack_cc;
  float afStack_c8 [2];
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_94;
  uint uStack_90;
  float afStack_8c [2];
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  uint uStack_6c;
  float afStack_68 [2];
  float afStack_60 [3];
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  float afStack_2c [3];
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar7 = 0;
  if (((*(int *)(param_1 + 0x1b4) != 0) || (*(int *)(0x01D81080 + 0x1008) != 0)) &&
     (iVar1 = FUN_0046d540(DAT_005f2afc), iVar1 == 0)) {
    FUN_004087f0(param_1);
    if (*(int *)(param_1 + 0x298) != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar4 = local_120;
      puVar6 = local_108;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      uVar2 = FUN_0041daf0(local_108);
      *(uint *)(param_1 + 0x290) = uVar2;
    }
    if ((*(int *)(param_1 + 0x290) != 0) &&
       (1.0 < SQRT(*(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x160) +
                   *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158) +
                   *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x15c)) *
              *(float *)(param_1 + 0x1ac))) {
      FUN_00537390(0x01ED78C8,param_1 + 0x168);
    }
    if ((*(int *)(param_1 + 0x290) != 0) && (*(int *)(param_1 + 0x1a8) != 3)) {
      FUN_0046d230(DAT_005f2afc);
      uVar2 = 0;
      afStack_60[0] = (float)uStack_90;
      afStack_68[(uint)bVar7 * -2 + 3] = afStack_8c[(uint)bVar7 * -2];
      afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      afStack_60[0] = 0.0;
      afStack_60[1] = 0.0;
      FUN_0046cee0(DAT_005f2afc,afStack_68 + 2,uVar2);
      iStack_20 = 1;
      uStack_9c = 0;
      uStack_98 = 0;
      iStack_94 = 0;
      FUN_0046d230(DAT_005f2afc);
      afStack_60[0] = (float)iStack_cc;
      afStack_68[(uint)bVar7 * -2 + 3] = afStack_c8[(uint)bVar7 * -2];
      afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if ((0x2000 < (int)afStack_60[0]) || ((int)afStack_60[0] < -0x2000)) {
        iStack_20 = 3;
      }
      iVar1 = 0;
      if (0 < iStack_20) {
        do {
          FUN_0046cee0(DAT_005f2afc,&uStack_9c,0);
          fStack_48 = *(float *)(param_1 + 0x158) * _DAT_005c0bdc;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          iStack_e4 = (int)ROUND(fStack_48 * _DAT_005dfe50);
          iStack_e0 = (int)ROUND(_DAT_005dfe50 * 0.0);
          iStack_dc = (int)ROUND(_DAT_005dfe50 * 0.0);
          FUN_005632a3(*DAT_005f2afc,&iStack_e4);
          fStack_44 = *(float *)(param_1 + 0x15c);
          iStack_c0 = (int)ROUND(fStack_48 * _DAT_005dfe50);
          iStack_bc = (int)ROUND(fStack_44 * _DAT_005dfe50);
          iStack_b8 = (int)ROUND(fStack_40 * _DAT_005dfe50);
          FUN_005632a3(*DAT_005f2afc + 0x30,afStack_c8 + 2);
          fStack_48 = -fStack_48;
          iStack_a8 = (int)ROUND(fStack_48 * _DAT_005dfe50);
          iStack_a4 = (int)ROUND(fStack_44 * _DAT_005dfe50);
          iStack_a0 = (int)ROUND(fStack_40 * _DAT_005dfe50);
          FUN_005632a3(*DAT_005f2afc + 0x60,&iStack_a8);
          fStack_44 = 0.0;
          iStack_78 = (int)ROUND(fStack_48 * _DAT_005dfe50);
          iStack_74 = (int)ROUND(_DAT_005dfe50 * 0.0);
          iStack_70 = (int)ROUND(fStack_40 * _DAT_005dfe50);
          FUN_005632a3(*DAT_005f2afc + 0x90,&iStack_78);
          (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1 + 0x20,0);
          DAT_0060b040 = 0xffff - _DAT_01c6e24c;
          if (iStack_20 == 3) {
            DAT_0060b040 = DAT_0060b040 / 2;
          }
          if (*(int *)(param_1 + 0x1a8) == 4) {
            DAT_0060b040 = DAT_0060b040 / 4;
          }
          if (*(int *)(param_1 + 0x1a8) == 1) {
            DAT_0060b040 = DAT_0060b040 / 2;
          }
          DAT_0060b034 = 0xffff;
          DAT_0060b038 = 0xffff;
          DAT_0060b03c = 0xffff;
          DAT_0060b064 = 0xffff;
          DAT_0060b068 = 0xffff;
          DAT_0060b06c = 0xffff;
          _DAT_0060b094 = 0xffff;
          _DAT_0060b098 = 0xffff;
          _DAT_0060b09c = 0xffff;
          _DAT_0060b0c4 = 0xffff;
          _DAT_0060b0c8 = 0xffff;
          _DAT_0060b0cc = 0xffff;
          if (*(int *)(param_1 + 0x294) == 0) {
            DAT_0060b02c = 0x80000;
            _DAT_0060b05c = 0x80000;
            _DAT_0060b08c = 0xf80000;
            _DAT_0060b0bc = 0xf80000;
          }
          else {
            DAT_0060b02c = 0xf80000;
            _DAT_0060b05c = 0xf80000;
            _DAT_0060b08c = 0x80000;
            _DAT_0060b0bc = 0x80000;
          }
          _DAT_0060b0c0 = 0xf80000;
          DAT_0060b090 = 0x80000;
          _DAT_0060b060 = 0x80000;
          _DAT_0060b030 = 0xf80000;
          fVar8 = (float10)*(float *)(param_1 + 0x164);
          DAT_0060b070 = DAT_0060b040;
          _DAT_0060b0a0 = DAT_0060b040;
          _DAT_0060b0d0 = DAT_0060b040;
          FUN_005a3120();
          fStack_18 = (float)(int)ROUND(fVar8);
          FUN_0046e5e0(DAT_005f2afc,
                       &DAT_005fde88 +
                       ((int)fStack_18 % 8) * 0x18 + *(int *)(param_1 + 0x1a8) * 0xc0);
          FUN_0046d4b0(DAT_005f2afc,1);
          uStack_144 = 4;
          uStack_134 = 0;
          uStack_138 = 0;
          uStack_13c = 0;
          uStack_140 = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          FUN_0046c510(DAT_005f2afc,auStack_148);
          FUN_0046d4b0(DAT_005f2afc,0);
          thunk_FUN_004e5ef0(DAT_005f2afc);
          iVar1 = iVar1 + 1;
          iStack_94 = iStack_94 + 0x2aaa;
        } while (iVar1 < iStack_20);
      }
      thunk_FUN_004e5ef0(DAT_005f2afc);
    }
    FUN_00408830(param_1);
    if ((*(int *)(param_1 + 0x1a8) == 1) &&
       (afStack_2c[2] = *(float *)(param_1 + 0x15c) * (float)_DAT_005c0be4,
       *(int *)(param_1 + 0x290) != 0)) {
      FUN_0046d250(DAT_005f2afc);
      uStack_30 = uStack_6c;
      afStack_2c[(uint)bVar7 * -2] = afStack_68[(uint)bVar7 * -2];
      afStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_d4 = *(float *)(param_1 + 0x15c) * (float)_DAT_005c0bec;
      uStack_d8 = 0;
      uStack_d0 = 0;
      fStack_18 = fStack_d4;
      FUN_0046cf30(DAT_005f2afc,&uStack_30,&uStack_d8);
      fStack_18 = (float)FUN_0040ce40(0x3f7ae148,0x3f828f5c);
      fStack_f0 = fStack_18 * afStack_2c[2];
      fStack_e8 = 0.0;
      fStack_54 = (float)(int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_50 = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_4c = (int)ROUND(_DAT_005dfe50 * 0.0);
      fStack_ec = fStack_f0;
      FUN_005632a3(*DAT_005f2afc,afStack_68 + 5);
      fStack_f0 = -fStack_f0;
      iStack_3c = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_38 = (int)ROUND(fStack_ec * _DAT_005dfe50);
      iStack_34 = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      FUN_005632a3(*DAT_005f2afc + 0x30,&iStack_3c);
      fStack_ec = -fStack_ec;
      iStack_b4 = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_b0 = (int)ROUND(fStack_ec * _DAT_005dfe50);
      iStack_ac = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      FUN_005632a3(*DAT_005f2afc + 0x60,&iStack_b4);
      fStack_f0 = -fStack_f0;
      iStack_84 = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_80 = (int)ROUND(fStack_ec * _DAT_005dfe50);
      iStack_7c = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      FUN_005632a3(*DAT_005f2afc + 0x90,afStack_8c + 2);
      iStack_1c = 0;
      do {
        piVar3 = (int *)(*DAT_005f2afc + iStack_1c);
        iVar1 = piVar3[2];
        if (0x200 < iVar1) {
          iVar5 = iVar1 + -0x100;
          *piVar3 = (int)(((longlong)*piVar3 * (longlong)iVar5) / (longlong)iVar1);
          piVar3[1] = (int)(((longlong)piVar3[1] * (longlong)iVar5) / (longlong)iVar1);
          piVar3[2] = iVar5;
          FUN_004e5590(piVar3);
        }
        piVar3 = DAT_005f2afc;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
      *(uint *)(*DAT_005f2afc + 0x2c) = 0x4000;
      *(uint *)(*piVar3 + 0x5c) = 0x4000;
      *(uint *)(*piVar3 + 0x8c) = 0x4000;
      *(uint *)(*piVar3 + 0xbc) = 0x4000;
      *(uint *)(*piVar3 + 0x18) = 0x80000;
      *(uint *)(*piVar3 + 0x1c) = 0xf80000;
      *(uint *)(*piVar3 + 0x48) = 0xf80000;
      *(uint *)(*piVar3 + 0x4c) = 0xf80000;
      *(uint *)(*piVar3 + 0x78) = 0xf80000;
      *(uint *)(*piVar3 + 0x7c) = 0x80000;
      *(uint *)(*piVar3 + 0xa8) = 0x80000;
      *(uint *)(*piVar3 + 0xac) = 0x80000;
      uStack_15c = 0;
      uStack_160 = 0;
      uStack_164 = 0;
      uStack_168 = 0;
      uStack_158 = 0;
      uStack_150 = 2;
      uStack_14c = 3;
      uStack_16c = 4;
      uStack_154 = 1;
      FUN_0046e5e0(piVar3,&DAT_005fde70);
      FUN_0046d4b0(DAT_005f2afc,1);
      FUN_0046b850(DAT_005f2afc,auStack_170,0x163);
      FUN_0046d4b0(DAT_005f2afc,0);
      thunk_FUN_004e5ef0(DAT_005f2afc);
    }
    return *(uint *)(param_1 + 0x290);
  }
  return 0;
}
