// Name: FUN_00537f30
// Address: 00537f30
// Address Range: [[00537f30, 00537f98]]
// Convention: unknown
// Signature: void FUN_00537f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

#include "nocturne.h"

void FUN_00537f30(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint local_44 [15];
  
  bVar7 = 0;
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x14f0a8)) {
    do {
      iVar1 = *(int *)(iVar4 + 0x14f0ac);
      puVar5 = param_4;
      puVar6 = local_44;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x10c))(iVar1,param_2,param_3,local_44,0);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x14f0a8));
  }
  return;
}
