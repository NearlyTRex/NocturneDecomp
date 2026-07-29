// Name: crt_stdlib.c_i64toa_FUN_0056f3e0
// Address: 0056f3e0
// Address Range: [[0056f3e0, 0056f47c]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c_i64toa_FUN_0056f3e0(longlong *value,char *buffer,int base)

#include "nocturne.h"

char * __cdecl i64toa(longlong *value,char *buffer,int base)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char local_53 [35];
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  ulonglong local_20;
  char *local_18;
  
  local_18 = buffer;
  pcVar4 = local_53;
  local_20 = *value;
  local_28 = base;
  local_24 = 0;
  do {
    do {
      iVar2 = local_28;
      uVar3 = local_24;
      local_20 = udivmod64(local_20,CONCAT44(local_24,local_28));
      local_30 = iVar2;
      local_2c = uVar3;
      *pcVar4 = "0123456789abcdefghijklmnopqrstuvwxyz"[iVar2];
      pcVar4 = pcVar4 + 1;
    } while ((int)local_20 != 0);
  } while (local_20._4_4_ != 0);
  do {
    cVar1 = pcVar4[-1];
    pcVar4 = pcVar4 + -1;
    *local_18 = cVar1;
    local_18 = local_18 + 1;
  } while (cVar1 != '\0');
  return buffer;
}
