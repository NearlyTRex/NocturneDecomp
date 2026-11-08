// Name: FUN_004467a0
// Address: 004467a0
// Address Range: [[004467a0, 0044689d]]
// Convention: unknown
// Signature: undefined4 FUN_004467a0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004467a0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  FUN_005b87c0(param_1 + 2,1,0xc,param_2);
  FUN_005b87c0(param_1 + 5,1,0xc,param_2);
  FUN_005b87c0(param_1 + 8,1,4,param_2);
  FUN_005b87c0(param_1 + 10,1,4,param_2);
  if (param_1[10] != 0) {
    FUN_00446590(param_1);
  }
  uVar1 = FUN_005b87c0(param_1[9],param_1[8],0xc,param_2);
  iVar2 = 0;
  if (0 < (int)param_1[10]) {
    iVar4 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar1 = FUN_004447b0(param_1[0xb] + iVar4,param_2,param_1[9]);
      iVar4 = iVar4 + 0x20;
    } while (iVar2 < (int)param_1[10]);
  }
  if (param_1[10] != 0) {
    uVar1 = FUN_005b87c0(param_1[0xc],1,param_1[10],param_2);
  }
  if (param_1[10] != 0) {
    FUN_005b87c0(*param_1,1,0x40,param_2);
    puVar3 = (uint *)*param_1;
    puVar5 = (uint *)param_1[1];
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar3;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    return 0x40;
  }
  return uVar1;
}
