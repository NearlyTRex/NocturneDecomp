// Name: FUN_004fcb20
// Address: 004fcb20
// Address Range: [[004fcb20, 004fcbcb]]
// Convention: unknown
// Signature: undefined4 FUN_004fcb20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004fcb20(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = FUN_00426440(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1fa50);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14c) + 8))(iVar1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x1fa50) != 0) {
        switch(*(uint *)(*(int *)(param_1 + 0x1fa50) + 0x2d8)) {
        default:
          uVar2 = 2;
          break;
        case 8:
          uVar2 = 0;
        }
      }
      fVar3 = (float)FUN_0042a9d0(param_1,uVar2);
      if ((float)_DAT_0058df1e < fVar3) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa50) + 0x14c) + 0xe8))
                  (*(int *)(param_1 + 0x1fa50));
        return 1;
      }
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
