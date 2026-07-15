// Name: crt_thread.c__freeptd_FUN_10007820
// Address: 10007820
// Address Range: [[10007820, 100078c0]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c__freeptd_FUN_10007820(_ptiddata ptd)

#include "nocturne.h"

void __cdecl _freeptd(_ptiddata ptd)

{
  if (DAT_10016da4 != -1) {
    if ((ptd != (_ptiddata)0x0) || (ptd = TlsGetValue(DAT_10016da4), ptd != (_ptiddata)0x0)) {
      if (ptd->_errmsg != (char *)0x0) {
        free(ptd->_errmsg);
      }
      if (ptd->_werrmsg != (wchar_t *)0x0) {
        free(ptd->_werrmsg);
      }
      if (ptd->_wnamebuf0 != (wchar_t *)0x0) {
        free(ptd->_wnamebuf0);
      }
      if (ptd->_wnamebuf1 != (wchar_t *)0x0) {
        free(ptd->_wnamebuf1);
      }
      if (ptd->_wasctimebuf != (wchar_t *)0x0) {
        free(ptd->_wasctimebuf);
      }
      if (ptd->_gmtimebuf != (void *)0x0) {
        free(ptd->_gmtimebuf);
      }
      free(ptd);
    }
    TlsSetValue(DAT_10016da4,(LPVOID)0x0);
    return;
  }
  return;
}
