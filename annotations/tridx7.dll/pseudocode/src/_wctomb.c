// Name: _wctomb
// Address: 100091e0
// Address Range: [[100091e0, 10009235]]
// Convention: __cdecl
// Signature: int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  int iVar1;
  bool bVar2;
  ushort in_stack_0000000a;
  
  bVar2 = DAT_10240854 == 0;
  if (bVar2) {
    _DAT_10240858 = _DAT_10240858 + 1;
  }
  else {
    __lock(0x13);
  }
  iVar1 = __wctomb_lk(_MbCh,__WCh);
  if (!bVar2) {
    FUN_10005a10(0x13);
    return iVar1;
  }
  _DAT_10240858 = _DAT_10240858 + -1;
  return iVar1;
}
