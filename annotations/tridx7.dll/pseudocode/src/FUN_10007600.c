// Name: FUN_10007600
// Address: 10007600
// Address Range: [[10007600, 100076ac]]
// Convention: unknown
// Signature: void FUN_10007600(UINT param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_10007600(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint *puVar1;
  UINT uExitCode;
  
  FUN_100076c0();
  if (DAT_10016da0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10016d9c = 1;
  DAT_10016d98 = (byte)param_3;
  if (param_2 == 0) {
    if ((DAT_1024197c != (uint *)0x0) &&
       (puVar1 = (uint *)(DAT_10241978 + -4), DAT_1024197c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1024197c <= puVar1);
    }
    __initterm(&DAT_10014024,&DAT_1001402c);
  }
  __initterm(&DAT_10014030,&DAT_10014034);
  if (param_3 != 0) {
    FUN_100076d0();
    return;
  }
  DAT_10016da0 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}
