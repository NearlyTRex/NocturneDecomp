// Name: crt_time.c__store_str_FUN_1000f2a0
// Address: 1000f2a0
// Address Range: [[1000f2a0, 1000f2c9]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__store_str_FUN_1000f2a0(char *src,char **pbuf,int *pcount)

#include "nocturne.h"

void __cdecl _store_str(char *src,char **pbuf,int *pcount)

{
  int iVar1;
  
  iVar1 = *pcount;
  for (; (iVar1 != 0 && (*src != '\0')); src = src + 1) {
    **pbuf = *src;
    *pbuf = *pbuf + 1;
    iVar1 = *pcount + -1;
    *pcount = iVar1;
  }
  return;
}
