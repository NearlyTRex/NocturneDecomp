// Name: FUN_0056fb98
// Address: 0056fb98
// Address Range: [[0056fb98, 0056fc20]]
// Convention: unknown
// Signature: int FUN_0056fb98(void)

#include "nocturne.h"

int FUN_0056fb98(void)

{
  uint uVar1;
  int iVar2;
  HANDLE hConsoleHandle;
  DWORD DStack_c;
  
  iVar2 = DAT_005c1cf8;
  if (DAT_005c1cf8 == 0) {
    if (DAT_005c1d88 == (code *)0x0) {
      (*(code *)PTR_FUN_005c1ac0)(0);
      hConsoleHandle = (HANDLE)FUN_005714e0();
      GetConsoleMode(hConsoleHandle,&DStack_c);
      SetConsoleMode(hConsoleHandle,0);
      iVar2 = FUN_0056fa80(hConsoleHandle);
      SetConsoleMode(hConsoleHandle,DStack_c);
      (*(code *)PTR_FUN_005c1ac4)(0);
    }
    else {
      uVar1 = (*DAT_005c1d54)(0);
      iVar2 = (*DAT_005c1d88)(uVar1);
    }
  }
  else {
    DAT_005c1cf8 = 0;
  }
  return iVar2;
}
