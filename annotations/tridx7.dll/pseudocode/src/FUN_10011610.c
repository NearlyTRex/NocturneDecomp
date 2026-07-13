// Name: FUN_10011610
// Address: 10011610
// Address Range: [[10011610, 1001167d]]
// Convention: unknown
// Signature: undefined4 * FUN_10011610(int *param_1)

#include "nocturne.h"

uint * FUN_10011610(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  
  puVar3 = (uint *)0x0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar5 = param_1;
    while (iVar1 != 0) {
      piVar5 = piVar5 + 1;
      puVar3 = (uint *)((int)puVar3 + 1);
      iVar1 = *piVar5;
    }
    puVar3 = (uint *)FUN_10008830((int)puVar3 * 4 + 4);
    if (puVar3 == (uint *)0x0) {
      __amsg_exit(9);
    }
    iVar1 = *param_1;
    puVar2 = puVar3;
    while (iVar1 != 0) {
      iVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar4 = FUN_100117b0(iVar1);
      *puVar2 = uVar4;
      puVar2 = puVar2 + 1;
      iVar1 = *param_1;
    }
    *puVar2 = 0;
  }
  return puVar3;
}
