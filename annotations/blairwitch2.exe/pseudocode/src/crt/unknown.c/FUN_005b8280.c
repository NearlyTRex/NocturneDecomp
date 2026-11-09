// Name: crt_unknown.c_FUN_005b8280
// Address: 005b8280
// Address Range: [[005b8280, 005b8346]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005b8280(undefined4 *param_1)

#include "nocturne.h"

uint FUN_005b8280(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1[2] + 8) == 0) {
    FUN_005be1d0(param_1);
  }
  if (((*(byte *)((int)param_1 + 0xd) & 0x20) != 0) && ((*(byte *)((int)param_1 + 0xd) & 6) != 0)) {
    FUN_005be27c(0x2000);
  }
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfb;
  *param_1 = *(uint *)(param_1[2] + 8);
  if (((param_1[3] & 0x2400) == 0x2400) && (param_1[4] == 0)) {
    param_1[1] = 0;
    iVar1 = FUN_005be2d0();
    if (iVar1 != -1) {
      *(char *)*param_1 = (char)iVar1;
      param_1[1] = 1;
      goto LAB_005b833f;
    }
  }
  else {
    if ((*(byte *)((int)param_1 + 0xd) & 4) == 0) {
      uVar2 = param_1[5];
    }
    else {
      uVar2 = 1;
    }
    uVar2 = FUN_005be300(param_1[4],*param_1,uVar2);
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
LAB_005b833f:
  return param_1[1];
}
