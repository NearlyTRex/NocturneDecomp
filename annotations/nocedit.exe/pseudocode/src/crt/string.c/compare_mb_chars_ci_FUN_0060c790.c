// Name: crt_string.c_compare_mb_chars_ci_FUN_0060c790
// Address: 0060c790
// Address Range: [[0060c790, 0060c80b]]
// Convention: __cdecl
// Signature: int crt_string.c_compare_mb_chars_ci_FUN_0060c790(char * str1, char * str2)

#include "nocturne.h"

int __cdecl crt_string_c_compare_mb_chars_ci_FUN_0060c790(char *str1,char *str2)

{
  int iVar1;
  char local_10 [4];
  char local_c [4];
  
  crt_mbstring_c_copyMbChar_FUN_0060e590(local_c,str1);
  iVar1 = crt_locale_c_mblen_FUN_00605a40(str1);
  local_c[iVar1] = '\0';
  crt_mbstring_c_copyMbChar_FUN_0060e590(local_10,str2);
  iVar1 = crt_locale_c_mblen_FUN_00605a40(str2);
  local_10[iVar1] = '\0';
  crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0();
  crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0();
  iVar1 = crt_string_c_mbcmp_FUN_0060e640(local_c,local_10);
  return iVar1;
}
