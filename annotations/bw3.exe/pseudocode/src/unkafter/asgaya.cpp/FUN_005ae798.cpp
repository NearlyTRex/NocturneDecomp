// Name: unkafter_asgaya.cpp_FUN_005ae798
// Address: 005ae798
// Address Range: [[005ae798, 005ae820]]
// Convention: unknown
// Signature: int unkafter_asgaya_cpp_FUN_005ae798(void)

#include "nocturne.h"

int unkafter_asgaya_cpp_FUN_005ae798(void)

{
  uint uVar1;
  int iVar2;
  HANDLE hConsoleHandle;
  DWORD DStack_c;
  
  iVar2 = DAT_0060796c;
  if (DAT_0060796c == 0) {
    if (DAT_00607b4c == (code *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(0);
      hConsoleHandle = (HANDLE)unkafter_asgaya_cpp_FUN_005afe50();
      GetConsoleMode(hConsoleHandle,&DStack_c);
      SetConsoleMode(hConsoleHandle,0);
      iVar2 = unkafter_asgaya_cpp_FUN_005ae680(hConsoleHandle);
      SetConsoleMode(hConsoleHandle,DStack_c);
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(0);
    }
    else {
      uVar1 = (*DAT_00607b18)(0);
      iVar2 = (*DAT_00607b4c)(uVar1);
    }
  }
  else {
    DAT_0060796c = 0;
  }
  return iVar2;
}
