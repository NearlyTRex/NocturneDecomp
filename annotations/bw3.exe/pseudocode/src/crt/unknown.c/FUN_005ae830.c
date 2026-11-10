// Name: crt_unknown.c_FUN_005ae830
// Address: 005ae830
// Address Range: [[005ae830, 005ae895]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ae830(undefined4 param_1)

#include "nocturne.h"

uint FUN_005ae830(uint param_1)

{
  uint uVar1;
  HANDLE hConsoleOutput;
  DWORD DStack_c;
  byte local_8 [4];
  
  local_8[0] = (byte)param_1;
  if (DAT_00607b54 == (code *)0x0) {
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(1);
    hConsoleOutput = (HANDLE)FUN_005afe5c();
    WriteConsoleA(hConsoleOutput,local_8,1,&DStack_c,(LPVOID)0x0);
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(1);
  }
  else {
    uVar1 = (*DAT_00607b18)(1);
    (*DAT_00607b54)(uVar1,param_1);
  }
  return param_1;
}
