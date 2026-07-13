// Name: FUN_00489990
// Address: 00489990
// Address Range: [[00489990, 00489cf3]]
// Convention: unknown
// Signature: void FUN_00489990(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00489990(float *param_1)

{
  int iVar1;
  byte bVar2;
  int aiStackY_1048 [996];
  uint uVar3;
  byte local_a0 [4];
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int aiStack_5c [4];
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int aiStack_2c [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar2 = 0;
  iVar1 = *DAT_005ae704;
  local_3c = (int)ROUND(*param_1 * _DAT_0059d1f8);
  local_38 = (int)ROUND(param_1[1] * _DAT_0059d1f8);
  local_34 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
  FUN_00530a25(iVar1,&local_3c);
  iVar1 = FUN_00461f80(DAT_005ae704,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_00460a00(DAT_005ae704,param_1);
  FUN_00460d90(DAT_005ae704);
  uVar3 = 0;
  local_60 = local_30;
  aiStack_5c[(uint)bVar2 * -2] = aiStack_2c[(uint)bVar2 * -2];
  aiStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       aiStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_00460a50(DAT_005ae704,&local_60,uVar3);
  local_48 = 0xbe000000;
  local_44 = 0xbe000000;
  local_40 = 0;
  local_6c = (int)ROUND(_DAT_0059d1f8 * -0.125);
  local_68 = (int)ROUND(_DAT_0059d1f8 * -0.125);
  local_64 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704,&local_6c);
  local_48 = 0x3e000000;
  local_44 = 0xbe000000;
  local_40 = 0;
  local_18 = (int)ROUND(_DAT_0059d1f8 * 0.125);
  local_14 = (int)ROUND(_DAT_0059d1f8 * -0.125);
  local_10 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_18);
  local_48 = 0x3e000000;
  local_44 = 0x3e000000;
  local_40 = 0;
  local_78 = (int)ROUND(_DAT_0059d1f8 * 0.125);
  local_74 = (int)ROUND(_DAT_0059d1f8 * 0.125);
  local_70 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_78);
  local_48 = 0xbe000000;
  local_44 = 0x3e000000;
  local_40 = 0;
  aiStack_5c[2] = (int)ROUND(_DAT_0059d1f8 * -0.125);
  aiStack_5c[3] = (int)ROUND(_DAT_0059d1f8 * 0.125);
  local_4c = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x90,aiStack_5c + 2);
  FUN_00461eb0(DAT_005ae704,&DAT_005b8ba4);
  FUN_00447670(_DAT_007f7370,param_1,0);
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  DAT_005c502c = 0x80000;
  _DAT_005c5090 = 0x80000;
  DAT_005c5040 = 0xffff - _DAT_01c038f4;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  aiStack_2c[2] = (int)ROUND(*param_1 * _DAT_0059d1f8);
  aiStack_2c[3] = (int)ROUND(param_1[1] * _DAT_0059d1f8);
  local_1c = (int)ROUND(param_1[2] * _DAT_0059d1f8);
  DAT_005c5070 = DAT_005c5040;
  _DAT_005c50a0 = DAT_005c5040;
  _DAT_005c50d0 = DAT_005c5040;
  FUN_0050bb50(0x01E57284,aiStack_2c + 2,&DAT_01c08d14,0,4);
  FUN_00461000(DAT_005ae704,1);
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_88 = 0;
  local_7c = 3;
  local_9c = 4;
  local_84 = 1;
  local_80 = 2;
  FUN_00460080(DAT_005ae704,local_a0);
  FUN_00461000(DAT_005ae704,0);
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}
