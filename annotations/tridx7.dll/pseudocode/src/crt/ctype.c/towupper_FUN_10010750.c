// Name: crt_ctype.c_towupper_FUN_10010750
// Address: 10010750
// Address Range: [[10010750, 100107c4]]
// Convention: __cdecl
// Signature: wint_t __cdecl crt_ctype_c_towupper_FUN_10010750(wint_t c)

#include "nocturne.h"

wint_t __cdecl towupper(wint_t c)

{
  bool bVar1;
  
  if (DAT_10017760 == 0) {
    if ((0x60 < c) && (c < 0x7b)) {
      return c - 0x20;
    }
  }
  else {
    bVar1 = DAT_10240854 == 0;
    if (bVar1) {
      DAT_10240858 = DAT_10240858 + 1;
    }
    else {
      _lock(0x13);
    }
    c = _towupper(c);
    if (!bVar1) {
      _unlock(0x13);
      return c;
    }
    DAT_10240858 = DAT_10240858 + -1;
  }
  return c;
}
