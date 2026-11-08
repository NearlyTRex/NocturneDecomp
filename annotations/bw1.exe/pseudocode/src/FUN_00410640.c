// Name: FUN_00410640
// Address: 00410640
// Address Range: [[00410640, 00410701]]
// Convention: unknown
// Signature: void FUN_00410640(int param_1)

#include "nocturne.h"

void FUN_00410640(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x578) == 0) {
    iVar5 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(0x01E82168 + 0x14d164); iVar4 = iVar4 + 1) {
      iVar2 = FUN_0040c600(*(uint *)(iVar5 + 0x14d168 + 0x01E82168),DAT_007c3518);
      *(int *)(param_1 + 0x578) = iVar2;
      if (iVar2 != 0) break;
      iVar5 = iVar5 + 4;
    }
    if (*(int *)(param_1 + 0x578) == 0) {
      uVar3 = FUN_0040c2b0("CBaron");
      uVar1 = 0x01D2C900;
      *(uint *)(param_1 + 0x578) = uVar3;
      FUN_0051bd60(uVar1,uVar3);
      (*(code *)**(uint **)(*(int *)(param_1 + 0x578) + 0x154))(*(int *)(param_1 + 0x578));
      FUN_0051b160(0x01D2C900,*(uint *)(param_1 + 0x578));
      (**(code **)(*(int *)(*(int *)(param_1 + 0x578) + 0x154) + 0x68))
                (*(int *)(param_1 + 0x578),param_1 + 0x20,param_1 + 0x30);
      return;
    }
  }
  return;
}
