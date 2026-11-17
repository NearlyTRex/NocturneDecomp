// Name: crt_unknown.c_FUN_005b1720
// Address: 005b1720
// Address Range: [[005b1720, 005b179a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b1720(undefined4 param_1)

#include "nocturne.h"

void FUN_005b1720(uint param_1)

{
  int iVar1;
  byte local_c [4];
  
  FUN_005aca30(param_1,local_c);
  iVar1 = FUN_005aca50(local_c);
  local_c[iVar1] = 0;
  if (((g_UINT_00607e7c == 0x3a4) && (g_INT_02d25930 != 0)) &&
     ((g_CHAR_ARRAY_02d25941[local_c[0]] & 1U) != 0)) {
    FUN_005b1e90(param_1);
  }
  else {
    CharUpperBuffA((LPSTR)local_c,1);
    FUN_005ac9c0(local_c);
  }
  return;
}
