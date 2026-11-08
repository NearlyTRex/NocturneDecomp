// Name: FUN_004b4370
// Address: 004b4370
// Address Range: [[004b4370, 004b46d7]]
// Convention: unknown
// Signature: void FUN_004b4370(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4370(float *param_1)

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
  iVar1 = *DAT_00612560;
  iStack_48 = (int)ROUND(*param_1 * _DAT_005fff94);
  iStack_44 = (int)ROUND(param_1[1] * _DAT_005fff94);
  iStack_40 = (int)ROUND(param_1[2] * _DAT_005fff94);
  FUN_0058043c(iVar1,&iStack_48);
  iVar1 = FUN_00484fd0(DAT_00612560,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_004837b0(DAT_00612560,param_1);
  FUN_00483b50(DAT_00612560);
  uVar3 = 0;
  uStack_60 = uStack_78;
  aiStack_5c[(uint)bVar2 * -2] = aiStack_74[(uint)bVar2 * -2];
  aiStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       aiStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_00483800(DAT_00612560,&uStack_60,uVar3);
  uStack_30 = 0xbe000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  iStack_18 = (int)ROUND(_DAT_005fff94 * -0.125);
  iStack_14 = (int)ROUND(_DAT_005fff94 * -0.125);
  iStack_10 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560,&iStack_18);
  uStack_30 = 0x3e000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  iStack_3c = (int)ROUND(_DAT_005fff94 * 0.125);
  iStack_38 = (int)ROUND(_DAT_005fff94 * -0.125);
  iStack_34 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x30,&iStack_3c);
  uStack_30 = 0x3e000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  aiStack_74[2] = (int)ROUND(_DAT_005fff94 * 0.125);
  aiStack_74[3] = (int)ROUND(_DAT_005fff94 * 0.125);
  iStack_64 = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x60,aiStack_74 + 2);
  uStack_30 = 0xbe000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  aiStack_5c[2] = (int)ROUND(_DAT_005fff94 * -0.125);
  aiStack_5c[3] = (int)ROUND(_DAT_005fff94 * 0.125);
  iStack_4c = (int)ROUND(_DAT_005fff94 * 0.0);
  FUN_00580173(*DAT_00612560 + 0x90,aiStack_5c + 2);
  FUN_00484f00(DAT_00612560,&DAT_0061cb3c);
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
  DAT_0062902c = 0x80000;
  _DAT_00629030 = 0xf80000;
  _DAT_0062905c = 0xf80000;
  _DAT_00629060 = 0xf80000;
  _DAT_0062908c = 0xf80000;
  DAT_00629090 = 0x80000;
  _DAT_006290bc = 0x80000;
  DAT_00629040 = 0xffff - _DAT_01c51cac;
  _DAT_006290c0 = 0x80000;
  iStack_24 = (int)ROUND(*param_1 * _DAT_005fff94);
  iStack_20 = (int)ROUND(param_1[1] * _DAT_005fff94);
  iStack_1c = (int)ROUND(param_1[2] * _DAT_005fff94);
  DAT_00629070 = DAT_00629040;
  _DAT_006290a0 = DAT_00629040;
  _DAT_006290d0 = DAT_00629040;
  FUN_00552a70(0x01E82168,&iStack_24,&DAT_01c57084,0,4);
  FUN_00483dd0(DAT_00612560,1);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_7c = 3;
  uStack_9c = 4;
  uStack_84 = 1;
  uStack_80 = 2;
  FUN_00482e30(DAT_00612560,auStack_a0);
  FUN_00483dd0(DAT_00612560,0);
  thunk_FUN_005084b0(DAT_00612560);
  return;
}
