// Name: crt_unknown.c_FUN_00573db0
// Address: 00573db0
// Address Range: [[00573db0, 00573e2a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00573db0(wchar_t param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573db0(wchar_t param_1)

{
  int iVar1;
  byte local_c [4];
  
  wchar_to_bytes(param_1,(char *)local_c);
  iVar1 = mblen((char *)local_c);
  local_c[iVar1] = 0;
  if (((DAT_005c2144 == 0x3a4) && (_DAT_02de5c30 != 0)) &&
     ((*(byte *)(local_c[0] + 0x2de5c41) & 1) != 0)) {
    fullwidth_toupper(param_1);
  }
  else {
    CharUpperBuffA((LPSTR)local_c,1);
    mbtowc_peek((char *)local_c);
  }
  return;
}
