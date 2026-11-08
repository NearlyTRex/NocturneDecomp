// Name: FUN_004aa550
// Address: 004aa550
// Address Range: [[004aa550, 004aa5d9]]
// Convention: unknown
// Signature: void FUN_004aa550(int param_1)

#include "nocturne.h"

void FUN_004aa550(int param_1)

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
      FUN_00572ac0();
      FUN_00572a50(puVar3[0x46],puVar3[0x47],1);
      FUN_00572a10(1);
      uVar1 = FUN_00572d20(iVar4);
      iVar2 = iVar2 + 1;
      *puVar3 = uVar1;
      FUN_00572b40();
      iVar4 = iVar4 + 0x120;
    } while (iVar2 < *(int *)(param_1 + 0x3ac8));
  }
  FUN_004aa400(param_1);
  return;
}
