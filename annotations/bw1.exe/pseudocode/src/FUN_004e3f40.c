// Name: FUN_004e3f40
// Address: 004e3f40
// Address Range: [[004e3f40, 004e472c]]
// Convention: unknown
// Signature: void FUN_004e3f40(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e3f40(float *param_1)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_10cc [1000];
  float *pfVar6;
  double dVar7;
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
  float afStack_e0 [6];
  float afStack_c8 [4];
  float fStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  float fStack_9c;
  float afStack_98 [2];
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  float fStack_84;
  float afStack_80 [2];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  float fStack_6c;
  float afStack_68 [2];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float *pfStack_18;
  int iStack_14;
  
  bVar5 = 0;
  iVar4 = *DAT_00612560;
  iStack_108 = (int)ROUND(*param_1 * _DAT_006016a8);
  iStack_104 = (int)ROUND(param_1[1] * _DAT_006016a8);
  iStack_100 = (int)ROUND(param_1[2] * _DAT_006016a8);
  FUN_0058043c(iVar4,&iStack_108);
  if ((*(byte *)(iVar4 + 0x13) & 0x80) != 0) {
    return;
  }
  FUN_004837b0(DAT_00612560,param_1);
  FUN_00483800(DAT_00612560,&DAT_01cd0e68,0);
  afStack_e0[2] = -0.1;
  afStack_e0[4] = 0.0;
  afStack_e0[3] = -0.1;
  iStack_78 = (int)ROUND(_DAT_006016a8 * -0.1);
  iStack_74 = (int)ROUND(_DAT_006016a8 * -0.1);
  iStack_70 = (int)ROUND(_DAT_006016a8 * 0.0);
  FUN_00580173(*DAT_00612560,&iStack_78);
  afStack_e0[2] = 0.1;
  afStack_e0[3] = -0.1;
  afStack_e0[4] = 0.0;
  iStack_90 = (int)ROUND(_DAT_006016a8 * 0.1);
  iStack_8c = (int)ROUND(_DAT_006016a8 * -0.1);
  iStack_88 = (int)ROUND(_DAT_006016a8 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x30,&iStack_90);
  afStack_e0[2] = 0.1;
  afStack_e0[4] = 0.0;
  afStack_e0[3] = 0.1;
  iStack_54 = (int)ROUND(_DAT_006016a8 * 0.1);
  iStack_50 = (int)ROUND(_DAT_006016a8 * 0.1);
  iStack_4c = (int)ROUND(_DAT_006016a8 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x60,&iStack_54);
  afStack_e0[2] = -0.1;
  afStack_e0[3] = 0.1;
  afStack_e0[4] = 0.0;
  iStack_f0 = (int)ROUND(_DAT_006016a8 * -0.1);
  iStack_ec = (int)ROUND(_DAT_006016a8 * 0.1);
  iStack_e8 = (int)ROUND(_DAT_006016a8 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x90,&iStack_f0);
  FUN_00484f00(DAT_00612560,&DAT_0061dcb4);
  _DAT_0062905c = ((uint)param_1[0x11] & 3) * 0x400000;
  iVar4 = ((int)param_1[0x11] >> 2 & 3U) * 0x400000;
  DAT_0062902c = _DAT_0062905c + 0x80000;
  _DAT_00629030 = iVar4 + 0x80000;
  _DAT_0062905c = _DAT_0062905c + 0x380000;
  DAT_00629090 = iVar4 + 0x380000;
  iStack_a8 = (int)ROUND(*param_1 * _DAT_006016a8);
  iStack_a4 = (int)ROUND(param_1[1] * _DAT_006016a8);
  iStack_a0 = (int)ROUND(param_1[2] * _DAT_006016a8);
  _DAT_00629060 = _DAT_00629030;
  _DAT_0062908c = _DAT_0062905c;
  _DAT_006290bc = DAT_0062902c;
  _DAT_006290c0 = DAT_00629090;
  FUN_00552a70(0x01E82168,&iStack_a8,&DAT_01cd0e74,0,4);
  fVar1 = param_1[0x10];
  if (fVar1 != 0.0) {
    if ((uint)fVar1 < 2) {
      iStack_28 = 0x7f80;
      iStack_24 = 0;
      goto LAB_004e421f;
    }
    if (fVar1 == 2.8026e-45) {
      iStack_28 = 0;
      iStack_24 = 0;
      goto LAB_004e421f;
    }
  }
  iStack_24 = 0x2000;
  iStack_28 = 0;
LAB_004e421f:
  iStack_2c = 0;
  iVar4 = 0;
  do {
    lVar2 = (longlong)iStack_24 * (longlong)*(int *)((int)&DAT_00629034 + iVar4);
    *(uint *)((int)&DAT_00629034 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iStack_28 * (longlong)*(int *)((int)&DAT_00629038 + iVar4);
    *(uint *)((int)&DAT_00629038 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar3 = iVar4 + 0x30;
    *(uint *)((int)&DAT_0062903c + iVar4) = 0;
    iVar4 = iVar3;
  } while (iVar3 != 0xc0);
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
  FUN_00483de0(DAT_00612560,0xffff - _DAT_01c51cac);
  FUN_00483050(DAT_00612560,0x1cd0e40);
  thunk_FUN_005084b0(DAT_00612560);
  fStack_10c = 1.0;
  afStack_e0[5] = *param_1;
  afStack_c8[(uint)bVar5 * -2] = param_1[(uint)bVar5 * -2 + 1];
  afStack_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (param_1 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  fStack_110 = 0.025;
  iStack_14 = 0;
  pfStack_18 = param_1 + 6;
  fStack_e4 = param_1[3];
  afStack_e0[(uint)bVar5 * -2] = param_1[(uint)bVar5 * -2 + 4];
  afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (param_1 + (uint)bVar5 * -2 + 4)[(uint)bVar5 * -2 + 1];
  do {
    fStack_110 = fStack_110 * (float)_DAT_005e401d;
    fStack_84 = *pfStack_18 * fStack_110;
    afStack_80[0] = pfStack_18[1] * fStack_110;
    afStack_80[1] = pfStack_18[2] * fStack_110;
    fStack_9c = *pfStack_18 * fStack_110;
    afStack_98[(uint)bVar5 * -2] = afStack_80[(uint)bVar5 * -2];
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_e4 = fStack_e4 - fStack_9c;
    afStack_c8[2] = fStack_e4 * fStack_110;
    afStack_e0[0] = afStack_e0[0] - afStack_98[0];
    afStack_e0[1] = afStack_e0[1] - afStack_98[1];
    pfVar6 = afStack_e0 + 5;
    afStack_c8[3] = afStack_e0[0] * fStack_110;
    fStack_b8 = afStack_e0[1] * fStack_110;
    fStack_6c = afStack_c8[2];
    afStack_68[(uint)bVar5 * -2] = afStack_c8[(uint)bVar5 * -2 + 3];
    afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    afStack_e0[5] = afStack_e0[5] - fStack_6c;
    afStack_c8[0] = afStack_c8[0] - afStack_68[0];
    afStack_c8[1] = afStack_c8[1] - afStack_68[1];
    fStack_10c = fStack_10c * (float)_DAT_005e401d;
    FUN_004837b0(DAT_00612560,pfVar6);
    FUN_00483800(DAT_00612560,&DAT_01cd0e68,0);
    dVar7 = (double)fStack_10c;
    afStack_e0[2] = fStack_10c * (float)_DAT_005e4025;
    afStack_e0[4] = 0.0;
    iStack_48 = (int)ROUND(afStack_e0[2] * _DAT_006016a8);
    iStack_44 = (int)ROUND(afStack_e0[2] * _DAT_006016a8);
    iStack_40 = (int)ROUND(_DAT_006016a8 * 0.0);
    afStack_e0[3] = afStack_e0[2];
    fStack_1c = afStack_e0[2];
    FUN_00580173(*DAT_00612560,&iStack_48,dVar7);
    afStack_e0[2] = (float)((float10)dVar7 * (float10)_DAT_005e402d);
    afStack_e0[4] = 0.0;
    afStack_e0[3] = fStack_1c;
    iStack_60 = (int)ROUND(afStack_e0[2] * _DAT_006016a8);
    iStack_5c = (int)ROUND(fStack_1c * _DAT_006016a8);
    iStack_58 = (int)ROUND(_DAT_006016a8 * 0.0);
    fStack_20 = afStack_e0[2];
    FUN_00580173(*DAT_00612560 + 0x30,&iStack_60);
    afStack_e0[2] = fStack_20;
    afStack_e0[3] = fStack_20;
    afStack_e0[4] = 0.0;
    iStack_fc = (int)ROUND(fStack_20 * _DAT_006016a8);
    iStack_f8 = (int)ROUND(fStack_20 * _DAT_006016a8);
    iStack_f4 = (int)ROUND(_DAT_006016a8 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x60,&iStack_fc);
    afStack_e0[4] = 0.0;
    afStack_e0[2] = fStack_1c;
    afStack_e0[3] = fStack_20;
    iStack_b4 = (int)ROUND(fStack_1c * _DAT_006016a8);
    iStack_b0 = (int)ROUND(fStack_20 * _DAT_006016a8);
    iStack_ac = (int)ROUND(_DAT_006016a8 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x90,&iStack_b4);
    iStack_a8 = (int)ROUND(afStack_e0[5] * _DAT_006016a8);
    iStack_a4 = (int)ROUND(afStack_c8[0] * _DAT_006016a8);
    iStack_a0 = (int)ROUND(afStack_c8[1] * _DAT_006016a8);
    FUN_00552a70(0x01E82168,&iStack_a8,&DAT_01cd0e74,0,4);
    iVar4 = 0;
    do {
      lVar2 = (longlong)iStack_24 * (longlong)*(int *)((int)&DAT_00629034 + iVar4);
      *(uint *)((int)&DAT_00629034 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)iStack_28 * (longlong)*(int *)((int)&DAT_00629038 + iVar4);
      *(uint *)((int)&DAT_00629038 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4 + 0x30;
      lVar2 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_0062903c + iVar4);
      *(uint *)((int)&DAT_0062903c + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3;
    } while (iVar3 != 0xc0);
    (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
    FUN_00483de0(DAT_00612560,0xffff - _DAT_01c51cac);
    FUN_00483050(DAT_00612560,0x1cd0e40);
    thunk_FUN_005084b0(DAT_00612560);
    iStack_14 = iStack_14 + 1;
  } while (iStack_14 < 3);
  return;
}
