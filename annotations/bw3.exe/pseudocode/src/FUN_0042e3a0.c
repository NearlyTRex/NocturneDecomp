// Name: FUN_0042e3a0
// Address: 0042e3a0
// Address Range: [[0042e3a0, 0042e4a9]]
// Convention: unknown
// Signature: void FUN_0042e3a0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0042e3a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1020 [991];
  byte *puVar7;
  uint local_68 [3];
  uint local_5c;
  uint local_4c;
  uint local_3c;
  uint local_38;
  uint auStack_34 [2];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int aiStack_1c [3];
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3284)) {
    aiStack_1c[2] = param_1 + 0xfd8;
    piVar2 = (int *)(param_1 + 0x3288);
    do {
      if (*(int *)(*piVar2 * 4 + param_1 + 0x2298) != 0) {
        FUN_005833e0(piVar2 + 2,piVar2[1] * 0x30 + aiStack_1c[2]);
        puVar4 = (uint *)&stack0xffffff68;
        puVar5 = local_68;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        FUN_00583b10(local_68);
        local_2c = local_5c;
        local_28 = local_4c;
        local_24 = local_3c;
        puVar7 = (byte *)&local_2c;
        local_38 = local_20;
        *(uint *)((int)auStack_34 + (uint)bVar6 * 0xfffffff8) =
             *(uint *)((int)aiStack_1c + (uint)bVar6 * 0xfffffff8);
        auStack_34[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
             *(uint *)((int)aiStack_1c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
        FUN_0046cf30(DAT_005f2afc,&local_38,puVar7);
        FUN_00462540(&DAT_007e2b34,0,0xffffffff);
        thunk_FUN_004e5ef0(DAT_005f2afc);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xe;
    } while (iVar3 < *(int *)(param_1 + 0x3284));
  }
  return;
}
