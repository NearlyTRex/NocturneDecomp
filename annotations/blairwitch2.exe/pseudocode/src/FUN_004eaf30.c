// Name: FUN_004eaf30
// Address: 004eaf30
// Address Range: [[004eaf30, 004eb0d2]]
// Convention: unknown
// Signature: void FUN_004eaf30(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eaf30(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte local_30 [4];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  piVar1 = DAT_0060b280;
  if (0x140 < param_1) {
    param_1 = 0x280 - (param_1 + -0x140);
  }
  if (0 < param_3 * 2) {
    iVar3 = (param_1 + -0x10) * 0x10000;
    *(int *)(*DAT_0060b280 + 0x10) = iVar3;
    *(int *)(*piVar1 + 0x14) = param_2 << 0x10;
    iVar2 = (param_1 + 0x10) * 0x10000;
    *(int *)(*piVar1 + 0x40) = iVar2;
    *(int *)(*piVar1 + 0x44) = param_2 << 0x10;
    *(int *)(*piVar1 + 0x70) = iVar2;
    iVar2 = (param_2 + param_3 * -2) * 0x10000;
    *(int *)(*piVar1 + 0x74) = iVar2;
    *(int *)(*piVar1 + 0xa0) = iVar3;
    *(int *)(*piVar1 + 0xa4) = iVar2;
    *(uint *)(*piVar1 + 0x18) = 0x80000;
    *(uint *)(*piVar1 + 0x1c) = 0xf80000;
    *(uint *)(*piVar1 + 0x48) = 0xf80000;
    *(uint *)(*piVar1 + 0x4c) = 0xf80000;
    *(uint *)(*piVar1 + 0x78) = 0xf80000;
    *(uint *)(*piVar1 + 0x7c) = 0x80000;
    *(uint *)(*piVar1 + 0xa8) = 0x80000;
    *(uint *)(*piVar1 + 0xac) = 0x80000;
    local_2c = 4;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_18 = 0;
    local_10 = 2;
    local_c = 3;
    local_14 = 1;
    FUN_0046b8e0(piVar1,0x8000);
    FUN_0046b8d0(DAT_0060b280,1);
    FUN_0046ca00(DAT_0060b280,
                 &DAT_00617fc8 +
                 (((int)((_DAT_01d06134 + (_DAT_01d06134 >> 0x1f) * -0x10000) -
                        (uint)((_DAT_01d06134 >> 0x1f) << 0xf < 0)) >> 0x10) + param_1 & 7U) * 0x18)
    ;
    FUN_00469c60(DAT_0060b280,local_30,0x23);
    FUN_0046b8d0(DAT_0060b280,0);
    FUN_0046b8e0(DAT_0060b280,0xffff);
  }
  return;
}
