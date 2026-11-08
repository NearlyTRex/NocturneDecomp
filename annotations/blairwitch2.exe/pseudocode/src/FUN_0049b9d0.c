// Name: FUN_0049b9d0
// Address: 0049b9d0
// Address Range: [[0049b9d0, 0049bd37]]
// Convention: unknown
// Signature: void FUN_0049b9d0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b9d0(float *param_1)

{
  int iVar1;
  byte bVar2;
  int aiStackY_1060 [1002];
  uint uVar3;
  byte auStack_a0 [4];
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int aiStack_74 [4];
  int iStack_64;
  uint uStack_60;
  int aiStack_5c [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar2 = 0;
  iVar1 = *DAT_0060b280;
  iStack_48 = (int)ROUND(*param_1 * _DAT_005f64e4);
  iStack_44 = (int)ROUND(param_1[1] * _DAT_005f64e4);
  iStack_40 = (int)ROUND(param_1[2] * _DAT_005f64e4);
  FUN_0055d9ec(iVar1,&iStack_48);
  iVar1 = FUN_0046cad0(DAT_0060b280,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_0046b2b0(DAT_0060b280,param_1);
  FUN_0046b650(DAT_0060b280);
  uVar3 = 0;
  uStack_60 = uStack_78;
  aiStack_5c[(uint)bVar2 * -2] = aiStack_74[(uint)bVar2 * -2];
  aiStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       aiStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_0046b300(DAT_0060b280,&uStack_60,uVar3);
  uStack_30 = 0xbe000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  iStack_18 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_14 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_10 = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280,&iStack_18);
  uStack_30 = 0x3e000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  iStack_3c = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_38 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_34 = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_3c);
  uStack_30 = 0x3e000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  aiStack_74[2] = (int)ROUND(_DAT_005f64e4 * 0.125);
  aiStack_74[3] = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_64 = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x60,aiStack_74 + 2);
  uStack_30 = 0xbe000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  aiStack_5c[2] = (int)ROUND(_DAT_005f64e4 * -0.125);
  aiStack_5c[3] = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_4c = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x90,aiStack_5c + 2);
  FUN_0046ca00(DAT_0060b280,&DAT_0061585c);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0xf80000;
  _DAT_0062205c = 0xf80000;
  _DAT_00622060 = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0x80000;
  _DAT_006220bc = 0x80000;
  DAT_00622040 = 0xffff - _DAT_01c38aec;
  _DAT_006220c0 = 0x80000;
  iStack_24 = (int)ROUND(*param_1 * _DAT_005f64e4);
  iStack_20 = (int)ROUND(param_1[1] * _DAT_005f64e4);
  iStack_1c = (int)ROUND(param_1[2] * _DAT_005f64e4);
  DAT_00622070 = DAT_00622040;
  _DAT_006220a0 = DAT_00622040;
  _DAT_006220d0 = DAT_00622040;
  FUN_005317c0(0x01E661B8,&iStack_24,&DAT_01c3dec4,0,4);
  FUN_0046b8d0(DAT_0060b280,1);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_7c = 3;
  uStack_9c = 4;
  uStack_84 = 1;
  uStack_80 = 2;
  FUN_0046a930(DAT_0060b280,auStack_a0);
  FUN_0046b8d0(DAT_0060b280,0);
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
