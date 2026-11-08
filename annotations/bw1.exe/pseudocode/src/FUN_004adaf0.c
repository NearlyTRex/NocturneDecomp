// Name: FUN_004adaf0
// Address: 004adaf0
// Address Range: [[004adaf0, 004ae29e]]
// Convention: unknown
// Signature: void FUN_004adaf0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004adaf0(float *param_1)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  float afStackY_10d8 [1013];
  float *pfVar4;
  byte *puVar5;
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
  fStack_20 = param_1[0x14];
  iVar2 = *DAT_00612560;
  iStack_3c = (int)ROUND(*param_1 * _DAT_005fff94);
  iStack_38 = (int)ROUND(param_1[1] * _DAT_005fff94);
  iStack_34 = (int)ROUND(param_1[2] * _DAT_005fff94);
  FUN_0058043c(iVar2,&iStack_3c);
  iVar2 = FUN_00484fd0(DAT_00612560,iVar2);
  if (iVar2 == 0) {
    return;
  }
  FUN_004837b0(DAT_00612560,param_1);
  FUN_00483800(DAT_00612560,&DAT_01c57078,0);
  fStack_78 = -fStack_20;
  uStack_70 = 0;
  iStack_a8 = (int)ROUND(fStack_78 * _DAT_005fff94);
  iStack_a4 = (int)ROUND(fStack_78 * _DAT_005fff94);
  iStack_a0 = (int)ROUND(_DAT_005fff94 * 0.0);
  fStack_74 = fStack_78;
  fStack_24 = fStack_78;
  FUN_00580173(*DAT_00612560,&iStack_a8);
  fStack_78 = fStack_20;
  fStack_74 = fStack_24;
  uStack_70 = 0;
  iStack_b4 = (int)ROUND(fStack_20 * _DAT_005fff94);
  iStack_b0 = (int)ROUND(fStack_24 * _DAT_005fff94);
  iStack_ac = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x30,&iStack_b4);
  fStack_78 = fStack_20;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  iStack_90 = (int)ROUND(fStack_20 * _DAT_005fff94);
  iStack_8c = (int)ROUND(fStack_20 * _DAT_005fff94);
  iStack_88 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x60,&iStack_90);
  fStack_78 = fStack_24;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  iStack_60 = (int)ROUND(fStack_24 * _DAT_005fff94);
  iStack_5c = (int)ROUND(fStack_20 * _DAT_005fff94);
  iStack_58 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x90,&iStack_60);
  switch(param_1[0x15]) {
  case 0.0:
    puVar5 = &DAT_0061c44c;
    break;
  case 1.4013e-45:
    puVar5 = &DAT_0061c464;
    break;
  case 2.8026e-45:
    puVar5 = &DAT_0061c47c;
    break;
  case 4.2039e-45:
    puVar5 = &DAT_0061c494;
    break;
  default:
    goto switchD_004ae298_default;
  }
  FUN_00484f00(DAT_00612560,puVar5);
switchD_004ae298_default:
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
  lVar1 = (longlong)(int)param_1[0x10] * (longlong)(0xffff - _DAT_01c51cac);
  DAT_00629040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
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
  DAT_00629070 = DAT_00629040;
  _DAT_006290a0 = DAT_00629040;
  _DAT_006290d0 = DAT_00629040;
  FUN_00483dd0(DAT_00612560,1);
  FUN_00482e30(DAT_00612560,0x1c57090);
  FUN_00483dd0(DAT_00612560,0);
  thunk_FUN_005084b0(DAT_00612560);
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
    fStack_f4 = fStack_f4 * (float)_DAT_005df20c;
    afStack_50[2] = *pfStack_14 * fStack_f4;
    afStack_50[3] = pfStack_14[1] * fStack_f4;
    fStack_40 = pfStack_14[2] * fStack_f4;
    fStack_f0 = *pfStack_14 * fStack_f4;
    *(float *)((int)&stack0xffffff14 + (uint)bVar3 * -8) = afStack_50[(uint)bVar3 * -2 + 3];
    *(float *)((int)&stack0xffffff18 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    fStack_d8 = fStack_d8 - fStack_f0;
    fVar6 = fVar6 * (float)_DAT_005df20c;
    fStack_6c = fStack_d8 * fStack_f4;
    afStack_d4[0] = afStack_d4[0] - fStack_ec;
    afStack_d4[1] = afStack_d4[1] - fStack_e8;
    pfVar4 = &fStack_54;
    afStack_68[0] = afStack_d4[0] * fStack_f4;
    afStack_68[1] = afStack_d4[1] * fStack_f4;
    afStack_d4[2] = fStack_6c;
    afStack_d4[(uint)bVar3 * -2 + 3] = afStack_68[(uint)bVar3 * -2];
    afStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    fStack_54 = fStack_54 - afStack_d4[2];
    afStack_50[0] = afStack_50[0] - afStack_d4[3];
    afStack_50[1] = afStack_50[1] - fStack_c4;
    FUN_004837b0(DAT_00612560,pfVar4,fVar6);
    FUN_00483800(DAT_00612560,&DAT_01c57078,0);
    fStack_78 = -fStack_20 * fVar6;
    uStack_70 = 0;
    iStack_c0 = (int)ROUND(fStack_78 * _DAT_005fff94);
    iStack_bc = (int)ROUND(fStack_78 * _DAT_005fff94);
    iStack_b8 = (int)ROUND(_DAT_005fff94 * 0.0);
    fStack_74 = fStack_78;
    fStack_1c = fStack_78;
    FUN_00580173(*DAT_00612560,&iStack_c0);
    fStack_78 = fStack_20 * fVar6;
    fStack_74 = fStack_1c;
    uStack_70 = 0;
    iStack_9c = (int)ROUND(fStack_78 * _DAT_005fff94);
    iStack_98 = (int)ROUND(fStack_1c * _DAT_005fff94);
    iStack_94 = (int)ROUND(_DAT_005fff94 * 0.0);
    fStack_24 = fStack_78;
    FUN_00580173(*DAT_00612560 + 0x30,&iStack_9c);
    uStack_70 = 0;
    fStack_78 = fStack_24;
    fStack_74 = fStack_24;
    iStack_e4 = (int)ROUND(fStack_24 * _DAT_005fff94);
    iStack_e0 = (int)ROUND(fStack_24 * _DAT_005fff94);
    iStack_dc = (int)ROUND(_DAT_005fff94 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x60,&iStack_e4);
    fStack_78 = fStack_1c;
    uStack_70 = 0;
    fStack_74 = fStack_24;
    iStack_84 = (int)ROUND(fStack_1c * _DAT_005fff94);
    iStack_80 = (int)ROUND(fStack_24 * _DAT_005fff94);
    iStack_7c = (int)ROUND(_DAT_005fff94 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x90,&iStack_84);
    (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
    lVar1 = (longlong)(int)param_1[0x10] * (longlong)(0xffff - _DAT_01c51cac);
    DAT_00629040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
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
    DAT_00629070 = DAT_00629040;
    _DAT_006290a0 = DAT_00629040;
    _DAT_006290d0 = DAT_00629040;
    FUN_00483dd0(DAT_00612560,1);
    FUN_00482e30(DAT_00612560,0x1c57090);
    FUN_00483dd0(DAT_00612560,0);
    thunk_FUN_005084b0(DAT_00612560);
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
