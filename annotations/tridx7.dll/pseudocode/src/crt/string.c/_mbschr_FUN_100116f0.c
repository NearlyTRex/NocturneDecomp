// Name: crt_string.c__mbschr_FUN_100116f0
// Address: 100116f0
// Address Range: [[100116f0, 100117a4]]
// Convention: __cdecl
// Signature: uchar * __cdecl crt_string_c__mbschr_FUN_100116f0(uchar *str,uint c)

#include "nocturne.h"

uchar * __cdecl _mbschr(uchar *str,uint c)

{
  byte bVar1;
  uchar *puVar2;
  
  if (DAT_10016edc == 0) {
    puVar2 = (uchar *)strchr((char *)str,c);
    return puVar2;
  }
  _lock(0x19);
  bVar1 = *str;
  while (bVar1 != 0) {
    if ((*(byte *)((int)&DAT_10016dd8 + bVar1 + 1) & 4) == 0) {
      puVar2 = str;
      if ((ushort)bVar1 == c) break;
    }
    else {
      if (str[1] == '\0') {
        _unlock(0x19);
        return (uchar *)0x0;
      }
      puVar2 = str + 1;
      if (CONCAT11(bVar1,str[1]) == c) {
        _unlock(0x19);
        return str;
      }
    }
    str = puVar2 + 1;
    bVar1 = puVar2[1];
  }
  _unlock(0x19);
  return (uchar *)(-(uint)((ushort)bVar1 == c) & (uint)str);
}
