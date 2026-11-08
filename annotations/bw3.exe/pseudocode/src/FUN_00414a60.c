// Name: FUN_00414a60
// Address: 00414a60
// Address Range: [[00414a60, 00414bcb]]
// Convention: unknown
// Signature: void FUN_00414a60(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00414a60(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  FUN_00538ad0(0x01ED78C8,*(uint *)(param_1 + 0x174),*(uint *)(param_1 + 0x178));
  FUN_00538dd0(0x01ED78C8,*(uint *)(param_1 + 0x174),*(uint *)(param_1 + 0x180),
               *(uint *)(param_1 + 0x184),*(uint *)(param_1 + 0x178),3,
               *(uint *)(param_1 + 0x17c));
  if ((*(int *)(param_1 + 0x18c) == 1) || (iVar2 = FUN_0046d540(DAT_005f2afc), iVar2 != 0)) {
    iVar2 = FUN_0046d540(DAT_005f2afc);
    if (iVar2 == 0) {
      FUN_0046e5e0(DAT_005f2afc,param_1 + 400);
    }
    FUN_0046d880(DAT_005f2afc,*(uint *)(param_1 + 0x184),*(uint *)(param_1 + 0x180),
                 param_2);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < *(int *)(param_1 + 0x180)) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x188) + local_14);
        if (iVar1 != local_18) {
          FUN_0046e5e0(DAT_005f2afc,iVar1 * 0x18 + param_1 + 400);
          local_18 = iVar1;
        }
        FUN_0046b8f0(DAT_005f2afc,*(int *)(param_1 + 0x184) + iVar3,param_2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x180));
    }
  }
  FUN_0046d500(DAT_005f2afc,1);
  return;
}
