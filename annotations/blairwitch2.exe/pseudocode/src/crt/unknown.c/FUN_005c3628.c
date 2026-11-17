// Name: crt_unknown.c_FUN_005c3628
// Address: 005c3628
// Address Range: [[005c3628, 005c36b0]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c3628(void)

#include "nocturne.h"

int FUN_005c3628(void)

{
  uint uVar1;
  int iVar2;
  HANDLE hConsoleHandle;
  DWORD DStack_c;
  
  iVar2 = g_ConsoleInitializationFlag;
  if (g_ConsoleInitializationFlag == 0) {
    if (g_SpecialConsoleInputHandler == (byte *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(0);
      hConsoleHandle = (HANDLE)FUN_005c4dc0();
      GetConsoleMode(hConsoleHandle,&DStack_c);
      SetConsoleMode(hConsoleHandle,0);
      iVar2 = FUN_005c3510(hConsoleHandle);
      SetConsoleMode(hConsoleHandle,DStack_c);
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(0);
    }
    else {
      uVar1 = (*(code *)g_IsSpecialDeviceFuncPtr)(0);
      iVar2 = (*(code *)g_SpecialConsoleInputHandler)(uVar1);
    }
  }
  else {
    g_ConsoleInitializationFlag = 0;
  }
  return iVar2;
}
