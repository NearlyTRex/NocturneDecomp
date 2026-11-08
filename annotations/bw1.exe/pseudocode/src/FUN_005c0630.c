// Name: FUN_005c0630
// Address: 005c0630
// Address Range: [[005c0630, 005c06f6]]
// Convention: unknown
// Signature: undefined4 FUN_005c0630(undefined4 *param_1)

#include "nocturne.h"

uint FUN_005c0630(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1[2] + 8) == 0) {
    FUN_005c64a0(param_1);
  }
  if (((*(byte *)((int)param_1 + 0xd) & 0x20) != 0) && ((*(byte *)((int)param_1 + 0xd) & 6) != 0)) {
    FUN_005c654c(0x2000);
  }
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfb;
  *param_1 = *(uint *)(param_1[2] + 8);
  if (((param_1[3] & 0x2400) == 0x2400) && (param_1[4] == 0)) {
    param_1[1] = 0;
    iVar1 = FUN_005c65a0();
    if (iVar1 != -1) {
      *(char *)*param_1 = (char)iVar1;
      param_1[1] = 1;
      goto LAB_005c06ef;
    }
  }
  else {
    if ((*(byte *)((int)param_1 + 0xd) & 4) == 0) {
      uVar2 = param_1[5];
    }
    else {
      uVar2 = 1;
    }
    uVar2 = FUN_005c65d0(param_1[4],*param_1,uVar2);
    param_1[1] = uVar2;
  }
  if ((int)param_1[1] < 1) {
    if (param_1[1] == 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x10;
      return param_1[1];
    }
    param_1[1] = 0;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
  }
LAB_005c06ef:
  return param_1[1];
}
