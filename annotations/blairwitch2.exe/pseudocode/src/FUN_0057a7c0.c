// Name: FUN_0057a7c0
// Address: 0057a7c0
// Address Range: [[0057a7c0, 0057a81a]]
// Convention: unknown
// Signature: undefined4 FUN_0057a7c0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_0057a7c0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x3bc) == 1) {
    FUN_0058fd90(0,0);
  }
  if (*(int *)(param_1 + 0x3bc) == 2) {
    puVar2 = (uint *)(param_1 + 0x104);
    for (iVar1 = 0xae; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
      param_2 = param_2 + (uint)bVar3 * -2 + 1;
    }
    return *(uint *)(param_1 + 0x3bc);
  }
  FUN_005b77c0(param_2,0,0x2b8);
  return *(uint *)(param_1 + 0x3bc);
}
