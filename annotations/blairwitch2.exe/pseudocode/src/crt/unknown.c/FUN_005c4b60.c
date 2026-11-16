// Name: crt_unknown.c_FUN_005c4b60
// Address: 005c4b60
// Address Range: [[005c4b60, 005c4bcb]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c4b60(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c4b60(uint param_1,int param_2)

{
  uint *ptr;
  int iVar1;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d0)();
  uVar2 = 1;
  ptr = (uint *)calloc(1,0x10);
  if (ptr == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_005c5d00(param_2);
    if (iVar1 == 0) {
      ptr[2] = param_2;
      ptr[1] = param_1;
      ptr[3] = (uint)*(byte *)(param_2 + 0x52);
      *ptr = _DAT_026810b0;
      _DAT_026810b0 = ptr;
    }
    else {
      debugFree(ptr);
      uVar2 = 0;
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d4)();
  return uVar2;
}
