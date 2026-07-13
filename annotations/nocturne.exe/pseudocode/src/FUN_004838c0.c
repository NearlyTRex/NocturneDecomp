// Name: FUN_004838c0
// Address: 004838c0
// Address Range: [[004838c0, 00483fd8]]
// Convention: unknown
// Signature: void FUN_004838c0(float *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00483fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004838c0(float *param_1)

{
  longlong lVar1;
  int iVar2;
  byte *puVar3;
  float fVar4;
  float fVar5;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar2 = *DAT_005ae704;
  local_70 = (int)ROUND(*param_1 * _DAT_0059d1f8);
  local_6c = (int)ROUND(param_1[1] * _DAT_0059d1f8);
  local_68 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
  local_20 = 0.4;
  FUN_00530a25(iVar2,&local_70);
  iVar2 = FUN_00461f80(DAT_005ae704,iVar2);
  if (iVar2 == 0) {
    return;
  }
  FUN_00460a00(DAT_005ae704,param_1);
  FUN_00460a50(DAT_005ae704,&DAT_01c08d08,0);
  local_4c = -0.4;
  local_48 = -0.4;
  local_44 = 0;
  local_64 = (int)ROUND(_DAT_0059d1f8 * -0.4);
  local_60 = (int)ROUND(_DAT_0059d1f8 * -0.4);
  local_5c = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704,&local_64);
  local_4c = 0.4;
  local_44 = 0;
  local_48 = -0.4;
  local_b8 = (int)ROUND(_DAT_0059d1f8 * 0.4);
  local_b4 = (int)ROUND(_DAT_0059d1f8 * -0.4);
  local_b0 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_b8);
  local_4c = 0.4;
  local_48 = 0.4;
  local_44 = 0;
  local_94 = (int)ROUND(_DAT_0059d1f8 * 0.4);
  local_90 = (int)ROUND(_DAT_0059d1f8 * 0.4);
  local_8c = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_94);
  local_4c = -0.4;
  local_48 = 0.4;
  local_44 = 0;
  local_7c = (int)ROUND(_DAT_0059d1f8 * -0.4);
  local_78 = (int)ROUND(_DAT_0059d1f8 * 0.4);
  local_74 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x90,&local_7c);
  fVar4 = param_1[0x11];
  if (fVar4 == 0.0) {
    puVar3 = &DAT_005b84cc;
  }
  else if ((uint)fVar4 < 2) {
    puVar3 = &DAT_005b84e4;
  }
  else {
    if (fVar4 != 2.8026e-45) goto LAB_0048394f;
    puVar3 = &DAT_005b84fc;
  }
  FUN_00461eb0(DAT_005ae704,puVar3);
LAB_0048394f:
  FUN_00447670(_DAT_007f7370,param_1,0);
  lVar1 = (longlong)(int)param_1[0xe] * (longlong)(0xffff - _DAT_01c038f4);
  DAT_005c5040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  DAT_005c5034 = 0xffff;
  DAT_005c5038 = 0xffff;
  DAT_005c503c = 0xffff;
  DAT_005c5064 = 0xffff;
  DAT_005c5068 = 0xffff;
  DAT_005c506c = 0xffff;
  DAT_005c5094 = 0xffff;
  DAT_005c5098 = 0xffff;
  DAT_005c509c = 0xffff;
  DAT_005c50c4 = 0xffff;
  DAT_005c50c8 = 0xffff;
  DAT_005c50cc = 0xffff;
  DAT_005c5070 = DAT_005c5040;
  _DAT_005c50a0 = DAT_005c5040;
  _DAT_005c50d0 = DAT_005c5040;
  FUN_00461000(DAT_005ae704,1);
  FUN_00460080(DAT_005ae704,0x1c08d20);
  FUN_00461000(DAT_005ae704,0);
  thunk_FUN_004cdbc0(DAT_005ae704);
  local_58 = *param_1;
  local_54 = param_1[1];
  local_50 = param_1[2];
  local_a0 = param_1[3];
  local_9c = param_1[4];
  local_98 = param_1[5];
  fVar5 = 1.0;
  iVar2 = 0;
  fVar4 = 0.025;
  do {
    fVar4 = fVar4 * (float)_DAT_005810dc;
    fVar5 = (float)_DAT_005810dc * fVar5;
    local_ac = local_a0 * fVar4;
    local_9c = local_9c - fVar4 * param_1[7];
    local_a4 = local_98 * fVar4;
    local_a8 = local_9c * fVar4;
    local_58 = local_58 - local_ac;
    local_50 = local_50 - local_a4;
    local_54 = local_54 - local_a8;
    FUN_00460a00(DAT_005ae704,&local_58,fVar4,fVar5);
    FUN_00460a50(DAT_005ae704,&DAT_01c08d08,0);
    local_4c = -local_20 * fVar5;
    local_44 = 0;
    local_40 = (int)ROUND(local_4c * _DAT_0059d1f8);
    local_3c = (int)ROUND(local_4c * _DAT_0059d1f8);
    local_38 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    local_48 = local_4c;
    local_1c = local_4c;
    FUN_0053075c(*DAT_005ae704,&local_40);
    local_4c = local_20 * fVar5;
    local_48 = local_1c;
    local_44 = 0;
    local_c4 = (int)ROUND(local_4c * _DAT_0059d1f8);
    local_c0 = (int)ROUND(local_1c * _DAT_0059d1f8);
    local_bc = (int)ROUND(_DAT_0059d1f8 * 0.0);
    local_18 = local_4c;
    FUN_0053075c(*DAT_005ae704 + 0x30,&local_c4);
    local_44 = 0;
    local_4c = local_18;
    local_48 = local_18;
    local_88 = (int)ROUND(local_18 * _DAT_0059d1f8);
    local_84 = (int)ROUND(local_18 * _DAT_0059d1f8);
    local_80 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    FUN_0053075c(*DAT_005ae704 + 0x60,&local_88);
    local_4c = local_1c;
    local_48 = local_18;
    local_44 = 0;
    local_d0 = (int)ROUND(local_1c * _DAT_0059d1f8);
    local_cc = (int)ROUND(local_18 * _DAT_0059d1f8);
    local_c8 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    FUN_0053075c(*DAT_005ae704 + 0x90,&local_d0);
    FUN_00447670(_DAT_007f7370,param_1,0);
    lVar1 = (longlong)(int)param_1[0xe] * (longlong)(0xffff - _DAT_01c038f4);
    DAT_005c5040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_005c5034 = 0xffff;
    DAT_005c5038 = 0xffff;
    DAT_005c503c = 0xffff;
    DAT_005c5064 = 0xffff;
    DAT_005c5068 = 0xffff;
    DAT_005c506c = 0xffff;
    DAT_005c5094 = 0xffff;
    DAT_005c5098 = 0xffff;
    DAT_005c509c = 0xffff;
    DAT_005c50c4 = 0xffff;
    DAT_005c50c8 = 0xffff;
    DAT_005c50cc = 0xffff;
    DAT_005c5070 = DAT_005c5040;
    _DAT_005c50a0 = DAT_005c5040;
    _DAT_005c50d0 = DAT_005c5040;
    FUN_00461000(DAT_005ae704,1);
    FUN_00460080(DAT_005ae704,0x1c08d20);
    FUN_00461000(DAT_005ae704,0);
    iVar2 = iVar2 + 1;
    thunk_FUN_004cdbc0(DAT_005ae704);
  } while (iVar2 < 3);
  return;
}
