// Name: FUN_004dc4b0
// Address: 004dc4b0
// Address Range: [[004dc4b0, 004dc80b]]
// Convention: unknown
// Signature: void FUN_004dc4b0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc4b0(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  byte bVar11;
  byte local_1dc [256];
  uint local_dc [25];
  char local_78 [100];
  int local_14;
  
  bVar11 = 0;
  FUN_004da860(param_1);
  FUN_004da900(param_1);
  FUN_005b9600(local_1dc,0xff,param_2);
  FUN_005b9600(local_1dc,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005db882,param_1 + 0x334);
  FUN_005b9600(local_1dc,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005db886,param_1 + 0x10);
  FUN_005b9600(local_1dc,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005db88a,&local_14);
  if (0 < *(int *)(param_1 + 0x334)) {
    FUN_005b9600(local_1dc,0xff,param_2);
    FUN_005b8100(param_2,&DAT_005db88e,param_1);
  }
  FUN_005b9600(local_1dc,0xff,param_2);
  iVar6 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      puVar7 = &DAT_00617cd8;
      puVar9 = local_dc;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      puVar7 = &DAT_00617d40;
      pcVar8 = local_78;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      }
      FUN_005b8100(param_2," %s \"%[^\"]\"\n",local_dc,local_78);
      if (*(int *)(0x01D182F0 + 0x1010) == 0) {
        pcVar8 = local_78;
        pcVar3 = (char *)FUN_0040c5a0(local_dc);
        pcVar10 = pcVar3;
        do {
          cVar1 = *pcVar8;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        *(char **)(iVar5 + 0x14) = pcVar3;
      }
      else {
        uVar2 = FUN_004fbc00(0x01D182F0,local_78);
        *(uint *)(iVar5 + 0x14) = uVar2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  FUN_005b9600(local_1dc,0xff,param_2);
  iVar6 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      FUN_0040b1c0(*(uint *)(iVar5 + 0x14),param_2);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  if (1 < *(int *)(param_1 + 0x334)) {
    FUN_005b9600(local_1dc,0xff,param_2);
  }
  *(uint *)(param_1 + 0x460) = *(uint *)(0x01D182F0 + 0x1010);
  *(uint *)(*(int *)(param_1 + 0x468) * 4 + param_1 + 0x610) = 0;
  if (-1 < local_14) {
    uVar2 = FUN_0040c8f0(*(uint *)(local_14 * 4 + param_1 + 0x14),_DAT_02661f38);
    *(uint *)(*(int *)(param_1 + 0x468) * 4 + param_1 + 0x610) = uVar2;
    if (*(int *)(*(int *)(param_1 + 0x468) * 4 + param_1 + 0x610) == 0) {
      _DAT_01d046a0 = "..\\core\\inv.cpp";
      _DAT_01d046a4 = 0x62b;
      FUN_004e4500("CInventory::load - Can't find your weapon");
    }
  }
  FUN_004dd020(param_1,999);
  return;
}
