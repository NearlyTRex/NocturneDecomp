// Name: FUN_0049bd40
// Address: 0049bd40
// Address Range: [[0049bd40, 0049c0e1]]
// Convention: unknown
// Signature: void FUN_0049bd40(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049bd40(float *param_1)

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
  iVar1 = *DAT_0060b280;
  iStack_68 = (int)ROUND(*param_1 * _DAT_005f64e4);
  iStack_64 = (int)ROUND(param_1[1] * _DAT_005f64e4);
  iStack_60 = (int)ROUND(param_1[2] * _DAT_005f64e4);
  FUN_0055d9ec(iVar1,&iStack_68);
  iVar1 = FUN_0046cad0(DAT_0060b280,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_0046b2b0(DAT_0060b280,param_1);
  FUN_0046b650(DAT_0060b280);
  uVar4 = 0;
  uStack_38 = uStack_20;
  aiStack_34[(uint)bVar2 * -2] = aiStack_1c[(uint)bVar2 * -2];
  aiStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       aiStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_0046b300(DAT_0060b280,&uStack_38,uVar4);
  uStack_5c = 0xbe000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  iStack_50 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_4c = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_48 = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280,&iStack_50);
  uStack_5c = 0x3e000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  iStack_80 = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_7c = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_78 = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_80);
  uStack_5c = 0x3e000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  iStack_74 = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_70 = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_6c = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_74);
  uStack_5c = 0xbe000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  iStack_44 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_40 = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_3c = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x90,&iStack_44);
  FUN_0046ca00(DAT_0060b280,&DAT_00615874);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
  aiStack_1c[2] = 0xffff - _DAT_01c38aec;
  fVar3 = (float10)aiStack_1c[2] * (float10)param_1[9] * (float10)_DAT_005d576a;
  _DAT_0062205c = 0xd00000;
  DAT_0062202c = 0x800000;
  _DAT_00622030 = 0xdc0000;
  _DAT_00622060 = 0xdc0000;
  _DAT_0062208c = 0x800000;
  _DAT_006220bc = 0x800000;
  DAT_00622090 = 0x900000;
  aiStack_1c[3] = aiStack_1c[2];
  FUN_005b7ff0();
  DAT_00622040 = (int)ROUND(fVar3);
  aiStack_34[2] = (int)ROUND(*param_1 * _DAT_005f64e4);
  aiStack_34[3] = (int)ROUND(param_1[1] * _DAT_005f64e4);
  iStack_24 = (int)ROUND(param_1[2] * _DAT_005f64e4);
  DAT_00622070 = DAT_00622040;
  _DAT_006220a0 = DAT_00622040;
  _DAT_006220c0 = extraout_EDX;
  _DAT_006220d0 = DAT_00622040;
  aiStack_1c[2] = DAT_00622040;
  FUN_005317c0(0x01E661B8,aiStack_34 + 2,&DAT_01c3dec4,0,4);
  FUN_0046b8d0(DAT_0060b280,1);
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_84 = 3;
  uStack_a4 = 4;
  uStack_8c = 1;
  uStack_88 = 2;
  FUN_0046a930(DAT_0060b280,auStack_a8);
  FUN_0046b8d0(DAT_0060b280,0);
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
