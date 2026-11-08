// Name: FUN_004c7580
// Address: 004c7580
// Address Range: [[004c7580, 004c7d91]]
// Convention: unknown
// Signature: void FUN_004c7580(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c7580(float *param_1)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_10d4 [1000];
  float *pfVar6;
  double dVar7;
  float fStack_118;
  float fStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  float fStack_ec;
  float afStack_e8 [6];
  float afStack_d0 [4];
  float fStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  float fStack_a4;
  float afStack_a0 [2];
  int iStack_98;
  int iStack_94;
  int iStack_90;
  float fStack_8c;
  float afStack_88 [2];
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  float afStack_70 [2];
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  int *piStack_24;
  float fStack_20;
  float *pfStack_1c;
  int iStack_18;
  
  bVar5 = 0;
  iVar4 = *DAT_0060b280;
  iStack_110 = (int)ROUND(*param_1 * _DAT_005f7ba8);
  iStack_10c = (int)ROUND(param_1[1] * _DAT_005f7ba8);
  iStack_108 = (int)ROUND(param_1[2] * _DAT_005f7ba8);
  FUN_0055d9ec(iVar4,&iStack_110);
  if ((*(byte *)(iVar4 + 0x13) & 0x80) != 0) {
    return;
  }
  FUN_0046b2b0(DAT_0060b280,param_1);
  FUN_0046b300(DAT_0060b280,&DAT_01cb82b0,0);
  afStack_e8[2] = -0.1;
  afStack_e8[4] = 0.0;
  afStack_e8[3] = -0.1;
  iStack_80 = (int)ROUND(_DAT_005f7ba8 * -0.1);
  iStack_7c = (int)ROUND(_DAT_005f7ba8 * -0.1);
  iStack_78 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  FUN_0055d723(*DAT_0060b280,&iStack_80);
  afStack_e8[2] = 0.1;
  afStack_e8[3] = -0.1;
  afStack_e8[4] = 0.0;
  iStack_98 = (int)ROUND(_DAT_005f7ba8 * 0.1);
  iStack_94 = (int)ROUND(_DAT_005f7ba8 * -0.1);
  iStack_90 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_98);
  afStack_e8[2] = 0.1;
  afStack_e8[4] = 0.0;
  afStack_e8[3] = 0.1;
  iStack_5c = (int)ROUND(_DAT_005f7ba8 * 0.1);
  iStack_58 = (int)ROUND(_DAT_005f7ba8 * 0.1);
  iStack_54 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_5c);
  afStack_e8[2] = -0.1;
  afStack_e8[3] = 0.1;
  afStack_e8[4] = 0.0;
  iStack_f8 = (int)ROUND(_DAT_005f7ba8 * -0.1);
  iStack_f4 = (int)ROUND(_DAT_005f7ba8 * 0.1);
  iStack_f0 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x90,&iStack_f8);
  FUN_0046ca00(DAT_0060b280,&DAT_006167f0);
  _DAT_0062205c = ((uint)param_1[0x11] & 3) * 0x400000;
  iVar4 = ((int)param_1[0x11] >> 2 & 3U) * 0x400000;
  DAT_0062202c = _DAT_0062205c + 0x80000;
  _DAT_00622030 = iVar4 + 0x80000;
  _DAT_0062205c = _DAT_0062205c + 0x380000;
  DAT_00622090 = iVar4 + 0x380000;
  iStack_b0 = (int)ROUND(*param_1 * _DAT_005f7ba8);
  iStack_ac = (int)ROUND(param_1[1] * _DAT_005f7ba8);
  iStack_a8 = (int)ROUND(param_1[2] * _DAT_005f7ba8);
  _DAT_00622060 = _DAT_00622030;
  _DAT_0062208c = _DAT_0062205c;
  _DAT_006220bc = DAT_0062202c;
  _DAT_006220c0 = DAT_00622090;
  FUN_005317c0(0x01E661B8,&iStack_b0,&DAT_01cb82bc,0,4);
  piStack_24 = &iStack_30;
  fVar1 = param_1[0x10];
  FUN_0040cfc0(0x40,0xc0);
  if (fVar1 != 0.0) {
    if ((uint)fVar1 < 2) {
      iStack_30 = 0x9a80;
      iStack_34 = 0xb100;
      iStack_2c = 0x9000;
      goto LAB_004c787c;
    }
    if (fVar1 == 2.8026e-45) {
      iStack_30 = 0;
      iStack_34 = 0;
      iStack_2c = 0;
      goto LAB_004c787c;
    }
  }
  iStack_2c = 0x2000;
  *piStack_24 = 0;
  iStack_34 = 0;
LAB_004c787c:
  iVar4 = 0;
  do {
    lVar2 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_00622034 + iVar4);
    *(uint *)((int)&DAT_00622034 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iStack_30 * (longlong)*(int *)((int)&DAT_00622038 + iVar4);
    *(uint *)((int)&DAT_00622038 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar3 = iVar4 + 0x30;
    lVar2 = (longlong)iStack_34 * (longlong)*(int *)((int)&DAT_0062203c + iVar4);
    *(uint *)((int)&DAT_0062203c + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar4 = iVar3;
  } while (iVar3 != 0xc0);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
  FUN_0046b8e0(DAT_0060b280,0xffff - _DAT_01c38aec);
  FUN_0046ab50(DAT_0060b280,0x1cb8288);
  thunk_FUN_004e9810(DAT_0060b280);
  fStack_114 = 1.0;
  afStack_e8[5] = *param_1;
  afStack_d0[(uint)bVar5 * -2] = param_1[(uint)bVar5 * -2 + 1];
  afStack_d0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (param_1 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  fStack_118 = 0.025;
  iStack_18 = 0;
  pfStack_1c = param_1 + 6;
  fStack_ec = param_1[3];
  afStack_e8[(uint)bVar5 * -2] = param_1[(uint)bVar5 * -2 + 4];
  afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (param_1 + (uint)bVar5 * -2 + 4)[(uint)bVar5 * -2 + 1];
  do {
    fStack_118 = fStack_118 * (float)_DAT_005d943a;
    fStack_8c = *pfStack_1c * fStack_118;
    afStack_88[0] = pfStack_1c[1] * fStack_118;
    afStack_88[1] = pfStack_1c[2] * fStack_118;
    fStack_a4 = *pfStack_1c * fStack_118;
    afStack_a0[(uint)bVar5 * -2] = afStack_88[(uint)bVar5 * -2];
    afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_ec = fStack_ec - fStack_a4;
    afStack_d0[2] = fStack_ec * fStack_118;
    afStack_e8[0] = afStack_e8[0] - afStack_a0[0];
    afStack_e8[1] = afStack_e8[1] - afStack_a0[1];
    pfVar6 = afStack_e8 + 5;
    afStack_d0[3] = afStack_e8[0] * fStack_118;
    fStack_c0 = afStack_e8[1] * fStack_118;
    fStack_74 = afStack_d0[2];
    afStack_70[(uint)bVar5 * -2] = afStack_d0[(uint)bVar5 * -2 + 3];
    afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_d0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    afStack_e8[5] = afStack_e8[5] - fStack_74;
    afStack_d0[0] = afStack_d0[0] - afStack_70[0];
    afStack_d0[1] = afStack_d0[1] - afStack_70[1];
    fStack_114 = fStack_114 * (float)_DAT_005d943a;
    FUN_0046b2b0(DAT_0060b280,pfVar6);
    FUN_0046b300(DAT_0060b280,&DAT_01cb82b0,0);
    dVar7 = (double)fStack_114;
    afStack_e8[2] = fStack_114 * (float)_DAT_005d9442;
    afStack_e8[4] = 0.0;
    iStack_50 = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    iStack_4c = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    iStack_48 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    afStack_e8[3] = afStack_e8[2];
    fStack_20 = afStack_e8[2];
    FUN_0055d723(*DAT_0060b280,&iStack_50,dVar7);
    afStack_e8[2] = (float)((float10)dVar7 * (float10)_DAT_005d944a);
    afStack_e8[4] = 0.0;
    afStack_e8[3] = fStack_20;
    iStack_68 = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    iStack_64 = (int)ROUND(fStack_20 * _DAT_005f7ba8);
    iStack_60 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    fStack_28 = afStack_e8[2];
    FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_68);
    afStack_e8[2] = fStack_28;
    afStack_e8[3] = fStack_28;
    afStack_e8[4] = 0.0;
    iStack_104 = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    iStack_100 = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    iStack_fc = (int)ROUND(_DAT_005f7ba8 * 0.0);
    FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_104);
    afStack_e8[4] = 0.0;
    afStack_e8[2] = fStack_20;
    afStack_e8[3] = fStack_28;
    iStack_bc = (int)ROUND(fStack_20 * _DAT_005f7ba8);
    iStack_b8 = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    iStack_b4 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    FUN_0055d723(*DAT_0060b280 + 0x90,&iStack_bc);
    iStack_b0 = (int)ROUND(afStack_e8[5] * _DAT_005f7ba8);
    iStack_ac = (int)ROUND(afStack_d0[0] * _DAT_005f7ba8);
    iStack_a8 = (int)ROUND(afStack_d0[1] * _DAT_005f7ba8);
    FUN_005317c0(0x01E661B8,&iStack_b0,&DAT_01cb82bc,0,4);
    iVar4 = 0;
    do {
      lVar2 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_00622034 + iVar4);
      *(uint *)((int)&DAT_00622034 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)iStack_30 * (longlong)*(int *)((int)&DAT_00622038 + iVar4);
      *(uint *)((int)&DAT_00622038 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4 + 0x30;
      lVar2 = (longlong)iStack_34 * (longlong)*(int *)((int)&DAT_0062203c + iVar4);
      *(uint *)((int)&DAT_0062203c + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3;
    } while (iVar3 != 0xc0);
    (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
    FUN_0046b8e0(DAT_0060b280,0xffff - _DAT_01c38aec);
    FUN_0046ab50(DAT_0060b280,0x1cb8288);
    thunk_FUN_004e9810(DAT_0060b280);
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
