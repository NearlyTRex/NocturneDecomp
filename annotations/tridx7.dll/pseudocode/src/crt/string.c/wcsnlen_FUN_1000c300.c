// Name: crt_string.c_wcsnlen_FUN_1000c300
// Address: 1000c300
// Address Range: [[1000c300, 1000c332]]
// Convention: __cdecl
// Signature: size_t __cdecl crt_string_c_wcsnlen_FUN_1000c300(wchar_t *str,int max)

#include "nocturne.h"

size_t __cdecl wcsnlen(wchar_t *str,int max)

{
  int iVar1;
  wchar_t *pwVar2;
  
  pwVar2 = str;
  iVar1 = max;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pwVar2 == L'\0') goto LAB_1000c329;
    pwVar2 = pwVar2 + 1;
  }
  if (*pwVar2 == L'\0') {
LAB_1000c329:
    max = (int)pwVar2 - (int)str >> 1;
  }
  return max;
}
