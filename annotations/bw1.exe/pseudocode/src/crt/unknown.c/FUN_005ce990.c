// Name: crt_unknown.c_FUN_005ce990
// Address: 005ce990
// Address Range: [[005ce990, 005cea0a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ce990(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ce990(uint param_1)

{
  int iVar1;
  byte local_c [4];
  
  FUN_005c90f0(param_1,local_c);
  iVar1 = FUN_005c9110(local_c);
  local_c[iVar1] = 0;
  if (((DAT_00626ad8 == 0x3a4) && (_DAT_02c9f6e0 != 0)) &&
     ((*(byte *)(local_c[0] + 0x2c9f6f1) & 1) != 0)) {
    FUN_005cf100(param_1);
  }
  else {
    CharUpperBuffA((LPSTR)local_c,1);
    FUN_005c9080(local_c);
  }
  return;
}
