// Name: FUN_004159e0
// Address: 004159e0
// Address Range: [[004159e0, 00415b50]]
// Convention: unknown
// Signature: void FUN_004159e0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004159e0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  FUN_00531e90(0x01E661B8,*(uint *)(param_1 + 0x2d0),*(uint *)(param_1 + 0x2d4));
  FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x2d0),*(uint *)(param_1 + 0x2dc),
               *(uint *)(param_1 + 0x2e0),*(uint *)(param_1 + 0x2d4),3,
               *(uint *)(param_1 + 0x2d8));
  if ((*(int *)(param_1 + 0x2e8) == 1) || (iVar2 = FUN_0046b960(DAT_0060b280), iVar2 != 0)) {
    iVar2 = FUN_0046b960(DAT_0060b280);
    if (iVar2 == 0) {
      FUN_0046ca00(DAT_0060b280,param_1 + 0x2ec);
    }
    FUN_0046bca0(DAT_0060b280,*(uint *)(param_1 + 0x2e0),*(uint *)(param_1 + 0x2dc),
                 param_2);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < *(int *)(param_1 + 0x2dc)) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x2e4) + iVar3);
        if (iVar1 != local_18) {
          FUN_0046ca00(DAT_0060b280,iVar1 * 0x18 + param_1 + 0x2ec);
          local_18 = iVar1;
        }
        iVar3 = iVar3 + 4;
        iVar2 = iVar2 + 1;
        FUN_00469d00(DAT_0060b280,*(int *)(param_1 + 0x2e0) + local_14,param_2);
        local_14 = local_14 + 0x3c;
      } while (iVar2 < *(int *)(param_1 + 0x2dc));
    }
  }
  FUN_0046b920(DAT_0060b280,1);
  return;
}
