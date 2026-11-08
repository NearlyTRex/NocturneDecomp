// Name: FUN_00570e20
// Address: 00570e20
// Address Range: [[00570e20, 00570e7a]]
// Convention: unknown
// Signature: undefined4 FUN_00570e20(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_00570e20(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x3bc) == 1) {
    FUN_00581a40(0,0);
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
  FUN_005a28f0(param_2,0,0x2b8);
  return *(uint *)(param_1 + 0x3bc);
}
