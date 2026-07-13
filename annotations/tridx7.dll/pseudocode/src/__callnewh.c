// Name: __callnewh
// Address: 1000ab30
// Address Range: [[1000ab30, 1000ab6d]]
// Convention: __cdecl
// Signature: int __cdecl __callnewh(size_t _Size)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_10240794 != (code *)0x0) {
    iVar1 = (*DAT_10240794)(_Size);
    if (iVar1 != 0) {
      FUN_10005a10(9);
      return 1;
    }
  }
  FUN_10005a10(9);
  return 0;
}
