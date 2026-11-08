// Name: FUN_005487e0
// Address: 005487e0
// Address Range: [[005487e0, 00548827]]
// Convention: unknown
// Signature: undefined4 FUN_005487e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005487e0(int param_1)

{
  if (*(int *)(param_1 + 0x35ac) != 0) {
    return *(uint *)(param_1 + 0x35ac);
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x2f6;
  FUN_004e4330("Tried to do something with the skeleton, but skeleton ptr not set!");
  return *(uint *)(param_1 + 0x35ac);
}
