// Name: crt_stdlib.c_wcstoul_FUN_1000fe40
// Address: 1000fe40
// Address Range: [[1000fe40, 1000fe59]]
// Convention: __cdecl
// Signature: ulong __cdecl crt_stdlib_c_wcstoul_FUN_1000fe40(wchar_t *nptr,wchar_t **endptr,int base)

#include "nocturne.h"

ulong __cdecl wcstoul(wchar_t *nptr,wchar_t **endptr,int base)

{
  ulong uVar1;
  
  uVar1 = wcstoxl(nptr,endptr,base,1);
  return uVar1;
}
