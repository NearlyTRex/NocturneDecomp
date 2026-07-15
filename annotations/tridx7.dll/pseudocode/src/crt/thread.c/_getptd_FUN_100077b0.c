// Name: crt_thread.c__getptd_FUN_100077b0
// Address: 100077b0
// Address Range: [[100077b0, 1000781e]]
// Convention: __cdecl
// Signature: _ptiddata __cdecl crt_thread_c__getptd_FUN_100077b0(void)

#include "nocturne.h"

_ptiddata __cdecl _getptd(void)

{
  DWORD dwErrCode;
  _ptiddata ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_EDI;
  
  dwErrCode = GetLastError();
  ptd = TlsGetValue((DWORD)DAT_10016da4);
  if (ptd == (_ptiddata)0x0) {
    ptd = calloc(1,0x74);
    if (ptd != (_ptiddata)0x0) {
      BVar1 = TlsSetValue((DWORD)DAT_10016da4,ptd);
      if (BVar1 != 0) {
        _initptd(ptd,unaff_EDI);
        DVar2 = GetCurrentThreadId();
        ptd->_tid = DVar2;
        ptd->_thandle = 0xffffffff;
        goto LAB_10007813;
      }
    }
    _amsg_exit(0x10);
  }
LAB_10007813:
  SetLastError(dwErrCode);
  return ptd;
}
