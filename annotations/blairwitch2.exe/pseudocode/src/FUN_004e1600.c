// Name: FUN_004e1600
// Address: 004e1600
// Address Range: [[004e1600, 004e1b77]]
// Convention: unknown
// Signature: void FUN_004e1600(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1600(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_1[3] != 0) {
    if (param_3 != 0) {
      FUN_004031c0(0,0,DAT_006141b8 + -1,DAT_006141bc + -1,0);
    }
    local_1c = (float)*param_1 / (float)param_1[1];
    FUN_004031c0(0,0,DAT_006141b8,0x14,0);
    FUN_004031c0(1,1,DAT_006141b8 + -1,0x13,0);
    local_c = DAT_006141b8 + -2;
    fVar6 = (float10)local_c * (float10)local_1c;
    FUN_005b7ff0(0x12,4);
    local_c = (int)ROUND(fVar6);
    FUN_004031c0(2,2,local_c);
    if (param_1[0x44] != 0) {
      FUN_0046b710(DAT_0060b280,param_1[0x45],param_1[0x46],param_1[0x47],param_1[0x48]);
    }
    FUN_0046afb0(DAT_0060b280,&DAT_0265370c);
    local_18 = 0x42600000;
    if (param_1[0x44] != 0) {
      local_18 = 0x42a80000;
    }
    FUN_0046b4b0(DAT_0060b280,local_18);
    FUN_0046b030(DAT_0060b280,&DAT_0265370c);
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x42100000;
    FUN_0046b2b0(DAT_0060b280,&local_40);
    *(uint *)(0x01E661B8 + 0x15ae84) = 1;
    iVar5 = 0x8000 - (*param_1 << 0xf) / param_1[1];
    iVar2 = FUN_004e86b0(iVar5);
    iVar3 = 0x01E661B8;
    *(uint *)(0x01E661B8 + 0x15ae8c) = 0xffff6f78;
    *(uint *)(iVar3 + 0x15ae88) =
         (uint)((longlong)iVar2 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 37000) >> 0x20) << 0x10;
    iVar2 = FUN_004e86f0(iVar5);
    iVar3 = 0x01E661B8;
    *(uint *)(0x01E661B8 + 0x15ae94) = 0x280;
    *(uint *)(iVar3 + 0x15ae90) =
         (uint)((longlong)iVar2 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 37000) >> 0x20) << 0x10;
    FUN_005344c0(iVar3,param_1[0x49] << 8,param_1[0x4a] << 8,param_1[0x4b] << 8);
    local_20 = 0.0;
    local_28 = 7.25;
    local_24 = 7.25;
    local_58 = (int)ROUND(_DAT_005f945c * 7.25);
    local_54 = (int)ROUND(_DAT_005f945c * 7.25);
    local_50 = (int)ROUND(_DAT_005f945c * 0.0);
    FUN_0055d723(*DAT_0060b280,&local_58);
    local_28 = -local_28;
    local_64 = (int)ROUND(local_28 * _DAT_005f945c);
    local_60 = (int)ROUND(local_24 * _DAT_005f945c);
    local_5c = (int)ROUND(local_20 * _DAT_005f945c);
    FUN_0055d723(*DAT_0060b280 + 0x30,&local_64);
    local_24 = -local_24;
    local_34 = (int)ROUND(local_28 * _DAT_005f945c);
    local_30 = (int)ROUND(local_24 * _DAT_005f945c);
    local_2c = (int)ROUND(local_20 * _DAT_005f945c);
    FUN_0055d723(*DAT_0060b280 + 0x60,&local_34);
    local_28 = -local_28;
    local_4c = (int)ROUND(local_28 * _DAT_005f945c);
    local_48 = (int)ROUND(local_24 * _DAT_005f945c);
    local_44 = (int)ROUND(local_20 * _DAT_005f945c);
    FUN_0055d723(*DAT_0060b280 + 0x90,&local_4c);
    piVar1 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x18) = 0x1000000;
    *(uint *)(*piVar1 + 0x1c) = 0;
    *(uint *)(*piVar1 + 0x48) = 0;
    *(uint *)(*piVar1 + 0x4c) = 0;
    *(uint *)(*piVar1 + 0x78) = 0;
    *(uint *)(*piVar1 + 0x7c) = 0x1000000;
    *(uint *)(*piVar1 + 0xa8) = 0x1000000;
    *(uint *)(*piVar1 + 0xac) = 0x1000000;
    piVar1 = DAT_0060b280;
    iVar3 = (*param_1 * 0xffff) / param_1[1];
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    *(uint *)(*DAT_0060b280 + 0x2c) = 0;
    *(int *)(*piVar1 + 0x5c) = iVar3;
    *(uint *)(*piVar1 + 0x8c) = 0;
    *(uint *)(*piVar1 + 0xbc) = 0;
    iVar3 = 0;
    do {
      piVar1 = DAT_0060b280;
      *(int *)(*DAT_0060b280 + 0x20 + iVar3) = param_1[0x49] << 8;
      *(int *)(*piVar1 + 0x24 + iVar3) = param_1[0x4a] << 8;
      iVar3 = iVar3 + 0x30;
      *(int *)(*piVar1 + -8 + iVar3) = param_1[0x4b] << 8;
    } while (iVar3 != 0xc0);
    if (param_1[0x44] != 0) {
      thunk_FUN_004ea570(piVar1);
    }
    *(uint *)(0x01E661B8 + 0x15ae84) = 0;
    local_14 = _DAT_01511cc0;
    iVar2 = (DAT_006141b8 * 0x240) / 0x280;
    iVar5 = (DAT_006141bc * 0x18) / 0x1e0;
    iVar4 = (DAT_006141b8 << 5) / 0x280;
    local_10 = (DAT_006141bc * 0x1c0) / 0x1e0;
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    if (param_1[1] < iVar3 + 1) {
      *param_1 = param_1[1];
    }
    if (param_1[0x44] == 0) {
      FUN_004031c0(iVar4 + -1,local_10 + -1,iVar2 + 1 + iVar4,local_10 + iVar5 + 1,0);
      if (param_2 != 0) {
        iVar3 = FUN_004aaf00(local_14,param_2);
        FUN_004a8df0(local_14,param_2,(iVar4 + iVar2 / 2) - iVar3 / 2,
                     (local_10 + iVar5 / 2) - *(int *)(local_14 + 0x41ec) / 2,0xf8,0xffffffff);
      }
    }
    FUN_00589560();
  }
  return;
}
