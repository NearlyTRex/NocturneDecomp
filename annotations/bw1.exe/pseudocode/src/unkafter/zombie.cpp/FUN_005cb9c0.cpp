// Name: unkafter_zombie.cpp_FUN_005cb9c0
// Address: 005cb9c0
// Address Range: [[005cb9c0, 005cba25]]
// Convention: unknown
// Signature: undefined4 unkafter_zombie_cpp_FUN_005cb9c0(undefined4 param_1)

#include "nocturne.h"

uint unkafter_zombie_cpp_FUN_005cb9c0(uint param_1)

{
  uint uVar1;
  HANDLE hConsoleOutput;
  DWORD DStack_c;
  byte local_8 [4];
  
  local_8[0] = (byte)param_1;
  if (DAT_006267b0 == (code *)0x0) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(1);
    hConsoleOutput = (HANDLE)unkafter_zombie_cpp_FUN_005cd0cc();
    WriteConsoleA(hConsoleOutput,local_8,1,&DStack_c,(LPVOID)0x0);
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(1);
  }
  else {
    uVar1 = (*DAT_00626774)(1);
    (*DAT_006267b0)(uVar1,param_1);
  }
  return param_1;
}
