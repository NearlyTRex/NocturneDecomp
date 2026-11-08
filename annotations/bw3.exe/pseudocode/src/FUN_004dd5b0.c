// Name: FUN_004dd5b0
// Address: 004dd5b0
// Address Range: [[004dd5b0, 004dd766]]
// Convention: unknown
// Signature: void FUN_004dd5b0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004dd5b0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte local_48 [4];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = 0x10000;
  iVar3 = 0x10000;
  if (0x1e0 < DAT_005fba1c) {
    iVar2 = (int)(0x2800000 / (longlong)DAT_005fba18);
    iVar3 = (int)(0x1e00000 / (longlong)DAT_005fba1c);
  }
  FUN_0046e5e0(DAT_005f2afc,&DAT_00600254);
  FUN_0046d4c0(DAT_005f2afc,param_5);
  piVar1 = DAT_005f2afc;
  *(int *)(*DAT_005f2afc + 0x10) = param_1 * iVar2;
  *(int *)(*piVar1 + 0x14) = param_2 * iVar3;
  *(uint *)(*piVar1 + 8) = 0x1000;
  *(uint *)(*piVar1 + 0x18) = 0;
  *(uint *)(*piVar1 + 0x1c) = 0;
  *(int *)(*piVar1 + 0x40) = iVar2 * param_3;
  *(int *)(*piVar1 + 0x44) = param_2 * iVar3;
  *(uint *)(*piVar1 + 0x38) = 0x1000;
  *(uint *)(*piVar1 + 0x48) = 0xf00000;
  *(uint *)(*piVar1 + 0x4c) = 0;
  *(int *)(*piVar1 + 0x70) = iVar2 * param_3;
  *(int *)(*piVar1 + 0x74) = iVar3 * param_4;
  *(uint *)(*piVar1 + 0x68) = 0x1000;
  *(uint *)(*piVar1 + 0x78) = 0xf00000;
  *(uint *)(*piVar1 + 0x7c) = 0x600000;
  *(int *)(*piVar1 + 0xa0) = param_1 * iVar2;
  *(int *)(*piVar1 + 0xa4) = iVar3 * param_4;
  *(uint *)(*piVar1 + 0x98) = 0x1000;
  *(uint *)(*piVar1 + 0xa8) = 0;
  *(uint *)(*piVar1 + 0xac) = 0x600000;
  local_34 = 0;
  local_38 = 0;
  local_44 = 4;
  local_3c = 0;
  local_2c = 1;
  local_40 = 0;
  local_30 = 0;
  local_24 = 3;
  local_28 = 2;
  FUN_0046b850(piVar1,local_48,0xa3);
  local_20 = param_1;
  local_18 = param_2;
  local_1c = param_3;
  local_14 = param_4;
  FUN_00449310(0x2038f4c,param_1,param_3,param_2,param_4);
  return;
}
