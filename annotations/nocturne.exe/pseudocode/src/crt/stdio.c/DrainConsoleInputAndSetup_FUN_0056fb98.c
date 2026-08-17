// Name: crt_stdio.c_DrainConsoleInputAndSetup_FUN_0056fb98
// Address: 0056fb98
// Address Range: [[0056fb98, 0056fc20]]
// Convention: unknown
// Signature: undefined1 crt_stdio_c_DrainConsoleInputAndSetup_FUN_0056fb98(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

byte DrainConsoleInputAndSetup(void)

{
  uint uVar1;
  int iVar2;
  HANDLE hConsoleHandle;
  DWORD DStack_c;
  
  iVar2 = DAT_005c1cf8;
  if (DAT_005c1cf8 == 0) {
    if (DAT_005c1d88 == (code *)0x0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(0);
      hConsoleHandle = GetConsoleInputHandle();
      GetConsoleMode(hConsoleHandle,&DStack_c);
      SetConsoleMode(hConsoleHandle,0);
      iVar2 = DrainConsoleInputWithBuffering(hConsoleHandle);
      SetConsoleMode(hConsoleHandle,DStack_c);
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(0);
    }
    else {
      uVar1 = (*DAT_005c1d54)(0);
      iVar2 = (*DAT_005c1d88)(uVar1);
    }
  }
  else {
    DAT_005c1cf8 = 0;
  }
  return (char)iVar2;
}
