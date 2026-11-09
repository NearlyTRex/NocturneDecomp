// Name: crt_unknown.c_FUN_005b8cf8
// Address: 005b8cf8
// Address Range: [[005b8cf8, 005b8d8b]]
// Convention: unknown
// Signature: undefined4 * crt_unknown_c_FUN_005b8cf8(undefined4 *param_1,int param_2)

#include "nocturne.h"

uint * FUN_005b8cf8(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (param_1 == (uint *)0x0) {
    puVar1 = (uint *)FUN_005b8590(param_2);
    return puVar1;
  }
  if (param_2 == 0) {
    FUN_005b86b0(param_1);
    return (uint *)0x0;
  }
  uVar2 = FUN_005becf0(param_1);
  puVar1 = (uint *)FUN_005beed4(param_1,param_2);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)FUN_005b8590(param_2);
    if (puVar1 == (uint *)0x0) {
      FUN_005beed4(param_1,uVar2);
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
      FUN_005b86b0(param_1);
    }
  }
  return puVar1;
}
