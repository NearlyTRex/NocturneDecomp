// Name: FUN_00480eb0
// Address: 00480eb0
// Address Range: [[00480eb0, 00480f39]]
// Convention: unknown
// Signature: void FUN_00480eb0(int param_1)

#include "nocturne.h"

void FUN_00480eb0(int param_1)

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
      FUN_00526340();
      FUN_005262d0(puVar3[0x46],puVar3[0x47],1);
      FUN_00526270(1);
      uVar1 = FUN_005265a0(iVar4);
      iVar2 = iVar2 + 1;
      *puVar3 = uVar1;
      FUN_005263c0();
      iVar4 = iVar4 + 0x120;
    } while (iVar2 < *(int *)(param_1 + 0x3ac8));
  }
  FUN_00480d60(param_1);
  return;
}
