// Name: FUN_00570bd0
// Address: 00570bd0
// Address Range: [[00570bd0, 00570c90]]
// Convention: unknown
// Signature: int FUN_00570bd0(undefined4 *param_1,short *param_2,uint param_3)

#include "nocturne.h"

int FUN_00570bd0(uint *param_1,short *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint local_14;
  
  bVar7 = 0;
  iVar4 = 0;
  if (param_1 == (uint *)0x0) {
    while ((iVar2 = iVar4, *param_2 != 0 && (iVar2 = FUN_0056f3a0(&local_14,*param_2), iVar2 != -1))
          ) {
      param_2 = param_2 + 1;
      iVar4 = iVar4 + iVar2;
    }
  }
  else {
    for (; iVar2 = iVar4, param_3 != 0; param_3 = param_3 - uVar1) {
      if (*param_2 == 0) {
        *(byte *)param_1 = 0;
        return iVar4;
      }
      uVar1 = FUN_0056f3a0(&local_14,*param_2);
      if (uVar1 == 0xffffffff) {
        return -1;
      }
      if (param_3 < uVar1) {
        return iVar4;
      }
      puVar5 = &local_14;
      puVar6 = param_1;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(byte *)puVar6 = *(byte *)puVar5;
        puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
        puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + uVar1;
      param_1 = (uint *)((int)param_1 + uVar1);
    }
  }
  return iVar2;
}
