// Name: crt_locale.c__wctomb_FUN_100091e0
// Address: 100091e0
// Address Range: [[100091e0, 10009235]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c__wctomb_FUN_100091e0(char *mb_ch,wchar_t w_ch)

#include "nocturne.h"

int __cdecl _wctomb(char *mb_ch,wchar_t w_ch)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_10240854 == 0;
  if (bVar2) {
    DAT_10240858 = DAT_10240858 + 1;
  }
  else {
    _lock(0x13);
  }
  iVar1 = _wctomb_lk(mb_ch,w_ch);
  if (!bVar2) {
    _unlock(0x13);
    return iVar1;
  }
  DAT_10240858 = DAT_10240858 + -1;
  return iVar1;
}
