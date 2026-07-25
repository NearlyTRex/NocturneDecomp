// Name: FUN_0042eb00
// Address: 0042eb00
// Address Range: [[0042eb00, 0042eb8f]]
// Convention: unknown
// Signature: void FUN_0042eb00(undefined1 *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_0042eb00(byte *param_1,int param_2,int param_3,int param_4)

{
  byte uVar1;
  byte *puVar2;
  byte *puVar3;
  byte *puVar4;
  uint uVar5;
  
  param_2 = param_2 * param_4;
  uVar5 = 0;
  if (param_3 / 2 != 0) {
    puVar3 = param_1 + param_3 * param_2;
    do {
      puVar3 = puVar3 + -param_2;
      if (param_2 != 0) {
        puVar2 = param_1;
        puVar4 = puVar3;
        do {
          uVar1 = *puVar2;
          *puVar2 = *puVar4;
          puVar2 = puVar2 + 1;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        } while (puVar2 < param_1 + param_2);
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + param_2;
    } while (uVar5 < (uint)(param_3 / 2));
  }
  return;
}
