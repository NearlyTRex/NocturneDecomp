// Name: crt_stdio.c_fgetc_FUN_005b8180
// Address: 005b8180
// Address Range: [[005b8180, 005b824d]]
// Convention: __cdecl
// Signature: uint __cdecl crt_stdio_c_fgetc_FUN_005b8180(undefined4 *param_1)

#include "nocturne.h"

uint __cdecl _fgetc(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(param_1[4]);
  iVar1 = *(int *)(param_1[2] + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      uVar3 = param_1[4];
      uVar2 = 0xffffffff;
      goto LAB_005b823e;
    }
    *(uint *)(param_1[2] + 0xc) = 1;
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    setErrno(4);
    uVar2 = 0xffffffff;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
  }
  else {
    iVar1 = param_1[1];
    param_1[1] = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      uVar2 = FUN_005b8250(param_1);
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
        uVar2 = FUN_005b8250(param_1);
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
LAB_005b823e:
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(uVar3);
  return uVar2;
}
