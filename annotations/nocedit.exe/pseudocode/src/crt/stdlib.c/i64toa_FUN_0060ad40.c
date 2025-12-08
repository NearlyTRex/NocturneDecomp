// Name: crt_stdlib.c_i64toa_FUN_0060ad40
// Address: 0060ad40
// Address Range: [[0060ad40, 0060addc]]
// Convention: __cdecl
// Signature: char * crt_stdlib.c_i64toa_FUN_0060ad40(longlong * value, char * buffer, int base)

#include "nocturne.h"

char * __cdecl crt_stdlib_c_i64toa_FUN_0060ad40(longlong *value,char *buffer,int base)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char *pcVar4;
  char local_53 [35];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
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
      iVar3 = local_24;
      local_20 = crt_math_c_udivmod64_FUN_0060d3ed(local_20,CONCAT44 /* combine 2-byte values */(local_24,local_28));
      local_30 = iVar2;
      local_2c = iVar3;
      *pcVar4 = g_AlphaNumericCharacters1[iVar3];
      pcVar4 = pcVar4 + 1;
    } while (local_20._4_4_ != 0);
  } while (local_18 != (char *)0x0);
  do {
    cVar1 = pcVar4[-1];
    pcVar4 = pcVar4 + -1;
    *unaff_EBP = cVar1;
    unaff_EBP = unaff_EBP + 1;
  } while (cVar1 != '\0');
  return (char *)base;
}
