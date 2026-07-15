// Name: crt_startup.c_doexit_FUN_10007600
// Address: 10007600
// Address Range: [[10007600, 100076ac]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_doexit_FUN_10007600(int code,int quick,int retcaller)

#include "nocturne.h"

void __cdecl doexit(int code,int quick,int retcaller)

{
  HANDLE hProcess;
  uint *puVar1;
  UINT uExitCode;
  
  _lockexit();
  if (DAT_10016da0 == 1) {
    uExitCode = code;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10016d9c = 1;
  DAT_10016d98 = (byte)retcaller;
  if (quick == 0) {
    if ((DAT_1024197c != (uint *)0x0) &&
       (puVar1 = (uint *)(DAT_10241978 + -4), DAT_1024197c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1024197c <= puVar1);
    }
    _initterm(&DAT_10014024,&DAT_1001402c);
  }
  _initterm(&DAT_10014030,&DAT_10014034);
  if (retcaller != 0) {
    _unlockexit();
    return;
  }
  DAT_10016da0 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(code);
}
