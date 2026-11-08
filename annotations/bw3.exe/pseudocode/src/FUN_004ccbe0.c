// Name: FUN_004ccbe0
// Address: 004ccbe0
// Address Range: [[004ccbe0, 004cd3e3]]
// Convention: unknown
// Signature: void FUN_004ccbe0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ccbe0(float *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10cc [1000];
  float *pfVar5;
  double dVar6;
  float fStack_110;
  float fStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  float fStack_e4;
  float afStack_e0 [2];
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  float fStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  float fStack_90;
  float afStack_8c [2];
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float afStack_50 [2];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  bVar4 = 0;
  iVar3 = *DAT_005f2afc;
  iStack_6c = (int)ROUND(*param_1 * _DAT_005e0e18);
  iStack_68 = (int)ROUND(param_1[1] * _DAT_005e0e18);
  iStack_64 = (int)ROUND(param_1[2] * _DAT_005e0e18);
  FUN_0056356c(iVar3,&iStack_6c);
  if ((*(byte *)(iVar3 + 0x13) & 0x80) == 0) {
    FUN_0046ce90(DAT_005f2afc,param_1);
    FUN_0046cee0(DAT_005f2afc,&DAT_01d22e70,0);
    fStack_60 = -0.1;
    uStack_58 = 0;
    fStack_5c = -0.1;
    iStack_a8 = (int)ROUND(_DAT_005e0e18 * -0.1);
    iStack_a4 = (int)ROUND(_DAT_005e0e18 * -0.1);
    iStack_a0 = (int)ROUND(_DAT_005e0e18 * 0.0);
    FUN_005632a3(*DAT_005f2afc,&iStack_a8);
    fStack_60 = 0.1;
    fStack_5c = -0.1;
    uStack_58 = 0;
    iStack_9c = (int)ROUND(_DAT_005e0e18 * 0.1);
    iStack_98 = (int)ROUND(_DAT_005e0e18 * -0.1);
    iStack_94 = (int)ROUND(_DAT_005e0e18 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x30,&iStack_9c);
    fStack_60 = 0.1;
    uStack_58 = 0;
    fStack_5c = 0.1;
    iStack_fc = (int)ROUND(_DAT_005e0e18 * 0.1);
    iStack_f8 = (int)ROUND(_DAT_005e0e18 * 0.1);
    iStack_f4 = (int)ROUND(_DAT_005e0e18 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x60,&iStack_fc);
    fStack_60 = -0.1;
    fStack_5c = 0.1;
    uStack_58 = 0;
    iStack_48 = (int)ROUND(_DAT_005e0e18 * -0.1);
    iStack_44 = (int)ROUND(_DAT_005e0e18 * 0.1);
    iStack_40 = (int)ROUND(_DAT_005e0e18 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x90,&iStack_48);
    FUN_0046e5e0(DAT_005f2afc,&DAT_005fed34);
    _DAT_0060b05c = ((uint)param_1[0x11] & 3) * 0x400000;
    iVar3 = ((int)param_1[0x11] >> 2 & 3U) * 0x400000;
    DAT_0060b02c = _DAT_0060b05c + 0x80000;
    _DAT_0060b030 = iVar3 + 0x80000;
    _DAT_0060b05c = _DAT_0060b05c + 0x380000;
    DAT_0060b090 = iVar3 + 0x380000;
    iStack_108 = (int)ROUND(*param_1 * _DAT_005e0e18);
    iStack_104 = (int)ROUND(param_1[1] * _DAT_005e0e18);
    iStack_100 = (int)ROUND(param_1[2] * _DAT_005e0e18);
    _DAT_0060b060 = _DAT_0060b030;
    _DAT_0060b08c = _DAT_0060b05c;
    _DAT_0060b0bc = DAT_0060b02c;
    _DAT_0060b0c0 = DAT_0060b090;
    FUN_00538400(0x01ED78C8,&iStack_108,&DAT_01d22e7c,0,4);
    FUN_004cc970(param_1[0x10],&iStack_28,&iStack_24,&iStack_2c);
    iVar3 = 0;
    do {
      lVar1 = (longlong)iStack_28 * (longlong)*(int *)((int)&DAT_0060b034 + iVar3);
      *(uint *)((int)&DAT_0060b034 + iVar3) =
           (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      lVar1 = (longlong)iStack_24 * (longlong)*(int *)((int)&DAT_0060b038 + iVar3);
      *(uint *)((int)&DAT_0060b038 + iVar3) =
           (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar2 = iVar3 + 0x30;
      lVar1 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_0060b03c + iVar3);
      *(uint *)((int)&DAT_0060b03c + iVar3) =
           (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = iVar2;
    } while (iVar2 != 0xc0);
    (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
    FUN_0046d4c0(DAT_005f2afc,0xffff - _DAT_01c6e24c);
    FUN_0046c730(DAT_005f2afc,0x1d22e48);
    thunk_FUN_004e5ef0(DAT_005f2afc);
    fStack_110 = 1.0;
    fStack_90 = *param_1;
    afStack_8c[(uint)bVar4 * -2] = param_1[(uint)bVar4 * -2 + 1];
    afStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         (param_1 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    fStack_10c = 0.025;
    iStack_18 = 0;
    pfStack_14 = param_1 + 6;
    fStack_54 = param_1[3];
    afStack_50[(uint)bVar4 * -2] = param_1[(uint)bVar4 * -2 + 4];
    afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         (param_1 + (uint)bVar4 * -2 + 4)[(uint)bVar4 * -2 + 1];
    do {
      fStack_10c = fStack_10c * (float)_DAT_005c4631;
      afStack_c8[2] = *pfStack_14 * fStack_10c;
      afStack_c8[3] = pfStack_14[1] * fStack_10c;
      fStack_b8 = pfStack_14[2] * fStack_10c;
      fStack_e4 = *pfStack_14 * fStack_10c;
      afStack_e0[(uint)bVar4 * -2] = afStack_c8[(uint)bVar4 * -2 + 3];
      afStack_e0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      fStack_54 = fStack_54 - fStack_e4;
      fStack_b4 = fStack_54 * fStack_10c;
      afStack_50[0] = afStack_50[0] - afStack_e0[0];
      afStack_50[1] = afStack_50[1] - afStack_e0[1];
      pfVar5 = &fStack_90;
      fStack_b0 = afStack_50[0] * fStack_10c;
      fStack_ac = afStack_50[1] * fStack_10c;
      fStack_cc = fStack_b4;
      afStack_c8[(uint)bVar4 * -2] = afStack_c8[(uint)bVar4 * -2 + 6];
      afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      fStack_90 = fStack_90 - fStack_cc;
      afStack_8c[0] = afStack_8c[0] - afStack_c8[0];
      afStack_8c[1] = afStack_8c[1] - afStack_c8[1];
      fStack_110 = fStack_110 * (float)_DAT_005c4631;
      FUN_0046ce90(DAT_005f2afc,pfVar5);
      FUN_0046cee0(DAT_005f2afc,&DAT_01d22e70,0);
      dVar6 = (double)fStack_110;
      fStack_60 = fStack_110 * (float)_DAT_005c4639;
      uStack_58 = 0;
      iStack_f0 = (int)ROUND(fStack_60 * _DAT_005e0e18);
      iStack_ec = (int)ROUND(fStack_60 * _DAT_005e0e18);
      iStack_e8 = (int)ROUND(_DAT_005e0e18 * 0.0);
      fStack_5c = fStack_60;
      fStack_1c = fStack_60;
      FUN_005632a3(*DAT_005f2afc,&iStack_f0,dVar6);
      fStack_60 = (float)((float10)dVar6 * (float10)_DAT_005c4641);
      uStack_58 = 0;
      fStack_5c = fStack_1c;
      iStack_78 = (int)ROUND(fStack_60 * _DAT_005e0e18);
      iStack_74 = (int)ROUND(fStack_1c * _DAT_005e0e18);
      iStack_70 = (int)ROUND(_DAT_005e0e18 * 0.0);
      fStack_20 = fStack_60;
      FUN_005632a3(*DAT_005f2afc + 0x30,&iStack_78);
      fStack_60 = fStack_20;
      fStack_5c = fStack_20;
      uStack_58 = 0;
      iStack_84 = (int)ROUND(fStack_20 * _DAT_005e0e18);
      iStack_80 = (int)ROUND(fStack_20 * _DAT_005e0e18);
      iStack_7c = (int)ROUND(_DAT_005e0e18 * 0.0);
      FUN_005632a3(*DAT_005f2afc + 0x60,&iStack_84);
      uStack_58 = 0;
      fStack_60 = fStack_1c;
      fStack_5c = fStack_20;
      iStack_d8 = (int)ROUND(fStack_1c * _DAT_005e0e18);
      iStack_d4 = (int)ROUND(fStack_20 * _DAT_005e0e18);
      iStack_d0 = (int)ROUND(_DAT_005e0e18 * 0.0);
      FUN_005632a3(*DAT_005f2afc + 0x90,&iStack_d8);
      iStack_108 = (int)ROUND(fStack_90 * _DAT_005e0e18);
      iStack_104 = (int)ROUND(afStack_8c[0] * _DAT_005e0e18);
      iStack_100 = (int)ROUND(afStack_8c[1] * _DAT_005e0e18);
      FUN_00538400(0x01ED78C8,&iStack_108,&DAT_01d22e7c,0,4);
      iVar3 = 0;
      do {
        lVar1 = (longlong)iStack_28 * (longlong)*(int *)((int)&DAT_0060b034 + iVar3);
        *(uint *)((int)&DAT_0060b034 + iVar3) =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iStack_24 * (longlong)*(int *)((int)&DAT_0060b038 + iVar3);
        *(uint *)((int)&DAT_0060b038 + iVar3) =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        iVar2 = iVar3 + 0x30;
        lVar1 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_0060b03c + iVar3);
        *(uint *)((int)&DAT_0060b03c + iVar3) =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        iVar3 = iVar2;
      } while (iVar2 != 0xc0);
      (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
      FUN_0046d4c0(DAT_005f2afc,0xffff - _DAT_01c6e24c);
      FUN_0046c730(DAT_005f2afc,0x1d22e48);
      thunk_FUN_004e5ef0(DAT_005f2afc);
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < 3);
  }
  return;
}
