// Name: FUN_00556780
// Address: 00556780
// Address Range: [[00556780, 005567b0]]
// Convention: unknown
// Signature: undefined4 FUN_00556780(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_00556780(uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  iVar1 = FUN_00552f10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar3 = *(uint **)(iVar1 + 0x68);
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    param_2 = param_2 + (uint)bVar4 * -2 + 1;
  }
  FUN_00556fd0();
  return 1;
}
