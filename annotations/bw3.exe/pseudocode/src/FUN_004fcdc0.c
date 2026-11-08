// Name: FUN_004fcdc0
// Address: 004fcdc0
// Address Range: [[004fcdc0, 004fcf9f]]
// Convention: unknown
// Signature: void FUN_004fcdc0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fcdc0(int param_1,int param_2)

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
  if ((_DAT_01d8e40c != 0) && (local_20 = (float)FUN_0046d540(), local_20 == 0.0)) {
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
    local_2c = (int)ROUND(local_20 * _DAT_005e2c60);
    local_28 = (int)ROUND(local_34 * _DAT_005e2c60);
    local_24 = (int)ROUND(_DAT_005e2c60 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x124f50,&local_2c);
    iVar5 = *DAT_005f2afc;
    if ((*(byte *)(iVar5 + 0x124f63) & 0x80) == 0) {
      iVar6 = *(int *)(iVar5 + 0x124f64) >> 0x10;
      local_14 = (*(int *)(iVar5 + 0x124f60) >> 0x10) + -0x23;
      FUN_00401fe0(param_2,local_14,iVar6 + -0x21);
      if ((*(int *)(param_1 + 0x28) < 0) ||
         (iVar5 = FUN_004fc070(), *(int *)(iVar5 + 0x24) == *(int *)(param_1 + 0x28))) {
        pcVar4 = (char *)FUN_004fc320();
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
        iVar2 = FUN_004fc310();
        uVar3 = FUN_004fc320(param_1,iVar2 + 4 + iVar5 * 0x1e);
        FUN_005a28c0(local_c0,"%s -> %s",uVar3);
      }
      iVar5 = local_14;
      FUN_00401fe0(local_c0,local_14,iVar6 + -0x16);
      uVar3 = FUN_004fc070(param_1,(double)*(float *)(param_1 + 8));
      FUN_005a28c0(local_c0,"%s : %5.2f",uVar3);
      FUN_00401fe0(local_c0,iVar5,iVar6 + -0xb);
      return;
    }
  }
  return;
}
