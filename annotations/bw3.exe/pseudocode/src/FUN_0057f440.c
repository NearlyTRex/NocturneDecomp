// Name: FUN_0057f440
// Address: 0057f440
// Address Range: [[0057f440, 0057f5a9]]
// Convention: unknown
// Signature: undefined4 FUN_0057f440(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057f440(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1020 [1001];
  byte *puVar6;
  uint auStack_68 [12];
  uint uStack_38;
  uint auStack_34 [2];
  uint uStack_2c;
  uint auStack_28 [5];
  uint uStack_14;
  
  bVar5 = 0;
  if ((*(int *)(param_1 + 0x27bc) == 0) || (*(int *)(param_1 + 0xcdd0) != 0)) {
    return 0;
  }
  if (1.0 < *(float *)(param_1 + 0xd098)) {
    *(float *)(param_1 + 0xd098) = *(float *)(param_1 + 0xd098) + _DAT_005d7b4f;
  }
  if (*(float *)(param_1 + 0xd098) <= (float)_DAT_005d7b53) {
    if (*(int *)(param_1 + 0x27bc) != 0) {
      FUN_004087f0(param_1);
      puVar3 = (uint *)(param_1 + 0xfd8 + *(int *)(param_1 + 0xd068) * 0x30);
      puVar4 = auStack_68;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_00583b10(auStack_68);
      uStack_2c = auStack_28[2];
      *(uint *)((int)auStack_28 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + 3) * 4);
      *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
      FUN_00584450(auStack_68);
      puVar6 = (byte *)&uStack_38;
      uStack_38 = uStack_14;
      *(uint *)((int)auStack_34 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + 6) * 4);
      *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -2) * 4) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4);
      FUN_0046cf30(DAT_005f2afc,&DAT_02cfd900,puVar6);
      FUN_0046cf30(DAT_005f2afc,&uStack_2c,0);
      FUN_0057ee80(param_1,&DAT_02d2025c);
      FUN_0057ee80(param_1,&DAT_02d20268);
      FUN_00408830(param_1);
      FUN_00408830(param_1);
      FUN_00408830(param_1);
    }
    FUN_0042f510(param_1);
    return *(uint *)(param_1 + 0x27bc);
  }
  uVar1 = FUN_0042f510(param_1);
  return uVar1;
}
