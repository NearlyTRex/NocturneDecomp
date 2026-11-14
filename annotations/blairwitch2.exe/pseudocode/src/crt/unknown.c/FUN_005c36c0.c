// Name: crt_unknown.c_FUN_005c36c0
// Address: 005c36c0
// Address Range: [[005c36c0, 005c3725]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c36c0(undefined4 param_1)

#include "nocturne.h"

uint FUN_005c36c0(uint param_1)

{
  uint uVar1;
  HANDLE hConsoleOutput;
  DWORD DStack_c;
  byte local_8 [4];
  
  local_8[0] = (byte)param_1;
  if (DAT_0061f450 == (code *)0x0) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(1);
    hConsoleOutput = (HANDLE)FUN_005c4dcc();
    WriteConsoleA(hConsoleOutput,local_8,1,&DStack_c,(LPVOID)0x0);
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(1);
  }
  else {
    uVar1 = (*DAT_0061f414)(1);
    (*DAT_0061f450)(uVar1,param_1);
  }
  return param_1;
}
