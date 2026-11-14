// Name: crt_unknown.c_FUN_005cb928
// Address: 005cb928
// Address Range: [[005cb928, 005cb9b0]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005cb928(void)

#include "nocturne.h"

int FUN_005cb928(void)

{
  uint uVar1;
  int iVar2;
  HANDLE hConsoleHandle;
  DWORD DStack_c;
  
  iVar2 = DAT_006265c8;
  if (DAT_006265c8 == 0) {
    if (DAT_006267a8 == (code *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(0);
      hConsoleHandle = (HANDLE)FUN_005cd0c0();
      GetConsoleMode(hConsoleHandle,&DStack_c);
      SetConsoleMode(hConsoleHandle,0);
      iVar2 = FUN_005cb810(hConsoleHandle);
      SetConsoleMode(hConsoleHandle,DStack_c);
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(0);
    }
    else {
      uVar1 = (*DAT_00626774)(0);
      iVar2 = (*DAT_006267a8)(uVar1);
    }
  }
  else {
    DAT_006265c8 = 0;
  }
  return iVar2;
}
