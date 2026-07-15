// Name: crt_ctype.c_is_wctype_FUN_100108f0
// Address: 100108f0
// Address Range: [[100108f0, 10010902]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c_is_wctype_FUN_100108f0(wint_t c,wctype_t mask)

#include "nocturne.h"

int __cdecl is_wctype(wint_t c,wctype_t mask)

{
  int iVar1;
  
  iVar1 = iswctype(c,mask);
  return iVar1;
}
