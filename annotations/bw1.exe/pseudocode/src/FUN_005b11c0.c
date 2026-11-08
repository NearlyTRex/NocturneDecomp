// Name: FUN_005b11c0
// Address: 005b11c0
// Address Range: [[005b11c0, 005b1329]]
// Convention: unknown
// Signature: undefined4 FUN_005b11c0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005b11c0(int param_1)

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
  if ((*(int *)(param_1 + 0x27bc) == 0) || (*(int *)(param_1 + 0xc1d4) != 0)) {
    return 0;
  }
  if (1.0 < *(float *)(param_1 + 0xc2ac)) {
    *(float *)(param_1 + 0xc2ac) = *(float *)(param_1 + 0xc2ac) + _DAT_005f9b2e;
  }
  if (*(float *)(param_1 + 0xc2ac) <= (float)_DAT_005f9b32) {
    if (*(int *)(param_1 + 0x27bc) != 0) {
      FUN_004087b0(param_1);
      puVar3 = (uint *)(param_1 + 0xfd8 + *(int *)(param_1 + 0xc27c) * 0x30);
      puVar4 = auStack_68;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_005b5930(auStack_68);
      uStack_2c = auStack_28[2];
      *(uint *)((int)auStack_28 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + 3) * 4);
      *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
      FUN_005b6270(auStack_68);
      puVar6 = (byte *)&uStack_38;
      uStack_38 = uStack_14;
      *(uint *)((int)auStack_34 + (uint)bVar5 * 0xfffffff8) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + 6) * 4);
      *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -2) * 4) =
           *(uint *)((int)auStack_28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4);
      FUN_00483850(DAT_00612560,&DAT_02c8af28,puVar6);
      FUN_00483850(DAT_00612560,&uStack_2c,0);
      FUN_005b0c00(param_1,&DAT_02c9a544);
      FUN_005b0c00(param_1,&DAT_02c9a550);
      FUN_004087f0(param_1);
      FUN_004087f0(param_1);
      FUN_004087f0(param_1);
    }
    FUN_004301e0(param_1);
    return *(uint *)(param_1 + 0x27bc);
  }
  uVar1 = FUN_004301e0(param_1);
  return uVar1;
}
