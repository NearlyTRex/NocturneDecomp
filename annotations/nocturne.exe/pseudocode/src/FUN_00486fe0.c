// Name: FUN_00486fe0
// Address: 00486fe0
// Address Range: [[00486fe0, 00487360]]
// Convention: unknown
// Signature: void FUN_00486fe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486fe0(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  byte local_8c [4];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  byte local_58 [12];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(uint *)(param_1 + 0xc) & 0x7fffffff) == 0) {
    return;
  }
  fVar3 = ((float10)1 - (float10)*(float *)(param_1 + 0xc)) * (float10)_DAT_00581214;
  FUN_00563a30();
  local_1c = (int)ROUND(fVar3);
  FUN_00461eb0(DAT_005ae704,&DAT_005b858c + local_1c * 0x30);
  FUN_00460a00(DAT_005ae704,param_1);
  FUN_00460db0(DAT_005ae704,local_58);
  FUN_00460aa0(DAT_005ae704,local_58,0);
  fVar3 = (float10)*(float *)(param_1 + 0x10) * (float10)_DAT_0058122c * (float10)_DAT_00581224;
  fVar4 = -(float10)*(float *)(param_1 + 0x10) * (float10)_DAT_0058121c * (float10)_DAT_00581224;
  FUN_00563a30();
  iVar2 = FUN_00563a30();
  local_10 = (int)ROUND(fVar3);
  local_14 = (int)ROUND(fVar4);
  if (iVar2 != 0) {
    local_10 = -local_10;
    local_14 = -local_14;
  }
  local_c = local_14;
  local_34 = (float)local_14;
  local_30 = *(float *)(param_1 + 0x10) * _DAT_00581234 * (float)_DAT_00581224;
  local_2c = 0.0;
  local_28 = (int)ROUND(local_34 * _DAT_0059d1f8);
  local_24 = (int)ROUND(local_30 * _DAT_0059d1f8);
  local_20 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  local_18 = local_34;
  FUN_0053075c(*DAT_005ae704,&local_28);
  local_c = local_10;
  local_34 = (float)local_10;
  local_4c = (int)ROUND(local_34 * _DAT_0059d1f8);
  local_48 = (int)ROUND(local_30 * _DAT_0059d1f8);
  local_44 = (int)ROUND(local_2c * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_4c);
  local_30 = -*(float *)(param_1 + 0x10) * (float)_DAT_0058123c * (float)_DAT_00581224;
  local_40 = (int)ROUND(local_34 * _DAT_0059d1f8);
  local_3c = (int)ROUND(local_30 * _DAT_0059d1f8);
  local_38 = (int)ROUND(local_2c * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_40);
  local_34 = local_18;
  local_64 = (int)ROUND(local_18 * _DAT_0059d1f8);
  local_60 = (int)ROUND(local_30 * _DAT_0059d1f8);
  local_5c = (int)ROUND(local_2c * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704 + 0x90,&local_64);
  piVar1 = DAT_005ae704;
  *(uint *)(*DAT_005ae704 + 0x18) = 0x20000;
  *(uint *)(*piVar1 + 0x1c) = 0x20000;
  *(uint *)(*piVar1 + 0x48) = 0xfe0000;
  *(uint *)(*piVar1 + 0x4c) = 0x20000;
  *(uint *)(*piVar1 + 0x78) = 0xfe0000;
  *(uint *)(*piVar1 + 0x7c) = 0xfe0000;
  *(uint *)(*piVar1 + 0xa8) = 0x20000;
  *(uint *)(*piVar1 + 0xac) = 0xfe0000;
  *(uint *)(*piVar1 + 0x2c) = 0x8000;
  *(uint *)(*piVar1 + 0x5c) = 0x8000;
  *(uint *)(*piVar1 + 0x8c) = 0x8000;
  *(uint *)(*piVar1 + 0xbc) = 0x8000;
  local_88 = 4;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_74 = 0;
  local_68 = 3;
  local_70 = 1;
  local_6c = 2;
  FUN_00461000(piVar1,1);
  FUN_0045f3c0(DAT_005ae704,local_8c,0x123);
  FUN_00461000(DAT_005ae704,0);
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}
