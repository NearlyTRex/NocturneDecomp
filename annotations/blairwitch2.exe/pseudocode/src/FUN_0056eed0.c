// Name: FUN_0056eed0
// Address: 0056eed0
// Address Range: [[0056eed0, 0056ef8d]]
// Convention: unknown
// Signature: void FUN_0056eed0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056eed0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x25698);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x14))(iVar2,param_2);
    iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x25698),_DAT_01c225d8);
    if (iVar2 != 0) {
      iVar3 = FUN_0047a1c0(iVar2);
      if (iVar3 != 0) {
        *(uint *)(iVar2 + 0x6e0) = 0;
        *(uint *)(iVar2 + 0x6dc) = *(uint *)(iVar2 + 0x6e0);
        *(uint *)(iVar2 + 0x6d8) = *(uint *)(iVar2 + 0x6dc);
        (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xec))(iVar2);
        *(uint *)(param_1 + 0x25698) = 0;
        *(uint *)(param_1 + 0x2d04) = 0;
        uVar1 = 0x41200000;
        *(uint *)(param_1 + 0x2d08) = 0;
        *(uint *)(param_1 + 0x25650) = uVar1;
        if (*(int *)(param_1 + 0x256a4) == 3) {
          *(uint *)(param_1 + 0x256a4) = 0;
          return;
        }
      }
    }
  }
  return;
}
