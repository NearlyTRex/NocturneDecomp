// Name: FUN_00513d30
// Address: 00513d30
// Address Range: [[00513d30, 00513e90]]
// Convention: unknown
// Signature: int FUN_00513d30(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_00513d30(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_101c [1015];
  uint *puVar7;
  uint uVar8;
  int local_34;
  uint local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  if ((DAT_01e4fed0 & 1) == 0) {
    DAT_01e4fed0 = DAT_01e4fed0 | 1;
    FUN_005b7f5f(0x1d65480,0xc,&DAT_005faac0);
    FUN_005b8d8c(&DAT_0061b2e8);
  }
  if (DAT_0061b2f8 < 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(int *)((int)&DAT_0061b2f8 + iVar2) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
  }
  iVar4 = 0;
  FUN_00476a50(&DAT_01fc9c68,param_1);
  iVar2 = 0;
  iVar3 = 0;
  local_1c = local_34;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar1 = 0;
  do {
    if (((local_1c == *(int *)(iVar3 + 0x1d78d30)) && (local_18 == *(int *)(iVar3 + 0x1d78d34))) &&
       (iVar5 = iVar2, local_14 == *(int *)(iVar3 + 0x1d78d38))) break;
    iVar5 = iVar1;
    if ((&DAT_0061b2f8)[iVar1] < *(int *)((int)&DAT_0061b2f8 + iVar4)) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x138dc;
    iVar1 = iVar5;
  } while (iVar2 < 0xc);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_0061b2f8 + iVar1) < (&DAT_0061b2f8)[iVar5]) {
      *(int *)((int)&DAT_0061b2f8 + iVar1) = *(int *)((int)&DAT_0061b2f8 + iVar1) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  uVar8 = 1;
  puVar7 = &stack0xffffffd8;
  (&DAT_0061b2f8)[iVar5] = 0;
  iVar2 = iVar5 * 0x138dc + 0x1d65480;
  local_28 = *param_1;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * 0xfffffffe * 4) =
       param_1[(uint)bVar6 * -2 + 1];
  iVar1 = iVar2;
  *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       (param_1 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  FUN_005121a0(iVar1,puVar7,uVar8);
  return iVar2;
}
