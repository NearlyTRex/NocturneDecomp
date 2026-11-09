// Name: unkaddr_0059aa80.cpp_FUN_0059ba10
// Address: 0059ba10
// Address Range: [[0059ba10, 0059bac4]]
// Convention: unknown
// Signature: void unkaddr_0059aa80_cpp_FUN_0059ba10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_0059aa80_cpp_FUN_0059ba10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * 5 + 0xc;
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    do {
      iVar1 = iVar1 + 1;
      if (param_2 * 5 + 0x11 <= iVar1) {
        return;
      }
    } while (iVar1 != *(int *)(param_1 + 0x20));
  }
  iVar1 = param_2 * 4 + param_1;
  if (_DAT_026677e4 < _DAT_01c2a37c) {
    iVar2 = *(int *)(iVar1 + 0x34) + 1;
    *(int *)(iVar1 + 0x34) = iVar2;
    if (4 < iVar2) {
      *(uint *)(iVar1 + 0x34) = 4;
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x34) + -1;
    *(int *)(iVar1 + 0x34) = iVar2;
    if (iVar2 < 0) {
      *(uint *)(iVar1 + 0x34) = 0;
    }
  }
  _DAT_026677e4 = _DAT_01c2a37c;
  iVar1 = *(int *)(param_2 * 4 + param_1 + 0x34);
  if ((iVar1 < 4) && (0 < iVar1)) {
    *(uint *)(param_1 + 0x18) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x34 + param_2 * 4) != 4) {
    *(uint *)(param_1 + 0x18) = 3;
    return;
  }
  *(uint *)(param_1 + 0x18) = 2;
  return;
}
