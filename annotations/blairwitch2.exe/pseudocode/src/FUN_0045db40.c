// Name: FUN_0045db40
// Address: 0045db40
// Address Range: [[0045db40, 0045dbee]]
// Convention: unknown
// Signature: void FUN_0045db40(int param_1)

#include "nocturne.h"

void FUN_0045db40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint auStack_24 [3];
  uint auStack_18 [3];
  
  if (0 < *(int *)(param_1 + 0x2d0c)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
    iVar2 = *(int *)(param_1 + 0x2ea0);
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    puVar1 = (uint *)(iVar2 + 0x3ab24);
    if (*(int *)(iVar3 + 0x24) == 0x2c) {
      if (puVar1 != auStack_18) {
        *(uint *)(iVar2 + 0x3ab28) = 0;
        *puVar1 = 0;
        *(uint *)(iVar2 + 0x3ab2c) = 0xc1a00000;
        return;
      }
    }
    else if (*(int *)(iVar3 + 0x24) == 0x2d) {
      if (puVar1 != auStack_24) {
        *(uint *)(iVar2 + 0x3ab28) = 0;
        *puVar1 = 0;
        *(uint *)(iVar2 + 0x3ab2c) = 0x41a00000;
        return;
      }
    }
  }
  return;
}
