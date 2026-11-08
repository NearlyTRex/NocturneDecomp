// Name: FUN_004dc750
// Address: 004dc750
// Address Range: [[004dc750, 004dca88]]
// Convention: unknown
// Signature: void FUN_004dc750(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc750(int param_1,uint param_2)

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
  FUN_004da440(param_1);
  FUN_004da4e0(param_1);
  FUN_005a3f00(local_1dc,0xff,param_2);
  FUN_005a3f00(local_1dc,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005c6497,param_1 + 0x334);
  FUN_005a3f00(local_1dc,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005c649b,param_1 + 0x10);
  FUN_005a3f00(local_1dc,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005c649f,&local_14);
  if (0 < *(int *)(param_1 + 0x334)) {
    FUN_005a3f00(local_1dc,0xff,param_2);
    FUN_005a3230(param_2,&DAT_005c64a3,param_1);
  }
  FUN_005a3f00(local_1dc,0xff,param_2);
  iVar6 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      puVar7 = &DAT_00600188;
      puVar9 = local_dc;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      puVar7 = &DAT_006001f0;
      pcVar8 = local_78;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      }
      FUN_005a3230(param_2," %s \"%[^\"]\"\n",local_dc,local_78);
      if (*(int *)(0x01D81080 + 0x1010) == 0) {
        pcVar8 = local_78;
        pcVar3 = (char *)FUN_0040c4f0(local_dc);
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
        uVar2 = FUN_004f6330(0x01D81080,local_78);
        *(uint *)(iVar5 + 0x14) = uVar2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  FUN_005a3f00(local_1dc,0xff,param_2);
  iVar6 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      FUN_0040b110(*(uint *)(iVar5 + 0x14),param_2);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  if (1 < *(int *)(param_1 + 0x334)) {
    FUN_005a3f00(local_1dc,0xff,param_2);
  }
  uVar2 = *(uint *)(0x01D81080 + 0x1010);
  *(uint *)(param_1 + 0x338) = 0;
  *(uint *)(param_1 + 0x458) = uVar2;
  if (-1 < local_14) {
    uVar2 = FUN_0040c840(*(uint *)(local_14 * 4 + param_1 + 0x14),_DAT_02d0c150);
    *(uint *)(param_1 + 0x338) = uVar2;
    if (*(int *)(param_1 + 0x338) == 0) {
      _DAT_01d71de0 = "..\\core\\inv.cpp";
      _DAT_01d71de4 = 0x739;
      FUN_004e4330("CInventory::load - Can't find your weapon");
    }
  }
  FUN_004dd2d0(param_1,999);
  return;
}
