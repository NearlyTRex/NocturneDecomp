// Name: unkafter_2d.cpp_FUN_005b1720
// Address: 005b1720
// Address Range: [[005b1720, 005b179a]]
// Convention: unknown
// Signature: void unkafter_2d_cpp_FUN_005b1720(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_2d_cpp_FUN_005b1720(uint param_1)

{
  int iVar1;
  byte local_c [4];
  
  FUN_005aca30(param_1,local_c);
  iVar1 = FUN_005aca50(local_c);
  local_c[iVar1] = 0;
  if (((DAT_00607e7c == 0x3a4) && (_DAT_02d25930 != 0)) &&
     ((*(byte *)(local_c[0] + 0x2d25941) & 1) != 0)) {
    unkafter_2d_cpp_FUN_005b1e90(param_1);
  }
  else {
    CharUpperBuffA((LPSTR)local_c,1);
    FUN_005ac9c0(local_c);
  }
  return;
}
