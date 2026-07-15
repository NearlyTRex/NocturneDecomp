// Name: crt_startup.c___CRTDLL_INIT_FUN_100056a0
// Address: 100056a0
// Address Range: [[100056a0, 100057ec]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_startup_c___CRTDLL_INIT_FUN_100056a0(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BOOL __cdecl __CRTDLL_INIT(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (reason == 1) {
    DAT_10016d64 = GetVersion();
    if (DAT_10016c74 == 0) {
      if (((char)DAT_10016d64 == '\x03') && ((DAT_10016d64 & 0x80000000) != 0)) {
        __set_app_type(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          __set_app_type(1);
        }
      }
    }
    _heap_init(unaff_retaddr);
    _DAT_10016d70 = DAT_10016d64 >> 8 & 0xff;
    _DAT_10016d6c = DAT_10016d64 & 0xff;
    DAT_10016c60 = DAT_10016c60 + 1;
    DAT_10016d64 = DAT_10016d64 >> 0x10;
    _DAT_10016d68 = _DAT_10016d6c * 0x100 + _DAT_10016d70;
    iVar2 = _mtinit();
    if (iVar2 == 0) {
      _heap_term();
      return 0;
    }
    DAT_10241980 = (int)GetCommandLineA();
    DAT_10016c64 = __crtGetEnvironmentStringsA();
    if ((DAT_10241980 != 0) && (DAT_10016c64 != (char *)0x0)) {
      _ioinit();
      _initmbctable();
      _setargv();
      _setenvp();
      _cinit(unaff_retaddr);
      return 1;
    }
    _heap_term();
    return 0;
  }
  if (reason != 0) {
    if (reason == 3) {
      _freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_10016c60) {
    DAT_10016c60 = DAT_10016c60 + -1;
    if (DAT_10016d9c == 0) {
      _cexit();
    }
    _ioterm();
    _mtterm();
    _heap_term();
    return 1;
  }
  return 0;
}
