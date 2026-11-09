// Name: unkafter_morph.cpp_FUN_005c3628
// Address: 005c3628
// Address Range: [[005c3628, 005c36b0]]
// Convention: unknown
// Signature: int unkafter_morph_cpp_FUN_005c3628(void)

#include "nocturne.h"

int unkafter_morph_cpp_FUN_005c3628(void)

{
  uint uVar1;
  int iVar2;
  HANDLE hConsoleHandle;
  DWORD DStack_c;
  
  iVar2 = DAT_0061f270;
  if (DAT_0061f270 == 0) {
    if (DAT_0061f448 == (code *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(0);
      hConsoleHandle = (HANDLE)unkafter_morph_cpp_FUN_005c4dc0();
      GetConsoleMode(hConsoleHandle,&DStack_c);
      SetConsoleMode(hConsoleHandle,0);
      iVar2 = unkafter_morph_cpp_FUN_005c3510(hConsoleHandle);
      SetConsoleMode(hConsoleHandle,DStack_c);
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(0);
    }
    else {
      uVar1 = (*DAT_0061f414)(0);
      iVar2 = (*DAT_0061f448)(uVar1);
    }
  }
  else {
    DAT_0061f270 = 0;
  }
  return iVar2;
}
