// Name: FUN_004f7700
// Address: 004f7700
// Address Range: [[004f7700, 004f77c5]]
// Convention: unknown
// Signature: void FUN_004f7700(int param_1)

#include "nocturne.h"

void FUN_004f7700(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint local_bc [12];
  byte local_8c [48];
  uint local_5c [12];
  byte local_2c [12];
  byte local_20 [12];
  int local_14;
  
  bVar7 = 0;
  FUN_0055afb0(local_8c,param_1 + 0x20,param_1 + 0x30);
  local_14 = param_1 + 0x514;
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x514) != 0) {
      FUN_0055aa00(local_14 + iVar4 * 0x34 + 4,local_8c);
      puVar5 = local_5c;
      puVar6 = local_bc;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = *(int *)(param_1 + 0x514);
      iVar1 = *(int *)(iVar3 + 0x14c);
      uVar2 = FUN_0055b180(local_bc,local_20);
      uVar2 = FUN_0055bc00(local_bc,local_2c,uVar2);
      (**(code **)(iVar1 + 0x60))(iVar3,uVar2);
    }
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 0x34;
  } while (iVar4 < 10);
  return;
}
