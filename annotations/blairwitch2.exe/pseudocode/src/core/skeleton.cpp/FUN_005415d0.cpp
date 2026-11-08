// Name: FUN_005415d0
// Address: 005415d0
// Address Range: [[005415d0, 00541617]]
// Convention: unknown
// Signature: undefined4 FUN_005415d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005415d0(int param_1)

{
  if (*(int *)(param_1 + 0x2a6c) != 0) {
    return *(uint *)(param_1 + 0x2a6c);
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x2f5;
  FUN_004e4500("Tried to do something with the skeleton, but skeleton ptr not set!");
  return *(uint *)(param_1 + 0x2a6c);
}
