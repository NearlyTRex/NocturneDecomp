// Name: FUN_004e63c0
// Address: 004e63c0
// Address Range: [[004e63c0, 004e6813]]
// Convention: unknown
// Signature: void FUN_004e63c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e63c0(int param_1,int param_2)

{
  int iVar1;
  int *extraout_EDX;
  int *extraout_EDX_00;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  byte auStack_a8 [4];
  uint uStack_a4;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
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
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  pfVar2 = (float *)(param_1 + 0xbfc + param_2 * 0xb8);
  FUN_0046b350(DAT_0060b280,pfVar2 + 0xc,pfVar2 + 9);
  fVar3 = (float10)_DAT_005dc525;
  fVar4 = (float10)pfVar2[2] * fVar3;
  fVar5 = (float10)pfVar2[1] * fVar3;
  fVar3 = (float10)*pfVar2 * fVar3;
  FUN_005b7ff0();
  FUN_005b7ff0();
  iStack_24 = (int)ROUND(fVar4);
  iStack_14 = (int)ROUND(fVar5);
  FUN_005b7ff0(iStack_24);
  iStack_14 = (int)ROUND(fVar3);
  FUN_005344c0(0x01E661B8,iStack_14,(int)ROUND(fVar5));
  FUN_0044fcc0(param_1 + 0x430,0,0xffffffff);
  FUN_005344c0(0x01E661B8,0x10000,0x10000,0x10000);
  iVar1 = FUN_0046b960(DAT_0060b280);
  if ((iVar1 == 0) &&
     ((((float)_DAT_005dc52d < pfVar2[3] || ((float)_DAT_005dc52d < pfVar2[4])) ||
      ((float)_DAT_005dc52d < pfVar2[5])))) {
    fStack_30 = -1.4;
    fStack_28 = -1.4;
    fStack_2c = 0.2;
    iStack_48 = (int)ROUND(_DAT_005f98a0 * -1.4);
    iStack_44 = (int)ROUND(_DAT_005f98a0 * 0.2);
    iStack_40 = (int)ROUND(_DAT_005f98a0 * -1.4);
    FUN_0055d723(*DAT_0060b280,&iStack_48);
    fStack_30 = -fStack_30;
    iStack_60 = (int)ROUND(fStack_30 * _DAT_005f98a0);
    iStack_5c = (int)ROUND(fStack_2c * _DAT_005f98a0);
    iStack_58 = (int)ROUND(fStack_28 * _DAT_005f98a0);
    FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_60);
    fStack_28 = -fStack_28;
    iStack_54 = (int)ROUND(fStack_30 * _DAT_005f98a0);
    iStack_50 = (int)ROUND(fStack_2c * _DAT_005f98a0);
    iStack_4c = (int)ROUND(fStack_28 * _DAT_005f98a0);
    FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_54);
    fStack_30 = -fStack_30;
    iStack_3c = (int)ROUND(fStack_30 * _DAT_005f98a0);
    iStack_38 = (int)ROUND(fStack_2c * _DAT_005f98a0);
    iStack_34 = (int)ROUND(fStack_28 * _DAT_005f98a0);
    FUN_0055d723(*DAT_0060b280 + 0x90,&iStack_3c);
    uStack_a4 = 4;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 1;
    uStack_7c = 0;
    uStack_78 = 2;
    uStack_68 = 0;
    uStack_80 = 0x1000000;
    uStack_74 = 0x1000000;
    uStack_70 = 0x1000000;
    uStack_64 = 0x1000000;
    uStack_6c = 3;
    fVar3 = (float10)_DAT_005dc525;
    fVar4 = (float10)pfVar2[3] * fVar3;
    fVar5 = (float10)pfVar2[4] * fVar3;
    fVar3 = (float10)pfVar2[5] * fVar3;
    iVar1 = *DAT_0060b280;
    FUN_005b7ff0();
    iStack_20 = (int)ROUND(fVar4);
    *(int *)(iVar1 + 0x20) = iStack_20;
    FUN_005b7ff0();
    iStack_1c = (int)ROUND(fVar5);
    *(int *)(*extraout_EDX + 0x24) = iStack_1c;
    FUN_005b7ff0();
    iStack_18 = (int)ROUND(fVar3);
    *(int *)(*extraout_EDX_00 + 0x28) = iStack_18;
    *(uint *)(*extraout_EDX_00 + 0x2c) = 0xffff;
    *(int *)(*extraout_EDX_00 + 0x50) = iStack_20;
    *(int *)(*extraout_EDX_00 + 0x54) = iStack_1c;
    *(int *)(*extraout_EDX_00 + 0x58) = iStack_18;
    *(uint *)(*extraout_EDX_00 + 0x5c) = 0xffff;
    *(int *)(*extraout_EDX_00 + 0x80) = iStack_20;
    *(int *)(*extraout_EDX_00 + 0x84) = iStack_1c;
    *(int *)(*extraout_EDX_00 + 0x88) = iStack_18;
    *(uint *)(*extraout_EDX_00 + 0x8c) = 0xffff;
    *(int *)(*extraout_EDX_00 + 0xb0) = iStack_20;
    *(int *)(*extraout_EDX_00 + 0xb4) = iStack_1c;
    *(int *)(*extraout_EDX_00 + 0xb8) = iStack_18;
    *(uint *)(*extraout_EDX_00 + 0xbc) = 0xffff;
    FUN_0046ca00(extraout_EDX_00,param_1 + 0x161c);
    FUN_0046b870(DAT_0060b280,0);
    FUN_0046b8d0(DAT_0060b280,1);
    FUN_0046aa00(DAT_0060b280,auStack_a8);
    FUN_0046b870(DAT_0060b280,1);
    FUN_0046b8d0(DAT_0060b280,0);
  }
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
