// Name: FUN_005a0e10
// Address: 005a0e10
// Address Range: [[005a0e10, 005a0e7c]]
// Convention: unknown
// Signature: void FUN_005a0e10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a0e10(int param_1)

{
  int iVar1;
  
  FUN_005a0e80(param_1);
  *(uint *)(param_1 + 0x20) = 0x1000;
  iVar1 = FUN_005c08d0(*(int *)(param_1 + 0x20) + 0x1f);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\support\\trstream.cpp";
    _DAT_01d1d404 = 0x62c;
    FUN_005030e0("Out of memory");
  }
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x14) + 0x1fU & 0xffffffe0;
  return;
}
