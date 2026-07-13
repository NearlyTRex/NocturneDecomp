// Name: FUN_005525e0
// Address: 005525e0
// Address Range: [[005525e0, 00552672]]
// Convention: unknown
// Signature: undefined4 FUN_005525e0(int param_1)

#include "nocturne.h"

uint FUN_005525e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_14 [4];
  
  uVar1 = FUN_00548170(param_1);
  if (0x00000002 < 2) {
    uVar1 = FUN_0040c980(local_14,"nextWayPoint");
  }
  if (1 < 0x00000002) {
    iVar3 = 0;
    uVar1 = FUN_0040c900(param_1 + 0x368,"adjCount");
    if (0 < *(int *)(param_1 + 0x368)) {
      iVar2 = param_1 + 0x36c;
      do {
        iVar3 = iVar3 + 1;
        uVar1 = FUN_0040c980(iVar2,0);
        iVar2 = iVar2 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x368));
      return uVar1;
    }
  }
  return uVar1;
}
