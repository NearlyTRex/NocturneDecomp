// Name: crt_stdlib.c_i64toa_FUN_0060ad40
// Address: 0060ad40
// Address Range: [[0060ad40, 0060addc]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c_i64toa_FUN_0060ad40(longlong *value,char *buffer,int base)

#include "nocturne.h"

char * __cdecl i64toa(longlong *value,char *buffer,int base)

{
  char *pcVar4;
  bool bVar1;
  char local_53 [35];
  int local_30;
  int local_28;
  ulonglong local_20;
  char *local_18;
  char cVar1;
  int iVar2;
  
  local_18 = buffer;
  pcVar4 = local_53;
  local_20 = *value;
  do {
    do {
      local_20 = udivmod64(local_20,(ulonglong)(uint)base);
      *pcVar4 = g_AlphaNumericCharacters1[base];
      pcVar4 = pcVar4 + 1;
      bVar1 = (int)local_20 != 0;
    } while (bVar1);
    local_20._4_4_ = (int)(local_20 >> 0x20);
    bVar1 = local_20._4_4_ != 0;
  } while (bVar1);
  do {
    cVar1 = pcVar4[-1];
    pcVar4 = pcVar4 + -1;
    *local_18 = cVar1;
    local_18 = local_18 + 1;
  } while (cVar1 != '\0');
  return buffer;
}
