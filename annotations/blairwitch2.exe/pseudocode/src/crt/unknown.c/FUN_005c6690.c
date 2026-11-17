// Name: crt_unknown.c_FUN_005c6690
// Address: 005c6690
// Address Range: [[005c6690, 005c670a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c6690(undefined4 param_1)

#include "nocturne.h"

void FUN_005c6690(uint param_1)

{
  int iVar1;
  byte local_c [4];
  
  FUN_005c0e30(param_1,local_c);
  iVar1 = FUN_005c0e50(local_c);
  local_c[iVar1] = 0;
  if (((g_UINT_0061f758 == 0x3a4) && (g_INT_026807f0 != 0)) &&
     ((g_CHAR_ARRAY_02680801[local_c[0]] & 1U) != 0)) {
    FUN_005c6e00(param_1);
  }
  else {
    CharUpperBuffA((LPSTR)local_c,1);
    FUN_005c0dc0(local_c);
  }
  return;
}
