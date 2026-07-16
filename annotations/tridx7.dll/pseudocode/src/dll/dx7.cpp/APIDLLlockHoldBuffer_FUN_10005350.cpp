// Name: dll_dx7.cpp_APIDLLlockHoldBuffer_FUN_10005350
// Address: 10005350
// Address Range: [[10005350, 10005392]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLlockHoldBuffer_FUN_10005350(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl dll_dx7_cpp_APIDLLlockHoldBuffer_FUN_10005350(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x5350  22  APIDLLlockHoldBuffer */
  iVar1 = dll_dx7_cpp_FUN_10002e20(DAT_100141b8,&DAT_10226e88);
  if (iVar1 != 0) {
    iVar1 = DAT_10014178;
    iVar2 = DAT_10226eac;
    piVar3 = DAT_10138fb4;
    if (0 < DAT_10014178) {
      do {
        *piVar3 = iVar2;
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + _DAT_10226e98;
        piVar3 = piVar3 + 1;
      } while (iVar1 != 0);
    }
    return 1;
  }
  return 0;
}
