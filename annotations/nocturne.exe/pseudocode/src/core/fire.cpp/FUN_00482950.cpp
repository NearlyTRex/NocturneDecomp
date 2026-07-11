// Name: FUN_00482950
// Address: 00482950
// Address Range: [[00482950, 00482c7d]]
// Convention: unknown
// Signature: void FUN_00482950(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482950(int param_1)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  float10 fVar4;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  iVar3 = *DAT_005ae704;
  local_64 = (int)ROUND(*(float *)(param_1 + 4) * _DAT_0059d1f8);
  local_60 = (int)ROUND(*(float *)(param_1 + 8) * _DAT_0059d1f8);
  local_5c = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_0059d1f8);
  FUN_00530a25(iVar3,&local_64);
  iVar3 = FUN_00461f80(DAT_005ae704,iVar3);
  if (iVar3 != 0) {
    fVar4 = (float10)*(float *)(param_1 + 0x18);
    FUN_00563a30();
    local_18 = (int)ROUND(fVar4);
    if ((local_18 < 0) || (0x27 < local_18)) {
      _DAT_01cc4800 = "A..\\core\\fire.cpp" + 1;
      _DAT_01cc4804 = 0x11d;
      FUN_004c8440("CSmokeParticle::render - Frame out of range");
    }
    FUN_00461eb0(DAT_005ae704,&DAT_005b80f4 + local_18 * 0x18);
    pfVar1 = (float *)(param_1 + 4);
    FUN_00460a00(DAT_005ae704,pfVar1);
    FUN_00460a50(DAT_005ae704,&DAT_01c08d08,0);
    local_14 = *(float *)(param_1 + 0x14);
    local_50 = 0;
    local_58 = -local_14;
    local_28 = (int)ROUND(local_58 * _DAT_0059d1f8);
    local_24 = (int)ROUND(local_58 * _DAT_0059d1f8);
    local_20 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    local_54 = local_58;
    local_1c = local_58;
    FUN_0053075c(*DAT_005ae704,&local_28);
    local_58 = local_14;
    local_54 = local_1c;
    local_50 = 0;
    local_70 = (int)ROUND(local_14 * _DAT_0059d1f8);
    local_6c = (int)ROUND(local_1c * _DAT_0059d1f8);
    local_68 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    FUN_0053075c(*DAT_005ae704 + 0x30,&local_70);
    local_50 = 0;
    local_58 = local_14;
    local_54 = local_14;
    local_34 = (int)ROUND(local_14 * _DAT_0059d1f8);
    local_30 = (int)ROUND(local_14 * _DAT_0059d1f8);
    local_2c = (int)ROUND(_DAT_0059d1f8 * 0.0);
    FUN_0053075c(*DAT_005ae704 + 0x60,&local_34);
    local_58 = local_1c;
    local_54 = local_14;
    local_50 = 0;
    local_4c = (int)ROUND(local_1c * _DAT_0059d1f8);
    local_48 = (int)ROUND(local_14 * _DAT_0059d1f8);
    local_44 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    FUN_0053075c(*DAT_005ae704 + 0x90,&local_4c);
    DAT_005c502c = 0x80000;
    _DAT_005c5030 = 0xf80000;
    _DAT_005c505c = 0xf80000;
    _DAT_005c5060 = 0xf80000;
    _DAT_005c508c = 0xf80000;
    _DAT_005c5090 = 0x80000;
    _DAT_005c50bc = 0x80000;
    _DAT_005c50c0 = 0x80000;
    local_40 = (int)ROUND(*pfVar1 * _DAT_0059d1f8);
    local_3c = (int)ROUND(*(float *)(param_1 + 8) * _DAT_0059d1f8);
    local_38 = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_0059d1f8);
    FUN_0050bb50(0x01E57284,&local_40,&DAT_01c08d14,0,4);
    FUN_00447670(_DAT_007f7370,pfVar1,0);
    lVar2 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)*(int *)(param_1 + 0x28);
    FUN_00461010(DAT_005ae704,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    FUN_004602a0(DAT_005ae704,0x1c08d20);
    thunk_FUN_004cdbc0(DAT_005ae704);
  }
  return;
}
