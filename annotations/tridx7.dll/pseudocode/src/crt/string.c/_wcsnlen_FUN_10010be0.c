// Name: crt_string.c__wcsnlen_FUN_10010be0
// Address: 10010be0
// Address Range: [[10010be0, 10010c10]]
// Convention: __cdecl
// Signature: size_t __cdecl crt_string_c__wcsnlen_FUN_10010be0(wchar_t *str,size_t max)

#include "nocturne.h"

size_t __cdecl _wcsnlen(wchar_t *str,size_t max)

{
  size_t sVar1;
  wchar_t *pwVar2;
  
  sVar1 = max;
  for (pwVar2 = str; (sVar1 != 0 && (*pwVar2 != L'\0')); pwVar2 = pwVar2 + 1) {
    sVar1 = sVar1 - 1;
  }
  if ((sVar1 != 0) && (*pwVar2 == L'\0')) {
    max = ((int)pwVar2 - (int)str >> 1) + 1;
  }
  return max;
}
