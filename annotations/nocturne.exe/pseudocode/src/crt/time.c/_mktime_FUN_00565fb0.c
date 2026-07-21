// Name: crt_time.c__mktime_FUN_00565fb0
// Address: 00565fb0
// Address Range: [[00565fb0, 00566162]]
// Convention: __cdecl
// Signature: int __cdecl crt_time_c__mktime_FUN_00565fb0(int *param_1)

#include "nocturne.h"

int __cdecl _mktime(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  
  iVar3 = param_1[4] % 0xc;
  puVar4 = &DAT_005a4a78;
  if (param_1[5] < -0xb04815f) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_1[5] + param_1[4] / 0xc;
    for (; iVar3 < 0; iVar3 = iVar3 + 0xc) {
      iVar1 = iVar1 + -1;
    }
    if (iVar1 < 0) {
      return -1;
    }
    iVar2 = FUN_0056cea0(iVar1 + 0x76c);
    if (iVar2 != 0) {
      puVar4 = &DAT_005a4a92;
    }
    iVar2 = iVar1 + 3 >> 0x1f;
    iVar3 = (int)*(short *)(puVar4 + iVar3 * 2) +
            ((iVar1 * 0x16d + ((int)((iVar1 + 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2)) -
            (iVar1 + 99) / 100) + (iVar1 + 299) / 400 + param_1[3];
    for (iVar1 = *param_1 + (param_1[1] + param_1[2] * 0x3c) * 0x3c; iVar3 = iVar3 + -1, iVar1 < 0;
        iVar1 = iVar1 + 0x15180) {
    }
    FUN_0056d340(iVar3,iVar1,0,param_1);
    FUN_0056d608();
    iVar1 = iVar1 + DAT_005c1f14;
    if (param_1[8] < 0) {
      FUN_0056d034(param_1);
    }
    if (0 < param_1[8]) {
      iVar1 = iVar1 - DAT_005c1f1c;
    }
    for (; iVar1 < 0; iVar1 = iVar1 + 0x15180) {
      iVar3 = iVar3 + -1;
    }
    if (iVar3 < 0x63de) {
      return -1;
    }
    if (iVar3 == 0x63de) {
      iVar1 = iVar1 + -0x15180;
      if ((DAT_005c1f14 < 1) || (iVar1 < 0)) {
        return -1;
      }
    }
    else {
      iVar1 = iVar1 + (iVar3 + -0x63df) * 0x15180;
    }
  }
  return iVar1;
}
