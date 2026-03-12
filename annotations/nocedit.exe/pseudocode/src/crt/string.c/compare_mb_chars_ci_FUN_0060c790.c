// Name: crt_string.c_compare_mb_chars_ci_FUN_0060c790
// Address: 0060c790
// Address Range: [[0060c790, 0060c80b]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_compare_mb_chars_ci_FUN_0060c790(char *str1,char *str2)

#include "nocturne.h"

int __cdecl compare_mb_chars_ci(char *str1,char *str2)

{
  int iVar1;
  int iVar2;
  char local_10 [4];
  char local_c [4];
  
  copyMbChar(local_c,str1);
  iVar1 = mblen(str1);
  local_c[iVar1] = '\0';
  copyMbChar(local_10,str2);
  iVar2 = mblen(str2);
  local_10[iVar2] = '\0';
  SomethingWithUppercaseCharacterConvert(local_c);
  SomethingWithUppercaseCharacterConvert(local_10);
  iVar2 = mbcmp(local_c,local_10);
  return iVar2;
}
