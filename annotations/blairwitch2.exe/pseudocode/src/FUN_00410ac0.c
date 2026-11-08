// Name: FUN_00410ac0
// Address: 00410ac0
// Address Range: [[00410ac0, 00410b82]]
// Convention: unknown
// Signature: void FUN_00410ac0(int param_1)

#include "nocturne.h"

void FUN_00410ac0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x6d4) == 0) {
    iVar5 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(0x01E661B8 + 0x14d164); iVar4 = iVar4 + 1) {
      iVar2 = FUN_0040c8f0(*(uint *)(iVar5 + 0x14d168 + 0x01E661B8),DAT_007bc518);
      *(int *)(param_1 + 0x6d4) = iVar2;
      if (iVar2 != 0) break;
      iVar5 = iVar5 + 4;
    }
    if (*(int *)(param_1 + 0x6d4) == 0) {
      uVar3 = FUN_0040c5a0("CBaron");
      uVar1 = 0x01D182F0;
      *(uint *)(param_1 + 0x6d4) = uVar3;
      FUN_004fcda0(uVar1,uVar3);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x6d4) + 0x2b0) + 8))(*(int *)(param_1 + 0x6d4));
      FUN_004fc200(0x01D182F0,*(uint *)(param_1 + 0x6d4));
      (**(code **)(*(int *)(*(int *)(param_1 + 0x6d4) + 0x2b0) + 0x70))
                (*(int *)(param_1 + 0x6d4),param_1 + 0x20,param_1 + 0x30);
      return;
    }
  }
  return;
}
