// Name: __getptd
// Address: 100077b0
// Address Range: [[100077b0, 1000781e]]
// Convention: __cdecl
// Signature: _ptiddata __cdecl __getptd(void)

#include "nocturne.h"

/* Library Function - Single Match
_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_EDI;
  
  dwErrCode = GetLastError();
  _Ptd = TlsGetValue((DWORD)DAT_10016da4);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = (_ptiddata)FUN_1000a750(1,0x74);
    if (_Ptd != (_ptiddata)0x0) {
      BVar1 = TlsSetValue((DWORD)DAT_10016da4,_Ptd);
      if (BVar1 != 0) {
        __initptd(_Ptd,unaff_EDI);
        DVar2 = GetCurrentThreadId();
        _Ptd->_tid = DVar2;
        _Ptd->_thandle = 0xffffffff;
        goto LAB_10007813;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10007813:
  SetLastError(dwErrCode);
  return _Ptd;
}
