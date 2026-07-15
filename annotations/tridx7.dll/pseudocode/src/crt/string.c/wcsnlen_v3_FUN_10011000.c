// Name: crt_string.c_wcsnlen_v3_FUN_10011000
// Address: 10011000
// Address Range: [[10011000, 10011032]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_wcsnlen_v3_FUN_10011000(wchar_t *str,int max)

#include "nocturne.h"

int __cdecl wcsnlen_v3(wchar_t *str,int max)

{
  int iVar1;
  wchar_t *pwVar2;
  
  pwVar2 = str;
  iVar1 = max;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pwVar2 == L'\0') goto LAB_10011029;
    pwVar2 = pwVar2 + 1;
  }
  if (*pwVar2 == L'\0') {
LAB_10011029:
    max = (int)pwVar2 - (int)str >> 1;
  }
  return max;
}
