// Name: FUN_0058d670
// Address: 0058d670
// Address Range: [[0058d670, 0058d7d9]]
// Convention: unknown
// Signature: undefined4 FUN_0058d670(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0058d670(int param_1)

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
  if ((*(int *)(param_1 + 0x2828) == 0) || (*(int *)(param_1 + 0x10a64) != 0)) {
    return 0;
  }
  if (1.0 < *(float *)(param_1 + 0x10b3c)) {
    *(float *)(param_1 + 0x10b3c) = *(float *)(param_1 + 0x10b3c) + _DAT_005ee756;
  }
  if (*(float *)(param_1 + 0x10b3c) <= (float)_DAT_005ee75a) {
    if (*(int *)(param_1 + 0x2828) != 0) {
      FUN_004089d0(param_1);
      puVar3 = (uint *)(param_1 + 0x1134 + *(int *)(param_1 + 0x10b0c) * 0x30);
      puVar4 = auStack_68;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_00591de0(auStack_68);
      uStack_2c = auStack_28[2];
      *(uint *)((int)auStack_28 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + 3) * 4);
      *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
      FUN_00592720(auStack_68);
      puVar6 = (byte *)&uStack_38;
      uStack_38 = uStack_14;
      *(uint *)((int)auStack_34 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + 6) * 4);
      *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -2) * 4) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4);
      FUN_0046b350(DAT_0060b280,&DAT_0265370c,puVar6);
      FUN_0046b350(DAT_0060b280,&uStack_2c,0);
      FUN_0058d0b0(param_1,&DAT_02662d04);
      FUN_0058d0b0(param_1,&DAT_02662d10);
      FUN_00408a10(param_1);
      FUN_00408a10(param_1);
      FUN_00408a10(param_1);
    }
    FUN_004268b0(param_1);
    return *(uint *)(param_1 + 0x2828);
  }
  uVar1 = FUN_004268b0(param_1);
  return uVar1;
}
