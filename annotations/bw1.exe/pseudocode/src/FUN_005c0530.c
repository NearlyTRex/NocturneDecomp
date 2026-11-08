// Name: FUN_005c0530
// Address: 005c0530
// Address Range: [[005c0530, 005c05fd]]
// Convention: unknown
// Signature: uint FUN_005c0530(undefined4 *param_1)

#include "nocturne.h"

uint FUN_005c0530(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_00626600)(param_1[4]);
  iVar1 = *(int *)(param_1[2] + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      uVar3 = param_1[4];
      uVar2 = 0xffffffff;
      goto LAB_005c05ee;
    }
    *(uint *)(param_1[2] + 0xc) = 1;
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_005c6450(4);
    uVar2 = 0xffffffff;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
  }
  else {
    iVar1 = param_1[1];
    param_1[1] = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      uVar2 = FUN_005c0600(param_1);
    }
    else {
      uVar2 = (uint)*(byte *)*param_1;
      *param_1 = (byte *)*param_1 + 1;
    }
  }
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    if (uVar2 == 0xd) {
      iVar1 = param_1[1];
      param_1[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        uVar2 = FUN_005c0600(param_1);
      }
      else {
        uVar2 = (uint)*(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
      }
    }
    if (uVar2 == 0x1a) {
      uVar2 = 0xffffffff;
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x10;
    }
  }
  uVar3 = param_1[4];
LAB_005c05ee:
  (*(code *)PTR_FUN_00626604)(uVar3);
  return uVar2;
}
