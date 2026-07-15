// Name: crt_stdlib.c_wcstombs_FUN_10010910
// Address: 10010910
// Address Range: [[10010910, 1001096a]]
// Convention: __cdecl
// Signature: size_t __cdecl crt_stdlib_c_wcstombs_FUN_10010910(char *mbstr,wchar_t *wcstr,size_t count)

#include "nocturne.h"

size_t __cdecl wcstombs(char *mbstr,wchar_t *wcstr,size_t count)

{
  size_t sVar1;
  bool bVar2;
  
  bVar2 = DAT_10240854 == 0;
  if (bVar2) {
    DAT_10240858 = DAT_10240858 + 1;
  }
  else {
    _lock(0x13);
  }
  sVar1 = _wcstombs_lk(mbstr,wcstr,count);
  if (!bVar2) {
    _unlock(0x13);
    return sVar1;
  }
  DAT_10240858 = DAT_10240858 + -1;
  return sVar1;
}
