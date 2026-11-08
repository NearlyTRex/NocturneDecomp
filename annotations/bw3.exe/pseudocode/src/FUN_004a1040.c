// Name: FUN_004a1040
// Address: 004a1040
// Address Range: [[004a1040, 004a13e1]]
// Convention: unknown
// Signature: void FUN_004a1040(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1040(float *param_1)

{
  int iVar1;
  uint extraout_EDX;
  byte bVar2;
  float10 fVar3;
  int aiStackY_1020 [984];
  uint uVar4;
  byte auStack_a8 [4];
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  int aiStack_34 [4];
  int iStack_24;
  uint uStack_20;
  int aiStack_1c [4];
  
  bVar2 = 0;
  iVar1 = *DAT_005f2afc;
  iStack_68 = (int)ROUND(*param_1 * _DAT_005df8e4);
  iStack_64 = (int)ROUND(param_1[1] * _DAT_005df8e4);
  iStack_60 = (int)ROUND(param_1[2] * _DAT_005df8e4);
  FUN_0056356c(iVar1,&iStack_68);
  iVar1 = FUN_0046e6b0(DAT_005f2afc,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_0046ce90(DAT_005f2afc,param_1);
  FUN_0046d230(DAT_005f2afc);
  uVar4 = 0;
  uStack_38 = uStack_20;
  aiStack_34[(uint)bVar2 * -2] = aiStack_1c[(uint)bVar2 * -2];
  aiStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       aiStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_0046cee0(DAT_005f2afc,&uStack_38,uVar4);
  uStack_5c = 0xbe000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  iStack_50 = (int)ROUND(_DAT_005df8e4 * -0.125);
  iStack_4c = (int)ROUND(_DAT_005df8e4 * -0.125);
  iStack_48 = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc,&iStack_50);
  uStack_5c = 0x3e000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  iStack_80 = (int)ROUND(_DAT_005df8e4 * 0.125);
  iStack_7c = (int)ROUND(_DAT_005df8e4 * -0.125);
  iStack_78 = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x30,&iStack_80);
  uStack_5c = 0x3e000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  iStack_74 = (int)ROUND(_DAT_005df8e4 * 0.125);
  iStack_70 = (int)ROUND(_DAT_005df8e4 * 0.125);
  iStack_6c = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x60,&iStack_74);
  uStack_5c = 0xbe000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  iStack_44 = (int)ROUND(_DAT_005df8e4 * -0.125);
  iStack_40 = (int)ROUND(_DAT_005df8e4 * 0.125);
  iStack_3c = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x90,&iStack_44);
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fdbdc);
  (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
  aiStack_1c[2] = 0xffff - _DAT_01c6e24c;
  fVar3 = (float10)aiStack_1c[2] * (float10)param_1[9] * (float10)_DAT_005c0978;
  _DAT_0060b05c = 0xd00000;
  DAT_0060b02c = 0x800000;
  _DAT_0060b030 = 0xdc0000;
  _DAT_0060b060 = 0xdc0000;
  _DAT_0060b08c = 0x800000;
  _DAT_0060b0bc = 0x800000;
  DAT_0060b090 = 0x900000;
  aiStack_1c[3] = aiStack_1c[2];
  FUN_005a3120();
  DAT_0060b040 = (int)ROUND(fVar3);
  aiStack_34[2] = (int)ROUND(*param_1 * _DAT_005df8e4);
  aiStack_34[3] = (int)ROUND(param_1[1] * _DAT_005df8e4);
  iStack_24 = (int)ROUND(param_1[2] * _DAT_005df8e4);
  DAT_0060b070 = DAT_0060b040;
  _DAT_0060b0a0 = DAT_0060b040;
  _DAT_0060b0c0 = extraout_EDX;
  _DAT_0060b0d0 = DAT_0060b040;
  aiStack_1c[2] = DAT_0060b040;
  FUN_00538400(0x01ED78C8,aiStack_34 + 2,&DAT_01c73664,0,4);
  FUN_0046d4b0(DAT_005f2afc,1);
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_84 = 3;
  uStack_a4 = 4;
  uStack_8c = 1;
  uStack_88 = 2;
  FUN_0046c510(DAT_005f2afc,auStack_a8);
  FUN_0046d4b0(DAT_005f2afc,0);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return;
}
