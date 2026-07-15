// Name: crt_stdlib.c_wcstol_FUN_1000fc10
// Address: 1000fc10
// Address Range: [[1000fc10, 1000fc29]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdlib_c_wcstol_FUN_1000fc10(wchar_t *nptr,wchar_t **endptr,int base)

#include "nocturne.h"

long __cdecl wcstol(wchar_t *nptr,wchar_t **endptr,int base)

{
  ulong uVar1;
  
  uVar1 = wcstoxl(nptr,endptr,base,0);
  return uVar1;
}
