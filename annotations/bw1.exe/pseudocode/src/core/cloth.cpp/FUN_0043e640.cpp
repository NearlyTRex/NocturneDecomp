// Name: FUN_0043e640
// Address: 0043e640
// Address Range: [[0043e640, 0043e690]]
// Convention: unknown
// Signature: void FUN_0043e640(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e640(int param_1)

{
  int iVar1;
  
  FUN_0043e6a0(param_1);
  iVar1 = FUN_005c1268(*(int *)(param_1 + 0x104) << 2);
  *(int *)(param_1 + 0x3aafc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\cloth.cpp";
  _DAT_01d1d404 = 0x77;
  FUN_005030e0("CCloth::allocMemory - Out of memory");
  return;
}
