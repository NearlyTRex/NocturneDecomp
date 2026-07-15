// Name: crt_string.c_wcslen_FUN_1000a930
// Address: 1000a930
// Address Range: [[1000a930, 1000a947]]
// Convention: __cdecl
// Signature: size_t __cdecl crt_string_c_wcslen_FUN_1000a930(wchar_t *str)

#include "nocturne.h"

size_t __cdecl wcslen(wchar_t *str)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = str;
  do {
    pwVar3 = pwVar2 + 1;
    wVar1 = *pwVar2;
    pwVar2 = pwVar3;
  } while (wVar1 != L'\0');
  return ((int)pwVar3 - (int)str >> 1) - 1;
}
