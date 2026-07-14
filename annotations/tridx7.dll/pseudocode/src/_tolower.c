// Name: _tolower
// Address: 10009b70
// Address Range: [[10009b70, 10009bdd]]
// Convention: __cdecl
// Signature: int __cdecl _tolower(int _C)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl _tolower(int _C)

{
  bool bVar1;
  
  if (DAT_10017760 == 0) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      return _C + 0x20;
    }
  }
  else {
    bVar1 = DAT_10240854 == 0;
    if (bVar1) {
      DAT_10240858 = DAT_10240858 + 1;
    }
    else {
      __lock(0x13);
    }
    _C = __tolower_lk(_C);
    if (!bVar1) {
      FUN_10005a10(0x13);
      return _C;
    }
    DAT_10240858 = DAT_10240858 + -1;
  }
  return _C;
}
