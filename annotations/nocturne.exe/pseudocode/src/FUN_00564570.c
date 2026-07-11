// Name: FUN_00564570
// Address: 00564570
// Address Range: [[00564570, 0056463d]]
// Convention: unknown
// Signature: uint FUN_00564570(undefined4 *param_1)

#include "nocturne.h"

uint FUN_00564570(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_005c1ac0)(param_1[4]);
  iVar1 = *(int *)(param_1[2] + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      uVar3 = param_1[4];
      uVar2 = 0xffffffff;
      goto LAB_0056462e;
    }
    *(uint *)(param_1[2] + 0xc) = 1;
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_00568e80(4);
    uVar2 = 0xffffffff;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
  }
  else {
    iVar1 = param_1[1];
    param_1[1] = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      uVar2 = FUN_00564640(param_1);
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
        uVar2 = FUN_00564640(param_1);
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
LAB_0056462e:
  (*(code *)PTR_FUN_005c1ac4)(uVar3);
  return uVar2;
}
