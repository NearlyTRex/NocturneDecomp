// Name: FUN_004ad140
// Address: 004ad140
// Address Range: [[004ad140, 004ad84b]]
// Convention: unknown
// Signature: void FUN_004ad140(float *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ad140(float *param_1)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  float afStackY_10d8 [1013];
  float *pfVar4;
  byte *puVar5;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  float fStack_cc;
  float fStack_c8;
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
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  float fStack_78;
  float afStack_74 [2];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float *pfStack_1c;
  int iStack_18;
  
  bVar3 = 0;
  iVar2 = *DAT_00612560;
  iStack_b4 = (int)ROUND(*param_1 * _DAT_005fff94);
  iStack_b0 = (int)ROUND(param_1[1] * _DAT_005fff94);
  iStack_ac = (int)ROUND(param_1[2] * _DAT_005fff94);
  fStack_24 = 0.4;
  FUN_0058043c(iVar2,&iStack_b4);
  iVar2 = FUN_00484fd0(DAT_00612560,iVar2);
  if (iVar2 == 0) {
    return;
  }
  FUN_004837b0(DAT_00612560,param_1);
  FUN_00483800(DAT_00612560,&DAT_01c57078,0);
  fStack_d8 = -0.4;
  fStack_d4 = -0.4;
  uStack_d0 = 0;
  iStack_a8 = (int)ROUND(_DAT_005fff94 * -0.4);
  iStack_a4 = (int)ROUND(_DAT_005fff94 * -0.4);
  iStack_a0 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560,&iStack_a8);
  fStack_d8 = 0.4;
  fStack_d4 = -0.4;
  uStack_d0 = 0;
  iStack_48 = (int)ROUND(_DAT_005fff94 * 0.4);
  iStack_44 = (int)ROUND(_DAT_005fff94 * -0.4);
  iStack_40 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x30,&iStack_48);
  fStack_d8 = 0.4;
  fStack_d4 = 0.4;
  uStack_d0 = 0;
  iStack_3c = (int)ROUND(_DAT_005fff94 * 0.4);
  iStack_38 = (int)ROUND(_DAT_005fff94 * 0.4);
  iStack_34 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x60,&iStack_3c);
  fStack_d8 = -0.4;
  uStack_d0 = 0;
  fStack_d4 = 0.4;
  iStack_6c = (int)ROUND(_DAT_005fff94 * -0.4);
  iStack_68 = (int)ROUND(_DAT_005fff94 * 0.4);
  iStack_64 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x90,&iStack_6c);
  switch(param_1[0x13]) {
  case 0.0:
    puVar5 = &DAT_0061c3ec;
    break;
  case 1.4013e-45:
    puVar5 = &DAT_0061c404;
    break;
  case 2.8026e-45:
    puVar5 = &DAT_0061c41c;
    break;
  case 4.2039e-45:
    puVar5 = &DAT_0061c434;
    break;
  default:
    goto switchD_004ad845_default;
  }
  FUN_00484f00(DAT_00612560,puVar5);
switchD_004ad845_default:
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
  fStack_e4 = *param_1;
  (&stack0xffffff20)[(uint)bVar3 * 0xfffffffe] = param_1[(uint)bVar3 * -2 + 1];
  *(float *)((int)&stack0xffffff24 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       (param_1 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  iStack_18 = 0;
  fStack_78 = param_1[3];
  afStack_74[(uint)bVar3 * -2] = param_1[(uint)bVar3 * -2 + 4];
  afStack_74[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       (param_1 + (uint)bVar3 * -2 + 4)[(uint)bVar3 * -2 + 1];
  pfStack_1c = param_1 + 6;
  fStack_f4 = 1.0;
  fStack_f8 = 0.025;
  do {
    fStack_f8 = fStack_f8 * (float)_DAT_005df1ec;
    fStack_cc = *pfStack_1c * fStack_f8;
    fStack_c8 = pfStack_1c[1] * fStack_f8;
    fStack_c4 = pfStack_1c[2] * fStack_f8;
    fStack_9c = *pfStack_1c * fStack_f8;
    afStack_98[(uint)bVar3 * -2] = (&stack0xffffff38)[(uint)bVar3 * 0xfffffffe];
    afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&stack0xffffff3c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_78 = fStack_78 - fStack_9c;
    fStack_f0 = fStack_78 * fStack_f8;
    afStack_74[0] = afStack_74[0] - afStack_98[0];
    afStack_74[1] = afStack_74[1] - afStack_98[1];
    fStack_f4 = fStack_f4 * (float)_DAT_005df1ec;
    pfVar4 = &stack0xffffff1c;
    fStack_ec = afStack_74[0] * fStack_f8;
    fStack_e8 = afStack_74[1] * fStack_f8;
    afStack_98[2] = fStack_f0;
    afStack_98[(uint)bVar3 * -2 + 3] = *(float *)((int)&stack0xffffff14 + (uint)bVar3 * -8);
    afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         *(float *)((int)&stack0xffffff18 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_e4 = fStack_e4 - afStack_98[2];
    fStack_e0 = fStack_e0 - afStack_98[3];
    fStack_dc = fStack_dc - fStack_88;
    FUN_004837b0(DAT_00612560,pfVar4);
    FUN_00483800(DAT_00612560,&DAT_01c57078,0);
    fStack_d8 = -fStack_24 * fStack_f4;
    uStack_d0 = 0;
    iStack_c0 = (int)ROUND(fStack_d8 * _DAT_005fff94);
    iStack_bc = (int)ROUND(fStack_d8 * _DAT_005fff94);
    iStack_b8 = (int)ROUND(_DAT_005fff94 * 0.0);
    fStack_d4 = fStack_d8;
    fStack_20 = fStack_d8;
    FUN_00580173(*DAT_00612560,&iStack_c0);
    fStack_d8 = fStack_24 * fStack_f4;
    fStack_d4 = fStack_20;
    uStack_d0 = 0;
    iStack_84 = (int)ROUND(fStack_d8 * _DAT_005fff94);
    iStack_80 = (int)ROUND(fStack_20 * _DAT_005fff94);
    iStack_7c = (int)ROUND(_DAT_005fff94 * 0.0);
    fStack_28 = fStack_d8;
    FUN_00580173(*DAT_00612560 + 0x30,&iStack_84);
    fStack_d8 = fStack_28;
    fStack_d4 = fStack_28;
    uStack_d0 = 0;
    iStack_54 = (int)ROUND(fStack_28 * _DAT_005fff94);
    iStack_50 = (int)ROUND(fStack_28 * _DAT_005fff94);
    iStack_4c = (int)ROUND(_DAT_005fff94 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x60,&iStack_54);
    fStack_d8 = fStack_20;
    uStack_d0 = 0;
    fStack_d4 = fStack_28;
    iStack_60 = (int)ROUND(fStack_20 * _DAT_005fff94);
    iStack_5c = (int)ROUND(fStack_28 * _DAT_005fff94);
    iStack_58 = (int)ROUND(_DAT_005fff94 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x90,&iStack_60);
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
