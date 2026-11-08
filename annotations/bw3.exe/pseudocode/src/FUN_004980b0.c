// Name: FUN_004980b0
// Address: 004980b0
// Address Range: [[004980b0, 00498895]]
// Convention: unknown
// Signature: void FUN_004980b0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004980b0(float *param_1)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  float afStackY_10d8 [1013];
  byte *puVar4;
  float *pfVar5;
  float fVar6;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
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
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_6c;
  float afStack_68 [2];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  bVar3 = 0;
  fStack_20 = 0.4;
  if (param_1[0x13] == 8.40779e-45) {
    fStack_20 = 0.1;
  }
  iVar2 = *DAT_005f2afc;
  iStack_3c = (int)ROUND(*param_1 * _DAT_005df8e4);
  iStack_38 = (int)ROUND(param_1[1] * _DAT_005df8e4);
  iStack_34 = (int)ROUND(param_1[2] * _DAT_005df8e4);
  FUN_0056356c(iVar2,&iStack_3c);
  iVar2 = FUN_0046e6b0(DAT_005f2afc,iVar2);
  if (iVar2 == 0) {
    return;
  }
  FUN_0046ce90(DAT_005f2afc,param_1);
  FUN_0046cee0(DAT_005f2afc,&DAT_01c73658,0);
  fStack_78 = -fStack_20;
  uStack_70 = 0;
  iStack_a8 = (int)ROUND(fStack_78 * _DAT_005df8e4);
  iStack_a4 = (int)ROUND(fStack_78 * _DAT_005df8e4);
  iStack_a0 = (int)ROUND(_DAT_005df8e4 * 0.0);
  fStack_74 = fStack_78;
  fStack_24 = fStack_78;
  FUN_005632a3(*DAT_005f2afc,&iStack_a8);
  uStack_70 = 0;
  fStack_78 = fStack_20;
  fStack_74 = fStack_24;
  iStack_b4 = (int)ROUND(fStack_20 * _DAT_005df8e4);
  iStack_b0 = (int)ROUND(fStack_24 * _DAT_005df8e4);
  iStack_ac = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x30,&iStack_b4);
  fStack_78 = fStack_20;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  iStack_90 = (int)ROUND(fStack_20 * _DAT_005df8e4);
  iStack_8c = (int)ROUND(fStack_20 * _DAT_005df8e4);
  iStack_88 = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x60,&iStack_90);
  fStack_78 = fStack_24;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  iStack_60 = (int)ROUND(fStack_24 * _DAT_005df8e4);
  iStack_5c = (int)ROUND(fStack_20 * _DAT_005df8e4);
  iStack_58 = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x90,&iStack_60);
  switch(param_1[0x13]) {
  case 0.0:
  case 8.40779e-45:
    puVar4 = &DAT_005fc9ac;
    break;
  case 1.4013e-45:
    puVar4 = &DAT_005fc9c4;
    break;
  case 2.8026e-45:
    puVar4 = &DAT_005fc9dc;
    break;
  case 4.2039e-45:
    puVar4 = &DAT_005fc9f4;
    break;
  case 5.60519e-45:
    puVar4 = &DAT_005fca0c;
    break;
  case 7.00649e-45:
    puVar4 = &DAT_005fca24;
    break;
  default:
    goto switchD_0049888f_default;
  }
  FUN_0046e5e0(DAT_005f2afc,puVar4);
switchD_0049888f_default:
  (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
  lVar1 = (longlong)(int)param_1[0x10] * (longlong)(0xffff - _DAT_01c6e24c);
  DAT_0060b040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
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
  DAT_0060b070 = DAT_0060b040;
  _DAT_0060b0a0 = DAT_0060b040;
  _DAT_0060b0d0 = DAT_0060b040;
  FUN_0046d4b0(DAT_005f2afc,1);
  FUN_0046c510(DAT_005f2afc,0x1c73670);
  FUN_0046d4b0(DAT_005f2afc,0);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  fStack_54 = *param_1;
  afStack_50[(uint)bVar3 * -2] = param_1[(uint)bVar3 * -2 + 1];
  afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       (param_1 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  fVar6 = 1.0;
  fStack_f4 = 0.025;
  fStack_d8 = param_1[3];
  afStack_d4[(uint)bVar3 * -2] = param_1[(uint)bVar3 * -2 + 4];
  afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       (param_1 + (uint)bVar3 * -2 + 4)[(uint)bVar3 * -2 + 1];
  pfStack_14 = param_1 + 6;
  iStack_18 = 0;
  do {
    fStack_f4 = fStack_f4 * (float)_DAT_005c0528;
    afStack_50[2] = *pfStack_14 * fStack_f4;
    afStack_50[3] = pfStack_14[1] * fStack_f4;
    fStack_40 = pfStack_14[2] * fStack_f4;
    fStack_f0 = *pfStack_14 * fStack_f4;
    *(float *)((int)&stack0xffffff14 + (uint)bVar3 * -8) = afStack_50[(uint)bVar3 * -2 + 3];
    *(float *)((int)&stack0xffffff18 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    fStack_d8 = fStack_d8 - fStack_f0;
    fVar6 = fVar6 * (float)_DAT_005c0528;
    fStack_6c = fStack_d8 * fStack_f4;
    afStack_d4[0] = afStack_d4[0] - fStack_ec;
    afStack_d4[1] = afStack_d4[1] - fStack_e8;
    pfVar5 = &fStack_54;
    afStack_68[0] = afStack_d4[0] * fStack_f4;
    afStack_68[1] = afStack_d4[1] * fStack_f4;
    afStack_d4[2] = fStack_6c;
    afStack_d4[(uint)bVar3 * -2 + 3] = afStack_68[(uint)bVar3 * -2];
    afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    fStack_54 = fStack_54 - afStack_d4[2];
    afStack_50[0] = afStack_50[0] - afStack_d4[3];
    afStack_50[1] = afStack_50[1] - fStack_c4;
    FUN_0046ce90(DAT_005f2afc,pfVar5,fVar6);
    FUN_0046cee0(DAT_005f2afc,&DAT_01c73658,0);
    fStack_78 = -fStack_20 * fVar6;
    uStack_70 = 0;
    iStack_c0 = (int)ROUND(fStack_78 * _DAT_005df8e4);
    iStack_bc = (int)ROUND(fStack_78 * _DAT_005df8e4);
    iStack_b8 = (int)ROUND(_DAT_005df8e4 * 0.0);
    fStack_74 = fStack_78;
    fStack_1c = fStack_78;
    FUN_005632a3(*DAT_005f2afc,&iStack_c0);
    fStack_78 = fStack_20 * fVar6;
    fStack_74 = fStack_1c;
    uStack_70 = 0;
    iStack_9c = (int)ROUND(fStack_78 * _DAT_005df8e4);
    iStack_98 = (int)ROUND(fStack_1c * _DAT_005df8e4);
    iStack_94 = (int)ROUND(_DAT_005df8e4 * 0.0);
    fStack_24 = fStack_78;
    FUN_005632a3(*DAT_005f2afc + 0x30,&iStack_9c);
    uStack_70 = 0;
    fStack_78 = fStack_24;
    fStack_74 = fStack_24;
    iStack_e4 = (int)ROUND(fStack_24 * _DAT_005df8e4);
    iStack_e0 = (int)ROUND(fStack_24 * _DAT_005df8e4);
    iStack_dc = (int)ROUND(_DAT_005df8e4 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x60,&iStack_e4);
    fStack_78 = fStack_1c;
    uStack_70 = 0;
    fStack_74 = fStack_24;
    iStack_84 = (int)ROUND(fStack_1c * _DAT_005df8e4);
    iStack_80 = (int)ROUND(fStack_24 * _DAT_005df8e4);
    iStack_7c = (int)ROUND(_DAT_005df8e4 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x90,&iStack_84);
    (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
    lVar1 = (longlong)(int)param_1[0x10] * (longlong)(0xffff - _DAT_01c6e24c);
    DAT_0060b040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
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
    DAT_0060b070 = DAT_0060b040;
    _DAT_0060b0a0 = DAT_0060b040;
    _DAT_0060b0d0 = DAT_0060b040;
    FUN_0046d4b0(DAT_005f2afc,1);
    FUN_0046c510(DAT_005f2afc,0x1c73670);
    FUN_0046d4b0(DAT_005f2afc,0);
    thunk_FUN_004e5ef0(DAT_005f2afc);
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
