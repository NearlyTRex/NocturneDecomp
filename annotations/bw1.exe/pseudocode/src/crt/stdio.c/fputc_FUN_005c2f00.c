// Name: crt_stdio.c_fputc_FUN_005c2f00
// Address: 005c2f00
// Address Range: [[005c2f00, 005c3048]]
// Convention: __cdecl
// Signature: uint __cdecl crt_stdio_c_fputc_FUN_005c2f00(uint param_1,int *param_2)

#include "nocturne.h"

uint __cdecl _fputc(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(param_2[4]);
  iVar1 = *(int *)(param_2[2] + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_2[4]);
      return 0xffffffff;
    }
    *(uint *)(param_2[2] + 0xc) = 1;
  }
  if ((*(byte *)(param_2 + 3) & 2) == 0) {
    setErrno(4);
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 0x20;
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_2[4]);
    return 0xffffffff;
  }
  if (*(int *)(param_2[2] + 8) == 0) {
    FUN_005c64a0(param_2);
  }
  uVar2 = 0x400;
  if ((param_1 == 10) && (uVar2 = 0x600, (*(byte *)(param_2 + 3) & 0x40) == 0)) {
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
    *(byte *)*param_2 = 0xd;
    iVar1 = param_2[1];
    *param_2 = *param_2 + 1;
    param_2[1] = iVar1 + 1;
    if (iVar1 + 1 == param_2[5]) {
      iVar1 = FUN_005c6d50(param_2);
      if (iVar1 != 0) {
        (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_2[4]);
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
    iVar1 = FUN_005c6d50(param_2);
    if (iVar1 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_2[4]);
      return 0xffffffff;
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_2[4]);
  return param_1 & 0xff;
}
