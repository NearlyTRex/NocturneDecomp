// Name: FUN_004277e0
// Address: 004277e0
// Address Range: [[004277e0, 004279f6]]
// Convention: unknown
// Signature: void FUN_004277e0(int param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_004277e0(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1050 [990];
  byte *puVar7;
  byte *puVar8;
  byte *puVar9;
  uint local_98 [3];
  uint local_8c;
  uint local_7c;
  uint local_6c;
  uint local_68;
  uint auStack_64 [2];
  uint local_5c;
  uint auStack_58 [4];
  uint local_48;
  uint local_44;
  uint auStack_40 [2];
  uint local_38;
  uint auStack_34 [5];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  if ((*(char *)(param_1 + 0x2514) != '\0') && (*(int *)(param_3 * 4 + param_1 + 0x23f4) != 0)) {
    FUN_00548130(param_1 + 0x2b4,param_2,param_3);
    local_18 = 0;
    if (0 < *(int *)(param_1 + 0x3448)) {
      local_20 = param_1 + 0x1134;
      piVar1 = (int *)(param_1 + 0x344c);
      do {
        if (param_3 == *piVar1) {
          FUN_005916b0(piVar1 + 2,piVar1[1] * 0x30 + local_20);
          puVar4 = (uint *)&stack0xffffff38;
          puVar5 = local_98;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          FUN_00591de0(local_98);
          puVar9 = (byte *)&local_5c;
          auStack_58[2] = local_8c;
          auStack_58[3] = local_7c;
          local_48 = local_6c;
          puVar8 = (byte *)&local_44;
          local_5c = local_68;
          *(uint *)((int)auStack_58 + (uint)bVar6 * 0xfffffff8) =
               *(uint *)((int)auStack_64 + (uint)bVar6 * 0xfffffff8);
          *(uint *)((int)auStack_58 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
               *(uint *)((int)auStack_40 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -8) * 4);
          puVar7 = &DAT_007bdb54;
          local_44 = auStack_58[2];
          *(uint *)((int)auStack_40 + (uint)bVar6 * 0xfffffff8) =
               *(uint *)((int)auStack_58 + ((uint)bVar6 * -2 + 3) * 4);
          iVar2 = param_2;
          *(uint *)((int)auStack_40 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
               *(uint *)((int)auStack_58 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
          FUN_00417610(iVar2,puVar7,puVar8,puVar9);
        }
        piVar1 = piVar1 + 0xe;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(param_1 + 0x3448));
    }
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x3564)) {
      local_1c = param_1 + 0x1134;
      piVar1 = (int *)(param_1 + 0x3570);
      do {
        if ((param_3 == *piVar1) && (-1 < piVar1[1])) {
          FUN_00591530(piVar1 + 2,piVar1[1] * 0x30 + local_1c);
          local_38 = auStack_34[2];
          *(uint *)((int)auStack_34 + (uint)bVar6 * 0xfffffff8) =
               *(uint *)((int)auStack_34 + ((uint)bVar6 * -2 + 3) * 4);
          *(uint *)((int)auStack_34 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
               *(uint *)((int)auStack_34 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
          FUN_00417690(param_2,&local_38);
        }
        piVar1 = piVar1 + 6;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x3564));
    }
    iVar3 = 0;
    iVar2 = param_1;
    do {
      if (param_3 == *(int *)(iVar2 + 0x261c)) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,iVar3,0);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x78;
    } while (iVar3 < 2);
    *(uint *)(param_2 + 0x2b4) = param_4;
    return;
  }
  return;
}
