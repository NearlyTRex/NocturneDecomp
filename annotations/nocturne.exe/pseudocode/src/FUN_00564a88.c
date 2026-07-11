// Name: FUN_00564a88
// Address: 00564a88
// Address Range: [[00564a88, 00564b1b]]
// Convention: unknown
// Signature: undefined4 * FUN_00564a88(undefined4 *param_1,int param_2)

#include "nocturne.h"

uint * FUN_00564a88(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (param_1 == (uint *)0x0) {
    puVar1 = (uint *)FUN_005635c0(param_2);
    return puVar1;
  }
  if (param_2 == 0) {
    FUN_005638e0(param_1);
    return (uint *)0x0;
  }
  uVar2 = FUN_0056afc0(param_1);
  puVar1 = (uint *)FUN_0056b1a4(param_1,param_2);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)FUN_005635c0(param_2);
    if (puVar1 == (uint *)0x0) {
      FUN_0056b1a4(param_1,uVar2);
    }
    else {
      puVar4 = param_1;
      puVar5 = puVar1;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(byte *)puVar5 = *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
        puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
      }
      FUN_005638e0(param_1);
    }
  }
  return puVar1;
}
