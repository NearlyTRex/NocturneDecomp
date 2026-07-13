// Name: FUN_00489d00
// Address: 00489d00
// Address Range: [[00489d00, 0048a0a0]]
// Convention: unknown
// Signature: void FUN_00489d00(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00489d00(float *param_1)

{
  int iVar1;
  uint extraout_EDX;
  byte bVar2;
  float10 fVar3;
  int aiStackY_1020 [984];
  uint uVar4;
  byte local_a8 [4];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int aiStack_34 [4];
  int local_24;
  uint local_20;
  int aiStack_1c [4];
  
  bVar2 = 0;
  iVar1 = *DAT_005ae704;
  local_74 = (int)ROUND(*param_1 * _DAT_0059d1f8);
  local_70 = (int)ROUND(param_1[1] * _DAT_0059d1f8);
  local_6c = (int)ROUND(param_1[2] * _DAT_0059d1f8);
  FUN_00530a25(iVar1,&local_74);
  iVar1 = FUN_00461f80(DAT_005ae704,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_00460a00(DAT_005ae704,param_1);
  FUN_00460d90(DAT_005ae704);
  uVar4 = 0;
  local_20 = local_38;
  aiStack_1c[(uint)bVar2 * -2] = aiStack_34[(uint)bVar2 * -2];
  aiStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       aiStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_00460a50(DAT_005ae704,&local_20,uVar4);
  local_5c = 0xbe000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_68 = (int)ROUND(_DAT_0059d1f8 * -0.125);
  local_64 = (int)ROUND(_DAT_0059d1f8 * -0.125);
  local_60 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704,&local_68);
  local_5c = 0x3e000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_80 = (int)ROUND(_DAT_0059d1f8 * 0.125);
  local_7c = (int)ROUND(_DAT_0059d1f8 * -0.125);
  local_78 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_80);
  local_5c = 0x3e000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_44 = (int)ROUND(_DAT_0059d1f8 * 0.125);
  local_40 = (int)ROUND(_DAT_0059d1f8 * 0.125);
  local_3c = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_44);
  local_5c = 0xbe000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_50 = (int)ROUND(_DAT_0059d1f8 * -0.125);
  local_4c = (int)ROUND(_DAT_0059d1f8 * 0.125);
  local_48 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x90,&local_50);
  FUN_00461eb0(DAT_005ae704,&DAT_005b8bbc);
  FUN_00447670(_DAT_007f7370,param_1,0);
  aiStack_1c[2] = 0xffff - _DAT_01c038f4;
  fVar3 = (float10)aiStack_1c[2] * (float10)param_1[6] * (float10)_DAT_00581464;
  _DAT_005c5030 = 0xdc0000;
  _DAT_005c505c = 0xd00000;
  _DAT_005c5060 = 0xdc0000;
  DAT_005c502c = 0x800000;
  _DAT_005c508c = 0x800000;
  _DAT_005c50bc = 0x800000;
  _DAT_005c5090 = 0x900000;
  aiStack_1c[3] = aiStack_1c[2];
  FUN_00563a30();
  DAT_005c5040 = (int)ROUND(fVar3);
  aiStack_34[2] = (int)ROUND(*param_1 * _DAT_0059d1f8);
  aiStack_34[3] = (int)ROUND(param_1[1] * _DAT_0059d1f8);
  local_24 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
  DAT_005c5070 = DAT_005c5040;
  _DAT_005c50a0 = DAT_005c5040;
  _DAT_005c50c0 = extraout_EDX;
  _DAT_005c50d0 = DAT_005c5040;
  aiStack_1c[2] = DAT_005c5040;
  FUN_0050bb50(0x01E57284,aiStack_34 + 2,&DAT_01c08d14,0,4);
  FUN_00461000(DAT_005ae704,1);
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_90 = 0;
  local_84 = 3;
  local_a4 = 4;
  local_8c = 1;
  local_88 = 2;
  FUN_00460080(DAT_005ae704,local_a8);
  FUN_00461000(DAT_005ae704,0);
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}
