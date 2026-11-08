// Name: FUN_004b8100
// Address: 004b8100
// Address Range: [[004b8100, 004b8aa3]]
// Convention: unknown
// Signature: undefined4 FUN_004b8100(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b8100(int param_1)

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
  if (((*(int *)(param_1 + 0x1b4) != 0) || (*(int *)(0x01D2C900 + 0x1008) != 0)) &&
     (iVar1 = FUN_00483e60(DAT_00612560), iVar1 == 0)) {
    FUN_004087b0(param_1);
    if (*(int *)(param_1 + 0x298) != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar4 = local_120;
      puVar6 = local_108;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      uVar2 = FUN_004207b0(local_108);
      *(uint *)(param_1 + 0x290) = uVar2;
    }
    if ((*(int *)(param_1 + 0x290) != 0) &&
       (1.0 < SQRT(*(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x160) +
                   *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158) +
                   *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x15c)) *
              *(float *)(param_1 + 0x1ac))) {
      FUN_00551a00(0x01E82168,param_1 + 0x168);
    }
    if ((*(int *)(param_1 + 0x290) != 0) && (*(int *)(param_1 + 0x1a8) != 3)) {
      FUN_00483b50(DAT_00612560);
      uVar2 = 0;
      afStack_60[0] = (float)uStack_90;
      afStack_68[(uint)bVar7 * -2 + 3] = afStack_8c[(uint)bVar7 * -2];
      afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      afStack_60[0] = 0.0;
      afStack_60[1] = 0.0;
      FUN_00483800(DAT_00612560,afStack_68 + 2,uVar2);
      iStack_20 = 1;
      uStack_9c = 0;
      uStack_98 = 0;
      iStack_94 = 0;
      FUN_00483b50(DAT_00612560);
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
          FUN_00483800(DAT_00612560,&uStack_9c,0);
          fStack_48 = *(float *)(param_1 + 0x158) * _DAT_005df6c7;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          iStack_e4 = (int)ROUND(fStack_48 * _DAT_00600380);
          iStack_e0 = (int)ROUND(_DAT_00600380 * 0.0);
          iStack_dc = (int)ROUND(_DAT_00600380 * 0.0);
          FUN_00580173(*DAT_00612560,&iStack_e4);
          fStack_44 = *(float *)(param_1 + 0x15c);
          iStack_c0 = (int)ROUND(fStack_48 * _DAT_00600380);
          iStack_bc = (int)ROUND(fStack_44 * _DAT_00600380);
          iStack_b8 = (int)ROUND(fStack_40 * _DAT_00600380);
          FUN_00580173(*DAT_00612560 + 0x30,afStack_c8 + 2);
          fStack_48 = -fStack_48;
          iStack_a8 = (int)ROUND(fStack_48 * _DAT_00600380);
          iStack_a4 = (int)ROUND(fStack_44 * _DAT_00600380);
          iStack_a0 = (int)ROUND(fStack_40 * _DAT_00600380);
          FUN_00580173(*DAT_00612560 + 0x60,&iStack_a8);
          fStack_44 = 0.0;
          iStack_78 = (int)ROUND(fStack_48 * _DAT_00600380);
          iStack_74 = (int)ROUND(_DAT_00600380 * 0.0);
          iStack_70 = (int)ROUND(fStack_40 * _DAT_00600380);
          FUN_00580173(*DAT_00612560 + 0x90,&iStack_78);
          (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1 + 0x20,0);
          DAT_00629040 = 0xffff - _DAT_01c51cac;
          if (iStack_20 == 3) {
            DAT_00629040 = DAT_00629040 / 2;
          }
          if (*(int *)(param_1 + 0x1a8) == 4) {
            DAT_00629040 = DAT_00629040 / 4;
          }
          if (*(int *)(param_1 + 0x1a8) == 1) {
            DAT_00629040 = DAT_00629040 / 2;
          }
          DAT_00629034 = 0xffff;
          DAT_00629038 = 0xffff;
          DAT_0062903c = 0xffff;
          DAT_00629064 = 0xffff;
          DAT_00629068 = 0xffff;
          DAT_0062906c = 0xffff;
          DAT_00629094 = 0xffff;
          DAT_00629098 = 0xffff;
          DAT_0062909c = 0xffff;
          DAT_006290c4 = 0xffff;
          DAT_006290c8 = 0xffff;
          DAT_006290cc = 0xffff;
          if (*(int *)(param_1 + 0x294) == 0) {
            DAT_0062902c = 0x80000;
            _DAT_0062905c = 0x80000;
            _DAT_0062908c = 0xf80000;
            _DAT_006290bc = 0xf80000;
          }
          else {
            DAT_0062902c = 0xf80000;
            _DAT_0062905c = 0xf80000;
            _DAT_0062908c = 0x80000;
            _DAT_006290bc = 0x80000;
          }
          _DAT_006290c0 = 0xf80000;
          DAT_00629090 = 0x80000;
          _DAT_00629060 = 0x80000;
          _DAT_00629030 = 0xf80000;
          fVar8 = (float10)*(float *)(param_1 + 0x164);
          DAT_00629070 = DAT_00629040;
          _DAT_006290a0 = DAT_00629040;
          _DAT_006290d0 = DAT_00629040;
          FUN_005c03a0();
          fStack_18 = (float)(int)ROUND(fVar8);
          FUN_00484f00(DAT_00612560,
                       &DAT_0061cdc0 +
                       ((int)fStack_18 % 8) * 0x18 + *(int *)(param_1 + 0x1a8) * 0xc0);
          FUN_00483dd0(DAT_00612560,1);
          uStack_144 = 4;
          uStack_134 = 0;
          uStack_138 = 0;
          uStack_13c = 0;
          uStack_140 = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          FUN_00482e30(DAT_00612560,auStack_148);
          FUN_00483dd0(DAT_00612560,0);
          thunk_FUN_005084b0(DAT_00612560);
          iVar1 = iVar1 + 1;
          iStack_94 = iStack_94 + 0x2aaa;
        } while (iVar1 < iStack_20);
      }
      thunk_FUN_005084b0(DAT_00612560);
    }
    FUN_004087f0(param_1);
    if ((*(int *)(param_1 + 0x1a8) == 1) &&
       (afStack_2c[2] = *(float *)(param_1 + 0x15c) * (float)_DAT_005df6cf,
       *(int *)(param_1 + 0x290) != 0)) {
      FUN_00483b70(DAT_00612560);
      uStack_30 = uStack_6c;
      afStack_2c[(uint)bVar7 * -2] = afStack_68[(uint)bVar7 * -2];
      afStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_d4 = *(float *)(param_1 + 0x15c) * (float)_DAT_005df6d7;
      uStack_d8 = 0;
      uStack_d0 = 0;
      fStack_18 = fStack_d4;
      FUN_00483850(DAT_00612560,&uStack_30,&uStack_d8);
      fStack_18 = (float)FUN_0040cc00(0x3f7ae148,0x3f828f5c);
      fStack_f0 = fStack_18 * afStack_2c[2];
      fStack_e8 = 0.0;
      fStack_54 = (float)(int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_50 = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_4c = (int)ROUND(_DAT_00600380 * 0.0);
      fStack_ec = fStack_f0;
      FUN_00580173(*DAT_00612560,afStack_68 + 5);
      fStack_f0 = -fStack_f0;
      iStack_3c = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_38 = (int)ROUND(fStack_ec * _DAT_00600380);
      iStack_34 = (int)ROUND(fStack_e8 * _DAT_00600380);
      FUN_00580173(*DAT_00612560 + 0x30,&iStack_3c);
      fStack_ec = -fStack_ec;
      iStack_b4 = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_b0 = (int)ROUND(fStack_ec * _DAT_00600380);
      iStack_ac = (int)ROUND(fStack_e8 * _DAT_00600380);
      FUN_00580173(*DAT_00612560 + 0x60,&iStack_b4);
      fStack_f0 = -fStack_f0;
      iStack_84 = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_80 = (int)ROUND(fStack_ec * _DAT_00600380);
      iStack_7c = (int)ROUND(fStack_e8 * _DAT_00600380);
      FUN_00580173(*DAT_00612560 + 0x90,afStack_8c + 2);
      iStack_1c = 0;
      do {
        piVar3 = (int *)(*DAT_00612560 + iStack_1c);
        iVar1 = piVar3[2];
        if (0x200 < iVar1) {
          iVar5 = iVar1 + -0x100;
          *piVar3 = (int)(((longlong)*piVar3 * (longlong)iVar5) / (longlong)iVar1);
          piVar3[1] = (int)(((longlong)piVar3[1] * (longlong)iVar5) / (longlong)iVar1);
          piVar3[2] = iVar5;
          FUN_00507b50(piVar3);
        }
        piVar3 = DAT_00612560;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
      *(uint *)(*DAT_00612560 + 0x2c) = 0x4000;
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
      FUN_00484f00(piVar3,&DAT_0061cda8);
      FUN_00483dd0(DAT_00612560,1);
      FUN_00482170(DAT_00612560,auStack_170,0x163);
      FUN_00483dd0(DAT_00612560,0);
      thunk_FUN_005084b0(DAT_00612560);
    }
    return *(uint *)(param_1 + 0x290);
  }
  return 0;
}
