// Name: FUN_005254b0
// Address: 005254b0
// Address Range: [[005254b0, 0052568f]]
// Convention: unknown
// Signature: void FUN_005254b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005254b0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  char local_c0 [100];
  uint local_5c [6];
  uint local_44 [4];
  float local_34;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  uint local_18;
  int local_14;
  
  bVar10 = 0;
  if ((_DAT_01d39d34 != 0) && (local_20 = (float)FUN_00483e60(), local_20 == 0.0)) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))();
    puVar7 = local_5c;
    puVar8 = local_44;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    local_1c = local_34;
    local_18 = 0;
    local_2c = (int)ROUND(local_20 * _DAT_006042c0);
    local_28 = (int)ROUND(local_34 * _DAT_006042c0);
    local_24 = (int)ROUND(_DAT_006042c0 * 0.0);
    FUN_00580173(*DAT_00612560 + 0xea5d0,&local_2c);
    iVar5 = *DAT_00612560;
    if ((*(byte *)(iVar5 + 0xea5e3) & 0x80) == 0) {
      iVar6 = *(int *)(iVar5 + 0xea5e4) >> 0x10;
      local_14 = (*(int *)(iVar5 + 0xea5e0) >> 0x10) + -0x23;
      FUN_00401fe0(param_2,local_14,iVar6 + -0x21);
      if ((*(int *)(param_1 + 0x28) < 0) ||
         (iVar5 = FUN_00524770(), *(int *)(iVar5 + 0x24) == *(int *)(param_1 + 0x28))) {
        pcVar4 = (char *)FUN_00524a10();
        pcVar9 = local_c0;
        do {
          cVar1 = *pcVar4;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      else {
        iVar5 = *(int *)(param_1 + 0x28);
        iVar2 = FUN_00524a00();
        uVar3 = FUN_00524a10(param_1,iVar2 + 4 + iVar5 * 0x1e);
        FUN_005bfb40(local_c0,"%s -> %s",uVar3);
      }
      iVar5 = local_14;
      FUN_00401fe0(local_c0,local_14,iVar6 + -0x16);
      uVar3 = FUN_00524770(param_1,(double)*(float *)(param_1 + 8));
      FUN_005bfb40(local_c0,"%s : %5.2f",uVar3);
      FUN_00401fe0(local_c0,iVar5,iVar6 + -0xb);
      return;
    }
  }
  return;
}
