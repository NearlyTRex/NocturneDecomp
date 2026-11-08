// Name: FUN_00495ca0
// Address: 00495ca0
// Address Range: [[00495ca0, 004964b3]]
// Convention: unknown
// Signature: void FUN_00495ca0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00495ca0(float *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_10d0 [1004];
  byte *puVar8;
  float *pfVar9;
  float fStack_108;
  float fStack_104;
  byte auStack_f4 [12];
  float fStack_e8;
  float afStack_e4 [2];
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  float fStack_d0;
  float afStack_cc [2];
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  float fStack_b8;
  float afStack_b4 [4];
  uint uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  float *pfStack_1c;
  int iStack_18;
  
  bVar7 = 0;
  fStack_24 = 0.5;
  if (param_1[0x13] == 0.0) {
    fStack_24 = 4.0;
  }
  if (param_1[0x13] == 2.8026e-45) {
    fStack_24 = 0.666;
  }
  FUN_0046b2b0(DAT_0060b280,param_1);
  FUN_0046b300(DAT_0060b280,param_1 + 0x15,0);
  if (param_1[0x13] == 0.0) {
    uVar4 = 0x1c3e074;
  }
  else if (param_1[0x13] == 1.4013e-45) {
    uVar4 = 0x1c3e1f0;
  }
  else {
    uVar4 = 0x1c3e36c;
  }
  iVar2 = FUN_0044fd20(uVar4);
  puVar5 = *(uint **)(iVar2 + 0x350);
  puVar6 = (uint *)&stack0xffffff00;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar2 = FUN_0041a840(&stack0xffffff00,0);
  if (iVar2 != 0) {
    FUN_00530980(0x01E661B8,param_1,&DAT_0265370c,&stack0xffffff00,auStack_f4,0);
    FUN_0044fcc0(uVar4,0,0xffffffff);
  }
  thunk_FUN_004e9810(DAT_0060b280);
  if ((iVar2 != 0) && (iVar2 = FUN_0046b960(DAT_0060b280), iVar2 == 0)) {
    DAT_0062202c = 0x80000;
    _DAT_00622030 = 0xf80000;
    _DAT_0062205c = 0xf80000;
    _DAT_00622060 = 0xf80000;
    _DAT_0062208c = 0xf80000;
    DAT_00622090 = 0x80000;
    _DAT_006220bc = 0x80000;
    _DAT_006220c0 = 0x80000;
    FUN_0046b300(DAT_0060b280,&DAT_01c3deb8,0);
    afStack_b4[2] = -fStack_24;
    uStack_a4 = 0;
    iStack_c4 = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
    iStack_c0 = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
    iStack_bc = (int)ROUND(_DAT_005f64e4 * 0.0);
    afStack_b4[3] = afStack_b4[2];
    fStack_2c = afStack_b4[2];
    FUN_0055d723(*DAT_0060b280,&iStack_c4);
    afStack_b4[2] = fStack_24;
    uStack_a4 = 0;
    afStack_b4[3] = fStack_2c;
    iStack_a0 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_9c = (int)ROUND(fStack_2c * _DAT_005f64e4);
    iStack_98 = (int)ROUND(_DAT_005f64e4 * 0.0);
    FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_a0);
    afStack_b4[2] = fStack_24;
    afStack_b4[3] = fStack_24;
    uStack_a4 = 0;
    iStack_7c = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_78 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_74 = (int)ROUND(_DAT_005f64e4 * 0.0);
    FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_7c);
    uStack_a4 = 0;
    afStack_b4[2] = fStack_2c;
    afStack_b4[3] = fStack_24;
    iStack_88 = (int)ROUND(fStack_2c * _DAT_005f64e4);
    iStack_84 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_80 = (int)ROUND(_DAT_005f64e4 * 0.0);
    FUN_0055d723(*DAT_0060b280 + 0x90,&iStack_88);
    if (param_1[0x13] == 1.4013e-45) {
      puVar8 = &DAT_006151cc;
    }
    else if (param_1[0x13] == 2.8026e-45) {
      puVar8 = &DAT_0061513c;
    }
    else {
      puVar8 = &DAT_0061510c;
    }
    FUN_0046ca00(DAT_0060b280,puVar8);
    lVar1 = (longlong)(int)param_1[0x10] * (longlong)(0xffff - _DAT_01c38aec);
    DAT_00622040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
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
    DAT_00622070 = DAT_00622040;
    _DAT_006220a0 = DAT_00622040;
    _DAT_006220d0 = DAT_00622040;
    FUN_0046b8d0(DAT_0060b280,1);
    FUN_0046a930(DAT_0060b280,0x1c3ded0);
    FUN_0046b8d0(DAT_0060b280,0);
    thunk_FUN_004e9810(DAT_0060b280);
    if ((param_1[0x13] != 1.4013e-45) && (param_1[0x13] != 2.8026e-45)) {
      fStack_d0 = *param_1;
      afStack_cc[(uint)bVar7 * -2] = param_1[(uint)bVar7 * -2 + 1];
      afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           (param_1 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      fStack_e8 = param_1[3];
      afStack_e4[(uint)bVar7 * -2] = param_1[(uint)bVar7 * -2 + 4];
      afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           (param_1 + (uint)bVar7 * -2 + 4)[(uint)bVar7 * -2 + 1];
      iStack_18 = 0;
      fStack_104 = 1.0;
      fStack_108 = 0.1;
      pfStack_1c = param_1 + 6;
      do {
        fStack_108 = fStack_108 * (float)_DAT_005d5402;
        fStack_64 = *pfStack_1c * fStack_108;
        afStack_60[0] = pfStack_1c[1] * fStack_108;
        afStack_60[1] = pfStack_1c[2] * fStack_108;
        afStack_60[2] = *pfStack_1c * fStack_108;
        afStack_60[(uint)bVar7 * -2 + 3] = afStack_60[(uint)bVar7 * -2];
        afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        fStack_e8 = fStack_e8 - afStack_60[2];
        fStack_4c = fStack_e8 * fStack_108;
        afStack_e4[0] = afStack_e4[0] - afStack_60[3];
        afStack_e4[1] = afStack_e4[1] - fStack_50;
        fStack_104 = fStack_104 * (float)_DAT_005d5402;
        pfVar9 = &fStack_d0;
        fStack_48 = afStack_e4[0] * fStack_108;
        fStack_44 = afStack_e4[1] * fStack_108;
        fStack_b8 = fStack_4c;
        afStack_b4[(uint)bVar7 * -2] = afStack_60[(uint)bVar7 * -2 + 6];
        afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        fStack_d0 = fStack_d0 - fStack_b8;
        afStack_cc[0] = afStack_cc[0] - afStack_b4[0];
        afStack_cc[1] = afStack_cc[1] - afStack_b4[1];
        FUN_0046b2b0(DAT_0060b280,pfVar9);
        FUN_0046b300(DAT_0060b280,&DAT_01c3deb8,0);
        afStack_b4[2] = -fStack_24 * fStack_104;
        uStack_a4 = 0;
        iStack_dc = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        iStack_d8 = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        iStack_d4 = (int)ROUND(_DAT_005f64e4 * 0.0);
        afStack_b4[3] = afStack_b4[2];
        fStack_20 = afStack_b4[2];
        FUN_0055d723(*DAT_0060b280,&iStack_dc);
        afStack_b4[2] = fStack_24 * fStack_104;
        afStack_b4[3] = fStack_20;
        uStack_a4 = 0;
        iStack_40 = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        iStack_3c = (int)ROUND(fStack_20 * _DAT_005f64e4);
        iStack_38 = (int)ROUND(_DAT_005f64e4 * 0.0);
        fStack_2c = afStack_b4[2];
        FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_40);
        afStack_b4[2] = fStack_2c;
        afStack_b4[3] = fStack_2c;
        uStack_a4 = 0;
        iStack_94 = (int)ROUND(fStack_2c * _DAT_005f64e4);
        iStack_90 = (int)ROUND(fStack_2c * _DAT_005f64e4);
        iStack_8c = (int)ROUND(_DAT_005f64e4 * 0.0);
        FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_94);
        afStack_b4[2] = fStack_20;
        uStack_a4 = 0;
        afStack_b4[3] = fStack_2c;
        iStack_70 = (int)ROUND(fStack_20 * _DAT_005f64e4);
        iStack_6c = (int)ROUND(fStack_2c * _DAT_005f64e4);
        iStack_68 = (int)ROUND(_DAT_005f64e4 * 0.0);
        FUN_0055d723(*DAT_0060b280 + 0x90,&iStack_70);
        (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
        lVar1 = (longlong)(int)param_1[0x10] * (longlong)(0xffff - _DAT_01c38aec);
        DAT_00622040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
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
        DAT_00622070 = DAT_00622040;
        _DAT_006220a0 = DAT_00622040;
        _DAT_006220d0 = DAT_00622040;
        FUN_0046b8d0(DAT_0060b280,1);
        FUN_0046a930(DAT_0060b280,0x1c3ded0);
        FUN_0046b8d0(DAT_0060b280,0);
        thunk_FUN_004e9810(DAT_0060b280);
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 3);
    }
  }
  return;
}
