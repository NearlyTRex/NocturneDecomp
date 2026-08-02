// Name: crt_unknown.c_FUN_0056782c
// Address: 0056782c
// Address Range: [[0056782c, 00567925]]
// Convention: unknown
// Signature: byte * crt_unknown_c_FUN_0056782c(byte *param_1,int param_2)

#include "nocturne.h"

byte * FUN_0056782c(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_2 + 0x10);
  *(uint *)(param_2 + 0xc) = 0xffffffff;
  *(byte *)(param_2 + 0x10) = bVar1 | 1;
  *(byte *)(param_2 + 0x10) = bVar1 & 3 | 1;
  if (*param_1 == 0x2a) {
    param_1 = param_1 + 1;
    *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) & 0xfe;
  }
  bVar1 = *param_1;
  if (((&DAT_005c168c)[(byte)(bVar1 + 1)] & 0x20) != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 * 10 + (bVar1 - 0x30);
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
    } while (((&DAT_005c168c)[(byte)(bVar1 + 1)] & 0x20) != 0);
    *(int *)(param_2 + 0xc) = iVar2;
  }
  if (*param_1 == 0x4e) {
    *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 8;
    param_1 = param_1 + 1;
  }
  else if (*param_1 == 0x46) {
    *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 4;
    param_1 = param_1 + 1;
  }
  bVar1 = *param_1;
  if (bVar1 < 0x68) {
    if (0x48 < bVar1) {
      if (bVar1 < 0x4a) {
        if ((param_1[1] == 0x36) && (param_1[2] == 0x34)) {
          param_1 = param_1 + 3;
          *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x40;
        }
      }
      else if (bVar1 == 0x4c) {
        *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x40;
        param_1 = param_1 + 1;
      }
    }
  }
  else if (bVar1 < 0x69) {
    *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x10;
    param_1 = param_1 + 1;
  }
  else if ((0x6b < bVar1) && ((bVar1 < 0x6d || (bVar1 == 0x77)))) {
    *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x20;
    param_1 = param_1 + 1;
  }
  return param_1;
}
