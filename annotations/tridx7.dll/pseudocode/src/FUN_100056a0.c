// Name: FUN_100056a0
// Address: 100056a0
// Address Range: [[100056a0, 100057ec]]
// Convention: unknown
// Signature: undefined4 FUN_100056a0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100056a0(uint param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_10016d64 = GetVersion();
    if (DAT_10016c74 == 0) {
      if (((char)DAT_10016d64 == '\x03') && ((DAT_10016d64 & 0x80000000) != 0)) {
        FUN_100085b0(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_100085b0(1);
        }
      }
    }
    FUN_100078f0();
    _DAT_10016d70 = DAT_10016d64 >> 8 & 0xff;
    _DAT_10016d6c = DAT_10016d64 & 0xff;
    DAT_10016c60 = DAT_10016c60 + 1;
    DAT_10016d64 = DAT_10016d64 >> 0x10;
    _DAT_10016d68 = _DAT_10016d6c * 0x100 + _DAT_10016d70;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_10007910();
      return 0;
    }
    DAT_10241980 = (int)GetCommandLineA();
    DAT_10016c64 = FUN_100083e0();
    if ((DAT_10241980 != 0) && (DAT_10016c64 != 0)) {
      FUN_10007920();
      ___initmbctable();
      __setargv();
      FUN_10007b60();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_10007910();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_10016c60) {
    DAT_10016c60 = DAT_10016c60 + -1;
    if (DAT_10016d9c == 0) {
      FUN_100075e0();
    }
    __ioterm();
    __mtterm();
    FUN_10007910();
    return 1;
  }
  return 0;
}
