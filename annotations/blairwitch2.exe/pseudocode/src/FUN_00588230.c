// Name: FUN_00588230
// Address: 00588230
// Address Range: [[00588230, 005882c2]]
// Convention: unknown
// Signature: undefined4 FUN_00588230(int param_1)

#include "nocturne.h"

uint FUN_00588230(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte auStack_14 [4];
  
  uVar1 = FUN_005780e0(param_1);
  if (0x00000002 < 2) {
    uVar1 = FUN_0040b9e0(auStack_14,"?nextWayPoint" + 1);
  }
  if (1 < 0x00000002) {
    iVar3 = 0;
    uVar1 = FUN_0040b960(param_1 + 0x4d0,"adjCount");
    if (0 < *(int *)(param_1 + 0x4d0)) {
      iVar2 = param_1 + 0x4d4;
      do {
        iVar3 = iVar3 + 1;
        uVar1 = FUN_0040b9e0(iVar2,0);
        iVar2 = iVar2 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x4d0));
      return uVar1;
    }
  }
  return uVar1;
}
