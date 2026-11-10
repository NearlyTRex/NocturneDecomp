// Name: crt_unknown.c_FUN_005ae8fc
// Address: 005ae8fc
// Address Range: [[005ae8fc, 005ae95a]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ae8fc(LPVOID param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005ae8fc(LPVOID param_1)

{
  uint uVar1;
  BOOL BVar2;
  
  uVar1 = *(uint *)((int)param_1 + 8);
  BVar2 = VirtualFree(param_1,0,0x8000);
  if (BVar2 != 0) {
    if ((param_1 == (LPVOID)DAT_006075c8) && (DAT_006075c8 = uVar1, uVar1 == 0)) {
      DAT_006075c8 = DAT_006075c4;
      DAT_006075cc = 0;
    }
    if (param_1 == _DAT_02d25290) {
      _DAT_02d25290 = (LPVOID)((uint)param_1 ^ (uint)_DAT_02d25290);
    }
    return 0;
  }
  return 0xffffffff;
}
