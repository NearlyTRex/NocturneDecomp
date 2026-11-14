// Name: crt_unknown.c_FUN_005cba8c
// Address: 005cba8c
// Address Range: [[005cba8c, 005cbaea]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cba8c(LPVOID param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005cba8c(LPVOID param_1)

{
  uint uVar1;
  BOOL BVar2;
  
  uVar1 = *(uint *)((int)param_1 + 8);
  BVar2 = VirtualFree(param_1,0,0x8000);
  if (BVar2 != 0) {
    if ((param_1 == (LPVOID)DAT_00626224) && (DAT_00626224 = uVar1, uVar1 == 0)) {
      DAT_00626224 = DAT_00626220;
      DAT_00626228 = 0;
    }
    if (param_1 == _DAT_02c9f040) {
      _DAT_02c9f040 = (LPVOID)((uint)param_1 ^ (uint)_DAT_02c9f040);
    }
    return 0;
  }
  return 0xffffffff;
}
