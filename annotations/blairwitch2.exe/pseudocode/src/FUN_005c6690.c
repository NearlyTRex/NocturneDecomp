// Name: FUN_005c6690
// Address: 005c6690
// Address Range: [[005c6690, 005c670a]]
// Convention: unknown
// Signature: void FUN_005c6690(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6690(uint param_1)

{
  int iVar1;
  byte local_c [4];
  
  FUN_005c0e30(param_1,local_c);
  iVar1 = FUN_005c0e50(local_c);
  local_c[iVar1] = 0;
  if (((DAT_0061f758 == 0x3a4) && (_DAT_026807f0 != 0)) &&
     ((*(byte *)(local_c[0] + 0x2680801) & 1) != 0)) {
    FUN_005c6e00(param_1);
  }
  else {
    CharUpperBuffA((LPSTR)local_c,1);
    FUN_005c0dc0(local_c);
  }
  return;
}
