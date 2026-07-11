// Name: FUN_0056fc30
// Address: 0056fc30
// Address Range: [[0056fc30, 0056fc95]]
// Convention: unknown
// Signature: undefined4 FUN_0056fc30(undefined4 param_1)

#include "nocturne.h"

uint FUN_0056fc30(uint param_1)

{
  uint uVar1;
  HANDLE hConsoleOutput;
  DWORD DStack_c;
  byte local_8 [4];
  
  local_8[0] = (byte)param_1;
  if (DAT_005c1d90 == (code *)0x0) {
    (*(code *)PTR_FUN_005c1ac0)(1);
    hConsoleOutput = (HANDLE)FUN_005714ec();
    WriteConsoleA(hConsoleOutput,local_8,1,&DStack_c,(LPVOID)0x0);
    (*(code *)PTR_FUN_005c1ac4)(1);
  }
  else {
    uVar1 = (*DAT_005c1d54)(1);
    (*DAT_005c1d90)(uVar1,param_1);
  }
  return param_1;
}
