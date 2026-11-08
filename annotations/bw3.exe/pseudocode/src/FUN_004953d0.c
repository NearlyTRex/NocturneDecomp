// Name: FUN_004953d0
// Address: 004953d0
// Address Range: [[004953d0, 00495459]]
// Convention: unknown
// Signature: void FUN_004953d0(int param_1)

#include "nocturne.h"

void FUN_004953d0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3ac8)) {
    iVar4 = param_1 + 0x3ae4;
    do {
      puVar3 = (uint *)(iVar2 * 0x120 + param_1 + 0x3acc);
      FUN_00555fd0();
      FUN_00555f60(puVar3[0x46],puVar3[0x47],1);
      FUN_00555f20(1);
      uVar1 = FUN_00556240(iVar4);
      iVar2 = iVar2 + 1;
      *puVar3 = uVar1;
      FUN_00556050();
      iVar4 = iVar4 + 0x120;
    } while (iVar2 < *(int *)(param_1 + 0x3ac8));
  }
  FUN_00495280(param_1);
  return;
}
