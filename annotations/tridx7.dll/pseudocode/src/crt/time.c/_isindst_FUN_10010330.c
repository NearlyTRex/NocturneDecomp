// Name: crt_time.c__isindst_FUN_10010330
// Address: 10010330
// Address Range: [[10010330, 10010357]]
// Convention: __cdecl
// Signature: int __cdecl crt_time_c__isindst_FUN_10010330(tm *tb)

#include "nocturne.h"

int __cdecl _isindst(tm *tb)

{
  int iVar1;
  
  _lock(0xb);
  iVar1 = _isindst_lk(tb);
  _unlock(0xb);
  return iVar1;
}
