// Name: FUN_00484050
// Address: 00484050
// Address Range: [[00484050, 0048429e]]
// Convention: unknown
// Signature: void FUN_00484050(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484050(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte auStack_54 [4];
  uint local_50;
  uint local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    *(uint *)(param_1 + 0x40) = 1;
    *(uint *)(param_1 + 0x48) = 0;
  }
  else {
    lVar1 = (longlong)*(int *)(param_1 + 0x3c) * (longlong)_DAT_01bd1d80;
    iVar3 = *(int *)(param_1 + 0x38) -
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    *(int *)(param_1 + 0x38) = iVar3;
    if (iVar3 < 0) {
      *(uint *)(param_1 + 0x18) = 0;
      *(uint *)(param_1 + 0x38) = 0;
    }
  }
  FUN_004ef120(param_1);
  iVar3 = _DAT_01bd1d80 / 2;
  *(int *)(param_1 + 0x4c) =
       *(int *)(param_1 + 0x4c) +
       ((int)((_DAT_01bd1d80 + (_DAT_01bd1d80 >> 0x1f) * -4) -
             (uint)((_DAT_01bd1d80 >> 0x1f) << 1 < 0)) >> 2);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar3 = param_1 + 0x5c;
    FUN_0044cd90(iVar3,param_1);
    iVar4 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x98) = iVar4;
    iVar4 = (iVar4 + (iVar4 >> 0x1f) * -0x100) - (uint)((iVar4 >> 0x1f) << 7 < 0);
    iVar5 = iVar4 >> 0x1f;
    *(char *)(param_1 + 0x78) =
         (char)((int)(((iVar4 >> 8) + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2);
    FUN_0044cde0(iVar3,0x41000000);
    iVar4 = 0x01E57284;
    *(uint *)(param_1 + 0x7c) = 0;
    FUN_0050a9f0(iVar4,iVar3);
    iVar3 = *(int *)(param_1 + 0x48) + _DAT_01bd1d80;
    *(int *)(param_1 + 0x48) = iVar3;
    uVar2 = 0x01C08D04;
    if (0x1000 < iVar3) {
      *(int *)(param_1 + 0x48) = iVar3 + -0x1000;
      FUN_0048afe0(uVar2,param_1,0x40000000,0,0xffff);
      FUN_0048ae90(0x01C08D04,param_1,0,0x20000,0x10000,0,0xffff);
      FUN_0048ae90(0x01C08D04,param_1,0,0x20000,0x10000,0,0xffff);
      FUN_0048ae90(0x01C08D04,param_1,0,0x20000,0x10000,0,0xffff);
      FUN_0048ae90(0x01C08D04,param_1,0,0x20000,0x10000,0,0xffff);
    }
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    local_18 = 0x41a00000;
    local_14 = 0x40800000;
  }
  else if (*(int *)(param_1 + 0x44) == 2) {
    local_18 = 0x40a00000;
    local_14 = 0x3f800000;
  }
  else {
    local_18 = 0x40a00000;
    local_14 = 0x3f800000;
  }
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar3) break;
    iVar5 = *(int *)(0x01E57284 + 0x14ecb4 + iVar4);
    FUN_00423ed0(auStack_54);
    local_50 = local_18;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
    (**(code **)(*(int *)(iVar5 + 0x14c) + 0xf8))(iVar5,param_1,local_14,auStack_54);
  }
  return;
}
