// Name: FUN_004fe9c0
// Address: 004fe9c0
// Address Range: [[004fe9c0, 004fef94]]
// Convention: unknown
// Signature: void FUN_004fe9c0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fe9c0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_84 [4];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
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
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  if (param_1[3] != 0) {
    if (param_3 != 0) {
      FUN_004031c0(0,0,DAT_0061b498 + -1,DAT_0061b49c + -1,0);
    }
    if (DAT_0061b49c == 0x1e0) {
      if (param_1[0x44] != 0) {
        FUN_00483c10(DAT_00612560,param_1[0x45],param_1[0x46],param_1[0x47],param_1[0x48]);
      }
      FUN_004834b0(DAT_00612560,&DAT_02c8af28);
      local_14 = 0x42600000;
      if (param_1[0x44] != 0) {
        local_14 = 0x42a80000;
      }
      FUN_004839b0(DAT_00612560,local_14);
      FUN_00483530(DAT_00612560,&DAT_02c8af28);
      local_18 = 0x42100000;
      local_20 = 0;
      local_1c = 0;
      FUN_004837b0(DAT_00612560,&local_20);
      *(uint *)(0x01E82168 + 0x15ae84) = 1;
      iVar5 = 0x8000 - (*param_1 << 0xf) / param_1[1];
      iVar2 = FUN_00507350(iVar5);
      iVar3 = 0x01E82168;
      *(uint *)(0x01E82168 + 0x15ae8c) = 0xffff6f78;
      *(uint *)(iVar3 + 0x15ae88) =
           (uint)((longlong)iVar2 * 37000) >> 0x10 |
           (int)((ulonglong)((longlong)iVar2 * 37000) >> 0x20) << 0x10;
      iVar2 = FUN_00507390(iVar5);
      iVar3 = 0x01E82168;
      *(uint *)(0x01E82168 + 0x15ae94) = 0x280;
      *(uint *)(iVar3 + 0x15ae90) =
           (uint)((longlong)iVar2 * 37000) >> 0x10 |
           (int)((ulonglong)((longlong)iVar2 * 37000) >> 0x20) << 0x10;
      FUN_00555770(iVar3,param_1[0x49] << 8,param_1[0x4a] << 8,param_1[0x4b] << 8);
      local_2c = 7.25;
      local_28 = 7.25;
      local_24 = 0.0;
      local_5c = (int)ROUND(_DAT_00602eac * 7.25);
      local_58 = (int)ROUND(_DAT_00602eac * 7.25);
      local_54 = (int)ROUND(_DAT_00602eac * 0.0);
      FUN_00580173(*DAT_00612560,&local_5c);
      local_2c = -local_2c;
      local_50 = (int)ROUND(local_2c * _DAT_00602eac);
      local_4c = (int)ROUND(local_28 * _DAT_00602eac);
      local_48 = (int)ROUND(local_24 * _DAT_00602eac);
      FUN_00580173(*DAT_00612560 + 0x30,&local_50);
      local_28 = -local_28;
      local_38 = (int)ROUND(local_2c * _DAT_00602eac);
      local_34 = (int)ROUND(local_28 * _DAT_00602eac);
      local_30 = (int)ROUND(local_24 * _DAT_00602eac);
      FUN_00580173(*DAT_00612560 + 0x60,&local_38);
      local_2c = -local_2c;
      local_44 = (int)ROUND(local_2c * _DAT_00602eac);
      local_40 = (int)ROUND(local_28 * _DAT_00602eac);
      local_3c = (int)ROUND(local_24 * _DAT_00602eac);
      FUN_00580173(*DAT_00612560 + 0x90,&local_44);
      piVar1 = DAT_00612560;
      *(uint *)(*DAT_00612560 + 0x18) = 0x1000000;
      *(uint *)(*piVar1 + 0x1c) = 0;
      *(uint *)(*piVar1 + 0x48) = 0;
      *(uint *)(*piVar1 + 0x4c) = 0;
      *(uint *)(*piVar1 + 0x78) = 0;
      *(uint *)(*piVar1 + 0x7c) = 0x1000000;
      *(uint *)(*piVar1 + 0xa8) = 0x1000000;
      *(uint *)(*piVar1 + 0xac) = 0x1000000;
      piVar1 = DAT_00612560;
      iVar3 = (*param_1 * 0xffff) / param_1[1];
      if (0xffff < iVar3) {
        iVar3 = 0xffff;
      }
      *(uint *)(*DAT_00612560 + 0x2c) = 0;
      *(int *)(*piVar1 + 0x5c) = iVar3;
      *(uint *)(*piVar1 + 0x8c) = 0;
      *(uint *)(*piVar1 + 0xbc) = 0;
      iVar3 = 0;
      do {
        piVar1 = DAT_00612560;
        *(int *)(*DAT_00612560 + 0x20 + iVar3) = param_1[0x49] << 8;
        *(int *)(*piVar1 + 0x24 + iVar3) = param_1[0x4a] << 8;
        iVar3 = iVar3 + 0x30;
        *(int *)(*piVar1 + -8 + iVar3) = param_1[0x4b] << 8;
      } while (iVar3 != 0xc0);
      local_70 = 0;
      local_74 = 0;
      local_78 = 0;
      local_7c = 0;
      local_6c = 0;
      local_80 = 4;
      local_64 = 2;
      local_60 = 3;
      local_68 = 1;
      FUN_00483dd0(piVar1,1);
      FUN_00484f00(DAT_00612560,&DAT_0061f2e4);
      FUN_00482170(DAT_00612560,local_84,0x327);
      FUN_00483dd0(DAT_00612560,0);
      FUN_00467270(0x1d1be4c,0,0,0x205);
      if (param_1[0x44] != 0) {
        thunk_FUN_00509210(DAT_00612560);
      }
      *(uint *)(0x01E82168 + 0x15ae84) = 0;
      local_c = _DAT_0152d244;
      iVar2 = (DAT_0061b498 * 0x240) / 0x280;
      iVar5 = (DAT_0061b49c * 0x18) / 0x1e0;
      iVar4 = (DAT_0061b498 << 5) / 0x280;
      local_10 = (DAT_0061b49c * 0x1c0) / 0x1e0;
      iVar3 = *param_1;
      *param_1 = iVar3 + 1;
      if (param_1[1] < iVar3 + 1) {
        *param_1 = param_1[1];
      }
      if (param_1[0x44] == 0) {
        FUN_004031c0(iVar4 + -1,local_10 + -1,iVar2 + 1 + iVar4,local_10 + iVar5 + 1,0);
        if (param_2 != 0) {
          iVar3 = FUN_004c3ea0(local_c,param_2);
          FUN_004c1dd0(local_c,param_2,(iVar4 + iVar2 / 2) - iVar3 / 2,
                       (local_10 + iVar5 / 2) - *(int *)(local_c + 0x41ec) / 2,0xf8,0xffffffff);
        }
      }
      FUN_005acff0();
    }
  }
  return;
}
