// Name: FUN_10003e40
// Address: 10003e40
// Address Range: [[10003e40, 10003e86]]
// Convention: unknown
// Signature: void FUN_10003e40(undefined4 *param_1,uint param_2,int param_3)

#include "nocturne.h"

void FUN_10003e40(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  puVar1 = (uint *)FUN_10003a30(param_3);
  if (0 < param_3) {
    iVar3 = param_3;
    do {
      iVar2 = param_3;
      puVar4 = puVar1;
      puVar5 = param_1;
      if (0 < param_3) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        puVar1 = puVar1 + param_3;
      }
      param_1 = (uint *)((int)param_1 + (param_2 & 0xfffffffc));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
