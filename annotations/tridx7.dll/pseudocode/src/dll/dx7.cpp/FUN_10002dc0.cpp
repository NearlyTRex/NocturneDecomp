// Name: dll_dx7.cpp_FUN_10002dc0
// Address: 10002dc0
// Address Range: [[10002dc0, 10002e1b]]
// Convention: unknown
// Signature: undefined4 dll_dx7_cpp_FUN_10002dc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint dll_dx7_cpp_FUN_10002dc0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_100141f4 != 0) {
    return 1;
  }
  iVar1 = dll_dx7_cpp_FUN_10002e20(DAT_10014180,&DAT_10226e88);
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
    DAT_100141f4 = 1;
    return 1;
  }
  return 0;
}
