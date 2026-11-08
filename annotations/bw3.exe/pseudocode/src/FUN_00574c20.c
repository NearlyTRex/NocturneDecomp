// Name: FUN_00574c20
// Address: 00574c20
// Address Range: [[00574c20, 00574cae]]
// Convention: unknown
// Signature: uint FUN_00574c20(int param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

uint FUN_00574c20(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  if ((int)uVar1 < (int)param_3) {
    if (*(int *)(param_1 + 0x14) == 0) {
      param_3 = uVar1;
      if (uVar1 == 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc) + 0x4000 + param_3;
      iVar2 = FUN_005a3e50(*(uint *)(param_1 + 4),iVar3);
      if (iVar2 == 0) {
        return 0xfffffffe;
      }
      *(int *)(param_1 + 4) = iVar2;
      *(int *)(param_1 + 8) = iVar3;
    }
  }
  puVar4 = (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(byte *)puVar4 = *(byte *)param_2;
    param_2 = (uint *)((int)param_2 + (uint)bVar5 * -2 + 1);
    puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
  }
  iVar3 = *(int *)(param_1 + 0xc) + param_3;
  *(int *)(param_1 + 0xc) = iVar3;
  if (*(int *)(param_1 + 0x10) <= iVar3) {
    *(int *)(param_1 + 0x10) = iVar3;
  }
  return param_3;
}
