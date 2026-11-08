// Name: FUN_00416750
// Address: 00416750
// Address Range: [[00416750, 00416887]]
// Convention: unknown
// Signature: void FUN_00416750(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_00416750(int param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  uint auStackY_100c [1014];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  bVar8 = 0;
  iVar4 = *(int *)(param_1 + 0x74c);
  if (iVar4 < 2) {
    puVar5 = (uint *)(iVar4 * 0x2b0 + param_1 + 0x750);
    *(int *)(param_1 + 0x74c) = iVar4 + 1;
    if (puVar5 != param_2) {
      *puVar5 = *param_2;
      puVar5[1] = param_2[1];
      puVar5[2] = param_2[2];
    }
    FUN_00408b80(param_1,puVar5);
    local_24 = local_18;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    puVar5[0xb] = local_24;
    puVar5[0xc] = local_20;
    puVar5[0xd] = local_1c;
    FUN_004a5aa0(puVar5 + 3);
    puVar5[0x6e] = 0;
    puVar5[0x59] = 0x3fc00000;
    puVar5[0x5a] = 0x40400000;
    pcVar6 = "GCHAR2.RAW" + 1;
    puVar5[0x5b] = 0x3fc00000;
    *(uint *)(param_1 + 0xfc) = 1;
    pcVar7 = (char *)(param_1 + 0x198);
    *(uint *)(param_1 + 0x18c) = 1;
    do {
      cVar1 = *pcVar6;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x180)) {
      iVar2 = 0;
      do {
        *(uint *)(*(int *)(param_1 + 0x188) + iVar2) = 0;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x180));
    }
    uVar3 = FUN_0040ce40(0x40800000,0x40a00000);
    *(uint *)(param_1 + 0xccc) = uVar3;
  }
  return;
}
