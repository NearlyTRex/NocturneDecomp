// Name: __mtinit
// Address: 10007700
// Address Range: [[10007700, 1000775f]]
// Convention: __cdecl
// Signature: int __cdecl __mtinit(void)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl __mtinit(void)

{
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_ESI;
  
  __mtinitlocks();
  DAT_10016da4 = (pthreadlocinfo)TlsAlloc();
  if (DAT_10016da4 == (pthreadlocinfo)0xffffffff) {
    return 0;
  }
  _Ptd = (_ptiddata)FUN_1000a750(1,0x74);
  if (_Ptd != (_ptiddata)0x0) {
    BVar1 = TlsSetValue((DWORD)DAT_10016da4,_Ptd);
    if (BVar1 != 0) {
      __initptd(_Ptd,unaff_ESI);
      DVar2 = GetCurrentThreadId();
      _Ptd->_tid = DVar2;
      _Ptd->_thandle = 0xffffffff;
      return 1;
    }
  }
  return 0;
}
