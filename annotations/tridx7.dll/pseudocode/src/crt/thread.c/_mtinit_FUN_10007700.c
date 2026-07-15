// Name: crt_thread.c__mtinit_FUN_10007700
// Address: 10007700
// Address Range: [[10007700, 1000775f]]
// Convention: __cdecl
// Signature: int __cdecl crt_thread_c__mtinit_FUN_10007700(void)

#include "nocturne.h"

int __cdecl _mtinit(void)

{
  _ptiddata ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_ESI;
  
  _mtinitlocks();
  DAT_10016da4 = (pthreadlocinfo)TlsAlloc();
  if (DAT_10016da4 == (pthreadlocinfo)0xffffffff) {
    return 0;
  }
  ptd = calloc(1,0x74);
  if (ptd != (_ptiddata)0x0) {
    BVar1 = TlsSetValue((DWORD)DAT_10016da4,ptd);
    if (BVar1 != 0) {
      _initptd(ptd,unaff_ESI);
      DVar2 = GetCurrentThreadId();
      ptd->_tid = DVar2;
      ptd->_thandle = 0xffffffff;
      return 1;
    }
  }
  return 0;
}
