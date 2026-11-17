// Name: crt_unknown.c_FUN_005ae798
// Address: 005ae798
// Address Range: [[005ae798, 005ae820]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005ae798(void)

#include "nocturne.h"

int FUN_005ae798(void)

{
  uint uVar1;
  int iVar2;
  HANDLE hConsoleHandle;
  DWORD DStack_c;
  
  iVar2 = g_INT_0060796c;
  if (g_INT_0060796c == 0) {
    if (g_PTR_00607b4c == (byte *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(0);
      hConsoleHandle = (HANDLE)FUN_005afe50();
      GetConsoleMode(hConsoleHandle,&DStack_c);
      SetConsoleMode(hConsoleHandle,0);
      iVar2 = FUN_005ae680(hConsoleHandle);
      SetConsoleMode(hConsoleHandle,DStack_c);
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(0);
    }
    else {
      uVar1 = (*(code *)g_PTR_00607b18)(0);
      iVar2 = (*(code *)g_PTR_00607b4c)(uVar1);
    }
  }
  else {
    g_INT_0060796c = 0;
  }
  return iVar2;
}
