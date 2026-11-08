// Name: FUN_0049f850
// Address: 0049f850
// Address Range: [[0049f850, 004a01f3]]
// Convention: unknown
// Signature: undefined4 FUN_0049f850(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049f850(int param_1)

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
  if (((*(int *)(param_1 + 0x310) != 0) || (*(int *)(0x01D182F0 + 0x1008) != 0)) &&
     (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0)) {
    FUN_004089d0(param_1);
    if (*(int *)(param_1 + 0x3f4) != 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
      puVar4 = local_120;
      puVar6 = local_108;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      uVar2 = FUN_0041a840(local_108);
      *(uint *)(param_1 + 0x3ec) = uVar2;
    }
    if ((*(int *)(param_1 + 0x3ec) != 0) &&
       (1.0 < SQRT(*(float *)(param_1 + 700) * *(float *)(param_1 + 700) +
                   *(float *)(param_1 + 0x2b4) * *(float *)(param_1 + 0x2b4) +
                   *(float *)(param_1 + 0x2b8) * *(float *)(param_1 + 0x2b8)) *
              *(float *)(param_1 + 0x308))) {
      FUN_00530750(0x01E661B8,param_1 + 0x2c4);
    }
    if ((*(int *)(param_1 + 0x3ec) != 0) && (*(int *)(param_1 + 0x304) != 3)) {
      FUN_0046b650(DAT_0060b280);
      uVar2 = 0;
      afStack_60[0] = (float)uStack_90;
      afStack_68[(uint)bVar7 * -2 + 3] = afStack_8c[(uint)bVar7 * -2];
      afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      afStack_60[0] = 0.0;
      afStack_60[1] = 0.0;
      FUN_0046b300(DAT_0060b280,afStack_68 + 2,uVar2);
      iStack_20 = 1;
      uStack_9c = 0;
      uStack_98 = 0;
      iStack_94 = 0;
      FUN_0046b650(DAT_0060b280);
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
          FUN_0046b300(DAT_0060b280,&uStack_9c,0);
          fStack_48 = *(float *)(param_1 + 0x2b4) * _DAT_005d5885;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          iStack_e4 = (int)ROUND(fStack_48 * _DAT_005f68f0);
          iStack_e0 = (int)ROUND(_DAT_005f68f0 * 0.0);
          iStack_dc = (int)ROUND(_DAT_005f68f0 * 0.0);
          FUN_0055d723(*DAT_0060b280,&iStack_e4);
          fStack_44 = *(float *)(param_1 + 0x2b8);
          iStack_c0 = (int)ROUND(fStack_48 * _DAT_005f68f0);
          iStack_bc = (int)ROUND(fStack_44 * _DAT_005f68f0);
          iStack_b8 = (int)ROUND(fStack_40 * _DAT_005f68f0);
          FUN_0055d723(*DAT_0060b280 + 0x30,afStack_c8 + 2);
          fStack_48 = -fStack_48;
          iStack_a8 = (int)ROUND(fStack_48 * _DAT_005f68f0);
          iStack_a4 = (int)ROUND(fStack_44 * _DAT_005f68f0);
          iStack_a0 = (int)ROUND(fStack_40 * _DAT_005f68f0);
          FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_a8);
          fStack_44 = 0.0;
          iStack_78 = (int)ROUND(fStack_48 * _DAT_005f68f0);
          iStack_74 = (int)ROUND(_DAT_005f68f0 * 0.0);
          iStack_70 = (int)ROUND(fStack_40 * _DAT_005f68f0);
          FUN_0055d723(*DAT_0060b280 + 0x90,&iStack_78);
          (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1 + 0x20,0);
          DAT_00622040 = 0xffff - _DAT_01c38aec;
          if (iStack_20 == 3) {
            DAT_00622040 = DAT_00622040 / 2;
          }
          if (*(int *)(param_1 + 0x304) == 4) {
            DAT_00622040 = DAT_00622040 / 4;
          }
          if (*(int *)(param_1 + 0x304) == 1) {
            DAT_00622040 = DAT_00622040 / 2;
          }
          DAT_00622034 = 0xffff;
          DAT_00622038 = 0xffff;
          DAT_0062203c = 0xffff;
          DAT_00622064 = 0xffff;
          DAT_00622068 = 0xffff;
          DAT_0062206c = 0xffff;
          DAT_00622094 = 0xffff;
          DAT_00622098 = 0xffff;
          DAT_0062209c = 0xffff;
          DAT_006220c4 = 0xffff;
          DAT_006220c8 = 0xffff;
          DAT_006220cc = 0xffff;
          if (*(int *)(param_1 + 0x3f0) == 0) {
            DAT_0062202c = 0x80000;
            _DAT_0062205c = 0x80000;
            _DAT_0062208c = 0xf80000;
            _DAT_006220bc = 0xf80000;
          }
          else {
            DAT_0062202c = 0xf80000;
            _DAT_0062205c = 0xf80000;
            _DAT_0062208c = 0x80000;
            _DAT_006220bc = 0x80000;
          }
          _DAT_006220c0 = 0xf80000;
          DAT_00622090 = 0x80000;
          _DAT_00622060 = 0x80000;
          _DAT_00622030 = 0xf80000;
          fVar8 = (float10)*(float *)(param_1 + 0x2c0);
          DAT_00622070 = DAT_00622040;
          _DAT_006220a0 = DAT_00622040;
          _DAT_006220d0 = DAT_00622040;
          FUN_005b7ff0();
          fStack_18 = (float)(int)ROUND(fVar8);
          FUN_0046ca00(DAT_0060b280,
                       &DAT_00615b00 +
                       ((int)fStack_18 % 8) * 0x18 + *(int *)(param_1 + 0x304) * 0xc0);
          FUN_0046b8d0(DAT_0060b280,1);
          uStack_144 = 4;
          uStack_134 = 0;
          uStack_138 = 0;
          uStack_13c = 0;
          uStack_140 = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          FUN_0046a930(DAT_0060b280,auStack_148);
          FUN_0046b8d0(DAT_0060b280,0);
          thunk_FUN_004e9810(DAT_0060b280);
          iVar1 = iVar1 + 1;
          iStack_94 = iStack_94 + 0x2aaa;
        } while (iVar1 < iStack_20);
      }
      thunk_FUN_004e9810(DAT_0060b280);
    }
    FUN_00408a10(param_1);
    if ((*(int *)(param_1 + 0x304) == 1) &&
       (afStack_2c[2] = *(float *)(param_1 + 0x2b8) * (float)_DAT_005d588d,
       *(int *)(param_1 + 0x3ec) != 0)) {
      FUN_0046b670(DAT_0060b280);
      uStack_30 = uStack_6c;
      afStack_2c[(uint)bVar7 * -2] = afStack_68[(uint)bVar7 * -2];
      afStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_d4 = *(float *)(param_1 + 0x2b8) * (float)_DAT_005d5895;
      uStack_d8 = 0;
      uStack_d0 = 0;
      fStack_18 = fStack_d4;
      FUN_0046b350(DAT_0060b280,&uStack_30,&uStack_d8);
      fStack_18 = (float)FUN_0040cf60(0x3f7ae148,0x3f828f5c);
      fStack_f0 = fStack_18 * afStack_2c[2];
      fStack_e8 = 0.0;
      fStack_54 = (float)(int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_50 = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_4c = (int)ROUND(_DAT_005f68f0 * 0.0);
      fStack_ec = fStack_f0;
      FUN_0055d723(*DAT_0060b280,afStack_68 + 5);
      fStack_f0 = -fStack_f0;
      iStack_3c = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_38 = (int)ROUND(fStack_ec * _DAT_005f68f0);
      iStack_34 = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_3c);
      fStack_ec = -fStack_ec;
      iStack_b4 = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_b0 = (int)ROUND(fStack_ec * _DAT_005f68f0);
      iStack_ac = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_b4);
      fStack_f0 = -fStack_f0;
      iStack_84 = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_80 = (int)ROUND(fStack_ec * _DAT_005f68f0);
      iStack_7c = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      FUN_0055d723(*DAT_0060b280 + 0x90,afStack_8c + 2);
      iStack_1c = 0;
      do {
        piVar3 = (int *)(*DAT_0060b280 + iStack_1c);
        iVar1 = piVar3[2];
        if (0x200 < iVar1) {
          iVar5 = iVar1 + -0x100;
          *piVar3 = (int)(((longlong)*piVar3 * (longlong)iVar5) / (longlong)iVar1);
          piVar3[1] = (int)(((longlong)piVar3[1] * (longlong)iVar5) / (longlong)iVar1);
          piVar3[2] = iVar5;
          FUN_004e8eb0(piVar3);
        }
        piVar3 = DAT_0060b280;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
      *(uint *)(*DAT_0060b280 + 0x2c) = 0x4000;
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
      FUN_0046ca00(piVar3,&DAT_00615ae8);
      FUN_0046b8d0(DAT_0060b280,1);
      FUN_00469c60(DAT_0060b280,auStack_170,0x163);
      FUN_0046b8d0(DAT_0060b280,0);
      thunk_FUN_004e9810(DAT_0060b280);
    }
    return *(uint *)(param_1 + 0x3ec);
  }
  return 0;
}
