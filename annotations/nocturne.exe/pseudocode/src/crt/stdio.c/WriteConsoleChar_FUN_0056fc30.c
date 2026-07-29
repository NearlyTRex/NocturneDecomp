// Name: crt_stdio.c_WriteConsoleChar_FUN_0056fc30
// Address: 0056fc30
// Address Range: [[0056fc30, 0056fc95]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_WriteConsoleChar_FUN_0056fc30(int character)

#include "nocturne.h"

int __watcallStack WriteConsoleChar(int character)

{
  uint uVar1;
  HANDLE hConsoleOutput;
  DWORD DStack_c;
  byte local_8 [4];
  
  local_8[0] = (byte)character;
  if (DAT_005c1d90 == (code *)0x0) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(1);
    hConsoleOutput = FUN_005714ec();
    WriteConsoleA(hConsoleOutput,local_8,1,&DStack_c,(LPVOID)0x0);
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(1);
  }
  else {
    uVar1 = (*DAT_005c1d54)(1);
    (*DAT_005c1d90)(uVar1,character);
  }
  return character;
}
