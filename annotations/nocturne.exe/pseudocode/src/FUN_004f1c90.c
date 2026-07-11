// Name: FUN_004f1c90
// Address: 004f1c90
// Address Range: [[004f1c90, 004f1dfa]]
// Convention: unknown
// Signature: int FUN_004f1c90(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_004f1c90(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_101c [1015];
  int local_34;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  if ((DAT_01e312f0 & 1) == 0) {
    DAT_01e312f0 = DAT_01e312f0 | 1;
    FUN_005644a7(0x1d468a0,0xc,&DAT_005a1200);
    FUN_00564bb0(&DAT_005be0a8);
  }
  if (DAT_005be0b8 < 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(int *)((int)&DAT_005be0b8 + iVar2) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
  }
  iVar4 = 0;
  FUN_0046b700(&DAT_01fba938,param_1);
  iVar2 = 0;
  local_1c = local_34;
  (&stack0xffffffe8)[(uint)bVar6 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (((local_1c == *(int *)(iVar3 + 0x1d5a150)) && (local_18 == *(int *)(iVar3 + 0x1d5a154))) &&
       (iVar5 = iVar2, local_14 == *(int *)(iVar3 + 0x1d5a158))) break;
    iVar5 = iVar1;
    if ((&DAT_005be0b8)[iVar1] < *(int *)((int)&DAT_005be0b8 + iVar4)) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x138dc;
    iVar1 = iVar5;
  } while (iVar2 < 0xc);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_005be0b8 + iVar1) < (&DAT_005be0b8)[iVar5]) {
      *(int *)((int)&DAT_005be0b8 + iVar1) = *(int *)((int)&DAT_005be0b8 + iVar1) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  (&DAT_005be0b8)[iVar5] = 0;
  local_28 = *param_1;
  local_24 = param_1[1];
  local_20 = param_1[2];
  iVar1 = iVar5 * 0x138dc + 0x1d468a0;
  FUN_004f0360(iVar1,&stack0xffffffd8,1);
  return iVar1;
}
