// Name: crt_ctype.c__tolower_FUN_10009b70
// Address: 10009b70
// Address Range: [[10009b70, 10009bdd]]
// Convention: __cdecl
// Signature: int __cdecl crt_ctype_c__tolower_FUN_10009b70(int c)

#include "nocturne.h"

int __cdecl _tolower(int c)

{
  bool bVar1;
  
  if (DAT_10017760 == 0) {
    if ((0x40 < c) && (c < 0x5b)) {
      return c + 0x20;
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
    c = _tolower_lk(c);
    if (!bVar1) {
      _unlock(0x13);
      return c;
    }
    DAT_10240858 = DAT_10240858 + -1;
  }
  return c;
}
