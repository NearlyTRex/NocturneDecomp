// Name: FUN_005a5d70
// Address: 005a5d70
// Address Range: [[005a5d70, 005a5eb8]]
// Convention: unknown
// Signature: uint FUN_005a5d70(uint param_1,int *param_2)

#include "nocturne.h"

uint FUN_005a5d70(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  (*(code *)PTR_FUN_006079a4)(param_2[4]);
  iVar1 = *(int *)(param_2[2] + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_006079a8)(param_2[4]);
      return 0xffffffff;
    }
    *(uint *)(param_2[2] + 0xc) = 1;
  }
  if ((*(byte *)(param_2 + 3) & 2) == 0) {
    FUN_005a92c0(4);
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 0x20;
    (*(code *)PTR_FUN_006079a8)(param_2[4]);
    return 0xffffffff;
  }
  if (*(int *)(param_2[2] + 8) == 0) {
    FUN_005a9310(param_2);
  }
  uVar2 = 0x400;
  if ((param_1 == 10) && (uVar2 = 0x600, (*(byte *)(param_2 + 3) & 0x40) == 0)) {
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
    *(byte *)*param_2 = 0xd;
    iVar1 = param_2[1];
    *param_2 = *param_2 + 1;
    param_2[1] = iVar1 + 1;
    if (iVar1 + 1 == param_2[5]) {
      iVar1 = FUN_005a9bc0(param_2);
      if (iVar1 != 0) {
        (*(code *)PTR_FUN_006079a8)(param_2[4]);
        return 0xffffffff;
      }
    }
  }
  *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
  *(byte *)*param_2 = (byte)param_1;
  iVar1 = param_2[1];
  *param_2 = *param_2 + 1;
  param_2[1] = iVar1 + 1;
  if (((uVar2 & param_2[3]) != 0) || (iVar1 + 1 == param_2[5])) {
    iVar1 = FUN_005a9bc0(param_2);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_006079a8)(param_2[4]);
      return 0xffffffff;
    }
  }
  (*(code *)PTR_FUN_006079a8)(param_2[4]);
  return param_1 & 0xff;
}
