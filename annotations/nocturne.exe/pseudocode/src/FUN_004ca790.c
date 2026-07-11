// Name: FUN_004ca790
// Address: 004ca790
// Address Range: [[004ca790, 004cabe3]]
// Convention: unknown
// Signature: void FUN_004ca790(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca790(int param_1,int param_2)

{
  int iVar1;
  int *extraout_EDX;
  int *extraout_EDX_00;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  byte auStack_a8 [4];
  uint local_a4;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  pfVar2 = (float *)(param_1 + 0xa98 + param_2 * 0xb8);
  FUN_00460aa0(DAT_005ae704,pfVar2 + 0xc,pfVar2 + 9);
  fVar3 = (float10)_DAT_00587f62;
  fVar4 = (float10)pfVar2[2] * fVar3;
  fVar5 = (float10)pfVar2[1] * fVar3;
  fVar3 = (float10)*pfVar2 * fVar3;
  FUN_00563a30();
  FUN_00563a30();
  local_24 = (int)ROUND(fVar4);
  local_14 = (int)ROUND(fVar5);
  FUN_00563a30(local_24);
  local_14 = (int)ROUND(fVar3);
  FUN_0050e340(0x01E57284,local_14,(int)ROUND(fVar5));
  FUN_004544d0(param_1 + 0x2cc,0,0xffffffff);
  FUN_0050e340(0x01E57284,0x10000,0x10000,0x10000);
  iVar1 = FUN_00461090(DAT_005ae704);
  if ((iVar1 == 0) &&
     ((((float)_DAT_00587f6a < pfVar2[3] || ((float)_DAT_00587f6a < pfVar2[4])) ||
      ((float)_DAT_00587f6a < pfVar2[5])))) {
    local_30 = -1.4;
    local_28 = -1.4;
    local_2c = 0.2;
    local_48 = (int)ROUND(_DAT_005a0020 * -1.4);
    local_44 = (int)ROUND(_DAT_005a0020 * 0.2);
    local_40 = (int)ROUND(_DAT_005a0020 * -1.4);
    FUN_0053075c(*DAT_005ae704,&local_48);
    local_30 = -local_30;
    local_60 = (int)ROUND(local_30 * _DAT_005a0020);
    local_5c = (int)ROUND(local_2c * _DAT_005a0020);
    local_58 = (int)ROUND(local_28 * _DAT_005a0020);
    FUN_0053075c(*DAT_005ae704 + 0x30,&local_60);
    local_28 = -local_28;
    local_54 = (int)ROUND(local_30 * _DAT_005a0020);
    local_50 = (int)ROUND(local_2c * _DAT_005a0020);
    local_4c = (int)ROUND(local_28 * _DAT_005a0020);
    FUN_0053075c(*DAT_005ae704 + 0x60,&local_54);
    local_30 = -local_30;
    local_3c = (int)ROUND(local_30 * _DAT_005a0020);
    local_38 = (int)ROUND(local_2c * _DAT_005a0020);
    local_34 = (int)ROUND(local_28 * _DAT_005a0020);
    FUN_0053075c(*DAT_005ae704 + 0x90,&local_3c);
    local_a4 = 4;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 1;
    local_7c = 0;
    local_78 = 2;
    local_68 = 0;
    local_80 = 0x1000000;
    local_74 = 0x1000000;
    local_70 = 0x1000000;
    local_64 = 0x1000000;
    local_6c = 3;
    fVar3 = (float10)_DAT_00587f62;
    fVar4 = (float10)pfVar2[3] * fVar3;
    fVar5 = (float10)pfVar2[4] * fVar3;
    fVar3 = (float10)pfVar2[5] * fVar3;
    iVar1 = *DAT_005ae704;
    FUN_00563a30();
    local_20 = (int)ROUND(fVar4);
    *(int *)(iVar1 + 0x20) = local_20;
    FUN_00563a30();
    local_1c = (int)ROUND(fVar5);
    *(int *)(*extraout_EDX + 0x24) = local_1c;
    FUN_00563a30();
    local_18 = (int)ROUND(fVar3);
    *(int *)(*extraout_EDX_00 + 0x28) = local_18;
    *(uint *)(*extraout_EDX_00 + 0x2c) = 0xffff;
    *(int *)(*extraout_EDX_00 + 0x50) = local_20;
    *(int *)(*extraout_EDX_00 + 0x54) = local_1c;
    *(int *)(*extraout_EDX_00 + 0x58) = local_18;
    *(uint *)(*extraout_EDX_00 + 0x5c) = 0xffff;
    *(int *)(*extraout_EDX_00 + 0x80) = local_20;
    *(int *)(*extraout_EDX_00 + 0x84) = local_1c;
    *(int *)(*extraout_EDX_00 + 0x88) = local_18;
    *(uint *)(*extraout_EDX_00 + 0x8c) = 0xffff;
    *(int *)(*extraout_EDX_00 + 0xb0) = local_20;
    *(int *)(*extraout_EDX_00 + 0xb4) = local_1c;
    *(int *)(*extraout_EDX_00 + 0xb8) = local_18;
    *(uint *)(*extraout_EDX_00 + 0xbc) = 0xffff;
    FUN_00461eb0(extraout_EDX_00,param_1 + 0x14b8);
    FUN_00460fa0(DAT_005ae704,0);
    FUN_00461000(DAT_005ae704,1);
    FUN_00460150(DAT_005ae704,auStack_a8);
    FUN_00460fa0(DAT_005ae704,1);
    FUN_00461000(DAT_005ae704,0);
  }
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}
