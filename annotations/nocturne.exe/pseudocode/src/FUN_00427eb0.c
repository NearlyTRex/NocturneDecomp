// Name: FUN_00427eb0
// Address: 00427eb0
// Address Range: [[00427eb0, 00428099]]
// Convention: unknown
// Signature: void FUN_00427eb0(int param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00427eb0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint local_9c [3];
  uint local_90;
  uint local_80;
  uint local_70;
  uint local_6c [12];
  byte local_3c [12];
  uint local_30;
  uint local_2c;
  uint local_28;
  byte local_24 [12];
  int local_18;
  int local_14;
  
  bVar7 = 0;
  if ((*(char *)(param_1 + 0x23b0) != '\0') && (*(int *)(param_3 * 4 + param_1 + 0x2290) != 0)) {
    FUN_0051e8c0(param_1 + 0x150,param_2,param_3);
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x2dec)) {
      local_18 = param_1 + 0xfd0;
      piVar2 = (int *)(param_1 + 0x2df0);
      do {
        if (param_3 == *piVar2) {
          FUN_0055aa00(piVar2 + 2,piVar2[1] * 0x30 + local_18);
          puVar5 = local_6c;
          puVar6 = local_9c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          uVar1 = FUN_0055b180(local_9c,local_3c);
          local_30 = local_90;
          local_2c = local_80;
          local_28 = local_70;
          FUN_00417ac0(param_2,&DAT_0076595c,&local_30,uVar1);
        }
        piVar2 = piVar2 + 0xe;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x2dec));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2f08)) {
      piVar2 = (int *)(param_1 + 0x2f14);
      do {
        if ((param_3 == *piVar2) && (-1 < piVar2[1])) {
          FUN_0055a8b0(local_24,piVar2 + 2,piVar2[1] * 0x30 + param_1 + 0xfd0);
          FUN_00417b40(param_2,local_24);
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 6;
      } while (iVar4 < *(int *)(param_1 + 0x2f08));
    }
    iVar3 = 0;
    iVar4 = param_1;
    do {
      if (param_3 == *(int *)(iVar4 + 0x24a8)) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,iVar3,0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x44;
    } while (iVar3 < 2);
    *(uint *)(param_2 + 0x150) = param_4;
    return;
  }
  return;
}
