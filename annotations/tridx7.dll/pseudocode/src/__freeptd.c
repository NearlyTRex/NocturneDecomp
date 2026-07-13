// Name: __freeptd
// Address: 10007820
// Address Range: [[10007820, 100078c0]]
// Convention: __cdecl
// Signature: void __cdecl __freeptd(_ptiddata _Ptd)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_10016da4 != -1) {
    if ((_Ptd != (_ptiddata)0x0) || (_Ptd = TlsGetValue(DAT_10016da4), _Ptd != (_ptiddata)0x0)) {
      if (_Ptd->_errmsg != (char *)0x0) {
        FUN_10005b30(_Ptd->_errmsg);
      }
      if (_Ptd->_werrmsg != (wchar_t *)0x0) {
        FUN_10005b30(_Ptd->_werrmsg);
      }
      if (_Ptd->_wnamebuf0 != (wchar_t *)0x0) {
        FUN_10005b30(_Ptd->_wnamebuf0);
      }
      if (_Ptd->_wnamebuf1 != (wchar_t *)0x0) {
        FUN_10005b30(_Ptd->_wnamebuf1);
      }
      if (_Ptd->_wasctimebuf != (wchar_t *)0x0) {
        FUN_10005b30(_Ptd->_wasctimebuf);
      }
      if (_Ptd->_gmtimebuf != (void *)0x0) {
        FUN_10005b30(_Ptd->_gmtimebuf);
      }
      FUN_10005b30(_Ptd);
    }
    TlsSetValue(DAT_10016da4,(LPVOID)0x0);
    return;
  }
  return;
}
