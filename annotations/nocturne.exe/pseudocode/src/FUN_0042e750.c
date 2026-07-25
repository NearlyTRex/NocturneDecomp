// Name: FUN_0042e750
// Address: 0042e750
// Address Range: [[0042e750, 0042e7ae]]
// Convention: unknown
// Signature: void FUN_0042e750(undefined4 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

#include "nocturne.h"

void FUN_0042e750(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (0 < param_6) {
    param_6 = param_4 + param_6;
    do {
      iVar2 = DAT_005b761c * param_4;
      param_4 = param_4 + 1;
      puVar3 = (uint *)(iVar2 + param_3 + param_2);
      puVar4 = param_1;
      for (uVar1 = param_5 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_5 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(byte *)puVar4 = *(byte *)puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar4 = (uint *)((int)puVar4 + 1);
      }
      param_1 = (uint *)((int)param_1 + param_5);
    } while (param_4 < param_6);
  }
  return;
}
