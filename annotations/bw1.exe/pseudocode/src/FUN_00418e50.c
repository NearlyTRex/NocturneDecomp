// Name: FUN_00418e50
// Address: 00418e50
// Address Range: [[00418e50, 00418fbb]]
// Convention: unknown
// Signature: void FUN_00418e50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00418e50(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  FUN_00553140(0x01E82168,*(uint *)(param_1 + 0x174),*(uint *)(param_1 + 0x178));
  FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x174),*(uint *)(param_1 + 0x180),
               *(uint *)(param_1 + 0x184),*(uint *)(param_1 + 0x178),3,
               *(uint *)(param_1 + 0x17c));
  if ((*(int *)(param_1 + 0x18c) == 1) || (iVar2 = FUN_00483e60(DAT_00612560), iVar2 != 0)) {
    iVar2 = FUN_00483e60(DAT_00612560);
    if (iVar2 == 0) {
      FUN_00484f00(DAT_00612560,param_1 + 400);
    }
    FUN_004841a0(DAT_00612560,*(uint *)(param_1 + 0x184),*(uint *)(param_1 + 0x180),
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
          FUN_00484f00(DAT_00612560,iVar1 * 0x18 + param_1 + 400);
          local_18 = iVar1;
        }
        FUN_00482210(DAT_00612560,*(int *)(param_1 + 0x184) + iVar3,param_2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x180));
    }
  }
  FUN_00483e20(DAT_00612560,1);
  return;
}
